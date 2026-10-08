// Integration test for the MotorStorm network HLE: the registered sceNet / sceNetAdhoc /
// sceNetAdhocctl / sceUtilityNetconf imports are driven with fake guest memory and
// registers (exactly as the recompiled game would call them) against a real remote node
// over loopback UDP.  No game code runs; this verifies the glue, not the game's protocol.

#include "motorstorm_net_hle.hpp"

#include "psprecomp/net/adhoc.hpp"
#include "psprecomp/net/crypto.hpp"
#include "psprecomp/net/thin_udp.hpp"
#include "psprecomp/runtime.hpp"

#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <map>
#include <mutex>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

using namespace psprecomp;
using namespace psprecomp::net;

static int g_checks = 0;
#define REQUIRE(cond)                                                                        \
    do {                                                                                     \
        ++g_checks;                                                                          \
        if (!(cond)) throw std::runtime_error(std::string(__FILE__) + ":" + std::to_string(__LINE__) + ": " #cond); \
    } while (0)

namespace {

void set_env(const char *k, const char *v) {
#ifdef _WIN32
    _putenv_s(k, v ? v : "");
#else
    if (v) setenv(k, v, 1);
    else unsetenv(k);
#endif
}

struct Imports {
    std::map<std::string, Runtime::HleFunction> by_name;
    struct GuestCall {
        std::uint32_t entry, a0, a1, a2;
    };
    std::vector<GuestCall> guest_calls;
    std::vector<std::string> logs;
};

// Fake guest memory layout used by the test.
constexpr std::uint32_t kMac = 0x08C00000u;       // 6 bytes
constexpr std::uint32_t kProduct = 0x08C00100u;   // sceNetAdhocctlInit product struct
constexpr std::uint32_t kNetconf = 0x08C00200u;   // pspUtilityNetconfData
constexpr std::uint32_t kAdhocParam = 0x08C00300u;
constexpr std::uint32_t kPeerMac = 0x08C00400u;
constexpr std::uint32_t kSend = 0x08C01000u;
constexpr std::uint32_t kRecv = 0x08C02000u;
constexpr std::uint32_t kLenPtr = 0x08C00500u;
constexpr std::uint32_t kPortPtr = 0x08C00510u;
constexpr std::uint32_t kSrcMac = 0x08C00520u;
constexpr std::uint32_t kStatSize = 0x08C00530u;
constexpr std::uint32_t kStatBuf = 0x08C00600u;

std::uint32_t call(Runtime &rt, Imports &imp, const char *name, std::uint32_t a0 = 0, std::uint32_t a1 = 0,
                   std::uint32_t a2 = 0, std::uint32_t a3 = 0, std::uint32_t t0 = 0, std::uint32_t t1 = 0,
                   std::uint32_t t2 = 0) {
    auto it = imp.by_name.find(name);
    if (it == imp.by_name.end()) throw std::runtime_error(std::string("import not registered: ") + name);
    AllegrexContext ctx{};
    ctx.gpr[4] = a0;
    ctx.gpr[5] = a1;
    ctx.gpr[6] = a2;
    ctx.gpr[7] = a3;
    ctx.gpr[8] = t0;
    ctx.gpr[9] = t1;
    ctx.gpr[10] = t2;
    ctx.gpr[31] = 0x08800000u;
    ctx.pc = 0x08A5A000u;
    it->second(rt, ctx);
    return ctx.gpr[2];
}

void store_str(Runtime &rt, std::uint32_t addr, const std::string &s) {
    for (std::size_t i = 0; i <= s.size(); ++i) rt.memory().store8(addr + static_cast<std::uint32_t>(i), i < s.size() ? static_cast<std::uint8_t>(s[i]) : 0);
}

bool wait_for(const std::function<bool()> &pred, int ms) {
    auto end = std::chrono::steady_clock::now() + std::chrono::milliseconds(ms);
    while (std::chrono::steady_clock::now() < end) {
        if (pred()) return true;
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
    }
    return pred();
}

void test_adhoc_session_through_hle() {
    crypto::Invite invite;
    REQUIRE(crypto::generate_invite(invite));

    // The remote console: a real host node on loopback UDP.
    std::string err;
    auto sock = open_udp_socket(0, nullptr, &err);
    REQUIRE(sock);
    Config cfg;
    cfg.set_invite(invite);
    cfg.max_reliable_message = 70000;
    Endpoint host_ep(*sock, cfg);
    host_ep.set_accepting(true);
    AdhocOptions ho;
    ho.host = true;
    ho.nickname = "RemoteHost";
    AdhocNode host(host_ep, ho);
    host.start_host();
    const NetAddr host_addr = NetAddr::loopback(sock->local_addr().port);

    std::atomic<bool> stop{false};
    std::mutex host_mu;
    std::thread host_thread([&] {
        while (!stop) {
            {
                std::lock_guard<std::mutex> lock(host_mu);
                host_ep.update(monotonic_now_us());
                Event e;
                while (host_ep.poll(e)) host.handle_event(e);
                host.update(monotonic_now_us());
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    });
    struct Stopper {
        std::atomic<bool> &s;
        std::thread &t;
        ~Stopper() {
            s = true;
            if (t.joinable()) t.join();
        }
    } stopper{stop, host_thread};

    // The HLE under test, configured like a player joining by direct address.
    set_env("PSPRECOMP_MOTORSTORM_NET", "join");
    set_env("PSPRECOMP_MOTORSTORM_NET_INVITE", crypto::invite_to_string(invite).c_str());
    set_env("PSPRECOMP_MOTORSTORM_NET_PEER", host_addr.to_string().c_str());
    set_env("PSPRECOMP_MOTORSTORM_NET_NICK", "TestPSP");
    REQUIRE(motorstorm::net_hle_requested());

    Runtime rt(32u * 1024u * 1024u);
    Imports imp;
    motorstorm::NetHleHooks hooks;
    hooks.register_import = [&](Runtime &, const char *, std::uint32_t, const char *name, Runtime::HleFunction fn) {
        imp.by_name[name] = std::move(fn);
    };
    hooks.call_guest = [&](Runtime &, AllegrexContext &, std::uint32_t entry, std::uint32_t a0, std::uint32_t a1,
                           std::uint32_t a2, const char *) { imp.guest_calls.push_back({entry, a0, a1, a2}); };
    hooks.log = [&](const std::string &m) { imp.logs.push_back(m); };
    motorstorm::install_net_hle(rt, hooks);
    struct Shutdown {
        ~Shutdown() { motorstorm::net_hle_shutdown(); }
    } shutdown_guard;
    for (const char *n : {"sceNetInit", "sceNetInetInit", "sceNetResolverInit", "sceNetApctlInit", "sceNetApctlAddHandler",
                          "sceNetAdhocInit", "sceNetAdhocctlInit", "sceNetAdhocctlAddHandler", "sceNetAdhocPdpCreate",
                          "sceNetAdhocPdpSend", "sceNetAdhocPdpRecv", "sceNetAdhocGetPdpStat", "sceNetAdhocPdpDelete",
                          "sceNetGetLocalEtherAddr", "sceNetEtherNtostr", "sceUtilityNetconfInitStart",
                          "sceUtilityNetconfGetStatus", "sceUtilityNetconfUpdate", "sceUtilityNetconfShutdownStart",
                          "sceNetAdhocctlDisconnect"})
        REQUIRE(imp.by_name.count(n));

    // ---- the game's init sequence, with the arguments seen at its call sites ----------------
    REQUIRE(call(rt, imp, "sceNetInit", 0x20000, 0x20, 0x1000, 0x20, 0x1000) == 0);
    REQUIRE(call(rt, imp, "sceNetInetInit") == 0);
    REQUIRE(call(rt, imp, "sceNetResolverInit") == 0);
    REQUIRE(call(rt, imp, "sceNetApctlInit", 0x6000, 48) == 0);
    REQUIRE(call(rt, imp, "sceNetApctlAddHandler", 0x08970F00, 0) == 1);
    REQUIRE(call(rt, imp, "sceNetAdhocInit") == 0);
    store_str(rt, kProduct + 4, "UCES01250");
    REQUIRE(call(rt, imp, "sceNetAdhocctlInit", 0x2000, 48, kProduct) == 0);
    const std::uint32_t handler = call(rt, imp, "sceNetAdhocctlAddHandler", 0x08970F68, 0x1234);
    REQUIRE(handler == 1);

    // Not connected yet: PDP is refused like on a PSP outside a group.
    REQUIRE(call(rt, imp, "sceNetGetLocalEtherAddr", kMac) == 0);
    REQUIRE(call(rt, imp, "sceNetAdhocPdpCreate", kMac, 5000, 65523, 0) == adhoc_err::kNotConnected);

    // ---- the adhoc connection dialog ----------------------------------------------------------
    rt.memory().store32(kNetconf + 48, 2);          // action = CONNECT_ADHOC
    rt.memory().store32(kNetconf + 52, kAdhocParam); // adhocparam*
    store_str(rt, kAdhocParam, "MSGROUP");
    rt.memory().store32(kAdhocParam + 8, 60);
    REQUIRE(call(rt, imp, "sceUtilityNetconfInitStart", kNetconf) == 0);
    REQUIRE(call(rt, imp, "sceUtilityNetconfGetStatus") == 1); // INITIALIZE first
    std::uint32_t status = 0;
    REQUIRE(wait_for(
        [&] {
            call(rt, imp, "sceUtilityNetconfUpdate", 1);
            status = call(rt, imp, "sceUtilityNetconfGetStatus");
            return status == 3; // QUIT
        },
        15000));
    REQUIRE(rt.memory().load32(kNetconf + 28) == 0); // dialog result: success
    // CONNECT was delivered to the registered handler with the registered argument.
    bool saw_connect = false;
    for (int i = 0; i < 4 && !saw_connect; ++i) {
        call(rt, imp, "sceUtilityNetconfUpdate", 1);
        for (auto &g : imp.guest_calls) saw_connect |= g.entry == 0x08970F68 && g.a0 == adhocctl_event::kConnect && g.a1 == 0 && g.a2 == 0x1234;
    }
    REQUIRE(saw_connect);
    REQUIRE(call(rt, imp, "sceUtilityNetconfShutdownStart") == 0);
    REQUIRE(call(rt, imp, "sceUtilityNetconfGetStatus") == 4);
    REQUIRE(call(rt, imp, "sceUtilityNetconfGetStatus") == 0);

    // The remote host saw us join with the nickname we configured.
    {
        std::lock_guard<std::mutex> lock(host_mu);
        REQUIRE(host.peers().size() == 1 && host.peers()[0].nickname == "TestPSP");
    }

    // ---- PDP ----------------------------------------------------------------------------------
    REQUIRE(call(rt, imp, "sceNetGetLocalEtherAddr", kMac) == 0);
    const std::int32_t pdp = static_cast<std::int32_t>(call(rt, imp, "sceNetAdhocPdpCreate", kMac, 5000, 65523, 0));
    REQUIRE(pdp > 0);
    // GetPdpStat two-call pattern
    rt.memory().store32(kStatSize, 0);
    REQUIRE(call(rt, imp, "sceNetAdhocGetPdpStat", kStatSize, 0) == 0);
    REQUIRE(rt.memory().load32(kStatSize) == 20);
    REQUIRE(call(rt, imp, "sceNetAdhocGetPdpStat", kStatSize, kStatBuf) == 0);
    REQUIRE(rt.memory().load32(kStatBuf + 0) == 0 && rt.memory().load32(kStatBuf + 4) == static_cast<std::uint32_t>(pdp));
    REQUIRE(rt.memory().load16(kStatBuf + 14) == 5000);

    // remote host opens the same port and talks to us
    int host_sock = 0;
    AdhocMac host_mac;
    {
        std::lock_guard<std::mutex> lock(host_mu);
        host_mac = host.local_mac();
        host_sock = host.pdp_create(host_mac, 5000, 65523);
        REQUIRE(host_sock > 0);
        const std::vector<std::uint8_t> hello = {'h', 'e', 'l', 'l', 'o', '-', 'p', 's', 'p'};
        REQUIRE(host.pdp_send(host_sock, kAdhocBroadcastMac, 5000, hello.data(), hello.size()) == 0);
    }
    // guest polls PdpRecv (non-blocking, as the game does) until the datagram arrives
    rt.memory().store32(kLenPtr, 2048);
    std::uint32_t r = adhoc_err::kWouldBlock;
    REQUIRE(wait_for(
        [&] {
            rt.memory().store32(kLenPtr, 2048);
            r = call(rt, imp, "sceNetAdhocPdpRecv", static_cast<std::uint32_t>(pdp), kSrcMac, kPortPtr, kRecv, kLenPtr, 0, 1);
            return r != adhoc_err::kWouldBlock;
        },
        5000));
    REQUIRE(r == 0);
    REQUIRE(rt.memory().load32(kLenPtr) == 9);
    {
        std::string got;
        for (std::uint32_t i = 0; i < 9; ++i) got.push_back(static_cast<char>(rt.memory().load8(kRecv + i)));
        REQUIRE(got == "hello-psp");
    }
    REQUIRE(rt.memory().load16(kPortPtr) == 5000);
    for (std::uint32_t i = 0; i < 6; ++i) REQUIRE(rt.memory().load8(kSrcMac + i) == host_mac[i]);
    REQUIRE(call(rt, imp, "sceNetAdhocPdpRecv", static_cast<std::uint32_t>(pdp), kSrcMac, kPortPtr, kRecv, kLenPtr, 0, 1) ==
            adhoc_err::kWouldBlock);

    // guest -> host
    for (std::uint32_t i = 0; i < 6; ++i) rt.memory().store8(kPeerMac + i, host_mac[i]);
    store_str(rt, kSend, "from-the-psp");
    REQUIRE(call(rt, imp, "sceNetAdhocPdpSend", static_cast<std::uint32_t>(pdp), kPeerMac, 5000, kSend, 12, 0, 1) == 0);
    AdhocNode::Datagram d;
    REQUIRE(wait_for(
        [&] {
            std::lock_guard<std::mutex> lock(host_mu);
            return host.pdp_recv(host_sock, d) == 0;
        },
        5000));
    REQUIRE(std::string(d.data.begin(), d.data.end()) == "from-the-psp");
    // argument validation
    REQUIRE(call(rt, imp, "sceNetAdhocPdpSend", 999, kPeerMac, 5000, kSend, 12, 0, 1) == adhoc_err::kInvalidSocketId);
    REQUIRE(call(rt, imp, "sceNetAdhocPdpSend", static_cast<std::uint32_t>(pdp), 0, 5000, kSend, 12, 0, 1) == adhoc_err::kInvalidArg);

    // MAC formatting helper
    REQUIRE(call(rt, imp, "sceNetEtherNtostr", kMac, kSend) == 0);
    REQUIRE(rt.memory().read_c_string(kSend, 32) == mac_to_string(AdhocMac{rt.memory().load8(kMac), rt.memory().load8(kMac + 1),
                                                                            rt.memory().load8(kMac + 2), rt.memory().load8(kMac + 3),
                                                                            rt.memory().load8(kMac + 4), rt.memory().load8(kMac + 5)}));

    // ---- leaving the group ---------------------------------------------------------------------
    imp.guest_calls.clear();
    REQUIRE(call(rt, imp, "sceNetAdhocctlDisconnect") == 0);
    bool saw_disconnect = false;
    for (int i = 0; i < 4 && !saw_disconnect; ++i) {
        call(rt, imp, "sceUtilityNetconfUpdate", 1);
        for (auto &g : imp.guest_calls) saw_disconnect |= g.a0 == adhocctl_event::kDisconnect && g.a2 == 0x1234;
    }
    REQUIRE(saw_disconnect);
    REQUIRE(call(rt, imp, "sceNetAdhocPdpSend", static_cast<std::uint32_t>(pdp), kPeerMac, 5000, kSend, 12, 0, 1) != 0);

    // ---- an infrastructure (non-adhoc) dialog request fails instead of hanging ------------------
    rt.memory().store32(kNetconf + 48, 0); // CONNECTAP
    rt.memory().store32(kNetconf + 28, 0);
    REQUIRE(call(rt, imp, "sceUtilityNetconfInitStart", kNetconf) == 0);
    REQUIRE(wait_for(
        [&] {
            call(rt, imp, "sceUtilityNetconfUpdate", 1);
            return call(rt, imp, "sceUtilityNetconfGetStatus") == 3;
        },
        3000));
    REQUIRE(rt.memory().load32(kNetconf + 28) == 0x80110001u);
}

} // namespace

int main() {
    int failed = 0;
    try {
        std::printf("[ RUN  ] adhoc_session_through_hle\n");
        test_adhoc_session_through_hle();
        std::printf("[  OK  ] adhoc_session_through_hle\n");
    } catch (const std::exception &e) {
        ++failed;
        std::printf("[ FAIL ] adhoc_session_through_hle: %s\n", e.what());
    }
    std::printf("%d checks, %d test(s) failed\n", g_checks, failed);
    return failed ? 1 : 0;
}
