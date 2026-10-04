#include "motorstorm_arena.hpp"
#include "motorstorm_config.hpp"
#include "motorstorm_frame_rate.hpp"
#include "motorstorm_presentation.hpp"

#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <fstream>
#include <stdexcept>

namespace {
void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
struct EnvironmentScope {
    std::array<const char *, 11> names{"PSPRECOMP_MOTORSTORM_RENDERER", "PSPRECOMP_MOTORSTORM_RESOLUTION",
        "PSPRECOMP_MOTORSTORM_AA", "PSPRECOMP_MOTORSTORM_WINDOW", "PSPRECOMP_MOTORSTORM_FULLSCREEN",
        "PSPRECOMP_MOTORSTORM_WINDOW_SCALE", "PSPRECOMP_MOTORSTORM_AUDIO", "PSPRECOMP_MOTORSTORM_SOFTGE",
        "PSPRECOMP_MOTORSTORM_PROFILE", "PSPRECOMP_MOTORSTORM_FPS", "PSPRECOMP_MOTORSTORM_WIDESCREEN"};
    std::array<std::string, 11> previous;
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
        check(shipped.loaded && shipped.resolution == 4u && shipped.antialiasing == "fxaa" &&
              shipped.renderer == "d3d12" && shipped.window && shipped.audio && shipped.fps == 60u && shipped.widescreen == "auto",
              "Shipped INI must enable native 4x / FXAA / 60 fps with window and audio");
        check(!shipped.fullscreen && !shipped.trace_imports && !shipped.trace_filesystem &&
              !shipped.verbose && shipped.debug_environment.empty(), "Debug examples remain commented out");
        const auto directory = std::filesystem::temp_directory_path() / "motorstorm_config_regressions";
        std::filesystem::create_directories(directory);
        const auto path = directory / "settings.ini";
        {
            std::ofstream file(path);
            file << "\xEF\xBB\xBF[graphics]\nresolution=2\nantialiasing=None\nrenderer=auto\nfps=Original\nwidescreen=psp\n"
                    "[window]\nenabled=false\nfullscreen=true\nscale=3\n[audio]\nenabled=false\n"
                    "[logging]\ntrace_imports=true\ntrace_filesystem=true\nverbose=true\n"
                    "[runtime]\nmax_dispatches=123456\n[debug]\nprofile=true ; example comment\n"
                    "trace_music=false\nframe_dump_count=2\nframe_dump_dir=captures\n";
        }
        const auto custom = motorstorm::load_native_config(path);
        check(custom.resolution == 2u && custom.antialiasing == "none" && custom.renderer == "auto" &&
              !custom.window && custom.fullscreen && custom.window_scale == 3u && !custom.audio &&
              custom.fps == 0u && custom.widescreen == "psp",
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
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_WIDESCREEN")) == "auto", "INI enables automatic widescreen");
            _putenv_s("PSPRECOMP_MOTORSTORM_WIDESCREEN", "psp");
            motorstorm::apply_native_config(shipped);
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_WIDESCREEN")) == "psp", "Explicit PSP aspect overrides auto");
            check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_AA")) == "fxaa" &&
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
                                   "[graphics]\nfps=20\n", "[graphics]\nfps=241\n", "[graphics]\nfps=fast\n",
                                   "[graphics]\nwidescreen=stretch\n"}) {
            { std::ofstream file(path); file << invalid; }
            bool rejected = false;
            try { (void)motorstorm::load_native_config(path); }
            catch (const std::exception &error) { rejected = std::string(error.what()).find(path.string() + ":2:") != std::string::npos; }
            check(rejected, "Invalid INI values report the option's file and line");
        }
        const auto fallback = motorstorm::load_native_config(directory / "missing.ini");
        check(!fallback.loaded && fallback.resolution == 4u && fallback.antialiasing == "fxaa" && fallback.fps == 60u,
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
        for (const auto width : {1920u, 2560u, 3840u}) {
            const float scale = motorstorm::widescreen_scale(width, 1080);
            const auto fitted = motorstorm::fit_game_presentation(width, 1080, 480, 272, scale);
            check(fitted.height == 1080u && fitted.width >= width - 1u && fitted.left == 0u,
                  "Automatic widescreen gameplay fills 16:9, 21:9 and 32:9 windows");
            const float left = motorstorm::widescreen_hud_x(0, scale), right = motorstorm::widescreen_hud_x(480, scale);
            check(std::fabs((right - left) * scale - 480) < 0.001f && std::fabs((left + right) / 2 - 240) < 0.001f,
                  "HUD keeps its physical width in a centred safe area");
        }
        check(motorstorm::widescreen_scale(1080, 1920) == 1.0f && motorstorm::widescreen_scale(0, 0) == 1.0f,
              "Narrow and minimized windows keep the native aspect");
        {
            // The guest arena reuses freed blocks. The crash this fixes: MotorStorm allocates a
            // 0x1B0000 block around every load; the old bump allocator never took it back and
            // failed on the third race ("arena exhausted").
            motorstorm::ArenaState arena;
            arena.next = 0x08AC9500u;
            const std::uint32_t limit = 0x09FF0000u;
            const auto heap = motorstorm::arena_take(arena, 0x012F0000u, 64u, limit);
            check(heap == 0x08AC9500u, "The first block comes from the arena start");
            for (int load = 0; load < 20; ++load) {
                const auto block = motorstorm::arena_take(arena, 0x001B0000u, 64u, limit);
                check(block != 0u && block % 64u == 0u, "A load-time block must always be found");
                motorstorm::arena_give_back(arena, block, 0x001B0000u);
            }
            check(arena.next == 0x08AC9500u + 0x012F0000u && arena.free.empty(),
                  "Freeing the last block lowers the arena top again");
            // Holes are reused first-fit, neighbours merge, and an oversized request still fails.
            const auto a1 = motorstorm::arena_take(arena, 0x1000u, 64u, limit);
            const auto a2 = motorstorm::arena_take(arena, 0x2000u, 64u, limit);
            const auto a3 = motorstorm::arena_take(arena, 0x1000u, 64u, limit);
            motorstorm::arena_give_back(arena, a1, 0x1000u);
            motorstorm::arena_give_back(arena, a2, 0x2000u);
            check(arena.free.size() == 1u && arena.free.begin()->second == 0x3000u, "Adjacent free blocks merge");
            const auto reused = motorstorm::arena_take(arena, 0x2800u, 64u, limit);
            check(reused == a1, "A merged hole is reused by a larger block");
            motorstorm::arena_give_back(arena, a3, 0x1000u);
            motorstorm::arena_give_back(arena, reused, 0x2800u);
            check(arena.next == 0x08AC9500u + 0x012F0000u, "Everything freed returns the arena to its start");
            check(motorstorm::arena_take(arena, 0x02000000u, 64u, limit) == 0u, "A block larger than the arena fails cleanly");
            motorstorm::arena_give_back(arena, 0x12345678u, 16u);  // unknown address: ignored
            check(motorstorm::arena_free_total(arena, limit) == limit - arena.next, "Free totals count the unused top");
        }
        {
            // Camera objects are found by layout: aspect, four zero words, 480, 272.
            std::vector<std::uint32_t> ram(512u, 0xBCBCBCBCu);
            const auto put = [&](std::size_t word, float aspect, std::uint32_t second) {
                std::memcpy(&ram[word], &aspect, 4);
                ram[word + 1] = second;
                ram[word + 2] = ram[word + 3] = ram[word + 4] = 0u;
                ram[word + 5] = 480u; ram[word + 6] = 272u;
            };
            put(40, 16.0f / 9.0f, 0u);          // the race camera
            put(100, 480.0f / 272.0f, 0xFF000000u);  // the viewport object: not a camera
            put(200, 16.0f / 9.0f, 0u);         // a second camera
            put(300, 2.5f, 0u);                 // an already widened or unrelated value
            ram[400] = 0x3FE38E39u;             // a lone 16/9 float with the wrong neighbours
            ram[501] = ram[502] = ram[503] = ram[504] = 0u; ram[505] = 480u; ram[506] = 272u;  // fits the tail exactly
            const float tail = 16.0f / 9.0f;
            std::memcpy(&ram[500], &tail, 4);
            const auto found = motorstorm::find_camera_aspects(reinterpret_cast<const std::uint8_t *>(ram.data()),
                                                               ram.size() * 4u);
            check(found == std::vector<std::uint32_t>{160u, 800u, 2000u},
                  "Only real camera objects are found (not the viewport, widened values or lone floats)");
            check(motorstorm::samples_display_picture(0x04098000u, 512) && motorstorm::samples_display_picture(0x04000000u, 480) &&
                  !motorstorm::samples_display_picture(0x04200000u, 512) && !motorstorm::samples_display_picture(0x08800000u, 512) &&
                  !motorstorm::samples_display_picture(0x04100000u, 128),
                  "Only copies of the display picture count as scene copies, not small textures or other memory");
            check(motorstorm::camera_target_aspect(16.0f / 9.0f, 1920, 1080) == 16.0f / 9.0f &&
                  motorstorm::camera_target_aspect(16.0f / 9.0f, 3440, 1440) > 2.38f &&
                  motorstorm::camera_target_aspect(16.0f / 9.0f, 1024, 768) == 16.0f / 9.0f &&
                  motorstorm::camera_target_aspect(16.0f / 9.0f, 0, 0) == 16.0f / 9.0f,
                  "The camera aspect follows the window and never narrows the game's own");
        }
        const auto portrait = motorstorm::fit_presentation(1080, 1920, 480, 272);
        check(portrait.width == 1080u && portrait.height == 612u && portrait.top == 654u,
              "Portrait presentation letterboxes the PSP aspect ratio");
        check(motorstorm::fit_presentation(0, 0, 480, 272).width == 0u, "Minimized client dimensions do not divide by zero");
        {
            const auto clean = motorstorm::load_native_config(MOTORSTORM_CLEAN_CONFIG);
            const auto debug = motorstorm::load_native_config(MOTORSTORM_DEBUG_CONFIG);
            check(clean.loaded && debug.loaded && clean.warnings.empty() && debug.warnings.empty(),
                  "Both presets contain only supported options");
            check(clean.resolution == 4u && clean.antialiasing == "fxaa" && clean.renderer == "d3d12" &&
                  clean.texture_filtering == "enhanced" && clean.fps == 60u && !clean.dynamic_fps &&
                  clean.fullscreen && clean.fullscreen_mode == "exclusive" && clean.texture_replace &&
                  clean.texture_replace_dir.filename() == "textures_bc7" && clean.texture_budget_mb == 4192u &&
                  clean.post && clean.post_soft_particles && clean.audio_api == "wasapi",
                  "Clean preset retains the user's native settings");
            check(debug.resolution == clean.resolution && debug.antialiasing == clean.antialiasing &&
                  debug.renderer == clean.renderer && debug.texture_filtering == clean.texture_filtering &&
                  debug.fps == clean.fps && debug.dynamic_fps == clean.dynamic_fps &&
                  debug.fullscreen == clean.fullscreen && debug.fullscreen_mode == clean.fullscreen_mode &&
                  debug.texture_replace_dir == clean.texture_replace_dir &&
                  debug.texture_budget_mb == clean.texture_budget_mb && debug.post == clean.post &&
                  debug.post_color_depth == clean.post_color_depth && debug.post_soft_particles == clean.post_soft_particles,
                  "Debug preset preserves gameplay and image settings");
            check(clean.debug_environment.empty() && !clean.verbose && !clean.trace_imports && !clean.trace_filesystem,
                  "Clean preset does not enable debugging");
            check(debug.verbose && debug.trace_imports && debug.trace_filesystem && debug.texture_dump,
                  "Full debug enables logging and texture captures");
            const std::array<const char *, 16> diagnostics{
                "PROFILE", "TRACE_CTRL", "TRACE_MUSIC", "TRACE_ATRAC", "TRACE_DISPLAY", "PC_SAMPLE",
                "D3D12_DEBUG", "TRACE_STATE", "TRACE_SWITCH", "TRACE_FLAGS", "TRACE_CALLBACK_OWNER",
                "TRACE_PREEMPT", "STACK_SCAN", "FRAME_DUMP", "FRAME_DUMP_BOTH", "FRAME_DUMP_ROLLING"};
            const auto value = [&](const std::string &name) -> std::string {
                for (const auto &[key, text] : debug.debug_environment) if (key == name) return text;
                return {};
            };
            for (const auto name : diagnostics)
                check(value(std::string("PSPRECOMP_MOTORSTORM_") + name) == "1", "Full debug enables every diagnostic switch");
            check(value("PSPRECOMP_MOTORSTORM_FRAME_DUMP_EVERY") == "1" &&
                  value("PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT") == "120" &&
                  value("PSPRECOMP_MOTORSTORM_STOP_AFTER_GE").empty(),
                  "Full debug captures continuously without an early stop");
            for (const auto &[name, expected] : debug.debug_environment) {
                const char *existing = std::getenv(name.c_str());
                const std::string previous = existing ? existing : "";
                _putenv_s(name.c_str(), "");
                motorstorm::apply_native_config(debug);
                const char *actual = std::getenv(name.c_str());
                const bool matches = actual && std::string(actual) == expected;
                _putenv_s(name.c_str(), previous.c_str());
                check(matches, "Full-debug diagnostic controls reach their runtime environment options");
            }
            { std::ofstream file(path); file << "[debug]\ntrace_state=true\ntrace_state=false\nstack_scan=false\n"; }
            check(motorstorm::load_native_config(path).debug_environment.empty(),
                  "Disabled presence-based diagnostics are left unset");
        }
        std::puts("MotorStorm INI defaults, validation, overrides and aspect ratio tests passed");
        return 0;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "[FAIL] %s\n", error.what());
        return 1;
    }
}
