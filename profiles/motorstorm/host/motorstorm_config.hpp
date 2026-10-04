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
    std::uint32_t resolution{4}, window_scale{2};
    std::uint32_t fps{60};  // 0 = the game's original 30 fps pacing
    bool window{true}, fullscreen{}, audio{true};
    bool dynamic_fps{true};  // fall back to 30 fps instead of running in slow motion
    bool vsync{true};
    std::string texture_filtering{"psp"};  // psp (exact) or enhanced (anisotropic + mips)
    std::string widescreen{"auto"};  // auto = Hor+ gameplay, psp = original aspect
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
