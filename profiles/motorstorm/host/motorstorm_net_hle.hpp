#pragma once

// Network HLE for MotorStorm: maps the PSP ad-hoc API the game imports
// (sceNet / sceNetAdhoc / sceNetAdhocctl / sceNetApctl init paths and the
// sceUtilityNetconf adhoc dialog) onto psprecomp::net::AdhocNode, i.e. the encrypted
// thin-UDP transport with private invite-code rooms.
//
// Strictly opt-in.  Nothing here is registered unless the diagnostic switch
// PSPRECOMP_MOTORSTORM_NET is set, so default single-player behaviour (including the
// loud [HLE MISSING] stop if the guest ever enters the online menu) is unchanged and
// the render/CPU hot paths are untouched.  See docs/MULTIPLAYER_PSP_PROTOCOL.md.
//
// Environment (all read once at install):
//   PSPRECOMP_MOTORSTORM_NET=host|join     enable, and pick the role
//   PSPRECOMP_MOTORSTORM_NET_INVITE=CODE   invite (host: generated and printed if absent)
//   PSPRECOMP_MOTORSTORM_NET_SERVER=ip:port rendezvous server (lookup, hole punch, relay)
//   PSPRECOMP_MOTORSTORM_NET_PORT=N        host: local UDP port (direct mode; 0 = ephemeral)
//   PSPRECOMP_MOTORSTORM_NET_PEER=ip:port  join: connect directly (no rendezvous server)
//   PSPRECOMP_MOTORSTORM_NET_NICK=name     display name sent to the group
//   PSPRECOMP_MOTORSTORM_NET_UNRELIABLE=1  send PDP over the unreliable channel
//   PSPRECOMP_MOTORSTORM_NET_FORCE_RELAY=1 join: skip the direct attempt, use the relay

#include <cstdint>
#include <functional>
#include <string>

#include "psprecomp/runtime.hpp"

namespace motorstorm {

struct NetHleHooks {
    // Registers an import with the profile's tracing wrapper.
    std::function<void(psprecomp::Runtime &, const char *library, std::uint32_t nid, const char *name,
                       psprecomp::Runtime::HleFunction)>
        register_import;
    // Calls guest function `entry(a0, a1, a2)` on the current PSP thread; execution
    // resumes after the import that triggered it once the function returns.
    std::function<void(psprecomp::Runtime &, psprecomp::AllegrexContext &, std::uint32_t entry,
                       std::uint32_t a0, std::uint32_t a1, std::uint32_t a2, const char *name)>
        call_guest;
    std::function<void(const std::string &)> log;
};

// True when the opt-in switch is present in the environment.
[[nodiscard]] bool net_hle_requested();

// Registers the network imports and starts the session (background pump thread).
void install_net_hle(psprecomp::Runtime &runtime, const NetHleHooks &hooks);

// Stops the pump thread and closes the socket.  Safe to call when not installed.
void net_hle_shutdown();

} // namespace motorstorm
