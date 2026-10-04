#include "motorstorm_textures.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <wincodec.h>
#include <wrl/client.h>

#include <algorithm>
#include <cctype>
#include <iterator>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <unordered_set>

namespace motorstorm {
// Defined by the bootstrap (thread-safe); tests provide their own.
void log_line(std::string_view category, std::string_view message);
}

namespace motorstorm::textures {
namespace {
using Microsoft::WRL::ComPtr;

constexpr std::uint32_t kMaxDimension = 16384u;
// PNG decoding and mip building run here; DDS packs only read files. More
// threads measured worse: they compete with emulation for the CPU (audio
// underruns at race start went from 4 to 106 with 6 threads).
std::size_t loader_threads() {
    if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_TEXTURE_THREADS"); value && *value)
        return std::clamp<std::size_t>(std::strtoull(value, nullptr, 10), 1u, 16u);
    return 2u;
}
constexpr std::size_t kMaxQueuedDumps = 256u;  // beyond this, drop rather than grow memory

enum class LoadState : std::uint8_t { Queued, Ready, Failed };

struct DumpJob {
    std::uint64_t hash{};
    std::uint32_t width{}, height{};
    std::vector<std::uint32_t> rgba;
    DumpInfo info;
};

struct Manager {
    std::mutex mutex;
    std::condition_variable work;
    Settings settings;
    bool configured{}, stopping{};
    std::atomic<bool> dumping{}, replacing{};
    struct IndexEntry { std::filesystem::path path; std::uint32_t cover_width{}; };
    std::unordered_map<std::uint64_t, IndexEntry> index;
    std::unordered_set<std::uint64_t> dumped;
    std::deque<DumpJob> dumps;
    std::deque<std::uint64_t> loads;
    std::unordered_map<std::uint64_t, LoadState> state;
    std::unordered_map<std::uint64_t, std::unique_ptr<Image>> ready;
    std::vector<std::thread> workers;
    struct IdentifyJob {
        std::uint64_t key{};
        std::uint32_t width{}, height{};
        std::vector<std::uint32_t> rgba;
        DumpInfo info;
    };
    std::deque<IdentifyJob> identify;
    std::vector<Identified> identified;
    bool identify_worker{};
    std::atomic<std::uint64_t> dumped_count{}, loaded_count{}, failed_count{}, load_microseconds{};
};
Manager &manager() {
    static Manager instance;
    return instance;
}

bool enabled(const char *name, bool fallback) {
    const char *value = std::getenv(name);
    if (value == nullptr || *value == char{}) return fallback;
    const std::string_view text(value);
    return !(text == "0" || text == "false" || text == "off" || text == "no");
}

struct ComScope {
    HRESULT result;
    ComScope() : result(CoInitializeEx(nullptr, COINIT_MULTITHREADED)) {}
    ~ComScope() { if (SUCCEEDED(result)) CoUninitialize(); }
};

ComPtr<IWICImagingFactory> wic_factory() {
    ComPtr<IWICImagingFactory> factory;
    if (FAILED(CoCreateInstance(CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&factory))))
        return nullptr;
    return factory;
}

// Returns S_OK or the first failing WIC call's result (logged by the caller).
HRESULT write_png(IWICImagingFactory *factory, const std::filesystem::path &path, std::uint32_t width,
                  std::uint32_t height, const std::uint32_t *rgba, const char *&step) {
    ComPtr<IWICStream> stream;
    ComPtr<IWICBitmapEncoder> encoder;
    ComPtr<IWICBitmapFrameEncode> frame;
    ComPtr<IPropertyBag2> properties;
    HRESULT result = S_OK;
    const auto call = [&](HRESULT value, const char *name) {
        if (SUCCEEDED(result) && FAILED(value)) { result = value; step = name; }
        return SUCCEEDED(result);
    };
    if (!call(factory->CreateStream(&stream), "CreateStream") ||
        !call(stream->InitializeFromFilename(path.wstring().c_str(), GENERIC_WRITE), "open file") ||
        !call(factory->CreateEncoder(GUID_ContainerFormatPng, nullptr, &encoder), "CreateEncoder") ||
        !call(encoder->Initialize(stream.Get(), WICBitmapEncoderNoCache), "encoder Initialize") ||
        !call(encoder->CreateNewFrame(&frame, &properties), "CreateNewFrame") ||
        !call(frame->Initialize(properties.Get()), "frame Initialize") ||
        !call(frame->SetSize(width, height), "SetSize"))
        return result;
    WICPixelFormatGUID format = GUID_WICPixelFormat32bppRGBA;
    if (!call(frame->SetPixelFormat(&format), "SetPixelFormat")) return result;
    std::vector<std::uint8_t> converted;
    const BYTE *pixels = reinterpret_cast<const BYTE *>(rgba);
    if (format != GUID_WICPixelFormat32bppRGBA) {
        if (format != GUID_WICPixelFormat32bppBGRA) { step = "pixel format"; return E_FAIL; }
        // Encoder only takes BGRA: swap red and blue.
        converted.assign(pixels, pixels + static_cast<std::size_t>(width) * height * 4u);
        for (std::size_t i = 0; i < converted.size(); i += 4u) std::swap(converted[i], converted[i + 2u]);
        pixels = converted.data();
    }
    const UINT stride = width * 4u;
    call(frame->WritePixels(height, stride, stride * height, const_cast<BYTE *>(pixels)), "WritePixels");
    call(frame->Commit(), "frame Commit");
    call(encoder->Commit(), "encoder Commit");
    return result;
}

std::optional<Image> decode_wic(IWICImagingFactory *factory, const std::filesystem::path &path, std::string &error) {
    ComPtr<IWICBitmapDecoder> decoder;
    ComPtr<IWICBitmapFrameDecode> frame;
    ComPtr<IWICFormatConverter> converter;
    if (FAILED(factory->CreateDecoderFromFilename(path.wstring().c_str(), nullptr, GENERIC_READ,
                                                  WICDecodeMetadataCacheOnDemand, &decoder)) ||
        FAILED(decoder->GetFrame(0, &frame)) || FAILED(factory->CreateFormatConverter(&converter)) ||
        FAILED(converter->Initialize(frame.Get(), GUID_WICPixelFormat32bppRGBA, WICBitmapDitherTypeNone, nullptr,
                                     0.0, WICBitmapPaletteTypeCustom))) {
        error = "cannot decode image";
        return std::nullopt;
    }
    UINT width{}, height{};
    converter->GetSize(&width, &height);
    if (width == 0 || height == 0 || width > kMaxDimension || height > kMaxDimension) {
        error = "unsupported dimensions " + std::to_string(width) + "x" + std::to_string(height);
        return std::nullopt;
    }
    std::vector<std::uint8_t> pixels(static_cast<std::size_t>(width) * height * 4u);
    if (FAILED(converter->CopyPixels(nullptr, width * 4u, static_cast<UINT>(pixels.size()), pixels.data()))) {
        error = "cannot read pixels";
        return std::nullopt;
    }
    Image image;
    image.format = Format::Rgba8;
    image.no_alpha = true;
    for (std::size_t i = 3; i < pixels.size(); i += 4u)
        if (pixels[i] != 0u) { image.no_alpha = false; break; }
    image.levels = build_mip_chain(width, height, std::move(pixels));
    return image;
}

std::optional<Image> load_file(IWICImagingFactory *factory, const std::filesystem::path &path, std::string &error) {
    auto extension = path.extension().string();
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    if (extension == ".dds") {
        std::ifstream in(path, std::ios::binary);
        std::vector<std::uint8_t> file((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
        auto image = parse_dds(file, error);
        // An uncompressed DDS without mips still benefits from a generated chain.
        if (image && image->format == Format::Rgba8 && image->levels.size() == 1u) {
            auto &base = image->levels[0];
            image->levels = build_mip_chain(base.width, base.height, std::move(base.data));
        }
        return image;
    }
    if (factory == nullptr) {
        error = "Windows Imaging Component unavailable";
        return std::nullopt;
    }
    return decode_wic(factory, path, error);
}

void append_index(const std::filesystem::path &directory, const DumpJob &job) {
    static const char *const kFormats[] = {"5650", "5551", "4444", "8888", "CLUT4", "CLUT8",
                                           "CLUT16", "CLUT32", "DXT1", "DXT3", "DXT5"};
    const auto path = directory / "index.csv";
    const bool fresh = !std::filesystem::exists(path);
    std::ofstream out(path, std::ios::app);
    if (fresh) out << "file,width,height,psp_format,clut_format,psp_mips,swizzled,first_ge_list\n";
    const auto format = job.info.psp_format < std::size(kFormats) ? kFormats[job.info.psp_format] : "?";
    out << hash_name(job.hash) << '_' << job.width << 'x' << job.height << ".png," << job.width << ','
        << job.height << ',' << format << ',' << job.info.clut_format << ',' << job.info.mip_levels << ','
        << (job.info.swizzled ? 1 : 0) << ',' << job.info.first_ge_list << '\n';
}

void worker(bool dump_worker) {
    // Background work: never take CPU time from the emulation thread.
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL);
    ComScope com;
    const auto factory = wic_factory();
    auto &m = manager();
    std::unique_lock lock(m.mutex);
    for (;;) {
        m.work.wait(lock, [&] {
            return m.stopping || (dump_worker ? !m.dumps.empty() : !m.loads.empty());
        });
        if (dump_worker && !m.dumps.empty()) {
            DumpJob job = std::move(m.dumps.front());
            m.dumps.pop_front();
            const auto directory = m.settings.dump_dir;
            lock.unlock();
            const auto name = hash_name(job.hash) + "_" + std::to_string(job.width) + "x" +
                              std::to_string(job.height) + ".png";
            const auto temporary = directory / (name + ".tmp");
            std::error_code ec;
            const char *step = "WIC factory";
            const HRESULT written = factory ? write_png(factory.Get(), temporary, job.width, job.height,
                                                        job.rgba.data(), step) : E_FAIL;
            if (SUCCEEDED(written)) {
                std::filesystem::rename(temporary, directory / name, ec);
                if (!ec) {
                    append_index(directory, job);
                    ++m.dumped_count;
                }
            } else {
                std::filesystem::remove(temporary, ec);
                char code[16]{};
                std::snprintf(code, sizeof(code), "%08lX", static_cast<unsigned long>(written));
                log_line("TEXTURE", "dump failed: " + (directory / name).string() + " (" + step + " 0x" + code + ")");
            }
            lock.lock();
            continue;
        }
        if (!dump_worker && !m.loads.empty()) {
            const auto hash = m.loads.front();
            m.loads.pop_front();
            const auto found = m.index.find(hash);
            const auto path = found != m.index.end() ? found->second.path : std::filesystem::path{};
            lock.unlock();
            const auto start = std::chrono::steady_clock::now();
            std::string error;
            auto image = path.empty() ? std::nullopt : load_file(factory.Get(), path, error);
            const auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::steady_clock::now() - start).count();
            m.load_microseconds += static_cast<std::uint64_t>(elapsed);
            lock.lock();
            if (image) {
                image->source = path;
                m.ready[hash] = std::make_unique<Image>(std::move(*image));
                m.state[hash] = LoadState::Ready;
                ++m.loaded_count;
            } else {
                m.state[hash] = LoadState::Failed;
                ++m.failed_count;
                lock.unlock();
                log_line("TEXTURE", "replacement rejected: " + path.string() + " (" + error + ")");
                lock.lock();
            }
            continue;
        }
        if (m.stopping) return;
    }
}

void build_index(Manager &m) {
    m.index.clear();
    std::error_code ec;
    if (!m.settings.replace || !std::filesystem::is_directory(m.settings.replace_dir, ec)) return;
    const auto rank = [](const std::filesystem::path &path) {
        auto extension = path.extension().string();
        std::transform(extension.begin(), extension.end(), extension.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        if (extension == ".dds") return 2;  // pre-compressed: no decode, smallest upload
        if (extension == ".png" || extension == ".jpg" || extension == ".jpeg" || extension == ".bmp" ||
            extension == ".tif" || extension == ".tiff")
            return 1;
        return 0;
    };
    for (auto it = std::filesystem::recursive_directory_iterator(
             m.settings.replace_dir, std::filesystem::directory_options::skip_permission_denied, ec);
         !ec && it != std::filesystem::recursive_directory_iterator(); it.increment(ec)) {
        if (!it->is_regular_file(ec)) continue;
        const auto &path = it->path();
        const int score = rank(path);
        if (score == 0) continue;
        const auto hash = parse_hash_name(path.filename().string());
        if (!hash) continue;
        const auto existing = m.index.find(*hash);
        if (existing == m.index.end() || rank(existing->second.path) < score)
            m.index[*hash] = Manager::IndexEntry{path, parse_cover_size(path.filename().string()).first};
    }
}

void scan_dumped(Manager &m) {
    m.dumped.clear();
    std::error_code ec;
    if (!m.settings.dump) return;
    std::filesystem::create_directories(m.settings.dump_dir, ec);
    for (const auto &entry : std::filesystem::directory_iterator(m.settings.dump_dir, ec))
        if (const auto hash = parse_hash_name(entry.path().filename().string())) m.dumped.insert(*hash);
}
} // namespace

bool save_png(const std::filesystem::path &path, std::uint32_t width, std::uint32_t height,
              std::span<const std::uint32_t> rgba) {
    if (rgba.size() < static_cast<std::size_t>(width) * height) return false;
    thread_local ComScope com;
    thread_local const auto factory = wic_factory();
    if (!factory) return false;
    const char *step = "";
    const auto temporary = path.string() + ".tmp";
    if (FAILED(write_png(factory.Get(), temporary, width, height, rgba.data(), step))) {
        std::error_code ec;
        std::filesystem::remove(temporary, ec);
        return false;
    }
    std::error_code ec;
    std::filesystem::rename(temporary, path, ec);
    return !ec;
}

std::uint64_t Image::bytes() const noexcept {
    std::uint64_t total = 0;
    for (const auto &level : levels) total += level.data.size();
    return total;
}

void configure(const Settings &settings) {
    shutdown();
    auto &m = manager();
    {
        std::lock_guard lock(m.mutex);
        m.settings = settings;
        m.stopping = false;
        m.state.clear();
        m.ready.clear();
        m.loads.clear();
        m.dumps.clear();
        build_index(m);
        scan_dumped(m);
        m.dumping = settings.dump;
        m.replacing = settings.replace && !m.index.empty();
        m.configured = true;
    }
    if (m.dumping) m.workers.emplace_back(worker, true);
    if (m.replacing)
        for (std::size_t i = 0; i < loader_threads(); ++i) m.workers.emplace_back(worker, false);
    log_line("TEXTURE", std::string("dump=") + (m.dumping ? "on (" + settings.dump_dir.string() + ", " +
                                                  std::to_string(m.dumped.size()) + " already dumped)" : "off") +
                        " replace=" + (settings.replace ? std::to_string(m.index.size()) + " file(s) in " +
                                                              settings.replace_dir.string() : "off"));
}

void configure_from_environment() {
    Settings settings;
    settings.dump = enabled("PSPRECOMP_MOTORSTORM_TEXTURE_DUMP", false);
    settings.replace = enabled("PSPRECOMP_MOTORSTORM_TEXTURE_REPLACE", true);
    if (const char *dir = std::getenv("PSPRECOMP_MOTORSTORM_TEXTURE_DUMP_DIR"); dir && *dir) settings.dump_dir = dir;
    if (const char *dir = std::getenv("PSPRECOMP_MOTORSTORM_TEXTURE_REPLACE_DIR"); dir && *dir)
        settings.replace_dir = dir;
    if (const char *mb = std::getenv("PSPRECOMP_MOTORSTORM_TEXTURE_BUDGET_MB"); mb && *mb)
        settings.budget_bytes = std::max<std::uint64_t>(64u, std::strtoull(mb, nullptr, 10)) * 1024ull * 1024ull;
    configure(settings);
}

void shutdown() noexcept {
    auto &m = manager();
    {
        std::lock_guard lock(m.mutex);
        m.stopping = true;
        m.loads.clear();  // pending dumps are still written below
        m.identify.clear();
        m.identified.clear();
    }
    m.work.notify_all();
    for (auto &thread : m.workers)
        if (thread.joinable()) thread.join();
    m.workers.clear();
    m.identify_worker = false;
    m.dumping = false;
    m.replacing = false;
}

bool dumping() noexcept { return manager().dumping.load(std::memory_order_relaxed); }
bool replacing() noexcept { return manager().replacing.load(std::memory_order_relaxed); }
std::uint64_t budget_bytes() noexcept { return manager().settings.budget_bytes; }

// Fixed algorithm: changing it renames every dumped and replacement texture.
RowHasher::RowHasher(std::uint32_t width) noexcept
    : width_(width), state_(0x9E3779B97F4A7C15ull ^ (static_cast<std::uint64_t>(width) << 32u)) {}

// Colour only: the game rewrites palette alpha at runtime (fades, generated
// alpha, load-time fix-ups), so alpha would make offline and runtime differ.
void RowHasher::add_row(const std::uint32_t *row) noexcept {
    const auto mix = [&](std::uint64_t word) {
        state_ ^= word;
        state_ *= 0xFF51AFD7ED558CCDull;
        state_ ^= state_ >> 29u;
    };
    constexpr std::uint64_t kRgb = 0x00FFFFFFull;
    std::uint32_t i = 0;
    for (; i + 1u < width_; i += 2u)
        mix((row[i] & kRgb) | ((static_cast<std::uint64_t>(row[i + 1u]) & kRgb) << 32u));
    if (i < width_) mix(row[i] & kRgb);
}

std::uint64_t RowHasher::finish(std::uint32_t rows) const noexcept {
    std::uint64_t hash = state_ ^ rows;
    hash ^= hash >> 33u;
    hash *= 0xC4CEB9FE1A85EC53ull;
    hash ^= hash >> 33u;
    return hash;
}

std::uint64_t content_hash(std::uint32_t width, std::uint32_t height, std::span<const std::uint32_t> rgba) noexcept {
    RowHasher hasher(width);
    for (std::uint32_t y = 0; y < height && static_cast<std::size_t>(y + 1u) * width <= rgba.size(); ++y)
        hasher.add_row(rgba.data() + static_cast<std::size_t>(y) * width);
    return hasher.finish(height);
}

std::optional<Match> match_replacement(std::uint32_t width, std::uint32_t height, std::span<const std::uint32_t> rgba) {
    auto &m = manager();
    if (!m.replacing || width == 0u) return std::nullopt;
    std::optional<Match> best;
    RowHasher hasher(width);
    std::lock_guard lock(m.mutex);
    for (std::uint32_t y = 0; y < height && static_cast<std::size_t>(y + 1u) * width <= rgba.size(); ++y) {
        hasher.add_row(rgba.data() + static_cast<std::size_t>(y) * width);
        const auto hash = hasher.finish(y + 1u);
        if (const auto found = m.index.find(hash); found != m.index.end())
            best = Match{hash, y + 1u, found->second.cover_width <= width ? found->second.cover_width : 0u};
    }
    return best;
}

std::string hash_name(std::uint64_t hash) {
    char text[17]{};
    std::snprintf(text, sizeof(text), "%016llx", static_cast<unsigned long long>(hash));
    return text;
}

std::optional<std::uint64_t> parse_hash_name(std::string_view filename) noexcept {
    if (filename.size() < 16u) return std::nullopt;
    std::uint64_t value = 0;
    for (std::size_t i = 0; i < 16u; ++i) {
        const char c = filename[i];
        const int digit = c >= '0' && c <= '9' ? c - '0' : c >= 'a' && c <= 'f' ? c - 'a' + 10
                        : c >= 'A' && c <= 'F' ? c - 'A' + 10 : -1;
        if (digit < 0) return std::nullopt;
        value = (value << 4u) | static_cast<std::uint64_t>(digit);
    }
    if (filename.size() > 16u) {
        const char next = filename[16];
        if (next != '_' && next != '.' && next != '-' && next != ' ') return std::nullopt;
    }
    return value;
}

std::pair<std::uint32_t, std::uint32_t> parse_cover_size(std::string_view filename) noexcept {
    if (filename.size() < 20u || filename[16] != '_') return {0u, 0u};
    std::uint32_t w = 0, h = 0;
    std::size_t i = 17;
    while (i < filename.size() && filename[i] >= '0' && filename[i] <= '9' && w < 100000u)
        w = w * 10u + static_cast<std::uint32_t>(filename[i++] - '0');
    if (i >= filename.size() || (filename[i] != 'x' && filename[i] != 'X') || w == 0u) return {0u, 0u};
    ++i;
    while (i < filename.size() && filename[i] >= '0' && filename[i] <= '9' && h < 100000u)
        h = h * 10u + static_cast<std::uint32_t>(filename[i++] - '0');
    if (h == 0u) return {0u, 0u};
    return {w, h};
}

void dump(std::uint64_t hash, std::uint32_t width, std::uint32_t height, std::span<const std::uint32_t> rgba,
          const DumpInfo &info) {
    auto &m = manager();
    if (!m.dumping) return;
    {
        std::lock_guard lock(m.mutex);
        if (m.dumps.size() >= kMaxQueuedDumps || !m.dumped.insert(hash).second) return;
        m.dumps.push_back(DumpJob{hash, width, height, std::vector<std::uint32_t>(rgba.begin(), rgba.end()), info});
    }
    m.work.notify_all();
}

void identify_worker() {
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL);
    auto &m = manager();
    std::unique_lock lock(m.mutex);
    for (;;) {
        m.work.wait(lock, [&] { return m.stopping || !m.identify.empty(); });
        if (m.stopping) return;
        auto job = std::move(m.identify.front());
        m.identify.pop_front();
        lock.unlock();
        Identified result;
        result.key = job.key;
        result.content_hash = content_hash(job.width, job.height, job.rgba);
        result.match = match_replacement(job.width, job.height, job.rgba);
        result.opaque = std::all_of(job.rgba.begin(), job.rgba.end(), [](std::uint32_t c) { return (c >> 24u) == 255u; });
        if (dumping()) dump(result.content_hash, job.width, job.height, job.rgba, job.info);
        lock.lock();
        m.identified.push_back(std::move(result));
    }
}

