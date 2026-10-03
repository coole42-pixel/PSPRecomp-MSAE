#pragma once

// MotorStorm profile bootstrap: path discovery, log plumbing and the guest
// entry sequence.  Everything here is generic PSP host infrastructure; no
// game-specific addresses or behavior beyond the profile's own entry point.

#include <cstdint>
#include <filesystem>
#include <string>
#include <string_view>

namespace motorstorm {

// Loud diagnostics categories required by the profile specification.  They are
// plain strings so callers can use them directly in string_view contexts.
namespace category {
inline constexpr std::string_view kBoot = "BOOT";
inline constexpr std::string_view kDispatch = "DISPATCH";
inline constexpr std::string_view kHle = "HLE";
inline constexpr std::string_view kImport = "IMPORT";
inline constexpr std::string_view kFilesystem = "FILESYSTEM";
inline constexpr std::string_view kFile = "FILE";
inline constexpr std::string_view kModule = "MODULE";
inline constexpr std::string_view kGe = "GE";
inline constexpr std::string_view kMemory = "MEMORY";
inline constexpr std::string_view kError = "ERROR";
inline constexpr std::string_view kUmd = "UMD";
inline constexpr std::string_view kCallback = "CALLBACK";
inline constexpr std::string_view kThread = "THREAD";
} // namespace category

// One diagnostic line.  Format: [CATEGORY] message.  Written to stdout and,
// when a log file is configured, appended there as well.  Never throws.
void log_line(std::string_view category, std::string_view message);
void log_linef(std::string_view category, const char *format, ...);

// Opens <executable_directory>/<file_name> for the run log.  Returns false
// (and keeps console-only logging) when the file cannot be created.
bool open_log_file(const std::filesystem::path &path);

// Stops logging to a file and closes it.
void close_log_file();

struct BootstrapPaths {
    std::filesystem::path psp_executable;
    std::filesystem::path disc_root;   // mounted as disc0:/
    std::filesystem::path log_file;
    std::uint64_t max_dispatches{4'000'000'000ull};
    bool verbose{};
    bool paths_from_command_line{};
};

// Explicit command-line arguments win.  With no arguments the profile looks
// next to the executable and inside the source tree layout:
//   <exe_dir>/PSP_DATA/EBOOT_DECRYPTED.BIN  (deployment)
//   <exe_dir>/game/EBOOT_DECRYPTED.BIN      (running from the build tree)
//   <repo>/profiles/motorstorm/game/...     (running from bin/<config>)
// PSPRECOMP_MOTORSTORM_EBOOT / PSPRECOMP_MOTORSTORM_DISC override both.
[[nodiscard]] BootstrapPaths resolve_bootstrap_paths(
    int argc, const char *const *argv,
    const std::filesystem::path &executable_directory);

// Full guest bootstrap.  Throws psprecomp::Error for unrecoverable host-side
// setup failures; returns the runtime stop/failure code for the caller.
int run(const BootstrapPaths &paths);

} // namespace motorstorm
