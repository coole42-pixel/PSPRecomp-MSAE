#include "motorstorm_bootstrap.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_hle.hpp"
#include "motorstorm_media.hpp"
#include "motorstorm_perf.hpp"
#include "motorstorm_textures.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/runtime.hpp"
#include "motorstorm_mobile.hpp"
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

#if defined(_WIN32)
#include <io.h>
#else
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <dlfcn.h>
#include <unwind.h>
#if defined(__ANDROID__)
#include <android/log.h>
#endif
#endif


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
std::filesystem::path g_current_log_path;
bool g_verbose_logging{};
struct TraceWindow { std::chrono::steady_clock::time_point start{}; unsigned emitted{}, suppressed{}; };
std::unordered_map<std::string, TraceWindow> g_trace_windows;

void flush_log_internal() {
    if (g_log_file != nullptr) {
        std::fflush(g_log_file);
#if defined(_WIN32)
        const int fd = _fileno(g_log_file);
        if (fd >= 0) _commit(fd);
#else
        const int fd = fileno(g_log_file);
        if (fd >= 0) fsync(fd);
#endif
    }
}

#if !defined(_WIN32)
struct BacktraceState {
    void **current;
    void **end;
};

static _Unwind_Reason_Code unwind_callback(struct _Unwind_Context *context, void *arg) {
    BacktraceState *state = static_cast<BacktraceState *>(arg);
    uintptr_t pc = _Unwind_GetIP(context);
    if (pc) {
        if (state->current == state->end) return _URC_END_OF_STACK;
        *state->current++ = reinterpret_cast<void *>(pc);
    }
    return _URC_NO_REASON;
}

static size_t capture_backtrace(void **buffer, size_t max) {
    BacktraceState state{buffer, buffer + max};
    _Unwind_Backtrace(unwind_callback, &state);
    return state.current - buffer;
}

static struct sigaction s_old_handlers[32];

static void crash_signal_handler(int sig, siginfo_t *info, void *) {
    const char *sig_name = "UNKNOWN";
    switch (sig) {
        case SIGSEGV: sig_name = "SIGSEGV (Segmentation fault)"; break;
        case SIGBUS:  sig_name = "SIGBUS (Bus error)"; break;
        case SIGABRT: sig_name = "SIGABRT (Abort)"; break;
        case SIGFPE:  sig_name = "SIGFPE (Floating point error)"; break;
        case SIGILL:  sig_name = "SIGILL (Illegal instruction)"; break;
        case SIGTRAP: sig_name = "SIGTRAP (Trap)"; break;
    }

    char crash_msg[3072];
    void *fault_addr = info ? info->si_addr : nullptr;
    int code = info ? info->si_code : 0;
    pid_t tid = gettid();

    int len = snprintf(crash_msg, sizeof(crash_msg),
        "\n=======================================================\n"
        "FATAL CRASH DETECTED!\n"
        "Signal: %s (%d), code=%d, fault_addr=%p, thread_id=%d\n"
        "Guest Virtual Time: %llu us\n"
        "Current Thread: uid=%d, name=\"%s\", dispatch_pc=0x%08X\n"
        "Callstack backtrace:\n",
        sig_name, sig, code, fault_addr, static_cast<int>(tid),
        static_cast<unsigned long long>(guest_time_us()),
        psprecomp::runtime_thread_uid(), psprecomp::runtime_thread_name(),
        psprecomp::runtime_dispatch_pc());

    void *stack[32];
    size_t count = capture_backtrace(stack, 32);
    for (size_t i = 0; i < count && len < (int)sizeof(crash_msg) - 160; ++i) {
        Dl_info dlinfo;
        if (dladdr(stack[i], &dlinfo) && dlinfo.dli_fname) {
            const char *slash = strrchr(dlinfo.dli_fname, '/');
            const char *lib = slash ? slash + 1 : dlinfo.dli_fname;
            uintptr_t offset = (uintptr_t)stack[i] - (uintptr_t)dlinfo.dli_fbase;
            len += snprintf(crash_msg + len, sizeof(crash_msg) - len,
                "  #%02zu pc 0x%08zx  %s (%s)\n", i, offset, lib,
                dlinfo.dli_sname ? dlinfo.dli_sname : "");
        } else {
            len += snprintf(crash_msg + len, sizeof(crash_msg) - len,
                "  #%02zu pc %p\n", i, stack[i]);
        }
    }
    if (len < (int)sizeof(crash_msg) - 64) {
        len += snprintf(crash_msg + len, sizeof(crash_msg) - len,
            "=======================================================\n\n");
    }

#if defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_FATAL, "MotorStorm", "%s", crash_msg);
#endif
    log_line("CRASH", crash_msg);
    flush_log_file();

    auto log_path = current_log_file_path();
    if (!log_path.empty()) {
        std::filesystem::path crash_path = log_path.parent_path() / "MotorStorm-crash.log";
        int fd = open(crash_path.string().c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0666);
        if (fd >= 0) {
            (void)write(fd, crash_msg, len);
            fsync(fd);
            close(fd);
        }
    }

    if (sig >= 0 && sig < 32 && s_old_handlers[sig].sa_handler != SIG_DFL && s_old_handlers[sig].sa_sigaction != nullptr) {
        sigaction(sig, &s_old_handlers[sig], nullptr);
    } else {
        signal(sig, SIG_DFL);
    }
    raise(sig);
}
#endif