void identify_async(std::uint64_t key, std::uint32_t width, std::uint32_t height, std::vector<std::uint32_t> rgba,
                    const DumpInfo &info) {
    auto &m = manager();
    if (!active() || rgba.size() < static_cast<std::size_t>(width) * height) return;
    {
        std::lock_guard lock(m.mutex);
        if (m.stopping) return;
        m.identify.push_back({key, width, height, std::move(rgba), info});
        if (!m.identify_worker) {
            m.identify_worker = true;
            m.workers.emplace_back(identify_worker);
        }
    }
    m.work.notify_all();
}

std::vector<Identified> take_identified() {
    auto &m = manager();
    std::lock_guard lock(m.mutex);
    std::vector<Identified> results;
    results.swap(m.identified);
    return results;
}

bool has_replacement(std::uint64_t hash) noexcept {
    auto &m = manager();
    if (!m.replacing) return false;
    std::lock_guard lock(m.mutex);
    return m.index.contains(hash);
}

std::unique_ptr<Image> take_replacement(std::uint64_t hash) {
    auto &m = manager();
    if (!m.replacing) return nullptr;
    std::unique_lock lock(m.mutex);
    const auto known = m.state.find(hash);
    if (known == m.state.end()) {
        if (!m.index.contains(hash)) {
            m.state.emplace(hash, LoadState::Failed);  // no file: remember, never probe again
            return nullptr;
        }
        m.state.emplace(hash, LoadState::Queued);
        m.loads.push_back(hash);
        lock.unlock();
        m.work.notify_all();
        return nullptr;
    }
    if (known->second != LoadState::Ready) return nullptr;
    auto found = m.ready.find(hash);
    auto image = std::move(found->second);
    m.ready.erase(found);
    // The uploader owns it now. If the GPU copy is evicted later, asking
    // again reloads the file.
    m.state.erase(known);
    return image;
}

