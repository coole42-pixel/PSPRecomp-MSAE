#include "motorstorm_post.hpp"

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string_view>

namespace motorstorm {
namespace {
const char *option(const char *name) {
    const char *value = std::getenv(name);
    return value && *value ? value : nullptr;
}
bool flag(const char *name, bool fallback) {
    const char *value = option(name);
    if (!value)
        return fallback;
    return std::strcmp(value, "0") != 0 && std::strcmp(value, "false") != 0 && std::strcmp(value, "off") != 0;
}
float real(const char *name, float fallback, float minimum, float maximum) {
    const char *value = option(name);
    if (!value)
        return fallback;
    char *end{};
    const float parsed = std::strtof(value, &end);
    return end != value && std::isfinite(parsed) ? std::clamp(parsed, minimum, maximum) : fallback;
}
float luma(const std::array<float, 3> &c) { return 0.2126f * c[0] + 0.7152f * c[1] + 0.0722f * c[2]; }
} // namespace

PostSettings post_settings_from_environment() {
    PostSettings settings;
    settings.enabled = flag("PSPRECOMP_MOTORSTORM_POST", settings.enabled);
    if (const char *depth = option("PSPRECOMP_MOTORSTORM_POST_COLOR_DEPTH"))
        settings.extended_color = std::string_view(depth) != "16";
    settings.color_correction = flag("PSPRECOMP_MOTORSTORM_POST_COLOR_CORRECTION", settings.color_correction);
    settings.exposure = real("PSPRECOMP_MOTORSTORM_POST_EXPOSURE", settings.exposure, -3.0f, 3.0f);
    settings.contrast = real("PSPRECOMP_MOTORSTORM_POST_CONTRAST", settings.contrast, 0.5f, 2.0f);
    settings.saturation = real("PSPRECOMP_MOTORSTORM_POST_SATURATION", settings.saturation, 0.0f, 2.0f);
    settings.temperature = real("PSPRECOMP_MOTORSTORM_POST_TEMPERATURE", settings.temperature, -1.0f, 1.0f);
    settings.tint = real("PSPRECOMP_MOTORSTORM_POST_TINT", settings.tint, -1.0f, 1.0f);
    settings.sharpening = flag("PSPRECOMP_MOTORSTORM_POST_SHARPEN", settings.sharpening);
    settings.sharpening_strength =
        real("PSPRECOMP_MOTORSTORM_POST_SHARPEN_STRENGTH", settings.sharpening_strength, 0.0f, 1.0f);
    settings.hud_ungraded = flag("PSPRECOMP_MOTORSTORM_POST_HUD_UNGRADED", settings.hud_ungraded);
    settings.soft_particles = flag("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLES", settings.soft_particles);
    settings.soft_particle_softness =
        real("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLE_SOFTNESS", settings.soft_particle_softness, 10.0f, 20000.0f);
    return settings;
}

std::array<float, 3> white_balance(float temperature, float tint) noexcept {
    temperature = std::clamp(temperature, -1.0f, 1.0f);
    tint = std::clamp(tint, -1.0f, 1.0f);
    std::array<float, 3> m{1.0f + 0.10f * temperature, 1.0f - 0.08f * tint, 1.0f - 0.10f * temperature};
    const float y = luma(m);
    for (auto &v : m)
        v /= y;
    return m;
}

} // namespace motorstorm
