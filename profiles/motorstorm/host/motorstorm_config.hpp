#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <utility>
#include <vector>

namespace motorstorm {

struct NativeConfig {
    std::filesystem::path source;
    bool loaded{};
    std::string eboot, disc_root, log_file;
    std::uint64_t max_dispatches{4'000'000'000ull};
    std::string renderer{"d3d12"}, antialiasing{"fxaa"};
    std::uint32_t resolution{4}, window_scale{2};  // resolution: 1-5 or 8
    std::uint32_t fps{60};  // 0 = the game's original 30 fps pacing
    bool window{true}, fullscreen{}, audio{true};
    bool dynamic_fps{true};  // fall back to 30 fps instead of running in slow motion
    bool skip_intro{};  // finish Boot.stf and load the frontend's Press Start screen
    bool vsync{true};
    std::string texture_filtering{"psp"};  // psp (exact) or enhanced (anisotropic + mips)
    std::string widescreen{"auto"};  // auto = Hor+ gameplay, psp = original aspect
    // Race props: distance-faded instead of popping, and how far they are drawn
    // (normal = the game's distances; see motorstorm_draw_distance.hpp).
    bool less_pop_in{true};
    std::string render_distance{"normal"};
    // Android only: ZeroFG frame generation in races (off, zero or reallyzero)
    // and the width of the picture it works on (1280, 1600 or 1920).
    std::string frame_generation{"off"};
    // Race frames whose draws are skipped when the guest falls behind real time
    // (auto) so game logic and audio keep their speed; off draws every frame.
    std::string frame_skip{"off"};
    std::uint32_t frame_generation_width{1280};
    std::string fullscreen_mode{"borderless"}, audio_api{"wasapi"};
    std::uint32_t fullscreen_refresh{};  // exclusive fullscreen refresh in Hz, 0 = desktop
    // Texture packs; directories are absolute (relative INI values resolve
    // against the INI's folder). Empty means "<INI folder>/textures/...".
    bool texture_dump{}, texture_replace{true};
    std::filesystem::path texture_dump_dir, texture_replace_dir;
    std::uint32_t texture_budget_mb{1024};
    // [enhancements]: race-only image effects (see motorstorm_post.hpp). Kept
    // as the INI text; reals are validated here and parsed by the renderer.
    bool post{}, post_color_correction{true}, post_sharpen{true}, post_hud_ungraded{true}, post_soft_particles{};
    std::uint32_t post_color_depth{32};
    std::string post_exposure{"0.0"}, post_contrast{"1.0"}, post_saturation{"1.0"},
        post_temperature{"0.0"}, post_tint{"0.0"}, post_sharpen_strength{"0.2"}, post_soft_particle_softness{"600"};
    // [controller]: SDL3 / XInput gamepads and synthesized rumble.
    bool controller{true}, rumble{true}, trigger_rumble{true};
    std::string controller_api{"auto"}, controller_stick{"left"};
    std::uint32_t rumble_strength{100}, controller_deadzone{24}, trigger_threshold{12};  // percent
    // [keyboard]: physical-key bindings. Both binding strings hold only the
    // controls the INI sets ("cross=space,x;l=s"); the rest keep their defaults.
    bool keyboard{true};
    std::uint32_t keyboard_ramp_ms{90};
    std::string controller_bindings, keyboard_bindings;
    bool trace_imports{}, trace_filesystem{}, verbose{};
    std::vector<std::pair<std::string, std::string>> debug_environment;
    // Unknown or misplaced keys; they are reported in the log, never fatal.
    std::vector<std::string> warnings;
};

// Missing files use the same defaults as the shipped INI. Invalid known
// options report their source line rather than silently selecting a fallback.
[[nodiscard]] NativeConfig load_native_config(const std::filesystem::path &path);

// Apply INI defaults only to unset environment options. Explicit launcher /
// diagnostic environment settings continue to take precedence.
void apply_native_config(const NativeConfig &config);

} // namespace motorstorm
