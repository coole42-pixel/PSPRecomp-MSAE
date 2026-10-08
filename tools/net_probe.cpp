// psp_net_probe: two-instance connection prototype for the thin UDP layer.
//
//   psp_net_probe host --port 4242 [--seconds N]
//   psp_net_probe join 127.0.0.1:4242 [--seconds N] [--loss P] [--rate HZ]
//
// Each side exchanges a reliable sequenced "tick" stream plus unreliable pings at
// --rate Hz (default 60, like a game frame), logs connection state / RTT / loss, and
// verifies the reliable stream arrives complete and in order.  Exit code 0 only when
// both the connection and the stream check succeeded.  --loss simulates *outgoing*
// loss locally (for testing over loopback without a network simulator).

#include "psprecomp/net/crypto.hpp"
#include "psprecomp/net/rendezvous.hpp"
#include "psprecomp/net/thin_udp.hpp"
#include "psprecomp/net/transport.hpp"

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <random>
#include <string>
#include <thread>

using namespace psprecomp::net;

namespace {

// Wraps a transport and drops outgoing datagrams with probability `loss`.
class LossyTransport final : public IDatagramTransport {
public:
    LossyTransport(IDatagramTransport &inner, double loss, uint64_t seed) : inner_(inner), loss_(loss), rng_(seed) {}
    bool send_to(const NetAddr &to, const uint8_t *d, size_t n) override {
        if (loss_ > 0.0 && std::uniform_real_distribution<double>(0.0, 1.0)(rng_) < loss_) return true;
        return inner_.send_to(to, d, n);
    }
    int recv_from(NetAddr &from, uint8_t *b, size_t cap) override { return inner_.recv_from(from, b, cap); }
    NetAddr local_addr() const override { return inner_.local_addr(); }

private:
    IDatagramTransport &inner_;
    double loss_;
    std::mt19937_64 rng_;
};

void usage() {
    std::fprintf(stderr,
                 "usage: psp_net_probe host --port N [--new-invite | --invite CODE] [--seconds S] [--loss P] [--rate HZ]\n"
                 "       psp_net_probe join IP:PORT|[IPV6]:PORT [--invite CODE] [--seconds S] [--loss P] [--rate HZ]\n");
}

} // namespace

