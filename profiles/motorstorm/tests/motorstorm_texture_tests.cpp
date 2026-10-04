#include "motorstorm_textures.hpp"

#include <chrono>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <stdexcept>
#include <string_view>
#include <span>
#include <thread>
#include <vector>

namespace motorstorm {
void log_line(std::string_view category, std::string_view message) {
    std::printf("[%.*s] %.*s\n", static_cast<int>(category.size()), category.data(),
                static_cast<int>(message.size()), message.data());
}
}

namespace {
namespace tx = motorstorm::textures;

void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}

void put32(std::vector<std::uint8_t> &file, std::size_t at, std::uint32_t value) {
    std::memcpy(file.data() + at, &value, 4);
}

std::vector<std::uint8_t> dds_header(std::uint32_t width, std::uint32_t height, std::uint32_t mips) {
    std::vector<std::uint8_t> file(128, 0);
    put32(file, 0, 0x20534444u);
    put32(file, 4, 124u);
    put32(file, 12, height);
    put32(file, 16, width);
    put32(file, 28, mips);
    put32(file, 76, 32u);
    return file;
}

std::unique_ptr<tx::Image> wait_for(std::uint64_t hash) {
    for (int attempt = 0; attempt < 500; ++attempt) {
        if (auto image = tx::take_replacement(hash)) return image;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    return nullptr;
}
} // namespace

