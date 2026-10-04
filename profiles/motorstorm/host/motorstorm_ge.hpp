#pragma once

// Experimental software GE (Graphics Engine) interpreter for the MotorStorm
// profile.  It decodes the GE command lists the game submits and rasterizes
// them into guest EDRAM, so the framebuffer the game later shows through
// sceDisplaySetFrameBuf contains the actual rendered image.
//
// Supports clear, transformed/skinned/morphed vertices, primitive rasterization,
// paletted/swizzled textures, linear/mip filtering, material lighting, fog,
// alpha/color/depth/stencil tests and blending. Unsupported commands remain
// recorded; this software path does not claim pixel-perfect PSP emulation.

#include "psprecomp/guest_memory.hpp"

#include <cstdint>
#include <span>
#include <vector>

namespace motorstorm {

struct GpuTexture;

struct GeSummary {
    std::uint64_t lists_executed{};
    std::uint64_t commands{};
    std::uint64_t max_commands_per_list{};
    std::uint64_t draws{};
    std::uint64_t prims_by_type[8]{};
    std::uint64_t unknown_commands{};
    std::uint64_t pixels_drawn{};
    std::uint64_t pixels_colored{};   // drawn with a non-black, non-transparent colour
    std::uint64_t vertex_decodes{}, vertex_cache_hits{};
    std::uint64_t textured_draws{};
    std::uint64_t block_transfers{}, transferred_bytes{}, transfer_syncs{}, clut_syncs{}, gpu_cluts{}, gpu_sourced_textures{};
};

void reset_software_ge() noexcept;
GeSummary software_ge_summary() noexcept;

// Most recently configured GE framebuffer (0 until a list sets it).
std::uint32_t software_ge_framebuffer() noexcept;
std::uint32_t software_ge_framebuffer_stride() noexcept;
std::uint32_t software_ge_framebuffer_format() noexcept;

// Executes one submitted list, writing rasterized pixels into EDRAM.
// `stall` bounds the walk; the list is executed from `address`.
struct GeInterrupt {
    std::uint32_t token{};
    std::uint32_t next_pc{};
    bool finish{};
};

// Headless execution walks exactly the same command/control-flow stream but
// omits vertex fetching and rasterization. Interrupts come from command tokens.
std::vector<GeInterrupt> software_ge_execute_list(psprecomp::GuestMemory &memory,
    std::uint32_t address, std::uint32_t stall, bool rasterize = true,
    std::uint64_t submission = 0u);

// A list executed in segments as its stall address advances, the way the
// PSP's GE renders while the CPU is still writing the rest of the list.
// `last` closes the list (as software_ge_execute_list does at its end).
struct GeListProgress {
    std::uint32_t cursor{}, previous_word{};
    bool signal_pause{}, started{}, finished{}, ended{};
    std::vector<GeInterrupt> interrupts;
};
void software_ge_execute_segment(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t stall,
                                 bool rasterize, std::uint64_t submission, GeListProgress &progress,
                                 bool last);

// Offline texture-pack extraction. Decodes texture bytes through the same
// texel path the GPU texture cache uses at runtime, so extracted textures get
// the identity the running game computes. `bytes` starts at texel (0,0) and
// should extend as far as the game's memory would (the rest of the loaded
// file): a non-power-of-two image is drawn as a larger GE texture whose extra
// columns/rows read whatever follows.
struct GeTextureSource {
    std::uint32_t format{};                    // GE texture format 0-7 (4 = CLUT4, 5 = CLUT8)
    std::uint32_t width_log2{}, height_log2{}; // GE texture size
    std::uint32_t stride{};                    // texture buffer width, in texels
    bool swizzled{};
    std::span<const std::uint8_t> bytes;
    std::span<const std::uint8_t> clut;        // palette bytes as loaded (at most 1024)
    std::uint32_t clut_mode{0xFF03u};          // GE CMODE: 8888 entries, no shift, mask 0xFF, start 0
};
// Returns (1 << width_log2) x rows texels (RGBA8). Thread-safe (serialized).
std::vector<std::uint32_t> ge_decode_texture(const GeTextureSource &source, std::uint32_t rows);
// Fast CPU decode of a raw texture level captured for GPU decoding (texture
// pack hashing); bit-exact with the per-texel GE path.
std::vector<std::uint32_t> ge_decode_raw_level(const GpuTexture &texture, std::size_t level);

} // namespace motorstorm
