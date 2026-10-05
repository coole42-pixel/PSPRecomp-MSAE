#include "motorstorm_controller.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_pacing.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <Xinput.h>

#include <SDL3/SDL_error.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_gamepad.h>
#include <SDL3/SDL_hints.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_properties.h>
#include <SDL3/SDL_version.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <cmath>
#include <chrono>
#include <cstdlib>
#include <filesystem>
#include <mutex>
#include <string>
#include <string_view>
#include <thread>
#include <vector>

namespace motorstorm {
namespace {

static_assert(static_cast<int>(PadButton::South) == SDL_GAMEPAD_BUTTON_SOUTH &&
              static_cast<int>(PadButton::Start) == SDL_GAMEPAD_BUTTON_START &&
              static_cast<int>(PadButton::DpadRight) == SDL_GAMEPAD_BUTTON_DPAD_RIGHT &&
              static_cast<int>(PadButton::Touchpad) == SDL_GAMEPAD_BUTTON_TOUCHPAD,
              "PadButton must follow SDL_GamepadButton");

constexpr std::uint64_t kPollUs = 4'000u;
constexpr auto kRumbleLifetime = std::chrono::milliseconds(250);
constexpr std::uint32_t kRumbleDurationMs = 160u;  // refreshed every 80 ms while active

std::thread g_thread;
std::atomic<bool> g_stop{false};
std::atomic<bool> g_running{false};
std::atomic<bool> g_focused{true};

std::mutex g_state_mutex;
PadInput g_state;               // current combined state
std::uint32_t g_latched{};      // buttons seen since the last controller_input()
std::string g_backend{"off"};

std::mutex g_rumble_mutex;
RumbleOutput g_rumble;
std::chrono::steady_clock::time_point g_rumble_time{};

bool option_enabled(const char *name, bool fallback) {
    const char *value = std::getenv(name);
    if (value == nullptr || *value == '\0') return fallback;
    const std::string_view text(value);
    return !(text == "0" || text == "false" || text == "off" || text == "no");
}
float option_percent(const char *name, float fallback, float minimum, float maximum) {
    const char *value = std::getenv(name);
    if (value == nullptr || *value == '\0') return fallback;
    char *end = nullptr;
    const double parsed = std::strtod(value, &end);
    if (end == value) return fallback;
    return std::clamp(static_cast<float>(parsed), minimum, maximum) / 100.0f;
}

std::filesystem::path executable_directory() {
    std::wstring buffer(MAX_PATH, L'\0');
    for (;;) {
        const DWORD length = GetModuleFileNameW(nullptr, buffer.data(), static_cast<DWORD>(buffer.size()));
        if (length == 0u) return {};
        if (length < buffer.size()) {
            buffer.resize(length);
            return std::filesystem::path(buffer).parent_path();
        }
        buffer.resize(buffer.size() * 2u);
    }
}

void publish(const PadInput &state) {
    std::lock_guard<std::mutex> lock(g_state_mutex);
    g_state = state;
    g_latched |= state.buttons;
}

// Rumble the backend should play now, already scaled; zero when stale,
// unfocused or disabled.
RumbleOutput wanted_rumble(const ControllerSettings &settings) {
    if (!settings.rumble || !g_focused.load()) return {};
    RumbleOutput rumble;
    {
        std::lock_guard<std::mutex> lock(g_rumble_mutex);
        if (std::chrono::steady_clock::now() - g_rumble_time > kRumbleLifetime) return {};
        rumble = g_rumble;
    }
    const float scale = std::clamp(settings.rumble_strength, 0.0f, 1.0f);
    rumble.low *= scale; rumble.high *= scale;
    if (settings.trigger_rumble) { rumble.left_trigger *= scale; rumble.right_trigger *= scale; }
    else rumble.left_trigger = rumble.right_trigger = 0.0f;
    return rumble;
}

std::uint16_t motor(float value) {
    return static_cast<std::uint16_t>(std::lround(std::clamp(value, 0.0f, 1.0f) * 65535.0f));
}

// Sends a rumble change, or refreshes a running effect before it expires.
class RumbleSender {
public:
    template <typename Send>
    void update(const RumbleOutput &wanted, Send &&send) {
        const auto now = std::chrono::steady_clock::now();
        const auto differs = [](float a, float b) { return std::abs(a - b) > 1.0f / 64.0f; };
        const bool changed = differs(wanted.low, sent_.low) || differs(wanted.high, sent_.high) ||
                             differs(wanted.left_trigger, sent_.left_trigger) ||
                             differs(wanted.right_trigger, sent_.right_trigger) ||
                             (wanted.idle() != sent_.idle());
        const bool refresh = !wanted.idle() && now - last_ > std::chrono::milliseconds(80);
        if (!changed && !refresh) return;
        send(wanted);
        sent_ = wanted;
        last_ = now;
    }
    void reset() { sent_ = {}; last_ = {}; }

private:
    RumbleOutput sent_{};
    std::chrono::steady_clock::time_point last_{};
};

// ---------------------------------------------------------------------------
// SDL3

struct SdlPad {
    SDL_JoystickID id{};
    SDL_Gamepad *gamepad{};
    bool trigger_rumble{};
    PadInput last{};
};

bool load_sdl() {
    // SDL3.dll is delay-loaded: load it explicitly from the executable's
    // folder first, so a missing DLL means XInput instead of a startup error.
    static const bool loaded = [] {
        const auto path = executable_directory() / L"SDL3.dll";
        HMODULE module = LoadLibraryExW(path.c_str(), nullptr, LOAD_WITH_ALTERED_SEARCH_PATH);
        if (module == nullptr) return false;
        // Every function used here exists since SDL 3.2.0.
        using Version = int(SDLCALL *)();
        const auto version = reinterpret_cast<Version>(GetProcAddress(module, "SDL_GetVersion"));
        return version != nullptr && version() >= SDL_VERSIONNUM(3, 2, 0);
    }();
    return loaded;
}

PadInput read_sdl_pad(SDL_Gamepad *gamepad, const GamepadSettings &mapping) {
    GamepadState state;
    for (int button = 0; button <= SDL_GAMEPAD_BUTTON_TOUCHPAD; ++button)
        if (SDL_GetGamepadButton(gamepad, static_cast<SDL_GamepadButton>(button))) state.buttons |= 1u << button;
    state.left_x = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTX);
    state.left_y = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTY);
    state.right_x = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHTX);
    state.right_y = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHTY);
    state.left_trigger = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER);
    state.right_trigger = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER);
    return map_gamepad(state, mapping);
}

