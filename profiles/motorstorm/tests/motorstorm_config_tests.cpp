#include "motorstorm_config.hpp"
#include "motorstorm_frame_rate.hpp"
#include "motorstorm_presentation.hpp"

#include <array>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <stdexcept>

namespace {
void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
struct EnvironmentScope {
    std::array<const char *, 10> names{"PSPRECOMP_MOTORSTORM_RENDERER", "PSPRECOMP_MOTORSTORM_RESOLUTION",
        "PSPRECOMP_MOTORSTORM_AA", "PSPRECOMP_MOTORSTORM_WINDOW", "PSPRECOMP_MOTORSTORM_FULLSCREEN",
        "PSPRECOMP_MOTORSTORM_WINDOW_SCALE", "PSPRECOMP_MOTORSTORM_AUDIO", "PSPRECOMP_MOTORSTORM_SOFTGE",
        "PSPRECOMP_MOTORSTORM_PROFILE", "PSPRECOMP_MOTORSTORM_FPS"};
    std::array<std::string, 10> previous;
    EnvironmentScope() {
        for (std::size_t i = 0; i < names.size(); ++i) {
            if (const char *value = std::getenv(names[i])) previous[i] = value;
            _putenv_s(names[i], "");
        }
    }
    ~EnvironmentScope() {
        for (std::size_t i = 0; i < names.size(); ++i) _putenv_s(names[i], previous[i].c_str());
    }
};
}

