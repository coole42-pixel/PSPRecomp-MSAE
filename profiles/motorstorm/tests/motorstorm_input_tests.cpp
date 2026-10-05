// Keyboard and controller mapping, INI options and the rumble model. None of
// these need a controller or a window: device code only feeds these functions.

#include "motorstorm_config.hpp"
#include "motorstorm_input.hpp"
#include "motorstorm_rumble.hpp"

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string>

namespace {
using namespace motorstorm;
namespace pb = psp_button;

void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
std::uint16_t key(const char *name) { return *key_from_name(name); }
PadInput press(PadButton button) {
    GamepadState state;
    state.buttons = pad_bit(button);
    return map_gamepad(state);
}

void gamepad_tests() {
    check(press(PadButton::South).buttons == pb::kCross && press(PadButton::East).buttons == pb::kCircle &&
              press(PadButton::West).buttons == pb::kSquare && press(PadButton::North).buttons == pb::kTriangle,
          "Face buttons are positional: bottom = Cross on every controller");
    check(press(PadButton::DpadUp).buttons == pb::kUp && press(PadButton::DpadDown).buttons == pb::kDown &&
              press(PadButton::DpadLeft).buttons == pb::kLeft && press(PadButton::DpadRight).buttons == pb::kRight,
          "D-pad maps to the PSP D-pad");
    check(press(PadButton::LeftShoulder).buttons == pb::kL && press(PadButton::RightShoulder).buttons == pb::kR &&
              press(PadButton::Start).buttons == pb::kStart && press(PadButton::Back).buttons == pb::kSelect &&
              press(PadButton::Touchpad).buttons == pb::kSelect && press(PadButton::Guide).buttons == 0u,
          "Shoulders, Start, Back/touchpad map; Guide stays with the system");
    GamepadState triggers;
    triggers.left_trigger = triggers.right_trigger = 3900;  // just under 12 %
    check(map_gamepad(triggers).buttons == 0u, "Light trigger pressure stays below the threshold");
    triggers.left_trigger = triggers.right_trigger = 4000;
    check(map_gamepad(triggers).buttons == (pb::kL | pb::kR), "Analog triggers press L / R");
    GamepadSettings low_threshold;
    low_threshold.trigger_threshold = 0.05f;
    triggers.left_trigger = triggers.right_trigger = 2000;
    check(map_gamepad(triggers, low_threshold).buttons == (pb::kL | pb::kR), "Trigger threshold is configurable");

    GamepadState stick;
    stick.left_x = 32767;
    stick.left_y = 32767;  // SDL: down is positive
    auto out = map_gamepad(stick);
    check(out.x > 200u && out.y > 200u, "SDL stick axes keep PSP orientation (down = 255)");
    stick.left_x = -32768; stick.left_y = 0;
    check(map_gamepad(stick).x == 0u, "Full left reaches 0");
    stick.left_x = 7000; stick.left_y = 0;
    check(map_gamepad(stick).x == 128u, "Stick deadzone holds the nub centred");
    GamepadSettings no_deadzone;
    no_deadzone.deadzone = 0.0f;
    check(map_gamepad(stick, no_deadzone).x > 150u, "Deadzone is configurable");
    GamepadState right;
    right.right_x = 32767;
    check(map_gamepad(right).x == 128u, "Right stick is ignored by default");
    GamepadSettings right_stick;
    right_stick.right_stick = true;
    check(map_gamepad(right, right_stick).x == 255u, "stick = right drives the nub from the right stick");

    std::string error;
    check(parse_pad_list("leftshoulder, LeftTrigger", &error) ==
              (pad_bit(PadButton::LeftShoulder) | pad_bit(PadButton::LeftTrigger)),
          "Controller button lists parse case-insensitively");
    check(!parse_pad_list("leftshoulder, banana", &error) && error.find("banana") != std::string::npos,
          "Unknown controller buttons are reported");
    check(parse_pad_list("none") == 0u, "none unbinds a control");
    const auto custom = parse_pad_bindings("cross=east;circle=south;l=none");
    GamepadSettings swapped;
    swapped.bindings = custom;
    GamepadState south;
    south.buttons = pad_bit(PadButton::South) | pad_bit(PadButton::LeftShoulder);
    check(map_gamepad(south, swapped).buttons == pb::kCircle, "Custom controller bindings replace the defaults");

    // XInput fallback keeps the original translation.
    check(map_xinput(0x1000u, 0u, 0u, 0, 0).buttons == pb::kCross &&
              map_xinput(0u, 0u, 0u, 0, 32767).y == 0u && map_xinput(0u, 31u, 31u, 0, 0).buttons == (pb::kL | pb::kR),
          "XInput maps through the same tables (Y inverted, trigger threshold)");

    PadInput a, b;
    a.buttons = pb::kCross; a.x = 140u; a.y = 128u;
    b.buttons = pb::kR; b.x = 20u; b.y = 128u; b.connected = true; b.slot = 3u;
    const auto merged = merge_inputs(a, b);
    check(merged.buttons == (pb::kCross | pb::kR) && merged.x == 20u && merged.connected && merged.slot == 3u,
          "Merged input combines buttons and keeps the larger deflection");
}

void keyboard_tests() {
    check(key("W") == 0x11u && key("up") == 0x148u && key("NumEnter") == 0x11Cu && key("Return") == key("enter"),
          "Key names map to physical scan codes");
    check(!key_from_name("escape") && !key_from_name("f11"), "Escape and F11 are reserved");
    std::string error;
    check(!parse_key_list("space, nope", &error) && error.find("nope") != std::string::npos,
          "Unknown keys are reported");
    check(parse_key_list("none")->empty() && parse_key_list("Space, X, space")->size() == 2u,
          "Key lists accept none and drop duplicates");

    KeyboardMapper keyboard;
    check(!keyboard.key(key("m"), true), "Unbound keys are not consumed");
    keyboard.key(key("w"), true);
    keyboard.key(key("space"), true);
    check(keyboard.sample(16.0f).buttons == (pb::kR | pb::kCross), "W accelerates (R) and Space boosts (Cross)");
    keyboard.key(key("w"), false);
    keyboard.key(key("space"), false);
    check(keyboard.sample(16.0f).buttons == 0u, "Released keys release their buttons");

    // A tap shorter than the guest's sampling interval is reported once.
    keyboard.key(key("enter"), true);
    keyboard.key(key("enter"), false);
    check(keyboard.sample(16.0f).buttons == pb::kStart, "Tapped keys reach the game once");
    check(keyboard.sample(16.0f).buttons == 0u, "A tap is not repeated");

    // Analog ramp: 90 ms to full lock by default.
    keyboard.key(key("d"), true);
    auto out = keyboard.sample(45.0f);
    check(out.x > 180u && out.x < 200u, "Half the ramp time gives about half steering");
    out = keyboard.sample(60.0f);
    check(out.x == 255u, "The ramp reaches full lock");
    keyboard.key(key("a"), true);  // pressed last: wins, and starts from the centre
    out = keyboard.sample(10.0f);
    check(out.x < 128u && out.x > 100u, "Last pressed direction wins; counter-steer starts at the centre");
    keyboard.key(key("a"), false);
    out = keyboard.sample(200.0f);
    check(out.x == 255u, "Releasing the later key returns to the still-held direction");
    keyboard.key(key("d"), false);
    out = keyboard.sample(200.0f);
    check(out.x == 128u, "Releasing all steering centres the nub");

    keyboard.key(key("left"), true);
    keyboard.key(key("right"), true);
    check(keyboard.buttons() == pb::kRight, "Opposite D-pad keys resolve to the last pressed");
    keyboard.release_all();
    check(keyboard.buttons() == 0u && keyboard.sample(16.0f).buttons == 0u, "Focus loss releases every key");

    KeyboardMapper instant(default_keyboard_bindings(), 0.0f);
    instant.key(key("i"), true);
    check(instant.sample(1.0f).y == 0u, "Ramp 0 gives instant full deflection; stick_up is up (0)");

    const auto custom = parse_keyboard_bindings("cross=lshift;r=up,w;stick_left=none");
    KeyboardMapper remapped(custom);
    remapped.key(key("lshift"), true);
    remapped.key(key("up"), true);
    check(remapped.buttons() == (pb::kCross | pb::kR | pb::kUp) && !remapped.key(key("a"), true),
          "Custom keyboard bindings replace only the listed controls");
}

VehicleSample drive(double time, float z, std::uint32_t state = 0x08AA1750u, float boost = 0.0f, float y = 0.0f) {
    VehicleSample sample;
    sample.time = time; sample.racing = true; sample.vehicle = 0x09066A80u; sample.state = state;
    sample.x = 0.0f; sample.y = y; sample.z = z; sample.boost_distance = boost;
    return sample;
}

// Drives straight at speed for seconds; returns the last output.
RumbleOutput cruise(RumbleModel &model, double &time, float &z, float speed, double seconds, double fps,
                    unsigned *events = nullptr, float *boost = nullptr) {
    RumbleOutput out;
    for (double end = time + seconds; time < end;) {
        time += 1.0 / fps;
        z += speed / static_cast<float>(fps);
        if (boost) *boost += speed / static_cast<float>(fps);
        out = model.update(drive(time, z, 0x08AA1750u, boost ? *boost : 0.0f));
        if (events) *events |= model.events();
    }
    return out;
}

// Crash at fps: speed drops from 40 to 2 units/s within ~1/30 s.
float crash_peak(double fps) {
    RumbleModel model;
    double time = 100.0;
    float z = 0.0f;
    cruise(model, time, z, 40.0f, 2.0, fps);
    float peak = 0.0f;
    const int frames = static_cast<int>(std::lround(fps / 30.0));
    for (int i = 0; i < 20; ++i) {
        time += 1.0 / fps;
        const float speed = i < frames ? 40.0f - 38.0f * static_cast<float>(i + 1) / frames : 2.0f;
        z += speed / static_cast<float>(fps);
        peak = std::max(peak, model.update(drive(time, z)).low);
    }
    return peak;
}

void rumble_tests() {
    RumbleModel model;
    VehicleSample menu;
    menu.time = 1.0;
    check(model.update(menu).idle(), "Menus, countdown and pause never rumble");

    double time = 100.0;
    float z = 0.0f;
    unsigned events = 0u;
    auto out = cruise(model, time, z, 30.0f, 3.0, 30.0, &events);
    check(events == 0u && out.low > 0.03f && out.low < 0.12f && out.high < 0.08f && out.right_trigger == 0.0f,
          "Steady driving gives only a light road rumble");

    // Collision: 40 -> 2 units/s.
    const float peak30 = crash_peak(30.0), peak60 = crash_peak(60.0), peak120 = crash_peak(120.0);
    check(peak30 > 0.9f, "A crash produces a strong rumble");
    check(std::abs(peak60 - peak30) < 0.2f && std::abs(peak120 - peak30) < 0.25f,
          "Impact strength does not depend on the frame rate");

    // Small bumps stay subtle.
    {
        RumbleModel bumps;
        double t = 0.0;
        float bz = 0.0f, y = 0.0f, peak = 0.0f;
        for (int i = 0; i < 90; ++i) {
            t += 1.0 / 30.0;
            bz += 1.0f;
            y = (i % 15 == 0) ? 0.25f : 0.0f;  // occasional 7.5 units/s vertical jolts
            peak = std::max(peak, bumps.update(drive(t, bz, 0x08AA1750u, 0.0f, y)).low);
        }
        check(peak > 0.1f && peak < 0.75f, "Bumps rumble noticeably but well below a crash");
    }

    // Respawn teleport: no impact.
    {
        RumbleModel teleport;
        double t = 0.0;
        float tz = 0.0f;
        cruise(teleport, t, tz, 20.0f, 1.0, 30.0);
        t += 1.0 / 30.0;
        out = teleport.update(drive(t, tz + 35.0f));
        check((teleport.events() & rumble_event::kTeleport) && !(teleport.events() & rumble_event::kImpact) &&
                  out.low < 0.2f,
              "A respawn teleport is not an impact");
        t += 1.0 / 30.0;
        out = teleport.update(drive(t, tz + 35.0f));
        check(!(teleport.events() & rumble_event::kImpact) && out.low < 0.2f,
              "Stopping after a teleport is not an impact either");
    }

    // Jump: ballistic arc with gravity, then touchdown.
    {
        RumbleModel jump;
        double t = 0.0;
        float jz = 0.0f;
        cruise(jump, t, jz, 20.0f, 1.0, 30.0);
        float y = 0.0f, vy = 15.0f, air_road = 1.0f;
        unsigned seen = 0u;
        for (int i = 0; i < 60 && (i < 3 || y > 0.0f); ++i) {
            t += 1.0 / 30.0;
            jz += 20.0f / 30.0f;
            vy -= RumbleModel::kGravity / 30.0f;
            y += vy / 30.0f;
            out = jump.update(drive(t, jz, 0x08AA1750u, 0.0f, std::max(y, 0.0f)));
            if (i > 10) air_road = std::min(air_road, out.low);
            seen |= jump.events();
        }
        check(air_road < 0.01f, "No road rumble while airborne");
        float landing_peak = 0.0f;
        for (int i = 0; i < 3; ++i) {
            t += 1.0 / 30.0;
            jz += 20.0f / 30.0f;
            out = jump.update(drive(t, jz));
            seen |= jump.events();
            landing_peak = std::max(landing_peak, out.low);
        }
        check((seen & rumble_event::kLanding) && landing_peak > 0.7f, "Touchdown after a jump thumps");
    }

    // Touchdown recorded in a race (accelerate run, 158.7 s): falling at
    // -19.4 units/s, one frame of +0.3 units/s, then +17.8 units/s.
    {
        RumbleModel jump;
        double t = 0.0;
        float jz = 0.0f, y = 50.0f, vy = 0.0f;
        cruise(jump, t, jz, 15.0f, 1.0, 30.0);
        unsigned seen = 0u;
        const auto step = [&](float new_vy) {
            vy = new_vy;
            t += 1.0 / 30.0;
            jz += 0.5f;
            y += vy / 30.0f;
            const auto out = jump.update(drive(t, jz, 0x08AA1750u, 0.0f, y));
            seen |= jump.events();
            return out;
        };
        for (int i = 0; i < 40; ++i) step(vy - 9.6f / 30.0f);  // the measured fall
        step(vy + 0.3f);
        float peak = step(vy + 17.8f).low;
        peak = std::max(peak, step(vy).low);
        check((seen & rumble_event::kLanding) && peak > 0.6f, "A touchdown spread over two frames is a landing");
    }

    // Wreck and respawn through the vehicle state object.
    {
        RumbleModel wreck;
        double t = 0.0;
        float wz = 0.0f;
        cruise(wreck, t, wz, 30.0f, 2.0, 30.0);
        t += 1.0 / 30.0;
        wz += 1.0f;
        out = wreck.update(drive(t, wz, 0x08A9E2E0u));
        check((wreck.events() & rumble_event::kWreck) && out.low > 0.9f, "Wrecks rumble hard");
        // Tumbling in the wreck state does not become the driving state.
        unsigned seen = 0u;
        for (int i = 0; i < 150; ++i) {
            t += 1.0 / 30.0;
            wz += 0.3f;
            out = wreck.update(drive(t, wz, 0x08A9E2E0u));
            seen |= wreck.events();
        }
        check(out.low < 0.05f && !(seen & rumble_event::kWreck), "The wreck rumble fades and no road rumble plays");
        t += 1.0 / 30.0;
        wreck.update(drive(t, wz + 40.0f, 0x08AA1750u));
        check(wreck.events() & rumble_event::kRespawn, "Respawn returns to the driving state");
        t += 1.0 / 30.0;
        wz += 41.0f;
        wreck.update(drive(t, wz, 0x08A9E520u));
        check(wreck.events() & rumble_event::kWreck, "Other wreck states are recognised after a respawn");
    }

    // Boost: the game's distance-under-boost counter.
    {
        RumbleModel boost;
        double t = 0.0;
        float bz = 0.0f, distance = 0.0f;
        unsigned seen = 0u;
        const auto plain = cruise(boost, t, bz, 38.0f, 1.0, 60.0);
        const auto boosted = cruise(boost, t, bz, 44.0f, 1.0, 60.0, &seen, &distance);
        check((seen & rumble_event::kBoostStart) && boost.boosting() && boosted.high > plain.high + 0.25f &&
                  boosted.right_trigger > 0.5f,
              "Boost adds a high-frequency buzz and right-trigger rumble");
        seen = 0u;
        const auto after = cruise(boost, t, bz, 44.0f, 1.0, 60.0, &seen);
        check((seen & rumble_event::kBoostEnd) && after.right_trigger < 0.05f, "The boost buzz stops with the boost");
    }

    // A new race (another vehicle) restarts the model.
    {
        RumbleModel next;
        double t = 0.0;
        float nz = 0.0f;
        cruise(next, t, nz, 30.0f, 1.0, 30.0);
        auto sample = drive(t + 1.0 / 30.0, 5000.0f);
        sample.vehicle = 0x09100000u;
        check(next.update(sample).low < 0.2f && !(next.events() & rumble_event::kImpact),
              "A different vehicle starts fresh");
    }
}

void config_tests() {
    const auto shipped = load_native_config(MOTORSTORM_CONFIG_TEMPLATE);
    check(shipped.warnings.empty(), "Shipped INI has no unknown options");
    check(shipped.controller && shipped.rumble && shipped.trigger_rumble && shipped.controller_api == "auto" &&
              shipped.rumble_strength == 100u && shipped.controller_deadzone == 24u && shipped.trigger_threshold == 12u &&
              shipped.controller_stick == "left" && shipped.controller_bindings.empty(),
          "Shipped INI enables controllers and rumble with default mapping");
    check(shipped.keyboard && shipped.keyboard_ramp_ms == 90u, "Shipped INI enables the keyboard");
    // The shipped [keyboard] lines restate the built-in defaults.
    check(parse_keyboard_bindings(shipped.keyboard_bindings) == default_keyboard_bindings(),
          "Shipped keyboard bindings equal the defaults");

    const auto directory = std::filesystem::temp_directory_path() / "motorstorm_input_tests";
    std::filesystem::create_directories(directory);
    const auto path = directory / "input.ini";
    {
        std::ofstream file(path);
        file << "[controller]\nenabled=false\napi=XInput\nrumble=off\nrumble_strength=40\ntrigger_rumble=false\n"
                "deadzone=10\ntrigger_threshold=30\nstick=Right\ncross = East, RightTrigger ; boost\n"
                "[keyboard]\nenabled=false\nanalog_ramp_ms=0\nr = Up\nstick_left = J, Left\n";
    }
    const auto custom = load_native_config(path);
    check(!custom.controller && custom.controller_api == "xinput" && !custom.rumble && custom.rumble_strength == 40u &&
              !custom.trigger_rumble && custom.controller_deadzone == 10u && custom.trigger_threshold == 30u &&
              custom.controller_stick == "right",
          "[controller] options load");
    check(parse_pad_bindings(custom.controller_bindings)[static_cast<std::size_t>(Control::Cross)] ==
              (pad_bit(PadButton::East) | pad_bit(PadButton::RightTrigger)),
          "[controller] bindings reach the runtime form");
    const auto keys = parse_keyboard_bindings(custom.keyboard_bindings);
    check(!custom.keyboard && custom.keyboard_ramp_ms == 0u &&
              keys[static_cast<std::size_t>(Control::R)] == KeyList{key("up")} &&
              keys[static_cast<std::size_t>(Control::StickLeft)] == (KeyList{key("j"), key("left")}) &&
              keys[static_cast<std::size_t>(Control::Cross)] == default_keyboard_bindings()[static_cast<std::size_t>(Control::Cross)],
          "[keyboard] bindings override only listed controls");
    const auto rejects = [&](const char *text) {
        {
            std::ofstream file(path);
            file << text;
        }
        try {
            (void)load_native_config(path);
        } catch (const std::runtime_error &) {
            return true;
        }
        return false;
    };
    check(rejects("[keyboard]\ncross = Escape\n"), "Escape cannot be bound");
    check(rejects("[keyboard]\ncross = Spacebar\n"), "Unknown key names are rejected");
    check(rejects("[controller]\nl = leftbumper\n"), "Unknown controller buttons are rejected");
    check(rejects("[controller]\nrumble_strength = 150\n"), "Rumble strength is a percentage");
    check(rejects("[controller]\nstick = middle\n"), "Stick must be left or right");
    {
        std::ofstream file(path);
        file << "[controller]\nstick_left = dpleft\n";
    }
    check(!load_native_config(path).warnings.empty(), "Stick directions are keyboard-only options");

    _putenv_s("PSPRECOMP_MOTORSTORM_RUMBLE_STRENGTH", "");
    _putenv_s("PSPRECOMP_MOTORSTORM_KEYBOARD_BINDINGS", "");
    _putenv_s("PSPRECOMP_MOTORSTORM_CONTROLLER_BINDINGS", "");
    apply_native_config(custom);
    check(std::string(std::getenv("PSPRECOMP_MOTORSTORM_RUMBLE_STRENGTH")) == "40" &&
              std::string(std::getenv("PSPRECOMP_MOTORSTORM_KEYBOARD_BINDINGS")) == custom.keyboard_bindings &&
              std::string(std::getenv("PSPRECOMP_MOTORSTORM_CONTROLLER_API")) == "xinput",
          "Input options reach the runtime environment");
    std::filesystem::remove_all(directory);
}
} // namespace

int main() {
    try {
        gamepad_tests();
        keyboard_tests();
        rumble_tests();
        config_tests();
        std::puts("MotorStorm keyboard, controller, rumble and input configuration tests passed");
        return 0;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "[FAIL] %s\n", error.what());
        return 1;
    }
}
