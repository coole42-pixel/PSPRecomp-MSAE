#include "motorstorm_textures.hpp"
#include "motorstorm_ge.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_perf.hpp"

#include "psprecomp/common.hpp"

#include <algorithm>
#include <mutex>
#include <array>
#include <bit>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <type_traits>
#include <vector>
#include <unordered_map>
#include <stdexcept>

namespace motorstorm {
namespace {

using psprecomp::GuestMemory;
using Vec3 = std::array<float, 3>;

struct Vertex {
    float x{};
    float y{};
    float z{};
    float u{};
    float v{};
    float q{1.0f};
    float inv_w{1.0f};
    float fog{1.0f};
    std::uint32_t secondary_color{};
    std::uint32_t color{0xFFFFFFFFu};
    bool has_texture{};
    bool has_color{};
    bool drawable{true};
    bool through{true};
    std::array<float, 4> clip{};
};

inline std::uint64_t g_lighting_generation{};
struct GeState {
    GeState() {
        for (auto &bone : bones)
            bone[0] = bone[4] = bone[8] = 1.0f;
    }
    // Changes whenever a lighting command or the view matrix may have changed;
    // light_vertex caches its per-light setup against it.
    std::uint64_t lighting_epoch{++g_lighting_generation};
    // Framebuffer.
    std::uint32_t framebuffer{};
    std::uint32_t framebuffer_stride{};
    std::uint32_t framebuffer_format{}; // 0=5650 1=5551 2=4444 3=8888
    std::uint32_t depthbuffer{}, depth_stride{};
    bool depth_test_enabled{};
    std::uint32_t depth_function{1u};
    bool depth_clip_enabled{};
    // Geometry.
    std::uint32_t vertex_type{};
    std::uint32_t base_high{};
    std::uint32_t vertex_address{};
    std::uint32_t index_address{};
    std::uint32_t offset_address{};
    std::array<float, 12> world{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
    std::array<float, 12> view{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
    std::array<float, 16> projection{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
    std::array<float, 12> texture_matrix{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
    std::uint32_t texture_matrix_cursor{};
    std::uint32_t world_cursor{}, view_cursor{}, projection_cursor{};
    std::array<std::array<float, 12>, 8> bones{};
    std::array<float, 8> morph_weights{1, 0, 0, 0, 0, 0, 0, 0};
    std::uint32_t bone_cursor{};
    std::array<float, 3> viewport_scale{1, 1, 1}, viewport_center{};
    float texture_scale_u{1}, texture_scale_v{1}, texture_offset_u{}, texture_offset_v{};
    // Scissor / region (default: whole screen).
    std::int32_t scissor_left{0};
    std::int32_t scissor_top{0};
    std::int32_t scissor_right{512};
    std::int32_t scissor_bottom{272};
    // Clear / material colour (the GE reuses registers 0x55/0x58 for both).
    std::uint32_t clear_mode{};
    std::uint32_t clear_color{0xFFFFFFu};
    std::uint32_t clear_alpha{0xFFu};
    std::uint32_t material_color{0xFFFFFFu};
    std::uint32_t material_alpha{0xFFu};
    // Texture.  Formats follow the PSP GE: 0=5650, 1=5551, 2=4444, 3=8888,
    // 4=T4, 5=T8, 6=T16, 7=T32 (palettised formats read the CLUT).
    std::uint32_t texture_address{};
    std::uint32_t texture_stride{};
    std::uint32_t texture_format{};
    std::uint32_t texture_mode{};
    std::uint32_t texture_clut_address{};
    std::uint32_t texture_clut_format{};
    std::array<std::uint8_t, 1024> clut{};
    std::uint32_t clut_loaded_bytes{};
    // FNV-1a hash of the current CLUT bytes, refreshed whenever LOADCLUT runs.
    // Texture Lookup hashes this 8-byte value instead of 1 KiB per draw.
    std::uint64_t clut_hash{};
    std::uint32_t texture_size{};
    std::uint32_t texture_func{};
    std::uint32_t texture_env_color{0xFFFFFFu};
    std::uint32_t texture_filter{};
    std::uint32_t texture_wrap{};
    bool texture_enabled{};
    // Blending / tests.
    bool blend_enabled{};
    std::uint32_t blend_mode{};
    std::uint32_t blend_fixed_a{0xFFu};
    std::uint32_t blend_fixed_b{0xFFu};
    bool alpha_test_enabled{};
    std::uint32_t alpha_test{};
    bool color_test_enabled{};
    std::uint32_t color_test{};
    std::uint32_t color_ref{};
    std::uint32_t color_test_mask{0xFFFFFFu};
    std::uint32_t shade_mode{};
    std::uint32_t reverse_normal{};
    float screen_offset_x{};
    float screen_offset_y{};
    std::uint32_t z_write_disable{};
    // Raw command state retained for inspection of unsupported features too.
    std::array<std::uint32_t, 256> commands{};
};

GeState g_state{};
GeSummary g_summary{};
bool g_pixel_diagnostics{};
std::unordered_map<std::uint64_t, GpuTexture> g_gpu_textures;
std::unordered_map<std::uint64_t, std::uint64_t> g_list_texture_keys;
std::uint64_t g_gpu_texture_bytes{};
// Least-recently-used clock for g_gpu_textures (advances once per GE list).
std::uint64_t g_texture_clock{};
// Content changes per texture state (address/format/size): an address whose
// content keeps changing (video frames) becomes a streaming texture.
struct TextureStream { std::uint64_t content{}, last_change{}; std::uint32_t changes{}; };
std::unordered_map<std::uint64_t, TextureStream> g_texture_streams;
std::uint64_t texture_cache_bytes(const GpuTexture &texture) {
    std::uint64_t bytes = 0;
    for (const auto &level : texture.levels) bytes += level.size() * 4u;
    for (const auto &level : texture.raw) bytes += level.bytes.size();
    return bytes;
}
// GPU decoding of raw texture data (DecodeCS); the CPU path stays available
// for diagnosis with PSPRECOMP_MOTORSTORM_CPU_TEXTURE_DECODE=1.
std::uint32_t swizzled_offset(std::uint32_t byte_x, std::uint32_t y, std::uint32_t row_bytes) noexcept;
// One past the furthest byte read_texel touches for a level (texels may read
// beyond `bytes` when the texture is wider than its buffer stride).
std::uint32_t texel_extent(std::uint32_t format, std::uint32_t width, std::uint32_t height,
                           std::uint32_t stride, bool swizzled) {
    const std::uint32_t texel_bytes = format == 3u || format == 7u ? 4u : format == 4u || format == 5u ? 1u : 2u;
    const std::uint32_t row_bytes = format == 4u ? (stride + 1u) / 2u : stride * texel_bytes;
    const std::uint32_t byte_x = format == 4u ? (width - 1u) >> 1u : (width - 1u) * texel_bytes;
    const std::uint32_t last = swizzled ? swizzled_offset(byte_x, height - 1u, row_bytes)
                                        : (height - 1u) * row_bytes + byte_x;
    return last + texel_bytes;
}
// Texture-pack identities of GPU-decoded textures by cache key (results
// survive cache eviction) and the dump details of requests in flight.
std::unordered_map<std::uint64_t, textures::Identified> g_identified;
std::unordered_map<std::uint64_t, textures::DumpInfo> g_identify_info;
void apply_identity(GpuTexture &texture, const textures::Identified &identity) {
    texture.identify=false;
    texture.content_hash=identity.content_hash;
    if(identity.match) {
        texture.replacement_hash=identity.match->hash;
        texture.replacement_rows=identity.match->rows;
        texture.replacement_width=identity.match->cover_width;
        texture.opaque=identity.opaque;
    }
}
// Once per GE list: hand finished GPU readbacks to the hashing worker and
// apply finished identities to the cached textures.
void exchange_identities() {
    if(!textures::active()) return;
    for(auto &decoded:gpu_take_decoded()) {
        const auto info=g_identify_info.find(decoded.key);
        if(info==g_identify_info.end()) continue;
        if(decoded.rgba.empty()) {
            // Readback ring full: decode this one on the CPU instead.
            const auto texture=g_gpu_textures.find(decoded.key);
            if(texture==g_gpu_textures.end() || texture->second.raw.empty()) { g_identify_info.erase(info); continue; }
            decoded.width=texture->second.width;
            decoded.height=texture->second.height;
            decoded.rgba=ge_decode_raw_level(texture->second,0u);
        }
        textures::identify_async(decoded.key,decoded.width,decoded.height,std::move(decoded.rgba),info->second);
        g_identify_info.erase(info);
    }
    for(const auto &identity:textures::take_identified()) {
        if(g_identified.size()>65536) g_identified.clear();
        g_identified[identity.key]=identity;
        if(const auto texture=g_gpu_textures.find(identity.key);texture!=g_gpu_textures.end())
            apply_identity(texture->second,identity);
    }
}
bool gpu_texture_decode() {
    static const bool enabled = std::getenv("PSPRECOMP_MOTORSTORM_CPU_TEXTURE_DECODE") == nullptr;
    return enabled;
}
std::uint64_t g_list_texture_epoch{};

std::uint32_t unpack_vertex_color(const GuestMemory &memory, std::uint32_t address, std::uint32_t type);
std::uint32_t decode_packed_color(std::uint32_t packed, std::uint32_t type);

struct DrawInspection {
    bool enabled{}, select_submission{}, select_draw{}, capture{};
    std::uint64_t submission{}, draw{}, first{}, last{};
    std::filesystem::path directory{"out/motorstorm/phase12/draws"};
};

DrawInspection inspection_settings() {
    DrawInspection settings;
    if (const char *value = std::getenv("PSPRECOMP_GE_TRACE_SUBMISSION")) {
        settings.enabled = settings.select_submission = true;
        settings.submission = std::strtoull(value, nullptr, 0);
    }
    if (const char *value = std::getenv("PSPRECOMP_GE_TRACE_DRAW")) {
        settings.enabled = settings.select_draw = true;
        settings.draw = std::strtoull(value, nullptr, 0);
    }
    if (const char *value = std::getenv("PSPRECOMP_GE_CAPTURE_DRAW_RANGE")) {
        settings.enabled = settings.capture = true;
        char *end = nullptr;
        settings.first = std::strtoull(value, &end, 0);
        settings.last = (*end == ':' || *end == '-') ? std::strtoull(end + 1, nullptr, 0) : settings.first;
    }
    if (const char *value = std::getenv("PSPRECOMP_GE_CAPTURE_DIR"))
        settings.directory = value;
    return settings;
}

void inspect_draw(const DrawInspection &settings, std::uint64_t submission, std::uint64_t draw,
                  std::uint32_t list, std::uint32_t pc, std::uint32_t primitive) {
    if (!settings.enabled || (settings.select_submission && submission != settings.submission) ||
        (settings.select_draw && draw != settings.draw))
        return;
    std::error_code error;
    std::filesystem::create_directories(settings.directory, error);
    if (error)
        return;
    const auto prefix =
        settings.directory / ("submission_" + std::to_string(submission) + "_draw_" + std::to_string(draw));
    std::ofstream out(prefix.string() + ".json");
    const auto field = [&](const char *name, std::uint64_t value) {
        out << "\"" << name << "\":" << value << ",\n";
    };
    const auto array = [&](const char *name, const auto &values) {
        out << "\"" << name << "\":[";
        bool separator = false;
        for (const auto value : values) {
            if (separator)
                out << ',';
            if constexpr (std::is_floating_point_v<decltype(value)>) {
                if (std::isfinite(value))
                    out << value;
                else
                    out << "null";
            } else
                out << value;
            separator = true;
        }
        out << "],\n";
    };
    const auto &state = g_state;
    const auto &cmd = state.commands;
    out << "{\n";
    field("submission", submission);
    field("draw", draw);
    field("list", list);
    field("pc", pc);
    field("primitive", (primitive >> 16u) & 7u);
    field("vertex_count", primitive & 0xFFFFu);
    field("vtype", state.vertex_type);
    field("vertex_address", state.vertex_address);
    field("index_address", state.index_address);
    field("index_type", (state.vertex_type >> 11u) & 3u);
    field("normal_type", (state.vertex_type >> 5u) & 3u);
    field("position_type", (state.vertex_type >> 7u) & 3u);
    field("weight_type", (state.vertex_type >> 9u) & 3u);
    field("weight_count", ((state.vertex_type >> 14u) & 7u) + 1u);
    field("morph_count", ((state.vertex_type >> 18u) & 7u) + 1u);
    field("through_mode", (state.vertex_type & 0x800000u) != 0u);
    array("world", state.world);
    array("view", state.view);
    array("projection", state.projection);
    array("texture_matrix", state.texture_matrix);
    array("morph_weights", state.morph_weights);
    for (std::size_t i = 0u; i < state.bones.size(); ++i) {
        const std::string name = "bone_" + std::to_string(i);
        array(name.c_str(), state.bones[i]);
    }
    array("viewport_scale", state.viewport_scale);
    array("viewport_center", state.viewport_center);
    array("raster_offset", std::array<float, 2>{state.screen_offset_x, state.screen_offset_y});
    field("address_offset", state.offset_address);
    array("scissor", std::array<int, 4>{state.scissor_left, state.scissor_top, state.scissor_right,
                                        state.scissor_bottom});
    array("depth_range", std::array<std::uint32_t, 2>{cmd[0xD6u], cmd[0xD7u]});
    field("depth_buffer", state.depthbuffer);
    field("depth_stride", state.depth_stride);
    field("depth_test", state.depth_test_enabled);
    field("depth_function", state.depth_function);
    field("depth_write_disable", state.z_write_disable);
    field("depth_clip", state.depth_clip_enabled);
    field("cull_enable", cmd[0x1Du]);
    field("cull_mode", cmd[0x9Bu]);
    field("texture_enable", state.texture_enabled);
    field("texture_address", state.texture_address);
    field("texture_format", state.texture_format);
    field("texture_stride", state.texture_stride);
    array("texture_dimensions", std::array<std::uint32_t, 2>{1u << (state.texture_size & 15u),
                                                             1u << ((state.texture_size >> 8u) & 15u)});
    field("texture_swizzle", state.texture_mode & 1u);
    field("texture_map_mode", cmd[0xC0u]);
    field("texture_shade_sources", cmd[0xC1u]);
    field("texture_filter", state.texture_filter);
    field("texture_wrap", state.texture_wrap);
    field("texture_function", state.texture_func);
    array("uv_scale_offset", std::array<float, 4>{state.texture_scale_u, state.texture_scale_v,
                                                  state.texture_offset_u, state.texture_offset_v});
    field("clut_address", state.texture_clut_address);
    field("clut_format", state.texture_clut_format);
    field("clut_load", cmd[0xC4u]);
    field("alpha_test_enable", state.alpha_test_enabled);
    field("clut_latched_bytes", state.clut_loaded_bytes);
    field("alpha_test", state.alpha_test);
    field("blend_enable", state.blend_enabled);
    field("blend_mode", state.blend_mode);
    field("blend_fixed_a", cmd[0xE0u]);
    field("blend_fixed_b", cmd[0xE1u]);
    field("lighting_enable", cmd[0x17u]);
    field("material_update", cmd[0x53u]);
    array("material_state",
          std::array<std::uint32_t, 10>{cmd[0x54u], cmd[0x55u], cmd[0x56u], cmd[0x57u], cmd[0x58u],
                                        cmd[0x59u], cmd[0x5Au], cmd[0x5Bu], cmd[0x5Cu], cmd[0x5Du]});
    field("shade_mode", state.shade_mode);
    field("reverse_normal", state.reverse_normal);
    field("color_test_enable", cmd[0x27u]);
    field("color_test", cmd[0xD8u]);
    field("color_reference", cmd[0xD9u]);
    field("color_mask", cmd[0xDAu]);
    field("stencil_test_enable", cmd[0x24u]);
    field("stencil_test", cmd[0xDCu]);
    field("stencil_operations", cmd[0xDDu]);
    field("fog_enable", cmd[0x1Fu]);
    array("fog_state", std::array<std::uint32_t, 3>{cmd[0xCDu], cmd[0xCEu], cmd[0xCFu]});
    field("framebuffer", state.framebuffer);
    field("framebuffer_stride", state.framebuffer_stride);
    field("framebuffer_format", state.framebuffer_format);
    field("clear_mode", state.clear_mode);
    array("raw_commands", cmd);
    out << "\"state_moment\":\"before_draw\"\n}\n";
}

void capture_draw(const DrawInspection &settings, const GuestMemory &memory, std::uint64_t submission,
                  std::uint64_t draw) {
    if (!settings.capture || (settings.select_submission && submission != settings.submission) ||
        (settings.select_draw && draw != settings.draw) || draw < settings.first || draw > settings.last)
        return;
    const auto &state = g_state;
    const std::uint32_t width = std::min(480u, state.framebuffer_stride), height = 272u;
    if (width == 0u || state.framebuffer == 0u)
        return;
    std::vector<std::uint8_t> pixels(static_cast<std::size_t>(width) * height * 3u);
    const std::uint32_t bpp = state.framebuffer_format == 3u ? 4u : 2u;
    for (std::uint32_t y = 0u; y < height; ++y)
        for (std::uint32_t x = 0u; x < width; ++x) {
            const auto at = state.framebuffer + (y * state.framebuffer_stride + x) * bpp;
            if (!memory.contains(at, bpp))
                continue;
            const auto color = bpp == 4u ? memory.aot_load32(at)
                                         : unpack_vertex_color(memory, at, state.framebuffer_format + 4u);
            const auto index = (static_cast<std::size_t>(y) * width + x) * 3u;
            pixels[index] = static_cast<std::uint8_t>(color);
            pixels[index + 1u] = static_cast<std::uint8_t>(color >> 8u);
            pixels[index + 2u] = static_cast<std::uint8_t>(color >> 16u);
        }
    std::ofstream out(settings.directory / ("submission_" + std::to_string(submission) + "_draw_" +
                                            std::to_string(draw) + ".ppm"),
                      std::ios::binary);
    out << "P6\n" << width << ' ' << height << "\n255\n";
    out.write(reinterpret_cast<const char *>(pixels.data()), static_cast<std::streamsize>(pixels.size()));
}

// PSP framebuffer formats.
constexpr std::uint32_t kFormat5650 = 0u;
constexpr std::uint32_t kFormat5551 = 1u;
constexpr std::uint32_t kFormat4444 = 2u;
constexpr std::uint32_t kFormat8888 = 3u;

std::uint32_t unpack_vertex_color(const GuestMemory &memory, std::uint32_t address, std::uint32_t type);

// PSP swizzle: 16-byte-wide by 8-row blocks.  Identical layout to the one the
// VCS renderer decodes (shared by every GE texture format).
std::uint32_t swizzled_offset(std::uint32_t byte_x, std::uint32_t y, std::uint32_t row_bytes) noexcept {
    const std::uint32_t blocks_per_row = (row_bytes + 15u) / 16u;
    const std::uint32_t block_x = byte_x / 16u;
    const std::uint32_t block_y = y / 8u;
    return (block_y * blocks_per_row + block_x) * 128u + (y & 7u) * 16u + (byte_x & 15u);
}

std::uint32_t wrap_texel(std::int32_t value, std::uint32_t dimension, bool clamp) noexcept {
    if (dimension == 0u)
        return 0u;
    if (clamp)
        return static_cast<std::uint32_t>(
            std::clamp<std::int32_t>(value, 0, static_cast<std::int32_t>(dimension - 1u)));
    if ((dimension & (dimension - 1u)) == 0u)
        return static_cast<std::uint32_t>(value) & (dimension - 1u);
    const std::int32_t d = static_cast<std::int32_t>(dimension);
    std::int32_t result = value % d;
    if (result < 0)
        result += d;
    return static_cast<std::uint32_t>(result);
}

std::uint32_t unpack_clut_entry(std::uint32_t index, std::uint32_t level) {
    // CLUTFORMAT (0xC5) carries the palette pixel format in bits 0-1 (same
    // encoding as TEXFORMAT), the index shift in bits 2-6, an
    // AND mask in bits 8-15 and the start index (in 16-entry units) in 16-20.
    const std::uint32_t data = g_state.texture_clut_format;
    const std::uint32_t format = data & 3u;
    const std::uint32_t shift = (data >> 2u) & 0x1Fu;
    const std::uint32_t mask = (data >> 8u) & 0xFFu;
    const std::uint32_t start = ((data >> 16u) & 0x1Fu) << 4u;
    const std::uint32_t wrap_mask = format == 3u ? 0xFFu : 0x1FFu;
    const std::uint32_t wrapped = (((index >> shift) & mask) | (start & wrap_mask)) & wrap_mask;
    const std::uint32_t entry_bytes = format == 3u ? 4u : 2u;
    const auto mip_offset =
        g_state.texture_format == 4u && (g_state.texture_mode & 0x100u) != 0u ? level * 16u : 0u;
    const auto offset = ((wrapped + mip_offset) & wrap_mask) * entry_bytes;
    std::uint32_t packed = 0u;
    for (std::uint32_t i = 0u; i < entry_bytes; ++i)
        packed |= static_cast<std::uint32_t>(g_state.clut[offset + i]) << (i * 8u);
    return decode_packed_color(packed, format + 4u);
}

void write_frame_pixel(GuestMemory &memory, std::uint32_t address, std::uint32_t rgba) {
    const auto r = rgba & 255u, g = (rgba >> 8u) & 255u, b = (rgba >> 16u) & 255u, a = rgba >> 24u;
    switch (g_state.framebuffer_format) {
    case kFormat8888:
        memory.aot_store32(address, rgba);
        break;
    case kFormat5650:
        memory.aot_store16(address,
                           static_cast<std::uint16_t>((r >> 3u) | ((g >> 2u) << 5u) | ((b >> 3u) << 11u)));
        break;
    case kFormat5551:
        memory.aot_store16(address, static_cast<std::uint16_t>((r >> 3u) | ((g >> 3u) << 5u) |
                                                               ((b >> 3u) << 10u) | ((a >> 7u) << 15u)));
        break;
    case kFormat4444:
        memory.aot_store16(address, static_cast<std::uint16_t>((r >> 4u) | ((g >> 4u) << 4u) |
                                                               ((b >> 4u) << 8u) | ((a >> 4u) << 12u)));
        break;
    default:
        break;
    }
}

void store_pixel(GuestMemory &memory, std::int32_t x, std::int32_t y, std::uint32_t rgba, float z = 0.0f,
                 float fog = 1.0f) {
    if (x < 0 || y < 0)
        return;
    if (g_state.framebuffer == 0u)
        return;
    const std::int32_t left = g_state.scissor_left;
    const std::int32_t top = g_state.scissor_top;
    const std::int32_t right = g_state.scissor_right;
    const std::int32_t bottom = g_state.scissor_bottom;
    if (x < left || x >= right || y < top || y >= bottom)
        return;
    const std::uint32_t pixel_bytes = g_state.framebuffer_format == kFormat8888 ? 4u : 2u;
    const std::uint32_t address =
        g_state.framebuffer +
        (static_cast<std::uint32_t>(y) * g_state.framebuffer_stride + static_cast<std::uint32_t>(x)) *
            pixel_bytes;
    if (!memory.contains(address, pixel_bytes))
        return;
    const bool clearing = (g_state.clear_mode & 1u) != 0u;
    std::uint32_t a = (rgba >> 24u) & 0xFFu;
    std::uint32_t b = (rgba >> 16u) & 0xFFu;
    std::uint32_t g = (rgba >> 8u) & 0xFFu;
    std::uint32_t r = rgba & 0xFFu;

    // Alpha test (0x22 enable, 0xDB func/ref/mask).  A failing pixel is dropped
    // before any blending so cut-out sprites do not tint the framebuffer.
    if (!clearing && g_state.alpha_test_enabled) {
        const std::uint32_t ref = (g_state.alpha_test >> 8u) & 0xFFu;
        const std::uint32_t mask = (g_state.alpha_test >> 16u) & 0xFFu;
        const std::uint32_t func = g_state.alpha_test & 7u;
        const std::uint32_t value = a & mask;
        const std::uint32_t target = ref & mask;
        bool pass = true;
        switch (func) {
        case 0u:
            pass = false;
            break;
        case 1u:
            pass = true;
            break;
        case 2u:
            pass = value == target;
            break;
        case 3u:
            pass = value != target;
            break;
        case 4u:
            pass = value < target;
            break;
        case 5u:
            pass = value <= target;
            break;
        case 6u:
            pass = value > target;
            break;
        case 7u:
            pass = value >= target;
            break;
        default:
            break;
        }
        if (!pass)
            return;
    }

    const std::uint32_t z_address =
        g_state.depthbuffer +
        (static_cast<std::uint32_t>(y) * g_state.depth_stride + static_cast<std::uint32_t>(x)) * 2u;
    const bool valid_depth = g_state.depthbuffer != 0u && memory.contains(z_address, 2u);
    const auto depth = static_cast<std::uint16_t>(std::clamp(z, 0.0f, 65535.0f));

    const bool stencil_enabled = !clearing && (g_state.commands[0x24u] & 1u) != 0u;

    const auto compare = [](std::uint32_t value, std::uint32_t reference, std::uint32_t function) {
        switch (function & 7u) {
        case 0u:
            return false;
        case 1u:
            return true;
        case 2u:
            return value == reference;
        case 3u:
            return value != reference;
        case 4u:
            return value < reference;
        case 5u:
            return value <= reference;
        case 6u:
            return value > reference;
        default:
            return value >= reference;
        }
    };

    if (!stencil_enabled && !clearing && valid_depth && g_state.depth_test_enabled &&
        !compare(depth, memory.aot_load16(z_address), g_state.depth_function))
        return;

    const auto old_color = g_state.framebuffer_format == kFormat8888
                               ? memory.aot_load32(address)
                               : unpack_vertex_color(memory, address, g_state.framebuffer_format + 4u);
    const std::uint32_t old_stencil = g_state.framebuffer_format == kFormat5650 ? 0u : old_color >> 24u;

    if (!clearing && (g_state.commands[0x1Fu] & 1u) != 0u && fog < 1.0f) {
        const auto factor = static_cast<std::uint32_t>(std::clamp(fog, 0.0f, 1.0f) * 255.0f);
        const auto mix = [&](std::uint32_t color, std::uint32_t shift) {
            return (color * factor + ((g_state.commands[0xCFu] >> shift) & 255u) * (255u - factor) + 255u) >>
                   8u;
        };
        r = mix(r, 0u);
        g = mix(g, 8u);
        b = mix(b, 16u);
        rgba = (a << 24u) | (b << 16u) | (g << 8u) | r;
    }
    if (!clearing && (g_state.commands[0x27u] & 1u) != 0u) {
        const auto mask = g_state.commands[0xDAu] & 0xFFFFFFu;
        if (!compare(((b << 16u) | (g << 8u) | r) & mask, g_state.commands[0xD9u] & mask,
                     g_state.commands[0xD8u] & 3u))
            return;
    }
    const auto stencil_op = [&](std::uint32_t operation) {
        const auto maximum = g_state.framebuffer_format == 0u ? 0u : 255u;
        const auto step = g_state.framebuffer_format == 1u   ? 255u
                          : g_state.framebuffer_format == 2u ? 17u
                                                             : 1u;
        switch (operation & 7u) {
        case 0u:
            return old_stencil;
        case 1u:
            return 0u;
        case 2u:
            return (g_state.commands[0xDCu] >> 8u) & 255u;
        case 3u:
            return old_stencil ^ maximum;
        case 4u:
            return std::min(maximum, old_stencil + step);
        case 5u:
            return old_stencil >= step ? old_stencil - step : 0u;
        default:
            return old_stencil;
        }
    };
    const auto write_stencil = [&](std::uint32_t value) {
        const auto mask = (g_state.commands[0xE9u] & 255u) << 24u;
        const auto result = ((value << 24u) & ~mask) | (old_color & mask) | (old_color & 0xFFFFFFu);
        write_frame_pixel(memory, address, result);
    };
    if (stencil_enabled) {
        const auto data = g_state.commands[0xDCu], mask = (data >> 16u) & 255u;
        if (!compare(((data >> 8u) & 255u) & mask, old_stencil & mask, data)) {
            write_stencil(stencil_op(g_state.commands[0xDDu]));
            return;
        }
    }
    if (!clearing && valid_depth && g_state.depth_test_enabled &&
        !compare(depth, memory.aot_load16(z_address), g_state.depth_function)) {
        if (stencil_enabled)
            write_stencil(stencil_op(g_state.commands[0xDDu] >> 8u));
        return;
    }
    const auto final_stencil = stencil_enabled ? stencil_op(g_state.commands[0xDDu] >> 16u) : old_stencil;

    if (!clearing && g_state.blend_enabled) {
        const std::uint32_t src_factor = g_state.blend_mode & 0xFu;
        const std::uint32_t dst_factor = (g_state.blend_mode >> 4u) & 0xFu;
        const std::uint32_t function = (g_state.blend_mode >> 8u) & 0x7u;
        const std::uint32_t dest = (old_color & 0xFFFFFFu) | (old_stencil << 24u);
        const std::uint32_t sa = (rgba >> 24u) & 0xFFu;
        const std::uint32_t da = (dest >> 24u) & 0xFFu;
        auto blend_channel = [&](std::uint32_t sc, std::uint32_t dc, std::uint32_t sf, std::uint32_t df,
                                 std::uint32_t scale_s, std::uint32_t scale_d) {
            const std::uint32_t sv = (sc * sf) / scale_s;
            const std::uint32_t dv = (dc * df) / scale_d;
            switch (function) {
            case 0u:
                return std::min(255u, sv + dv);
            case 1u:
                return sv > dv ? sv - dv : 0u;
            case 2u:
                return dv > sv ? dv - sv : 0u;
            case 3u:
                return std::min(sc, dc);
            case 4u:
                return std::max(sc, dc);
            case 5u:
                return sc > dc ? sc - dc : dc - sc;
            default:
                return std::min(255u, sv + dv);
            }
        };
        auto factor_value = [&](std::uint32_t which, bool source, std::uint32_t sc, std::uint32_t dc,
                                std::uint32_t fixed) {
            switch (which) {
            case 0u:
                return source ? dc : sc;
            case 1u:
                return 255u - (source ? dc : sc);
            case 2u:
                return sa;
            case 3u:
                return 255u - sa;
            case 4u:
                return da;
            case 5u:
                return 255u - da;
            case 6u:
                return 2u * sa;
            case 7u:
                return 255u - std::min(2u * sa, 255u);
            case 8u:
                return 2u * da;
            case 9u:
                return 255u - std::min(2u * da, 255u);
            default:
                return fixed;
            }
        };
        const auto channel = [&](std::uint32_t sc, std::uint32_t shift) {
            const auto dc = (dest >> shift) & 0xFFu;
            return blend_channel(
                sc, dc, factor_value(src_factor, true, sc, dc, (g_state.blend_fixed_a >> shift) & 0xFFu),
                factor_value(dst_factor, false, sc, dc, (g_state.blend_fixed_b >> shift) & 0xFFu), 255u,
                255u);
        };
        r = channel(r, 0u);
        g = channel(g, 8u);
        b = channel(b, 16u);
    }

    if (valid_depth &&
        ((clearing && (g_state.clear_mode & 0x400u) != 0u) ||
         (!clearing && g_state.depth_test_enabled && g_state.z_write_disable == 0u)))
        memory.aot_store16(z_address, depth);
    if (clearing) {
        const auto previous = g_state.framebuffer_format == kFormat8888
                                  ? memory.aot_load32(address)
                                  : unpack_vertex_color(memory, address, g_state.framebuffer_format + 4u);
        if ((g_state.clear_mode & 0x100u) == 0u) {
            r = previous & 0xFFu;
            g = (previous >> 8u) & 0xFFu;
            b = (previous >> 16u) & 0xFFu;
        }
        if ((g_state.clear_mode & 0x200u) == 0u)
            a = previous >> 24u;
    }
    if (!clearing && stencil_enabled)
        a = final_stencil;
    const auto mask = (g_state.commands[0xE8u] & 0xFFFFFFu) | ((g_state.commands[0xE9u] & 255u) << 24u);
    const auto packed = (a << 24u) | (b << 16u) | (g << 8u) | r;
    write_frame_pixel(memory, address, (packed & ~mask) | (old_color & mask));
    ++g_summary.pixels_drawn;
    if ((rgba & 0x00FFFFFFu) != 0u && (rgba >> 24u) != 0u) {
        ++g_summary.pixels_colored;
        // One-shot diagnostic: report where the first few coloured pixels land
        // so a dump that reads another buffer can be told apart from a renderer
        // that paints nothing.
        static std::uint32_t logged = 0u;
        if (g_pixel_diagnostics && logged < 4u) {
            ++logged;
            std::cerr << "[sofge]   coloured pixel at " << psprecomp::hex32(address)
                      << " rgba=" << psprecomp::hex32(rgba) << " fb=" << psprecomp::hex32(g_state.framebuffer)
                      << " stride=" << g_state.framebuffer_stride << " fmt=" << g_state.framebuffer_format
                      << "\n";
        }
    }
}

std::uint32_t read_texel(const GuestMemory &memory, std::int32_t tex_x, std::int32_t tex_y,
                         std::uint32_t fallback, std::uint32_t level) {
    const auto size = level == 0u ? g_state.texture_size : g_state.commands[0xB8u + level];
    const std::uint32_t width = 1u << (size & 0xFu);
    const std::uint32_t height = 1u << ((size >> 8u) & 0xFu);
    if (width > 4096u || height > 4096u)
        return fallback;
    const bool clamp_u = (g_state.texture_wrap & 1u) != 0u;
    const bool clamp_v = (g_state.texture_wrap & 0x100u) != 0u;
    const std::uint32_t x = wrap_texel(tex_x, width, clamp_u);
    const std::uint32_t y = wrap_texel(tex_y, height, clamp_v);
    const std::uint32_t format = g_state.texture_format;
    const bool swizzled = (g_state.texture_mode & 1u) != 0u;
    const std::uint32_t base = level == 0u ? g_state.texture_address
                                           : (g_state.commands[0xA0u + level] & 0xFFFFF0u) |
                                                 ((g_state.commands[0xA8u + level] << 8u) & 0x0F000000u);
    const auto stride =
        level == 0u ? g_state.texture_stride : std::max(1u, g_state.commands[0xA8u + level] & 0x7FFu);
    std::uint32_t texel = 0xFFFFFFFFu;
    switch (format) {
    case 0u:
    case 1u:
    case 2u: {
        const std::uint32_t byte_x = x * 2u;
        const std::uint32_t offset =
            swizzled ? swizzled_offset(byte_x, y, stride * 2u) : (y * stride * 2u + byte_x);
        if (!memory.contains(base + offset, 2u))
            return fallback;
        texel = unpack_vertex_color(memory, base + offset, format + 4u);
        break;
    }
    case 3u: {
        const std::uint32_t byte_x = x * 4u;
        const std::uint32_t offset =
            swizzled ? swizzled_offset(byte_x, y, stride * 4u) : (y * stride * 4u + byte_x);
        if (!memory.contains(base + offset, 4u))
            return fallback;
        texel = memory.aot_load32(base + offset);
        break;
    }
    case 4u: {
        const std::uint32_t byte_x = x >> 1u;
        const std::uint32_t offset =
            swizzled ? swizzled_offset(byte_x, y, (stride + 1u) / 2u) : (y * ((stride + 1u) / 2u) + byte_x);
        if (!memory.contains(base + offset, 1u))
            return fallback;
        const std::uint32_t packed = memory.aot_load8(base + offset);
        texel = unpack_clut_entry((x & 1u) != 0u ? packed >> 4u : packed & 0xFu, level);
        break;
    }
    case 5u: {
        const std::uint32_t offset = swizzled ? swizzled_offset(x, y, stride) : (y * stride + x);
        if (!memory.contains(base + offset, 1u))
            return fallback;
        texel = unpack_clut_entry(memory.aot_load8(base + offset), level);
        break;
    }
    case 6u: {
        const std::uint32_t byte_x = x * 2u;
        const std::uint32_t offset =
            swizzled ? swizzled_offset(byte_x, y, stride * 2u) : (y * stride * 2u + byte_x);
        if (!memory.contains(base + offset, 2u))
            return fallback;
        texel = unpack_clut_entry(memory.aot_load16(base + offset), level);
        break;
    }
    case 7u: {
        const std::uint32_t byte_x = x * 4u;
        const std::uint32_t offset =
            swizzled ? swizzled_offset(byte_x, y, stride * 4u) : (y * stride * 4u + byte_x);
        if (!memory.contains(base + offset, 4u))
            return fallback;
        texel = unpack_clut_entry(memory.aot_load32(base + offset), level);
        break;
    }
    default:
        return fallback;
    }
    return texel;
}

// PSP linear filtering uses four fractional bits and texel centers at n+0.5.
// Filter color/alpha before the texture function and fragment tests.
std::uint32_t sample_and_shade(const GuestMemory &memory, float u, float v, std::uint32_t vertex_color,
                               float footprint = 0.0f, float clip_w = 1.0f) {
    if (!g_state.texture_enabled || (g_state.clear_mode & 1u) != 0u || !std::isfinite(u) || !std::isfinite(v))
        return vertex_color;
    const auto lod_mode = g_state.commands[0xC8u] & 3u;
    const float delta = lod_mode == 0u   ? footprint
                        : lod_mode == 2u ? 2.0f * clip_w * std::bit_cast<float>(g_state.commands[0xD0u] << 8u)
                                         : 1.0f;
    int detail = 0;
    if (lod_mode == 0u || lod_mode == 2u) {
        if (std::isfinite(delta) && delta > 0.0f) {
            const auto bits = std::bit_cast<std::uint32_t>(delta);
            detail =
                (static_cast<int>((bits >> 23u) & 255u) - 127) * 16 + static_cast<int>((bits >> 19u) & 15u);
        } else
            detail = -2048;
    }
    detail += static_cast<std::int8_t>((g_state.commands[0xC8u] >> 16u) & 255u);
    const auto max_level = (g_state.texture_filter & 4u) != 0u ? (g_state.texture_mode >> 16u) & 7u : 0u;
    const bool linear =
        detail > 0 ? (g_state.texture_filter & 1u) != 0u : (g_state.texture_filter & 0x100u) != 0u;
    const bool linear_mip = (g_state.texture_filter & 2u) != 0u;
    const auto lod = static_cast<std::uint32_t>(std::clamp(detail, 0, static_cast<int>(max_level * 16u)));
    const auto level = linear_mip ? lod >> 4u : std::min(max_level, (lod + 8u) >> 4u);
    const auto sample_level = [&](std::uint32_t mip) {
        const float scale = 1.0f / static_cast<float>(1u << mip);
        const float su = u * scale, sv = v * scale;
        if (!linear)
            return read_texel(memory, static_cast<std::int32_t>(std::floor(su)),
                              static_cast<std::int32_t>(std::floor(sv)), vertex_color, mip);
        const auto fixed_u = static_cast<std::int32_t>(std::floor((su - 0.5f) * 16.0f));
        const auto fixed_v = static_cast<std::int32_t>(std::floor((sv - 0.5f) * 16.0f));
        const auto x = fixed_u >> 4, y = fixed_v >> 4;
        const auto fu = static_cast<std::uint32_t>(fixed_u) & 15u,
                   fv = static_cast<std::uint32_t>(fixed_v) & 15u;
        const std::array<std::uint32_t, 4> colors{read_texel(memory, x, y, vertex_color, mip),
                                                  read_texel(memory, x + 1, y, vertex_color, mip),
                                                  read_texel(memory, x, y + 1, vertex_color, mip),
                                                  read_texel(memory, x + 1, y + 1, vertex_color, mip)};
        std::uint32_t result = 0u;
        for (std::uint32_t shift = 0u; shift < 32u; shift += 8u) {
            const auto c = [&](std::size_t i) { return (colors[i] >> shift) & 255u; };
            result |=
                (((c(0) * (16u - fu) + c(1) * fu) * (16u - fv) + (c(2) * (16u - fu) + c(3) * fu) * fv) >> 8u)
                << shift;
        }
        return result;
    };
    std::uint32_t texel = sample_level(level);
    const auto fraction = linear_mip && level < max_level ? lod & 15u : 0u;
    if (fraction != 0u) {
        const auto next = sample_level(level + 1u);
        std::uint32_t mixed = 0u;
        for (std::uint32_t shift = 0u; shift < 32u; shift += 8u)
            mixed |=
                ((((texel >> shift) & 255u) * (16u - fraction) + ((next >> shift) & 255u) * fraction) >> 4u)
                << shift;
        texel = mixed;
    }
    const std::uint32_t ta = (texel >> 24u) & 0xFFu;
    const std::uint32_t tb = (texel >> 16u) & 0xFFu;
    const std::uint32_t tg = (texel >> 8u) & 0xFFu;
    const std::uint32_t tr = texel & 0xFFu;
    const std::uint32_t va = (vertex_color >> 24u) & 0xFFu;
    const std::uint32_t vb = (vertex_color >> 16u) & 0xFFu;
    const std::uint32_t vg = (vertex_color >> 8u) & 0xFFu;
    const std::uint32_t vr = vertex_color & 0xFFu;
    const bool use_texture_alpha = (g_state.texture_func & 0x100u) != 0u;
    const std::uint32_t alpha = use_texture_alpha ? ta * (va + 1u) / 256u : va;
    const std::uint32_t color_scale = (g_state.texture_func & 0x10000u) != 0u ? 2u : 1u;
    const auto boost = [color_scale](std::uint32_t value) { return std::min(255u, value * color_scale); };
    const auto modulate = [color_scale](std::uint32_t texture, std::uint32_t vertex) {
        return std::min(255u, texture * (vertex + 1u) * color_scale / 256u);
    };
    switch (g_state.texture_func & 7u) {
    case 0u: // modulate
        return (alpha << 24u) | (modulate(tb, vb) << 16u) | (modulate(tg, vg) << 8u) | modulate(tr, vr);
    case 1u: { // decal preserves vertex alpha
        const std::uint32_t factor = use_texture_alpha ? ta : 255u;
        const auto decal = [factor, color_scale, use_texture_alpha](std::uint32_t texture,
                                                                    std::uint32_t vertex) {
            if (!use_texture_alpha)
                return std::min(255u, texture * color_scale);
            return std::min(255u,
                            ((texture + 1u) * factor + (vertex + 1u) * (255u - factor)) * color_scale / 256u);
        };
        return (va << 24u) | (decal(tb, vb) << 16u) | (decal(tg, vg) << 8u) | decal(tr, vr);
    }
    case 2u: { // texture colour weights between vertex and environment colour
        const std::uint32_t eb = (g_state.texture_env_color >> 16u) & 0xFFu;
        const std::uint32_t eg = (g_state.texture_env_color >> 8u) & 0xFFu;
        const std::uint32_t er = g_state.texture_env_color & 0xFFu;
        auto mix = [color_scale](std::uint32_t texture, std::uint32_t vertex, std::uint32_t env) {
            return std::min(255u, (vertex * (255u - texture) + env * texture + 255u) * color_scale / 256u);
        };
        return (alpha << 24u) | (mix(tb, vb, eb) << 16u) | (mix(tg, vg, eg) << 8u) | mix(tr, vr, er);
    }
    case 3u: // replace
        return ((use_texture_alpha ? ta : va) << 24u) | (boost(tb) << 16u) | (boost(tg) << 8u) | boost(tr);
    default: // add; reserved functions also add on PSP
        return (alpha << 24u) | (boost(tb + vb) << 16u) | (boost(tg + vg) << 8u) | boost(tr + vr);
    }
}

std::uint32_t lerp_color(std::uint32_t c0, std::uint32_t c1, std::uint32_t c2, float w0, float w1, float w2) {
    // Barycentric interpolation: c = c0*w0 + c1*w1 + c2*w2 (weights normalised).
    auto channel = [&](std::uint32_t shift) {
        const float value = static_cast<float>((c0 >> shift) & 0xFFu) * w0 +
                            static_cast<float>((c1 >> shift) & 0xFFu) * w1 +
                            static_cast<float>((c2 >> shift) & 0xFFu) * w2;
        return static_cast<std::uint32_t>(std::clamp(value, 0.0f, 255.0f));
    };
    return (channel(24u) << 24u) | (channel(16u) << 16u) | (channel(8u) << 8u) | channel(0u);
}

void fill_rect(GuestMemory &memory, const Vertex &a, const Vertex &b, std::uint32_t rgba) {
    if (!a.drawable || !b.drawable)
        return;
    if (g_state.scissor_left >= g_state.scissor_right || g_state.scissor_top >= g_state.scissor_bottom)
        return;
    const auto bound = [](float coordinate, std::int32_t low, std::int32_t high) {
        return static_cast<std::int32_t>(
            std::clamp(std::ceil(coordinate - 0.5f), static_cast<float>(low), static_cast<float>(high)));
    };
    const auto x0 = bound(std::min(a.x, b.x), g_state.scissor_left, g_state.scissor_right);
    const auto y0 = bound(std::min(a.y, b.y), g_state.scissor_top, g_state.scissor_bottom);
    const auto x1 = bound(std::max(a.x, b.x), g_state.scissor_left, g_state.scissor_right);
    const auto y1 = bound(std::max(a.y, b.y), g_state.scissor_top, g_state.scissor_bottom);
    const float span_x = b.x - a.x, span_y = b.y - a.y;
    const float footprint = std::max(span_x != 0.0f ? std::abs((b.u - a.u) / span_x) : 0.0f,
                                     span_y != 0.0f ? std::abs((b.v - a.v) / span_y) : 0.0f);
    for (std::int32_t y = y0; y < y1; ++y) {
        for (std::int32_t x = x0; x < x1; ++x) {
            std::uint32_t color = rgba;
            if (g_state.texture_enabled) {
                const float fx = span_x != 0.0f ? ((static_cast<float>(x) + 0.5f - a.x) / span_x) : 0.0f;
                const float fy = span_y != 0.0f ? ((static_cast<float>(y) + 0.5f - a.y) / span_y) : 0.0f;
                const float u = a.u + (b.u - a.u) * fx;
                const float v = a.v + (b.v - a.v) * fy;
                color = sample_and_shade(memory, u, v, rgba, footprint, b.through ? 1.0f : b.clip[3]);
            }
            for (std::uint32_t shift = 0u; shift < 24u; shift += 8u) {
                const auto value =
                    std::min(255u, ((color >> shift) & 255u) + ((b.secondary_color >> shift) & 255u));
                color = (color & ~(255u << shift)) | (value << shift);
            }
            store_pixel(memory, x, y, color, b.z, b.fog);
        }
    }
}

// Edge-function rasterizer.  Vertex colours and texture coordinates interpolate
// barycentrically; textures combine through sample_and_shade.
void raster_triangle(GuestMemory &memory, const Vertex &v0, const Vertex &v1, const Vertex &v2) {
    if (!v0.drawable || !v1.drawable || !v2.drawable)
        return;
    if (g_state.scissor_left >= g_state.scissor_right || g_state.scissor_top >= g_state.scissor_bottom)
        return;
    const float area = (v1.x - v0.x) * (v2.y - v0.y) - (v2.x - v0.x) * (v1.y - v0.y);
    if (!std::isfinite(area) || area == 0.0f)
        return;
    if ((g_state.clear_mode & 1u) == 0u && (g_state.commands[0x1Du] & 1u) != 0u &&
        ((area > 0.0f) != ((g_state.commands[0x9Bu] & 1u) != 0u)))
        return;
    const auto bound = [](float coordinate, std::int32_t low, std::int32_t high) {
        return static_cast<std::int32_t>(
            std::clamp(coordinate, static_cast<float>(low), static_cast<float>(high)));
    };
    std::int32_t min_x =
        bound(std::floor(std::min({v0.x, v1.x, v2.x})), g_state.scissor_left, g_state.scissor_right - 1);
    std::int32_t max_x =
        bound(std::ceil(std::max({v0.x, v1.x, v2.x})), g_state.scissor_left, g_state.scissor_right - 1);
    std::int32_t min_y =
        bound(std::floor(std::min({v0.y, v1.y, v2.y})), g_state.scissor_top, g_state.scissor_bottom - 1);
    std::int32_t max_y =
        bound(std::ceil(std::max({v0.y, v1.y, v2.y})), g_state.scissor_top, g_state.scissor_bottom - 1);
    const auto top_left = [&](const Vertex &a, const Vertex &b) {
        const float dy = area > 0.0f ? b.y - a.y : a.y - b.y, dx = area > 0.0f ? b.x - a.x : a.x - b.x;
        return dy < 0.0f || (dy == 0.0f && dx > 0.0f);
    };
    const bool own0 = top_left(v0, v1), own1 = top_left(v1, v2), own2 = top_left(v2, v0);
    min_x = std::max(min_x, g_state.scissor_left);
    max_x = std::min(max_x, g_state.scissor_right - 1);
    min_y = std::max(min_y, g_state.scissor_top);
    max_y = std::min(max_y, g_state.scissor_bottom - 1);
    const float inv_area = 1.0f / area;
    const std::array<float, 3> dx{(v1.y - v2.y) * inv_area, (v2.y - v0.y) * inv_area,
                                  (v0.y - v1.y) * inv_area};
    const std::array<float, 3> dy{(v2.x - v1.x) * inv_area, (v0.x - v2.x) * inv_area,
                                  (v1.x - v0.x) * inv_area};
    const auto gradient = [&](float a, float b, float c, const auto &d) {
        return a * v0.inv_w * d[0] + b * v1.inv_w * d[1] + c * v2.inv_w * d[2];
    };
    const float qdx = gradient(1, 1, 1, dx), qdy = gradient(1, 1, 1, dy);
    const float udx = gradient(v0.u, v1.u, v2.u, dx), udy = gradient(v0.u, v1.u, v2.u, dy);
    const float vdx = gradient(v0.v, v1.v, v2.v, dx), vdy = gradient(v0.v, v1.v, v2.v, dy);
    for (std::int32_t y = min_y; y <= max_y; ++y) {
        for (std::int32_t x = min_x; x <= max_x; ++x) {
            const float px = static_cast<float>(x) + 0.5f;
            const float py = static_cast<float>(y) + 0.5f;
            const float w0 = (v1.x - v0.x) * (py - v0.y) - (px - v0.x) * (v1.y - v0.y);
            const float w1 = (v2.x - v1.x) * (py - v1.y) - (px - v1.x) * (v2.y - v1.y);
            const float w2 = (v0.x - v2.x) * (py - v2.y) - (px - v2.x) * (v0.y - v2.y);
            const auto covered = [&](float edge, bool owns) {
                if (area < 0.0f)
                    edge = -edge;
                return edge > 0.0f || (edge == 0.0f && owns);
            };
            const bool inside = covered(w0, own0) && covered(w1, own1) && covered(w2, own2);
            if (!inside)
                continue;
            const float b0 = w1 * inv_area;
            const float b1 = w2 * inv_area;
            const float b2 = w0 * inv_area;
            std::uint32_t color = (g_state.shade_mode & 1u) != 0u || (g_state.clear_mode & 1u) != 0u
                                      ? lerp_color(v0.color, v1.color, v2.color, b0, b1, b2)
                                      : v2.color;
            if (g_state.texture_enabled) {
                const float reciprocal = v0.inv_w * b0 + v1.inv_w * b1 + v2.inv_w * b2;
                if (reciprocal == 0.0f)
                    continue;
                const float texture_reciprocal =
                    v0.q * v0.inv_w * b0 + v1.q * v1.inv_w * b1 + v2.q * v2.inv_w * b2;
                if (texture_reciprocal == 0.0f)
                    continue;
                const float u =
                    (v0.u * v0.inv_w * b0 + v1.u * v1.inv_w * b1 + v2.u * v2.inv_w * b2) / texture_reciprocal;
                const float v =
                    (v0.v * v0.inv_w * b0 + v1.v * v1.inv_w * b1 + v2.v * v2.inv_w * b2) / texture_reciprocal;
                const float footprint = std::max(
                    {std::abs((udx - u * qdx) / reciprocal), std::abs((udy - u * qdy) / reciprocal),
                     std::abs((vdx - v * qdx) / reciprocal), std::abs((vdy - v * qdy) / reciprocal)});
                color = sample_and_shade(memory, u, v, color, footprint, 1.0f / reciprocal);
            }
            const auto secondary =
                (g_state.shade_mode & 1u) != 0u
                    ? lerp_color(v0.secondary_color, v1.secondary_color, v2.secondary_color, b0, b1, b2)
                    : v2.secondary_color;
            for (std::uint32_t shift = 0u; shift < 24u; shift += 8u) {
                const auto value = std::min(255u, ((color >> shift) & 255u) + ((secondary >> shift) & 255u));
                color = (color & ~(255u << shift)) | (value << shift);
            }
            store_pixel(memory, x, y, color, v0.z * b0 + v1.z * b1 + v2.z * b2,
                        v0.fog * b0 + v1.fog * b1 + v2.fog * b2);
        }
    }
}

void fill_triangle(GuestMemory &memory, const Vertex &v0, const Vertex &v1, const Vertex &v2) {
    if (v0.through) {
        raster_triangle(memory, v0, v1, v2);
        return;
    }
    // Keep clip-space coordinates until the polygon is clipped. Dividing a
    // triangle crossing W=0 first creates huge, inverted screen triangles.
    std::array<Vertex, 16> polygon{}, output{};
    polygon[0] = v0;
    polygon[1] = v1;
    polygon[2] = v2;
    if ((g_state.shade_mode & 1u) == 0u && (g_state.clear_mode & 1u) == 0u)
        for (std::size_t i = 0u; i < 3u; ++i) {
            polygon[i].color = v2.color;
            polygon[i].secondary_color = v2.secondary_color;
        }
    std::size_t count = 3u;
    const std::uint32_t planes = g_state.depth_clip_enabled ? 6u : 4u;
    const auto distance = [](const Vertex &v, std::uint32_t plane) {
        const std::uint32_t axis = plane / 2u;
        return v.clip[3] + ((plane & 1u) == 0u ? v.clip[axis] : -v.clip[axis]);
    };
    for (std::uint32_t plane = 0u; plane < planes && count != 0u; ++plane) {
        std::size_t next_count = 0u;
        Vertex previous = polygon[count - 1u];
        float previous_distance = distance(previous, plane);
        for (std::size_t i = 0u; i < count; ++i) {
            const Vertex current = polygon[i];
            const float current_distance = distance(current, plane);
            const bool was_inside = previous_distance >= 0.0f, is_inside = current_distance >= 0.0f;
            if (was_inside != is_inside) {
                const float t = previous_distance / (previous_distance - current_distance);
                Vertex intersection = previous;
                for (std::size_t axis = 0u; axis < 4u; ++axis)
                    intersection.clip[axis] += (current.clip[axis] - previous.clip[axis]) * t;
                intersection.u += (current.u - previous.u) * t;
                intersection.v += (current.v - previous.v) * t;
                intersection.q += (current.q - previous.q) * t;
                intersection.fog += (current.fog - previous.fog) * t;
                intersection.secondary_color =
                    lerp_color(previous.secondary_color, current.secondary_color, 0u, 1.0f - t, t, 0.0f);
                intersection.color = lerp_color(previous.color, current.color, 0u, 1.0f - t, t, 0.0f);
                if (next_count < output.size())
                    output[next_count++] = intersection;
            }
            if (is_inside && next_count < output.size())
                output[next_count++] = current;
            previous = current;
            previous_distance = current_distance;
        }
        polygon = output;
        count = next_count;
    }
    for (std::size_t i = 0u; i < count; ++i) {
        auto &v = polygon[i];
        const float w = v.clip[3];
        v.drawable = std::isfinite(w) && w > 0.000001f;
        if (!v.drawable)
            continue;
        v.inv_w = 1.0f / w;
        v.x = v.clip[0] * v.inv_w * g_state.viewport_scale[0] + g_state.viewport_center[0] -
              g_state.screen_offset_x;
        v.y = v.clip[1] * v.inv_w * g_state.viewport_scale[1] + g_state.viewport_center[1] -
              g_state.screen_offset_y;
        v.z = v.clip[2] * v.inv_w * g_state.viewport_scale[2] + g_state.viewport_center[2];
    }
    for (std::size_t i = 1u; i + 1u < count; ++i)
        raster_triangle(memory, polygon[0], polygon[i], polygon[i + 1u]);
}

// PSP vertex layouts are fully described by the VTYPE word.  Attribute blocks
// are laid out weight, texture, colour, normal, position, each aligned to its
// own granularity, and the whole record is padded to the largest alignment
// (so a colour plus a 16-bit position is 12 bytes, not 8).  16-bit positions
// are always three components; through mode only ignores the third.
struct VertexLayout {
    std::uint32_t type{};
    std::uint32_t tc_type{};
    std::uint32_t color_type{};
    std::uint32_t normal_type{};
    std::uint32_t position_type{};
    std::uint32_t weight_type{};
    std::uint32_t weight_count{1u};
    std::uint32_t morph_count{1u};
    std::uint32_t tc_offset{};
    std::uint32_t color_offset{};
    std::uint32_t normal_offset{};
    std::uint32_t position_offset{};
    std::uint32_t weight_offset{};
    std::uint32_t one_size{};
    std::uint32_t stride{};
};

std::uint32_t align_up(std::uint32_t value, std::uint32_t alignment) noexcept {
    if (alignment <= 1u)
        return value;
    return (value + alignment - 1u) & ~(alignment - 1u);
}

bool build_vertex_layout(std::uint32_t type, VertexLayout &layout) {
    static constexpr std::uint32_t tc_size[4]{0u, 2u, 4u, 8u};
    static constexpr std::uint32_t tc_align[4]{1u, 1u, 2u, 4u};
    static constexpr std::uint32_t color_size[8]{0u, 0u, 0u, 0u, 2u, 2u, 2u, 4u};
    static constexpr std::uint32_t color_align[8]{1u, 1u, 1u, 1u, 2u, 2u, 2u, 4u};
    static constexpr std::uint32_t normal_size[4]{0u, 3u, 6u, 12u};
    static constexpr std::uint32_t normal_align[4]{1u, 1u, 2u, 4u};
    static constexpr std::uint32_t position_size[4]{0u, 3u, 6u, 12u};
    static constexpr std::uint32_t position_align[4]{1u, 1u, 2u, 4u};
    static constexpr std::uint32_t weight_size[4]{0u, 1u, 2u, 4u};
    static constexpr std::uint32_t weight_align[4]{1u, 1u, 2u, 4u};

    layout = VertexLayout{};
    layout.type = type;
    layout.tc_type = type & 3u;
    layout.color_type = (type >> 2u) & 7u;
    layout.normal_type = (type >> 5u) & 3u;
    layout.position_type = (type >> 7u) & 3u;
    layout.weight_type = (type >> 9u) & 3u;
    layout.weight_count = ((type >> 14u) & 7u) + 1u;
    layout.morph_count = ((type >> 18u) & 7u) + 1u;
    if (layout.position_type == 0u)
        return false;

    std::uint32_t offset = 0u;
    if (layout.weight_type != 0u) {
        offset = align_up(offset, weight_align[layout.weight_type]);
        layout.weight_offset = offset;
        offset += weight_size[layout.weight_type] * layout.weight_count;
    }
    offset = align_up(offset, tc_align[layout.tc_type]);
    layout.tc_offset = offset;
    offset += tc_size[layout.tc_type];
    offset = align_up(offset, color_align[layout.color_type]);
    layout.color_offset = offset;
    offset += color_size[layout.color_type];
    offset = align_up(offset, normal_align[layout.normal_type]);
    layout.normal_offset = offset;
    offset += normal_size[layout.normal_type];
    offset = align_up(offset, position_align[layout.position_type]);
    layout.position_offset = offset;
    offset += position_size[layout.position_type];

    const std::uint32_t final_alignment =
        std::max({tc_align[layout.tc_type], color_align[layout.color_type], normal_align[layout.normal_type],
                  position_align[layout.position_type], weight_align[layout.weight_type]});
    layout.one_size = align_up(offset, final_alignment);
    layout.stride = layout.one_size * layout.morph_count;
    return layout.stride != 0u;
}

const VertexLayout &layout_for_type(std::uint32_t type) {
    struct Cache {
        std::uint32_t type{0xFFFFFFFFu};
        VertexLayout layout{};
        bool valid{};
    };
    static thread_local Cache cache;
    if (!cache.valid || cache.type != type) {
        cache.type = type;
        cache.valid = build_vertex_layout(type, cache.layout);
    }
    return cache.layout;
}

// Vertex colours use the GE's 0xAABBGGRR dword, the same order the framebuffer
// writer uses, so 8888 needs no conversion.
std::uint32_t decode_packed_color(std::uint32_t packed, std::uint32_t type) {
    switch (type) {
    case 4u: {
        const std::uint32_t r5 = packed & 0x1Fu;
        const std::uint32_t g6 = (packed >> 5u) & 0x3Fu;
        const std::uint32_t b5 = (packed >> 11u) & 0x1Fu;
        return 0xFF000000u | ((b5 << 3u | b5 >> 2u) << 16u) | ((g6 << 2u | g6 >> 4u) << 8u) |
               (r5 << 3u | r5 >> 2u);
    }
    case 5u: {
        const std::uint32_t r5 = packed & 0x1Fu;
        const std::uint32_t g5 = (packed >> 5u) & 0x1Fu;
        const std::uint32_t b5 = (packed >> 10u) & 0x1Fu;
        const std::uint32_t a1 = (packed >> 15u) != 0u ? 0xFFu : 0u;
        return (a1 << 24u) | ((b5 << 3u | b5 >> 2u) << 16u) | ((g5 << 3u | g5 >> 2u) << 8u) |
               (r5 << 3u | r5 >> 2u);
    }
    case 6u: {
        const std::uint32_t r4 = packed & 0xFu;
        const std::uint32_t g4 = (packed >> 4u) & 0xFu;
        const std::uint32_t b4 = (packed >> 8u) & 0xFu;
        const std::uint32_t a4 = (packed >> 12u) & 0xFu;
        return ((a4 * 17u) << 24u) | ((b4 * 17u) << 16u) | ((g4 * 17u) << 8u) | (r4 * 17u);
    }
    case 7u:
        return packed;
    default:
        return 0xFFFFFFFFu;
    }
}

std::uint32_t unpack_vertex_color(const GuestMemory &memory, std::uint32_t address, std::uint32_t type) {
    if (type < 4u || type > 7u)
        return 0xFFFFFFFFu;
    return decode_packed_color(type == 7u ? memory.aot_load32(address) : memory.aot_load16(address), type);
}

float command_float(std::uint32_t value) { return std::bit_cast<float>(value << 8u); }
Vec3 transform_direction(const std::array<float, 12> &m, const Vec3 &v) {
    return {m[0] * v[0] + m[3] * v[1] + m[6] * v[2], m[1] * v[0] + m[4] * v[1] + m[7] * v[2],
            m[2] * v[0] + m[5] * v[1] + m[8] * v[2]};
}
Vec3 transform_position(const std::array<float, 12> &m, const Vec3 &v) {
    auto result = transform_direction(m, v);
    for (std::size_t i = 0; i < 3u; ++i)
        result[i] += m[9u + i];
    return result;
}
float dot3(const Vec3 &a, const Vec3 &b) { return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; }
Vec3 normalize3(const Vec3 &v) {
    const float length = std::sqrt(dot3(v, v));
    if (!std::isfinite(length) || length <= 0.000001f)
        return {0, 0, 1};
    return {v[0] / length, v[1] / length, v[2] / length};
}

// Everything light_vertex needs that depends only on GE commands and the view
// matrix. Rebuilt when GeState::lighting_epoch changes; every value is
// computed by the same expression the per-vertex code used, so lighting is
// bit-identical.
struct LightSetup {
    std::uint64_t epoch{};
    std::array<float, 3> emissive{}, ambient_light{};
    std::array<std::array<float, 3>, 3> material{};  // ambient, diffuse, specular command colors
    Vec3 view_direction{};
    float exponent{};
    struct Light {
        bool enabled{};
        std::uint32_t type{}, kind{};
        Vec3 direction{};         // raw command vector (position for point/spot lights)
        Vec3 unit_direction{};    // normalized, directional lights only
        Vec3 halfway{};           // directional specular halfway vector
        float a0{}, a1{}, a2{};   // attenuation
        Vec3 spot{};
        float cutoff{}, spot_exponent{};
        std::array<float, 3> ambient{}, diffuse{}, specular{};
    };
    std::array<Light, 4> lights{};
};

float color_component(std::uint32_t color, std::size_t i) {
    return static_cast<float>((color >> (i * 8u)) & 255u) / 255.0f;
}

const LightSetup &light_setup(const GeState &state) {
    thread_local LightSetup setup;
    if (setup.epoch == state.lighting_epoch)
        return setup;
    const auto &c = state.commands;
    setup.epoch = state.lighting_epoch;
    for (std::size_t j = 0; j < 3u; ++j) {
        setup.emissive[j] = color_component(c[0x54u], j);
        setup.ambient_light[j] = color_component(c[0x5Cu], j);
        for (std::size_t m = 0; m < 3u; ++m)
            setup.material[m][j] = color_component(c[0x55u + m], j);
    }
    setup.view_direction = normalize3({state.view[2], state.view[5], state.view[8]});
    setup.exponent = std::max(0.0f, command_float(c[0x5Bu]));
    for (std::size_t i = 0; i < 4u; ++i) {
        auto &light = setup.lights[i];
        light.enabled = (c[0x18u + i] & 1u) != 0u;
        if (!light.enabled)
            continue;
        light.type = (c[0x5Fu + i] >> 8u) & 3u;
        light.kind = c[0x5Fu + i] & 3u;
        for (std::size_t j = 0; j < 3u; ++j)
            light.direction[j] = command_float(c[0x63u + i * 3u + j]);
        light.a0 = command_float(c[0x7Bu + i * 3u]);
        light.a1 = command_float(c[0x7Cu + i * 3u]);
        light.a2 = command_float(c[0x7Du + i * 3u]);
        if (light.type == 0u) {
            light.unit_direction = normalize3(light.direction);
            light.halfway = normalize3({light.unit_direction[0] + setup.view_direction[0],
                                        light.unit_direction[1] + setup.view_direction[1],
                                        light.unit_direction[2] + setup.view_direction[2]});
        }
        if (light.type >= 2u) {
            light.spot = normalize3({command_float(c[0x6Fu + i * 3u]), command_float(c[0x70u + i * 3u]),
                                     command_float(c[0x71u + i * 3u])});
            light.cutoff = command_float(c[0x8Bu + i]);
            light.spot_exponent = std::max(0.0f, command_float(c[0x87u + i]));
        }
        for (std::size_t j = 0; j < 3u; ++j) {
            light.ambient[j] = color_component(c[0x8Fu + i * 3u], j);
            light.diffuse[j] = color_component(c[0x90u + i * 3u], j);
            light.specular[j] = color_component(c[0x91u + i * 3u], j);
        }
    }
    return setup;
}

void light_vertex(const GeState &state, const Vec3 &position, const Vec3 &normal, Vertex &vertex) {
    const auto &c = state.commands;
    const auto &setup = light_setup(state);
    // Vertex colors replace a material color when its 0x53 bit is set.
    std::array<std::array<float, 3>, 3> material = setup.material;
    if (vertex.has_color)
        for (std::size_t m = 0; m < 3u; ++m)
            if ((c[0x53u] & (1u << m)) != 0u)
                for (std::size_t j = 0; j < 3u; ++j)
                    material[m][j] = color_component(vertex.color, j);
    const auto &ambient = material[0], &diffuse = material[1], &specular = material[2];
    std::array<float, 3> result{}, highlight{};
    for (std::size_t j = 0; j < 3u; ++j)
        result[j] = setup.emissive[j] + ambient[j] * setup.ambient_light[j];
    const float exponent = setup.exponent;
    for (const auto &light : setup.lights) {
        if (!light.enabled)
            continue;
        Vec3 direction = light.direction;
        float attenuation = 1.0f;
        if (light.type != 0u) {
            for (std::size_t j = 0; j < 3u; ++j)
                direction[j] -= position[j];
            const float distance = std::sqrt(dot3(direction, direction));
            const float denominator = light.a0 + distance * light.a1 + distance * distance * light.a2;
            attenuation = denominator > 0.0f ? std::clamp(1.0f / denominator, 0.0f, 1.0f) : 1.0f;
            direction = normalize3(direction);
        } else {
            direction = light.unit_direction;
        }
        if (light.type >= 2u) {
            const float cosine = -dot3(direction, light.spot);
            attenuation *= cosine >= light.cutoff ? std::pow(std::max(cosine, 0.0f), light.spot_exponent) : 0.0f;
        }
        const float facing = std::max(0.0f, dot3(normal, direction));
        const float diffuse_factor = light.kind == 2u ? std::pow(facing, exponent) : facing;
        float specular_factor = 0.0f;
        if (light.kind == 1u && facing > 0.0f) {
            const auto halfway = light.type == 0u
                ? light.halfway
                : normalize3({direction[0] + setup.view_direction[0], direction[1] + setup.view_direction[1],
                              direction[2] + setup.view_direction[2]});
            specular_factor = std::pow(std::max(0.0f, dot3(normal, halfway)), exponent);
        }
        for (std::size_t j = 0; j < 3u; ++j) {
            result[j] += attenuation * (ambient[j] * light.ambient[j] + diffuse_factor * diffuse[j] * light.diffuse[j]);
            highlight[j] += attenuation * specular_factor * specular[j] * light.specular[j];
        }
    }
    const auto alpha = vertex.has_color && (c[0x53u] & 1u) != 0u ? vertex.color >> 24u : state.material_alpha;
    vertex.color = ((alpha * (c[0x5Du] & 255u) + 127u) / 255u) << 24u;
    vertex.secondary_color = 0u;
    for (std::size_t j = 0; j < 3u; ++j) {
        if ((c[0x5Eu] & 1u) == 0u)
            result[j] += highlight[j];
        else
            vertex.secondary_color |=
                static_cast<std::uint32_t>(std::clamp(highlight[j] * 255.0f, 0.0f, 255.0f)) << (j * 8u);
        vertex.color |= static_cast<std::uint32_t>(std::clamp(result[j] * 255.0f, 0.0f, 255.0f)) << (j * 8u);
    }
}

bool decode_vertex(const GuestMemory &memory, const GeState &state, std::uint32_t &cursor, Vertex &vertex,
                   bool hardware_transform = false) {
    const auto &layout = layout_for_type(state.vertex_type);
    if (layout.stride == 0u || !memory.contains(cursor, layout.stride))
        return false;
    const auto base = cursor;
    cursor += layout.stride;
    vertex.through = (state.vertex_type & 0x800000u) != 0u;
    vertex.has_texture = layout.tc_type != 0u;
    vertex.has_color = layout.color_type >= 4u;
    const auto signed_value = [&](std::uint32_t at, std::uint32_t type, bool normalized) {
        if (type == 1u)
            return static_cast<float>(static_cast<std::int8_t>(memory.aot_load8(at))) /
                   (normalized ? 128.0f : 1.0f);
        if (type == 2u)
            return static_cast<float>(static_cast<std::int16_t>(memory.aot_load16(at))) /
                   (normalized ? 32768.0f : 1.0f);
        return std::bit_cast<float>(memory.aot_load32(at));
    };
    const auto unsigned_value = [&](std::uint32_t at, std::uint32_t type, bool normalized) {
        if (type == 1u)
            return static_cast<float>(memory.aot_load8(at)) / (normalized ? 128.0f : 1.0f);
        if (type == 2u)
            return static_cast<float>(memory.aot_load16(at)) / (normalized ? 32768.0f : 1.0f);
        return std::bit_cast<float>(memory.aot_load32(at));
    };
    Vec3 p{}, normal{};
    std::array<float, 4> color{};
    const auto count = vertex.through ? 1u : layout.morph_count;
    for (std::uint32_t i = 0u; i < count; ++i) {
        const auto target = base + i * layout.one_size;
        const float weight = count == 1u ? 1.0f : state.morph_weights[i];
        const auto position_step = 1u << (layout.position_type - 1u);
        for (std::uint32_t j = 0u; j < 3u; ++j) {
            const auto at = target + layout.position_offset + j * position_step;
            const float value = vertex.through && j == 2u && layout.position_type != 3u
                                    ? unsigned_value(at, layout.position_type, false)
                                    : signed_value(at, layout.position_type, !vertex.through);
            p[j] += weight * value;
            const float n =
                layout.normal_type == 0u
                    ? (j == 2u ? 1.0f : 0.0f)
                    : signed_value(target + layout.normal_offset + j * (1u << (layout.normal_type - 1u)),
                                   layout.normal_type, true);
            normal[j] += weight * n;
        }
        if (vertex.has_texture) {
            const auto at = target + layout.tc_offset, step = 1u << (layout.tc_type - 1u);
            vertex.u += weight * unsigned_value(at, layout.tc_type, !vertex.through);
            vertex.v += weight * unsigned_value(at + step, layout.tc_type, !vertex.through);
        }
        if (vertex.has_color) {
            const auto packed = unpack_vertex_color(memory, target + layout.color_offset, layout.color_type);
            for (std::uint32_t j = 0u; j < 4u; ++j)
                color[j] += weight * static_cast<float>((packed >> (j * 8u)) & 255u);
        }
    }
    vertex.color = (state.material_alpha << 24u) | state.material_color;
    if (vertex.has_color) {
        vertex.color = 0u;
        for (std::uint32_t j = 0u; j < 4u; ++j)
            vertex.color |= static_cast<std::uint32_t>(std::clamp(color[j], 0.0f, 255.0f)) << (j * 8u);
    }
    if (vertex.through) {
        vertex.x = p[0];
        vertex.y = p[1];
        vertex.z = p[2];
    } else {
        if (state.reverse_normal != 0u)
            for (auto &n : normal)
                n = -n;
        if (layout.weight_type != 0u) {
            Vec3 skinned{}, skinned_normal{};
            for (std::uint32_t i = 0u; i < layout.weight_count; ++i) {
                const float weight =
                    unsigned_value(base + layout.weight_offset + i * (1u << (layout.weight_type - 1u)),
                                   layout.weight_type, true);
                const auto bone = transform_position(state.bones[i], p),
                           bone_normal = transform_direction(state.bones[i], normal);
                for (std::size_t j = 0u; j < 3u; ++j) {
                    skinned[j] += bone[j] * weight;
                    skinned_normal[j] += bone_normal[j] * weight;
                }
            }
            p = skinned;
            normal = skinned_normal;
        }
        const auto model_position = p;
        const auto world = transform_position(state.world, p);
        const auto world_normal = normalize3(transform_direction(state.world, normal));
        if ((state.commands[0x17u] & 1u) != 0u)
            light_vertex(state, world, world_normal, vertex);
        if (!hardware_transform) {
        p = transform_position(state.view, world);
        if ((state.commands[0x1Fu] & 1u) != 0u) {
            const float fog =
                (p[2] + command_float(state.commands[0xCDu])) * command_float(state.commands[0xCEu]);
            vertex.fog = std::isfinite(fog) ? fog : 1.0f;
        }
        const auto &m = state.projection;
        const float w = m[3] * p[0] + m[7] * p[1] + m[11] * p[2] + m[15];
        vertex.clip = {m[0] * p[0] + m[4] * p[1] + m[8] * p[2] + m[12],
                       m[1] * p[0] + m[5] * p[1] + m[9] * p[2] + m[13],
                       m[2] * p[0] + m[6] * p[1] + m[10] * p[2] + m[14], w};
        vertex.drawable = std::isfinite(w) && w > 0.000001f;
        vertex.inv_w = vertex.drawable ? 1.0f / w : 1.0f;
        vertex.x = vertex.clip[0] * vertex.inv_w * state.viewport_scale[0] + state.viewport_center[0] -
                   state.screen_offset_x;
        vertex.y = vertex.clip[1] * vertex.inv_w * state.viewport_scale[1] + state.viewport_center[1] -
                   state.screen_offset_y;
        vertex.z = vertex.clip[2] * vertex.inv_w * state.viewport_scale[2] + state.viewport_center[2];
        } else {
            vertex.x = model_position[0]; vertex.y = model_position[1]; vertex.z = model_position[2];
        }
        const auto uv_mode = state.commands[0xC0u] & 3u;
        const auto uv_source = (state.commands[0xC0u] >> 8u) & 3u;
        const float texture_width = static_cast<float>(1u << (state.texture_size & 15u));
        const float texture_height = static_cast<float>(1u << ((state.texture_size >> 8u) & 15u));
        vertex.q = 1.0f;
        if (uv_mode == 1u) {
            Vec3 source{};
            switch (uv_source) {
            case 0u: source = model_position; break;
            case 1u: source = {vertex.u, vertex.v, 0.0f}; break;
            case 2u: source = normalize3(normal); break;
            case 3u: source = normal; break;
            }
            const auto stq = transform_position(state.texture_matrix, source);
            vertex.u = stq[0] * texture_width;
            vertex.v = stq[1] * texture_height;
            vertex.q = stq[2];
        } else if (uv_mode == 2u) {
            const std::uint32_t shade = state.commands[0xC1u];
            const std::uint32_t light_s = shade & 3u;
            const std::uint32_t light_t = (shade >> 8u) & 3u;
            auto light_vector = [&](std::uint32_t light) {
                return normalize3(Vec3{
                    command_float(state.commands[0x63u + light * 3u]),
                    command_float(state.commands[0x64u + light * 3u]),
                    command_float(state.commands[0x65u + light * 3u]),
                });
            };
            vertex.u = ((dot3(light_vector(light_s), world_normal) + 1.0f) * 0.5f) * texture_width;
            vertex.v = ((dot3(light_vector(light_t), world_normal) + 1.0f) * 0.5f) * texture_height;
        } else if (layout.tc_type != 0u) {
            vertex.u = (vertex.u * state.texture_scale_u + state.texture_offset_u) * texture_width;
            vertex.v = (vertex.v * state.texture_scale_v + state.texture_offset_v) * texture_height;
        }
    }
    if (!std::isfinite(vertex.x) || !std::isfinite(vertex.y) || !std::isfinite(vertex.z))
        vertex.drawable = false;
    return true;
}

void inspect_vertex_data(const DrawInspection &settings, const GuestMemory &memory, std::uint64_t submission,
                         std::uint64_t draw, const std::vector<Vertex> &vertices) {
    if (!settings.enabled || (settings.select_submission && submission != settings.submission) ||
        (settings.select_draw && draw != settings.draw) ||
        (!settings.select_draw && (!settings.capture || draw < settings.first || draw > settings.last)))
        return;
    const auto prefix =
        settings.directory / ("submission_" + std::to_string(submission) + "_draw_" + std::to_string(draw));
    std::ofstream data(prefix.string() + "_vertices.csv");
    data << "x,y,z,u,v,inv_w,color,secondary,fog,clip_w,raw_hex\n";
    const auto &layout = layout_for_type(g_state.vertex_type);
    for (std::size_t i = 0; i < std::min<std::size_t>(128, vertices.size()); ++i) {
        const auto &v = vertices[i];
        std::ostringstream raw_hex;
        const std::uint32_t v_addr = g_state.vertex_address + static_cast<std::uint32_t>(i * layout.stride);
        for (std::uint32_t b = 0; b < layout.stride && memory.contains(v_addr + b, 1u); ++b) {
            char buf[4];
            snprintf(buf, sizeof(buf), "%02X", memory.aot_load8(v_addr + b));
            raw_hex << buf;
        }
        data << v.x << ',' << v.y << ',' << v.z << ',' << v.u << ',' << v.v << ',' << v.inv_w << ','
             << v.color << ',' << v.secondary_color << ',' << v.fog << ',' << v.clip[3] << ','
             << raw_hex.str() << '\n';
    }
    if (!g_state.texture_enabled)
        return;
    const auto width = std::min(512u, 1u << (g_state.texture_size & 15u));
    const auto height = std::min(512u, 1u << ((g_state.texture_size >> 8u) & 15u));
    std::ofstream rgb(prefix.string() + "_texture.ppm", std::ios::binary);
    std::ofstream alpha(prefix.string() + "_alpha.ppm", std::ios::binary);
    rgb << "P6\n" << width << ' ' << height << "\n255\n";
    alpha << "P6\n" << width << ' ' << height << "\n255\n";
    for (std::uint32_t y = 0; y < height; ++y)
        for (std::uint32_t x = 0; x < width; ++x) {
            const auto color = read_texel(memory, static_cast<int>(x), static_cast<int>(y), 0u, 0u);
            const std::array<char, 3> pixel{static_cast<char>(color), static_cast<char>(color >> 8u),
                                            static_cast<char>(color >> 16u)};
            const std::array<char, 3> opacity{static_cast<char>(color >> 24u),
                                              static_cast<char>(color >> 24u),
                                              static_cast<char>(color >> 24u)};
            rgb.write(pixel.data(), 3);
            alpha.write(opacity.data(), 3);
        }
}

// Detailed race frames exceed 64K commands before their final vehicle/HUD
// passes. Keep a generous malformed-list guard, never a silent frame cutoff.
constexpr std::uint32_t kMaxCommandsPerList = 1u << 20u;

std::uint64_t hash_bytes(std::uint64_t hash, const void *data, std::size_t bytes) {
    const auto *source = static_cast<const std::uint8_t *>(data);
    // Word-wise FNV-1a variant with an avalanche step.  Texture content keys
    // hash hundreds of KiB per list, where the original byte-at-a-time loop
    // ran at roughly 1 GiB/s and dominated draw submission.  Mixing 8 bytes per
    // iteration keeps the same collision behavior for cache keys.
    while (bytes >= 8u) {
        std::uint64_t word = 0;
        std::memcpy(&word, source, sizeof(word));
        hash = (hash ^ word) * 1099511628211ull;
        hash ^= hash >> 29u;
        source += 8u;
        bytes -= 8u;
    }
    while (bytes != 0u) {
        hash = (hash ^ *source++) * 1099511628211ull;
        --bytes;
    }
    return hash;
}

const GpuTexture *gpu_texture(GuestMemory &memory) {
    if (!g_state.texture_enabled || (g_state.clear_mode & 1u)) return nullptr;
    if(g_list_texture_epoch!=gpu_memory_epoch()) {
        g_list_texture_keys.clear(); g_list_texture_epoch=gpu_memory_epoch();
    }
    const auto max_level = (g_state.texture_filter & 4u) ? (g_state.texture_mode >> 16u) & 7u : 0u;
    if(max_level==0 && g_state.texture_format<=3 && !(g_state.texture_mode&1) &&
       gpu_feedback_available(g_state.texture_address,g_state.texture_stride,g_state.texture_format)) {
        static GpuTexture feedback;
        feedback.width=1u<<(g_state.texture_size&15); feedback.height=1u<<((g_state.texture_size>>8)&15);
        if(feedback.width>1024 || feedback.height>1024) throw std::runtime_error("MotorStorm GPU feedback dimensions exceed PSP limit");
        feedback.feedback_address=g_state.texture_address; feedback.feedback_stride=g_state.texture_stride;
        feedback.feedback_format=g_state.texture_format;
        return &feedback;
    }
    std::uint64_t state_key = 14695981039346656037ull;
    const std::array<std::uint32_t, 6> values{g_state.texture_address,g_state.texture_stride,
        g_state.texture_format,g_state.texture_mode,g_state.texture_size,g_state.texture_clut_format};
    state_key = hash_bytes(state_key,values.data(),sizeof(values));
    state_key = hash_bytes(state_key,&g_state.clut_hash,sizeof(g_state.clut_hash));
    struct Level { std::uint32_t address,bytes,width,height,stride; };
    std::array<Level,8> levels{};
    for (std::uint32_t mip=0;mip<=max_level;++mip) {
        const auto size=mip ? g_state.commands[0xB8u+mip] : g_state.texture_size;
        const auto width=1u<<(size&15u),height=1u<<((size>>8)&15u);
        if(width>1024 || height>1024) throw std::runtime_error("MotorStorm GPU texture dimensions exceed PSP limit");
        const auto address=mip ? (g_state.commands[0xA0u+mip]&0xFFFFF0u)|((g_state.commands[0xA8u+mip]<<8)&0x0F000000u) : g_state.texture_address;
        const auto stride=mip ? std::max(1u,g_state.commands[0xA8u+mip]&0x7FFu) : g_state.texture_stride;
        const auto bpp=g_state.texture_format==4 ? 4u : g_state.texture_format==5 ? 8u :
            g_state.texture_format==3 || g_state.texture_format==7 ? 32u : 16u;
        const auto row_bytes=(stride*bpp+7)/8;
        const auto bytes=(g_state.texture_mode&1) ? ((height+7)&~7u)*std::max(16u,(row_bytes+15)&~15u) : height*row_bytes;
        levels[mip]={address,bytes,width,height,stride};
        state_key=hash_bytes(state_key,&levels[mip],sizeof(Level));
        gpu_sync_texture(memory,address,bytes);
        if(g_list_texture_epoch!=gpu_memory_epoch()) {
            g_list_texture_keys.clear(); g_list_texture_epoch=gpu_memory_epoch();
        }
    }
    if(auto found=g_list_texture_keys.find(state_key);found!=g_list_texture_keys.end()) {
        auto &cached=g_gpu_textures.at(found->second);
        cached.last_use=g_texture_clock;
        return &cached;
    }
    auto content_key=state_key;
    // Hash in L1-friendly chunks so no per-texture heap copy is needed; only
    // the content key consumes the bytes, the decoder reads guest memory again.
    std::array<std::uint8_t,16u*1024u> chunk{};
    for(std::uint32_t mip=0;mip<=max_level;++mip) {
        const auto &level=levels[mip];
        if(!memory.contains(level.address,level.bytes)) continue;
        std::uint32_t offset=0u;
        while(offset<level.bytes) {
            const auto count=std::min<std::uint32_t>(static_cast<std::uint32_t>(chunk.size()),
                                                     level.bytes-offset);
            memory.copy_out(level.address+offset,{chunk.data(),count});
            content_key=hash_bytes(content_key,chunk.data(),count);
            offset+=count;
        }
    }
    // Video frames rewrite the same texture every frame: after a few content
    // changes in consecutive lists the texture streams into a single cache
    // entry and GPU texture instead of creating new ones (and skips pack
    // matching). Slots the game merely reuses for other textures over time
    // (track streaming) change rarely and keep normal, matchable textures.
    if(g_texture_streams.size()>8192) g_texture_streams.clear();
    auto &stream=g_texture_streams[state_key];
    if(stream.content!=content_key) {
        const auto list=g_summary.lists_executed;
        stream.changes=stream.content!=0u && list-stream.last_change<=4u ? stream.changes+1u : 0u;
        stream.last_change=list;
        stream.content=content_key;
    }
    const bool streaming=stream.changes>=3u && gpu_texture_decode();
    const auto cache_key=streaming ? (state_key ^ 0x53545245414D0000ull) : content_key;
    auto found=g_gpu_textures.find(cache_key);
    if(found==g_gpu_textures.end() || (streaming && found->second.generation!=content_key)) {
        GpuTexture texture; texture.key=cache_key; texture.width=levels[0].width; texture.height=levels[0].height;
        texture.streaming=streaming; texture.generation=content_key;
        texture.format=g_state.texture_format; texture.clut_mode=g_state.texture_clut_format;
        texture.texture_mode=g_state.texture_mode;
        std::memcpy(texture.clut.data(),g_state.clut.data(),g_state.clut.size());
        bool raw_ok=gpu_texture_decode();
        for(std::uint32_t mip=0;mip<=max_level && raw_ok;++mip) {
            const auto &level=levels[mip];
            if(level.width!=std::max(1u,texture.width>>mip) || level.height!=std::max(1u,texture.height>>mip)) break;
            const auto extent=std::max(level.bytes,texel_extent(texture.format,level.width,level.height,level.stride,
                                                                  (texture.texture_mode&1u)!=0u));
            if(texture.format>7u || !memory.contains(level.address,extent)) { raw_ok=false; break; }
            auto &raw=texture.raw.emplace_back();
            raw.width=level.width; raw.height=level.height; raw.stride=level.stride;
            raw.bytes.resize(extent);
            memory.copy_out(level.address,raw.bytes);
        }
        if(!raw_ok) {
            // CPU path: decoded RGBA levels.
            texture.raw.clear();
            for(std::uint32_t mip=0;mip<=max_level;++mip) {
                const auto &level=levels[mip];
                if(level.width!=std::max(1u,texture.width>>mip) || level.height!=std::max(1u,texture.height>>mip)) break;
                auto &pixels=texture.levels.emplace_back(static_cast<std::size_t>(level.width)*level.height);
                for(std::uint32_t y=0;y<level.height;++y) for(std::uint32_t x=0;x<level.width;++x)
                    pixels[y*level.width+x]=read_texel(memory,x,y,0xFFFFFFFFu,mip);
            }
        }
        // Texture packs: identify the decoded artwork, independent of guest
        // address, swizzling and palette layout. Only on a decode-cache miss.
        // GPU-decoded textures are read back and hashed on a worker thread
        // (apply_identified); the replacement appears a frame or two later.
        const textures::DumpInfo dump_info{g_state.texture_format,g_state.texture_clut_format,max_level+1u,
                                           (g_state.texture_mode&1u)!=0u,g_summary.lists_executed};
        if(!streaming && textures::active() && texture.levels.empty()) {
            if(const auto known=g_identified.find(cache_key);known!=g_identified.end())
                apply_identity(texture,known->second);
            else {
                texture.identify=true;
                g_identify_info[cache_key]=dump_info;
            }
        } else if(!streaming && textures::active()) {
            const auto &base=texture.levels[0];
            texture.content_hash=textures::content_hash(texture.width,texture.height,base);
            if(const auto match=textures::match_replacement(texture.width,texture.height,base)) {
                texture.replacement_hash=match->hash;
                texture.replacement_rows=match->rows;
                texture.replacement_width=match->cover_width;
                texture.opaque=std::all_of(base.begin(),base.end(),[](std::uint32_t c) { return (c>>24u)==255u; });
            }
            if(textures::dumping())
                textures::dump(texture.content_hash,texture.width,texture.height,base,dump_info);
        }
        if(found!=g_gpu_textures.end()) {
            g_gpu_texture_bytes-=std::min(g_gpu_texture_bytes,texture_cache_bytes(found->second));
            g_gpu_textures.erase(found);
        }
        g_gpu_texture_bytes+=texture_cache_bytes(texture);
        found=g_gpu_textures.emplace(cache_key,std::move(texture)).first;
    }
    found->second.last_use=g_texture_clock;
    g_list_texture_keys[state_key]=cache_key;
    return &found->second;
}

void submit_gpu_primitive(GuestMemory &memory, std::uint32_t type, const std::vector<Vertex> &vertices) {
    GpuDraw draw;
    const GpuTexture *texture = nullptr;
    static thread_local std::vector<GpuVertex> triangles;
    {
    perf::Scope convert_profile(perf::kGeConvert);
    draw.commands=g_state.commands;
    draw.framebuffer=g_state.framebuffer; draw.stride=g_state.framebuffer_stride; draw.format=g_state.framebuffer_format;
    draw.depthbuffer=g_state.depthbuffer; draw.depth_stride=g_state.depth_stride;
    draw.left=g_state.scissor_left; draw.top=g_state.scissor_top; draw.right=g_state.scissor_right; draw.bottom=g_state.scissor_bottom;
    draw.hardware_transform=(g_state.vertex_type&0x800000u)==0 && type!=6;
    draw.primitive=type==0?0u:type<=2?1u:3u;
    draw.depth_clip=g_state.depth_clip_enabled;
    for(std::size_t i=0;i<3;++i) { draw.scale[i]=g_state.viewport_scale[i]; draw.center[i]=g_state.viewport_center[i]; }
    draw.center[0]-=g_state.screen_offset_x; draw.center[1]-=g_state.screen_offset_y;
    // Compose per-draw matrices only. Vertex multiplication, homogeneous
    // clipping, viewport projection and fog run in the GPU vertex shader.
    for(std::size_t column=0;column<4;++column) {
        Vec3 model{}; if(column<3) model[column]=1;
        auto world=transform_direction(g_state.world,model);
        if(column==3) for(std::size_t i=0;i<3;++i) world[i]+=g_state.world[9+i];
        auto view=transform_direction(g_state.view,world);
        if(column==3) for(std::size_t i=0;i<3;++i) view[i]+=g_state.view[9+i];
        draw.model_to_view_z[column]=view[2];
        for(std::size_t row=0;row<4;++row) draw.model_to_clip[row*4+column]=
            g_state.projection[row]*view[0]+g_state.projection[4+row]*view[1]+g_state.projection[8+row]*view[2]+(column==3?g_state.projection[12+row]:0);
    }
    triangles.clear();
    triangles.reserve(vertices.size()*3);
    const auto convert=[](const Vertex &v) { return GpuVertex{v.x,v.y,v.z,v.color,v.secondary_color,v.u,v.v,v.q,v.fog}; };
    const auto triangle=[&](const Vertex &a,const Vertex &b,const Vertex &c) {
        if(!a.drawable || !b.drawable || !c.drawable) return;
        auto x=convert(a),y=convert(b),z=convert(c);
        if((g_state.shade_mode&1)==0 && (g_state.clear_mode&1)==0) { x.color=y.color=z.color; x.secondary=y.secondary=z.secondary; }
        triangles.insert(triangles.end(),{x,y,z});
    };
    if(type==0) {
        draw.commands[0x1d]=0;
        for(const auto &v:vertices) if(v.drawable) { auto p=convert(v); p.q=1; triangles.push_back(p); }
    } else if(type<=2) {
        draw.commands[0x1d]=0; draw.commands[0x1e]=0;
        for(std::size_t i=0;i+1<vertices.size();i+=(type==1?2:1)) {
            if(!vertices[i].drawable || !vertices[i+1].drawable) continue;
            auto a=convert(vertices[i]),b=convert(vertices[i+1]); b.color=a.color; a.secondary=b.secondary=0;
            triangles.insert(triangles.end(),{a,b});
        }
    } else if(type==3) for(std::size_t i=0;i+2<vertices.size();i+=3) triangle(vertices[i],vertices[i+1],vertices[i+2]);
    else if(type==4) for(std::size_t i=0;i+2<vertices.size();++i) triangle(vertices[i+(i&1)],vertices[i+((i&1)?0:1)],vertices[i+2]);
    else if(type==5) for(std::size_t i=1;i+1<vertices.size();++i) triangle(vertices[0],vertices[i],vertices[i+1]);
    else if(type==6) {
        draw.commands[0x1d]=0; // PSP sprites bypass face culling.
        for(std::size_t i=0;i+1<vertices.size();i+=2) {
            const auto &a=vertices[i],&b=vertices[i+1]; if(!a.drawable || !b.drawable) continue;
            auto tl=convert(b),tr=tl,bl=tl,br=tl;
            tl.x=bl.x=a.x; tl.y=tr.y=a.y; tl.u=bl.u=a.u; tl.v=tr.v=a.v;
            tl.q=tr.q=bl.q=br.q=1;
            triangles.insert(triangles.end(),{tl,tr,bl,bl,tr,br});
        }
    }
    }
    {
        perf::Scope texture_profile(perf::kTexture);
        texture = gpu_texture(memory);
    }
    gpu_submit(memory,draw,triangles,texture);
}

void execute_block_transfer(GuestMemory &memory) {
    gpu_sync(memory);
    g_list_texture_keys.clear();
    const auto &c=g_state.commands;
    const auto source=(c[0xB2]&0xFFFFF0u)|((c[0xB3]&0xFF0000u)<<8);
    const auto destination=(c[0xB4]&0xFFFFF0u)|((c[0xB5]&0xFF0000u)<<8);
    const auto stride=[](std::uint32_t command) { const auto value=command&0x7F8u;return value>0x400u?0u:value; };
    const auto source_stride=stride(c[0xB3]),destination_stride=stride(c[0xB5]);
    const auto source_x=c[0xEB]&0x3FFu,source_y=(c[0xEB]>>10)&0x3FFu;
    const auto destination_x=c[0xEC]&0x3FFu,destination_y=(c[0xEC]>>10)&0x3FFu;
    const auto width=(c[0xEE]&0x3FFu)+1,height=((c[0xEE]>>10)&0x3FFu)+1;
    const auto bpp=(c[0xEA]&1u)?4u:2u;
    std::array<std::uint8_t,4096> row{};
    const auto bytes=width*bpp;
    ++g_summary.block_transfers;
    for (std::uint32_t y=0;y<height;++y) {
        const auto src=source+((source_y+y)*source_stride+source_x)*bpp;
        const auto dst=destination+((destination_y+y)*destination_stride+destination_x)*bpp;
        if (!memory.contains(src,bytes) || !memory.contains(dst,bytes)) continue;
        const auto buffer=std::span<std::uint8_t>(row.data(),bytes);
        memory.copy_out(src,buffer);memory.copy_in(dst,buffer);
        g_summary.transferred_bytes+=bytes;
    }
}

void execute_list(GuestMemory &memory, std::uint32_t address, std::uint32_t stall, bool rasterize,
                  std::vector<GeInterrupt> &interrupts, std::uint64_t submission) {
    struct CommandCount {
        std::uint64_t start{g_summary.commands};
        ~CommandCount() {
            g_summary.max_commands_per_list =
                std::max(g_summary.max_commands_per_list, g_summary.commands - start);
        }
    } command_count;
    const DrawInspection inspection = inspection_settings();
    g_pixel_diagnostics = std::getenv("PSPRECOMP_MOTORSTORM_SOFTGE_DIAG") != nullptr;
    std::uint64_t draw = 0u;
    std::uint32_t cursor = address;
    // Called sub-lists are not bounded by the caller's stall address; only the
    // initial linear run is.  A tiny return stack handles CALL/RET pairs.
    struct CallFrame {
        std::uint32_t pc, offset, base;
        bool bounded, restore_base;
    };
    CallFrame stack[16]{};
    std::size_t depth = 0u;
    std::uint32_t previous_word = 0u;
    bool signal_pause = false;
    const auto relative_address = [](std::uint32_t data) {
        return (g_state.offset_address + ((g_state.base_high << 24u) | (data & 0xFFFFFFu))) & 0x0FFFFFFFu;
    };
    // The caller may hand over stall == list (nothing jumped the stall yet);
    // in that case execute linearly until END/FINISH.
    bool bounded = stall != 0u && stall > address;
    static const std::uint64_t diag_after = [] {
        const char *value = std::getenv("PSPRECOMP_MOTORSTORM_SOFTGE_DIAG_AFTER");
        return value != nullptr ? std::strtoull(value, nullptr, 0) : 0u;
    }();
    const bool diag = std::getenv("PSPRECOMP_MOTORSTORM_SOFTGE_DIAG") != nullptr &&
                      g_summary.lists_executed > diag_after && g_summary.lists_executed <= diag_after + 2u;
    if (diag) {
        std::cerr << "[sofge] list=" << psprecomp::hex32(address) << " stall=" << psprecomp::hex32(stall)
                  << " first=" << psprecomp::hex32(memory.aot_load32(address));
        std::uint32_t word_cursor = address;
        for (std::uint32_t index = 0u; index < 16u && memory.contains(word_cursor, 4u); ++index) {
            std::cerr << " " << psprecomp::hex32(memory.aot_load32(word_cursor));
            word_cursor += 4u;
        }
        std::cerr << "\n";
    }
    // A stall-less list whose end marker was overwritten would otherwise walk
    // arbitrary memory and manufacture draws from data.  Stop after a run of
    // unrecognized words.
    std::uint32_t consecutive_unknown = 0u;
    std::uint32_t step = 0u;
    for (; step < kMaxCommandsPerList; ++step) {
        if (bounded && GuestMemory::canonical(cursor) == GuestMemory::canonical(stall))
            break;
        if (!memory.contains(cursor, 4u))
            break;
        const std::uint32_t word = memory.aot_load32(cursor);
        cursor += 4u;
        const std::uint32_t command = word >> 24u;
        const std::uint32_t data = word & 0xFFFFFFu;
        g_state.commands[command] = data;
        if ((command >= 0x53u && command <= 0x92u) || (command >= 0x18u && command <= 0x1Bu))
            g_state.lighting_epoch = ++g_lighting_generation;
        const std::uint32_t preceding = previous_word;
        previous_word = word;
        ++g_summary.commands;
        if (command > 0xE9u) {
            if (++consecutive_unknown > 32u)
                break;
        } else {
            consecutive_unknown = 0u;
        }
        switch (command) {
        case 0xB2u: case 0xB3u: case 0xB4u: case 0xB5u:
        case 0xEBu: case 0xECu: case 0xEEu:
            break; // Transfer registers are retained in commands above.
        case 0xEAu:
            execute_block_transfer(memory);
            break;
        case 0x00u:
            break;    // NOP
        case 0x0Cu: { // END completes SIGNAL/FINISH pairs
            if ((preceding >> 24u) == 0x0Fu) {
                interrupts.push_back(GeInterrupt{preceding & 0xFFFFu, cursor, !signal_pause});
                return;
            }
            if ((preceding >> 24u) != 0x0Eu)
                return;
            const std::uint32_t behavior = (preceding >> 16u) & 0xFFu;
            const std::uint32_t token = preceding & 0xFFFFu;
            if (diag)
                std::cerr << "[sofge] signal behavior=" << behavior << " token=" << token << "\n";
            if (behavior == 1u || behavior == 2u) {
                interrupts.push_back(GeInterrupt{token, cursor, false});
            } else if (behavior == 3u) {
                signal_pause = true;
            } else if (behavior == 8u) {
                memory.memory_barrier();
            } else if (behavior >= 0x10u && behavior <= 0x16u) {
                if (behavior == 0x12u) {
                    if (depth == 0u)
                        return;
                    const auto frame = stack[--depth];
                    cursor = frame.pc;
                    g_state.offset_address = frame.offset;
                    if (frame.restore_base)
                        g_state.base_high = frame.base;
                    bounded = frame.bounded;
                } else {
                    const std::uint32_t combined = ((token << 16u) | (data & 0xFFFFu)) & 0x0FFFFFFCu;
                    std::uint32_t target = combined;
                    if (behavior == 0x13u || behavior == 0x14u)
                        target = (combined + cursor - 8u) & 0x0FFFFFFFu;
                    if (behavior == 0x15u || behavior == 0x16u)
                        target = relative_address(combined);
                    if (behavior == 0x11u || behavior == 0x14u || behavior == 0x16u) {
                        if (depth == 16u)
                            return;
                        stack[depth++] =
                            CallFrame{cursor, g_state.offset_address, g_state.base_high, bounded, true};
                        bounded = false;
                    }
                    cursor = target;
                }
            } else {
                return;
            }
            break;
        }
        case 0x0Fu:
            break;  // FINISH is followed by END
        case 0x0Bu: // RET
            if (depth == 0u)
                return;
            {
                const auto frame = stack[--depth];
                cursor = frame.pc;
                g_state.offset_address = frame.offset;
                if (frame.restore_base)
                    g_state.base_high = frame.base;
                bounded = frame.bounded;
            }
            break;
        case 0x0Eu:
            break;    // SIGNAL
        case 0x08u: { // JUMP
            const std::uint32_t target = relative_address(data & 0xFFFFFCu);
            if (diag) {
                std::cerr << "[sofge]   jump " << psprecomp::hex32(cursor - 4u) << " -> "
                          << psprecomp::hex32(target) << " word="
                          << psprecomp::hex32(memory.contains(target, 4u) ? memory.aot_load32(target) : 0u)
                          << "\n";
            }
            if (target == cursor - 4u)
                return;
            cursor = target;
            break;
        }
        case 0x0Au: // CALL
            if (diag) {
                const std::uint32_t target = relative_address(data & 0xFFFFFCu);
                std::cerr << "[sofge]   call " << psprecomp::hex32(cursor - 4u) << " -> "
                          << psprecomp::hex32(target) << " word="
                          << psprecomp::hex32(memory.contains(target, 4u) ? memory.aot_load32(target) : 0u)
                          << "\n";
            }
            if (depth == 16u)
                return;
            stack[depth++] = CallFrame{cursor, g_state.offset_address, g_state.base_high, bounded, false};
            cursor = relative_address(data & 0xFFFFFCu);
            bounded = false;
            break;
        case 0xE7u: // Z write disable
            g_state.z_write_disable = data;
            break;
        case 0xE8u: // colour mask (RGB)
            break;
        case 0xE9u: // colour mask (alpha)
            break;
        case 0xE2u:
        case 0xE3u:
        case 0xE4u:
        case 0xE5u: // dither matrix (unused)
        case 0xE6u: // logic op (unused)
            break;
        case 0x10u: // BASE
            g_state.base_high = (data >> 16u) & 0x0Fu;
            break;
        case 0x01u: // VADDR
            g_state.vertex_address = relative_address(data);
            break;
        case 0x02u: // IADDR
            g_state.index_address = relative_address(data);
            break;
        case 0x12u: // VTYPE
            g_state.vertex_type = data;
            break;
        case 0x13u: // OFFSET
            g_state.offset_address = data << 8u;
            break;
        case 0x14u:
            g_state.offset_address = cursor - 4u;
            break;  // ORIGIN
        case 0x4Cu: // screen offset X (float >> 8)
            g_state.screen_offset_x = static_cast<float>(data & 0xFFFFu) / 16.0f;
            break;
        case 0x4Du: // screen offset Y (float >> 8)
            g_state.screen_offset_y = static_cast<float>(data & 0xFFFFu) / 16.0f;
            break;
        case 0x3Au:
            g_state.world_cursor = data & 15u;
            break;
        case 0x2Au:
            g_state.bone_cursor = data & 127u;
            break;
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
            g_state.morph_weights[command - 0x2Cu] = std::bit_cast<float>(data << 8u);
            break;
        case 0x2Bu:
            if (g_state.bone_cursor < 96u)
                g_state.bones[g_state.bone_cursor / 12u][g_state.bone_cursor % 12u] =
                    std::bit_cast<float>(data << 8u);
            g_state.bone_cursor = (g_state.bone_cursor + 1u) & 127u;
            break;
        case 0x3Bu:
            if (g_state.world_cursor < 12u)
                g_state.world[g_state.world_cursor] = std::bit_cast<float>(data << 8u);
            g_state.world_cursor = (g_state.world_cursor + 1u) & 15u;
            break;
        case 0x3Cu:
            g_state.view_cursor = data & 15u;
            break;
        case 0x3Du:
            if (g_state.view_cursor < 12u)
                g_state.view[g_state.view_cursor] = std::bit_cast<float>(data << 8u);
            g_state.view_cursor = (g_state.view_cursor + 1u) & 15u;
            g_state.lighting_epoch = ++g_lighting_generation;
            break;
        case 0x3Eu:
            g_state.projection_cursor = data & 15u;
            break;
        case 0x3Fu:
            g_state.projection[g_state.projection_cursor] = std::bit_cast<float>(data << 8u);
            g_state.projection_cursor = (g_state.projection_cursor + 1u) & 15u;
            break;
        case 0x40u:
            g_state.texture_matrix_cursor = data & 15u;
            break;
        case 0x41u:
            if (g_state.texture_matrix_cursor < 12u)
                g_state.texture_matrix[g_state.texture_matrix_cursor] = std::bit_cast<float>(data << 8u);
            g_state.texture_matrix_cursor = (g_state.texture_matrix_cursor + 1u) & 15u;
            break;
        case 0x42u:
        case 0x43u:
        case 0x44u:
            g_state.viewport_scale[command - 0x42u] = std::bit_cast<float>(data << 8u);
            break;
        case 0x45u:
        case 0x46u:
        case 0x47u:
            g_state.viewport_center[command - 0x45u] = std::bit_cast<float>(data << 8u);
            break;
        case 0x48u:
            g_state.texture_scale_u = std::bit_cast<float>(data << 8u);
            break;
        case 0x49u:
            g_state.texture_scale_v = std::bit_cast<float>(data << 8u);
            break;
        case 0x4Au:
            g_state.texture_offset_u = std::bit_cast<float>(data << 8u);
            break;
        case 0x4Bu:
            g_state.texture_offset_v = std::bit_cast<float>(data << 8u);
            break;
        case 0x50u: // shade mode (0 = flat, 1 = smooth)
            g_state.shade_mode = data;
            break;
        case 0x51u: // reverse normal
            g_state.reverse_normal = data;
            break;
        case 0x1Cu:
            g_state.depth_clip_enabled = data != 0u;
            break;
        case 0x17u:
        case 0x1Du:
        case 0x1Fu:
        case 0x20u: // lighting/cull/fog/dither toggles
        case 0x24u:
        case 0x25u:
        case 0x27u:
            break;
        case 0x23u:
            g_state.depth_test_enabled = data != 0u;
            break;
        case 0xDEu:
            g_state.depth_function = data & 7u;
            break;
        case 0xD6u:
        case 0xD7u: // min/max Z
        case 0xDCu:
        case 0xDDu: // stencil test/op
            break;
        case 0x1Eu: // TEXTURE MAP enable
            g_state.texture_enabled = data != 0u;
            break;
        case 0x21u: // alpha blend enable
            g_state.blend_enabled = data != 0u;
            break;
        case 0x22u: // alpha test enable
            g_state.alpha_test_enabled = data != 0u;
            break;
        case 0xDBu: // alpha test func/ref/mask
            g_state.alpha_test = data;
            break;
        case 0xDFu: // blend mode (src/dst/func)
            g_state.blend_mode = data;
            break;
        case 0xE0u: // blend fixed A
            g_state.blend_fixed_a = data;
            break;
        case 0xE1u: // blend fixed B
            g_state.blend_fixed_b = data;
            break;
        case 0x9Cu: // FRAMEBUFPTR
            g_state.framebuffer = 0x04000000u + (data & 0x1FFFFFu);
            break;
        case 0x9Du: // FRAMEBUFWIDTH (stride in pixels)
            g_state.framebuffer_stride = data & 0x7FFu;
            break;
        case 0x9Eu:
            g_state.depthbuffer = 0x04000000u + (data & 0x1FFFFFu);
            break;
        case 0x9Fu:
            g_state.depth_stride = data & 0x7FFu;
            break;
        case 0xD2u: // FRAMEBUF_PIX_FORMAT
            g_state.framebuffer_format = data & 3u;
            break;
        case 0xD3u: // CLEAR_MODE
            g_state.clear_mode = data;
            break;
        case 0xD4u: // SCISSOR1 (left/top)
            g_state.scissor_left = static_cast<std::int32_t>(data & 0x3FFu);
            g_state.scissor_top = static_cast<std::int32_t>((data >> 10u) & 0x3FFu);
            break;
        case 0xD5u: // SCISSOR2 (right/bottom)
            g_state.scissor_right = static_cast<std::int32_t>(data & 0x3FFu) + 1;
            g_state.scissor_bottom = static_cast<std::int32_t>((data >> 10u) & 0x3FFu) + 1;
            // GE scissor coordinates describe render targets, not the LCD.
            // MotorStorm renders 512x296 before scaling to 480x272. Clamping
            // that pass to the display height leaves 24 unwritten source rows
            // and a black band after the final framebuffer feedback pass.
            break;
        case 0x55u: // material / clear colour RGB
            g_state.clear_color = data;
            g_state.material_color = data;
            break;
        case 0x58u: // material / clear alpha
            g_state.clear_alpha = data & 0xFFu;
            g_state.material_alpha = data & 0xFFu;
            break;
        case 0xA0u: // TEXADDR0 (24-bit, 16-byte aligned)
            g_state.texture_address = (g_state.texture_address & 0x0F000000u) | (data & 0x00FFFFF0u);
            break;
        case 0xA8u: // TEXBUFWIDTH0 (pixels in bits 0-10, addr high bits)
            g_state.texture_stride = std::max<std::uint32_t>(1u, data & 0x7FFu);
            g_state.texture_address = (g_state.texture_address & 0x00FFFFFFu) | ((data << 8u) & 0x0F000000u);
            break;
        case 0xB0u: // CLUT address (low 20 bits, 16-byte aligned)
            g_state.texture_clut_address =
                (g_state.texture_clut_address & 0x0F000000u) | (data & 0x00FFFFF0u);
            break;
        case 0xB1u: // CLUT address upper bits
            g_state.texture_clut_address =
                (g_state.texture_clut_address & 0x00FFFFFFu) | ((data << 8u) & 0x0F000000u);
            break;
        case 0xC2u: // TEX_MODE (bit 0 = swizzle)
            g_state.texture_mode = data;
            break;
        case 0xC3u: // TEX_FORMAT (0-7)
            g_state.texture_format = data & 0x0Fu;
            break;
        case 0xC5u: // CLUT format/shift/mask/start
            g_state.texture_clut_format = data;
            break;
        case 0xC4u: { // LOADCLUT, 32-byte blocks
            g_state.clut_loaded_bytes = std::min(1024u, (data & 63u) * 32u);
            gpu_sync_texture(memory,g_state.texture_clut_address,g_state.clut_loaded_bytes);
            for (std::uint32_t i = 0u; i < g_state.clut_loaded_bytes; ++i) {
                const auto at = g_state.texture_clut_address + i;
                g_state.clut[i] = memory.contains(at, 1u) ? memory.aot_load8(at) : 0u;
            }
            g_state.clut_hash = hash_bytes(14695981039346656037ull, g_state.clut.data(),
                                           g_state.clut.size());
            break;
        }
        case 0xC6u: // TEX filter
            g_state.texture_filter = data;
            break;
        case 0xC7u: // TEX wrap (bit0 U, bit8 V)
            g_state.texture_wrap = data;
            break;
        case 0xC9u: // TEX function (env mode)
            g_state.texture_func = data;
            break;
        case 0xCAu: // TEX env colour
            g_state.texture_env_color = data;
            break;
        case 0xC0u: // TEX map mode; enable is command 0x1E
            break;
        case 0xB8u: // TEX_SIZE0 (log2 w/h)
            g_state.texture_size = data;
            break;
        case 0x04u: { // PRIM
            const std::uint32_t count = data & 0xFFFFu;
            const std::uint32_t type = (data >> 16u) & 7u;
            ++draw;
            inspect_draw(inspection, submission, draw, address, cursor - 4u, data);
            if (!rasterize) {
                const auto &layout = layout_for_type(g_state.vertex_type);
                const std::uint32_t index_type = (g_state.vertex_type >> 11u) & 3u;
                if (index_type != 0u)
                    g_state.index_address += count * (1u << (index_type - 1u));
                else
                    g_state.vertex_address += count * layout.stride;
                break;
            }
            ++g_summary.draws;
            if (g_state.texture_enabled)
                ++g_summary.textured_draws;
            if (type < 8u)
                ++g_summary.prims_by_type[type];
            if (diag) {
                std::cerr << "[sofge]   prim type=" << type << " count=" << count
                          << " vaddr=" << psprecomp::hex32(g_state.vertex_address)
                          << " vtype=" << psprecomp::hex32(g_state.vertex_type)
                          << " tex=" << (g_state.texture_enabled ? 1 : 0) << " fmt=" << g_state.texture_format
                          << " taddr=" << psprecomp::hex32(g_state.texture_address)
                          << " clut=" << psprecomp::hex32(g_state.texture_clut_address)
                          << " swz=" << (g_state.texture_mode & 1u) << " func=" << g_state.texture_func
                          << " blend=" << (g_state.blend_enabled ? 1 : 0) << "/"
                          << psprecomp::hex32(g_state.blend_mode) << "\n";
            }
            std::uint32_t vertex_cursor = g_state.vertex_address;
            const std::uint32_t index_type = (g_state.vertex_type >> 11u) & 3u;
            const std::uint32_t index_width = index_type == 0u ? 0u : 1u << (index_type - 1u);
            const VertexLayout &layout = layout_for_type(g_state.vertex_type);
            static thread_local std::vector<Vertex> vertices;
            vertices.clear();
            vertices.reserve(count);
            const bool gpu_draw=gpu_active() && type<=6u;
            const bool gpu_transform=gpu_draw && type!=6u;
            {
                perf::Scope decode_profile(perf::kGeDecode);
                // A PSP indexed mesh can reference the same vertex many times.
                // Morphing, skinning, lighting and UV generation depend only
                // on that vertex and this draw's immutable GE state. Reuse the
                // complete result within the draw, never across commands.
                struct VertexCache {
                    std::array<Vertex, 4096> decoded{};
                    std::array<std::uint32_t, 4096> stamps{};
                    std::uint32_t generation{};
                };
                static thread_local VertexCache cache;
                static const bool cache_enabled = [] {
                    const char *value = std::getenv("PSPRECOMP_MOTORSTORM_VERTEX_CACHE");
                    return !value || std::strcmp(value, "0") != 0;
                }();
                const bool use_cache = cache_enabled && index_width != 0u && count >= 32u;
                if (use_cache && ++cache.generation == 0u) {
                    cache.stamps.fill(0u);
                    cache.generation = 1u;
                }
                for (std::uint32_t index = 0u; index < count; ++index) {
                    std::uint32_t element = UINT32_MAX;
                    if (index_width != 0u) {
                        const std::uint32_t at = g_state.index_address + index * index_width;
                        if (!memory.contains(at, index_width))
                            break;
                        element = index_width == 1u   ? memory.aot_load8(at)
                                                      : index_width == 2u ? memory.aot_load16(at)
                                                                          : memory.aot_load32(at);
                        const std::uint64_t at_vertex = static_cast<std::uint64_t>(g_state.vertex_address) +
                                                        static_cast<std::uint64_t>(element) * layout.stride;
                        if (at_vertex > UINT32_MAX)
                            break;
                        vertex_cursor = static_cast<std::uint32_t>(at_vertex);
                    }
                    if (use_cache && element < cache.stamps.size() && cache.stamps[element] == cache.generation) {
                        vertices.push_back(cache.decoded[element]);
                        ++g_summary.vertex_cache_hits;
                        continue;
                    }
                    Vertex vertex{};
                    if (!decode_vertex(memory, g_state, vertex_cursor, vertex, gpu_transform))
                        break;
                    ++g_summary.vertex_decodes;
                    if (use_cache && element < cache.stamps.size()) {
                        cache.decoded[element] = vertex;
                        cache.stamps[element] = cache.generation;
                    }
                    vertices.push_back(vertex);
                }
            }
            inspect_vertex_data(inspection, memory, submission, draw, vertices);
            if (index_width != 0u)
                g_state.index_address += count * index_width;
            else
                g_state.vertex_address = vertex_cursor;
            if(gpu_draw) {
                {
                    perf::Scope submit_profile(perf::kGeSubmit);
                    submit_gpu_primitive(memory,type,vertices);
                }
                if(inspection.capture) gpu_sync(memory);
                capture_draw(inspection,memory,submission,draw);
                break;
            }
            if(gpu_active()) { gpu_sync(memory); gpu_note_software_draw(); }
            const auto color_of = [](const Vertex &vertex) { return vertex.color; };
            switch (type) {
            case 0u: // points
                for (const auto &vertex : vertices) {
                    if (!vertex.drawable)
                        continue;
                    const std::int32_t x = static_cast<std::int32_t>(vertex.x);
                    const std::int32_t y = static_cast<std::int32_t>(vertex.y);
                    std::uint32_t color = color_of(vertex);
                    if (g_state.texture_enabled)
                        color = sample_and_shade(memory, vertex.u, vertex.v, color, 0.0f,
                                                 vertex.through ? 1.0f : vertex.clip[3]);
                    for (std::uint32_t shift = 0u; shift < 24u; shift += 8u) {
                        const auto value = std::min(255u, ((color >> shift) & 255u) +
                                                              ((vertex.secondary_color >> shift) & 255u));
                        color = (color & ~(255u << shift)) | (value << shift);
                    }
                    store_pixel(memory, x, y, color, vertex.z, vertex.fog);
                }
                break;
            case 1u: // lines
            case 2u: // line strip
                for (std::size_t index = 0u; index + 1u < vertices.size(); index += (type == 1u ? 2u : 1u)) {
                    const Vertex &a = vertices[index];
                    const Vertex &b = vertices[index + 1u];
                    if (!a.drawable || !b.drawable)
                        continue;
                    const std::uint32_t rgba = color_of(a);
                    const float dx = b.x - a.x;
                    const float dy = b.y - a.y;
                    const float steps = std::max(std::abs(dx), std::abs(dy));
                    for (float t = 0.0f; t <= steps; t += 1.0f) {
                        const std::int32_t x =
                            static_cast<std::int32_t>(a.x + (steps > 0.0f ? dx * t / steps : 0.0f));
                        const std::int32_t y =
                            static_cast<std::int32_t>(a.y + (steps > 0.0f ? dy * t / steps : 0.0f));
                        store_pixel(memory, x, y, rgba, a.z + (steps > 0.0f ? (b.z - a.z) * t / steps : 0.0f),
                                    a.fog + (steps > 0.0f ? (b.fog - a.fog) * t / steps : 0.0f));
                    }
                }
                break;
            case 3u: // triangles
                for (std::size_t index = 0u; index + 2u < vertices.size(); index += 3u)
                    fill_triangle(memory, vertices[index], vertices[index + 1u], vertices[index + 2u]);
                break;
            case 4u: // triangle strip
                for (std::size_t index = 0u; index + 2u < vertices.size(); ++index) {
                    const auto first = index + (index & 1u);
                    const auto second = index + ((index & 1u) == 0u ? 1u : 0u);
                    fill_triangle(memory, vertices[first], vertices[second], vertices[index + 2u]);
                }
                break;
            case 5u: // triangle fan
                for (std::size_t index = 1u; index + 1u < vertices.size(); ++index)
                    fill_triangle(memory, vertices[0], vertices[index], vertices[index + 1u]);
                break;
            case 6u: // sprites: pairs define axis-aligned rectangles
                for (std::size_t index = 0u; index + 1u < vertices.size(); index += 2u)
                    fill_rect(memory, vertices[index], vertices[index + 1u], color_of(vertices[index + 1u]));
                break;
            default:
                break;
            }
            capture_draw(inspection, memory, submission, draw);
            break;
        }
        default:
            // These registers are consumed directly by the transform/pixel
            // stages from the raw state; they do not need a second decoded copy.
            if (!((command >= 0x53u && command <= 0x58u) || (command >= 0x5Bu && command <= 0x9Bu) ||
                  (command >= 0xA0u && command <= 0xAFu) || (command >= 0xB8u && command <= 0xBFu) ||
                  command == 0xC8u || (command >= 0xCDu && command <= 0xD0u) ||
                  (command >= 0xD8u && command <= 0xDAu)))
                ++g_summary.unknown_commands;
            break;
        }
    }
    if (step == kMaxCommandsPerList)
        throw psprecomp::Error("GE command safety limit exhausted for list " +
                              psprecomp::hex32(address) + " at " + psprecomp::hex32(cursor));
}

} // namespace

void reset_software_ge() noexcept {
    gpu_shutdown(true);
    g_gpu_textures.clear(); g_list_texture_keys.clear(); g_texture_streams.clear();
    g_identified.clear(); g_identify_info.clear();
    g_gpu_texture_bytes=0;
    g_state = GeState{};
    g_summary = GeSummary{};
}

GeSummary software_ge_summary() noexcept { return g_summary; }

std::uint32_t software_ge_framebuffer() noexcept { return g_state.framebuffer; }
std::uint32_t software_ge_framebuffer_stride() noexcept { return g_state.framebuffer_stride; }
std::uint32_t software_ge_framebuffer_format() noexcept { return g_state.framebuffer_format; }

std::vector<std::uint32_t> ge_decode_raw_level(const GpuTexture &texture, std::size_t level) {
    std::vector<std::uint32_t> texels;
    if (level >= texture.raw.size()) return texels;
    const auto &raw = texture.raw[level];
    const std::uint8_t *bytes = raw.bytes.data();
    const std::size_t size = raw.bytes.size();
    const std::uint32_t format = texture.format, stride = raw.stride;
    const bool swizzled = (texture.texture_mode & 1u) != 0u;
    texels.assign(static_cast<std::size_t>(raw.width) * raw.height, 0xFFFFFFFFu);
    // Palette resolved once: every index maps through the CLUT mode exactly
    // as unpack_clut_entry does (shift, mask, start, wrap, multi-CLUT mips).
    std::array<std::uint32_t, 256> palette{};
    const std::uint32_t data = texture.clut_mode, clut_format = data & 3u, shift = (data >> 2u) & 0x1Fu,
                        mask = (data >> 8u) & 0xFFu, start = ((data >> 16u) & 0x1Fu) << 4u;
    const std::uint32_t wrap_mask = clut_format == 3u ? 0xFFu : 0x1FFu, entry_bytes = clut_format == 3u ? 4u : 2u;
    const std::uint32_t mip_offset =
        format == 4u && (texture.texture_mode & 0x100u) != 0u ? static_cast<std::uint32_t>(level) * 16u : 0u;
    const auto *clut = reinterpret_cast<const std::uint8_t *>(texture.clut.data());
    const auto entry = [&](std::uint32_t index) {
        const std::uint32_t wrapped = (((index >> shift) & mask) | (start & wrap_mask)) & wrap_mask;
        const std::uint32_t offset = ((wrapped + mip_offset) & wrap_mask) * entry_bytes;
        std::uint32_t packed = 0u;
        for (std::uint32_t i = 0u; i < entry_bytes; ++i) packed |= static_cast<std::uint32_t>(clut[offset + i]) << (i * 8u);
        return decode_packed_color(packed, clut_format + 4u);
    };
    // Indices of 8 bits or less (CLUT4/CLUT8) use the precomputed table.
    if (format == 4u || format == 5u)
        for (std::uint32_t i = 0u; i < 256u; ++i) palette[i] = entry(i);
    const std::uint32_t texel_bytes = format == 3u || format == 7u ? 4u : format == 4u || format == 5u ? 1u : 2u;
    const std::uint32_t row_bytes = format == 4u ? (stride + 1u) / 2u : stride * texel_bytes;
    for (std::uint32_t y = 0u; y < raw.height; ++y) {
        auto *out = texels.data() + static_cast<std::size_t>(y) * raw.width;
        for (std::uint32_t x = 0u; x < raw.width; ++x) {
            const std::uint32_t byte_x = format == 4u ? x >> 1u : x * texel_bytes;
            const std::uint32_t offset = swizzled ? swizzled_offset(byte_x, y, row_bytes) : y * row_bytes + byte_x;
            if (offset + texel_bytes > size) continue;  // read_texel's out-of-memory fallback
            std::uint32_t value = 0u;
            std::memcpy(&value, bytes + offset, texel_bytes);
            switch (format) {
            case 0u: case 1u: case 2u: out[x] = decode_packed_color(value, format + 4u); break;
            case 3u: out[x] = value; break;
            case 4u: out[x] = palette[(x & 1u) != 0u ? value >> 4u : value & 0xFu]; break;
            case 5u: out[x] = palette[value]; break;
            default: out[x] = entry(value); break;
            }
        }
    }
    return texels;
}

std::vector<std::uint32_t> ge_decode_texture(const GeTextureSource &source, std::uint32_t rows) {
    // read_texel works on GE state and guest memory; give it a private copy of
    // both so extraction never disturbs (or depends on) a running game.
    static std::mutex decode_mutex;
    std::lock_guard lock(decode_mutex);
    static GuestMemory scratch(32u * 1024u * 1024u);
    constexpr std::uint32_t kBase = 0x08800000u;
    const auto width = 1u << source.width_log2;
    std::vector<std::uint32_t> texels;
    if (source.width_log2 > 10u || source.height_log2 > 10u || rows > (1u << source.height_log2))
        return texels;
    const std::size_t capacity = scratch.bytes().size() - 0x00800000u;
    const auto bytes = std::min<std::size_t>(source.bytes.size(), capacity - 4096u);
    scratch.zero(kBase, bytes + 4096u);  // reads past the source see zeros, never a previous texture
    scratch.copy_in(kBase, source.bytes.first(bytes));
    const GeState saved = g_state;
    g_state = GeState{};
    g_state.texture_size = source.width_log2 | (source.height_log2 << 8u);
    g_state.texture_format = source.format;
    g_state.texture_mode = source.swizzled ? 1u : 0u;
    g_state.texture_address = kBase;
    g_state.texture_stride = std::max(1u, source.stride);
    g_state.texture_clut_format = source.clut_mode;
    std::copy_n(source.clut.begin(), std::min<std::size_t>(source.clut.size(), g_state.clut.size()), g_state.clut.begin());
    texels.resize(static_cast<std::size_t>(width) * rows);
    for (std::uint32_t y = 0; y < rows; ++y)
        for (std::uint32_t x = 0; x < width; ++x)
            texels[static_cast<std::size_t>(y) * width + x] =
                read_texel(scratch, static_cast<std::int32_t>(x), static_cast<std::int32_t>(y), 0xFFFFFFFFu, 0u);
    g_state = saved;
    return texels;
}

std::vector<GeInterrupt> software_ge_execute_list(GuestMemory &memory, std::uint32_t address,
                                                  std::uint32_t stall, bool rasterize,
                                                  std::uint64_t submission) {
    ++g_summary.lists_executed;
    if(rasterize) { gpu_initialize(); gpu_settle(memory); }
    g_list_texture_keys.clear();
    // Least-recently-used eviction (previously the whole cache was cleared,
    // forcing every texture in the next frames to be rebuilt at once).
    ++g_texture_clock;
    exchange_identities();
    if(g_gpu_textures.size()>4096 || g_gpu_texture_bytes>256ull*1024*1024) {
        std::vector<std::pair<std::uint64_t,std::uint64_t>> oldest;
        oldest.reserve(g_gpu_textures.size());
        for(const auto &[key,texture]:g_gpu_textures) oldest.emplace_back(texture.last_use,key);
        std::sort(oldest.begin(),oldest.end());
        for(const auto &[last_use,key]:oldest) {
            if(g_gpu_textures.size()<=3072 && g_gpu_texture_bytes<=192ull*1024*1024) break;
            const auto victim=g_gpu_textures.find(key);
            g_gpu_texture_bytes-=std::min(g_gpu_texture_bytes,texture_cache_bytes(victim->second));
            g_gpu_textures.erase(victim);
        }
    }
    std::vector<GeInterrupt> interrupts;
    execute_list(memory, address, stall, rasterize, interrupts, submission);
    gpu_end_list(memory);
    return interrupts;
}

} // namespace motorstorm
