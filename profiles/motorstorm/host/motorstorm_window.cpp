#include "motorstorm_window.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_gpu.hpp"

#include <windows.h>
#include <Xinput.h>

#include <atomic>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

namespace motorstorm {
namespace {

constexpr wchar_t kWindowClass[] = L"PSPRecompMotorStorm";
constexpr wchar_t kWindowTitle[] = L"MotorStorm - PSPRecomp (PSPRECOMP_MOTORSTORM_WINDOW)";

std::atomic<bool> g_enabled{false};
std::atomic<bool> g_started{false};
std::atomic<bool> g_close_requested{false};
std::atomic<std::uint32_t> g_pad{0u};
std::atomic<std::uint32_t> g_keyboard_presses{0u};
std::mutex g_input_mutex;
PadInput g_gamepad;
std::uint32_t g_gamepad_presses{};

// Latest frame in the BGRA byte order expected by a Win32 DIB.
std::mutex g_frame_mutex;
std::vector<std::uint8_t> g_frame_rgba;
std::uint32_t g_frame_width = 0u;
std::uint32_t g_frame_height = 0u;
std::atomic<bool> g_frame_dirty{false};

std::atomic<HWND> g_window{nullptr};
std::atomic<bool> g_gpu_presenting{false};
std::thread g_thread;

std::uint32_t scale_factor() {
    static const std::uint32_t scale = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_WINDOW_SCALE");
        const unsigned long value = text != nullptr ? std::strtoul(text, nullptr, 0) : 0ul;
        return static_cast<std::uint32_t>(value >= 1ul && value <= 8ul ? value : 2ul);
    }();
    return scale;
}

std::uint32_t key_to_pad(WPARAM key) {
    // PSP pad bits (pspctrl.h): SELECT 0x1, START 0x8, UP 0x10, RIGHT 0x20,
    // DOWN 0x40, LEFT 0x80, L 0x100, R 0x200, TRIANGLE 0x1000, CIRCLE 0x2000,
    // CROSS 0x4000, SQUARE 0x8000.
    switch (key) {
    case VK_UP: return 0x0010u;
    case VK_RIGHT: return 0x0020u;
    case VK_DOWN: return 0x0040u;
    case VK_LEFT: return 0x0080u;
    case 'Q': return 0x0100u;
    case 'E': return 0x0200u;
    case 'W': return 0x1000u;
    case 'Z': return 0x2000u;
    case 'X': return 0x4000u;
    case 'S': return 0x8000u;
    case VK_RETURN: return 0x0008u;
    case VK_BACK: return 0x0001u;
    default: return 0u;
    }
}

LRESULT CALLBACK window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    switch (message) {
    case WM_CLOSE:
        g_close_requested.store(true);
        DestroyWindow(window);
        return 0;
    case WM_APP + 1:
        DestroyWindow(window);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    case WM_ERASEBKGND:
        return 1;
    case WM_KILLFOCUS:
        g_pad.store(0u);
        g_keyboard_presses.store(0u);
        return 0;
    case WM_TIMER: {
        const PadInput next = poll_xinput_controller();
        std::lock_guard<std::mutex> lock(g_input_mutex);
        if (next.connected != g_gamepad.connected || next.slot != g_gamepad.slot)
            log_line("INPUT", next.connected ? "XInput controller connected, slot=" + std::to_string(next.slot)
                                              : "XInput controller disconnected");
        if (next.connected) g_gamepad_presses |= next.buttons & ~g_gamepad.buttons;
        else g_gamepad_presses = 0u;
        g_gamepad = next;
        return 0;
    }
    case WM_KEYDOWN:
    case WM_SYSKEYDOWN: {
        const std::uint32_t bit = key_to_pad(wparam);
        if (bit != 0u) {
            const auto old = g_pad.fetch_or(bit);
            g_keyboard_presses.fetch_or(bit & ~old);
            if (old != (old | bit) && std::getenv("PSPRECOMP_MOTORSTORM_TRACE_CTRL") != nullptr)
                log_line("HOST INPUT", "down vk=" + std::to_string(wparam) + " pad=" + std::to_string(old | bit));
        }
        if (wparam == VK_ESCAPE) {
            g_close_requested.store(true);
            DestroyWindow(window);
        }
        return 0;
    }
    case WM_KEYUP:
    case WM_SYSKEYUP: {
        const std::uint32_t bit = key_to_pad(wparam);
        if (bit != 0u) {
            const auto old = g_pad.fetch_and(~bit);
            if (old != (old & ~bit) && std::getenv("PSPRECOMP_MOTORSTORM_TRACE_CTRL") != nullptr)
                log_line("HOST INPUT", "up vk=" + std::to_string(wparam) + " pad=" + std::to_string(old & ~bit));
        }
        return 0;
    }
    case WM_PAINT: {
        PAINTSTRUCT paint{};
        HDC dc = BeginPaint(window, &paint);
        if(g_gpu_presenting.load()) { EndPaint(window,&paint); return 0; }
        RECT client{};
        GetClientRect(window, &client);
        std::uint32_t width = 0u, height = 0u;
        std::vector<std::uint8_t> copy;
        {
            std::lock_guard<std::mutex> lock(g_frame_mutex);
            width = g_frame_width;
            height = g_frame_height;
            if (!g_frame_rgba.empty()) copy = g_frame_rgba;
        }
        if (width != 0u && height != 0u && !copy.empty()) {
            BITMAPINFO info{};
            info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
            info.bmiHeader.biWidth = static_cast<LONG>(width);
            info.bmiHeader.biHeight = -static_cast<LONG>(height);
            info.bmiHeader.biPlanes = 1;
            info.bmiHeader.biBitCount = 32;
            info.bmiHeader.biCompression = BI_RGB;
            SetStretchBltMode(dc, COLORONCOLOR);
            StretchDIBits(dc, 0, 0, client.right - client.left, client.bottom - client.top, 0, 0,
                          static_cast<int>(width), static_cast<int>(height), copy.data(), &info,
                          DIB_RGB_COLORS, SRCCOPY);
        } else {
            RECT empty = client;
            FillRect(dc, &empty, static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH)));
        }
        EndPaint(window, &paint);
        return 0;
    }
    default:
        break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

