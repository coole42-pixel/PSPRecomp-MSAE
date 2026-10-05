#include "motorstorm_window.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_ge.hpp"
#include "motorstorm_gpu.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <chrono>
#include <bit>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
#include <thread>

namespace motorstorm {
void log_line(std::string_view category, std::string_view message) {
    std::printf("[%.*s] %.*s\n", static_cast<int>(category.size()), category.data(),
                static_cast<int>(message.size()), message.data());
}
}
namespace {
void check(bool condition, const char *message) { if (!condition) throw std::runtime_error(message); }
template <class Predicate> void wait_for(Predicate predicate, const char *message) {
    const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(3);
    while (!predicate()) {
        if (std::chrono::steady_clock::now() >= deadline) throw std::runtime_error(message);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
HWND own_window() {
    HWND found{};
    EnumWindows([](HWND window, LPARAM result) -> BOOL {
        DWORD process{};
        GetWindowThreadProcessId(window, &process);
        wchar_t name[64]{};
        GetClassNameW(window, name, 64);
        if (process == GetCurrentProcessId() && std::wstring_view(name) == L"PSPRecompMotorStorm") {
            *reinterpret_cast<HWND *>(result) = window;
            return FALSE;
        }
        return TRUE;
    }, reinterpret_cast<LPARAM>(&found));
    return found;
}
void draw_gpu_frame(psprecomp::GuestMemory &memory) {
    constexpr std::uint32_t list = 0x08B00000u, vertices = 0x08B08000u;
    const float positions[]{0, 0, 0, 480, 272, 0};
    for (unsigned i = 0u; i < 2u; ++i) {
        const auto address = vertices + i * 24u;
        memory.store32(address, std::bit_cast<std::uint32_t>(positions[i * 3u]));
        memory.store32(address + 4u, std::bit_cast<std::uint32_t>(positions[i * 3u + 1u]));
        memory.store32(address + 8u, 0xFF44AA22u);
        for (unsigned j = 0u; j < 3u; ++j)
            memory.store32(address + 12u + j * 4u, std::bit_cast<std::uint32_t>(positions[i * 3u + j]));
    }
    const std::uint32_t words[]{0x9C000000u, 0x9D040200u, 0xD2000003u, 0x9E100000u, 0x9F040200u,
        0xD4000000u, 0xD5000000u | 479u | (271u << 10u), 0x1280019Fu, 0x10080000u,
        0x01B08000u, 0x04060002u, 0x0F000001u, 0x0C000000u};
    for (unsigned i = 0u; i < std::size(words); ++i) memory.store32(list + i * 4u, words[i]);
    motorstorm::software_ge_execute_list(memory, list, 0u, true, 1u);
    check(motorstorm::gpu_active() && motorstorm::gpu_report().draws > 0u,
          "Hardware window test must render a real PSP framebuffer on D3D12");
}
}
int main(int argc, char **argv) {
    try {
        const bool hardware = argc == 2 && std::string_view(argv[1]) == "--d3d12";
        _putenv_s("PSPRECOMP_MOTORSTORM_WINDOW", "0");
        motorstorm::window_start();
        check(!motorstorm::window_enabled(), "Explicit WINDOW=0 must stay headless");
        _putenv_s("PSPRECOMP_MOTORSTORM_WINDOW", "1");
        _putenv_s("PSPRECOMP_MOTORSTORM_FULLSCREEN", "0");
        _putenv_s("PSPRECOMP_MOTORSTORM_WINDOW_SCALE", "2");
        _putenv_s("PSPRECOMP_MOTORSTORM_RENDERER", hardware ? "d3d12" : "software");
        _putenv_s("PSPRECOMP_MOTORSTORM_RESOLUTION", "4");
        _putenv_s("PSPRECOMP_MOTORSTORM_AA", "fxaa");
        motorstorm::window_start();
        wait_for([] { const HWND window = own_window(); return window && IsWindowVisible(window); }, "Native window failed to appear");
        const HWND window = own_window();
        RECT original{};
        GetWindowRect(window, &original);
        psprecomp::GuestMemory memory;
        memory.store32(0x04000000u, 0xFF44AA22u);
        if (hardware) draw_gpu_frame(memory);
        const auto present = [&] {
            motorstorm::window_present(memory, 0x04000000u, hardware ? 512u : 1u, 3u,
                                        hardware ? 480u : 1u, hardware ? 272u : 1u);
        };
        present();
        motorstorm::window_set_fullscreen(true);
        wait_for([] { return motorstorm::window_fullscreen(); }, "Fullscreen did not enable");
        RECT fullscreen{};
        GetWindowRect(window, &fullscreen);
        MONITORINFO monitor{sizeof(MONITORINFO)};
        GetMonitorInfoW(MonitorFromWindow(window, MONITOR_DEFAULTTONEAREST), &monitor);
        check(EqualRect(&fullscreen, &monitor.rcMonitor) && !(GetWindowLongPtrW(window, GWL_STYLE) & WS_OVERLAPPEDWINDOW),
              "Borderless fullscreen must cover the monitor and remove window chrome");
        present();
        SendMessageW(window, WM_KEYDOWN, VK_F11, 1ll << 30);
        check(motorstorm::window_fullscreen(), "Held fullscreen key must not repeatedly toggle");
        SendMessageW(window, WM_SYSKEYDOWN, VK_RETURN, 1ll << 29);
        wait_for([] { return !motorstorm::window_fullscreen(); }, "Alt+Enter did not restore windowed mode");
        RECT restored{};
        GetWindowRect(window, &restored);
        check(EqualRect(&original, &restored) && (GetWindowLongPtrW(window, GWL_STYLE) & WS_OVERLAPPEDWINDOW),
              "Windowed mode restores the original placement and style");
        present();
        check(!(motorstorm::window_pad() & 0x8u), "Alt+Enter must not emit a PSP Start button");
        // Keyboard: keys are matched by scan code (lparam bits 16-23, bit 24
        // = extended), whatever virtual key the layout reports.
        const auto key = [&](UINT message, WPARAM vk, unsigned scan, bool extended = false) {
            LPARAM lparam = static_cast<LPARAM>(scan) << 16;
            if (extended) lparam |= 1ll << 24;
            if (message == WM_KEYUP) lparam |= (1ll << 30) | (1ll << 31);
            SendMessageW(window, message, vk, lparam);
        };
        (void)motorstorm::window_input();
        key(WM_KEYDOWN, 'Z', 0x11u);  // AZERTY 'Z' sits where QWERTY has W
        check(motorstorm::window_pad() == 0x200u, "The W position accelerates (R) on any layout");
        key(WM_KEYUP, 'Z', 0x11u);
        key(WM_KEYDOWN, VK_UP, 0x48u, true);
        check(motorstorm::window_pad() == 0x10u, "Extended Up arrow is the D-pad");
        key(WM_KEYUP, VK_UP, 0x48u, true);
        key(WM_KEYDOWN, VK_NUMPAD8, 0x48u);
        check(motorstorm::window_pad() == 0u, "Numpad 8 is not the Up arrow");
        key(WM_KEYUP, VK_NUMPAD8, 0x48u);
        key(WM_KEYDOWN, 'D', 0x20u);
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        (void)motorstorm::window_input();
        check(motorstorm::window_input().x == 255u, "Held D steers fully right after the ramp");
        SendMessageW(window, WM_KILLFOCUS, 0u, 0u);
        (void)motorstorm::window_input();
        check(motorstorm::window_pad() == 0u && motorstorm::window_input().x == 128u,
              "Losing focus releases every key");
        key(WM_KEYUP, 'D', 0x20u);
        key(WM_KEYDOWN, VK_RETURN, 0u);  // synthesized message without a scan code
        key(WM_KEYUP, VK_RETURN, 0u);
        check(motorstorm::window_pad() == 0x8u, "Keys without a scan code are mapped from the virtual key");
        SendMessageW(window, WM_KEYDOWN, VK_F11, 0u);
        check(motorstorm::window_fullscreen(), "F11 enters fullscreen");
        present();
        SendMessageW(window, WM_KEYDOWN, VK_ESCAPE, 0u);
        check(!motorstorm::window_fullscreen() && !motorstorm::window_close_requested(), "Escape leaves fullscreen without closing the game");
        present();
        if (hardware) {
            const auto report = motorstorm::gpu_report();
            check(report.presents == 5u && report.resolution_scale == 4u && report.antialiasing == 1u && !report.software_draws,
                  "Fullscreen / windowed resize retains hardware 4x FXAA presentation without a software fallback");
        }
        SendMessageW(window, WM_CLOSE, 0u, 0u);
        wait_for([] { return motorstorm::window_close_requested(); }, "Close notification was lost");
        motorstorm::window_shutdown();
        _putenv_s("PSPRECOMP_MOTORSTORM_FULLSCREEN", "1");
        motorstorm::window_start();
        wait_for([] { return motorstorm::window_fullscreen(); }, "Configured fullscreen must apply at startup");
        check(!motorstorm::window_close_requested(), "Restart clears the previous close request");
        SendMessageW(own_window(), WM_SYSKEYDOWN, VK_F4, 1ll << 29);
        wait_for([] { return motorstorm::window_close_requested(); }, "Alt+F4 must close even without fullscreen window chrome");
        motorstorm::window_shutdown();
        for (unsigned i = 0; i < 3u; ++i) { motorstorm::window_start(); motorstorm::window_shutdown(); }
        check(!motorstorm::window_enabled(), "Immediate shutdown during window creation must complete");
        std::puts("MotorStorm fullscreen startup, toggles, aspect presentation, restore and shutdown tests passed");
        return 0;
    } catch (const std::exception &error) {
        motorstorm::window_shutdown();
        std::fprintf(stderr, "[FAIL] %s\n", error.what());
        return 1;
    }
}