std::uint64_t parse_u64(const std::string &text, std::uint64_t fallback) {
    if (text.empty()) return fallback;
    char *end = nullptr;
    const unsigned long long value = std::strtoull(text.c_str(), &end, 0);
    if (end == text.c_str() || *end != '\0') return fallback;
    return static_cast<std::uint64_t>(value);
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

void flush_log_file() {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    flush_log_internal();
}

std::filesystem::path current_log_file_path() {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    return g_current_log_path;
}

void install_crash_handlers() {
#if !defined(_WIN32)
    static char alt_stack[SIGSTKSZ];
    stack_t ss{};
    ss.ss_sp = alt_stack;
    ss.ss_size = sizeof(alt_stack);
    ss.ss_flags = 0;
    sigaltstack(&ss, nullptr);

    struct sigaction sa{};
    sa.sa_sigaction = crash_signal_handler;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
    sigemptyset(&sa.sa_mask);

    const int signals[] = {SIGSEGV, SIGBUS, SIGABRT, SIGFPE, SIGILL, SIGTRAP};
    for (int s : signals) {
        sigaction(s, &sa, &s_old_handlers[s]);
    }
#endif

    std::set_terminate([]() {
        char err[512] = "std::terminate() called";
        std::exception_ptr ex = std::current_exception();
        if (ex) {
            try {
                std::rethrow_exception(ex);
            } catch (const std::exception &e) {
                snprintf(err, sizeof(err), "std::terminate() called with exception: %s", e.what());
            } catch (...) {
                snprintf(err, sizeof(err), "std::terminate() called with unknown exception");
            }
        }
        log_line("CRASH", err);
        flush_log_file();
        std::abort();
    });
}

void log_line(std::string_view category, std::string_view message) {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    const bool routine = category == "IMPORT" ||
        (category == "THREAD" && message.starts_with("wake ") &&
         message.find("value=0x00000000") != std::string_view::npos) ||
        (category == "DISPATCH" && message.starts_with("switch reason=")) ||
        (category == "CALLBACK" && (message.starts_with("entering ") || message.starts_with("returned ") ||
                                    message.starts_with("check ")));
    if (routine) {
        if (!g_verbose_logging) return;
        auto &window = g_trace_windows[std::string(category)];
        const auto now = std::chrono::steady_clock::now();
        if (now - window.start >= std::chrono::seconds(2)) {
            if (window.suppressed) {
                std::cout << "[LOG] suppressed " << window.suppressed << " routine " << category << " traces\n";
                if (g_log_file)
                    std::fprintf(g_log_file, "[LOG] suppressed %u routine %.*s traces\n", window.suppressed,
                                 static_cast<int>(category.size()), category.data());
            }
            window = {now, 0u, 0u};
        }
        if (window.emitted++ >= 16u) { ++window.suppressed; return; }
    }
    std::cout << '[' << category << "] " << message << '\n';
    if (g_log_file != nullptr) {
        std::fprintf(g_log_file, "[%s] %.*s\n", std::string(category).c_str(),
                     static_cast<int>(message.size()), message.data());
        std::fflush(g_log_file);
        if (category == category::kError || category == "CRASH" || category == "LIFECYCLE") {
#if defined(_WIN32)
            const int fd = _fileno(g_log_file);
            if (fd >= 0) _commit(fd);
#else
            const int fd = fileno(g_log_file);
            if (fd >= 0) fsync(fd);
#endif
        }
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
        flush_log_internal();
        std::fclose(g_log_file);
        g_log_file = nullptr;
    }
    if (path.empty() || path == "none" || path == "off") {
        g_current_log_path.clear();
        return false;
    }
    std::error_code ec;
    if (std::filesystem::exists(path, ec) && std::filesystem::file_size(path, ec) > 0) {
        std::filesystem::path prev = path;
        prev.replace_filename(path.stem().string() + "-prev" + path.extension().string());
        std::filesystem::copy_file(path, prev, std::filesystem::copy_options::overwrite_existing, ec);
    }
    if (path.has_parent_path()) {
        std::filesystem::create_directories(path.parent_path(), ec);
    }
#if defined(_MSC_VER)
    FILE *file = nullptr;
    if (_wfopen_s(&file, path.c_str(), L"wb") != 0) file = nullptr;
    g_log_file = file;
#else
    g_log_file = std::fopen(path.string().c_str(), "wb");
#endif
    if (g_log_file != nullptr) {
        g_current_log_path = path;
        std::setvbuf(g_log_file, nullptr, _IOLBF, 1024);
    }
    return g_log_file != nullptr;
}

void close_log_file() {
    std::lock_guard<std::mutex> guard(g_log_mutex);
    if (g_log_file != nullptr) {
        flush_log_internal();
        std::fclose(g_log_file);
        g_log_file = nullptr;
    }
    g_current_log_path.clear();
}

BootstrapPaths resolve_bootstrap_paths(int argc, const char *const *argv,
                                       const std::filesystem::path &executable_directory) {
    BootstrapPaths paths;
    std::filesystem::path config_path = executable_directory / "MotorStormNative.ini";

    std::vector<std::string> positional;
    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index] != nullptr ? argv[index] : "";
        if (argument == "--config") {
            if (++index >= argc || argv[index] == nullptr)
                throw psprecomp::Error("--config requires an INI file path");
            config_path = argv[index];
        } else if (argument == "--verbose" || argument == "-v") paths.verbose = true;
        else if (!argument.empty() && argument[0] != '-') positional.push_back(argument);
    }
    paths.config = load_native_config(config_path);
    const auto &ini = paths.config;

    // --- Executable --------------------------------------------------------
    std::vector<std::filesystem::path> executable_candidates;
    if (const char *override_path = environment("PSPRECOMP_MOTORSTORM_EBOOT"))
        executable_candidates.emplace_back(override_path);
    if (!positional.empty()) executable_candidates.emplace_back(positional[0]);
    if (!ini.eboot.empty()) executable_candidates.emplace_back(ini.source.parent_path() / ini.eboot);
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
    if (!ini.disc_root.empty()) disc_candidates.emplace_back(ini.source.parent_path() / ini.disc_root);
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
    else if (!ini.log_file.empty()) {
        if (ini.log_file == "none" || ini.log_file == "off") {
            paths.log_file.clear();
        } else {
            std::filesystem::path configured(ini.log_file);
            if (configured.is_absolute()) {
                paths.log_file = configured;
            } else {
                paths.log_file = ini.source.parent_path() / configured;
            }
        }
    } else {
        paths.log_file.clear();
    }

    // --- Dispatch cap ------------------------------------------------------
    paths.max_dispatches = 4'000'000'000ull;
    if (ini.max_dispatches != 0u) paths.max_dispatches = ini.max_dispatches;
    if (const char *text = environment("PSPRECOMP_MAX_DISPATCHES"))
        paths.max_dispatches = parse_u64(text, paths.max_dispatches);

    paths.verbose = paths.verbose || ini.verbose;
    return paths;
}

