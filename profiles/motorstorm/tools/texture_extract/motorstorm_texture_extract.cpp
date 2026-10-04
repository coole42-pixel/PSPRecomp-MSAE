// MotorStormTextureExtract: dumps every texture on the MotorStorm: Arctic Edge
// disc straight from the game files, without running the game.
//
// Disc layout (USRDIR):
//   *.PAK      "PAK " v1 archives: u32 table/name offsets at 0x34+, entries of
//              {name offset, data offset, size, size}; names follow the table,
//              XOR 0xB5, NUL terminated.
//   *.stf      resource bundles ("STuF", little endian), either stored or
//              "BBZL" = u32 magic, u32 size, 8 reserved, zlib stream.
//   *.PSP_PTX_MAIN  a single texture object.
//
// Texture object (serialized C++ object, 0x80-byte header; 0xCDCDCDCD
// filler words at +0x10 and +0x48):
//   +0x18 u16 width, height          +0x1C u16 log2 width, log2 height (GE size)
//   +0x24 u32 GE texture format      +0x4C u32 format (again)
//   +0x14 u32 self-pointer: object offset within its section + 0x38
//   +0x50 u32 data offset, +0x54 u32 data size, +0x58 u32 palette offset
//         (section-relative; one family stores them relative to the header end)
//   +0x5C u16 width, height          +0x60 u16 row stride in bytes
// Pixels are swizzled and palettes hold 32-bit 8888 entries.
//
// Each texture is decoded through the runtime's GE texel path and named by the
// identity the running game computes, so upscaled copies placed in
// textures/replace load in MotorStormNative.

#include "motorstorm_ge.hpp"
#include "motorstorm_textures.hpp"
#include "psprecomp/deflate.hpp"
#include "psprecomp/guest_memory.hpp"

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <mutex>
#include <optional>
#include <set>
#include <string>
#include <string_view>
#include <thread>
#include <unordered_set>
#include <vector>

namespace motorstorm {
void log_line(std::string_view category, std::string_view message) {
    std::printf("[%.*s] %.*s\n", static_cast<int>(category.size()), category.data(),
                static_cast<int>(message.size()), message.data());
}
} // namespace motorstorm