int main() {
    try {
        const auto shipped = motorstorm::load_native_config(MOTORSTORM_CONFIG_TEMPLATE);
        check(shipped.loaded && shipped.resolution == 4u && shipped.antialiasing == "ssaa4x" &&
              shipped.renderer == "d3d12" && shipped.window && shipped.audio && shipped.fps == 60u,
              "Shipped INI must enable native 4x / SSAA4x / 60 fps with window and audio");
        check(!shipped.fullscreen && !shipped.trace_imports && !shipped.trace_filesystem &&
              !shipped.verbose && shipped.debug_environment.empty(), "Debug examples remain commented out");
        const auto directory = std::filesystem::temp_directory_path() / "motorstorm_config_regressions";
        std::filesystem::create_directories(directory);
        const auto path = directory / "settings.ini";
        {
            std::ofstream file(path);
            file << "\xEF\xBB\xBF[graphics]\nresolution=2\nantialiasing=None\nrenderer=auto\nfps=Original\n"
                    "[window]\nenabled=false\nfullscreen=true\nscale=3\n[audio]\nenabled=false\n"
                    "[logging]\ntrace_imports=true\ntrace_filesystem=true\nverbose=true\n"
                    "[runtime]\nmax_dispatches=123456\n[debug]\nprofile=true ; example comment\n"
                    "trace_music=false\nframe_dump_count=2\nframe_dump_dir=captures\n";
        }
        const auto custom = motorstorm::load_native_config(path);
        check(custom.resolution == 2u && custom.antialiasing == "none" && custom.renderer == "auto" &&
              !custom.window && custom.fullscreen && custom.window_scale == 3u && !custom.audio &&
              custom.fps == 0u,
              "INI graphics, window and audio choices load independently");
        check(custom.trace_imports && custom.trace_filesystem && custom.verbose && custom.max_dispatches == 123456u,
              "Logging and dispatch options are honored");
        check(custom.debug_environment.size() == 3u && custom.debug_environment.back().second == (directory / "captures").string(),
              "Uncommented debug options parse inline comments and resolve output paths");
        {
            EnvironmentScope scope;
            _putenv_s("PSPRECOMP_MOTORSTORM_RESOLUTION", "1");
            _putenv_s("PSPRECOMP_MOTORSTORM_WINDOW", "0");
            motorstorm::apply_native_config(shipped);
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_RESOLUTION")) == "1" &&
                  std::string(std::getenv("PSPRECOMP_MOTORSTORM_WINDOW")) == "0", "Explicit environment choices override INI");
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_FPS")) == "60", "INI frame rate reaches the runtime");
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_AA")) == "ssaa4x" &&
                  std::getenv("PSPRECOMP_MOTORSTORM_PROFILE") == nullptr, "INI fills defaults without enabling debug switches");
            _putenv_s("PSPRECOMP_MOTORSTORM_PROFILE", "");
            motorstorm::apply_native_config(custom);
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_PROFILE")) == "1", "INI enables requested debug switches");
            // apply_native_config also sets numeric/path debug values in this scenario.
            _putenv_s("PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT", "");
            _putenv_s("PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR", "");
        }
        for (const char *invalid : {"[graphics]\nresolution=0\n", "[graphics]\nantialiasing=MSAA\n",
                                   "[window]\nfullscreen=perhaps\n", "[window]\nscale=9\n",
                                   "[graphics]\nfps=20\n", "[graphics]\nfps=241\n", "[graphics]\nfps=fast\n"}) {
            { std::ofstream file(path); file << invalid; }
            bool rejected = false;
            try { (void)motorstorm::load_native_config(path); }
            catch (const std::exception &error) { rejected = std::string(error.what()).find(path.string() + ":2:") != std::string::npos; }
            check(rejected, "Invalid INI values report the option's file and line");
        }
        const auto fallback = motorstorm::load_native_config(directory / "missing.ini");
        check(!fallback.loaded && fallback.resolution == 4u && fallback.antialiasing == "ssaa4x" && fallback.fps == 60u,
              "Missing INI retains documented defaults");
        {
            const auto original = motorstorm::plan_frame_rate(0u);
            check(!original.unlocked && original.vblank_us == 16667u && original.interval == 0u,
                  "Original pacing leaves the game's interval and the 60 Hz display alone");
            const auto sixty = motorstorm::plan_frame_rate(60u), thirty = motorstorm::plan_frame_rate(30u);
            check(sixty.unlocked && sixty.interval == 1u && sixty.vblank_us == 16667u &&
                  sixty.game_fps == sixty.refresh_hz, "60 fps flips every PSP vblank");
            check(thirty.interval == 2u && thirty.vblank_us == 16667u && thirty.game_fps * 2.0f == thirty.refresh_hz,
                  "30 fps keeps the retail two-vblank cadence");
            const auto high = motorstorm::plan_frame_rate(144u);
            check(high.interval == 1u && high.vblank_us == 6944u && high.game_fps == 144.0f && high.refresh_hz == 144.0f,
                  "Rates above 60 run the virtual display at the target rate");
            check(motorstorm::plan_frame_rate(1000u).game_fps == 240.0f, "Frame rate plan clamps to the supported range");
        }
        {
            using Decision = motorstorm::FrameRateGovernor::Decision;
            motorstorm::FrameRateGovernor governor;
            // Real-time at the target: keep it.
            for (int i = 0; i < 20; ++i)
                check(governor.update(0.5, 0.5, 0.15, true, 2.0) == Decision::Keep, "Real-time target is kept");
            // A hitch (up to 1.5 s slow) is tolerated; 2 s in a row fall back.
            for (int i = 0; i < 3; ++i)
                check(governor.update(0.5, 0.4, 0.0, true, 2.0) == Decision::Keep, "A short hitch is tolerated");
            check(governor.update(0.5, 0.5, 0.0, true, 2.0) == Decision::Keep, "Recovery resets the slow count");
            for (int i = 0; i < 3; ++i)
                check(governor.update(0.5, 0.4, 0.0, true, 2.0) == Decision::Keep, "Slow samples accumulate");
            check(governor.update(0.5, 0.4, 0.0, true, 2.0) == Decision::Fallback,
                  "Sustained slow motion falls back to 30 fps");
            // At 30 fps, 60% busy would need 120% at 60 fps: stay.
            for (int i = 0; i < 60; ++i)
                check(governor.update(0.5, 0.5, 0.2, false, 2.0) == Decision::Keep, "No headroom keeps the fallback");
            check(governor.restore_due(), "The back-off has passed: the next scene boundary restores");
            // Loading work never counts as slowness, nor does the quiet time after it.
            motorstorm::FrameRateGovernor loading;
            for (int i = 0; i < 20; ++i)
                check(loading.update(0.5, 0.2, 0.0, true, 2.0, true) == Decision::Keep, "Loading samples are ignored");
            for (int i = 0; i < 6; ++i)
                check(loading.update(0.5, 0.4, 0.0, true, 2.0) == Decision::Keep, "Quiet period after loading");
            motorstorm::FrameRateGovernor idle;
            for (int i = 0; i < 4; ++i) (void)idle.update(0.5, 0.4, 0.0, true, 2.0);
            check(!idle.restore_due(), "No restore inside the back-off");
            int samples = 0;
            while (idle.update(0.5, 0.5, 0.35, false, 2.0) == Decision::Keep && samples < 200) ++samples;
            check(samples >= 20 && samples < 40, "Clear headroom restores the target after the back-off");
            for (int i = 0; i < 3; ++i) (void)idle.update(0.5, 0.4, 0.0, true, 2.0);
            check(idle.update(0.5, 0.4, 0.0, true, 2.0) == Decision::Fallback && idle.backoff_seconds() == 20.0,
                  "Falling back right after a restore doubles the back-off");
        }
        {
            { std::ofstream file(path); file << "[graphics]\nfullscreen = true\ndynamic_fps=false\nsharpness=3\n"; }
            const auto misplaced = motorstorm::load_native_config(path);
            check(misplaced.fullscreen && !misplaced.dynamic_fps && misplaced.warnings.size() == 2u,
                  "Fullscreen outside [window] is honored and reported; unknown keys are reported");
            check(shipped.warnings.empty() && shipped.dynamic_fps, "Shipped INI has only known options");
        }
        const auto ultrawide = motorstorm::fit_presentation(2560, 1080, 480, 272);
        check(ultrawide.height == 1080u && ultrawide.width == 1905u && ultrawide.left == 327u && ultrawide.top == 0u,
              "Ultrawide fullscreen pillarboxes the PSP aspect ratio");
        const auto portrait = motorstorm::fit_presentation(1080, 1920, 480, 272);
        check(portrait.width == 1080u && portrait.height == 612u && portrait.top == 654u,
              "Portrait presentation letterboxes the PSP aspect ratio");
        check(motorstorm::fit_presentation(0, 0, 480, 272).width == 0u, "Minimized client dimensions do not divide by zero");
        std::puts("MotorStorm INI defaults, validation, overrides and aspect ratio tests passed");
        return 0;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "[FAIL] %s\n", error.what());
        return 1;
    }
}
