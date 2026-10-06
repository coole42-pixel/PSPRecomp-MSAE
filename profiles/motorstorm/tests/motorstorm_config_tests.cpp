#include "motorstorm_arena.hpp"
#include "motorstorm_config.hpp"
#include "motorstorm_draw_distance.hpp"
#include "motorstorm_frame_rate.hpp"
#include "motorstorm_mobile.hpp"
#include "motorstorm_pacing.hpp"
#include "motorstorm_presentation.hpp"

#include <algorithm>
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
        using motorstorm::PixelFeatures;
        using motorstorm::PixelPath;
        using motorstorm::ScaleMode;
        using motorstorm::ScaleSettings;
        const PixelFeatures ordered{false, true};
        const PixelFeatures neither{};
        const PixelFeatures interlock{true, false};
        check(motorstorm::select_pixel_path(ordered) == PixelPath::OrderedAttachment,
              "ordered colour attachments without interlock select the ordered path");
        check(motorstorm::select_pixel_path(neither) == PixelPath::Unsupported,
              "a pixel path without ordered attachment access is rejected");
        check(motorstorm::select_pixel_path(interlock) == PixelPath::Interlock,
              "fragment shader interlock stays on the desktop interlock path");
        check(!motorstorm::point_expansion_requires_geometry_shader(PixelPath::Unsupported) &&
                  !motorstorm::point_expansion_requires_geometry_shader(PixelPath::FixedFunctionProgrammable) &&
                  !motorstorm::point_expansion_requires_geometry_shader(PixelPath::OrderedAttachment) &&
                  !motorstorm::point_expansion_requires_geometry_shader(PixelPath::Interlock),
              "point expansion does not require a geometry shader");

        {
            using motorstorm::CompactColorFormat;
            using motorstorm::GeDrawFacts;
            using motorstorm::classify_ge_draw;
            std::array<std::uint32_t, 256> commands{};
            GeDrawFacts facts;
            const auto shader = std::filesystem::path(__FILE__).parent_path().parent_path() / "host" / "motorstorm_gpu.hlsl";
            std::ifstream source(shader);
            check(source.good(), "the shipped pixel shader is next to the classifier");
            const std::string hlsl((std::istreambuf_iterator<char>(source)), std::istreambuf_iterator<char>());
            const auto entry_body = [&](const char *signature) {
                const auto at = hlsl.find(signature);
                check(at != std::string::npos, "the hardware fragment entry is in the shipped shader");
                const auto end = hlsl.find("\nfloat4 ", at + std::strlen(signature));
                check(end != std::string::npos, "the hardware fragment entry has a body");
                return hlsl.substr(at, end - at);
            };
            const auto fast = entry_body("float4 PSFast(");
            const auto fast_alpha = entry_body("float4 PSFastAlpha(");
            check(fast.find("pixelUpdate") == std::string::npos && fast.find("SubpassLoad") == std::string::npos,
                  "PSFast does not call pixelUpdate");
            check(fast_alpha.find("pixelUpdate") == std::string::npos && fast_alpha.find("SubpassLoad") == std::string::npos &&
                      fast_alpha.find("discard") != std::string::npos,
                  "PSFastAlpha discards for the alpha test and does not call pixelUpdate");
            check(hlsl.find("if(live) pixelUpdate") != std::string::npos,
                  "the ordered pixel shader still calls pixelUpdate");

            commands[0x23] = 1u;
            commands[0xDE] = 4u; // PSP LESS
            const auto opaque = classify_ge_draw(commands.data(), facts);
            std::printf("ff opaque: hardware=%d entry=%s format=%s pixelUpdate=%d depth=%d/%d compare=%u blend=%d\n",
                        opaque.hardware ? 1 : 0, opaque.fragment_entry, motorstorm::compact_color_format_name(opaque.color_format),
                        opaque.runs_pixel_update ? 1 : 0, opaque.state.depth_test ? 1 : 0, opaque.state.depth_write ? 1 : 0,
                        opaque.state.depth_compare, opaque.state.blend ? 1 : 0);
            check(opaque.hardware && opaque.state.depth_test && opaque.state.depth_write && !opaque.state.blend &&
                      opaque.state.depth_compare == 1u && opaque.color_format == CompactColorFormat::Rgba8Unorm &&
                      std::string(opaque.fragment_entry) == "PSFast" && !opaque.runs_pixel_update,
                  "opaque depth-tested draws select hardware depth, R8G8B8A8, and PSFast");

            commands[0x21] = 1u;
            commands[0xDF] = 2u | (3u << 4); // source alpha, one-minus-source-alpha, add
            const auto blended = classify_ge_draw(commands.data(), facts);
            std::printf("ff src-alpha: hardware=%d entry=%s src=%u dst=%u op=%u alpha=%u/%u\n", blended.hardware ? 1 : 0,
                        blended.fragment_entry, blended.state.src_factor, blended.state.dst_factor, blended.state.blend_op,
                        blended.state.src_alpha_factor, blended.state.dst_alpha_factor);
            check(blended.hardware && blended.state.blend && blended.state.src_factor == 6u &&
                      blended.state.dst_factor == 7u && blended.state.blend_op == 0u &&
                      blended.color_format == CompactColorFormat::Rgba8Unorm,
                  "common 8888 source-alpha blending uses the attachment path");

            commands[0x21] = 0u;
            commands[0x22] = 1u;
            commands[0xDB] = 6u | (0x80u << 8) | (0xFFu << 16); // greater than 128
            const auto alpha = classify_ge_draw(commands.data(), facts);
            std::printf("ff alpha-test: hardware=%d entry=%s format=%s pixelUpdate=%d\n", alpha.hardware ? 1 : 0,
                        alpha.fragment_entry, motorstorm::compact_color_format_name(alpha.color_format),
                        alpha.runs_pixel_update ? 1 : 0);
            check(alpha.hardware && alpha.state.alpha_discard && std::string(alpha.fragment_entry) == "PSFastAlpha" &&
                      alpha.color_format != CompactColorFormat::PackedR32Uint && !alpha.runs_pixel_update,
                  "alpha test selects the discard fragment entry without pixelUpdate");

            commands = {};
            commands[0x21] = 1u;
            commands[0xDF] = 6u | (3u << 4); // doubled source alpha: not a Vulkan factor
            const auto doubled = classify_ge_draw(commands.data(), facts);
            std::printf("ff dest-read: hardware=%d entry=%s format=%s pixelUpdate=%d\n", doubled.hardware ? 1 : 0,
                        doubled.fragment_entry, motorstorm::compact_color_format_name(doubled.color_format),
                        doubled.runs_pixel_update ? 1 : 0);
            check(!doubled.hardware && std::string(doubled.fragment_entry) == "PS" && doubled.runs_pixel_update &&
                      doubled.color_format == CompactColorFormat::PackedR32Uint,
                  "a destination-read blend stays on the ordered attachment path");

            commands[0xDF] = 2u | (3u << 4) | (5u << 8); // absolute difference
            const auto absolute = classify_ge_draw(commands.data(), facts);
            check(!absolute.hardware && absolute.runs_pixel_update, "an absolute-difference blend stays ordered");

            commands[0xDF] = 2u | (10u << 4); // source alpha, FIX: additive with white
            commands[0xE1] = 0xFFFFFFu;
            const auto additive = classify_ge_draw(commands.data(), facts);
            check(additive.hardware && additive.state.blend && additive.state.src_factor == 6u &&
                      additive.state.dst_factor == 1u && additive.state.blend_op == 0u &&
                      !additive.state.use_blend_constant,
                  "an additive blend with a white FIX color uses ONE on the attachment path");
            facts.wide_blends = false;
            check(!classify_ge_draw(commands.data(), facts).hardware,
                  "without wide blends only source-alpha/one-minus-source-alpha is hardware");
            facts.wide_blends = true;

            commands[0xDF] = 10u | (10u << 4) | (2u << 8); // FIX, FIX, reverse subtract
            commands[0xE0] = 0x404040u;
            commands[0xE1] = 0x404040u;
            const auto shared = classify_ge_draw(commands.data(), facts);
            check(shared.hardware && shared.state.use_blend_constant && shared.state.src_factor == 10u &&
                      shared.state.dst_factor == 10u && shared.state.blend_op == 2u && shared.state.constant_r == 0x40u,
                  "equal FIX colors share the blend constant");
            commands[0xE1] = 0xBFBFBFu;
            const auto complement = classify_ge_draw(commands.data(), facts);
            check(complement.hardware && complement.state.dst_factor == 11u,
                  "a complementary destination FIX color is ONE_MINUS_CONSTANT_COLOR");
            commands[0xE1] = 0x102030u;
            check(!classify_ge_draw(commands.data(), facts).hardware,
                  "two unrelated FIX colors stay on the ordered attachment path");

            commands[0xDF] = 0u | (1u << 4) | (4u << 8); // destination color, one-minus-source color, max
            const auto colors = classify_ge_draw(commands.data(), facts);
            check(colors.hardware && colors.state.src_factor == 4u && colors.state.dst_factor == 3u &&
                      colors.state.blend_op == 4u,
                  "color factors and MAX map to Vulkan blend state");
            facts.format = 0u;
            check(!classify_ge_draw(commands.data(), facts).hardware, "blends on 16-bit targets stay ordered");
            facts.format = 3u;

            commands = {};
            commands[0x23] = 1u;
            commands[0x27] = 1u;
            const auto color_test = classify_ge_draw(commands.data(), facts);
            std::printf("ff color-test: hardware=%d entry=%s format=%s\n", color_test.hardware ? 1 : 0, color_test.fragment_entry,
                        motorstorm::compact_color_format_name(color_test.color_format));
            check(color_test.hardware && color_test.state.alpha_discard && color_test.exact_pixel &&
                      std::string(color_test.fragment_entry) == "PSFastAlpha" && !color_test.runs_pixel_update,
                  "the color test runs in the exact discard entry on the attachment path");
            facts.hardware_color_test = false;
            check(!classify_ge_draw(commands.data(), facts).hardware,
                  "without the hardware color test it stays on the ordered attachment path");
            facts.hardware_color_test = true;

            commands[0x27] = 0u;
            commands[0x24] = 1u;
            check(!classify_ge_draw(commands.data(), facts).hardware, "stencil stays on the ordered attachment path");
            commands[0x24] = 0u;
            commands[0xE8] = 0x0Fu;
            check(!classify_ge_draw(commands.data(), facts).hardware, "a partial bit mask stays on the ordered attachment path");
            commands[0xE8] = 0u;
            commands[0xE6] = 6u; // logic op, ignored by pixelUpdate
            const auto logic = classify_ge_draw(commands.data(), facts);
            check(logic.hardware && !logic.runs_pixel_update, "an ignored logic op does not leave the hardware path");
            facts.feedback = true;
            check(!classify_ge_draw(commands.data(), facts).hardware, "framebuffer feedback stays ordered");
            facts.feedback = false;
            facts.raster_half = 4u;
            check(!classify_ge_draw(commands.data(), facts).hardware, "scales above native 1x stay ordered");
        }

        ScaleSettings dynamic;
        dynamic.mode = ScaleMode::Dynamic;
        dynamic.min_scale = 0.5f;
        dynamic.max_scale = 1.0f;
        dynamic.target_fps = 30;
        check(motorstorm::frame_budget_ms(30) == 33.3 && motorstorm::frame_budget_ms(60) == 16.7,
              "scale budgets are 33.3 ms at 30 fps and 16.7 ms at 60 fps");
        const auto held = motorstorm::step_render_scale(0.80f, 33.3, dynamic, 0);
        check(!held.changed && held.scale == 0.80f, "hysteresis holds the scale on budget noise");
        const auto down = motorstorm::step_render_scale(0.80f, 40.0, dynamic, 0);
        check(down.changed && down.scale < 0.80f && down.scale >= dynamic.min_scale,
              "GPU time over the 30 fps budget steps the scale down");
        dynamic.target_fps = 60;
        const auto down60 = motorstorm::step_render_scale(1.0f, 20.0, dynamic, 0);
        check(down60.changed && down60.scale < 1.0f, "GPU time over the 60 fps budget steps the scale down");
        dynamic.target_fps = 30;
        const auto clamped = motorstorm::step_render_scale(0.50f, 80.0, dynamic, 0);
        check(clamped.scale == dynamic.min_scale, "scale clamps to the minimum");
        const auto capped = motorstorm::step_render_scale(2.0f, 1.0, dynamic, 0);
        check(capped.scale == dynamic.max_scale, "scale clamps to the maximum");
        const auto hot = motorstorm::step_render_scale(1.0f, 1.0, dynamic, 4);
        check(hot.scale <= 0.50f, "a raised thermal status lowers the scale ceiling");
        ScaleSettings fixed = dynamic;
        fixed.mode = ScaleMode::Fixed;
        fixed.fixed_scale = 0.75f;
        const auto fixed_step = motorstorm::step_render_scale(1.0f, 1.0, fixed, 0);
        check(fixed_step.scale == 0.75f, "fixed scale ignores GPU time");
        ScaleSettings off;
        off.mode = ScaleMode::Off;
        const auto off_step = motorstorm::step_render_scale(0.5f, 100.0, off, 0);
        check(off_step.scale == 1.0f, "Off renders at full scale");
        check(motorstorm::select_upscaler(off) != motorstorm::select_upscaler(dynamic) &&
                  motorstorm::select_upscaler(dynamic) == motorstorm::Upscaler::Sgsr1Spatial &&
                  motorstorm::upscaler_name(motorstorm::select_upscaler(dynamic)) == "sgsr1-spatial-single-pass",
              "Off, fixed, and dynamic are distinct and the upscaler is SGSR 1 spatial single-pass");
        check(off.sharpness != 0.0f && dynamic.sharpness == 2.0f, "SGSR sharpness is its own setting");
        check(motorstorm::hud_composited_after_upscale(), "the HUD composite is ordered after SGSR");
        check(motorstorm::present_frame_rate_hz(0) == 30 && motorstorm::present_frame_rate_hz(30) == 30 &&
                  motorstorm::present_frame_rate_hz(60) == 60 && motorstorm::present_frame_rate_hz(120) == 60,
              "the present target is 30 or 60 and never 120");

        check(motorstorm::default_driver_request() == motorstorm::DriverRequest::System,
              "System is the default driver");
        const auto failed_load =
            motorstorm::resolve_driver(motorstorm::DriverRequest::Imported, false, false);
        const auto failed_device =
            motorstorm::resolve_driver(motorstorm::DriverRequest::Imported, true, false);
        const auto loaded = motorstorm::resolve_driver(motorstorm::DriverRequest::Imported, true, true);
        check(failed_load.active == motorstorm::DriverRequest::System && failed_load.show_fallback_message &&
                  !failed_load.message.empty(),
              "a failed library load selects System and a visible message");
        check(failed_device.active == motorstorm::DriverRequest::System && failed_device.show_fallback_message &&
                  failed_device.message != failed_load.message,
              "a failed VkDevice creation selects System and a visible message");
        check(loaded.active == motorstorm::DriverRequest::Imported && !loaded.show_fallback_message,
              "a successful imported driver stays selected");

        const auto wrong = motorstorm::accept_decrypted_eboot("0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef", false);
        const auto encrypted = motorstorm::accept_decrypted_eboot(motorstorm::kAcceptedEbootSha256, true);
        const auto accepted = motorstorm::accept_decrypted_eboot(motorstorm::kAcceptedEbootSha256, false);
        check(wrong == motorstorm::ExecutableReject::WrongHash && encrypted == motorstorm::ExecutableReject::Encrypted &&
                  accepted == motorstorm::ExecutableReject::Ok,
              "only the one decrypted executable hash is accepted");
        check(motorstorm::eboot_image_is_encrypted("~PSP") && !motorstorm::eboot_image_is_encrypted("\x7f" "ELF"),
              "an encrypted image is recognized without a decrypt step");
        check(motorstorm::effects_default_off_on_windows_and_android(motorstorm::NativeConfig{}.post),
              "effects that default off on Windows default off on Android");

        check(motorstorm::display_output_scale(2560, 1600) == 5u && motorstorm::display_output_scale(1600, 2560) == 5u &&
                  motorstorm::display_output_scale(2400, 1080) == 4u && motorstorm::display_output_scale(2560, 1600, 4) == 4u &&
                  motorstorm::display_output_scale(0, 0) == 1u,
              "full resolution matches the fitted landscape display");
        {
            motorstorm::DynamicResolution drs;
            ScaleSettings settings = dynamic;
            settings.target_fps = 30;
            std::uint32_t half = 10u;
            for (int i = 0; i < motorstorm::DynamicResolution::kWindowFrames; ++i)
                half = drs.update(10u, half, false, 80.0, settings, 0);
            check(half == 10u, "menus stay at full resolution whatever the GPU time");
            for (int i = 0; i < motorstorm::DynamicResolution::kWindowFrames - 1; ++i)
                half = drs.update(10u, half, true, 80.0, settings, 0);
            check(half == 10u, "gameplay waits for a full timing window before changing resolution");
            half = drs.update(10u, half, true, 80.0, settings, 0);
            check(half == 9u, "slow gameplay drops one raster step per window");
            for (int w = 0; w < 20; ++w)
                for (int i = 0; i < motorstorm::DynamicResolution::kWindowFrames; ++i)
                    half = drs.update(10u, half, true, 80.0, settings, 0);
            check(half == 5u, "gameplay resolution stops at the minimum scale");
            for (int i = 0; i < motorstorm::DynamicResolution::kWindowFrames; ++i)
                half = drs.update(10u, half, true, 5.0, settings, 0);
            check(half == 5u, "a recent drop holds before stepping back up");
            for (int w = 0; w < 10; ++w)
                for (int i = 0; i < motorstorm::DynamicResolution::kWindowFrames; ++i)
                    half = drs.update(10u, half, true, 5.0, settings, 0);
            check(half > 5u, "fast gameplay climbs back toward full resolution");
            half = drs.update(10u, 5u, false, 80.0, settings, 0);
            check(half == 10u, "leaving gameplay returns to full resolution at once");
        }

        const auto steer = motorstorm::touch_sample(0.16f, 0.74f);
        const auto pedal = motorstorm::touch_sample(0.80f, 0.10f);
        check(steer.axis_x >= 0 && pedal.buttons == 0x0200u, "the nub steers and R accelerates");

        const auto shipped = motorstorm::load_native_config(MOTORSTORM_CONFIG_TEMPLATE);
        check(shipped.loaded && shipped.resolution == 4u && shipped.antialiasing == "fxaa" &&
              shipped.renderer == "d3d12" && shipped.window && shipped.audio && shipped.fps == 60u && shipped.widescreen == "auto",
              "Shipped INI must enable native 4x / FXAA / 60 fps with window and audio");
        check(shipped.less_pop_in && shipped.render_distance == "normal",
              "Shipped INI enables less pop-in at the game's own render distance");
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
                                   "[graphics]\nwidescreen=stretch\n", "[graphics]\nresolution=5\n",
                                   "[graphics]\nresolution=16\n", "[graphics]\nrender_distance=far\n",
                                   "[graphics]\nrender_distance=9\n", "[graphics]\nless_pop_in=maybe\n"}) {
            { std::ofstream file(path); file << invalid; }
            bool rejected = false;
            try { (void)motorstorm::load_native_config(path); }
            catch (const std::exception &error) { rejected = std::string(error.what()).find(path.string() + ":2:") != std::string::npos; }
            check(rejected, "Invalid INI values report the option's file and line");
        }
        {
            { std::ofstream file(path); file << "[graphics]\nresolution=8\nless_pop_in=false\nrender_distance=Ultra\n"; }
            const auto eight = motorstorm::load_native_config(path);
            check(eight.resolution == 8u && !eight.less_pop_in && eight.render_distance == "ultra" && eight.warnings.empty(),
                  "8x resolution, less pop-in and render distance load from [graphics]");
            { std::ofstream file(path); file << "[graphics]\nrender_distance=2.5x\n"; }
            check(motorstorm::load_native_config(path).render_distance == "2.5x", "A render distance multiplier is accepted");
        }
        {
            namespace dd = motorstorm::draw_distance;
            check(dd::parse_render_distance("normal") == 1.0f && dd::parse_render_distance("MAX") == 4.0f &&
                  dd::parse_render_distance("3") == 3.0f && dd::parse_render_distance("0.5x") == 0.5f &&
                  !dd::parse_render_distance("0.4") && !dd::parse_render_distance("far"),
                  "Render distance presets and multipliers parse");
            // Parity selects the game's path: odd fades, even switches at once.
            check(dd::scaled_threshold(129, 1.0f, false) == 129 && dd::scaled_threshold(96, 1.0f, false) == 96 &&
                  dd::scaled_threshold(129, 2.0f, false) == 259 && dd::scaled_threshold(96, 1.5f, false) == 144,
                  "Scaled thresholds keep the game's fade/switch choice");
            check(dd::scaled_threshold(96, 1.0f, true) == 97 && dd::scaled_threshold(0, 4.0f, true) == 0 &&
                  dd::scaled_threshold(30000, 8.0f, true) == 32765, "Less pop-in fades every limit; 0 stays unlimited");
            const auto far = dd::fading_far(129);
            check(far > 129 + 20 && (far & 1) == 1, "The fade band extends beyond the original cutoff");
            // Port of 0x08922220's alpha update: an even limit switches at once;
            // otherwise snap within 1e-4, else step 1/16 toward the target.
            const auto game_step = [](float alpha, float target, bool odd) {
                if (!odd) return target;
                if (std::fabs(alpha - target) <= 0.0001f) return target;
                if (alpha >= target) return std::max(alpha - 0.0625f, target);
                return std::min(alpha + 0.0625f, target);
            };
            const motorstorm::draw_distance::Thresholds t{0, far, 64};
            const float band = static_cast<float>(far - 129);
            for (float distance = 0.0f; distance < 220.0f; distance += 0.37f) {
                const float alpha = dd::fade_alpha(distance, t, band);
                const float target = dd::game_target(distance, t);
                const float shown = game_step(dd::seed_alpha(alpha, target), target, (t.far & 1) != 0);
                check(std::fabs(shown - alpha) < 1e-5f, "The seeded alpha survives the game's step exactly");
                if (distance <= 129.0f) check(alpha == 1.0f, "Props stay opaque up to their original cutoff");
                if (distance >= far - 1.0f) check(alpha == 0.0f, "Props are fully faded at the extended cutoff");
            }
            // A near cutoff (LOD counterpart) fades in over the band past it.
            const motorstorm::draw_distance::Thresholds near{101, 0, 400};
            check(dd::fade_alpha(100.0f, near, 0.0f) == 0.0f && dd::fade_alpha(200.0f, near, 0.0f) == 1.0f &&
                  dd::fade_alpha(111.0f, near, 0.0f) > 0.0f && dd::fade_alpha(111.0f, near, 0.0f) < 1.0f,
                  "Near-switched props fade in past their cutoff");
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
            motorstorm::FramePacer clock;
            check(clock.deadline(100'000u, 1'000'000u) == 1'000'000u, "First frame anchors the host clock");
            check(clock.deadline(116'667u, 1'010'000u) == 1'016'667u,
                  "Early audio wake waits for the frame's guest deadline");
            check(clock.deadline(133'334u, 1'034'000u) == 1'033'334u,
                  "A late frame does not shift the next deadline");
            check(clock.deadline(150'001u, 1'040'000u) == 1'050'001u,
                  "Frames retain an even cadence after a short delay");
            check(clock.deadline(166'668u, 1'300'000u) == 1'300'000u,
                  "A loading stall reanchors instead of fast forwarding");
            check(clock.deadline(10u, 1'400'000u) == 1'400'000u, "A reset guest clock reanchors safely");
            clock.reset();
            check(clock.deadline(20u, 1'500'000u) == 1'500'000u, "Resuming the limiter uses a fresh anchor");
            motorstorm::AudioPacingReserve reserve;
            check(!reserve.ready(100u, 12'288u) && !reserve.ready(3'072u, 12'288u),
                  "Audio can prebuffer before frame pacing starts");
            check(reserve.ready(9'216u, 12'288u) && reserve.ready(4'000u, 12'288u),
                  "A healthy reserve keeps pacing across device wakes");
            check(!reserve.ready(1'000u, 12'288u) && !reserve.ready(4'000u, 12'288u) &&
                  reserve.ready(9'216u, 12'288u), "A drained reserve refills before pacing resumes");
            motorstorm::AudioPacingReserve small;
            check(small.ready(1'536u, 2'048u) && small.ready(512u, 2'048u) && !small.ready(511u, 2'048u),
                  "Prebuffer thresholds also fit a custom short audio queue");
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
