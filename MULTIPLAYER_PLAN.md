# Multiplayer plan

Goal: Windows and Android users host private races and invite players worldwide without
Sony servers, by recovering the game's original PSP ad-hoc behaviour (`sceNetAdhoc*`)
rather than rewriting race synchronisation.

Legend: **VERIFIED** = exercised by an automated test or a real run in this session.
**UNVERIFIED** = written/compiled but not exercised. **TODO** = not started.

## Headline status (updated 2026-10-09)

| Area | Status |
|---|---|
| Thin UDP transport, encryption/authentication, fragmentation, IPv4/IPv6, rendezvous/relay | **VERIFIED** (see sections below) |
| PSP ad-hoc engine + game glue | **VERIFIED in the real game** (below) |
| **Two real game instances on one PC: lobby, join, waiting room, 2-player race** | **VERIFIED** |
| **Cross-instance race state** (joiner drives -> its rank flips to 1/2 and the idle host's to 2/2) | **VERIFIED** (one scripted observation) |
| **PC host <-> OnePlus 12 (Android build, real Wi-Fi) through lobby, vehicle select, waiting room, race start** | **VERIFIED** (one scripted run) |
| Android launcher UI (Multiplayer dialog, invite generate/copy/share, INTERNET permission) | built, installed and exercised through the same code path; **UI not clicked through by a person** |
| Synchronisation correctness over a full race (desync, lap times, collisions, finish) | **UNKNOWN** - only the first minute of a race was observed |
| Hole punching / relay on real NATs | **UNVERIFIED** (simulated NATs + loopback only) |

## First real run (what actually happens in the game)

Reaching it (all scripted through the game's input script; screenshots read by me):
Wreckreation > Multiplayer > **Adhoc** > Create Game / Join Game. The HLE was enough to get the real
netconf dialog, `PdpCreate`, lobby discovery, join, waiting room, countdown and race start.

Three emulator gaps had to be fixed on the way (none are multiplayer logic):
1. `madd`/`maddu`/`msub`/`msubu` were not lowered by the code generator (87 sites); the lobby hit one at
   0x08A449B0. Decoder + lowering added, unit regenerated (32 units), decoder test added.
2. `0x089C3ABC` is a function the static analysis cannot find (reached through a runtime pointer). Added
   a generator option `--extra-seeds` and `profiles/motorstorm/config/extra_function_seeds.txt` (7 units).
3. `sceWlanGetEtherAddr` (the game derives a per-player id from its low 4 bytes) is now answered with the
   same virtual MAC the ad-hoc layer uses.
The generated corpus also contains two hand-edited units (0038, 0318: exact VRAM queries); regeneration was
applied only to the units that changed because of the above.

Also found: `PSPRECOMP_MOTORSTORM_SKIP_MOVIE` leaves the game's stream thread waiting forever after the
profile loads ("stuck on the striped screen"). It is an existing diagnostic switch, unrelated to
multiplayer; do not use it for multiplayer runs.

Observed protocol, details in `profiles/motorstorm/docs/MULTIPLAYER_PSP_PROTOCOL.md`: broadcast discovery on
PDP port 3659 (160-byte query, 476-byte answer), 6-byte keepalives, a session handshake and 743/815-byte
state exchanges, then race traffic; the game uses non-blocking PDP polling only.

## Android

* Manifest: added `INTERNET` / `ACCESS_NETWORK_STATE` (without them no socket can be created).
* Launcher: **Multiplayer** dialog - Off / Host / Join, invite code (New / Copy / Share), optional room
  server, direct address for LAN, nickname, and the device's LAN address for hosts. Settings are validated
  on Save and again on Play, then handed to the native layer (`MultiplayerSettings` -> `--env`).
* Invite codec is a pure Java class cross-checked against the native one on 900 inputs (0 mismatches).
* **Device policy caveat:** a Xiaomi/HyperOS phone ("dizi") had this app marked `REJECT_ALL` in the system
  network policy, so every socket failed (`Connection refused`). Only the user can change that in the phone's
  per-app network settings; there is no adb command. The OnePlus 12 has no such restriction.
* Crash fixed: with multiplayer off (or unusable) the game used to stop at the first network import
  (`Missing HLE import sceNet::0x39AF39A6`), which on a phone looks like a crash. It now gets a refused
  network init and a netconf dialog that fails immediately; the game returns to its menu
  (`PSPRECOMP_MOTORSTORM_NET_STRICT=1` restores the loud stop).

## Architecture

```
guest game ── sceNetAdhoc / Adhocctl / Netconf imports ──► motorstorm_net_hle   (profile glue, opt-in)
                                                                │
                                      AdhocNode  (PDP sockets, MACs, group, star routing)    include/psprecomp/net/adhoc.hpp
                                                                │ channels 1 (control) / 2 (data)
                                      Endpoint   (handshake, AEAD, ack-vector reliability,   thin_udp.hpp
                                                  fragmentation, stats, logging)
                                                                │
              SignalingTransport (rendezvous / punch / relay)  rendezvous.hpp
                                                                │
                              IDatagramTransport:  UDP socket (IPv4+IPv6)  |  SimNetwork
```

Everything below `motorstorm_net_hle` is game-agnostic (`psprecomp_net`) and has no
third-party dependency. Nothing is linked into a run unless `PSPRECOMP_MOTORSTORM_NET`
is set, so single-player behaviour and render performance are unchanged by design.

## What was built and how it was checked

### 1. Transport (`src/net/thin_udp.cpp`)
Stateless-cookie handshake, 16-bit sequence + ack/ack-bits, unreliable and ordered
reliable messages with 16-bit channel tags, RTO + loss-driven retransmit, token-bucket send
cap, keepalive/timeouts, per-connection stats (RTT, loss, retransmits, duplicates,
auth failures, replays, fragments) and levelled logging.

* Loss detection works two ways: ack-window and ack-timeout (the window alone needs 33
  later packets, far too many at game packet rates).
* The receiver now acks early under bursts; before, a burst of >32 packets made delivered
  packets look lost (measured loss 40% vs 15% real).
* **Known limitation:** the measured loss figure still over-reports under large bursts
  (32-packet ack window). It is a diagnostic, not used for control.

### 2. Encryption and authentication (`src/net/crypto.cpp`, handshake in `thin_udp.cpp`)
* A private room is an **invite code**: 16 random bytes shown as 26 base32 characters.
  The invite is the pre-shared key. A rendezvous server only ever sees a one-way hash of it.
* Handshake: cookie -> `ConnectRequest` carries an ephemeral X25519 key and a keyed-BLAKE2s
  MAC proving the joiner knows the invite (host ignores wrong/missing MACs: no state, no
  reply) -> `ConnectOK` carries the host's ephemeral key and a MAC over the transcript
  (host authenticated to the joiner). Session keys = BLAKE2s(invite_psk, DH, both keys),
  one per direction. Forward secrecy against later invite leaks.
* Data: ChaCha20-Poly1305 with the packet header as AAD, 64-bit counter nonce, 64-wide
  replay window, authentication **before** any state changes (forged packets cannot
  refresh timeouts or poison the ack window). `Close` is authenticated too.
* Primitives implemented from RFCs and **checked against OpenSSL** (Python `cryptography`)
  and RFC 7748: BLAKE2s (11 vectors incl. keyed), ChaCha20-Poly1305 (10 vectors, every
  single-byte tamper rejected), X25519 (5 vectors, low-order points rejected), SipHash.
* Attack tests: plaintext never on the wire, nonce never reused, wrong invite cannot
  connect (host keeps no state), security-mode mismatch rejected, bit-flip tampering
  detected and repaired by retransmission, replay (immediate and after the window moved on)
  rejected, forged `Close` ignored, impostor `ConnectOK` ignored, spoofed MAC in ad-hoc
  frames dropped.
* **Not done:** independent security review; invite entropy is 128 bits but a leaked
  invite lets the holder join and impersonate the host to *new* joiners; no per-user
  identity; the relay/rendezvous server is not authenticated beyond room-owner secrets.

### 3. Message limits
Reliable messages up to 64 KiB (`Config::max_reliable_message`; the game's PDP maximum is
65519 bytes + 16-byte header, the HLE raises it to 70000) are split into fragments of the
ordered stream and reassembled; oversize and out-of-window cases are rejected without
truncation. Unreliable messages are single-packet (1178 B). Bursts are queued inside
`AdhocNode` with backpressure: `PdpSend` returns a "no space" error only when an 8 MiB
backlog is full.

### 4. Addressing and portability
`NetAddr` holds 16 bytes (IPv6, IPv4 as v4-mapped); the socket is dual-stack with an IPv4
fallback. Verified: parse/format, real loopback UDP over IPv4 **and** IPv6, Windows (MSVC
/W4) and Android arm64 (NDK 27, clang).

**Android via adb (device `dizi`, Android 16, arm64-v8a):**
* The full suite (9045 checks, 0 failures) runs on the phone, including real UDP sockets
  over IPv4 and IPv6 and rendezvous on Android sockets.
* **Windows x64 <-> Android arm64 interoperability: VERIFIED.** The phone hosted an
  encrypted room, the PC joined, ~475 reliable and ~477 unreliable messages each way, in
  order, 0 loss, 0 auth failures.
  *Caveat:* the phone's Wi-Fi could not reach the router or the PC (100% ping loss), so
  that run carried the datagrams unchanged through a TCP shim (`psp_net_bridge`) over
  `adb forward`. It proves wire-format/crypto/handshake interop across CPUs, ABIs and
  compilers; it says nothing about real Wi-Fi latency or loss.
* The simulator is deterministic but connection iteration order differs between standard
  libraries, so a different loss pattern runs per platform. That exposed a genuine bug
  (host dropping forwarded datagrams when its window was full); it is fixed and now guarded
  by a 150-seed sweep.

### 5. Internet play (`src/net/rendezvous.cpp`, `tools/net_rendezvous_server.cpp`)
Host registers a room (hash of the invite + a TOFU owner secret); the joiner looks it up,
the server tells the host to punch, both attempt a direct encrypted handshake, and after
`direct_timeout` (3 s) the joiner falls back to a server relay. The relay is not an open
proxy (only flows involving the room host), is rate-limited per room, and only ever carries
end-to-end ciphertext.
* Verified in the simulator with modelled NATs: open, restricted-cone (works **only**
  because of the punch -- control experiment with punches dropped falls back to relay),
  fully blocked (relay; 200 reliable messages in order through 5% loss, no plaintext on
  the wire), room hijack rejected, unknown room fails, relay abuse blocked, rate limit,
  room expiry.
* Verified with real processes over loopback (IPv4): `psp_net_rendezvous` + two
  `psp_net_probe` runs: direct and forced-relay sessions, four sessions in a row against
  one host, all in-order and clean.
* **Not verified:** any real NAT, real symmetric-NAT behaviour, CGNAT, IPv6-only paths on
  the internet, the server under load, or a server on a public address.

### 6. PSP side (`MULTIPLAYER_PSP_PROTOCOL.md` has the evidence)
* **Key finding:** the game has two back ends. Its "Online" mode is Sony's Medius
  infrastructure (servers gone, not recoverable without writing a server for an
  undocumented protocol). Its **ad-hoc mode** uses only `sceNetAdhocPdp*` + a small Adhocctl
  handler + the stock netconf dialog -- no PTP, matching or game mode -- which is exactly
  what the transport can carry. Call-site arguments for every PDP call were decoded
  (e.g. `PdpCreate(mac, port, 65523, 0)`, non-blocking polled `PdpRecv`).
* The ad-hoc engine and the guest glue exist and are tested (below). The game's *own*
  PDP protocol (discovery, formats, rates) has **not** been observed.

## Tests and how to run them

```
cmake -S . -B build && cmake --build build --config Release \
      --target psprecomp_net_tests psp_net_probe psp_net_rendezvous
build/Release/psprecomp_net_tests          # 9045 checks, ~5 s, deterministic simulator
ctest -R psprecomp_net_tests
# real two-process runs
psp_net_rendezvous --port 3478
psp_net_probe host --port 0 --new-invite --room-server 127.0.0.1:3478 --seconds 60
psp_net_probe join room --invite <CODE> --room-server 127.0.0.1:3478 [--force-relay]
```
Game glue test: `motorstorm_net_hle_tests` (profile build) drives the registered imports
with fake guest memory against a real remote node.

## Game build and single-player check

`MotorStormNative` was rebuilt in the project's own tree with the glue linked in (full
rebuild, ~9 min); the previous executable is kept as
`out/motorstorm/bin/Release/MotorStormNative.pre-net.exe`.

* **HLE integration test** (`motorstorm_net_hle_tests`, 76 checks, passing): the registered
  imports are driven with fake guest memory against a real remote node over encrypted
  loopback UDP -- the game's init sequence, the netconf adhoc dialog (INIT -> VISIBLE ->
  QUIT -> FINISHED, result 0, `CONNECT` delivered to the registered handler with the
  registered argument), `GetLocalEtherAddr`/`PdpCreate`/`GetPdpStat` (two-call pattern),
  `PdpSend`/`PdpRecv` in both directions, argument validation, `Disconnect` (+ handler
  `DISCONNECT`, sends refused afterwards) and an infrastructure (`action = 0`) request failing
  cleanly instead of hanging. A real bug found this way: the product code is a fixed 9-byte
  field without a terminator, which the first version of the glue read as a C string.