Stats stats() noexcept {
    auto &m = manager();
    Stats result;
    {
        std::lock_guard lock(m.mutex);
        result.indexed = m.index.size();
    }
    result.dumped = m.dumped_count;
    result.loaded = m.loaded_count;
    result.failed = m.failed_count;
    result.load_microseconds = m.load_microseconds;
    return result;
}

std::vector<Level> build_mip_chain(std::uint32_t width, std::uint32_t height, std::vector<std::uint8_t> rgba) {
    std::vector<Level> levels;
    levels.push_back(Level{width, height, width * 4u, height, std::move(rgba)});
    while (levels.back().width > 1u || levels.back().height > 1u) {
        const Level &source = levels.back();
        const std::uint32_t w = std::max(1u, source.width / 2u), h = std::max(1u, source.height / 2u);
        Level next{w, h, w * 4u, h, std::vector<std::uint8_t>(static_cast<std::size_t>(w) * h * 4u)};
        for (std::uint32_t y = 0; y < h; ++y) {
            for (std::uint32_t x = 0; x < w; ++x) {
                std::uint32_t sum_alpha = 0, sum[3]{}, plain[3]{};
                for (std::uint32_t dy = 0; dy < 2u; ++dy) {
                    for (std::uint32_t dx = 0; dx < 2u; ++dx) {
                        const std::uint32_t sx = std::min(source.width - 1u, x * 2u + dx);
                        const std::uint32_t sy = std::min(source.height - 1u, y * 2u + dy);
                        const auto *p = source.data.data() + (static_cast<std::size_t>(sy) * source.width + sx) * 4u;
                        sum_alpha += p[3];
                        for (int c = 0; c < 3; ++c) {
                            sum[c] += static_cast<std::uint32_t>(p[c]) * p[3];
                            plain[c] += p[c];
                        }
                    }
                }
                auto *out = next.data.data() + (static_cast<std::size_t>(y) * w + x) * 4u;
                for (int c = 0; c < 3; ++c)
                    out[c] = static_cast<std::uint8_t>(sum_alpha ? (sum[c] + sum_alpha / 2u) / sum_alpha
                                                                 : (plain[c] + 2u) / 4u);
                out[3] = static_cast<std::uint8_t>((sum_alpha + 2u) / 4u);
            }
        }
        levels.push_back(std::move(next));
    }
    return levels;
}

