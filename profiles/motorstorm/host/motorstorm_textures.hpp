#pragma once

// Texture dumping and replacement ("texture packs").
//
// Every texture the GE decodes is identified by a stable content hash of its
// decoded RGBA base level and size, independent of guest address, swizzling
// and palette layout, so the same artwork gets the same name in every run.
//
//   dump:    each new texture is written once as <hash>_<w>x<h>.png into the
//            dump directory (PNG encoding runs on a background thread), and a
//            row is appended to index.csv with its PSP format details.
//   replace: files named <hash>*.png|jpg|bmp|tif|dds in the replacement
//            directory (any subfolder) replace that texture at any resolution.
//            The directory is indexed once at startup; files are decoded on a
//            worker thread (PNG etc. gain a full mip chain there) and the
//            original texture is used until the replacement is ready, so a
//            missing or slow file never stalls rendering. Pre-compressed DDS
//            (BC1/BC2/BC3/BC7 or RGBA8, with mips) uploads without decoding.

#include <cstdint>
#include <filesystem>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace motorstorm::textures {

struct Settings {
    bool dump{}, replace{true};
    std::filesystem::path dump_dir{"textures/dump"}, replace_dir{"textures/replace"};
    std::uint64_t budget_bytes{1024ull * 1024 * 1024};  // GPU memory for replacements
};

// Reads PSPRECOMP_MOTORSTORM_TEXTURE_* (set from the INI) and starts the
// workers that are needed. Safe to call again; shutdown() flushes dumps.
void configure_from_environment();
void configure(const Settings &settings);
void shutdown() noexcept;

[[nodiscard]] bool dumping() noexcept;
[[nodiscard]] bool replacing() noexcept;   // replace enabled and at least one file indexed
[[nodiscard]] inline bool active() noexcept { return dumping() || replacing(); }
[[nodiscard]] std::uint64_t budget_bytes() noexcept;

// Stable 64-bit identity of decoded texture rows (RGBA8, row-major; colour
// only, alpha is ignored because the game rewrites palette alpha). The
// state advances one row at a time, so the identity of the first N rows can be
// taken from a taller texture: the PSP draws non-power-of-two images (e.g.
// 512x296) as 512x512 GE textures whose remaining rows are unrelated memory.
// Offline extraction names such a texture by its real rows; the runtime
// matches any row count that exists in the pack.
class RowHasher {
public:
    explicit RowHasher(std::uint32_t width) noexcept;
    void add_row(const std::uint32_t *row) noexcept;
    [[nodiscard]] std::uint64_t finish(std::uint32_t rows) const noexcept;
private:
    std::uint32_t width_;
    std::uint64_t state_;
};
[[nodiscard]] std::uint64_t content_hash(std::uint32_t width, std::uint32_t height,
                                         std::span<const std::uint32_t> rgba) noexcept;
// Largest row count of this decoded texture that has a replacement file.
// cover_width: original texel width the image represents (from the file name
// <hash>_<w>x<h>; 0 when absent = the whole GE texture width).
struct Match { std::uint64_t hash{}; std::uint32_t rows{}, cover_width{}; };
[[nodiscard]] std::optional<Match> match_replacement(std::uint32_t width, std::uint32_t height,
                                                     std::span<const std::uint32_t> rgba);
[[nodiscard]] std::string hash_name(std::uint64_t hash);   // 16 lowercase hex digits
// Leading 16 hex digits of a file name, or nothing.
[[nodiscard]] std::optional<std::uint64_t> parse_hash_name(std::string_view filename) noexcept;
// "<hash>_<w>x<h>..." -> {w, h}; {0, 0} when the name carries no size.
[[nodiscard]] std::pair<std::uint32_t, std::uint32_t> parse_cover_size(std::string_view filename) noexcept;

struct DumpInfo {
    std::uint32_t psp_format{}, clut_format{}, mip_levels{1};
    bool swizzled{};
    std::uint64_t first_ge_list{};
};
// Queues a PNG of the base level if this hash was not dumped before.
void dump(std::uint64_t hash, std::uint32_t width, std::uint32_t height,
          std::span<const std::uint32_t> rgba, const DumpInfo &info);

// Asynchronous identification of a decoded base level (decoded on the GPU
// and read back): content hash, replacement match and dump, on a worker
// thread so the emulation thread never hashes. `key` is the caller's
// texture key, returned with the result.
struct Identified {
    std::uint64_t key{}, content_hash{};
    std::optional<Match> match;
    bool opaque{};  // alpha is 255 everywhere
};
void identify_async(std::uint64_t key, std::uint32_t width, std::uint32_t height,
                    std::vector<std::uint32_t> rgba, const DumpInfo &info);
[[nodiscard]] std::vector<Identified> take_identified();

enum class Format : std::uint8_t { Rgba8, Bc1, Bc2, Bc3, Bc7 };
struct Level {
    std::uint32_t width{}, height{}, row_pitch{}, rows{};
    std::vector<std::uint8_t> data;   // rows * row_pitch bytes
};
struct Image {
    Format format{Format::Rgba8};
    std::vector<Level> levels;        // full chain, level 0 first
    std::filesystem::path source;
    bool no_alpha{};                  // RGBA image whose alpha is zero everywhere
    [[nodiscard]] std::uint64_t bytes() const noexcept;
};

// Non-blocking. Returns the decoded replacement once ready (ownership passes
// to the caller, which uploads it); otherwise queues the load and returns
// nullptr. Failed or missing files return nullptr permanently.
[[nodiscard]] std::unique_ptr<Image> take_replacement(std::uint64_t hash);
[[nodiscard]] bool has_replacement(std::uint64_t hash) noexcept;

// Writes RGBA8 pixels as a PNG (any thread; initializes COM for itself).
[[nodiscard]] bool save_png(const std::filesystem::path &path, std::uint32_t width, std::uint32_t height,
                            std::span<const std::uint32_t> rgba);

struct Stats {
    std::uint64_t indexed{}, dumped{}, loaded{}, failed{}, load_microseconds{};
};
[[nodiscard]] Stats stats() noexcept;

// Pure helpers (tested directly).
// Box-filtered mip chain of an RGBA8 image, alpha-weighted so transparent
// texels do not darken edges. Level 0 is the input.
[[nodiscard]] std::vector<Level> build_mip_chain(std::uint32_t width, std::uint32_t height,
                                                 std::vector<std::uint8_t> rgba);
// Parses a DDS file (legacy DXT1/3/5 or DX10 BC1/2/3/7, RGBA8 UNORM/sRGB).
[[nodiscard]] std::optional<Image> parse_dds(std::span<const std::uint8_t> file, std::string &error);

} // namespace motorstorm::textures