void window_thread_main() {
    WNDCLASSEXW window_class{};
    window_class.cbSize = sizeof(WNDCLASSEXW);
    window_class.style = CS_OWNDC;
    window_class.lpfnWndProc = window_proc;
    window_class.hInstance = GetModuleHandleW(nullptr);
    window_class.hCursor = LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_ARROW));
    window_class.lpszClassName = kWindowClass;
    RegisterClassExW(&window_class);

    const std::uint32_t scale = scale_factor();
    const int width = static_cast<int>(480u * scale);
    const int height = static_cast<int>(272u * scale);
    RECT rect{0, 0, width, height};
    AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, FALSE);
    g_window = CreateWindowExW(0, kWindowClass, kWindowTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,
                               CW_USEDEFAULT, rect.right - rect.left, rect.bottom - rect.top,
                               nullptr, nullptr, GetModuleHandleW(nullptr), nullptr);
    if (g_window != nullptr) {
        SetTimer(g_window, 1u, 16u, nullptr);
        ShowWindow(g_window, SW_SHOW);
        UpdateWindow(g_window);
    }

    MSG message{};
    while (GetMessageW(&message, nullptr, 0u, 0u) > 0) {
        TranslateMessage(&message);
        DispatchMessageW(&message);
    }
    g_window = nullptr;
}

} // namespace

bool window_enabled() { return g_enabled.load(); }

void window_start() {
    if (std::getenv("PSPRECOMP_MOTORSTORM_WINDOW") == nullptr) return;
    if (g_started.exchange(true)) return;
    g_enabled.store(true);
    g_thread = std::thread(window_thread_main);
}

void window_present(const psprecomp::GuestMemory &memory, std::uint32_t framebuffer,
                    std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                    std::uint32_t height) {
    if (!g_enabled.load() || framebuffer == 0u || width == 0u || height == 0u) return;
    g_gpu_presenting.store(gpu_active());
    if(gpu_active() && gpu_present(memory,g_window.load(),framebuffer,stride,format,width,height)) {
        g_gpu_presenting.store(true);
        return;
    }
    g_gpu_presenting.store(false);
    std::vector<std::uint8_t> rgba(static_cast<std::size_t>(width) * height * 4u, 0u);
    for (std::uint32_t y = 0u; y < height; ++y) {
        for (std::uint32_t x = 0u; x < width; ++x) {
            const std::uint32_t pixel_bytes = format == 3u ? 4u : 2u;
            const std::uint32_t address = framebuffer + (y * stride + x) * pixel_bytes;
            if (!memory.contains(address, pixel_bytes)) continue;
            std::uint32_t r = 0u, g = 0u, b = 0u;
            switch (format) {
            case 0u: {
                const std::uint32_t v = memory.load16(address);
                r = (v & 0x1Fu) << 3u; g = ((v >> 5u) & 0x3Fu) << 2u; b = ((v >> 11u) & 0x1Fu) << 3u;
                break;
            }
            case 1u: {
                const std::uint32_t v = memory.load16(address);
                r = (v & 0x1Fu) << 3u; g = ((v >> 5u) & 0x1Fu) << 3u; b = ((v >> 10u) & 0x1Fu) << 3u;
                break;
            }
            case 2u: {
                const std::uint32_t v = memory.load16(address);
                r = (v & 0xFu) << 4u; g = ((v >> 4u) & 0xFu) << 4u; b = ((v >> 8u) & 0xFu) << 4u;
                break;
            }
            default: {
                const std::uint32_t v = memory.load32(address);
                r = v & 0xFFu; g = (v >> 8u) & 0xFFu; b = (v >> 16u) & 0xFFu;
                break;
            }
            }
            const std::size_t index = (static_cast<std::size_t>(y) * width + x) * 4u;
            rgba[index + 0u] = static_cast<std::uint8_t>(b);
            rgba[index + 1u] = static_cast<std::uint8_t>(g);
            rgba[index + 2u] = static_cast<std::uint8_t>(r);
            rgba[index + 3u] = 0xFFu;
        }
    }
    {
        std::lock_guard<std::mutex> lock(g_frame_mutex);
        g_frame_rgba = std::move(rgba);
        g_frame_width = width;
        g_frame_height = height;
    }
    if (g_window != nullptr) InvalidateRect(g_window, nullptr, FALSE);

    static const bool timed_capture = std::getenv("PSPRECOMP_MOTORSTORM_WINDOW_TIMED_CAPTURE") != nullptr;
    if (timed_capture) {
        static const auto start_tp = std::chrono::steady_clock::now();
        static int next_capture = 1;
        const auto elapsed_sec = std::chrono::duration_cast<std::chrono::duration<double>>(
            std::chrono::steady_clock::now() - start_tp).count();
        // 5 captures across 60 seconds: 10s, 22s, 34s, 46s, 58s
        const double target_sec = 10.0 + (next_capture - 1) * 12.0;
        if (next_capture <= 5 && elapsed_sec >= target_sec) {
            const std::string path = "out/motorstorm/live_game_window_" + std::to_string(next_capture) + ".ppm";
            std::ofstream ppm(path, std::ios::binary);
            if (ppm) {
                ppm << "P6\n" << width << " " << height << "\n255\n";
                std::vector<std::uint8_t> rgb(static_cast<std::size_t>(width) * height * 3u);
                {
                    std::lock_guard<std::mutex> lock(g_frame_mutex);
                    for (std::size_t i = 0; i < static_cast<std::size_t>(width) * height; ++i) {
                        rgb[i * 3 + 0] = g_frame_rgba[i * 4 + 2]; // R
                        rgb[i * 3 + 1] = g_frame_rgba[i * 4 + 1]; // G
                        rgb[i * 3 + 2] = g_frame_rgba[i * 4 + 0]; // B
                    }
                }
                ppm.write(reinterpret_cast<const char *>(rgb.data()), static_cast<std::streamsize>(rgb.size()));
                std::cerr << "[WINDOW] Saved timed screenshot " << next_capture << " at " << elapsed_sec << "s: " << path << std::endl;
            }
            ++next_capture;
        }
    }
}