std::optional<Image> parse_dds(std::span<const std::uint8_t> file, std::string &error) {
    const auto read32 = [&](std::size_t at) {
        std::uint32_t value{};
        std::memcpy(&value, file.data() + at, 4);
        return value;
    };
    if (file.size() < 128u || read32(0) != 0x20534444u || read32(4) != 124u) {
        error = "not a DDS file";
        return std::nullopt;
    }
    const std::uint32_t height = read32(12), width = read32(16);
    std::uint32_t mips = std::max(1u, read32(28));
    const std::uint32_t pf_flags = read32(80), fourcc = read32(84), bit_count = read32(88);
    const std::uint32_t red_mask = read32(92), alpha_mask = read32(104);
    std::size_t offset = 128u;
    Format format{};
    bool swap_red_blue = false;
    const auto code = [](const char (&text)[5]) {
        return static_cast<std::uint32_t>(text[0]) | (static_cast<std::uint32_t>(text[1]) << 8u) |
               (static_cast<std::uint32_t>(text[2]) << 16u) | (static_cast<std::uint32_t>(text[3]) << 24u);
    };
    if ((pf_flags & 4u) != 0u) {  // DDPF_FOURCC
        if (fourcc == code("DXT1")) format = Format::Bc1;
        else if (fourcc == code("DXT2") || fourcc == code("DXT3")) format = Format::Bc2;
        else if (fourcc == code("DXT4") || fourcc == code("DXT5")) format = Format::Bc3;
        else if (fourcc == code("DX10")) {
            if (file.size() < 148u) { error = "truncated DX10 header"; return std::nullopt; }
            const std::uint32_t dxgi = read32(128), dimension = read32(132), array_size = read32(140);
            offset = 148u;
            if (dimension != 3u || array_size > 1u) { error = "only single 2D textures are supported"; return std::nullopt; }
            switch (dxgi) {
            case 71: case 72: format = Format::Bc1; break;       // BC1_UNORM(_SRGB)
            case 74: case 75: format = Format::Bc2; break;       // BC2
            case 77: case 78: format = Format::Bc3; break;       // BC3
            case 98: case 99: format = Format::Bc7; break;       // BC7
            case 28: case 29: format = Format::Rgba8; break;     // R8G8B8A8_UNORM(_SRGB)
            case 87: case 91: format = Format::Rgba8; swap_red_blue = true; break;  // B8G8R8A8
            default: error = "unsupported DXGI format " + std::to_string(dxgi); return std::nullopt;
            }
        } else {
            error = "unsupported FourCC";
            return std::nullopt;
        }
    } else if (bit_count == 32u && alpha_mask == 0xFF000000u && (red_mask == 0x000000FFu || red_mask == 0x00FF0000u)) {
        format = Format::Rgba8;
        swap_red_blue = red_mask == 0x00FF0000u;
    } else {
        error = "unsupported uncompressed layout (use RGBA8 or BC1/BC3/BC7)";
        return std::nullopt;
    }
    if (width == 0u || height == 0u || width > kMaxDimension || height > kMaxDimension) {
        error = "unsupported dimensions";
        return std::nullopt;
    }
    const bool block = format != Format::Rgba8;
    const std::uint32_t block_bytes = format == Format::Bc1 ? 8u : 16u;
    Image image;
    image.format = format;
    std::uint32_t w = width, h = height;
    for (std::uint32_t mip = 0; mip < mips && mip < 16u; ++mip) {
        Level level;
        level.width = w;
        level.height = h;
        level.row_pitch = block ? std::max(1u, (w + 3u) / 4u) * block_bytes : w * 4u;
        level.rows = block ? std::max(1u, (h + 3u) / 4u) : h;
        const std::size_t bytes = static_cast<std::size_t>(level.row_pitch) * level.rows;
        if (offset + bytes > file.size()) {
            if (mip == 0u) { error = "truncated pixel data"; return std::nullopt; }
            break;  // keep the levels that are present
        }
        level.data.assign(file.begin() + static_cast<std::ptrdiff_t>(offset),
                          file.begin() + static_cast<std::ptrdiff_t>(offset + bytes));
        if (swap_red_blue)
            for (std::size_t i = 0; i + 3u < level.data.size(); i += 4u) std::swap(level.data[i], level.data[i + 2u]);
        offset += bytes;
        image.levels.push_back(std::move(level));
        if (w == 1u && h == 1u) break;
        w = std::max(1u, w / 2u);
        h = std::max(1u, h / 2u);
    }
    return image;
}

} // namespace motorstorm::textures
