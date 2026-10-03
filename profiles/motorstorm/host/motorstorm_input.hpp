#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>

namespace motorstorm {

struct PadInput {
    std::uint32_t buttons{};
    std::uint8_t x{128u}, y{128u};
    bool connected{};
    std::uint32_t slot{0xFFFFFFFFu}, packet{};
};

// Pure device translation; it can be tested without a connected controller.
inline PadInput map_xinput(std::uint16_t buttons, std::uint8_t left_trigger,
                           std::uint8_t right_trigger, std::int16_t lx, std::int16_t ly) {
    PadInput out;
    const auto map = [&](std::uint16_t from, std::uint32_t to) {
        if ((buttons & from) != 0u) out.buttons |= to;
    };
    map(0x0001u, 0x0010u); map(0x0002u, 0x0040u);
    map(0x0004u, 0x0080u); map(0x0008u, 0x0020u);
    map(0x0010u, 0x0008u); map(0x0020u, 0x0001u);
    map(0x0100u, 0x0100u); map(0x0200u, 0x0200u);
    map(0x1000u, 0x4000u); map(0x2000u, 0x2000u);
    map(0x4000u, 0x8000u); map(0x8000u, 0x1000u);
    if (left_trigger > 30u) out.buttons |= 0x0100u;
    if (right_trigger > 30u) out.buttons |= 0x0200u;
    const float magnitude = std::hypot(static_cast<float>(lx), static_cast<float>(ly));
    if (magnitude > 7849.0f) {
        const float strength = (std::min(magnitude, 32767.0f) - 7849.0f) / (32767.0f - 7849.0f);
        const auto axis = [](float value) {
            const float scale = value < 0.0f ? 128.0f : 127.0f;
            return static_cast<std::uint8_t>(std::clamp(128l + std::lround(value * scale), 0l, 255l));
        };
        out.x = axis(static_cast<float>(lx) / magnitude * strength);
        out.y = axis(-static_cast<float>(ly) / magnitude * strength);
    }
    return out;
}

} // namespace motorstorm
