#include "motorstorm_config.hpp"
#include "motorstorm_frame_rate.hpp"

#include <algorithm>
#include <charconv>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <map>
#include <set>
#include <stdexcept>
#include <string_view>

namespace motorstorm {
namespace {
std::string trim(std::string_view text) {
    const auto begin = text.find_first_not_of(" \t\r\n");
    if (begin == std::string_view::npos) return {};
    return std::string(text.substr(begin, text.find_last_not_of(" \t\r\n") - begin + 1u));
}
std::string lower(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(),
                   [](unsigned char value) { return static_cast<char>(std::tolower(value)); });
    return text;
}
void set_default(const std::string &name, const std::string &value) {
    const char *existing = std::getenv(name.c_str());
    if (existing != nullptr && *existing != '\0') return;
#if defined(_WIN32)
    const int result = _putenv_s(name.c_str(), value.c_str());
#else
    const int result = setenv(name.c_str(), value.c_str(), 0);
#endif
    if (result != 0) throw std::runtime_error("Cannot apply MotorStorm option " + name);
}
} // namespace

NativeConfig load_native_config(const std::filesystem::path &path) {
    NativeConfig config;
    config.source = path;
    std::ifstream input(path);
    if (!input) return config;
    config.loaded = true;
    std::string line, section;
    std::size_t line_number = 0u;
    while (std::getline(input, line)) {
        ++line_number;
        // Accept UTF-8 INIs saved by editors that prepend a BOM.
        if (line_number == 1u && line.starts_with("\xEF\xBB\xBF")) line.erase(0u, 3u);
        const auto text = trim(line);
        if (text.empty() || text[0] == ';' || text[0] == '#') continue;
        if (text[0] == '[' && text.back() == ']') {
            section = lower(trim(std::string_view(text).substr(1u, text.size() - 2u)));
            continue;
        }
        const auto equals = text.find('=');
        if (equals == std::string::npos) continue;
        const auto key = lower(trim(std::string_view(text).substr(0u, equals)));
        auto value = trim(std::string_view(text).substr(equals + 1u));
        if (value.size() >= 2u && value.front() == '"' && value.back() == '"')
            value = value.substr(1u, value.size() - 2u);
        else if (const auto comment = value.find(';'); comment != std::string::npos)
            value = trim(std::string_view(value).substr(0u, comment));
        const auto choice = lower(value);
        const auto invalid = [&](const char *expectation) {
            throw std::runtime_error(path.string() + ":" + std::to_string(line_number) +
                                     ": " + key + " " + expectation);
        };
        const auto boolean = [&]() {
            if (choice == "true" || choice == "1" || choice == "yes" || choice == "on") return true;
            if (choice == "false" || choice == "0" || choice == "no" || choice == "off") return false;
            invalid("must be true or false");
            return false;
        };
        const auto number = [&](std::uint64_t minimum, std::uint64_t maximum) {
            std::uint64_t result{};
            const auto parsed = std::from_chars(value.data(), value.data() + value.size(), result);
            if (parsed.ec != std::errc{} || parsed.ptr != value.data() + value.size() ||
                result < minimum || result > maximum) invalid("has an invalid numeric value");
            return result;
        };
        if (section == "paths" || section.empty()) {
            if (key == "eboot") config.eboot = value;
            else if (key == "disc_root") config.disc_root = value;
        }
        if (section == "logging" || section.empty()) {
            if (key == "log_file") config.log_file = value;
            else if (key == "trace_imports") config.trace_imports = boolean();
            else if (key == "trace_filesystem") config.trace_filesystem = boolean();
            else if (key == "verbose") config.verbose = boolean();
        }
        if (section == "runtime" && key == "max_dispatches")
            config.max_dispatches = number(1u, UINT64_MAX);
        if (section == "graphics") {
            if (key == "resolution") config.resolution = static_cast<std::uint32_t>(number(1u, 4u));
            else if (key == "fps") {
                if (choice == "original") config.fps = 0u;
                else if (const auto fps = number(0u, kMaxUnlockedFps); fps != 0u && fps < kMinUnlockedFps)
                    invalid("must be original or 30 to 240");
                else config.fps = static_cast<std::uint32_t>(fps);
            } else if (key == "dynamic_fps") config.dynamic_fps = boolean();
            else if (key == "renderer") {
                if (choice != "d3d12" && choice != "software" && choice != "auto")
                    invalid("must be d3d12, software or auto");
                config.renderer = choice;
            } else if (key == "antialiasing") {
                if (choice != "none" && choice != "fxaa" && choice != "ssaa2x" && choice != "ssaa4x")
                    invalid("must be None, FXAA, SSAA2x or SSAA4x");
                config.antialiasing = choice;
            } else if (key == "vsync") config.vsync = boolean();
            else if (key == "widescreen") {
                if (choice != "auto" && choice != "psp") invalid("must be auto or psp");
                config.widescreen = choice;
            }
            else if (key == "texture_filtering") {
                if (choice != "psp" && choice != "enhanced") invalid("must be psp or enhanced");
                config.texture_filtering = choice;
            }
        }
        if (section == "window") {
            if (key == "enabled") config.window = boolean();
            else if (key == "fullscreen") config.fullscreen = boolean();
            else if (key == "scale") config.window_scale = static_cast<std::uint32_t>(number(1u, 8u));
            else if (key == "fullscreen_mode") {
                if (choice != "borderless" && choice != "exclusive") invalid("must be borderless or exclusive");
                config.fullscreen_mode = choice;
            } else if (key == "fullscreen_refresh")
                config.fullscreen_refresh = static_cast<std::uint32_t>(number(0u, 500u));
        }
        if (section == "audio" && key == "enabled") config.audio = boolean();
        if (section == "audio" && key == "api") {
            if (choice != "wasapi" && choice != "waveout") invalid("must be wasapi or waveout");
            config.audio_api = choice;
        }
        if (section == "textures") {
            const auto resolve = [&] { return (path.parent_path() / value).lexically_normal(); };
            if (key == "dump") config.texture_dump = boolean();
            else if (key == "replace") config.texture_replace = boolean();
            else if (key == "dump_dir") config.texture_dump_dir = resolve();
            else if (key == "replace_dir") config.texture_replace_dir = resolve();
            else if (key == "budget_mb") config.texture_budget_mb = static_cast<std::uint32_t>(number(64u, 65536u));
        }
        if (section == "enhancements") {
            const auto real = [&](double minimum, double maximum) {
                double result{};
                const auto parsed = std::from_chars(value.data(), value.data() + value.size(), result);
                if (parsed.ec != std::errc{} || parsed.ptr != value.data() + value.size() || result < minimum ||
                    result > maximum)
                    invalid("is not a number in its documented range");
                return value;
            };
            if (key == "enabled") config.post = boolean();
            else if (key == "color_depth") {
                if (choice != "16" && choice != "32") invalid("must be 16 or 32");
                config.post_color_depth = choice == "16" ? 16u : 32u;
            }
            else if (key == "color_correction") config.post_color_correction = boolean();
            else if (key == "exposure") config.post_exposure = real(-3.0, 3.0);
            else if (key == "contrast") config.post_contrast = real(0.5, 2.0);
            else if (key == "saturation") config.post_saturation = real(0.0, 2.0);
            else if (key == "temperature") config.post_temperature = real(-1.0, 1.0);
            else if (key == "tint") config.post_tint = real(-1.0, 1.0);
            else if (key == "sharpening") config.post_sharpen = boolean();
            else if (key == "sharpening_strength") config.post_sharpen_strength = real(0.0, 1.0);
            else if (key == "hud_ungraded") config.post_hud_ungraded = boolean();
            else if (key == "soft_particles") config.post_soft_particles = boolean();
            else if (key == "soft_particle_softness") config.post_soft_particle_softness = real(10.0, 20000.0);
        }
        static const std::map<std::string, std::set<std::string>> known{
            {"", {"eboot", "disc_root", "log_file", "trace_imports", "trace_filesystem", "verbose"}},
            {"paths", {"eboot", "disc_root"}},
            {"logging", {"log_file", "trace_imports", "trace_filesystem", "verbose"}},
            {"runtime", {"max_dispatches"}},
            {"graphics", {"resolution", "renderer", "antialiasing", "fps", "dynamic_fps", "vsync",
                          "texture_filtering", "widescreen"}},
            {"window", {"enabled", "fullscreen", "scale", "fullscreen_mode", "fullscreen_refresh"}},
            {"audio", {"enabled", "api"}},
            {"textures", {"dump", "replace", "dump_dir", "replace_dir", "budget_mb"}},
            {"enhancements", {"enabled", "color_depth", "color_correction", "exposure", "contrast", "saturation",
                              "temperature", "tint", "sharpening", "sharpening_strength", "hud_ungraded",
                              "soft_particles", "soft_particle_softness"}},
            {"debug", {"profile", "trace_controller", "trace_music", "trace_atrac", "trace_display",
                       "d3d12_debug", "pc_sample", "frame_dump", "stop_after_ge", "frame_dump_every",
                       "frame_dump_count", "frame_dump_dir", "memory_dump", "audio_capture",
                       "trace_state", "trace_switch", "trace_flags", "trace_callback_owner", "trace_preempt", "stack_scan", "frame_dump_both", "frame_dump_rolling"}},
        };
        const auto found = known.find(section);
        if (found == known.end() || !found->second.contains(key)) {
            const auto where = path.filename().string() + ":" + std::to_string(line_number) + ": ";
            // Fullscreen is often looked for under [graphics]; honor it anywhere.
            if (key == "fullscreen") {
                config.fullscreen = boolean();
                config.warnings.push_back(where + "fullscreen belongs in [window]; applied anyway");
            } else {
                config.warnings.push_back(where + "unknown option '" + key + "' in [" + section + "] ignored");
            }
        }
        if (section == "debug") {
            const std::pair<const char *, const char *> switches[]{
                {"profile", "PSPRECOMP_MOTORSTORM_PROFILE"},
                {"trace_controller", "PSPRECOMP_MOTORSTORM_TRACE_CTRL"},
                {"trace_music", "PSPRECOMP_MOTORSTORM_TRACE_MUSIC"},
                {"trace_atrac", "PSPRECOMP_MOTORSTORM_TRACE_ATRAC"},
                {"trace_display", "PSPRECOMP_MOTORSTORM_TRACE_DISPLAY"},
                {"d3d12_debug", "PSPRECOMP_MOTORSTORM_D3D12_DEBUG"},
                {"pc_sample", "PSPRECOMP_MOTORSTORM_PC_SAMPLE"},
                {"frame_dump", "PSPRECOMP_MOTORSTORM_FRAME_DUMP"},
                {"frame_dump_both", "PSPRECOMP_MOTORSTORM_FRAME_DUMP_BOTH"},
                {"frame_dump_rolling", "PSPRECOMP_MOTORSTORM_FRAME_DUMP_ROLLING"},
                {"trace_state", "PSPRECOMP_MOTORSTORM_TRACE_STATE"},
                {"trace_switch", "PSPRECOMP_MOTORSTORM_TRACE_SWITCH"},
                {"trace_flags", "PSPRECOMP_MOTORSTORM_TRACE_FLAGS"},
                {"trace_callback_owner", "PSPRECOMP_MOTORSTORM_TRACE_CALLBACK_OWNER"},
                {"trace_preempt", "PSPRECOMP_MOTORSTORM_TRACE_PREEMPT"},
                {"stack_scan", "PSPRECOMP_MOTORSTORM_STACK_SCAN"},
            };
            for (const auto &[option, environment] : switches) {
                if (key != option) continue;
                // These existing diagnostics are enabled by presence, so false
                // must leave the environment option unset rather than set "0".
                std::erase_if(config.debug_environment,
                              [&](const auto &entry) { return entry.first == environment; });
                if (boolean()) config.debug_environment.emplace_back(environment, "1");
            }
            const std::pair<const char *, const char *> numbers[]{
                {"stop_after_ge", "PSPRECOMP_MOTORSTORM_STOP_AFTER_GE"},
                {"frame_dump_every", "PSPRECOMP_MOTORSTORM_FRAME_DUMP_EVERY"},
                {"frame_dump_count", "PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT"},
            };
            for (const auto &[option, environment] : numbers)
                if (key == option) config.debug_environment.emplace_back(environment, std::to_string(number(1u, UINT64_MAX)));
            const std::pair<const char *, const char *> paths[]{
                {"frame_dump_dir", "PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR"},
                {"memory_dump", "PSPRECOMP_MOTORSTORM_MEMORY_DUMP"},
                {"audio_capture", "PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE"},
            };
            for (const auto &[option, environment] : paths)
                if (key == option)
                    config.debug_environment.emplace_back(environment,
                        (path.parent_path() / value).lexically_normal().string());
        }
    }
    return config;
}

