#include "motorstorm_config.hpp"
#include "motorstorm_post.hpp"

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
void check(bool condition, const char *message) {
    if (!condition)
        throw std::runtime_error(message);
}
bool near(float a, float b, float tolerance) { return std::fabs(a - b) <= tolerance; }
float luma(const std::array<float, 3> &c) { return 0.2126f * c[0] + 0.7152f * c[1] + 0.0722f * c[2]; }
const char *const kPostEnvironment[]{
    "PSPRECOMP_MOTORSTORM_POST", "PSPRECOMP_MOTORSTORM_POST_COLOR_DEPTH", "PSPRECOMP_MOTORSTORM_POST_TONEMAP",
    "PSPRECOMP_MOTORSTORM_POST_AGX_LOOK", "PSPRECOMP_MOTORSTORM_POST_HDR_PEAK",
    "PSPRECOMP_MOTORSTORM_POST_COLOR_CORRECTION", "PSPRECOMP_MOTORSTORM_POST_EXPOSURE",
    "PSPRECOMP_MOTORSTORM_POST_CONTRAST", "PSPRECOMP_MOTORSTORM_POST_SATURATION",
    "PSPRECOMP_MOTORSTORM_POST_TEMPERATURE", "PSPRECOMP_MOTORSTORM_POST_TINT", "PSPRECOMP_MOTORSTORM_POST_LUT",
    "PSPRECOMP_MOTORSTORM_POST_LUT_FILE", "PSPRECOMP_MOTORSTORM_POST_LUT_STRENGTH",
    "PSPRECOMP_MOTORSTORM_POST_SHARPEN", "PSPRECOMP_MOTORSTORM_POST_SHARPEN_STRENGTH",
    "PSPRECOMP_MOTORSTORM_POST_HUD_UNGRADED", "PSPRECOMP_MOTORSTORM_POST_BLOOM",
    "PSPRECOMP_MOTORSTORM_POST_BLOOM_STRENGTH", "PSPRECOMP_MOTORSTORM_POST_BLOOM_THRESHOLD",
    "PSPRECOMP_MOTORSTORM_POST_AO", "PSPRECOMP_MOTORSTORM_POST_AO_STRENGTH", "PSPRECOMP_MOTORSTORM_POST_AO_RADIUS",
    "PSPRECOMP_MOTORSTORM_POST_ATMOSPHERE", "PSPRECOMP_MOTORSTORM_POST_ATMOSPHERE_STRENGTH",
    "PSPRECOMP_MOTORSTORM_POST_ATMOSPHERE_DENSITY", "PSPRECOMP_MOTORSTORM_POST_ATMOSPHERE_START",
    "PSPRECOMP_MOTORSTORM_POST_ATMOSPHERE_COLOR", "PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLES",
    "PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLE_SOFTNESS", "PSPRECOMP_MOTORSTORM_POST_MOTION_BLUR",
    "PSPRECOMP_MOTORSTORM_POST_MOTION_BLUR_STRENGTH", "PSPRECOMP_MOTORSTORM_POST_MOTION_BLUR_NEAR",
    "PSPRECOMP_MOTORSTORM_POST_MOTION_BLUR_FOCUS", "PSPRECOMP_MOTORSTORM_POST_AUTO_EXPOSURE",
    "PSPRECOMP_MOTORSTORM_POST_AUTO_EXPOSURE_RANGE", "PSPRECOMP_MOTORSTORM_POST_AUTO_EXPOSURE_SPEED",
    "PSPRECOMP_MOTORSTORM_POST_VIGNETTE", "PSPRECOMP_MOTORSTORM_POST_FILM_GRAIN",
    "PSPRECOMP_MOTORSTORM_POST_CHROMATIC_ABERRATION"};
void clear_post_environment() {
    for (const char *name : kPostEnvironment)
        _putenv_s(name, "");
}
} // namespace

