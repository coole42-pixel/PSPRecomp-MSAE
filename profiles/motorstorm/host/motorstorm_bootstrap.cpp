#include "motorstorm_bootstrap.hpp"
#include "motorstorm_hle.hpp"
#include "motorstorm_media.hpp"
#include "motorstorm_perf.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/sha256.hpp"

#include <algorithm>
#include <array>
#include <bit>
#include <cctype>
#include <chrono>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <mutex>
#include <optional>
#include <span>
#include <sstream>
#include <system_error>
#include <unordered_map>
#include <vector>

namespace {
// Optional dispatch-PC sampler (PSPRECOMP_MOTORSTORM_PC_SAMPLE=1): counts every
// 64th chained-call target so a spin loop shows up in the end-of-run census as
// a list of hot guest addresses.
std::unordered_map<std::uint32_t, std::uint64_t> g_pc_samples;
} // namespace

namespace motorstorm {
namespace {

std::mutex g_log_mutex;
std::FILE *g_log_file = nullptr;

std::string trim(std::string_view text) {
    std::size_t begin = 0;
    while (begin < text.size() && (text[begin] == ' ' || text[begin] == '\t' || text[begin] == '\r'))
        ++begin;
    std::size_t end = text.size();
    while (end > begin && (text[end - 1] == ' ' || text[end - 1] == '\t' || text[end - 1] == '\r'))
        --end;
    return std::string(text.substr(begin, end - begin));
}

std::string lower(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return text;
}

std::uint64_t parse_u64(const std::string &text, std::uint64_t fallback) {
    if (text.empty()) return fallback;
    char *end = nullptr;
    const unsigned long long value = std::strtoull(text.c_str(), &end, 0);
    if (end == text.c_str() || *end != '\0') return fallback;
    return static_cast<std::uint64_t>(value);
}

bool parse_bool(const std::string &text, bool fallback) {
    const std::string value = lower(trim(text));
    if (value == "1" || value == "true" || value == "yes" || value == "on") return true;
    if (value == "0" || value == "false" || value == "no" || value == "off") return false;
    return fallback;
}

struct IniSettings {
    std::string eboot;
    std::string disc_root;
    std::string log_file;
    std::uint64_t max_dispatches{};
    bool trace_imports{true};
    bool trace_filesystem{true};
    bool verbose{};
    bool loaded{};
};

IniSettings load_ini(const std::filesystem::path &path) {
    IniSettings settings;
    std::ifstream in(path);
    if (!in) return settings;
    settings.loaded = true;
    std::string line;
    while (std::getline(in, line)) {
        const std::string stripped = trim(line);
        if (stripped.empty() || stripped[0] == ';' || stripped[0] == '#' || stripped[0] == '[')
            continue;
        const std::size_t equals = stripped.find('=');
        if (equals == std::string::npos) continue;
        const std::string key = lower(trim(stripped.substr(0, equals)));
        const std::string value = trim(stripped.substr(equals + 1));
        if (key == "eboot") settings.eboot = value;
        else if (key == "disc_root") settings.disc_root = value;
        else if (key == "log_file") settings.log_file = value;
        else if (key == "max_dispatches") settings.max_dispatches = parse_u64(value, 0u);
        else if (key == "trace_imports") settings.trace_imports = parse_bool(value, true);
        else if (key == "trace_filesystem") settings.trace_filesystem = parse_bool(value, true);
        else if (key == "verbose") settings.verbose = parse_bool(value, false);
    }
    return settings;
}

const char *environment(const char *name) {
    const char *value = std::getenv(name);
    return value != nullptr && *value != '\0' ? value : nullptr;
}

[[nodiscard]] std::optional<std::filesystem::path> first_existing(
    const std::vector<std::filesystem::path> &candidates) {
    std::error_code ec;
    for (const auto &candidate : candidates) {
        if (std::filesystem::is_regular_file(candidate, ec)) return candidate;
    }
    return std::nullopt;
}

} // namespace

void log_line(std::string_view category, std::string_view message) {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    std::cout << '[' << category << "] " << message << '\n';
    if (g_log_file != nullptr) {
        std::fprintf(g_log_file, "[%s] %.*s\n", std::string(category).c_str(),
                     static_cast<int>(message.size()), message.data());
        std::fflush(g_log_file);
    }
}

void log_linef(std::string_view category, const char *format, ...) {
    std::array<char, 2048> buffer{};
    va_list arguments;
    va_start(arguments, format);
    std::vsnprintf(buffer.data(), buffer.size(), format, arguments);
    va_end(arguments);
    log_line(category, buffer.data());
}

bool open_log_file(const std::filesystem::path &path) {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    if (g_log_file != nullptr) {
        std::fclose(g_log_file);
        g_log_file = nullptr;
    }
#if defined(_MSC_VER)
    FILE *file = nullptr;
    if (_wfopen_s(&file, path.c_str(), L"wb") != 0) file = nullptr;
    g_log_file = file;
#else
    g_log_file = std::fopen(path.string().c_str(), "wb");
#endif
    return g_log_file != nullptr;
}

void close_log_file() {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    if (g_log_file != nullptr) {
        std::fclose(g_log_file);
        g_log_file = nullptr;
    }
}

BootstrapPaths resolve_bootstrap_paths(int argc, const char *const *argv,
                                       const std::filesystem::path &executable_directory) {
    BootstrapPaths paths;
    const IniSettings ini = load_ini(executable_directory / "MotorStormNative.ini");

    std::vector<std::string> positional;
    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index] != nullptr ? argv[index] : "";
        if (argument == "--verbose" || argument == "-v") paths.verbose = true;
        else if (!argument.empty() && argument[0] != '-') positional.push_back(argument);
    }

    // --- Executable --------------------------------------------------------
    std::vector<std::filesystem::path> executable_candidates;
    if (const char *override_path = environment("PSPRECOMP_MOTORSTORM_EBOOT"))
        executable_candidates.emplace_back(override_path);
    if (!positional.empty()) executable_candidates.emplace_back(positional[0]);
    if (!ini.eboot.empty()) executable_candidates.emplace_back(executable_directory / ini.eboot);
    executable_candidates.push_back(executable_directory / "PSP_DATA" / "EBOOT_DECRYPTED.BIN");
    executable_candidates.push_back(executable_directory / "EBOOT_DECRYPTED.BIN");
    executable_candidates.push_back(executable_directory / "game" / "EBOOT_DECRYPTED.BIN");
    executable_candidates.emplace_back(
        executable_directory / ".." / ".." / ".." / ".." / "profiles" / "motorstorm" / "game" / "EBOOT_DECRYPTED.BIN");
    executable_candidates.emplace_back(
        executable_directory / ".." / ".." / ".." / "profiles" / "motorstorm" / "game" / "EBOOT_DECRYPTED.BIN");
    executable_candidates.emplace_back("profiles/motorstorm/game/EBOOT_DECRYPTED.BIN");

    if (const auto found = first_existing(executable_candidates)) {
        paths.psp_executable = *found;
        paths.paths_from_command_line = !positional.empty();
    } else {
        // Keep the first candidate so the error message points at the expected
        // deployment location.
        paths.psp_executable = executable_candidates.front();
    }

    // --- disc0 root --------------------------------------------------------
    std::vector<std::filesystem::path> disc_candidates;
    if (const char *override_path = environment("PSPRECOMP_MOTORSTORM_DISC"))
        disc_candidates.emplace_back(override_path);
    if (positional.size() >= 2u) disc_candidates.emplace_back(positional[1]);
    if (!ini.disc_root.empty()) disc_candidates.emplace_back(executable_directory / ini.disc_root);
    if (!paths.psp_executable.empty())
        disc_candidates.push_back(paths.psp_executable.parent_path() / "disc0");
    disc_candidates.push_back(executable_directory / "PSP_DATA" / "disc0");
    disc_candidates.emplace_back(
        executable_directory / ".." / ".." / ".." / ".." / "profiles" / "motorstorm" / "game" / "disc0");
    disc_candidates.emplace_back("profiles/motorstorm/game/disc0");
    for (const auto &candidate : disc_candidates) {
        std::error_code ec;
        if (std::filesystem::is_directory(candidate, ec)) {
            paths.disc_root = candidate;
            break;
        }
    }
    if (paths.disc_root.empty()) {
        paths.disc_root = paths.psp_executable.parent_path() / "disc0";
    }

    // --- Log file ----------------------------------------------------------
    if (const char *override_path = environment("PSPRECOMP_MOTORSTORM_LOG"))
        paths.log_file = override_path;
    else if (!ini.log_file.empty())
        paths.log_file = executable_directory / ini.log_file;
    else
        paths.log_file = executable_directory / "MotorStormNative.log";

    // --- Dispatch cap ------------------------------------------------------
    paths.max_dispatches = 4'000'000'000ull;
    if (ini.max_dispatches != 0u) paths.max_dispatches = ini.max_dispatches;
    if (const char *text = environment("PSPRECOMP_MAX_DISPATCHES"))
        paths.max_dispatches = parse_u64(text, paths.max_dispatches);

    paths.verbose = paths.verbose || ini.verbose;
    return paths;
}

