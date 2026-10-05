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

// Borderless fullscreen on the window's current monitor. Changes are posted
// to the owning UI thread; window_fullscreen reports the applied state.
void window_set_fullscreen(bool enabled);
[[nodiscard]] bool window_fullscreen();

// Publishes the framebuffer the guest just handed to the display.
void window_present(psprecomp::GuestMemory &memory, std::uint32_t framebuffer,
                    std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                    std::uint32_t height);

// Live PSP pad from the keyboard (while the window has focus) and every
// connected controller (see motorstorm_controller.hpp); neutral when disabled.
// Presses since the previous call are reported once.
[[nodiscard]] std::uint32_t window_pad();
[[nodiscard]] PadInput window_input();

// Captured once the window closes, so the host can report it at exit.
[[nodiscard]] bool window_close_requested();

void window_shutdown();

} // namespace motorstorm
