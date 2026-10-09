#pragma once
#include <cstdint>

namespace motorstorm {
inline constexpr std::uint32_t kBootScene = 0x08A75F90u;
inline constexpr std::uint32_t kBootFinished = 6u;
inline constexpr std::uint32_t kBootInitializeFonts = 1u;
inline constexpr std::uint32_t kBootLoadSettings = 4u;
// Boot.stf: 7 = warning, 4 = memory-stick notice, 1 = SCEE presents,
// 2 = logo movie, 3 = copyright, 5 = intro movie, 6 = leave Boot.
// Keep the settings/localization load and fonts, then let Boot finish normally.
// Cross may acknowledge its memory-stick notice, never the frontend/title.
inline std::uint32_t intro_initial_state(bool enabled, std::uint32_t scene,
                                        bool boot_object, std::uint32_t requested) {
    return enabled && scene == kBootScene && boot_object && requested == 7u
        ? kBootLoadSettings : requested;
}
inline std::uint32_t intro_notice_buttons(bool enabled, std::uint32_t scene,
                                         std::uint32_t state, std::uint64_t guest_us) {
    return enabled && scene == kBootScene && state == kBootLoadSettings &&
           (guest_us / 100'000u) % 2u == 0u ? 0x4000u : 0u;
}
inline bool intro_hide_frame(bool enabled, std::uint32_t scene) {
    return enabled && scene == kBootScene;
}
}