void apply_native_config(const NativeConfig &config) {
    set_default("PSPRECOMP_MOTORSTORM_RENDERER", config.renderer);
    set_default("PSPRECOMP_MOTORSTORM_RESOLUTION", std::to_string(config.resolution));
    set_default("PSPRECOMP_MOTORSTORM_AA", config.antialiasing);
    set_default("PSPRECOMP_MOTORSTORM_FPS", config.fps == 0u ? "original" : std::to_string(config.fps));
    set_default("PSPRECOMP_MOTORSTORM_DYNAMIC_FPS", config.dynamic_fps ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_VSYNC", config.vsync ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_TEXTURE_FILTER", config.texture_filtering);
    set_default("PSPRECOMP_MOTORSTORM_WIDESCREEN", config.widescreen);
    set_default("PSPRECOMP_MOTORSTORM_FULLSCREEN_MODE", config.fullscreen_mode);
    set_default("PSPRECOMP_MOTORSTORM_FULLSCREEN_REFRESH", std::to_string(config.fullscreen_refresh));
    set_default("PSPRECOMP_MOTORSTORM_AUDIO_API", config.audio_api);
    const auto folder = config.source.parent_path();
    const auto dump_dir = config.texture_dump_dir.empty() ? folder / "textures" / "dump" : config.texture_dump_dir;
    const auto replace_dir =
        config.texture_replace_dir.empty() ? folder / "textures" / "replace" : config.texture_replace_dir;
    set_default("PSPRECOMP_MOTORSTORM_TEXTURE_DUMP", config.texture_dump ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_TEXTURE_REPLACE", config.texture_replace ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_TEXTURE_DUMP_DIR", dump_dir.lexically_normal().string());
    set_default("PSPRECOMP_MOTORSTORM_TEXTURE_REPLACE_DIR", replace_dir.lexically_normal().string());
    set_default("PSPRECOMP_MOTORSTORM_TEXTURE_BUDGET_MB", std::to_string(config.texture_budget_mb));
    set_default("PSPRECOMP_MOTORSTORM_POST", config.post ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_POST_COLOR_DEPTH", std::to_string(config.post_color_depth));
    set_default("PSPRECOMP_MOTORSTORM_POST_COLOR_CORRECTION", config.post_color_correction ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_POST_EXPOSURE", config.post_exposure);
    set_default("PSPRECOMP_MOTORSTORM_POST_CONTRAST", config.post_contrast);
    set_default("PSPRECOMP_MOTORSTORM_POST_SATURATION", config.post_saturation);
    set_default("PSPRECOMP_MOTORSTORM_POST_TEMPERATURE", config.post_temperature);
    set_default("PSPRECOMP_MOTORSTORM_POST_TINT", config.post_tint);
    set_default("PSPRECOMP_MOTORSTORM_POST_SHARPEN", config.post_sharpen ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_POST_SHARPEN_STRENGTH", config.post_sharpen_strength);
    set_default("PSPRECOMP_MOTORSTORM_POST_HUD_UNGRADED", config.post_hud_ungraded ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLES", config.post_soft_particles ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_POST_SOFT_PARTICLE_SOFTNESS", config.post_soft_particle_softness);
    set_default("PSPRECOMP_MOTORSTORM_WINDOW", config.window ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_FULLSCREEN", config.fullscreen ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_WINDOW_SCALE", std::to_string(config.window_scale));
    set_default("PSPRECOMP_MOTORSTORM_AUDIO", config.audio ? "1" : "0");
    set_default("PSPRECOMP_MOTORSTORM_SOFTGE", "1");
    for (const auto &[name, value] : config.debug_environment) set_default(name, value);
}
} // namespace motorstorm
