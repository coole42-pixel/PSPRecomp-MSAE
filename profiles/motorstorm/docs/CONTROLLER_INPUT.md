# Controllers, rumble and keyboard

MotorStorm: Arctic Edge reads the PSP pad through `sceCtrlReadBufferPositive`:
a 16-bit button word and one analog nub. The native build fills that record
from every connected game controller and the keyboard at the same time, and
adds controller rumble, which the PSP never had.

| Part | Source |
| --- | --- |
| Mapping, keyboard state, INI parsing (pure, unit-tested) | `host/motorstorm_input.hpp` |
| Controller thread: SDL3 backend, XInput fallback, rumble output | `host/motorstorm_controller.cpp` |
| Rumble model (vehicle telemetry to motor levels) | `host/motorstorm_rumble.hpp` |
| Per-frame vehicle sampling | `update_rumble` in `host/motorstorm_hle.cpp` |
| Keyboard messages, focus | `host/motorstorm_window.cpp` |
| Tests | `tests/motorstorm_input_tests.cpp`, `tests/motorstorm_window_tests.cpp` |

## Controllers

[SDL3](../third_party/SDL3/README.md) 3.4.18 is the controller backend. Through
its HIDAPI, XInput, Windows.Gaming.Input, GameInput and RawInput drivers it
supports Xbox 360 / One / Series pads, DualShock 3 / 4, DualSense (USB and
Bluetooth), Switch Pro and Joy-Con, 8BitDo, Steam controllers and generic
DirectInput / HID pads described by SDL's controller database. A community
`gamecontrollerdb.txt` placed beside `MotorStormNative.exe` adds mappings for
unusual pads.

A dedicated thread polls every 4 ms. It handles hotplug events and maps each pad
to the PSP layout. Every pad drives the game at once (buttons combine, and the
nub takes the most deflected stick). Buttons pressed between two guest reads
are latched, so a quick tap is never lost. Rumble goes to the pad that last
had a button pressed.

SDL3.dll is delay-loaded from the executable's folder. If it is missing (or
older than 3.2.0), the same thread falls back to XInput, which supports
Xbox-compatible pads only, including rumble. `[controller] api` forces either
backend.

Default mapping (positional, so the bottom face button is Cross on every pad):

| PSP | Controller |
| --- | --- |
| Cross / Circle / Square / Triangle | bottom / right / left / top face button |
| L / R | left bumper or trigger / right bumper or trigger |
| Start / Select | Start (Menu, Options, +) / Back (View, Share, −) or touchpad click |
| D-pad | D-pad |
| Analog nub | left stick (`stick = right` selects the right stick) |

In the game's default "MotorStorm" control scheme R accelerates, L brakes and
Cross boosts, so the triggers drive and the bottom face button boosts. The stick
has a radial 24 % deadzone and is rescaled to the full nub range. The
triggers count as pressed beyond 12 % of their travel. Both values are
configurable.

## Keyboard

Keys are matched by **scan code** (physical position), not by the character
they type. WASD therefore stays under the same fingers on AZERTY, QWERTZ and
Dvorak layouts. Names in the INI follow the US layout. Extended keys are told
apart: the arrow keys are not the numpad digits, and right Ctrl is not left
Ctrl.

| Action | Default keys | PSP |
| --- | --- | --- |
| Accelerate | W, E | R |
| Brake / reverse | S, Q | L |
| Steer | A / D | analog left / right |
| Lean forward / back | I / K | analog up / down |
| Boost, confirm | Space, X | Cross |
| Back, respawn | C, Backspace | Circle |
| | V | Square |
| | F | Triangle |
| Pause | Enter, P | Start |
| | Tab | Select |
| Menus | arrow keys | D-pad |

Steering from keys ramps to full lock over `analog_ramp_ms` (90 ms), so a
short tap gives a partial steer. Reversing direction passes the centre at once.
When two opposite directions are held, the most recently pressed one wins, and
releasing it returns to the one still held. This applies to the D-pad as well.
Losing window focus releases every key. Escape, F11, Alt+Enter and Alt+F4 keep
their window functions and cannot be bound.

## Rumble

The PSP has no vibration motor, so the game never requests any. The rumble is
synthesized from the player vehicle once per displayed frame, and only while a
race is running (scene `0x08A76064`). The countdown, pause menu, other menus,
loading screens and movies stay still.

### Guest data

Found by dumping the race objects every frame during scripted races (throttle
only, boost only, throttle then boost, deliberate crashes) and correlating
fields with the inputs and the motion:

| Address | Meaning |
| --- | --- |
| `*(0x08A9E2AC)` | race object |
| race `+4444` | player object |
| player `+8` | vehicle object |
| vehicle `+32` → `+48/+52/+56` | position (float x, y, z) |
| vehicle `+704` | state object: `0x08AA1750` driving, `0x08A9E2E0` and `0x08A9E520` wrecked |
| player `+172` | distance this life |
| player `+216` | race time (s) |
| player `+228` | **distance travelled under boost**: advances only while nitro fires |
| player `+240` | longest single boost distance |
| race `+56 + 296·n` | lap progress (0..1) of racer *n* |

The game updates the boost counter itself, so the rumble does not depend on
which button is bound to boost. It was verified with the default "MotorStorm"
scheme (Cross boosts), where it stays flat under throttle alone; the "classic"
scheme was not recorded. Boost raises top speed from ~38 to ~46 units/s.

The engine-heat gauge was not found in these objects. Overheating explosions
therefore rumble as wrecks, with no warning build-up beforehand.

### Effects

