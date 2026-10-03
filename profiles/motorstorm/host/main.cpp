#include "motorstorm_bootstrap.hpp"
#include "motorstorm_window.hpp"
#include "motorstorm_audio.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/runtime.hpp"

#include <cstdio>
#include <filesystem>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif

namespace {

std::filesystem::path executable_directory(const char *argv0) {
#if defined(_WIN32)
    std::wstring buffer(512u, L'\0');
    for (;;) {
        const DWORD length =
            GetModuleFileNameW(nullptr, buffer.data(), static_cast<DWORD>(buffer.size()));
        if (length == 0u) return std::filesystem::current_path();
        if (length < buffer.size() - 1u) {
            buffer.resize(length);
            return std::filesystem::path(buffer).parent_path();
        }
        buffer.resize(buffer.size() * 2u);
    }
#else
    return std::filesystem::absolute(argv0 != nullptr ? argv0 : "MotorStormNative").parent_path();
#endif
}

#if defined(_WIN32)
LONG WINAPI motorstorm_crash_filter(EXCEPTION_POINTERS *info) noexcept {
    wchar_t module_path[32768]{};
    const DWORD module_length = GetModuleFileNameW(nullptr, module_path, 32768u);
    const std::filesystem::path output = module_length != 0u
        ? std::filesystem::path(module_path).parent_path() / L"MotorStormNative_crash.txt"
        : std::filesystem::path(L"MotorStormNative_crash.txt");

    FILE *file = nullptr;
    _wfopen_s(&file, output.c_str(), L"wb");
    if (file != nullptr) {
        const unsigned long code =
            info != nullptr && info->ExceptionRecord != nullptr ? info->ExceptionRecord->ExceptionCode : 0ul;
        const void *address =
            info != nullptr && info->ExceptionRecord != nullptr ? info->ExceptionRecord->ExceptionAddress : nullptr;
        std::fprintf(file, "MotorStormNative unhandled exception\r\n");
        std::fprintf(file, "code=0x%08lX address=%p host_thread=%lu\r\n", code, address,
                     static_cast<unsigned long>(GetCurrentThreadId()));
        if (info != nullptr && info->ExceptionRecord != nullptr &&
            info->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION &&
            info->ExceptionRecord->NumberParameters >= 2u) {
            const ULONG_PTR operation = info->ExceptionRecord->ExceptionInformation[0];
            const ULONG_PTR fault_address = info->ExceptionRecord->ExceptionInformation[1];
            const char *operation_name = operation == 0u ? "read"
                : (operation == 1u ? "write" : (operation == 8u ? "execute" : "unknown"));
            std::fprintf(file, "access=%s fault_address=%016llX\r\n", operation_name,
                         static_cast<unsigned long long>(fault_address));
        }
        std::fprintf(file, "guest_dispatch_pc=0x%08X guest_thread_uid=%d guest_thread_name=%s\r\n",
                     psprecomp::runtime_dispatch_pc(), psprecomp::runtime_thread_uid(),
                     psprecomp::runtime_thread_name());
#if defined(_M_X64)
        if (info != nullptr && info->ContextRecord != nullptr) {
            const CONTEXT &context = *info->ContextRecord;
            std::fprintf(file, "RIP=%016llX RSP=%016llX\r\n",
                         static_cast<unsigned long long>(context.Rip),
                         static_cast<unsigned long long>(context.Rsp));
        }
#endif
        std::fflush(file);
        std::fclose(file);
    }
    return EXCEPTION_EXECUTE_HANDLER;
}
#endif

} // namespace

int main(int argc, char **argv) {
    if (argc > 1 && std::string_view(argv[1]) == "--input-probe") {
        for (int i = 0; i < 50; ++i) {
            const auto input = motorstorm::poll_xinput_controller();
            std::cout << "connected=" << input.connected << " slot=" << input.slot
                      << " packet=" << input.packet << " buttons=" << psprecomp::hex32(input.buttons)
                      << " analog=" << static_cast<unsigned>(input.x) << ',' << static_cast<unsigned>(input.y) << '\n';
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        return 0;
    }
#if defined(_WIN32)
    SetUnhandledExceptionFilter(&motorstorm_crash_filter);
#endif
    try {
        const std::filesystem::path directory = executable_directory(argc > 0 ? argv[0] : nullptr);
        const motorstorm::BootstrapPaths paths =
            motorstorm::resolve_bootstrap_paths(argc, argv, directory);
        std::cout << "MotorStormNative PSP bootstrap\n"
                  << "Executable: " << paths.psp_executable.string() << "\n"
                  << "disc0 root: " << paths.disc_root.string() << "\n"
                  << "Log file:   " << paths.log_file.string() << "\n"
                  << "Dispatches: " << paths.max_dispatches << "\n";
        (void)motorstorm::open_log_file(paths.log_file);
        const int result = motorstorm::run(paths);
        motorstorm::window_shutdown();
        motorstorm::audio_shutdown();
        motorstorm::close_log_file();
        return result;
    } catch (const std::exception &error) {
        motorstorm::audio_shutdown();
        motorstorm::window_shutdown();
        std::cerr << "[ERROR] MotorStormNative: " << error.what() << "\n";
        motorstorm::log_line(motorstorm::category::kError, error.what());
        motorstorm::close_log_file();
        return 1;
    }
}