int main() {
    try {
        // The hash names every dumped and replacement file: pin it.
        std::vector<std::uint32_t> pixels(8);
        for (std::uint32_t i = 0; i < pixels.size(); ++i) pixels[i] = i * 0x01020304u + 0xFF000000u;
        check(tx::content_hash(4, 2, pixels) == 0x3cb43c4985bbd1daull, "Texture hash algorithm is frozen");
        const std::uint32_t white = 0xFFFFFFFFu;
        check(tx::content_hash(1, 1, {&white, 1}) == 0xa978f99d8c4a3348ull, "Odd-length hash tail is frozen");
        check(tx::content_hash(2, 4, pixels) != tx::content_hash(4, 2, pixels), "Dimensions are part of the identity");
        auto faded = pixels;
        for (auto &p : faded) p = (p & 0x00FFFFFFu) | 0x40000000u;
        check(tx::content_hash(4, 2, faded) == tx::content_hash(4, 2, pixels), "Alpha changes keep the identity");
        check(tx::content_hash(4, 1, pixels) == 0x40c7150980d377f8ull, "Row-prefix identity is frozen");
        tx::RowHasher rows(4);
        rows.add_row(pixels.data());
        check(rows.finish(1) == tx::content_hash(4, 1, pixels), "A prefix of a taller texture has the short identity");

        check(tx::hash_name(0x00ab00cd00ef0012ull) == "00ab00cd00ef0012", "Hash names are 16 lowercase hex digits");
        check(tx::parse_hash_name("00AB00CD00EF0012_64x64.png") == 0x00ab00cd00ef0012ull, "Upscaler suffixes are accepted");
        check(tx::parse_hash_name("00ab00cd00ef0012.dds") == 0x00ab00cd00ef0012ull, "Bare hash names are accepted");
        check(!tx::parse_hash_name("00ab00cd00ef001x_64x64.png"), "Non-hex names are ignored");
        check(!tx::parse_hash_name("00ab00cd00ef00123.png"), "Longer hex runs are not truncated into a hash");
        check(!tx::parse_hash_name("index.csv"), "Other files are ignored");

        // Alpha-weighted mips: a transparent black texel must not darken red.
        std::vector<std::uint8_t> rgba{255, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 255, 0, 0, 0, 0};
        const auto chain = tx::build_mip_chain(2, 2, rgba);
        check(chain.size() == 2 && chain[1].width == 1 && chain[1].height == 1, "Mip chain reaches 1x1");
        check(chain[1].data[0] == 255 && chain[1].data[3] == 128, "Mips are alpha weighted");
        check(tx::build_mip_chain(8, 2, std::vector<std::uint8_t>(64, 7)).size() == 4, "Non-square chains reach 1x1");

        // DDS: DX10 BC7 with two mips, and a legacy BGRA layout.
        auto bc7 = dds_header(8, 8, 2);
        put32(bc7, 80, 4u);
        put32(bc7, 84, 0x30315844u);  // "DX10"
        bc7.resize(148, 0);
        put32(bc7, 128, 98u);
        put32(bc7, 132, 3u);
        put32(bc7, 140, 1u);
        bc7.resize(148 + 4 * 16 + 1 * 16, 0x5A);
        std::string error;
        const auto parsed = tx::parse_dds(bc7, error);
        check(parsed && parsed->format == tx::Format::Bc7 && parsed->levels.size() == 2 &&
                  parsed->levels[0].row_pitch == 32 && parsed->levels[0].rows == 2 && parsed->levels[1].data.size() == 16,
              "DX10 BC7 levels use 4x4 block pitch");
        auto bgra = dds_header(1, 1, 1);
        put32(bgra, 80, 0x41u);
        put32(bgra, 88, 32u);
        put32(bgra, 92, 0x00FF0000u);
        put32(bgra, 104, 0xFF000000u);
        bgra.insert(bgra.end(), {10, 20, 30, 40});
        const auto swapped = tx::parse_dds(bgra, error);
        check(swapped && swapped->levels[0].data == std::vector<std::uint8_t>({30, 20, 10, 40}), "BGRA DDS becomes RGBA");
        check(!tx::parse_dds(std::vector<std::uint8_t>(64, 0), error), "Garbage is rejected");

        // Dump -> index -> asynchronous replacement load, through real PNG files.
        const auto root = std::filesystem::temp_directory_path() / "motorstorm_texture_tests";
        std::filesystem::remove_all(root);
        tx::Settings dump_settings;
        dump_settings.dump = true;
        dump_settings.replace = false;
        dump_settings.dump_dir = root / "dump";
        tx::configure(dump_settings);
        std::vector<std::uint32_t> art(16 * 8);
        for (std::uint32_t i = 0; i < art.size(); ++i) art[i] = (i * 37u) | ((i * 11u) << 8u) | 0x80000000u;
        const auto hash = tx::content_hash(16, 8, art);
        tx::dump(hash, 16, 8, art, tx::DumpInfo{5, 3, 1, true, 42});
        tx::dump(hash, 16, 8, art, tx::DumpInfo{});  // duplicate: ignored
        tx::shutdown();                              // flushes the queue
        const auto png = root / "dump" / (tx::hash_name(hash) + "_16x8.png");
        check(std::filesystem::exists(png), "Dump writes <hash>_<w>x<h>.png");
        check(std::filesystem::exists(root / "dump" / "index.csv"), "Dump writes index.csv");
        check(tx::stats().dumped == 1, "Each texture is dumped once");

        tx::Settings replace_settings;
        replace_settings.replace = true;
        replace_settings.replace_dir = root / "dump";
        tx::configure(replace_settings);
        check(tx::replacing() && tx::has_replacement(hash), "Replacement directory is indexed");
        check(!tx::has_replacement(hash ^ 1u), "Unknown hashes have no replacement");
        check(tx::take_replacement(hash) == nullptr, "The first request only queues the load");
        const auto image = wait_for(hash);
        check(image != nullptr, "Replacement decodes asynchronously");
        check(image->format == tx::Format::Rgba8 && image->levels.size() == 5 && image->levels[0].width == 16 &&
                  image->levels[0].height == 8, "Decoded replacement carries a full mip chain");
        check(std::memcmp(image->levels[0].data.data(), art.data(), art.size() * 4) == 0,
              "PNG round trip is lossless, including alpha");
        check(tx::take_replacement(hash ^ 1u) == nullptr, "Missing files never block");
        const auto full = tx::match_replacement(16, 8, art);
        check(full && full->hash == hash && full->rows == 8, "A whole texture matches its own identity");
        tx::shutdown();

        // A replacement made from the first 5 rows (an offline-extracted
        // non-power-of-two image) matches the taller runtime texture.
        const auto prefix_hash = tx::content_hash(16, 5, art);
        tx::Settings prefix_dump;
        prefix_dump.dump = true;
        prefix_dump.replace = false;
        prefix_dump.dump_dir = root / "prefix";
        tx::configure(prefix_dump);
        tx::dump(prefix_hash, 16, 5, std::span(art).first(16 * 5), tx::DumpInfo{});
        tx::shutdown();
        tx::Settings prefix_replace;
        prefix_replace.replace_dir = root / "prefix";
        tx::configure(prefix_replace);
        const auto partial = tx::match_replacement(16, 8, art);
        check(partial && partial->hash == prefix_hash && partial->rows == 5, "Row-prefix replacements match");
        tx::shutdown();
        std::filesystem::remove_all(root);
        std::puts("MotorStorm texture dump/replacement tests passed");
        return 0;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "[FAIL] %s\n", error.what());
        motorstorm::textures::shutdown();
        return 1;
    }
}
