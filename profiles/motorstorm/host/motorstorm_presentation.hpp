#pragma once

#include <algorithm>
#include <cstdint>

namespace motorstorm {
struct PresentationRect { std::uint32_t left{}, top{}, width{}, height{}; };

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
} // namespace motorstorm
