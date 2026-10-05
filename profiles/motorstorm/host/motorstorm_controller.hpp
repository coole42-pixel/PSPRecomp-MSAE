#pragma once

#include "motorstorm_input.hpp"
#include "motorstorm_rumble.hpp"

#include <string>

namespace motorstorm {

// Game controllers on a dedicated polling thread (4 ms). SDL3 provides the
// universal backend: Xbox (XInput / GameInput / WGI), DualShock 3/4,
// DualSense, Switch Pro / Joy-Con, 8BitDo, Steam and generic DirectInput /
// HID pads through SDL's controller database (a gamecontrollerdb.txt beside
// the executable adds community mappings). Without SDL3.dll the thread falls
// back to XInput only. Every connected controller drives the PSP pad; rumble
// goes to the controller used most recently.
struct ControllerSettings {
    bool enabled{true};
    std::string api{"auto"};  // auto (SDL3, else XInput), sdl or xinput
    bool rumble{true}, trigger_rumble{true};
    float rumble_strength{1.0f};
    GamepadSettings mapping{};
};

// [controller] options through the PSPRECOMP_MOTORSTORM_CONTROLLER* environment.
[[nodiscard]] ControllerSettings controller_settings_from_environment();

void controller_start();
void controller_shutdown();

// Combined state of all controllers. Buttons pressed since the previous call
// are reported once even when already released.
[[nodiscard]] PadInput controller_input();

// Requested vibration (before rumble_strength). Requests expire after 250 ms,
// so a stalled guest never leaves a controller vibrating.
void controller_set_rumble(const RumbleOutput &rumble);

// Rumble pauses while the game window is in the background.
void controller_set_focus(bool focused);

// Probe/diagnostics: the active backend ("SDL3 3.4.18", "XInput", "off").
[[nodiscard]] std::string controller_backend();

} // namespace motorstorm