int run(const BootstrapPaths &paths) {
    g_verbose_logging = paths.verbose || paths.config.trace_imports;
    g_trace_windows.clear();
    log_line("LOG", std::string("mode=") + (g_verbose_logging ? "verbose (routine traces capped at 16/category/2s)"
                                                              : "standard (routine traces suppressed)"));
    const bool fullscreen_overridden = [] {
        const char *value = std::getenv("PSPRECOMP_MOTORSTORM_FULLSCREEN");
        return value != nullptr && *value != char{};
    }();
    apply_native_config(paths.config);
    perf::configure();
    // The live game publishes GE readbacks lazily so GPU work overlaps the next
    // frame's guest CPU work. PSPRECOMP_MOTORSTORM_GPU_SYNC_READBACK=1 restores
    // the strict per-list wait for diagnosing a guest that reads VRAM directly.
    gpu_set_deferred_readback(std::getenv("PSPRECOMP_MOTORSTORM_GPU_SYNC_READBACK") == nullptr);
    textures::configure_from_environment();
    log_line("CONFIG", "ini=\"" + paths.config.source.string() + "\" " +
             (paths.config.loaded ? "loaded" : "using built-in defaults"));
    log_line("CONFIG", std::string("renderer=") + std::getenv("PSPRECOMP_MOTORSTORM_RENDERER") +
             " resolution=" + std::getenv("PSPRECOMP_MOTORSTORM_RESOLUTION") +
             " AA=" + std::getenv("PSPRECOMP_MOTORSTORM_AA") +
             " fullscreen=" + std::getenv("PSPRECOMP_MOTORSTORM_FULLSCREEN") +
             (fullscreen_overridden ? " (environment override; INI fullscreen ignored)" : " (INI)") +
             " fps=" + std::getenv("PSPRECOMP_MOTORSTORM_FPS"));
    for (const auto &warning : paths.config.warnings) log_line("CONFIG", "warning: " + warning);
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

    const auto executable_hash = psprecomp::sha256_file(paths.psp_executable);
#if defined(__ANDROID__)
    {
        std::ifstream header(paths.psp_executable, std::ios::binary);
        char magic[4]{};
        header.read(magic, 4);
        const auto decision = accept_decrypted_eboot(executable_hash, eboot_image_is_encrypted(std::string_view(magic, 4)));
        if (decision != ExecutableReject::Ok)
            throw psprecomp::Error(executable_reject_text(decision));
    }
#endif
    psprecomp::Elf32Image elf = psprecomp::Elf32Image::from_file(paths.psp_executable);
    log_line(category::kModule, "ELF type=" + psprecomp::hex32(elf.type()) +
                                    (elf.is_psp_prx() ? " (PSP PRX)" : " (plain ELF)") +
                                    " entry=" + psprecomp::hex32(elf.runtime_entry()));
    log_line(category::kMemory, "loaded SHA-256=" + executable_hash);

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
    hle_options.trace_imports = paths.config.trace_imports || paths.verbose;
    hle_options.trace_filesystem = paths.config.trace_filesystem || paths.verbose;
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
    if (const auto profile = perf::report(run_seconds); !profile.empty())
        log_line("PROFILE", profile);
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
