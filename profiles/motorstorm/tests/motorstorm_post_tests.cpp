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
    "PSPRECOMP_MOTORSTORM_POST_SHARPEN", "PSPRECOMP_MOTORSTORM_POST_SHARPEN_STRENGTH"};
void clear_post_environment() {
    for (const char *name : kPostEnvironment)
        _putenv_s(name, "");
}
} // namespace

int main() {
    try {
        const auto directory = std::filesystem::temp_directory_path() / "motorstorm_post_tests";
        std::filesystem::create_directories(directory);

        // The shipped INI enables every effect with the documented values.
        const auto shipped = motorstorm::load_native_config(MOTORSTORM_CONFIG_TEMPLATE);
        check(shipped.warnings.empty(), "Shipped [enhancements] keys are known");
        check(shipped.post && shipped.post_color_depth == 32u && shipped.post_tonemap == "agx" &&
                  shipped.post_agx_look == "punchy" && shipped.post_color_correction && shipped.post_lut &&
                  shipped.post_sharpen && shipped.post_lut_file.empty(),
              "Shipped INI enables the race enhancements");
        clear_post_environment();
        motorstorm::apply_native_config(shipped);
        const auto defaults = motorstorm::post_settings_from_environment();
        check(defaults.active() && defaults.extended_color && defaults.agx && defaults.agx_look == 1u &&
                  defaults.lut && defaults.sharpening && near(defaults.hdr_peak, 6.0f, 1e-6f) &&
                  near(defaults.sharpening_strength, 0.2f, 1e-6f) && near(defaults.lut_strength, 1.0f, 1e-6f),
              "INI defaults reach the renderer settings");

        // Each switch and value round-trips from the INI to the renderer.
        const auto path = directory / "settings.ini";
        {
            std::ofstream file(path);
            file << "[enhancements]\nenabled=true\ncolor_depth=16\ntonemapping=none\nagx_look=golden\n"
                    "hdr_peak=2.5\ncolor_correction=false\nexposure=-0.5\ncontrast=1.2\nsaturation=0.8\n"
                    "temperature=0.3\ntint=-0.2\nlut=false\nlut_file=luts/a.cube\nlut_strength=0.5\n"
                    "sharpening=false\nsharpening_strength=0.75 ; comment\n";
        }
        const auto custom = motorstorm::load_native_config(path);
        check(custom.warnings.empty() && custom.post_color_depth == 16u && custom.post_tonemap == "none" &&
                  custom.post_agx_look == "golden" && !custom.post_color_correction && !custom.post_lut &&
                  !custom.post_sharpen && custom.post_sharpen_strength == "0.75" &&
                  custom.post_lut_file == (directory / "luts" / "a.cube").lexically_normal(),
              "Every [enhancements] option loads");
        clear_post_environment();
        motorstorm::apply_native_config(custom);
        const auto settings = motorstorm::post_settings_from_environment();
        check(!settings.extended_color && !settings.agx && settings.agx_look == 2u && !settings.color_correction &&
                  !settings.lut && !settings.sharpening && near(settings.exposure, -0.5f, 1e-6f) &&
                  near(settings.contrast, 1.2f, 1e-6f) && near(settings.saturation, 0.8f, 1e-6f) &&
                  near(settings.temperature, 0.3f, 1e-6f) && near(settings.tint, -0.2f, 1e-6f) &&
                  near(settings.hdr_peak, 2.5f, 1e-6f) && near(settings.sharpening_strength, 0.75f, 1e-6f) &&
                  settings.lut_file == custom.post_lut_file,
              "Custom enhancement values reach the renderer");
        check(!settings.active(), "All effects off means no post pass");
        _putenv_s("PSPRECOMP_MOTORSTORM_POST", "0");
        _putenv_s("PSPRECOMP_MOTORSTORM_POST_SHARPEN", "1");
        check(!motorstorm::post_settings_from_environment().active(), "The master switch disables every effect");
        clear_post_environment();

        for (const char *invalid : {"[enhancements]\ncolor_depth=24\n", "[enhancements]\ntonemapping=aces\n",
                                   "[enhancements]\nagx_look=vivid\n", "[enhancements]\nexposure=5\n",
                                   "[enhancements]\nsharpening_strength=high\n", "[enhancements]\nlut=maybe\n"}) {
            { std::ofstream file(path); file << invalid; }
            bool rejected = false;
            try { (void)motorstorm::load_native_config(path); }
            catch (const std::exception &error) { rejected = std::string(error.what()).find(":2:") != std::string::npos; }
            check(rejected, "Invalid enhancement values report the option's line");
        }

        // AgX calibration: PSP mid grey stays put for every look and peak,
        // highlights roll off below white, and brightness keeps its order.
        for (std::uint32_t look = 0; look < 3u; ++look)
            for (const float peak : {1.0f, 2.0f, 6.0f, 16.0f}) {
                const float gain = motorstorm::agx_mid_grey_gain(peak, look);
                check(near(motorstorm::agx_display(0.46f, peak, gain, look), 0.46f, 1e-3f),
                      "AgX calibration keeps PSP mid grey");
                check(motorstorm::agx_display(1.0f, peak, gain, look) < 1.0f, "AgX rolls white off");
                float last = -1.0f;
                for (int i = 0; i <= 20; ++i) {
                    const float out = motorstorm::agx_display(i / 20.0f, peak, gain, look);
                    check(out >= last, "AgX keeps brightness order");
                    last = out;
                }
            }
        const float punchy = motorstorm::agx_mid_grey_gain(6.0f, 1u);
        check(motorstorm::agx_display(1.0f, 6.0f, punchy, 1u) > 0.94f &&
                  motorstorm::agx_display(0.85f, 6.0f, punchy, 1u) > 0.82f,
              "Default AgX keeps the game's bright snow bright");

        // White balance keeps luminance and moves red/blue the right way.
        const auto neutral = motorstorm::white_balance(0.0f, 0.0f);
        check(near(neutral[0], 1.0f, 1e-6f) && near(neutral[1], 1.0f, 1e-6f) && near(neutral[2], 1.0f, 1e-6f),
              "Neutral white balance is the identity");
        const auto warm = motorstorm::white_balance(1.0f, 0.0f), magenta = motorstorm::white_balance(0.0f, 1.0f);
        check(warm[0] > warm[2] && near(luma(warm), 1.0f, 1e-5f), "Warm temperature raises red over blue");
        check(magenta[1] < magenta[0] && near(luma(magenta), 1.0f, 1e-5f), "Magenta tint lowers green");

        // The built-in grade is subtle: ends stay put, greys stay nearly neutral
        // and brightness keeps its order.
        const auto lut = motorstorm::build_photoreal_lut(33u);
        check(lut.size == 33u && lut.entries.size() == 33u * 33u * 33u, "Built-in LUT is 33^3");
        const auto at = [&](std::uint32_t r, std::uint32_t g, std::uint32_t b) {
            return lut.entries[(static_cast<std::size_t>(b) * 33u + g) * 33u + r];
        };
        const auto black = at(0, 0, 0), white = at(32, 32, 32);
        check(black[0] < 0.01f && black[1] < 0.01f && black[2] < 0.01f, "Black stays black");
        check(white[0] > 0.99f && white[1] > 0.99f && white[2] > 0.99f, "White stays white");
        float previous = -1.0f;
        for (std::uint32_t v = 0; v < 33u; ++v) {
            const auto grey = at(v, v, v);
            check(std::fabs(grey[0] - grey[2]) < 0.03f, "Greys stay nearly neutral");
            check(luma(grey) >= previous, "The grey ramp stays monotonic");
            previous = luma(grey);
        }
        const auto vivid = at(0, 32, 0);
        check(vivid[1] < 1.0f + 1e-6f && vivid[0] > 0.0f, "Neon green is softened toward olive");

        // .cube loading: an identity LUT reproduces its input; malformed files fail.
        const auto cube = directory / "identity.cube";
        {
            std::ofstream file(cube);
            file << "\xEF\xBB\xBF# identity\nTITLE \"identity\"\nLUT_3D_SIZE 2\nDOMAIN_MIN 0 0 0\nDOMAIN_MAX 1 1 1\n";
            for (int b = 0; b < 2; ++b)
                for (int g = 0; g < 2; ++g)
                    for (int r = 0; r < 2; ++r)
                        file << r << ' ' << g << ' ' << b << '\n';
        }
        const auto identity = motorstorm::load_cube_lut(cube);
        check(identity.size == 2u && identity.entries.size() == 8u && identity.entries[1][0] == 1.0f &&
                  identity.entries[2][1] == 1.0f && identity.entries[4][2] == 1.0f,
              "A .cube LUT loads in red-fastest order");
        const auto packed = motorstorm::pack_lut(identity);
        check(packed[7] == (1023u | (1023u << 10) | (1023u << 20)) && packed[0] == 0u, "LUT packs as 10:10:10");
        for (const char *broken : {"LUT_3D_SIZE 2\n0 0 0\n", "0 0 0\n", "LUT_3D_SIZE 1\n", "LUT_1D_SIZE 16\n",
                                  "LUT_3D_SIZE 2\nDOMAIN_MAX 2 2 2\n", "LUT_3D_SIZE 2\n0 0\n"}) {
            { std::ofstream file(cube); file << broken; }
            bool rejected = false;
            try { (void)motorstorm::load_cube_lut(cube); }
            catch (const std::exception &) { rejected = true; }
            check(rejected, "Malformed .cube files are rejected");
        }
        std::filesystem::remove_all(directory);
        std::cout << "motorstorm_post_tests passed\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "motorstorm_post_tests failed: " << error.what() << '\n';
        return 1;
    }
}