* **Smoke test of the real exe** (bounded run, 150 GE submissions): with and without
  `PSPRECOMP_MOTORSTORM_NET=host` the boot log is identical (apart from one thread-timing
  line order) and both stop at the same diagnostic limit. With the switch the log shows
  `NET HLE enabled ... encrypted=yes` and the invite code. This shows the opt-in path does
  not disturb boot; it does **not** exercise the game's multiplayer menus.
* **Existing tests:** `psprecomp_tests` and `psprecomp_codegen_tests` pass.
  `motorstorm_profile_tests` reports **1 failure that this work did not cause**: "GE draw
  capture writes a complete render target". The test's GE list sets framebuffer stride 512
  and the capture writes a stride-wide 512x272 image (417,807 bytes) while the test expects
  480x272 (391,695). `motorstorm_ge.cpp` and the test file are unmodified, and builds from
  Oct 1-3 passed, so the committed code has drifted from the test. I did not change it.
* Performance: nothing is registered or started unless the switch is set, so default
  single-player has no added work; no frame-time measurement was taken.
* Android: the new sources are added to the Android CMake (`psprecomp_android_net`,
  `motorstorm_net_hle`) and the glue was syntax-checked with the NDK compiler; the Android
  app itself was **not** rebuilt or run with the glue.

