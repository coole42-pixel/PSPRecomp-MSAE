#pragma once

#include "psprecomp/guest_memory.hpp"
#include "motorstorm_input.hpp"

#include <cstdint>

namespace motorstorm {

// Optional native presentation window (PSPRECOMP_MOTORSTORM_WINDOW=1, scale via
// PSPRECOMP_MOTORSTORM_WINDOW_SCALE, default 2).  A dedicated UI thread owns
// the HWND so the window keeps repainting and stays responsive while the guest
// sits inside long synchronous phases.  The emulation thread decodes the PSP
// display framebuffer into a host copy under a mutex; without the environment
// variable the profile stays completely headless and this costs nothing.
[[nodiscard]] bool window_enabled();

// Creates the window before the guest produces its first frame.
void window_start();

// Publishes the framebuffer the guest just handed to the display.
void window_present(const psprecomp::GuestMemory &memory, std::uint32_t framebuffer,
                    std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                    std::uint32_t height);

// Live PSP button mask sampled from the host keyboard (0 when disabled).
[[nodiscard]] std::uint32_t window_pad();
[[nodiscard]] PadInput window_input();
// Device-only polling for diagnostics. No keyboard/mouse automation is used.
[[nodiscard]] PadInput poll_xinput_controller();

// Captured once the window closes, so the host can report it at exit.
[[nodiscard]] bool window_close_requested();

void window_shutdown();

} // namespace motorstorm
