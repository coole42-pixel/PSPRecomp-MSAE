#pragma once

#include <array>
#include <cstdint>

namespace motorstorm {

// Race-only image enhancements ([enhancements] in the INI). The hardware
// renderer applies them on the present queue while the game is racing; menus,
// the pause menu, loading screens and movies keep the original image.
struct PostSettings {
    bool enabled{true};
    bool extended_color{true};  // color_depth = 32: full-precision 16-bit targets + debanding
    bool color_correction{true};
    float exposure{0.0f}, contrast{1.0f}, saturation{1.0f}, temperature{0.0f}, tint{0.0f};
    bool sharpening{true};
    float sharpening_strength{0.2f};
    // Keep the race HUD (through-mode draws) out of the colour grade: it is
    // tagged while drawing and left as the game drew it. Needs no other effect.
    bool hud_ungraded{true};
    // Soft particles: blended particles fade out where they meet geometry.
    bool soft_particles{false};
    float soft_particle_softness{600.0f};  // depth-buffer units over which they fade
    [[nodiscard]] bool soft_particles_active() const noexcept { return enabled && soft_particles; }
    [[nodiscard]] bool needs_depth() const noexcept { return enabled && hud_ungraded; }
    [[nodiscard]] bool active() const noexcept {
        return enabled && (extended_color || color_correction || sharpening);
    }
};
// Reads the PSPRECOMP_MOTORSTORM_POST_* options (filled from the INI by
// apply_native_config); missing options keep the defaults above.
[[nodiscard]] PostSettings post_settings_from_environment();

// White-balance multipliers for temperature (-1 cool .. 1 warm) and tint
// (-1 green .. 1 magenta), normalized to keep luminance.
[[nodiscard]] std::array<float, 3> white_balance(float temperature, float tint) noexcept;

} // namespace motorstorm