Game units are about one metre and gravity is ~14.7 units/s². Velocities come
from position differences over guest time, so every effect behaves the same at
30, 60 or 120 fps (unit-tested).

| Effect | Trigger | Motors |
| --- | --- | --- |
| Impact | velocity change summed with a 50 ms decay, above 4 units/s; full at 26 | both, strongest low; left trigger |
| Landing | ≥0.25 s of free fall, then upward velocity change summed over 150 ms | low thump, scaled by air time |
| Wreck | vehicle leaves its driving state object | both at full, fading over ~1 s |
| Boost | boost distance counter advances | high-frequency buzz; right trigger |
| Road | speed while on the ground | light, both motors (≤10 %) |

Calibration from the recorded races (30 fps): per-frame velocity change while
driving has a median of 0.3 units/s and a 95th percentile of 0.9. Bumps and
landings reach 7 to 18, and crashes 20 to 40 spread over two to four frames.
Respawns teleport the vehicle (over 600 units/s), so speeds above 150 units/s
reset the history instead of rumbling. A tumbling wreck never becomes the
reference "driving" state: another state is adopted only after 3 s above
20 units/s.

Requests expire after 250 ms, so a stalled or paused guest never leaves a pad
vibrating. SDL effects also carry a 160 ms duration, refreshed every 80 ms.
Rumble pauses while the window is in the background. Bluetooth PlayStation
pads switch to their rumble-capable report mode only when rumble is first
played (`SDL_HINT_JOYSTICK_ENHANCED_REPORTS=auto`).

### Verification

`[debug] trace_rumble = true` logs each event. In the recorded races, every
wreck was logged on the frame where the state object changed (128.6, 143.2,
159.2 and 175.2 s in the boost run; 129.0, 136.7, 147.0 and 166.4 s in the
throttle run). Boost started and stopped with the boost button (133.2 to
135.0 s). Throttle alone produced no boost events. All respawns were classified
as teleports, without impact. The 3.3 s jump in the throttle run landed at
158.7 s with a full low-motor thump.

To repeat the capture:

```powershell
$env:PSPRECOMP_MOTORSTORM_TRACE_RUMBLE = '1'
./profiles/motorstorm/tools/bench-race.ps1 -Name rumble -InputScript out/motorstorm/input-crash.txt -StartUs 60000000 -EndUs 145000000
Select-String out/motorstorm/bench/rumble.log -Pattern RUMBLE
```

`PSPRECOMP_MOTORSTORM_VEHICLE_DUMP=<file>` writes one record per race frame for
further reverse engineering. Each record is a 48-byte header (guest µs as two
u32, frame, scene, race, player, vehicle, motion, recovery and camera pointers,
pad word with the nub X/Y in bits 16–31, reserved) followed by the race (8192
bytes), player (1024), vehicle (4096), motion (512), recovery (1024) and camera
(512) objects.

## Configuration

`[controller]` and `[keyboard]` in `MotorStormNative.ini` hold every option.
The shipped INI documents them all. Each PSP control accepts a comma-separated
list of keys or controller buttons; `none` unbinds a control. Unknown names are
reported with their line number. Environment overrides:

| Variable | Meaning |
| --- | --- |
| `PSPRECOMP_MOTORSTORM_CONTROLLER` | 0 disables controllers (`PSPRECOMP_MOTORSTORM_XINPUT=0` still works) |
| `PSPRECOMP_MOTORSTORM_CONTROLLER_API` | auto, sdl or xinput |
| `PSPRECOMP_MOTORSTORM_RUMBLE`, `_RUMBLE_STRENGTH`, `_TRIGGER_RUMBLE` | rumble on/off, percent, impulse triggers |
| `PSPRECOMP_MOTORSTORM_DEADZONE`, `_TRIGGER_THRESHOLD` | percent |
| `PSPRECOMP_MOTORSTORM_CONTROLLER_STICK` | left or right |
| `PSPRECOMP_MOTORSTORM_CONTROLLER_BINDINGS`, `_KEYBOARD_BINDINGS` | `cross=south;l=lefttrigger` |
| `PSPRECOMP_MOTORSTORM_KEYBOARD`, `_KEYBOARD_RAMP_MS` | keyboard on/off, steering ramp |

`run.ps1 -Controller auto|sdl|xinput|off -Rumble on|off` overrides the INI for
one run. `MotorStormNative.exe --input-probe [--rumble]` prints the backend and
ten seconds of combined controller input. With `--rumble`, every button press
also plays a short rumble.

## Tests and limits

`motorstorm_input_tests` covers the controller mapping (positional faces,
triggers, deadzone, right stick, custom bindings, XInput translation) and the
keyboard (scan-code names, reserved keys, tap latching, analog ramp, last-press
priority, focus release). It also covers the rumble model: the
frame-rate-independent crash strength, bumps, teleports, airborne silence, a
landing replayed from the recorded race, wreck and respawn, boost start and
stop, and a new vehicle. Finally it checks the INI sections. `motorstorm_window_tests`
sends real `WM_KEYDOWN` messages with scan codes, for example AZERTY Z at the
W position, extended versus numpad arrows, a key without a scan code, and focus
loss.

The keyboard was also checked in the running game. A race was entered by
script, then held W and D key messages were posted to the game window. The
game received R and drove off, and the D tap ramped the nub
128 → 146 → 255 → 175 → 128.

No physical controller was attached to the development machine. Controller
detection, the button layout on real pads and the feel of the rumble therefore
still need a hands-on check. `--input-probe --rumble` is the quickest way to
do it.