bool active_input(const PadInput &input) { return input.buttons != 0u || input.x != 128u || input.y != 128u; }

bool run_sdl(const ControllerSettings &settings) {
    if (!load_sdl()) {
        log_line("INPUT", "SDL3.dll not found beside the executable; using XInput controllers only");
        return false;
    }
    SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
    // Controllers keep working while another window has focus, as XInput
    // always did; rumble still pauses (controller_set_focus).
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    // Bluetooth PlayStation pads switch to the report mode that carries
    // rumble only when rumble is used, leaving them DirectInput-compatible
    // for other programs otherwise.
    SDL_SetHint(SDL_HINT_JOYSTICK_ENHANCED_REPORTS, "auto");
    const auto database = executable_directory() / L"gamecontrollerdb.txt";
    std::error_code error;
    const bool has_database = std::filesystem::is_regular_file(database, error);
    if (has_database) SDL_SetHint(SDL_HINT_GAMECONTROLLERCONFIG_FILE, database.string().c_str());
    SDL_SetAppMetadata("MotorStorm: Arctic Edge (PSPRecomp)", nullptr, "psprecomp.motorstorm");
    if (!SDL_InitSubSystem(SDL_INIT_GAMEPAD)) {
        log_line("INPUT", std::string("SDL3 controller initialization failed (") + SDL_GetError() +
                              "); using XInput controllers only");
        return false;
    }
    const int version = SDL_GetVersion();
    {
        std::lock_guard<std::mutex> lock(g_state_mutex);
        g_backend = "SDL3 " + std::to_string(SDL_VERSIONNUM_MAJOR(version)) + "." +
                    std::to_string(SDL_VERSIONNUM_MINOR(version)) + "." +
                    std::to_string(SDL_VERSIONNUM_MICRO(version));
    }
    log_line("INPUT", "controllers: " + controller_backend() +
                          (has_database ? " with gamecontrollerdb.txt mappings" : "") +
                          ", rumble " + (settings.rumble ? "on" : "off"));

    std::vector<SdlPad> pads;
    SDL_JoystickID rumble_target = 0;
    RumbleSender sender;
    const auto close = [&](SdlPad &pad) {
        SDL_RumbleGamepad(pad.gamepad, 0, 0, 0);
        if (pad.trigger_rumble) SDL_RumbleGamepadTriggers(pad.gamepad, 0, 0, 0);
        SDL_CloseGamepad(pad.gamepad);
    };
    while (!g_stop.load()) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_GAMEPAD_ADDED) {
                const SDL_JoystickID id = event.gdevice.which;
                if (std::any_of(pads.begin(), pads.end(), [&](const SdlPad &pad) { return pad.id == id; })) continue;
                SDL_Gamepad *gamepad = SDL_OpenGamepad(id);
                if (gamepad == nullptr) {
                    log_line("INPUT", std::string("controller could not be opened: ") + SDL_GetError());
                    continue;
                }
                const SDL_PropertiesID properties = SDL_GetGamepadProperties(gamepad);
                const bool rumble = SDL_GetBooleanProperty(properties, SDL_PROP_GAMEPAD_CAP_RUMBLE_BOOLEAN, false);
                const bool triggers =
                    SDL_GetBooleanProperty(properties, SDL_PROP_GAMEPAD_CAP_TRIGGER_RUMBLE_BOOLEAN, false);
                const char *name = SDL_GetGamepadName(gamepad);
                const char *type = SDL_GetGamepadStringForType(SDL_GetGamepadType(gamepad));
                log_line("INPUT", std::string("controller connected: ") + (name ? name : "unnamed") + " (" +
                                      (type ? type : "unknown") + ", id " + std::to_string(id) +
                                      ", rumble " + (rumble ? (triggers ? "+ triggers" : "yes") : "no") + ")");
                pads.push_back({id, gamepad, triggers});
                if (rumble_target == 0) rumble_target = id;
            } else if (event.type == SDL_EVENT_GAMEPAD_REMOVED) {
                const SDL_JoystickID id = event.gdevice.which;
                for (auto it = pads.begin(); it != pads.end(); ++it) {
                    if (it->id != id) continue;
                    log_line("INPUT", "controller disconnected (id " + std::to_string(id) + ")");
                    SDL_CloseGamepad(it->gamepad);
                    pads.erase(it);
                    break;
                }
                if (rumble_target == id) {
                    rumble_target = pads.empty() ? 0 : pads.front().id;
                    sender.reset();
                }
            }
        }
        PadInput combined;
        for (auto &pad : pads) {
            const PadInput input = read_sdl_pad(pad.gamepad, settings.mapping);
            // The controller in use receives rumble.
            if (active_input(input) && (input.buttons & ~pad.last.buttons) != 0u && rumble_target != pad.id) {
                if (rumble_target != 0)
                    for (auto &other : pads)
                        if (other.id == rumble_target) SDL_RumbleGamepad(other.gamepad, 0, 0, 0);
                rumble_target = pad.id;
                sender.reset();
            }
            pad.last = input;
            combined = merge_inputs(combined, input);
            combined.connected = true;
        }
        if (combined.connected) {
            combined.slot = static_cast<std::uint32_t>(rumble_target);
            combined.packet = static_cast<std::uint32_t>(pads.size());
        }
        publish(combined);
        // Rumble output disabled for the time being.
        // for (auto &pad : pads) {
        //     if (pad.id != rumble_target) continue;
        //     sender.update(wanted_rumble(settings), [&](const RumbleOutput &rumble) {
        //         SDL_RumbleGamepad(pad.gamepad, motor(rumble.low), motor(rumble.high),
        //                           rumble.idle() ? 0u : kRumbleDurationMs);
        //         if (pad.trigger_rumble)
        //             SDL_RumbleGamepadTriggers(pad.gamepad, motor(rumble.left_trigger), motor(rumble.right_trigger),
        //                                       rumble.idle() ? 0u : kRumbleDurationMs);
        //     });
        // }
        host_sleep_us(kPollUs);
    }
    for (auto &pad : pads) close(pad);
    SDL_QuitSubSystem(SDL_INIT_GAMEPAD);
    SDL_Quit();
    return true;
}

