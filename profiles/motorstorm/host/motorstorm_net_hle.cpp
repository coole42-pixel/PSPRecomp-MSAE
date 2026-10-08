#include "motorstorm_net_hle.hpp"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <map>
#include <memory>
#include <mutex>
#include <span>
#include <sstream>
#include <thread>
#include <vector>

#include "psprecomp/net/adhoc.hpp"
#include "psprecomp/net/crypto.hpp"
#include "psprecomp/net/rendezvous.hpp"
#include "psprecomp/net/thin_udp.hpp"

namespace motorstorm {

using namespace psprecomp;
using namespace psprecomp::net;

namespace {

// ---- sceUtility dialog status (public SDK values) --------------------------------------
constexpr std::uint32_t kDialogNone = 0, kDialogInit = 1, kDialogVisible = 2, kDialogQuit = 3, kDialogFinished = 4;
// pspUtilityNetconfData: base header is 0x30 bytes, `result` sits at +0x1C of the header.
constexpr std::uint32_t kNetconfResultOffset = 28;
constexpr std::uint32_t kNetconfActionOffset = 48;
constexpr std::uint32_t kNetconfAdhocParamOffset = 52;
constexpr std::uint32_t kNetconfActionConnectAp = 0, kNetconfActionConnectAdhoc = 2;
constexpr std::uint32_t kNetconfFailure = 0x80110001u; // generic utility failure

std::string hex32s(std::uint32_t v) {
    char b[16];
    std::snprintf(b, sizeof(b), "0x%08X", v);
    return b;
}

struct NetRuntime {
    NetHleHooks hooks;
    std::mutex mu;

    // session
    bool hosting = false;
    std::unique_ptr<IDatagramTransport> sock;
    std::unique_ptr<Endpoint> plain_ep;
    std::unique_ptr<RoomHost> room_host;
    std::unique_ptr<RoomJoiner> room_join;
    Endpoint *ep = nullptr;
    std::unique_ptr<AdhocNode> node;
    bool joiner_attached = false;
    std::string invite_text;
    std::thread pump;
    std::atomic<bool> stop{false};

    // guest-visible state
    bool net_inited = false;
    bool adhocctl_inited = false;
    bool guest_connected = false; // set when the netconf dialog completed successfully
    struct Handler {
        std::uint32_t entry, arg;
    };
    std::map<int, Handler> handlers;
    int next_handler = 1;
    struct Pending {
        std::uint32_t entry, arg;
        int flag, error;
    };
    std::deque<Pending> pending;

    // netconf dialog
    std::uint32_t nc_status = kDialogNone;
    std::uint32_t nc_param = 0;
    std::uint64_t nc_started_ms = 0;
    bool nc_first_status_poll = false;
    bool nc_reject = false; // non-adhoc (infrastructure) request: fail the dialog

    std::map<std::string, std::uint64_t> call_counts;

    std::uint64_t now_ms() const {
        return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch())
            .count();
    }

    void log(const std::string &m) const {
        if (hooks.log) hooks.log(m);
    }

    // Per-import log with a budget: first `trace_budget` calls (env PSPRECOMP_MOTORSTORM_NET_TRACE,
    // default 6), then every 1000th.
    std::uint64_t trace_budget = 6;
    void trace(const char *name, const std::string &detail) {
        const std::uint64_t n = ++call_counts[name];
        if (n <= trace_budget || n % 1000 == 0) log(std::string(name) + " #" + std::to_string(n) + " " + detail);
    }
    static std::string hex_preview(const std::vector<std::uint8_t> &d, std::size_t max = 32) {
        static const char *h = "0123456789abcdef";
        std::string out;
        for (std::size_t i = 0; i < d.size() && i < max; ++i) {
            out.push_back(h[d[i] >> 4]);
            out.push_back(h[d[i] & 15]);
            if (i + 1 < d.size() && i + 1 < max) out.push_back(' ');
        }
        if (d.size() > max) out += " ...";
        return out;
    }

    void queue_event(int flag, int error) {
        for (const auto &kv : handlers) pending.push_back({kv.second.entry, kv.second.arg, flag, error});
    }

    // Runs under the lock from the pump thread.
    void pump_once(std::uint64_t now_us) {
        if (room_host) room_host->update(now_us);
        else if (room_join) room_join->update(now_us);
        else ep->update(now_us);

        Event e;
        for (;;) {
            bool got = room_join ? room_join->poll(e) : ep->poll(e);
            if (!got) break;
            if (e.type == Event::Type::Connected && e.outbound) {
                node->attach_client(e.conn);
                joiner_attached = true;
            } else {
                node->handle_event(e);
            }
        }
        node->update(now_us);
        AdhocNode::CtlEvent ce;
        while (node->poll_ctl_event(ce)) {
            // Group state changes reach the guest only through its own dialog / handler
            // flow: CONNECT is synthesised when the netconf dialog completes, so drop the
            // early one; a later DISCONNECT (host gone) is forwarded.
            if (ce.flag == adhocctl_event::kDisconnect && guest_connected) {
                guest_connected = false;
                queue_event(adhocctl_event::kDisconnect, ce.error);
                log("group lost: notifying guest handlers (DISCONNECT)");
            }
        }
    }

