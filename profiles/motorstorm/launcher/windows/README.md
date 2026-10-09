# MotorStorm: Arctic Edge launcher (Windows)

A WPF launcher for single player and private multiplayer rooms. It hosts or joins with one
**join code** that also works with the Android launcher (format: `../../docs/MULTIPLAYER_JOIN_CODE.md`).

## Build

```powershell
./build.ps1                 # -> out/motorstorm/bin/Release/MotorStormLauncher.exe (needs .NET 10 Desktop Runtime)
./build.ps1 -SelfContained  # same place, no runtime needed on the other PC (~150 MB)
./build.ps1 -Tests          # also run the checks in tests/
```

The launcher finds `MotorStormNative.exe` next to itself, in parent folders, or in
`out/motorstorm/bin/Release` of the repository; "Change…" picks it by hand. Settings live in
`%APPDATA%\MotorStormLauncher\settings.json`.

## Game files and settings

Open **Game ISO · EBOOT · Texture pack · Settings…** above the game location.

* **Game ISO:** Browse imports an uncompressed ISO9660 `.iso` in the background into
  `%LOCALAPPDATA%\MotorStormLauncher\Games\<import-id>\disc0`. Failed imports leave the current
  selection intact. Save settings selects the imported data; Cancel discards the new import.
  CSO images are not supported. The source ISO is not needed after import.
* **EBOOT:** Select the matching decrypted ELF `.bin` or `.elf` for this recompiled game build.
  The encrypted EBOOT inside a retail ISO is not usable; ISO import does not decrypt it.
* **Extracted disc folder:** Alternatively select an existing folder containing `PSP_GAME/PARAM.SFO`.
* **Texture pack:** Select an extracted folder containing hash-named PNG/DDS replacements.
  Set **Texture replacements** to **On**; adjust its memory budget if needed. Extract ZIPs first.
* **Runtime settings:** Choose renderer, internal resolution, anti-aliasing, FPS, dynamic FPS,
  VSync, filtering, widescreen, render distance, race enhancements, window/fullscreen mode,
  audio, controller support, and rumble. **Default (value)** shows the setting from
  `MotorStormNative.ini` beside the selected game executable, falling back to the
  native built-in value when absent. Selecting it continues to use the INI.
  The reset button returns runtime options to the INI defaults. Fullscreen is controlled by
  the main window switch. Empty file paths use the existing native game setup.

Settings apply to the next solo, host, or join launch. Game files and settings cannot be
changed while a game launched here is running. Saved selections are validated before launch.
Imported disc folders selected in earlier sessions are kept so replacing an ISO does not remove
previous game data.

**Skip intro (start at Press Start)** bypasses startup warnings, logos and intro
movies. Required startup settings/localization/font loading still runs; the
normal title screen waits for your input. On/Off overrides `[game] skip_intro` in
the native INI; Default uses the INI value (false in the shipped config).

## Racing

1. **Host:** Host a race › choose who's racing › Start Hosting. The join code is copied.
   * *Same Wi-Fi:* the code carries this PC's LAN address and port (default 47900).
   * *Internet:* forward UDP 47900 on the router to this PC; "Detect" fills in the public address
     (asks api.ipify.org, only when pressed). Does not work behind mobile-data/CGNAT.
   * *Room server:* everyone uses the same `psp_net_rendezvous` server (hole punching, relay fallback).
   * "Allow through firewall" adds an inbound UDP rule for the game (asks for administrator rights).
2. **Join:** Join a race › paste the code or the whole invite message › Join Race.
   Android players: Multiplayer › Paste join code. An Android host's "Share join code" pastes here.
3. In both games: Wreckreation › Multiplayer › Ad-hoc › Create Game (host) / Join Game.

The status strip follows the game's `[NET]` log lines (the launcher pins the log to
`MotorStormNative.log` next to the game with `PSPRECOMP_MOTORSTORM_LOG`): room open, player joined,
connected to host, lost connection. "Show log" lists them.

## Files

| | |
|---|---|
| `Core/InviteCode.cs`, `Core/JoinCode.cs` | invite codec and join-code parser (same as Android) |
| `Core/GameSession.cs` | finds, starts and watches the game; environment per role |
| `Core/NetworkInfo.cs`, `Core/LauncherSettings.cs` | LAN/public address, saved preferences |
| `MainWindow.xaml`, `Theme.xaml`, `SnowField.cs` | UI |
| `tests/` | console checks; `join`/`norm` stdin modes for diffing with the Java parser; `smoke` starts a real host and joiner |

`MotorStormLauncher.exe --screenshot out.png [join|settings]` renders the window to a PNG and exits.
