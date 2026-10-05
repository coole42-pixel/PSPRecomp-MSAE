#pragma once

// Host input translation: keyboard and gamepad state to the PSP pad word and
// analog nub that sceCtrlReadBufferPositive hands the game. Everything here is
// pure (no Win32 or SDL calls), so the mappings can be tested without devices.

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace motorstorm {

struct PadInput {
    std::uint32_t buttons{};
    std::uint8_t x{128u}, y{128u};
    bool connected{};
    std::uint32_t slot{0xFFFFFFFFu}, packet{};
};

// PSP pad bits (pspctrl.h).
namespace psp_button {
inline constexpr std::uint32_t kSelect = 0x0001u, kStart = 0x0008u, kUp = 0x0010u, kRight = 0x0020u,
                               kDown = 0x0040u, kLeft = 0x0080u, kL = 0x0100u, kR = 0x0200u,
                               kTriangle = 0x1000u, kCircle = 0x2000u, kCross = 0x4000u, kSquare = 0x8000u;
} // namespace psp_button

// Everything a binding can drive: the twelve PSP buttons and the four
// directions of the analog nub. The names are the [keyboard] / [controller]
// INI keys.
enum class Control : std::uint8_t {
    Up, Down, Left, Right, StickUp, StickDown, StickLeft, StickRight,
    Cross, Circle, Square, Triangle, L, R, Start, Select, Count
};
inline constexpr std::size_t kControlCount = static_cast<std::size_t>(Control::Count);
inline constexpr std::array<std::string_view, kControlCount> kControlNames{
    "up", "down", "left", "right", "stick_up", "stick_down", "stick_left", "stick_right",
    "cross", "circle", "square", "triangle", "l", "r", "start", "select"};
inline constexpr std::array<std::uint32_t, kControlCount> kControlBits{
    psp_button::kUp, psp_button::kDown, psp_button::kLeft, psp_button::kRight, 0u, 0u, 0u, 0u,
    psp_button::kCross, psp_button::kCircle, psp_button::kSquare, psp_button::kTriangle,
    psp_button::kL, psp_button::kR, psp_button::kStart, psp_button::kSelect};
[[nodiscard]] inline constexpr bool is_stick(Control control) {
    return control >= Control::StickUp && control <= Control::StickRight;
}
[[nodiscard]] inline std::optional<Control> control_from_name(std::string_view name) {
    for (std::size_t i = 0; i < kControlCount; ++i)
        if (kControlNames[i] == name) return static_cast<Control>(i);
    return std::nullopt;
}

namespace input_detail {
inline std::string lower(std::string_view text) {
    std::string result(text);
    std::transform(result.begin(), result.end(), result.begin(),
                   [](unsigned char value) { return static_cast<char>(std::tolower(value)); });
    return result;
}
inline std::string_view trim(std::string_view text) {
    const auto begin = text.find_first_not_of(" \t");
    if (begin == std::string_view::npos) return {};
    return text.substr(begin, text.find_last_not_of(" \t") - begin + 1u);
}
// Splits "a, b,c" into trimmed, lower-case items; empty items are kept so the
// caller can reject them.
inline std::vector<std::string> split_list(std::string_view text, char separator) {
    std::vector<std::string> items;
    std::size_t begin = 0u;
    while (true) {
        const auto end = text.find(separator, begin);
        items.push_back(lower(trim(text.substr(begin, end == std::string_view::npos ? end : end - begin))));
        if (end == std::string_view::npos) break;
        begin = end + 1u;
    }
    return items;
}
} // namespace input_detail

// ---------------------------------------------------------------------------
// Keyboard. Keys are identified by their physical position (PS/2 set 1 scan
// codes, 0x100 marks the E0-extended keys), so a binding stays in place on
// AZERTY, QWERTZ or Dvorak layouts. Names follow the US layout.

struct KeyName { std::string_view name; std::uint16_t code; };
inline constexpr KeyName kKeyNames[]{
    {"a", 0x1E}, {"b", 0x30}, {"c", 0x2E}, {"d", 0x20}, {"e", 0x12}, {"f", 0x21}, {"g", 0x22},
    {"h", 0x23}, {"i", 0x17}, {"j", 0x24}, {"k", 0x25}, {"l", 0x26}, {"m", 0x32}, {"n", 0x31},
    {"o", 0x18}, {"p", 0x19}, {"q", 0x10}, {"r", 0x13}, {"s", 0x1F}, {"t", 0x14}, {"u", 0x16},
    {"v", 0x2F}, {"w", 0x11}, {"x", 0x2D}, {"y", 0x15}, {"z", 0x2C},
    {"1", 0x02}, {"2", 0x03}, {"3", 0x04}, {"4", 0x05}, {"5", 0x06}, {"6", 0x07}, {"7", 0x08},
    {"8", 0x09}, {"9", 0x0A}, {"0", 0x0B},
    {"f1", 0x3B}, {"f2", 0x3C}, {"f3", 0x3D}, {"f4", 0x3E}, {"f5", 0x3F}, {"f6", 0x40},
    {"f7", 0x41}, {"f8", 0x42}, {"f9", 0x43}, {"f10", 0x44}, {"f12", 0x58},
    {"space", 0x39}, {"enter", 0x1C}, {"return", 0x1C}, {"backspace", 0x0E}, {"tab", 0x0F},
    {"capslock", 0x3A}, {"lshift", 0x2A}, {"rshift", 0x36}, {"lctrl", 0x1D}, {"rctrl", 0x11D},
    {"lalt", 0x38}, {"ralt", 0x138},
    {"up", 0x148}, {"down", 0x150}, {"left", 0x14B}, {"right", 0x14D},
    {"insert", 0x152}, {"delete", 0x153}, {"home", 0x147}, {"end", 0x14F},
    {"pageup", 0x149}, {"pagedown", 0x151},
    {"minus", 0x0C}, {"equals", 0x0D}, {"lbracket", 0x1A}, {"rbracket", 0x1B},
    {"semicolon", 0x27}, {"apostrophe", 0x28}, {"grave", 0x29}, {"backslash", 0x2B},
    {"comma", 0x33}, {"period", 0x34}, {"slash", 0x35},
    {"num0", 0x52}, {"num1", 0x4F}, {"num2", 0x50}, {"num3", 0x51}, {"num4", 0x4B},
    {"num5", 0x4C}, {"num6", 0x4D}, {"num7", 0x47}, {"num8", 0x48}, {"num9", 0x49},
    {"numenter", 0x11C}, {"numplus", 0x4E}, {"numminus", 0x4A}, {"nummultiply", 0x37},
    {"numdivide", 0x135}, {"numdecimal", 0x53},
};
inline constexpr std::uint16_t kKeyEscape = 0x01u, kKeyF11 = 0x57u;
inline constexpr std::size_t kKeyCodeCount = 0x200u;

// Escape and F11 stay window controls (fullscreen / close), so they are not
// bindable; their names are simply unknown to the parser.
[[nodiscard]] inline std::optional<std::uint16_t> key_from_name(std::string_view name) {
    const auto wanted = input_detail::lower(name);
    for (const auto &key : kKeyNames)
        if (key.name == wanted) return key.code;
    return std::nullopt;
}
[[nodiscard]] inline std::string key_name(std::uint16_t code) {
    for (const auto &key : kKeyNames)
        if (key.code == code) return std::string(key.name);
    return "0x" + std::to_string(code);
}

using KeyList = std::vector<std::uint16_t>;
using KeyboardBindings = std::array<KeyList, kControlCount>;

// Driving-friendly defaults for the game's own "MotorStorm" control scheme
// (R accelerates, L brakes, Cross boosts): W/S drive, A/D steer, Space boosts.
// Arrow keys are the D-pad for the menus.
[[nodiscard]] inline KeyboardBindings default_keyboard_bindings() {
    KeyboardBindings bindings;
    const auto set = [&](Control control, std::initializer_list<std::string_view> names) {
        for (const auto name : names) bindings[static_cast<std::size_t>(control)].push_back(*key_from_name(name));
    };
    set(Control::Up, {"up"}); set(Control::Down, {"down"});
    set(Control::Left, {"left"}); set(Control::Right, {"right"});
    set(Control::StickUp, {"i"}); set(Control::StickDown, {"k"});
    set(Control::StickLeft, {"a"}); set(Control::StickRight, {"d"});
    set(Control::Cross, {"space", "x"}); set(Control::Circle, {"c", "backspace"});
    set(Control::Square, {"v"}); set(Control::Triangle, {"f"});
    set(Control::L, {"s", "q"}); set(Control::R, {"w", "e"});
    set(Control::Start, {"enter", "p"}); set(Control::Select, {"tab"});
    return bindings;
}

// "Space, X" -> codes. "none" (or an empty value) unbinds the control.
[[nodiscard]] inline std::optional<KeyList> parse_key_list(std::string_view text, std::string *error = nullptr) {
    KeyList keys;
    const auto items = input_detail::split_list(text, ',');
    if (items.size() == 1u && (items[0].empty() || items[0] == "none")) return keys;
    for (const auto &item : items) {
        const auto code = key_from_name(item);
        if (!code) {
            if (error) *error = "unknown key '" + item + "'";
            return std::nullopt;
        }
        if (std::find(keys.begin(), keys.end(), *code) == keys.end()) keys.push_back(*code);
    }
    return keys;
}

// Environment form written by the INI loader: "cross=space,x;l=s,q". Controls
// that are not mentioned keep their defaults.
[[nodiscard]] inline KeyboardBindings parse_keyboard_bindings(std::string_view text) {
    auto bindings = default_keyboard_bindings();
    for (const auto &entry : input_detail::split_list(text, ';')) {
        const auto equals = entry.find('=');
        if (equals == std::string::npos) continue;
        const auto control = control_from_name(input_detail::trim(std::string_view(entry).substr(0u, equals)));
        const auto keys = parse_key_list(std::string_view(entry).substr(equals + 1u));
        if (control && keys) bindings[static_cast<std::size_t>(*control)] = *keys;
    }
    return bindings;
}

// Converts a -1..1 axis value to the PSP nub byte (0 = left/up, 255 = right/down).
[[nodiscard]] inline std::uint8_t psp_axis(float value) {
    const float scale = value < 0.0f ? 128.0f : 127.0f;
    return static_cast<std::uint8_t>(std::clamp(128l + std::lround(value * scale), 0l, 255l));
}

// Keyboard state with last-press priority: holding A and then pressing D
// steers right, releasing D steers left again (no cancelled steering). The
// analog nub ramps toward its target over ramp_ms so a tap gives a partial
// steer; reversing direction passes through the centre immediately.
class KeyboardMapper {
public:
    explicit KeyboardMapper(KeyboardBindings bindings = default_keyboard_bindings(), float ramp_ms = 90.0f)
        : bindings_(std::move(bindings)), ramp_ms_(std::max(0.0f, ramp_ms)) {}

    void set_bindings(KeyboardBindings bindings) { bindings_ = std::move(bindings); }
    void set_ramp_ms(float ramp_ms) { ramp_ms_ = std::max(0.0f, ramp_ms); }
    [[nodiscard]] const KeyboardBindings &bindings() const { return bindings_; }
    [[nodiscard]] bool bound(std::uint16_t code) const {
        for (const auto &keys : bindings_)
            if (std::find(keys.begin(), keys.end(), code) != keys.end()) return true;
        return false;
    }

    // Returns true when the key is bound (the event is consumed).
    bool key(std::uint16_t code, bool down) {
        if (code >= kKeyCodeCount || !bound(code)) return false;
        if (down) {
            if (pressed_at_[code] == 0u) pressed_at_[code] = ++sequence_;  // ignore auto-repeat
            presses_ |= buttons();
        } else {
            pressed_at_[code] = 0u;
        }
        return true;
    }
    void release_all() {
        pressed_at_.fill(0u);
        presses_ = 0u;
        x_ = y_ = 0.0f;
    }

    // Buttons currently held, with opposite D-pad directions resolved.
    [[nodiscard]] std::uint32_t buttons() const {
        std::uint32_t result = 0u;
        for (std::size_t i = 0; i < kControlCount; ++i)
            if (kControlBits[i] != 0u && held(static_cast<Control>(i)) != 0u) result |= kControlBits[i];
        const auto resolve = [&](Control a, Control b) {
            const auto first = held(a), second = held(b);
            if (first != 0u && second != 0u)
                result &= ~kControlBits[static_cast<std::size_t>(first > second ? b : a)];
        };
        resolve(Control::Left, Control::Right);
        resolve(Control::Up, Control::Down);
        return result;
    }
    // Analog target in -1..1 (y positive = down, the PSP convention).
    [[nodiscard]] std::pair<float, float> stick_target() const {
        const auto axis = [&](Control negative, Control positive) {
            const auto low = held(negative), high = held(positive);
            if (low == 0u && high == 0u) return 0.0f;
            return high > low ? 1.0f : -1.0f;
        };
        return {axis(Control::StickLeft, Control::StickRight), axis(Control::StickUp, Control::StickDown)};
    }

    // Samples the pad once per guest read. Presses that started and ended
    // since the previous sample still reach the game once.
    [[nodiscard]] PadInput sample(float elapsed_ms) {
        const auto [target_x, target_y] = stick_target();
        x_ = approach(x_, target_x, elapsed_ms);
        y_ = approach(y_, target_y, elapsed_ms);
        PadInput result;
        result.buttons = buttons() | presses_;
        presses_ = 0u;
        result.x = psp_axis(x_);
        result.y = psp_axis(y_);
        return result;
    }

private:
    // Sequence number of the most recent held key bound to control (0 = up).
    [[nodiscard]] std::uint64_t held(Control control) const {
        std::uint64_t latest = 0u;
        for (const auto code : bindings_[static_cast<std::size_t>(control)])
            latest = std::max(latest, pressed_at_[code]);
        return latest;
    }
    [[nodiscard]] float approach(float value, float target, float elapsed_ms) const {
        if (ramp_ms_ <= 0.0f) return target;
        if (value * target < 0.0f) value = 0.0f;  // counter-steer starts from the centre
        const float step = std::clamp(elapsed_ms, 0.0f, 100.0f) / ramp_ms_;
        return value < target ? std::min(target, value + step) : std::max(target, value - step);
    }

    KeyboardBindings bindings_;
    float ramp_ms_{};
    std::array<std::uint64_t, kKeyCodeCount> pressed_at_{};
    std::uint64_t sequence_{};
    std::uint32_t presses_{};
    float x_{}, y_{};
};

// ---------------------------------------------------------------------------
// Gamepads. Buttons are positional (SDL_GamepadButton order, so the bottom
// face button is Cross on every controller), plus the two analog triggers as
// virtual buttons.

enum class PadButton : std::uint8_t {
    South, East, West, North, Back, Guide, Start, LeftStick, RightStick, LeftShoulder, RightShoulder,
    DpadUp, DpadDown, DpadLeft, DpadRight, Misc1, RightPaddle1, LeftPaddle1, RightPaddle2, LeftPaddle2,
    Touchpad, LeftTrigger, RightTrigger, Count
};
inline constexpr std::size_t kPadButtonCount = static_cast<std::size_t>(PadButton::Count);
inline constexpr std::array<std::string_view, kPadButtonCount> kPadButtonNames{
    "south", "east", "west", "north", "back", "guide", "start", "leftstick", "rightstick",
    "leftshoulder", "rightshoulder", "dpup", "dpdown", "dpleft", "dpright", "misc1",
    "rightpaddle1", "leftpaddle1", "rightpaddle2", "leftpaddle2", "touchpad", "lefttrigger", "righttrigger"};
[[nodiscard]] inline constexpr std::uint32_t pad_bit(PadButton button) {
    return 1u << static_cast<unsigned>(button);
}

struct GamepadState {
    std::uint32_t buttons{};  // pad_bit() mask; the trigger bits are derived by map_gamepad
    std::int16_t left_x{}, left_y{}, right_x{}, right_y{};  // SDL convention: y positive = down
    std::int16_t left_trigger{}, right_trigger{};           // 0..32767
};

using PadBindings = std::array<std::uint32_t, kControlCount>;  // pad_bit mask per control

[[nodiscard]] inline PadBindings default_pad_bindings() {
    PadBindings bindings{};
    const auto set = [&](Control control, std::initializer_list<PadButton> buttons) {
        for (const auto button : buttons) bindings[static_cast<std::size_t>(control)] |= pad_bit(button);
    };
    set(Control::Up, {PadButton::DpadUp}); set(Control::Down, {PadButton::DpadDown});
    set(Control::Left, {PadButton::DpadLeft}); set(Control::Right, {PadButton::DpadRight});
    set(Control::Cross, {PadButton::South}); set(Control::Circle, {PadButton::East});
    set(Control::Square, {PadButton::West}); set(Control::Triangle, {PadButton::North});
    set(Control::L, {PadButton::LeftShoulder, PadButton::LeftTrigger});
    set(Control::R, {PadButton::RightShoulder, PadButton::RightTrigger});
    set(Control::Start, {PadButton::Start}); set(Control::Select, {PadButton::Back, PadButton::Touchpad});
    return bindings;
}

[[nodiscard]] inline std::optional<std::uint32_t> parse_pad_list(std::string_view text, std::string *error = nullptr) {
    std::uint32_t mask = 0u;
    const auto items = input_detail::split_list(text, ',');
    if (items.size() == 1u && (items[0].empty() || items[0] == "none")) return mask;
    for (const auto &item : items) {
        const auto found = std::find(kPadButtonNames.begin(), kPadButtonNames.end(), item);
        if (found == kPadButtonNames.end()) {
            if (error) *error = "unknown controller button '" + item + "'";
            return std::nullopt;
        }
        mask |= 1u << static_cast<unsigned>(found - kPadButtonNames.begin());
    }
    return mask;
}

[[nodiscard]] inline PadBindings parse_pad_bindings(std::string_view text) {
    auto bindings = default_pad_bindings();
    for (const auto &entry : input_detail::split_list(text, ';')) {
        const auto equals = entry.find('=');
        if (equals == std::string::npos) continue;
        const auto control = control_from_name(input_detail::trim(std::string_view(entry).substr(0u, equals)));
        const auto mask = parse_pad_list(std::string_view(entry).substr(equals + 1u));
        if (control && !is_stick(*control) && mask) bindings[static_cast<std::size_t>(*control)] = *mask;
    }
    return bindings;
}

struct GamepadSettings {
    PadBindings bindings{default_pad_bindings()};
    float deadzone{0.24f};          // radial, fraction of full deflection
    float trigger_threshold{0.12f};  // fraction of full trigger travel
    bool right_stick{};              // drive the PSP nub from the right stick
};

// Radial deadzone rescaled so the nub still reaches its full range.
[[nodiscard]] inline std::pair<std::uint8_t, std::uint8_t> map_stick(std::int16_t x, std::int16_t y, float deadzone) {
    const float magnitude = std::hypot(static_cast<float>(x), static_cast<float>(y));
    const float inner = std::clamp(deadzone, 0.0f, 0.95f) * 32767.0f;
    if (magnitude <= inner || magnitude <= 0.0f) return {128u, 128u};
    const float strength = (std::min(magnitude, 32767.0f) - inner) / (32767.0f - inner);
    return {psp_axis(static_cast<float>(x) / magnitude * strength),
            psp_axis(static_cast<float>(y) / magnitude * strength)};
}

[[nodiscard]] inline PadInput map_gamepad(const GamepadState &state, const GamepadSettings &settings = {}) {
    std::uint32_t pressed = state.buttons & ~(pad_bit(PadButton::LeftTrigger) | pad_bit(PadButton::RightTrigger));
    const float threshold = std::clamp(settings.trigger_threshold, 0.01f, 1.0f) * 32767.0f;
    if (state.left_trigger > threshold) pressed |= pad_bit(PadButton::LeftTrigger);
    if (state.right_trigger > threshold) pressed |= pad_bit(PadButton::RightTrigger);
    PadInput out;
    for (std::size_t i = 0; i < kControlCount; ++i)
        if ((settings.bindings[i] & pressed) != 0u) out.buttons |= kControlBits[i];
    const auto [x, y] = settings.right_stick ? map_stick(state.right_x, state.right_y, settings.deadzone)
                                             : map_stick(state.left_x, state.left_y, settings.deadzone);
    out.x = x;
    out.y = y;
    return out;
}

// XInput (Xbox) state in the same model; XInput's Y axis points up.
[[nodiscard]] inline GamepadState gamepad_from_xinput(std::uint16_t buttons, std::uint8_t left_trigger,
                                                      std::uint8_t right_trigger, std::int16_t lx, std::int16_t ly,
                                                      std::int16_t rx = 0, std::int16_t ry = 0) {
    GamepadState state;
    constexpr std::pair<std::uint16_t, PadButton> map[]{
        {0x0001u, PadButton::DpadUp}, {0x0002u, PadButton::DpadDown}, {0x0004u, PadButton::DpadLeft},
        {0x0008u, PadButton::DpadRight}, {0x0010u, PadButton::Start}, {0x0020u, PadButton::Back},
        {0x0040u, PadButton::LeftStick}, {0x0080u, PadButton::RightStick}, {0x0100u, PadButton::LeftShoulder},
        {0x0200u, PadButton::RightShoulder}, {0x1000u, PadButton::South}, {0x2000u, PadButton::East},
        {0x4000u, PadButton::West}, {0x8000u, PadButton::North}};
    for (const auto &[bit, button] : map)
        if ((buttons & bit) != 0u) state.buttons |= pad_bit(button);
    const auto invert = [](std::int16_t value) {
        return static_cast<std::int16_t>(std::clamp(-static_cast<int>(value), -32768, 32767));
    };
    state.left_x = lx; state.left_y = invert(ly);
    state.right_x = rx; state.right_y = invert(ry);
    state.left_trigger = static_cast<std::int16_t>(left_trigger * 32767 / 255);
    state.right_trigger = static_cast<std::int16_t>(right_trigger * 32767 / 255);
    return state;
}

[[nodiscard]] inline PadInput map_xinput(std::uint16_t buttons, std::uint8_t left_trigger,
                                         std::uint8_t right_trigger, std::int16_t lx, std::int16_t ly) {
    return map_gamepad(gamepad_from_xinput(buttons, left_trigger, right_trigger, lx, ly));
}

// Keyboard and controllers together: buttons combine, and each nub axis takes
// whichever source is deflected further.
[[nodiscard]] inline PadInput merge_inputs(const PadInput &a, const PadInput &b) {
    PadInput result = a;
    result.buttons |= b.buttons;
    const auto pick = [](std::uint8_t first, std::uint8_t second) {
        return std::abs(int(second) - 128) > std::abs(int(first) - 128) ? second : first;
    };
    result.x = pick(a.x, b.x);
    result.y = pick(a.y, b.y);
    result.connected = a.connected || b.connected;
    if (!a.connected && b.connected) { result.slot = b.slot; result.packet = b.packet; }
    return result;
}

} // namespace motorstorm