    void thread_main() {
        while (!stop.load()) {
            {
                std::lock_guard<std::mutex> lock(mu);
                pump_once(monotonic_now_us());
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(2));
        }
    }
};

NetRuntime *g_net = nullptr;

const char *env(const char *name) {
    const char *v = std::getenv(name);
    return (v && *v) ? v : nullptr;
}
bool env_flag(const char *name) {
    const char *v = std::getenv(name);
    return v && *v && std::strcmp(v, "0") != 0;
}

bool readable(Runtime &rt, std::uint32_t addr, std::size_t n) { return addr != 0 && rt.memory().contains(addr, n); }

// Fixed-width guest text field (PSP structs such as the 9-byte product code and the 8-byte
// adhoc group name are NOT NUL-terminated when full).
std::string read_fixed_string(Runtime &rt, std::uint32_t addr, std::size_t max_len) {
    std::string out;
    if (!readable(rt, addr, max_len)) return out;
    for (std::size_t i = 0; i < max_len; ++i) {
        const std::uint8_t c = rt.memory().load8(addr + static_cast<std::uint32_t>(i));
        if (c == 0) break;
        out.push_back(static_cast<char>(c >= 32 && c < 127 ? c : '?'));
    }
    return out;
}

AdhocMac load_mac(Runtime &rt, std::uint32_t addr) {
    AdhocMac m{};
    for (std::uint32_t i = 0; i < 6; ++i) m[i] = rt.memory().load8(addr + i);
    return m;
}
void store_mac(Runtime &rt, std::uint32_t addr, const AdhocMac &m) {
    for (std::uint32_t i = 0; i < 6; ++i) rt.memory().store8(addr + i, m[i]);
}

// Delivers at most one pending handler notification by calling into the guest.  Must be
// the last thing an import does (after the return value is set).
void deliver_pending(Runtime &rt, AllegrexContext &ctx, NetRuntime &n) {
    if (n.pending.empty()) return;
    const NetRuntime::Pending p = n.pending.front();
    n.pending.pop_front();
    n.log("calling Adhocctl handler entry=" + hex32s(p.entry) + " flag=" + std::to_string(p.flag) +
          " error=" + std::to_string(p.error) + " arg=" + hex32s(p.arg));
    n.hooks.call_guest(rt, ctx, p.entry, static_cast<std::uint32_t>(p.flag), static_cast<std::uint32_t>(p.error),
                       p.arg, "sceNetAdhocctlHandler");
}

// Netconf bookkeeping advanced by the guest's polling.  Under the lock.
void netconf_poll(Runtime &rt, NetRuntime &n) {
    if (n.nc_status != kDialogVisible) return;
    const AdhocNode::State st = n.node->state();
    const std::uint64_t waited = n.now_ms() - n.nc_started_ms;
    auto finish = [&](std::uint32_t result) {
        if (readable(rt, n.nc_param, kNetconfResultOffset + 4)) rt.memory().store32(n.nc_param + kNetconfResultOffset, result);
        n.nc_status = kDialogQuit;
    };
    if (st == AdhocNode::State::Connected) {
        n.guest_connected = true;
        n.queue_event(adhocctl_event::kConnect, 0);
        finish(0);
        n.log("netconf(adhoc): group established, dialog finished OK; peers=" + std::to_string(n.node->peers().size()));
    } else if (waited > 120000) { // 2 minutes to reach the group
        finish(kNetconfFailure);
        n.log("netconf(adhoc): timed out waiting for the group (state not Connected)");
    }
}

} // namespace

bool net_hle_requested() { return env("PSPRECOMP_MOTORSTORM_NET") != nullptr; }