// ---------------------------------------------------------------------------
// XInput fallback (Xbox-compatible controllers only).

struct XInputApi {
    DWORD(WINAPI *get_state)(DWORD, XINPUT_STATE *){};
    DWORD(WINAPI *set_state)(DWORD, XINPUT_VIBRATION *){};
};

const XInputApi &xinput() {
    static const XInputApi api = [] {
        XInputApi result;
        for (const wchar_t *name : {L"xinput1_4.dll", L"xinput9_1_0.dll", L"xinput1_3.dll"}) {
            const HMODULE module = LoadLibraryExW(name, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
            if (module == nullptr) continue;
            result.get_state = reinterpret_cast<decltype(result.get_state)>(GetProcAddress(module, "XInputGetState"));
            result.set_state = reinterpret_cast<decltype(result.set_state)>(GetProcAddress(module, "XInputSetState"));
            if (result.get_state != nullptr) return result;
            FreeLibrary(module);
        }
        return XInputApi{};
    }();
    return api;
}

void run_xinput(const ControllerSettings &settings) {
    const auto &api = xinput();
    if (api.get_state == nullptr) {
        log_line("INPUT", "no controller backend available (SDL3 and XInput missing)");
        return;
    }
    {
        std::lock_guard<std::mutex> lock(g_state_mutex);
        g_backend = "XInput";
    }
    log_line("INPUT", "controllers: XInput (Xbox-compatible only), rumble " +
                          std::string(settings.rumble ? "on" : "off"));
    std::array<bool, 4> connected{};
    std::array<PadInput, 4> last{};
    auto next_scan = std::chrono::steady_clock::now();
    int rumble_slot = -1;
    RumbleSender sender;
    while (!g_stop.load()) {
        const auto now = std::chrono::steady_clock::now();
        // Polling an empty XInput slot is slow, so absent slots are rechecked
        // every two seconds.
        const bool scan = now >= next_scan;
        if (scan) next_scan = now + std::chrono::seconds(2);
        PadInput combined;
        for (DWORD slot = 0u; slot < 4u; ++slot) {
            if (!connected[slot] && !scan) continue;
            XINPUT_STATE state{};
            const bool present = api.get_state(slot, &state) == ERROR_SUCCESS;
            if (present != connected[slot])
                log_line("INPUT", std::string("XInput controller ") + (present ? "connected" : "disconnected") +
                                      ", slot " + std::to_string(slot));
            connected[slot] = present;
            if (!present) {
                if (rumble_slot == static_cast<int>(slot)) { rumble_slot = -1; sender.reset(); }
                continue;
            }
            const auto &pad = state.Gamepad;
            PadInput input = map_gamepad(gamepad_from_xinput(pad.wButtons, pad.bLeftTrigger, pad.bRightTrigger,
                                                             pad.sThumbLX, pad.sThumbLY, pad.sThumbRX, pad.sThumbRY),
                                         settings.mapping);
            if (rumble_slot < 0 || ((input.buttons & ~last[slot].buttons) != 0u && rumble_slot != static_cast<int>(slot))) {
                if (rumble_slot >= 0 && api.set_state) {
                    XINPUT_VIBRATION stop{};
                    api.set_state(static_cast<DWORD>(rumble_slot), &stop);
                }
                rumble_slot = static_cast<int>(slot);
                sender.reset();
            }
            last[slot] = input;
            input.connected = true;
            input.slot = slot;
            input.packet = state.dwPacketNumber;
            combined = merge_inputs(combined, input);
        }
        publish(combined);
        // Rumble output disabled for the time being.
        // if (rumble_slot >= 0 && api.set_state) {
        //     // XInput has no duration: an effect runs until replaced, so the
        //     // 250 ms request lifetime alone stops a stalled effect.
        //     sender.update(wanted_rumble(settings), [&](const RumbleOutput &rumble) {
        //         XINPUT_VIBRATION vibration{motor(rumble.low), motor(rumble.high)};
        //         api.set_state(static_cast<DWORD>(rumble_slot), &vibration);
        //     });
        // }
        host_sleep_us(kPollUs);
    }
    if (rumble_slot >= 0 && api.set_state) {
        XINPUT_VIBRATION stop{};
        api.set_state(static_cast<DWORD>(rumble_slot), &stop);
    }
}

void controller_thread(ControllerSettings settings) {
    const bool use_sdl = settings.api != "xinput";
    if (use_sdl && run_sdl(settings)) return;
    if (settings.api == "sdl") {
        log_line("INPUT", "[controller] api = sdl but SDL3 is unavailable; controllers disabled");
        return;
    }
    run_xinput(settings);
}

} // namespace

