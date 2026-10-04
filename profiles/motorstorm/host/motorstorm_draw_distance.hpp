#pragma once

#include <algorithm>
#include <charconv>
#include <cmath>
#include <cstdint>
#include <optional>
#include <string>
#include <string_view>

// Render distance and less pop-in for the game's distance-switched scene nodes.
//
// Track props (signs, flags, rocks, fences...) are scene-graph nodes (vtable
// 0x08A80678) drawn by 0x089228D4. A node with flag 0x04000000 is shown only
// inside a distance range; 0x08922220 measures the distance from the camera
// (camera object + 0x70) to the node (+0x90) every frame and picks a target
// visibility:
//   distance <  split (+0xD8): hidden when near (+0xD4) > 0 and distance < near
//   distance >= split:         hidden when far  (+0xD6) > 0 and distance > far
// The thresholds are signed 16-bit world units (65-375 on the shipped tracks,
// so props appear only 100-300 m ahead). The node's alpha (+0xDC) then moves
// toward the target (+0xE0) by 1/16 per frame, or jumps there at once when the
// threshold in use is even: those objects pop. A node with flag 0x40000000
// instead selects a child LOD from four thresholds (+0xD4..+0xDA) and draws
// nothing beyond the last one.
//
// Render distance multiplies those thresholds. Less pop-in fades every
// distance-switched prop by distance instead of by time: it stays fully
// visible to its (scaled) cutoff and then fades out over a band beyond it, and
// near-switched counterparts fade in over the same band, so nothing appears
// in a single frame. Both are data changes in guest memory, applied while
// racing and restored afterwards (see update_draw_distance in the HLE).
namespace motorstorm::draw_distance {

inline constexpr std::uint32_t kNodeVtable = 0x08A80678u;
inline constexpr std::uint32_t kCameraPointer = 0x08A78F8Cu;
inline constexpr std::uint32_t kCameraPosition = 0x70u;
inline constexpr std::uint32_t kNodePosition = 0x90u, kNodeFlags = 0xB0u, kNodeThresholds = 0xD4u,
                               kNodeAlpha = 0xDCu, kNodeTarget = 0xE0u;
inline constexpr std::uint32_t kFadeNode = 0x04000000u, kLodGroup = 0x40000000u;
inline constexpr float kFadeStep = 1.0f / 16.0f;  // 0x08922220: alpha step per frame

struct Settings {
    float scale{1.0f};
    bool less_pop_in{true};
    [[nodiscard]] bool active() const { return less_pop_in || scale != 1.0f; }
};

// "normal" keeps the game's distances. Presets or a multiplier from 0.5 to 8.
inline std::optional<float> parse_render_distance(std::string_view text) {
    std::string value;
    for (const char c : text) value.push_back(static_cast<char>(c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c));
    if (value == "low") return 0.75f;
    if (value == "normal") return 1.0f;
    if (value == "high") return 1.5f;
    if (value == "ultra") return 2.0f;
    if (value == "max") return 4.0f;
    if (!value.empty() && value.back() == 'x') value.pop_back();
    float number{};
    const auto parsed = std::from_chars(value.data(), value.data() + value.size(), number);
    if (parsed.ec != std::errc{} || parsed.ptr != value.data() + value.size() || !(number >= 0.5f && number <= 8.0f))
        return std::nullopt;
    return number;
}

// Fade band for a cutoff: a fifth of the distance, at least 8 units.
inline float fade_band(std::int32_t threshold) { return std::max(8.0f, static_cast<float>(threshold) * 0.2f); }

// A threshold of 0 (or below) means "no limit" and is never changed.
// Without less pop-in the original parity is kept (even = instant switch);
// with it every limit is odd, so the game always takes its fading path.
inline std::int16_t scaled_threshold(std::int16_t original, float scale, bool fade) {
    if (original <= 0) return original;
    auto value = static_cast<std::int32_t>(std::lround(original * scale));
    value = std::clamp(value, 1, 32765);
    if (fade) value |= 1;
    else value = (value & ~1) | (original & 1);
    return static_cast<std::int16_t>(std::max(value, 1));
}
// The far cutoff the game tests with less pop-in: the scaled cutoff plus the
// fade band, so props stay fully visible as far as before and then fade out.
inline std::int16_t fading_far(std::int16_t scaled_far) {
    if (scaled_far <= 0) return scaled_far;
    const auto value = static_cast<std::int32_t>(scaled_far + std::lround(fade_band(scaled_far)));
    return static_cast<std::int16_t>(std::min(value, 32767) | 1);
}

struct Thresholds { std::int16_t near{}, far{}, split{}; };

// Visibility the game will target for this distance (1 shown, 0 hidden).
inline float game_target(float distance, const Thresholds &t) {
    if (distance < static_cast<float>(t.split))
        return t.near > 0 && distance < static_cast<float>(t.near) ? 0.0f : 1.0f;
    return t.far > 0 && distance > static_cast<float>(t.far) ? 0.0f : 1.0f;
}
// Desired opacity with less pop-in. `t` holds the values written to the node:
// far is the scaled cutoff extended by `far_band` (see fading_far).
inline float fade_alpha(float distance, const Thresholds &t, float far_band) {
    if (distance < static_cast<float>(t.split)) {
        if (t.near <= 0) return 1.0f;
        return std::clamp((distance - t.near) / fade_band(t.near), 0.0f, 1.0f);
    }
    if (t.far <= 0) return 1.0f;
    // Fully faded one unit before the cutoff, so a camera that moves between
    // this write and the game's test cannot flash the prop at the edge.
    const float band = std::max(1.0f, far_band - 1.0f);
    return std::clamp((static_cast<float>(t.far) - 1.0f - distance) / band, 0.0f, 1.0f);
}
// The alpha to store so that the game's next step (toward `target`, by
// kFadeStep) lands exactly on `alpha`. At rest the value is stored as is: the
// game snaps to an alpha already within 1e-4 of its target.
inline float seed_alpha(float alpha, float target) {
    if (alpha == target) return alpha;
    return target > alpha ? alpha - kFadeStep : alpha + kFadeStep;
}

} // namespace motorstorm::draw_distance