namespace {
// Multiplayer off (or unusable): answer the game's network initialisation with a failure instead of
// leaving the import unregistered, which stops the whole run with "[HLE MISSING]" and, on a phone,
// looks like a crash.  The game's own init routine tests every call's result and returns failure,
// so the menu shows its normal "cannot connect" handling.  PSPRECOMP_MOTORSTORM_NET_STRICT=1 keeps
// the old loud stop for diagnostics.
void register_offline_stubs(Runtime &runtime, const NetHleHooks &hooks, const std::string &reason) {
    if (env_flag("PSPRECOMP_MOTORSTORM_NET_STRICT") || !hooks.register_import) return;
    if (hooks.log) hooks.log("multiplayer unavailable (" + reason + "): network init will report failure");
    auto fail_init = [reason, log = hooks.log](Runtime &, AllegrexContext &ctx) {
        static bool reported = false;
        if (!reported && log) {
            reported = true;
            log("game requested network init: refused (" + reason + ")");
        }
        ctx.set_gpr(2, 0x80410001u);
    };
    hooks.register_import(runtime, "sceNet", 0x39AF39A6u, "sceNetInit(offline)", fail_init);
    // The game continues into the connection dialog even after a failed init: let it finish at once with
    // a failure result (same status sequence as the real dialog), and make teardown calls harmless.
    struct Dialog {
        std::uint32_t status = 0, param = 0;
        bool first_poll = false;
    };
    auto dialog = std::make_shared<Dialog>();
    auto reg = [&](const char *lib, std::uint32_t nid, const char *name, Runtime::HleFunction fn) {
        hooks.register_import(runtime, lib, nid, name, std::move(fn));
    };
    reg("sceUtility", 0x4DB1E739u, "sceUtilityNetconfInitStart(offline)", [dialog](Runtime &, AllegrexContext &ctx) {
        dialog->param = ctx.gpr[4];
        dialog->status = kDialogInit;
        dialog->first_poll = true;
        ctx.set_gpr(2, 0u);
    });
    reg("sceUtility", 0x6332AA39u, "sceUtilityNetconfGetStatus(offline)", [dialog](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t status = dialog->status;
        if (dialog->status == kDialogInit) {
            if (dialog->first_poll) dialog->first_poll = false;
            else dialog->status = kDialogVisible;
        } else if (dialog->status == kDialogFinished) {
            dialog->status = kDialogNone;
        }
        ctx.set_gpr(2, status);
    });
    reg("sceUtility", 0x91E70E35u, "sceUtilityNetconfUpdate(offline)", [dialog](Runtime &rt, AllegrexContext &ctx) {
        if (dialog->status == kDialogVisible) {
            if (readable(rt, dialog->param, kNetconfResultOffset + 4))
                rt.memory().store32(dialog->param + kNetconfResultOffset, kNetconfFailure);
            dialog->status = kDialogQuit;
        }
        ctx.set_gpr(2, 0u);
    });
    reg("sceUtility", 0xF88155F6u, "sceUtilityNetconfShutdownStart(offline)", [dialog](Runtime &, AllegrexContext &ctx) {
        dialog->status = kDialogFinished;
        ctx.set_gpr(2, 0u);
    });
    auto zero = [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); };
    reg("sceNet", 0x281928A9u, "sceNetTerm(offline)", zero);
    reg("sceNetApctl", 0x24FE91A1u, "sceNetApctlDisconnect(offline)", zero);
    reg("sceNetApctl", 0xB3EDD0ECu, "sceNetApctlTerm(offline)", zero);
    reg("sceNetAdhocctl", 0x34401D65u, "sceNetAdhocctlDisconnect(offline)", zero);
    reg("sceNetAdhocctl", 0x9D689E13u, "sceNetAdhocctlTerm(offline)", zero);
    reg("sceNetAdhocctl", 0x6402490Bu, "sceNetAdhocctlDelHandler(offline)", zero);
    reg("sceNetApctl", 0x5963991Bu, "sceNetApctlDelHandler(offline)", zero);
}
} // namespace

