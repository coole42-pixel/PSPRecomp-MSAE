#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <vector>

namespace motorstorm {
struct PresentationRect { std::uint32_t left{}, top{}, width{}, height{}; };

inline float widescreen_scale(std::uint32_t client_width, std::uint32_t client_height) {
    if (!client_width || !client_height) return 1.0f;
    return std::max(1.0f, (static_cast<float>(client_width) / client_height) / (480.0f / 272.0f));
}

// A through-mode draw that samples the display framebuffer (VRAM, physical
// address, row stride at least the picture width) copies picture to picture. The
// game does this every race frame in 32-pixel strips, and such copies must
// never be squeezed like HUD artwork.
inline bool samples_display_picture(std::uint32_t physical_address, std::uint32_t stride) {
    return physical_address >= 0x04000000u && physical_address < 0x04200000u && stride >= 480u;
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

// Widescreen at the source. The race camera object starts with its aspect ratio
// (16/9 as shipped), followed by four zero words and the picture size, 480 and
// 272: [aspect][0][0][0][0][480][272]. The game builds its projection and culls
// scenery from that aspect, so raising it to the window's aspect gives a true
// Hor+ view with nothing missing at the edges. (The matching viewport object
// has 0xFF000000 where the camera has zero, which keeps the two apart.)
inline bool is_camera_aspect(const std::uint32_t *words) {
    float aspect;
    std::memcpy(&aspect, words, 4);
    return aspect >= 1.70f && aspect <= 1.80f && words[1] == 0u && words[2] == 0u && words[3] == 0u &&
           words[4] == 0u && words[5] == 480u && words[6] == 272u;
}
// Offsets (in bytes, from `bytes`) of every camera aspect field in a RAM image.
inline std::vector<std::uint32_t> find_camera_aspects(const std::uint8_t *bytes, std::size_t size) {
    std::vector<std::uint32_t> found;
    for (std::size_t i = 0; i + 28u <= size; i += 4u) {
        std::uint32_t words[7];
        std::memcpy(words, bytes + i, 28u);
        if (words[5] == 480u && is_camera_aspect(words)) found.push_back(static_cast<std::uint32_t>(i));
    }
    return found;
}
// The aspect the game should render with: the window's, never narrower than the
// game's own (so a 16:9 window leaves the image exactly as shipped).
inline float camera_target_aspect(float original, std::uint32_t client_width, std::uint32_t client_height) {
    if (!client_width || !client_height) return original;
    return std::max(original, static_cast<float>(client_width) / static_cast<float>(client_height));
}
} // namespace motorstorm
