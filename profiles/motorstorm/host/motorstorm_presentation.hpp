#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>

namespace motorstorm {
struct PresentationRect { std::uint32_t left{}, top{}, width{}, height{}; };

inline float widescreen_scale(std::uint32_t client_width, std::uint32_t client_height) {
    if (!client_width || !client_height) return 1.0f;
    return std::max(1.0f, (static_cast<float>(client_width) / client_height) / (480.0f / 272.0f));
}

// Presentation reverses this compression to retain a centred HUD safe area.
inline float widescreen_hud_x(float x, float scale) {
    return 240.0f + (x - 240.0f) / scale;
}

inline PresentationRect fit_presentation(std::uint32_t client_width, std::uint32_t client_height,
                                       std::uint32_t frame_width, std::uint32_t frame_height) {
    if (!client_width || !client_height || !frame_width || !frame_height) return {};
    auto width = client_width, height = client_height;
    if (static_cast<std::uint64_t>(client_width) * frame_height >
        static_cast<std::uint64_t>(client_height) * frame_width)
        width = std::max(1u, static_cast<std::uint32_t>(static_cast<std::uint64_t>(height) * frame_width / frame_height));
    else
        height = std::max(1u, static_cast<std::uint32_t>(static_cast<std::uint64_t>(width) * frame_height / frame_width));
    return {(client_width - width) / 2u, (client_height - height) / 2u, width, height};
}

inline PresentationRect fit_game_presentation(std::uint32_t client_width, std::uint32_t client_height,
                                            std::uint32_t frame_width, std::uint32_t frame_height,
                                            float horizontal_scale) {
    // Preserve the captured aspect while a resize/scene change is in flight.
    if (!client_width || !client_height || !frame_width || !frame_height) return {};
    const double aspect = static_cast<double>(frame_width) * horizontal_scale / frame_height;
    auto width = client_width, height = client_height;
    if (static_cast<double>(client_width) / client_height > aspect)
        width = std::clamp(static_cast<std::uint32_t>(std::llround(client_height * aspect)), 1u, client_width);
    else
        height = std::clamp(static_cast<std::uint32_t>(std::llround(client_width / aspect)), 1u, client_height);
    return {(client_width - width) / 2u, (client_height - height) / 2u, width, height};
}
} // namespace motorstorm
