# Race HUD and camera dropout

Verified 2026-10-03.

## Root cause

The GE command interpreter silently stopped after 65,536 commands, counting
commands in called sub-lists as well as the main list. Detailed race scenes
exceed that limit before the final vehicle and HUD passes. The incomplete frame
could therefore show an intermediate world camera, omit the player and HUD, and
lose its FINISH interrupt. `sceGeDrawSync` still reported success and presented it.

The user's live controller session was recorded and replayed. The old replay
contains HUD-free frames during normal camera mode 4, before any wreck-camera
transition: examples are captures 268–289 and 351–382 under
`out/motorstorm/hud-camera-exact-replay`. The earlier crash-only reproduction did
not establish the cause of this separate rendering fault.

## Repair

- `motorstorm_ge.cpp` permits up to 1,048,576 commands per execution. Exhausting
  that malformed-list guard now throws an explicit error instead of publishing
  a partial frame as completed.
- The GE summary records `max_commands_per_list`, including called sub-lists.
- GPU frame dumps capture the display framebuffer used by `window_present`.
  Previously they captured the GE's last target, which could be an intermediate
  pass. CPU dumps retain their documented last-GE-target behavior.
- Optional camera traces include player state and HUD visibility. The optional
  `PSPRECOMP_MOTORSTORM_INPUT_SCRIPT_LIVE_AFTER` guest timestamp lets menu
  automation hand control back to the live pad for manual reproduction.

## Verification

- A regression with a 70,000-command world sub-list followed by a HUD primitive
  and FINISH failed both assertions before the repair and passes afterward.
- A malformed two-node GE jump cycle raises the explicit safety-limit error.
- All three CTest suites pass. `motorstorm_profile_tests --d3d12` also passes,
  including the long-list regression. `motorstorm_gpu_tests` passes its native
  pixel comparisons and all 12 resolution/antialiasing combinations.
- The fixed replay of the recorded controls reached 5,000 GE submissions,
  `max_commands_per_list=99002`, and zero scheduler deadlocks. All 223 captured
  normal-camera frames outside transition boundaries retained the position/lap
  HUD; the old replay contains missing HUD frames in that state. Genuine wreck
  transitions remain distinguishable through the camera trace and visibility
  flags.

Evidence is under `out/motorstorm/hud-camera-investigation`,
`hud-camera-live`, `hud-camera-exact-replay`, and `hud-camera-fixed-replay`.
The replay uses an isolated copy of savedata; the user's original save is intact.

Both staged executables (`MotorStormNative.exe` and its Phase12 alias) have
SHA-256 `6DDF1974D1C62C8344E41850A169675ADA45BCCB61A78BA414C6EF29AD4267EF`.

Launch the repaired build with `./profiles/motorstorm/run.ps1`.