namespace {
namespace fs = std::filesystem;
namespace tx = motorstorm::textures;

std::uint32_t read32(std::span<const std::uint8_t> d, std::size_t at) {
    std::uint32_t value{};
    if (at + 4u <= d.size()) std::memcpy(&value, d.data() + at, 4);
    return value;
}
std::uint16_t read16(std::span<const std::uint8_t> d, std::size_t at) {
    std::uint16_t value{};
    if (at + 2u <= d.size()) std::memcpy(&value, d.data() + at, 2);
    return value;
}

struct Entry {
    fs::path archive;          // .PAK or loose file
    std::string name;          // path inside the archive (or file name)
    std::uint64_t offset{}, size{};
};

std::vector<Entry> list_pak(const fs::path &path) {
    std::vector<Entry> entries;
    std::ifstream in(path, std::ios::binary);
    std::vector<std::uint8_t> head(0x40000);
    in.read(reinterpret_cast<char *>(head.data()), static_cast<std::streamsize>(head.size()));
    head.resize(static_cast<std::size_t>(in.gcount()));
    if (head.size() < 0x40 || std::memcmp(head.data(), "PAK ", 4) != 0) return entries;
    struct Raw { std::uint32_t name, offset, size; };
    std::vector<Raw> raw;
    std::size_t pos = 0x34;
    for (; pos + 16u <= head.size(); pos += 16u) {
        const auto name = read32(head, pos), offset = read32(head, pos + 4), size = read32(head, pos + 8);
        if (offset == 0u || (offset % 0x800u) != 0u || size == 0u) break;
        raw.push_back({name, offset, size});
    }
    for (const auto &r : raw) {
        std::string name;
        for (std::size_t i = pos + r.name; i < head.size(); ++i) {
            const auto c = static_cast<char>(head[i] ^ 0xB5u);
            if (c == '\0') break;
            name.push_back(c);
        }
        entries.push_back({path, name, r.offset, r.size});
    }
    return entries;
}

// zlib stream -> bytes, through the project's raw DEFLATE decoder.
std::optional<std::vector<std::uint8_t>> inflate_bbzl(std::span<const std::uint8_t> file) {
    const auto expected = read32(file, 4);
    if (file.size() < 18u || expected == 0u || expected > 24u * 1024u * 1024u) return std::nullopt;
    thread_local psprecomp::GuestMemory memory(32u * 1024u * 1024u);
    constexpr std::uint32_t kInput = 0x08000000u, kOutput = 0x08000000u + 0x00800000u;
    const auto compressed = file.subspan(18);  // 16-byte header + 2-byte zlib header
    if (compressed.size() > 0x00800000u) return std::nullopt;
    memory.copy_in(kInput, compressed);
    const auto result = psprecomp::inflate_raw_deflate(memory, kOutput, 0x01800000u, kInput);
    if (result.status != psprecomp::RawDeflateStatus::Ok || result.output_size != expected) return std::nullopt;
    std::vector<std::uint8_t> out(result.output_size);
    memory.copy_out(kOutput, out);
    return out;
}

struct Texture {
    std::size_t base{};
    std::uint32_t width{}, height{}, width_log2{}, height_log2{}, format{}, stride_bytes{};
    std::size_t data{}, data_size{}, clut{};
};

// Texture objects: 0xCDCDCDCD filler at +0x10 and +0x48 (followed by a
// self-pointer whose base depends on the object's section, so it is not
// matched), validated by the redundant size/format fields. Data/palette
// offsets are section-relative (see the self-pointer note below).
std::vector<Texture> find_textures(std::span<const std::uint8_t> d) {
    std::vector<Texture> found;
    for (std::size_t i = 0x10; i + 4u <= d.size(); i += 4u) {
        if (read32(d, i) != 0xCDCDCDCDu) continue;
        Texture t;
        t.base = i - 0x10u;
        if (t.base + 0x80u > d.size() || read32(d, t.base + 0x48) != 0xCDCDCDCDu) continue;
        t.width = read16(d, t.base + 0x18);
        t.height = read16(d, t.base + 0x1A);
        t.width_log2 = read16(d, t.base + 0x1C);
        t.height_log2 = read16(d, t.base + 0x1E);
        t.format = read32(d, t.base + 0x24);
        const auto format2 = read32(d, t.base + 0x4C);
        const auto data_offset = read32(d, t.base + 0x50);
        t.data_size = read32(d, t.base + 0x54);
        const auto clut_offset = read32(d, t.base + 0x58);
        t.stride_bytes = read16(d, t.base + 0x60);
        const bool sane = t.format == format2 && t.format <= 7u && t.width_log2 >= 1u && t.width_log2 <= 10u &&
                          t.height_log2 >= 1u && t.height_log2 <= 10u && t.width != 0u && t.height != 0u &&
                          t.width <= (1u << t.width_log2) && t.height <= (1u << t.height_log2) &&
                          read16(d, t.base + 0x5C) == t.width && read16(d, t.base + 0x5E) == t.height &&
                          t.stride_bytes != 0u && t.data_size != 0u;
        if (!sane) continue;
        // +0x14 is a self-pointer (object offset within its section + 0x38);
        // data/palette offsets are relative to that section. One object family
        // (self-pointer 0x38, offsets from 0) stores data right after the header.
        const auto self = read32(d, t.base + 0x14);
        const bool sectioned = self >= 0x38u && self - 0x38u <= t.base;
        const auto section = sectioned ? t.base - (self - 0x38u) : t.base;
        t.data = section + data_offset;
        if (!sectioned || t.data < t.base + 0x80u) t.data = t.base + 0x80u + data_offset;
        const bool paletted = t.format >= 4u && t.format <= 7u;
        t.clut = paletted ? t.data + (clut_offset - data_offset) : 0u;
        if (t.data + t.data_size > d.size() || (paletted && (clut_offset < data_offset || t.clut >= d.size())))
            continue;
        found.push_back(t);
        i = t.base + 0x7Cu;
    }
    return found;
}

// Vehicle textures ship with authoring placeholder palettes (16-step ramps
// such as 0000FF, 1111EE, 2222DD...); the game draws them with palettes chosen
// at runtime (liveries), so the stored look is not what players see.
bool placeholder_palette(std::span<const std::uint8_t> clut) {
    if (clut.size() < 16u * 4u) return false;
    bool changes = false;
    for (int channel = 0; channel < 3; ++channel) {
        const int step = static_cast<int>(clut[4 + channel]) - static_cast<int>(clut[channel]);
        if (step != 0 && step != 17 && step != -17) return false;
        changes = changes || step != 0;
        for (int k = 1; k < 16; ++k)
            if (static_cast<int>(clut[k * 4 + channel]) - static_cast<int>(clut[(k - 1) * 4 + channel]) != step)
                return false;
    }
    return changes;
}

std::uint32_t bits_per_texel(std::uint32_t format) {
    switch (format) {
    case 3: case 7: return 32;
    case 4: return 4;
    case 5: return 8;
    default: return 16;
    }
}

struct Shared {
    fs::path output;
    bool by_source{};
    std::mutex mutex;
    std::unordered_set<std::uint64_t> written;
    std::ofstream index;
    std::atomic<std::uint64_t> objects{}, unique{}, duplicates{}, failed{};
};

std::string sanitize(std::string name) {
    for (auto &c : name)
        if (c == '\\' || c == '/' || c == ':' || c == '*' || c == '?' || c == '"' || c == '<' || c == '>' || c == '|')
            c = '_';
    return name;
}

void extract_blob(Shared &shared, const std::string &source, std::span<const std::uint8_t> blob) {
    for (const auto &t : find_textures(blob)) {
        ++shared.objects;
        const auto bpp = bits_per_texel(t.format);
        motorstorm::GeTextureSource src;
        src.format = t.format;
        src.width_log2 = t.width_log2;
        src.height_log2 = t.height_log2;
        src.stride = t.stride_bytes * 8u / bpp;
        src.swizzled = true;
        // The game draws the object in place, so reads past the image see the
        // rest of the loaded file exactly as here.
        src.bytes = blob.subspan(t.data);
        if (t.clut)
            src.clut = blob.subspan(t.clut, std::min<std::size_t>(1024u, blob.size() - t.clut));
        const auto texels = motorstorm::ge_decode_texture(src, t.height);
        const auto ge_width = 1u << t.width_log2;
        if (texels.size() != static_cast<std::size_t>(ge_width) * t.height) {
            ++shared.failed;
            continue;
        }
        const auto hash = tx::content_hash(ge_width, t.height, texels);
        {
            std::lock_guard lock(shared.mutex);
            if (!shared.written.insert(hash).second) {
                ++shared.duplicates;
                continue;
            }
        }
        std::vector<std::uint32_t> image(static_cast<std::size_t>(t.width) * t.height);
        for (std::uint32_t y = 0; y < t.height; ++y)
            std::copy_n(texels.begin() + static_cast<std::ptrdiff_t>(y) * ge_width, t.width,
                        image.begin() + static_cast<std::ptrdiff_t>(y) * t.width);
        const auto file = tx::hash_name(hash) + "_" + std::to_string(t.width) + "x" + std::to_string(t.height) + ".png";
        const bool placeholder = placeholder_palette(src.clut);
        fs::path folder = shared.output;
        if (shared.by_source) {
            // Tracks all use Track.PSP_LANDSCAPE_MAIN: name those by their folder.
            auto parts = source;
            std::replace(parts.begin(), parts.end(), '\\', '/');
            auto stem = parts.substr(parts.find_last_of('/') + 1u);
            stem = stem.substr(0, stem.find_last_of('.'));
            if (stem == "Track" && parts.find('/') != std::string::npos) {
                const auto parent = parts.substr(0, parts.find_last_of('/'));
                stem = parent.substr(parent.find_last_of('/') + 1u);
            }
            folder /= sanitize(stem);
        }
        if (placeholder) folder /= "runtime_palette";
        std::error_code ec;
        fs::create_directories(folder, ec);
        if (!fs::exists(folder / file) && !tx::save_png(folder / file, t.width, t.height, image)) {
            ++shared.failed;
            continue;
        }
        ++shared.unique;
        static const char *const kFormats[] = {"5650", "5551", "4444", "8888", "CLUT4", "CLUT8", "CLUT16", "CLUT32"};
        std::lock_guard lock(shared.mutex);
        shared.index << fs::relative(folder / file, shared.output).generic_string() << ',' << t.width << ','
                     << t.height << ',' << ge_width << ',' << (1u << t.height_log2) << ',' << kFormats[t.format]
                     << ",\"" << source << "\"," << t.base << ',' << (placeholder ? "runtime" : "stored") << '\n';
    }
}

void process(Shared &shared, const Entry &entry) {
    std::ifstream in(entry.archive, std::ios::binary);
    in.seekg(static_cast<std::streamoff>(entry.offset));
    std::vector<std::uint8_t> data(static_cast<std::size_t>(entry.size));
    in.read(reinterpret_cast<char *>(data.data()), static_cast<std::streamsize>(data.size()));
    if (data.size() >= 16u && std::memcmp(data.data(), "BBZL", 4) == 0) {
        auto inflated = inflate_bbzl(data);
        if (!inflated) {
            std::printf("[EXTRACT] cannot decompress %s\n", entry.name.c_str());
            ++shared.failed;
            return;
        }
        data = std::move(*inflated);
    }
    extract_blob(shared, entry.name, data);
}

int usage() {
    std::puts("usage: MotorStormTextureExtract <disc0 or USRDIR folder> <output folder> [--flat] [--threads N]\n"
              "Writes <hash>_<w>x<h>.png for every texture on the disc plus index.csv.");
    return 2;
}
} // namespace

