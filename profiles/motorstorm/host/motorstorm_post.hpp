#pragma once

#include <array>
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace motorstorm {

// Race-only image enhancements ([enhancements] in the INI). The hardware
// renderer applies them on the present queue while the game is racing; menus,
// the pause menu, loading screens and movies keep the original image.
struct PostSettings {
    bool enabled{true};
    bool extended_color{true};  // color_depth = 32: full-precision 16-bit targets + debanding
    bool agx{true};
    std::uint32_t agx_look{1};  // 0 none, 1 punchy, 2 golden
    float hdr_peak{6.0f};
    bool color_correction{true};
    float exposure{0.0f}, contrast{1.0f}, saturation{1.0f}, temperature{0.0f}, tint{0.0f};
    bool lut{true};
    std::filesystem::path lut_file;  // empty: the built-in photorealistic grade
    float lut_strength{1.0f};
    bool sharpening{true};
    float sharpening_strength{0.2f};
    // True when any effect is on (the master switch included).
    [[nodiscard]] bool active() const noexcept {
        return enabled && (extended_color || agx || color_correction || lut || sharpening);
    }
};
// Reads the PSPRECOMP_MOTORSTORM_POST_* options (filled from the INI by
// apply_native_config); missing options keep the defaults above.
[[nodiscard]] PostSettings post_settings_from_environment();

// A 3D colour lookup table: size^3 RGB entries, red varying fastest (the
// .cube order), each channel in [0, 1].
struct ColorLut {
    std::uint32_t size{};
    std::vector<std::array<float, 3>> entries;
};
// The built-in grade for a photorealistic look after AgX: a gentle S-curve,
// cool shadows / warm highlights, softened extreme saturation (film-like) and
// slightly earthier greens. Deliberately subtle.
[[nodiscard]] ColorLut build_photoreal_lut(std::uint32_t size = 33u);
// Adobe / Resolve .cube 3D LUT (LUT_3D_SIZE 2..65, default 0..1 domain).
// Throws std::runtime_error with the file and line on malformed input.
[[nodiscard]] ColorLut load_cube_lut(const std::filesystem::path &path);
// Entries packed 10:10:10 for the GPU (see applyLut in motorstorm_gpu.hlsl).
[[nodiscard]] std::vector<std::uint32_t> pack_lut(const ColorLut &lut);

// AgX on the PSP image (CPU copy of the shader math, for calibration and
// tests): display-encoded sRGB in, display-encoded out. The image is expanded
// so white becomes hdr_peak, scaled by `gain`, then tone mapped with `look`.
[[nodiscard]] float agx_display(float srgb, float hdr_peak, float gain, std::uint32_t look) noexcept;
// Scene gain that keeps a PSP mid grey (sRGB 0.46) where the game drew it, so
// AgX and its look change contrast and highlights but not overall brightness.
[[nodiscard]] float agx_mid_grey_gain(float hdr_peak, std::uint32_t look) noexcept;

// White-balance multipliers for temperature (-1 cool .. 1 warm) and tint
// (-1 green .. 1 magenta), normalized to keep luminance.
[[nodiscard]] std::array<float, 3> white_balance(float temperature, float tint) noexcept;

} // namespace motorstorm