int run(const BootstrapPaths &paths) {
    log_line(category::kBoot, "MotorStorm profile bootstrap");
    log_line(category::kBoot, "executable=\"" + paths.psp_executable.string() + "\"");
    log_line(category::kBoot, "disc0 root=\"" + paths.disc_root.string() + "\"");
    log_line(category::kBoot, "log file=\"" + paths.log_file.string() + "\"");

    std::error_code ec;
    if (!std::filesystem::is_regular_file(paths.psp_executable, ec)) {
        throw psprecomp::Error(
            "MotorStorm executable not found: " + paths.psp_executable.string() +
            "\nPlace a decrypted EBOOT_DECRYPTED.BIN in profiles/motorstorm/game/ or pass its path "
            "as the first command-line argument (PSPRECOMP_MOTORSTORM_EBOOT also overrides).");
    }

    psprecomp::Elf32Image elf = psprecomp::Elf32Image::from_file(paths.psp_executable);
    log_line(category::kModule, "ELF type=" + psprecomp::hex32(elf.type()) +
                                    (elf.is_psp_prx() ? " (PSP PRX)" : " (plain ELF)") +
                                    " entry=" + psprecomp::hex32(elf.runtime_entry()));
    log_line(category::kMemory, "loaded SHA-256=" + psprecomp::sha256_file(paths.psp_executable));

    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    runtime.set_game_root(paths.disc_root);
    {
        std::error_code disc_ec;
        if (!std::filesystem::is_directory(paths.disc_root, disc_ec)) {
            log_line(category::kFilesystem,
                     "disc0:/ root is missing (\"" + paths.disc_root.string() +
                         "\"). File I/O will fail with real PSP errors until a disc tree is provided.");
        } else {
            log_line(category::kFilesystem, "disc0:/ mounted at \"" + paths.disc_root.string() + "\"");
        }
    }

    const auto relocations =
        elf.load_and_relocate(runtime.memory(), psprecomp::kDefaultPspUserLoadBase);
    log_line(category::kMemory,
             "relocations total=" + std::to_string(relocations.total) +
                 " invalid=" + std::to_string(relocations.invalid) +
                 " unsupported=" + std::to_string(relocations.unsupported));

    std::uint64_t image_end = 0u;
    for (std::size_t index = 0; index < elf.segments().size(); ++index) {
        const auto &segment = elf.segments()[index];
        if (segment.type != 1u) continue;
        const std::uint64_t start =
            elf.segment_runtime_address(index, psprecomp::kDefaultPspUserLoadBase);
        log_line(category::kMemory, "PT_LOAD segment=" + std::to_string(index) +
                                        " runtime=" + psprecomp::hex32(static_cast<std::uint32_t>(start)) +
                                        " filesz=0x" + [&] {
                                            char buffer[32]{};
                                            std::snprintf(buffer, sizeof(buffer), "%X", segment.file_size);
                                            return std::string(buffer);
                                        }() +
                                        " memsz=0x" + [&] {
                                            char buffer[32]{};
                                            std::snprintf(buffer, sizeof(buffer), "%X", segment.memory_size);
                                            return std::string(buffer);
                                        }());
        image_end = std::max(image_end, start + segment.memory_size);
    }
    if (image_end == 0u || image_end > 0x0A000000ull)
        throw psprecomp::Error("Invalid PSP ELF load image extent");
    const std::uint32_t user_arena_start =
        static_cast<std::uint32_t>((image_end + 0xFFu) & ~0xFFull);
    log_line(category::kMemory, "image end=" + psprecomp::hex32(static_cast<std::uint32_t>(image_end)) +
                                    " user arena start=" + psprecomp::hex32(user_arena_start));

    psprecomp::register_generated_functions(runtime);
    log_line(category::kModule, "linked recompiled functions=" + std::to_string(runtime.function_count()));

    const auto module = elf.find_module_info(runtime.memory(), psprecomp::kDefaultPspUserLoadBase);
    if (!module) throw psprecomp::Error("PSP module info not found after relocation");
    log_line(category::kModule, "module name=\"" + module->name + "\" address=" +
                                    psprecomp::hex32(module->address) +
                                    " gp=" + psprecomp::hex32(module->gp) +
                                    " stub=" + psprecomp::hex32(module->stub_top) + "-" +
                                    psprecomp::hex32(module->stub_end));
    runtime.cpu().set_gpr(28, module->gp);

    HleOptions hle_options;
    hle_options.disc_root = paths.disc_root;
    hle_options.trace_imports = true;
    hle_options.trace_filesystem = true;
    if (paths.verbose) hle_options.import_trace_limit = 0;
    install_hle(runtime, user_arena_start, hle_options);

    if (runtime.function_count() == 0u) {
        log_line(category::kError,
                 "no generated MotorStorm functions are linked; build generated_registry.cpp");
        return 3;
    }

    // PSP module_start context: top-of-RAM stack, gp from module info, no
    // arguments and $ra = 0 (address 0 is the thread-return trampoline).
    constexpr std::uint32_t kUserStackTop = 0x0A000000u;
    constexpr std::uint32_t kKernelContext = kUserStackTop - 0x100u;
    // PSP launch arguments.  The kernel boots an EBOOT through the equivalent
    // of sceKernelLoadExec(path), passing the executable path itself as the
    // module argument block: module_start receives (size, argp) with argp
    // pointing at the NUL-terminated path string.  PSPSDK-style crt0 forwards
    // exactly these values to the user_main thread, where they become argc=1
    // and argv[0].  Launching with (0, 0) leaves argv[0] NULL and games that
    // inherit the boot path (MotorStorm does) dereference it.
    const std::string launch_path = "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN";
    const std::uint32_t launch_size = static_cast<std::uint32_t>(launch_path.size() + 1u);
    // Kernel-style placement: just below the module thread stack pointer.
    const std::uint32_t launch_argp = 0x09FFFC00u;
    if (!runtime.memory().contains(launch_argp, launch_size))
        throw psprecomp::Error("Launch argument block does not fit in PSP user RAM");
    runtime.memory().copy_in(launch_argp,
        std::span<const std::uint8_t>(
            reinterpret_cast<const std::uint8_t *>(launch_path.c_str()), launch_size));
    log_line(category::kBoot, "launch args argc=1 argv[0]=\"" + launch_path + "\" at " +
                                  psprecomp::hex32(launch_argp));

    runtime.cpu().set_gpr(26, kKernelContext);
    runtime.cpu().set_gpr(28, module->gp);
    runtime.cpu().set_gpr(29, kKernelContext);
    runtime.cpu().set_gpr(30, kKernelContext);
    runtime.cpu().set_gpr(31, 0u);
    runtime.cpu().set_gpr(4, launch_size);
    runtime.cpu().set_gpr(5, launch_argp);
    runtime.cpu().set_gpr(6, 0u);
    runtime.cpu().set_gpr(7, 0u);

    const std::uint32_t entry = elf.runtime_entry(psprecomp::kDefaultPspUserLoadBase);
    log_line(category::kBoot, "entering guest at " + psprecomp::hex32(entry) +
                                  " max_dispatches=" + std::to_string(paths.max_dispatches));
    if (!runtime.has_function(entry)) {
        log_line(category::kError, "[DISPATCH MISS] entry " + psprecomp::hex32(entry) +
                                       " is not covered by any generated unit");
    }

    bool guest_fault = false;
    std::string guest_fault_reason;
    {
        // Optional targeted chained-call trace.  PSPRECOMP_MOTORSTORM_TRACE_CALLS
        // holds a comma-separated list of guest PCs; every chained call whose
        // target is one of them is logged with the caller's RA and arguments.
        static std::vector<std::uint32_t> trace_targets;
        if (const char *text = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_CALLS")) {
            const std::string list(text);
            std::size_t begin = 0u;
            while (begin < list.size()) {
                const std::size_t comma = list.find(',', begin);
                const std::string item = list.substr(
                    begin, comma == std::string::npos ? std::string::npos : comma - begin);
                char *end = nullptr;
                const unsigned long value = std::strtoul(item.c_str(), &end, 0);
                if (end != item.c_str() && *end == '\0')
                    trace_targets.push_back(static_cast<std::uint32_t>(value));
                if (comma == std::string::npos) break;
                begin = comma + 1u;
            }
        }
        if (!trace_targets.empty()) {
            log_line(category::kBoot, "call trace armed for " +
                                          std::to_string(trace_targets.size()) + " target(s)");
            psprecomp::set_runtime_pre_chained_call_hook(                [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                   std::uint32_t target_pc, std::uint32_t native_depth) {
                    static std::uint64_t logged = 0u;
                    if (logged >= 4000u) return;
                    for (const std::uint32_t candidate : trace_targets) {
                        if (candidate != target_pc) continue;
                        ++logged;
                        std::ostringstream out;
                        out << "[CALL] target=" << psprecomp::hex32(target_pc)
                            << " ra=" << psprecomp::hex32(ctx.gpr[31])
                            << " depth=" << native_depth
                            << " sp=" << psprecomp::hex32(ctx.gpr[29])
                            << " a0=" << psprecomp::hex32(ctx.gpr[4])
                            << " a1=" << psprecomp::hex32(ctx.gpr[5])
                            << " a2=" << psprecomp::hex32(ctx.gpr[6])
                            << " a3=" << psprecomp::hex32(ctx.gpr[7]);
                        if (target_pc == 0x088C5C84u || target_pc == 0x088C5E74u) {
                            for (std::uint32_t i = 0; i < 5; ++i) {
                                const auto table = rt.memory().load32(0x08AAA908u + i * 4);
                                out << " strings[" << i << "]=" << psprecomp::hex32(table);
                                if (table && rt.memory().contains(table, 28))
                                    out << '/' << rt.memory().load32(table + 4);
                            }
                        }
                        if (target_pc == 0x0881764Cu) {
                            const auto read = [&](std::uint32_t address) {
                                return rt.memory().contains(address, 4u)
                                    ? rt.memory().load32(address) : 0u;
                            };
                            const auto race = read(0x08A9E2ACu);
                            const auto player = race ? read(race + 4444u) : 0u;
                            const auto vehicle = player ? read(player + 8u) : 0u;
                            const auto motion = vehicle ? read(vehicle + 32u) : 0u;
                            const auto recovery = vehicle ? read(vehicle + 48u) : 0u;
                            out << " camera=" << psprecomp::hex32(read(0x08A9E554u))
                                << " vehicle=" << psprecomp::hex32(vehicle)
                                << " flags=" << psprecomp::hex32(vehicle ? read(vehicle + 44u) : 0u)
                                << " vehicle_state=" << psprecomp::hex32(vehicle ? read(vehicle + 704u) : 0u)
                                << " recovery_state=" << (recovery ? read(recovery + 424u) : 0u)
                                << " stationary_frames=" << (recovery ? read(recovery + 228u) : 0u);
                            for (std::uint32_t i = 0; i < std::min(read(0x08A76B10u), 8u); ++i) {
                                const auto hud = read(0x08AAA220u + 4u * i);
                                if (hud && rt.memory().contains(hud + 31u, 2u))
                                    out << " hud[" << i << "]=" << psprecomp::hex32(hud)
                                        << '/' << static_cast<unsigned>(rt.memory().load8(hud + 31u))
                                        << '/' << static_cast<unsigned>(rt.memory().load8(hud + 32u));
                            }
                            if (motion && rt.memory().contains(motion + 48u, 12u)) {
                                out << " position=" << std::bit_cast<float>(read(motion + 48u))
                                    << ',' << std::bit_cast<float>(read(motion + 52u))
                                    << ',' << std::bit_cast<float>(read(motion + 56u));
                            }
                        }
                        log_line(category::kBoot, out.str());
                        break;
                    }
                });
        }
        if (std::getenv("PSPRECOMP_MOTORSTORM_PC_SAMPLE") != nullptr) {
            psprecomp::set_runtime_pre_chained_call_hook(
                [](psprecomp::Runtime &, psprecomp::AllegrexContext &, std::uint32_t target_pc,
                   std::uint32_t) {
                    static std::uint64_t counter = 0u;
                    if ((++counter & 63u) == 0u) ++g_pc_samples[target_pc];
                });
        }
    }
    double run_seconds = 0.0;
    {
        const auto run_start = std::chrono::steady_clock::now();
        try {
            runtime.run(entry, paths.max_dispatches);
        } catch (const std::exception &error) {
            // A guest memory fault or runtime invariant break must never end
            // the run silently: report it as the blocker, print the partial
            // census, and return a distinct exit code.
            guest_fault = true;
            guest_fault_reason = error.what();
            log_line(category::kError, std::string("runtime fault: ") + guest_fault_reason);
        }
        run_seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - run_start).count();
    }
    perf::report(run_seconds);
    if (const char *dump_path = std::getenv("PSPRECOMP_MOTORSTORM_MEMORY_DUMP")) {
        std::vector<std::uint8_t> bytes(runtime.memory().size());
        runtime.memory().copy_out(psprecomp::GuestMemory::kPhysicalBase,bytes);
        std::ofstream dump(dump_path,std::ios::binary);
        dump.write(reinterpret_cast<const char *>(bytes.data()),bytes.size());
        log_line(category::kMemory,"diagnostic RAM snapshot=" + std::string(dump_path));
    }

    // Diagnostic: after a guest fault *or* any stop (when
    // PSPRECOMP_MOTORSTORM_STACK_SCAN is set), walk a window of the guest stack
    // and report every word that looks like a return address into the loaded
    // image.  The generated code keeps $pc stale across same-unit transfers, so
    // the saved return addresses on the stack are the only way to recover the
    // caller chain from the outside.
    if ((guest_fault || std::getenv("PSPRECOMP_MOTORSTORM_STACK_SCAN") != nullptr) &&
        std::getenv("PSPRECOMP_MOTORSTORM_STACK_SCAN") != nullptr) {
        const auto &cpu = runtime.cpu();
        const std::uint32_t sp = cpu.gpr[29];
        log_line(category::kError, "stack scan around sp=" + psprecomp::hex32(sp));
        for (std::int32_t offset = -0x100; offset <= 0x400; offset += 4) {
            const std::uint32_t address =
                static_cast<std::uint32_t>(static_cast<std::int32_t>(sp) + offset);
            if (!runtime.memory().contains(address, 4u)) continue;
            const std::uint32_t value = runtime.memory().load32(address);
            if (value < 0x08804000u || value >= 0x08AC0000u || (value & 3u) != 0u) continue;
            const bool registered = runtime.has_function(value);
            std::ostringstream out;
            out << "[stack] " << psprecomp::hex32(address) << " = " << psprecomp::hex32(value)
                << (registered ? " (registered)" : " (code-range)");
            log_line(category::kError, out.str());
        }
    }

    log_line(category::kBoot,
             "runtime stopped: " + (guest_fault ? std::string("[FAULT] ") + guest_fault_reason
                                                : (runtime.stop_reason().empty()
                                                       ? std::string("(no reason)")
                                                       : runtime.stop_reason())));
    if (!g_pc_samples.empty()) {
        std::vector<std::pair<std::uint32_t, std::uint64_t>> sorted(g_pc_samples.begin(),
                                                                    g_pc_samples.end());
        std::sort(sorted.begin(), sorted.end(),
                  [](const auto &left, const auto &right) { return left.second > right.second; });
        const std::size_t count = std::min<std::size_t>(sorted.size(), 32u);
        for (std::size_t index = 0u; index < count; ++index) {
            std::ostringstream out;
            out << "[pc-sample] target=" << psprecomp::hex32(sorted[index].first)
                << " hits=" << sorted[index].second;
            log_line(category::kBoot, out.str());
        }
    }
    report_mpeg_summary(runtime);
    report_summary();
    psprecomp::report_counted_pcs();
    runtime.report_hle_histogram();
    close_log_file();

    if (guest_fault) return 5;
    if (runtime.stop_reason().empty()) return 0;
    if (runtime.stop_reason() == "Native window closed") return 0;
    if (runtime.stop_reason().rfind("All PSP threads completed", 0u) == 0u) return 0;
    return 4;
}

} // namespace motorstorm