int main(int argc, char **argv) {
    if (argc < 3) return usage();
    fs::path disc = argv[1];
    Shared shared;
    shared.output = argv[2];
    shared.by_source = true;
    unsigned threads = std::max(1u, std::thread::hardware_concurrency());
    for (int i = 3; i < argc; ++i) {
        const std::string_view arg = argv[i];
        if (arg == "--flat") shared.by_source = false;
        else if (arg == "--threads" && i + 1 < argc) threads = std::max(1, std::atoi(argv[++i]));
        else return usage();
    }
    for (const auto &candidate : {disc / "PSP_GAME" / "USRDIR", disc / "USRDIR", disc})
        if (fs::exists(candidate / "FE.PAK") || fs::exists(candidate / "MAIN.PAK")) { disc = candidate; break; }
    if (!fs::exists(disc / "FE.PAK") && !fs::exists(disc / "MAIN.PAK")) {
        std::fprintf(stderr, "No MotorStorm PAK archives in %s\n", disc.string().c_str());
        return 1;
    }
    std::vector<Entry> entries;
    for (const auto &item : fs::directory_iterator(disc)) {
        if (!item.is_regular_file()) continue;
        auto extension = item.path().extension().string();
        std::transform(extension.begin(), extension.end(), extension.begin(),
                       [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
        if (extension == ".PAK") {
            for (auto &entry : list_pak(item.path())) {
                auto lower = entry.name;
                std::transform(lower.begin(), lower.end(), lower.begin(),
                               [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
                // Only containers that hold texture objects (see the survey in
                // docs/TEXTURE_PACKS.md); skips audio, video and text.
                if (lower.ends_with(".stf") || lower.ends_with(".psp_ptx_main") || lower.ends_with(".psp_landscape_main"))
                    entries.push_back(std::move(entry));
            }
        } else if (extension == ".PSP_PTX_MAIN") {
            entries.push_back({item.path(), item.path().filename().string(), 0, item.file_size()});
        }
    }
    std::error_code ec;
    fs::create_directories(shared.output, ec);
    const auto index_path = shared.output / "index.csv";
    shared.index.open(index_path, std::ios::trunc);
    shared.index << "file,width,height,ge_width,ge_height,psp_format,source,object_offset,palette\n";
    // Larger bundles first so the pool finishes evenly.
    std::sort(entries.begin(), entries.end(), [](const Entry &a, const Entry &b) { return a.size > b.size; });
    std::atomic<std::size_t> next{0};
    std::vector<std::thread> pool;
    for (unsigned i = 0; i < std::min<std::size_t>(threads, entries.size()); ++i)
        pool.emplace_back([&] {
            for (std::size_t n; (n = next++) < entries.size();) {
                try {
                    process(shared, entries[n]);
                } catch (const std::exception &error) {
                    std::printf("[EXTRACT] %s: %s\n", entries[n].name.c_str(), error.what());
                    ++shared.failed;
                }
            }
        });
    for (auto &thread : pool) thread.join();
    std::printf("Scanned %zu files: %llu texture objects, %llu unique textures written to %s "
                "(%llu duplicates, %llu failed). Index: %s\n",
                entries.size(), static_cast<unsigned long long>(shared.objects.load()),
                static_cast<unsigned long long>(shared.unique.load()), shared.output.string().c_str(),
                static_cast<unsigned long long>(shared.duplicates.load()),
                static_cast<unsigned long long>(shared.failed.load()), index_path.string().c_str());
    return shared.failed ? 3 : 0;
}