void install_net_hle(Runtime &runtime, const NetHleHooks &hooks) {
    if (g_net) net_hle_shutdown();
    const char *mode = env("PSPRECOMP_MOTORSTORM_NET");
    if (!mode) {
        register_offline_stubs(runtime, hooks, "multiplayer is off in the settings");
        return;
    }
    auto n = std::make_unique<NetRuntime>();
    n->hooks = hooks;
    if (const char *tb = env("PSPRECOMP_MOTORSTORM_NET_TRACE")) n->trace_budget = std::strtoull(tb, nullptr, 0);
    auto fail = [&](const std::string &why) {
        if (hooks.log) hooks.log("NET HLE disabled: " + why);
        register_offline_stubs(runtime, hooks, why);
    };

    if (std::strcmp(mode, "host") == 0) n->hosting = true;
    else if (std::strcmp(mode, "join") == 0) n->hosting = false;
    else return fail("PSPRECOMP_MOTORSTORM_NET must be 'host' or 'join'");

    // ---- invite -------------------------------------------------------------------------
    crypto::Invite invite{};
    if (const char *inv = env("PSPRECOMP_MOTORSTORM_NET_INVITE")) {
        if (!crypto::invite_from_string(inv, invite)) return fail("PSPRECOMP_MOTORSTORM_NET_INVITE is not a valid invite code");
    } else if (n->hosting) {
        if (!crypto::generate_invite(invite)) return fail("no OS randomness for invite generation");
    } else {
        return fail("joining needs PSPRECOMP_MOTORSTORM_NET_INVITE");
    }
    n->invite_text = crypto::invite_to_string(invite);

    // ---- transport ------------------------------------------------------------------------
    NetAddr server, peer;
    const bool use_server = env("PSPRECOMP_MOTORSTORM_NET_SERVER") != nullptr;
    if (use_server && !NetAddr::parse(env("PSPRECOMP_MOTORSTORM_NET_SERVER"), server))
        return fail("bad PSPRECOMP_MOTORSTORM_NET_SERVER (expected ip:port)");
    if (!n->hosting && !use_server) {
        if (!env("PSPRECOMP_MOTORSTORM_NET_PEER") || !NetAddr::parse(env("PSPRECOMP_MOTORSTORM_NET_PEER"), peer))
            return fail("joining needs PSPRECOMP_MOTORSTORM_NET_SERVER or PSPRECOMP_MOTORSTORM_NET_PEER=ip:port");
    }
    std::uint16_t port = 0;
    if (const char *p = env("PSPRECOMP_MOTORSTORM_NET_PORT")) port = static_cast<std::uint16_t>(std::atoi(p));
    std::string err;
    n->sock = open_udp_socket(n->hosting ? port : 0, nullptr, &err);
    if (!n->sock) return fail("cannot open UDP socket: " + err);

    NetRuntime *raw = n.get();
    Config cfg;
    cfg.set_invite(invite);
    cfg.max_reliable_message = 70000; // PDP header + the 65519-byte maximum datagram
    cfg.log_level = LogLevel::Info;
    cfg.stats_log_interval_us = 10'000'000;
    cfg.log = [raw](LogLevel, const std::string &m) { raw->log("net: " + m); };

    AdhocOptions ao;
    ao.host = n->hosting;
    if (const char *nick = env("PSPRECOMP_MOTORSTORM_NET_NICK")) ao.nickname = nick;
    else ao.nickname = n->hosting ? "MotorStorm Host" : "MotorStorm Player";
    ao.product = "UCES01250";
    ao.pdp_reliable = !env_flag("PSPRECOMP_MOTORSTORM_NET_UNRELIABLE");
    ao.log_level = LogLevel::Info;
    ao.log = [raw](LogLevel, const std::string &m) { raw->log(m); };

    if (use_server) {
        if (n->hosting) {
            n->room_host = std::make_unique<RoomHost>(*n->sock, server, invite, cfg);
            n->ep = &n->room_host->endpoint();
        } else {
            RoomConfig rc;
            rc.total_timeout_us = 10ull * 60 * 1'000'000; // the host may start later than we do
            if (env_flag("PSPRECOMP_MOTORSTORM_NET_FORCE_RELAY")) rc.direct_timeout_us = 0;
            n->room_join = std::make_unique<RoomJoiner>(*n->sock, server, invite, cfg, rc);
            n->ep = &n->room_join->endpoint();
        }
    } else {
        n->plain_ep = std::make_unique<Endpoint>(*n->sock, cfg);
        n->plain_ep->set_accepting(n->hosting);
        n->ep = n->plain_ep.get();
    }
    n->node = std::make_unique<AdhocNode>(*n->ep, ao);
    if (n->hosting) n->node->start_host();
    else if (n->room_join) n->room_join->start(monotonic_now_us());
    else n->plain_ep->connect(peer, monotonic_now_us());

    {
        std::ostringstream o;
        o << "NET HLE enabled: role=" << (n->hosting ? "host" : "join") << " transport="
          << (use_server ? "rendezvous " + server.to_string() : (n->hosting ? "direct (listening)" : "direct -> " + peer.to_string()))
          << " local=" << n->sock->local_addr().to_string() << " mac=" << mac_to_string(n->node->local_mac())
          << " pdp=" << (ao.pdp_reliable ? "reliable" : "unreliable") << " encrypted=yes";
        if (hooks.log) hooks.log(o.str());
        if (n->hosting) {
            std::printf("\n=== MotorStorm private room ===\n  invite code : %s\n  share it with the other player(s);"
                        " they set PSPRECOMP_MOTORSTORM_NET=join and PSPRECOMP_MOTORSTORM_NET_INVITE=<code>\n===============================\n\n",
                        n->invite_text.c_str());
            std::fflush(stdout);
        }
    }

    g_net = n.release();
    NetRuntime &N = *g_net;
    N.pump = std::thread([&N] { N.thread_main(); });

    auto reg = [&](const char *lib, std::uint32_t nid, const char *name, Runtime::HleFunction fn) {
        hooks.register_import(runtime, lib, nid, name, std::move(fn));
    };

    // ---- sceNet / Inet / Resolver (initialisation only; sockets stay unimplemented) --------
    reg("sceNet", 0x39AF39A6u, "sceNetInit", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->net_inited = true;
        g_net->trace("sceNetInit", "pool=" + hex32s(ctx.gpr[4]) + " -> 0");
        ctx.set_gpr(2, 0u);
    });
    reg("sceNet", 0x281928A9u, "sceNetTerm", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->net_inited = false;
        g_net->trace("sceNetTerm", "-> 0");
        ctx.set_gpr(2, 0u);
    });
    reg("sceNet", 0x0BF0A3AEu, "sceNetGetLocalEtherAddr", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        const std::uint32_t out = ctx.gpr[4];
        if (!readable(rt, out, 6)) {
            ctx.set_gpr(2, 0x80410711u);
            return;
        }
        store_mac(rt, out, g_net->node->local_mac());
        g_net->trace("sceNetGetLocalEtherAddr", "-> " + mac_to_string(g_net->node->local_mac()));
        ctx.set_gpr(2, 0u);
    });
    // The game derives a per-player id from the low 4 bytes of the WLAN MAC (call site: unit 0354,
    // `sceWlanGetEtherAddr(sp)` then a 4-byte copy from sp+2), so it must equal the MAC the
    // ad-hoc layer uses.  NID 0x0C622081 is sceWlanDrv's GetEtherAddr in the public tables.
    reg("sceWlanDrv", 0x0C622081u, "sceWlanGetEtherAddr", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        const std::uint32_t out = ctx.gpr[4];
        if (!readable(rt, out, 6)) {
            ctx.set_gpr(2, 0x80410711u);
            return;
        }
        store_mac(rt, out, g_net->node->local_mac());
        g_net->trace("sceWlanGetEtherAddr", "-> " + mac_to_string(g_net->node->local_mac()));
        ctx.set_gpr(2, 0u);
    });
    reg("sceNet", 0x89360950u, "sceNetEtherNtostr", [](Runtime &rt, AllegrexContext &ctx) {
        const std::uint32_t mac = ctx.gpr[4], out = ctx.gpr[5];
        if (!readable(rt, mac, 6) || !readable(rt, out, 18)) {
            ctx.set_gpr(2, 0x80410711u);
            return;
        }
        const std::string s = mac_to_string(load_mac(rt, mac));
        for (std::size_t i = 0; i <= s.size(); ++i) rt.memory().store8(out + static_cast<std::uint32_t>(i), i < s.size() ? static_cast<std::uint8_t>(s[i]) : 0);
        ctx.set_gpr(2, 0u);
    });
    // NID -> name for these four is from the public SDK tables, not from call-site evidence.
    reg("sceNetInet", 0x17943399u, "sceNetInetInit", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    reg("sceNetInet", 0xA9ED66B9u, "sceNetInetTerm", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    reg("sceNetResolver", 0xF3370E61u, "sceNetResolverInit", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    reg("sceNetResolver", 0x6138194Au, "sceNetResolverTerm", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });

    // ---- sceNetApctl (infrastructure access point control: nothing to connect to) ---------
    reg("sceNetApctl", 0xE2F91F9Bu, "sceNetApctlInit", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->trace("sceNetApctlInit", "stack=" + hex32s(ctx.gpr[4]) + " prio=" + std::to_string(ctx.gpr[5]) + " -> 0");
        ctx.set_gpr(2, 0u);
    });
    reg("sceNetApctl", 0xB3EDD0ECu, "sceNetApctlTerm", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    reg("sceNetApctl", 0x8ABADD51u, "sceNetApctlAddHandler", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->trace("sceNetApctlAddHandler", "handler=" + hex32s(ctx.gpr[4]) + " (never invoked: no access point) -> 1");
        ctx.set_gpr(2, 1u);
    });
    reg("sceNetApctl", 0x5963991Bu, "sceNetApctlDelHandler", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    reg("sceNetApctl", 0x24FE91A1u, "sceNetApctlDisconnect", [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    reg("sceNetApctl", 0x2BEFDF23u, "sceNetApctlGetInfo", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->trace("sceNetApctlGetInfo", "-> error (no infrastructure link)");
        ctx.set_gpr(2, 0x80410B03u); // not connected
    });

    // ---- sceNetAdhocctl ---------------------------------------------------------------------
    reg("sceNetAdhocctl", 0xE26F226Eu, "sceNetAdhocctlInit", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        std::string product;
        product = read_fixed_string(rt, ctx.gpr[6] + 4, 9);
        g_net->adhocctl_inited = true;
        g_net->trace("sceNetAdhocctlInit", "stack=" + hex32s(ctx.gpr[4]) + " prio=" + std::to_string(ctx.gpr[5]) +
                                               " product=\"" + product + "\" -> 0");
        ctx.set_gpr(2, 0u);
    });
    reg("sceNetAdhocctl", 0x9D689E13u, "sceNetAdhocctlTerm", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->adhocctl_inited = false;
        g_net->trace("sceNetAdhocctlTerm", "-> 0");
        ctx.set_gpr(2, 0u);
    });
    reg("sceNetAdhocctl", 0x20B317A0u, "sceNetAdhocctlAddHandler", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        const int id = g_net->next_handler++;
        g_net->handlers[id] = {ctx.gpr[4], ctx.gpr[5]};
        g_net->trace("sceNetAdhocctlAddHandler", "handler=" + hex32s(ctx.gpr[4]) + " arg=" + hex32s(ctx.gpr[5]) +
                                                     " -> id " + std::to_string(id));
        ctx.set_gpr(2, static_cast<std::uint32_t>(id));
    });
    reg("sceNetAdhocctl", 0x6402490Bu, "sceNetAdhocctlDelHandler", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->handlers.erase(static_cast<int>(ctx.gpr[4]));
        ctx.set_gpr(2, 0u);
    });
    reg("sceNetAdhocctl", 0x34401D65u, "sceNetAdhocctlDisconnect", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        // Guest leaves the game group.  The underlying room stays up so the menu can
        // reconnect without restarting; PDP sockets are invalidated like on hardware.
        const bool was = g_net->guest_connected;
        g_net->guest_connected = false;
        for (const auto &s : g_net->node->sockets()) g_net->node->pdp_delete(s.id);
        if (was) g_net->queue_event(adhocctl_event::kDisconnect, 0);
        g_net->nc_status = kDialogNone;
        g_net->trace("sceNetAdhocctlDisconnect", std::string("was_connected=") + (was ? "1" : "0") + " -> 0");
        ctx.set_gpr(2, 0u);
        deliver_pending(rt, ctx, *g_net);
    });

    // ---- sceNetAdhoc (PDP) ------------------------------------------------------------------
    reg("sceNetAdhoc", 0xE1D621D7u, "sceNetAdhocInit", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->trace("sceNetAdhocInit", "-> 0");
        ctx.set_gpr(2, 0u);
    });
    reg("sceNetAdhoc", 0x6F92741Bu, "sceNetAdhocPdpCreate", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        const std::uint32_t mac_ptr = ctx.gpr[4], port = ctx.gpr[5], bufsize = ctx.gpr[6];
        if (!readable(rt, mac_ptr, 6)) {
            ctx.set_gpr(2, adhoc_err::kInvalidArg);
            return;
        }
        if (!g_net->guest_connected) {
            g_net->trace("sceNetAdhocPdpCreate", "not connected -> kNotConnected");
            ctx.set_gpr(2, adhoc_err::kNotConnected);
            return;
        }
        const std::int32_t r = g_net->node->pdp_create(load_mac(rt, mac_ptr), static_cast<std::uint16_t>(port), bufsize);
        g_net->trace("sceNetAdhocPdpCreate", "mac=" + mac_to_string(load_mac(rt, mac_ptr)) + " port=" + std::to_string(port) +
                                                 " bufsize=" + std::to_string(bufsize) + " -> " + std::to_string(r));
        ctx.set_gpr(2, static_cast<std::uint32_t>(r));
        deliver_pending(rt, ctx, *g_net);
    });
    reg("sceNetAdhoc", 0x7F27BB5Eu, "sceNetAdhocPdpDelete", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        const std::int32_t r = g_net->node->pdp_delete(static_cast<int>(ctx.gpr[4]));
        g_net->trace("sceNetAdhocPdpDelete", "id=" + std::to_string(ctx.gpr[4]) + " -> " + std::to_string(r));
        ctx.set_gpr(2, static_cast<std::uint32_t>(r));
        deliver_pending(rt, ctx, *g_net);
    });
    reg("sceNetAdhoc", 0xABED3790u, "sceNetAdhocPdpSend", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        // (id, destMac*, port, data*, len, timeout, nonblock)
        const std::uint32_t id = ctx.gpr[4], mac_ptr = ctx.gpr[5], port = ctx.gpr[6], data = ctx.gpr[7], len = ctx.gpr[8];
        std::uint32_t r;
        if (!readable(rt, mac_ptr, 6) || (len != 0 && !readable(rt, data, len))) {
            r = adhoc_err::kInvalidArg;
        } else if (!g_net->guest_connected) {
            r = adhoc_err::kNotConnected;
        } else {
            std::vector<std::uint8_t> bytes(len);
            if (len) rt.memory().copy_out(data, bytes);
            r = g_net->node->pdp_send(static_cast<int>(id), load_mac(rt, mac_ptr), static_cast<std::uint16_t>(port),
                                      bytes.data(), bytes.size());
        }
        std::string preview;
        if (len != 0 && readable(rt, data, len)) {
            std::vector<std::uint8_t> head(std::min<std::uint32_t>(len, 32u));
            rt.memory().copy_out(data, head);
            std::vector<std::uint8_t> shown = head;
            preview = " [" + NetRuntime::hex_preview(shown) + "]";
        }
        g_net->trace("sceNetAdhocPdpSend", "id=" + std::to_string(id) + " dst=" + (readable(rt, mac_ptr, 6) ? mac_to_string(load_mac(rt, mac_ptr)) : "?") +
                                               " port=" + std::to_string(port) + " len=" + std::to_string(len) + preview + " -> " + hex32s(r));
        ctx.set_gpr(2, r);
        deliver_pending(rt, ctx, *g_net);
    });
    reg("sceNetAdhoc", 0xDFE53E03u, "sceNetAdhocPdpRecv", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        // (id, srcMac* out, port* out, buf*, len* in/out, timeout, nonblock)
        const std::uint32_t id = ctx.gpr[4], mac_out = ctx.gpr[5], port_out = ctx.gpr[6], buf = ctx.gpr[7], len_ptr = ctx.gpr[8];
        std::uint32_t r;
        if (!readable(rt, len_ptr, 4) || !readable(rt, mac_out, 6) || !readable(rt, port_out, 2) || buf == 0) {
            r = adhoc_err::kInvalidArg;
        } else if (!g_net->guest_connected) {
            r = adhoc_err::kNotConnected;
        } else {
            AdhocNode::Datagram d;
            r = g_net->node->pdp_recv(static_cast<int>(id), d);
            if (r == 0) {
                const std::uint32_t cap = rt.memory().load32(len_ptr);
                const std::uint32_t n = static_cast<std::uint32_t>(std::min<std::size_t>(d.data.size(), cap));
                if (n && !readable(rt, buf, n)) {
                    r = adhoc_err::kInvalidArg;
                } else {
                    if (n) rt.memory().copy_in(buf, std::span<const std::uint8_t>(d.data.data(), n));
                    rt.memory().store32(len_ptr, n);
                    rt.memory().store16(port_out, d.src_port);
                    store_mac(rt, mac_out, d.src);
                    g_net->trace("sceNetAdhocPdpRecv", "id=" + std::to_string(id) + " from " + mac_to_string(d.src) + ":" +
                                                           std::to_string(d.src_port) + " len=" + std::to_string(n) + " [" + NetRuntime::hex_preview(d.data) + "]" +
                                                           (n < d.data.size() ? " (TRUNCATED from " + std::to_string(d.data.size()) + ")" : ""));
                }
            }
        }
        ctx.set_gpr(2, r); // kWouldBlock is the normal "nothing yet" answer for the polling game; not logged
        deliver_pending(rt, ctx, *g_net);
    });
    reg("sceNetAdhoc", 0xC7C1FC57u, "sceNetAdhocGetPdpStat", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        // (size* in/out, buf*): buf==0 -> report the needed size; else fill 20-byte records.
        const std::uint32_t size_ptr = ctx.gpr[4], buf = ctx.gpr[5];
        if (!readable(rt, size_ptr, 4)) {
            ctx.set_gpr(2, adhoc_err::kInvalidArg);
            return;
        }
        const auto socks = g_net->node->sockets();
        const std::uint32_t need = static_cast<std::uint32_t>(socks.size() * 20);
        if (buf == 0) {
            rt.memory().store32(size_ptr, need);
        } else {
            const std::uint32_t have = rt.memory().load32(size_ptr);
            if (have < need || !readable(rt, buf, need)) {
                ctx.set_gpr(2, adhoc_err::kInvalidArg);
                return;
            }
            for (std::size_t i = 0; i < socks.size(); ++i) {
                const std::uint32_t rec = buf + static_cast<std::uint32_t>(i * 20);
                rt.memory().store32(rec + 0, i + 1 < socks.size() ? rec + 20 : 0u);
                rt.memory().store32(rec + 4, static_cast<std::uint32_t>(socks[i].id));
                store_mac(rt, rec + 8, socks[i].mac);
                rt.memory().store16(rec + 14, socks[i].port);
                rt.memory().store32(rec + 16, socks[i].queued_bytes);
            }
            rt.memory().store32(size_ptr, need);
        }
        g_net->trace("sceNetAdhocGetPdpStat", "need=" + std::to_string(need) + (buf ? " (fill)" : " (probe)"));
        ctx.set_gpr(2, 0u);
    });

    // ---- sceUtilityNetconf (adhoc connection dialog) --------------------------------------------
    reg("sceUtility", 0x4DB1E739u, "sceUtilityNetconfInitStart", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        const std::uint32_t param = ctx.gpr[4];
        std::uint32_t action = 0xFFFFFFFFu, adhoc = 0;
        if (readable(rt, param, kNetconfAdhocParamOffset + 4)) {
            action = rt.memory().load32(param + kNetconfActionOffset);
            adhoc = rt.memory().load32(param + kNetconfAdhocParamOffset);
        }
        std::string group;
        group = read_fixed_string(rt, adhoc, 8);
        g_net->trace("sceUtilityNetconfInitStart", "param=" + hex32s(param) + " action=" + std::to_string(action) +
                                                       " adhocparam=" + hex32s(adhoc) + " group=\"" + group + "\"");
        if (action == kNetconfActionConnectAdhoc) {
            g_net->nc_param = param;
            g_net->nc_status = kDialogInit;
            g_net->nc_first_status_poll = true;
            g_net->nc_reject = false;
            g_net->nc_started_ms = g_net->now_ms();
            ctx.set_gpr(2, 0u);
        } else {
            // Infrastructure (Sony Medius online) is out of scope: report failure through the
            // dialog like a PSP with no usable access point, instead of stopping the emulator.
            g_net->log("netconf action " + std::to_string(action) +
                       " is not ad-hoc (infrastructure/online): refusing, dialog will report failure");
            g_net->nc_param = param;
            g_net->nc_status = kDialogInit;
            g_net->nc_first_status_poll = true;
            g_net->nc_reject = true;
            g_net->nc_started_ms = g_net->now_ms();
            ctx.set_gpr(2, 0u);
        }
    });
    reg("sceUtility", 0x6332AA39u, "sceUtilityNetconfGetStatus", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        std::uint32_t status = g_net->nc_status;
        if (g_net->nc_status == kDialogInit) { // report INIT once, then the dialog is VISIBLE
            if (g_net->nc_first_status_poll) g_net->nc_first_status_poll = false;
            else g_net->nc_status = kDialogVisible;
        } else if (g_net->nc_status == kDialogFinished) {
            g_net->nc_status = kDialogNone;
        }
        g_net->trace("sceUtilityNetconfGetStatus", "-> " + std::to_string(status));
        ctx.set_gpr(2, status);
        deliver_pending(rt, ctx, *g_net);
    });
    reg("sceUtility", 0x91E70E35u, "sceUtilityNetconfUpdate", [](Runtime &rt, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        if (g_net->nc_status == kDialogVisible) {
            if (!g_net->node) return;
            const std::uint64_t waited = g_net->now_ms() - g_net->nc_started_ms;
            if (g_net->nc_reject || (waited > 120000 && g_net->node->state() != AdhocNode::State::Connected)) {
                // infrastructure request or never joined: fail the dialog
                if (readable(rt, g_net->nc_param, kNetconfResultOffset + 4))
                    rt.memory().store32(g_net->nc_param + kNetconfResultOffset, kNetconfFailure);
                g_net->nc_status = kDialogQuit;
            } else {
                netconf_poll(rt, *g_net);
            }
        }
        g_net->trace("sceUtilityNetconfUpdate", "status=" + std::to_string(g_net->nc_status));
        ctx.set_gpr(2, 0u);
        deliver_pending(rt, ctx, *g_net);
    });
    reg("sceUtility", 0xF88155F6u, "sceUtilityNetconfShutdownStart", [](Runtime &, AllegrexContext &ctx) {
        std::lock_guard<std::mutex> lock(g_net->mu);
        g_net->nc_status = kDialogFinished;
        g_net->trace("sceUtilityNetconfShutdownStart", "-> 0");
        ctx.set_gpr(2, 0u);
    });
    (void)kNetconfActionConnectAp;
}

void net_hle_shutdown() {
    if (!g_net) return;
    g_net->stop = true;
    if (g_net->pump.joinable()) g_net->pump.join();
    {
        std::lock_guard<std::mutex> lock(g_net->mu);
        if (g_net->node) g_net->node->leave(monotonic_now_us());
    }
    delete g_net;
    g_net = nullptr;
}

} // namespace motorstorm
