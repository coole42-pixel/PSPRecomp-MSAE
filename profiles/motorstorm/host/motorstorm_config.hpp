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
    std::string renderer{"d3d12"}, antialiasing{"ssaa4x"};
    std::uint32_t resolution{4}, window_scale{2};
    std::uint32_t fps{60};  // 0 = the game's original 30 fps pacing
    bool window{true}, fullscreen{}, audio{true};
    bool dynamic_fps{true};  // fall back to 30 fps instead of running in slow motion
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