ControllerSettings controller_settings_from_environment() {
    ControllerSettings settings;
    // PSPRECOMP_MOTORSTORM_XINPUT=0 is the older spelling of "no controllers".
    settings.enabled = option_enabled("PSPRECOMP_MOTORSTORM_CONTROLLER", true) &&
                       option_enabled("PSPRECOMP_MOTORSTORM_XINPUT", true);
    if (const char *api = std::getenv("PSPRECOMP_MOTORSTORM_CONTROLLER_API"); api && *api)
        settings.api = input_detail::lower(api);
    settings.rumble = option_enabled("PSPRECOMP_MOTORSTORM_RUMBLE", true);
    settings.trigger_rumble = option_enabled("PSPRECOMP_MOTORSTORM_TRIGGER_RUMBLE", true);
    settings.rumble_strength = option_percent("PSPRECOMP_MOTORSTORM_RUMBLE_STRENGTH", 1.0f, 0.0f, 100.0f);
    settings.mapping.deadzone = option_percent("PSPRECOMP_MOTORSTORM_DEADZONE", 0.24f, 0.0f, 90.0f);
    settings.mapping.trigger_threshold = option_percent("PSPRECOMP_MOTORSTORM_TRIGGER_THRESHOLD", 0.12f, 1.0f, 90.0f);
    if (const char *stick = std::getenv("PSPRECOMP_MOTORSTORM_CONTROLLER_STICK"))
        settings.mapping.right_stick = input_detail::lower(stick) == "right";
    if (const char *bindings = std::getenv("PSPRECOMP_MOTORSTORM_CONTROLLER_BINDINGS"))
        settings.mapping.bindings = parse_pad_bindings(bindings);
    return settings;
}