int main(int argc, char **argv) {
    if (argc == 2 && std::strcmp(argv[1], "invite-check") == 0) {
        // Reads invite codes (one per line) from stdin and prints the canonical form or INVALID;
        // used to cross-check the Android (Java) invite codec against the native one.
        char line[512];
        while (std::fgets(line, sizeof(line), stdin)) {
            std::string text(line);
            while (!text.empty() && (text.back() == 10 || text.back() == 13)) text.pop_back();
            crypto::Invite parsed{};
            if (crypto::invite_from_string(text, parsed)) std::puts(crypto::invite_to_string(parsed).c_str());
            else std::puts("INVALID");
        }
        return 0;
    }
    if (argc < 3 && !(argc == 2 && std::strcmp(argv[1], "host") == 0)) {
        usage();
        return 2;
    }
    const bool hosting = std::strcmp(argv[1], "host") == 0;
    uint16_t port = 0;
    NetAddr target;
    double seconds = 10.0, loss = 0.0, rate = 60.0;
    int argi = 2;
    if (!hosting) {
        if (std::strcmp(argv[2], "room") != 0 && (!NetAddr::parse(argv[2], target) || target.port == 0)) {
            usage();
            return 2;
        }
        argi = 3;
    }
    crypto::Invite invite{};
    bool have_invite = false;
    bool use_room = false, force_relay = false;
    NetAddr room_server;
    for (; argi < argc; ++argi) {
        if (!std::strcmp(argv[argi], "--new-invite")) {
            if (!crypto::generate_invite(invite)) {
                std::fprintf(stderr, "no OS randomness\n");
                return 1;
            }
            have_invite = true;
            std::printf("INVITE %s\n", crypto::invite_to_string(invite).c_str());
            std::fflush(stdout);
            continue;
        }
        if (!std::strcmp(argv[argi], "--force-relay")) {
            force_relay = true;
            continue;
        }
        if (argi + 1 >= argc) {
            usage();
            return 2;
        }
        if (!std::strcmp(argv[argi], "--room-server")) {
            if (!NetAddr::parse(argv[argi + 1], room_server) || room_server.port == 0) {
                std::fprintf(stderr, "bad --room-server address\n");
                return 2;
            }
            use_room = true;
            ++argi;
            continue;
        }
        if (!std::strcmp(argv[argi], "--invite")) {
            if (!crypto::invite_from_string(argv[argi + 1], invite)) {
                std::fprintf(stderr, "bad invite code\n");
                return 2;
            }
            have_invite = true;
            ++argi;
            continue;
        }
        if (!std::strcmp(argv[argi], "--port")) port = static_cast<uint16_t>(std::atoi(argv[argi + 1]));
        else if (!std::strcmp(argv[argi], "--seconds")) seconds = std::atof(argv[argi + 1]);
        else if (!std::strcmp(argv[argi], "--loss")) loss = std::atof(argv[argi + 1]);
        else if (!std::strcmp(argv[argi], "--rate")) rate = std::atof(argv[argi + 1]);
        else {
            usage();
            return 2;
        }
        ++argi;
    }
    if (rate < 1.0) rate = 1.0;

    std::string err;
    auto sock = open_udp_socket(hosting ? port : 0, nullptr, &err);
    if (!sock) {
        std::fprintf(stderr, "socket error: %s\n", err.c_str());
        return 1;
    }
    LossyTransport transport(*sock, loss, 0xC0FFEE ^ sock->local_addr().port);

    Config cfg;
    if (have_invite) cfg.set_invite(invite);
    cfg.log_level = LogLevel::Info;
    cfg.stats_log_interval_us = 1'000'000;
    const uint64_t t_start = monotonic_now_us();
    cfg.log = [t_start](LogLevel lvl, const std::string &m) {
        static const char *names[] = {"ERR ", "WARN", "INFO", "DBG ", "TRC "};
        std::printf("[%8.3f] %s %s\n", static_cast<double>(monotonic_now_us() - t_start) / 1e6,
                    names[static_cast<int>(lvl)], m.c_str());
        std::fflush(stdout);
    };
    // Either a plain endpoint (direct address) or a room (rendezvous + punch + relay).
    std::unique_ptr<Endpoint> plain_ep;
    std::unique_ptr<RoomHost> room_host;
    std::unique_ptr<RoomJoiner> room_join;
    Endpoint *epp = nullptr;
    if (use_room) {
        if (!have_invite) {
            std::fprintf(stderr, "--room-server needs --invite or --new-invite\n");
            return 2;
        }
        if (hosting) {
            room_host = std::make_unique<RoomHost>(transport, room_server, invite, cfg);
            epp = &room_host->endpoint();
        } else {
            RoomConfig rc;
            if (force_relay) rc.direct_timeout_us = 0;
            room_join = std::make_unique<RoomJoiner>(transport, room_server, invite, cfg, rc);
            epp = &room_join->endpoint();
        }
    } else {
        plain_ep = std::make_unique<Endpoint>(transport, cfg);
        plain_ep->set_accepting(hosting);
        epp = plain_ep.get();
    }
    Endpoint &ep = *epp;
    auto pump = [&](uint64_t now) {
        if (room_host) room_host->update(now);
        else if (room_join) room_join->update(now);
        else ep.update(now);
    };
    auto next_event = [&](Event &e) { return room_join ? room_join->poll(e) : ep.poll(e); };

    ConnId conn = 0;
    if (room_join) {
        room_join->start(monotonic_now_us());
    } else if (hosting) {
        std::printf("hosting on port %u (pid-local socket %s)\n", sock->local_addr().port,
                    sock->local_addr().to_string().c_str());
        std::fflush(stdout);
    } else {
        conn = ep.connect(target, monotonic_now_us());
    }
    if (room_host) {
        std::printf("hosting room (invite above) via rendezvous %s\n", room_server.to_string().c_str());
        std::fflush(stdout);
    }

    bool ever_connected = false, disconnected = false;
    uint32_t sessions = 0, sessions_ok = 0;
    uint32_t tx_seq = 0, rx_expected = 0, rx_bad = 0, rx_unreliable = 0;
    const uint64_t period_us = static_cast<uint64_t>(1e6 / rate);
    uint64_t next_tick = monotonic_now_us();
    const uint64_t end_us = t_start + static_cast<uint64_t>(seconds * 1e6);
    DisconnectReason end_reason = DisconnectReason::None;

    while (monotonic_now_us() < end_us && !disconnected) {
        uint64_t now = monotonic_now_us();
        pump(now);
        Event e;
        while (next_event(e)) {
            switch (e.type) {
            case Event::Type::Connected:
                ever_connected = true;
                conn = e.conn;
                break;
            case Event::Type::Disconnected:
                if (hosting && use_room && e.reason == DisconnectReason::RemoteClose) {
                    // A room host keeps serving: score the finished session and wait for the next joiner.
                    ++sessions;
                    if (rx_bad == 0 && rx_expected > 0) ++sessions_ok;
                    ever_connected = false;
                    conn = 0;
                    tx_seq = rx_expected = rx_bad = 0;
                    break;
                }
                disconnected = true;
                end_reason = e.reason;
                break;
            case Event::Type::Message:
                if (e.reliable && e.data.size() == 4) {
                    uint32_t v = static_cast<uint32_t>(e.data[0]) | static_cast<uint32_t>(e.data[1]) << 8 |
                                 static_cast<uint32_t>(e.data[2]) << 16 | static_cast<uint32_t>(e.data[3]) << 24;
                    if (v != rx_expected) ++rx_bad;
                    rx_expected = v + 1;
                } else if (!e.reliable) {
                    ++rx_unreliable;
                }
                break;
            }
        }
        if (ever_connected && now >= next_tick) {
            next_tick += period_us;
            if (next_tick < now) next_tick = now + period_us;
            uint8_t b[4] = {static_cast<uint8_t>(tx_seq), static_cast<uint8_t>(tx_seq >> 8),
                            static_cast<uint8_t>(tx_seq >> 16), static_cast<uint8_t>(tx_seq >> 24)};
            if (ep.send(conn, 1, b, 4, true) == SendResult::Ok) ++tx_seq;
            ep.send(conn, 2, b, 4, false);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    ConnStats st;
    bool have_stats = ever_connected && ep.stats(conn, st);
    if (ever_connected && !disconnected) ep.close(conn, monotonic_now_us());
    if (room_join) std::printf("route: %s\n", room_join->relayed() ? "RELAY" : "direct");
    std::printf("summary: connected=%d reliable_tx=%u reliable_rx=%u out_of_order=%u unreliable_rx=%u end=%s\n",
                ever_connected, tx_seq, rx_expected, rx_bad, rx_unreliable,
                disconnected ? to_string(end_reason) : "time-up");
    if (have_stats) std::printf("final: %s\n", format_stats(st).c_str());
    bool ok = ever_connected && rx_bad == 0 && rx_expected > 0;
    if (hosting && use_room) {
        if (ever_connected && rx_bad == 0 && rx_expected > 0) ++sessions_ok;
        if (ever_connected) ++sessions;
        std::printf("room host: %u session(s), %u clean\n", sessions, sessions_ok);
        ok = sessions > 0 && sessions_ok == sessions;
    }
    // A remote close at the very end is normal for the host; anything else is a failure.
    if (disconnected && end_reason != DisconnectReason::RemoteClose) ok = false;
    std::printf("%s\n", ok ? "PROBE OK" : "PROBE FAILED");
    return ok ? 0 : 1;
}