int main() {
    try {
        const auto directory = std::filesystem::temp_directory_path() / "motorstorm_post_tests";
        std::filesystem::create_directories(directory);

        // The shipped INI is the stock image (master switch off) and documents every effect
        // with the values it uses once enabled.
        const auto shipped = motorstorm::load_native_config(MOTORSTORM_CONFIG_TEMPLATE);
        check(shipped.warnings.empty(), "Shipped [enhancements] keys are known");
        check(!shipped.post && shipped.post_color_depth == 32u && shipped.post_color_correction &&
                  shipped.post_sharpen && shipped.post_hud_ungraded && !shipped.post_soft_particles,
              "Shipped INI keeps race enhancements off and documents the remaining effects");
        clear_post_environment();
        motorstorm::apply_native_config(shipped);
        const auto defaults = motorstorm::post_settings_from_environment();
        check(!defaults.enabled && !defaults.active() && defaults.extended_color && defaults.color_correction &&
                  defaults.sharpening && defaults.hud_ungraded && !defaults.soft_particles &&
                  near(defaults.sharpening_strength, 0.2f, 1e-6f),
              "INI defaults reach the renderer with the master switch off");
        check(!motorstorm::NativeConfig{}.post, "Without an INI the race effects stay off");

        const auto path = directory / "settings.ini";
        {
            std::ofstream file(path);
            file << "[enhancements]\nenabled=true\ncolor_depth=16\ncolor_correction=false\n"
                    "exposure=-0.5\ncontrast=1.2\nsaturation=0.8\ntemperature=0.3\ntint=-0.2\n"
                    "sharpening=false\nsharpening_strength=0.75 ; comment\nhud_ungraded=false\n"
                    "soft_particles=true\nsoft_particle_softness=900\n";
        }
        const auto custom = motorstorm::load_native_config(path);
        check(custom.warnings.empty(), "Every remaining enhancement option loads");
        clear_post_environment();
        motorstorm::apply_native_config(custom);
        const auto settings = motorstorm::post_settings_from_environment();
        check(settings.enabled && !settings.extended_color && !settings.color_correction &&
                  !settings.sharpening && !settings.hud_ungraded && settings.soft_particles &&
                  near(settings.soft_particle_softness, 900.0f, 1e-3f) && near(settings.exposure, -0.5f, 1e-6f) &&
                  near(settings.contrast, 1.2f, 1e-6f) && near(settings.saturation, 0.8f, 1e-6f) &&
                  near(settings.temperature, 0.3f, 1e-6f) && near(settings.tint, -0.2f, 1e-6f) &&
                  near(settings.sharpening_strength, 0.75f, 1e-6f),
              "Custom enhancement values reach the renderer");
        auto enabled = settings;
        enabled.color_correction = true;
        check(enabled.active() && !settings.active(), "Post passes run only for enabled image effects");
        _putenv_s("PSPRECOMP_MOTORSTORM_POST", "0");
        check(!motorstorm::post_settings_from_environment().active(), "The master switch disables every effect");
        clear_post_environment();

        for (const char *invalid : {"[enhancements]\ncolor_depth=24\n", "[enhancements]\nexposure=5\n",
                                   "[enhancements]\nsharpening_strength=high\n",
                                   "[enhancements]\nsoft_particle_softness=1\n"}) {
            { std::ofstream file(path); file << invalid; }
            bool rejected = false;
            try { (void)motorstorm::load_native_config(path); }
            catch (const std::exception &error) { rejected = std::string(error.what()).find(":2:") != std::string::npos; }
            check(rejected, "Invalid enhancement values report the option's line");
        }
        // Old INIs report removed options and cannot enable their GPU passes.
        {
            std::ofstream file(path);
            file << "[enhancements]\ntonemapping=agx\nagx_look=punchy\nhdr_peak=6\nlut=true\n"
                    "lut_file=missing.cube\nlut_strength=1\nbloom=true\nbloom_strength=1\nbloom_threshold=1\n"
                    "ao=true\nao_radius=2\nao_strength=1\natmosphere=true\natmosphere_strength=1\n"
                    "atmosphere_density=0.01\natmosphere_start=10\natmosphere_color=1,1,1\n"
                    "motion_blur=true\nmotion_blur_strength=1\nmotion_blur_focus=0.2\nmotion_blur_near=0\n"
                    "auto_exposure=true\nauto_exposure_range=3\nauto_exposure_speed=5\n"
                    "vignette=1\nfilm_grain=1\nchromatic_aberration=1\n";
        }
        const auto legacy = motorstorm::load_native_config(path);
        check(legacy.warnings.size() == 27u && !legacy.post, "Every removed enhancement key is ignored and reported");
        for (const char *name : kPostEnvironment) _putenv_s(name, "1");
        _putenv_s("PSPRECOMP_MOTORSTORM_POST", "0");
        check(!motorstorm::post_settings_from_environment().active(), "Legacy environment options cannot bypass the master switch");
        clear_post_environment();

        // White balance keeps luminance and moves red/blue the right way.
        const auto neutral = motorstorm::white_balance(0.0f, 0.0f);
        check(near(neutral[0], 1.0f, 1e-6f) && near(neutral[1], 1.0f, 1e-6f) && near(neutral[2], 1.0f, 1e-6f),
              "Neutral white balance is the identity");
        const auto warm = motorstorm::white_balance(1.0f, 0.0f), magenta = motorstorm::white_balance(0.0f, 1.0f);
        check(warm[0] > warm[2] && near(luma(warm), 1.0f, 1e-5f), "Warm temperature raises red over blue");
        check(magenta[1] < magenta[0] && near(luma(magenta), 1.0f, 1e-5f), "Magenta tint lowers green");

        std::filesystem::remove_all(directory);
        std::cout << "motorstorm_post_tests passed\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "motorstorm_post_tests failed: " << error.what() << '\n';
        return 1;
    }
}