PadInput poll_xinput_controller() {
    using GetState = DWORD (WINAPI *)(DWORD, XINPUT_STATE *);
    static const GetState get_state = []() -> GetState {
        const char *option = std::getenv("PSPRECOMP_MOTORSTORM_XINPUT");
        if (option != nullptr && std::string_view(option) == "0") return nullptr;
        for (const wchar_t *name : {L"xinput1_4.dll", L"xinput9_1_0.dll", L"xinput1_3.dll"}) {
            const HMODULE module = LoadLibraryExW(name, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
            if (module == nullptr) continue;
            const auto function = reinterpret_cast<GetState>(GetProcAddress(module, "XInputGetState"));
            if (function != nullptr) return function;
            FreeLibrary(module);
        }
        return nullptr;
    }();
    if (get_state == nullptr) return {};
    static int active_slot = -1;
    static std::chrono::steady_clock::time_point next_scan{};
    const auto now = std::chrono::steady_clock::now();
    XINPUT_STATE state{};
    const auto translate = [&](DWORD slot) {
        auto result = map_xinput(state.Gamepad.wButtons, state.Gamepad.bLeftTrigger,
            state.Gamepad.bRightTrigger, state.Gamepad.sThumbLX, state.Gamepad.sThumbLY);
        result.connected = true; result.slot = slot; result.packet = state.dwPacketNumber;
        return result;
    };
    if (active_slot >= 0) {
        if (get_state(static_cast<DWORD>(active_slot), &state) == ERROR_SUCCESS)
            return translate(static_cast<DWORD>(active_slot));
        active_slot = -1;
        next_scan = now;
    }
    if (now < next_scan) return {};
    next_scan = now + std::chrono::seconds(2);
    for (DWORD slot = 0u; slot < 4u; ++slot) {
        if (get_state(slot, &state) == ERROR_SUCCESS) {
            active_slot = static_cast<int>(slot);
            return translate(slot);
        }
    }
    return {};
}

PadInput window_input() {
    PadInput result;
    if (!g_enabled.load()) return result;
    {
        std::lock_guard<std::mutex> lock(g_input_mutex);
        result = g_gamepad;
        result.buttons |= g_gamepad_presses;
        g_gamepad_presses = 0u;
    }
    result.buttons |= g_pad.load() | g_keyboard_presses.exchange(0u);
    return result;
}

std::uint32_t window_pad() { return window_input().buttons; }

bool window_close_requested() { return g_close_requested.load(); }

void window_shutdown() {
    gpu_shutdown();
    g_gpu_presenting.store(false);
    if (!g_started.exchange(false)) return;
    // Close through WM_CLOSE so the window thread leaves its message loop, but
    // do not report this as a user close.
    if (g_window != nullptr) {
        g_close_requested.store(false);
        PostMessageW(g_window, WM_APP + 1, 0u, 0u);
    }
    if (g_thread.joinable()) g_thread.join();
    g_enabled.store(false);
}

} // namespace motorstorm