void controller_start() {
    if (g_running.exchange(true)) return;
    const auto settings = controller_settings_from_environment();
    if (!settings.enabled) {
        log_line("INPUT", "controllers disabled ([controller] enabled = false)");
        g_running.store(false);
        return;
    }
    g_stop.store(false);
    g_thread = std::thread(controller_thread, settings);
}

void controller_shutdown() {
    if (!g_running.exchange(false)) return;
    g_stop.store(true);
    if (g_thread.joinable()) g_thread.join();
    std::lock_guard<std::mutex> lock(g_state_mutex);
    g_state = {};
    g_latched = 0u;
    g_backend = "off";
}

PadInput controller_input() {
    std::lock_guard<std::mutex> lock(g_state_mutex);
    PadInput result = g_state;
    result.buttons |= g_latched;
    g_latched = 0u;
    return result;
}

void controller_set_rumble(const RumbleOutput &rumble) {
    std::lock_guard<std::mutex> lock(g_rumble_mutex);
    g_rumble = rumble;
    g_rumble_time = std::chrono::steady_clock::now();
}

void controller_set_focus(bool focused) { g_focused.store(focused); }

std::string controller_backend() {
    std::lock_guard<std::mutex> lock(g_state_mutex);
    return g_backend;
}

} // namespace motorstorm