## Using it (when the protocol blockers below are cleared)

```
set PSPRECOMP_MOTORSTORM_NET=host            -> prints an invite code
set PSPRECOMP_MOTORSTORM_NET=join
set PSPRECOMP_MOTORSTORM_NET_INVITE=XXXX-...
set PSPRECOMP_MOTORSTORM_NET_SERVER=host:3478   (or PSPRECOMP_MOTORSTORM_NET_PEER=ip:port for LAN)
```
Android has no way to set these yet (see blockers).

## Blockers and remaining work (ordered)

1. **Observe the game's ad-hoc traffic.** Nobody has driven the game into its multiplayer
   menu with the HLE on. Needed: a human (or an input script) to pick the adhoc path in
   both instances and read the `NET` log. Unknowns: PDP ports/packet formats/discovery,
   tick rate, lockstep vs replicated state, expected error codes (`adhoc_err::*` are
   recalled SDK values, unverified), whether a `SCAN` event is expected.
2. **Race synchronisation is unproven.** Even with a perfect transport, Windows and Android
   builds must produce identical simulation inputs; floating-point and timing parity have
   not been measured. Add a desync detector (state hash exchange) before claiming sync.
3. **Android activation.** Configuration is read from environment variables. The Android
   app needs a settings/intent path (and an in-app invite entry/display), plus Wi-Fi
   multicast/background permissions and pause/resume handling that does not look like a
   timeout (10 s default).
4. **Real-network validation** of hole punching and relay (home NATs, mobile CGNAT, IPv6).
5. **Security review** of the handshake/AEAD design; consider libsodium instead of the
   in-tree primitives; add per-room bans/kick and host-side peer limits (exists: 7).
6. **Infrastructure/Medius online mode** is out of scope (needs a server emulator for an
   unknown protocol).
7. **Latency policy.** PDP currently rides the reliable ordered channel (no loss, but
   head-of-line blocking); evaluate unreliable PDP once the game's tolerance is known.
8. **Congestion control** beyond the fixed token bucket; improve the burst loss statistic.

## Open items left from the original request
* "Implement and verify the startup feature": the request never said which feature this is;
  nothing was done for it.
