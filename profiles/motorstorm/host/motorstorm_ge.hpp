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
#include <vector>

namespace motorstorm {

struct GeSummary {
    std::uint64_t lists_executed{};
    std::uint64_t commands{};
    std::uint64_t max_commands_per_list{};
    std::uint64_t draws{};
    std::uint64_t prims_by_type[8]{};
    std::uint64_t unknown_commands{};
    std::uint64_t pixels_drawn{};
    std::uint64_t pixels_colored{};   // drawn with a non-black, non-transparent colour
    std::uint64_t textured_draws{};
    std::uint64_t block_transfers{}, transferred_bytes{};
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

} // namespace motorstorm
