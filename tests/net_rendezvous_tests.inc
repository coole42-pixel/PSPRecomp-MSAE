// Rendezvous / hole-punch / relay tests.  Included inside the anonymous namespace of
// net_tests.cpp.  NATs are modelled in the simulator with a mutator:
//   restricted: a node only receives from addresses it has already sent to (the server is
//               always reachable because the node registered with it first)
//   blocked:    direct node<->node traffic is impossible (stands in for symmetric NAT)

#include "psprecomp/net/rendezvous.hpp"

struct World {
    enum class Nat { Open, Restricted, Blocked };

    SimNetwork net;
    NetAddr server_addr{0xC0000201u, 3478}, host_addr{0x0A000002u, 5000}, join_addr{0x0A000003u, 5001};
    std::unique_ptr<IDatagramTransport> t_server, t_host, t_join;
    std::unique_ptr<RendezvousServer> server;
    std::unique_ptr<RoomHost> host;
    std::unique_ptr<RoomJoiner> joiner;
    crypto::Invite invite;
    uint64_t now = 1'000'000;
    Nat nat = Nat::Open;
    std::set<std::pair<NetAddr, NetAddr>> sent_pairs; // (from, to) seen
    uint64_t punch_packets = 0;
    bool plaintext_seen = false;
    std::vector<uint8_t> secret_marker;
    Collected host_events, join_events;

    explicit World(Nat n, SimLinkParams link = {}, RoomConfig rc = {}, RendezvousConfig sc = {}) : net(link), nat(n) {
        crypto::generate_invite(invite);
        t_server = net.create_endpoint(server_addr);
        t_host = net.create_endpoint(host_addr);
        t_join = net.create_endpoint(join_addr);
        server = std::make_unique<RendezvousServer>(*t_server, sc);
        Config ec;
        ec.rng_seed = 5;
        host = std::make_unique<RoomHost>(*t_host, server_addr, invite, ec);
        ec.rng_seed = 6;
        joiner = std::make_unique<RoomJoiner>(*t_join, server_addr, invite, ec, rc);
        net.set_time(now);
        net.set_mutator([this](const NetAddr &from, const NetAddr &to, std::vector<uint8_t> &d) {
            if (!secret_marker.empty() &&
                std::search(d.begin(), d.end(), secret_marker.begin(), secret_marker.end()) != d.end())
                plaintext_seen = true;
            if (!d.empty() && d[0] == 0xA9) ++punch_packets;
            const bool via_server = from == server_addr || to == server_addr;
            bool allow = true;
            if (!via_server) {
                if (nat == Nat::Blocked) allow = false;
                if (nat == Nat::Restricted) {
                    // destination NAT accepts only from endpoints it has already contacted
                    allow = sent_pairs.count({to, from}) != 0;
                }
            }
            sent_pairs.insert({from, to});
            return allow;
        });
    }

    void step(uint64_t dt = 1000) {
        now += dt;
        net.set_time(now);
        server->update(now);
        host->update(now);
        joiner->update(now);
        Event e;
        while (host->endpoint().poll(e)) host_events.events.push_back(std::move(e));
        while (joiner->poll(e)) join_events.events.push_back(std::move(e));
    }
    bool run_until(uint64_t max_ms, const std::function<bool()> &pred) {
        for (uint64_t i = 0; i < max_ms; ++i) {
            if (pred()) return true;
            step();
        }
        return pred();
    }
    void run_ms_loop(uint64_t ms) {
        for (uint64_t i = 0; i < ms; ++i) step();
    }
    ConnId host_conn() const {
        const Event *e = host_events.find(Event::Type::Connected);
        return e ? e->conn : 0;
    }
};

static bool is_connected(World &w) {
    return w.joiner->state() == RoomJoiner::State::Connected && w.host_conn() != 0;
}

void test_rv_direct_open_nat() {
    SimLinkParams link;
    link.latency_us = 20'000;
    World w(World::Nat::Open, link);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(20'000, [&] { return is_connected(w); }));
    REQUIRE(!w.joiner->relayed());
    REQUIRE(w.host->registered());
    REQUIRE(w.host->public_addr() == w.host_addr); // server saw our (here: public) address
    w.secret_marker = {'R', 'A', 'C', 'E', '-', 'S', 'T', 'A', 'T', 'E', '-', 'X'};
    for (int i = 0; i < 20; ++i) {
        REQUIRE(w.joiner->endpoint().send(w.joiner->conn(), 1, w.secret_marker, true) == SendResult::Ok);
        REQUIRE(w.host->endpoint().send(w.host_conn(), 1, w.secret_marker, true) == SendResult::Ok);
        for (int k = 0; k < 30; ++k) w.step();
    }
    size_t at_host = 0, at_join = 0;
    for (auto &e : w.host_events.events) at_host += e.type == Event::Type::Message && e.data == w.secret_marker;
    for (auto &e : w.join_events.events) at_join += e.type == Event::Type::Message && e.data == w.secret_marker;
    REQUIRE(at_host == 20 && at_join == 20);
    REQUIRE(!w.plaintext_seen);
    REQUIRE(w.server->stats().relayed_packets == 0); // direct path: server only did signalling
}

void test_rv_hole_punching_restricted_nat() {
    SimLinkParams link;
    link.latency_us = 25'000;
    World w(World::Nat::Restricted, link);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(20'000, [&] { return is_connected(w); }));
    REQUIRE(!w.joiner->relayed());          // direct, thanks to the punch
    REQUIRE(w.punch_packets >= 1);          // the host did send a punch toward the joiner
    REQUIRE(w.server->stats().relayed_packets == 0);
    REQUIRE(w.joiner->signaling().relayed_tx == 0);
}

void test_rv_punch_is_what_makes_restricted_nat_work() {
    // Control experiment: same restricted NATs, but the host's punch datagrams are
    // dropped.  The direct attempt must then fail and the session fall back to the relay,
    // proving the previous test passes because of the punch and not by accident.
    SimLinkParams link;
    link.latency_us = 25'000;
    World w(World::Nat::Restricted, link);
    auto inner = [&w](const NetAddr &from, const NetAddr &to, std::vector<uint8_t> &d) {
        if (!d.empty() && d[0] == 0xA9) return false; // eat punches
        const bool via_server = from == w.server_addr || to == w.server_addr;
        bool allow = true;
        if (!via_server) allow = w.sent_pairs.count({to, from}) != 0;
        w.sent_pairs.insert({from, to});
        return allow;
    };
    w.net.set_mutator(inner);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(40'000, [&] { return is_connected(w); }));
    REQUIRE(w.joiner->relayed());
}

void test_rv_relay_fallback_when_direct_impossible() {
    SimLinkParams link;
    link.latency_us = 30'000;
    link.loss = 0.05;
    link.seed = 8;
    World w(World::Nat::Blocked, link);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(40'000, [&] { return is_connected(w); }));
    REQUIRE(w.joiner->relayed());
    REQUIRE(w.joiner->signaling().relayed_tx > 0 && w.host->signaling().relayed_rx > 0);

    w.secret_marker = {'R', 'E', 'L', 'A', 'Y', 'E', 'D', '-', 'S', 'E', 'C', 'R', 'E', 'T'};
    const uint32_t kCount = 200;
    for (uint32_t i = 0; i < kCount; ++i) {
        while (w.joiner->endpoint().send(w.joiner->conn(), 2, u32_payload(i), true) != SendResult::Ok) w.step();
        w.joiner->endpoint().send(w.joiner->conn(), 3, w.secret_marker, false);
        w.step();
    }
    w.run_ms_loop(5000);
    std::vector<uint32_t> got;
    for (auto &e : w.host_events.events)
        if (e.type == Event::Type::Message && e.reliable && e.channel == 2) got.push_back(read_u32(e.data));
    REQUIRE(got.size() == kCount);
    for (uint32_t i = 0; i < kCount; ++i) REQUIRE(got[i] == i);
    REQUIRE(w.server->stats().relayed_packets > 100);
    REQUIRE(!w.plaintext_seen); // the relay (and wire) only ever carried ciphertext
}

void test_rv_unknown_room_and_wrong_invite_fail() {
    RoomConfig rc;
    rc.total_timeout_us = 4'000'000;
    World w(World::Nat::Open, {}, rc);
    // Joiner built from a different invite: its room id is unknown to the server.
    crypto::Invite other;
    crypto::generate_invite(other);
    Config ec;
    w.joiner = std::make_unique<RoomJoiner>(*w.t_join, w.server_addr, other, ec, rc);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(10'000, [&] { return w.joiner->state() == RoomJoiner::State::Failed; }));
    REQUIRE(w.server->stats().lookups_missed >= 1);
    REQUIRE(w.host_conn() == 0);
}

void test_rv_room_hijack_rejected() {
    World w(World::Nat::Open);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(20'000, [&] { return is_connected(w); }));
    // An attacker who learned the (public) room id registers it with a different owner secret.
    NetAddr evil{0x0B000001u, 6000};
    auto te = w.net.create_endpoint(evil);
    SignalingTransport sig(*te, w.server_addr);
    RoomSecret bad;
    bad.fill(0x66);
    sig.register_room(crypto::invite_room_id(w.invite), bad);
    bool rejected = false;
    for (int i = 0; i < 3000 && !rejected; ++i) {
        w.step();
        sig.update(w.now);
        uint8_t buf[64];
        NetAddr from;
        sig.recv_from(from, buf, sizeof(buf));
        SignalEvent ev;
        while (sig.poll(ev))
            if (ev.type == SignalEvent::Type::RegisterRejected) rejected = true;
    }
    REQUIRE(rejected);
    // Legit host unaffected: new joiners still resolve to the real host.
    NetAddr j2{0x0A000009u, 5009};
    auto tj2 = w.net.create_endpoint(j2);
    Config ec;
    ec.rng_seed = 9;
    RoomJoiner joiner2(*tj2, w.server_addr, w.invite, ec);
    joiner2.start(w.now);
    bool ok = false;
    for (int i = 0; i < 20'000 && !ok; ++i) {
        w.step();
        joiner2.update(w.now);
        Event e;
        while (joiner2.poll(e)) {}
        ok = joiner2.state() == RoomJoiner::State::Connected;
    }
    REQUIRE(ok);
}

void test_rv_relay_is_not_an_open_proxy() {
    World w(World::Nat::Open);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(20'000, [&] { return is_connected(w); }));
    uint64_t before = w.server->stats().relayed_packets;
    NetAddr evil{0x0B000001u, 6000}, victim{0x0C000001u, 7000};
    auto te = w.net.create_endpoint(evil);
    auto tv = w.net.create_endpoint(victim);
    // Relay frame for the real room, but neither party is the host: must be dropped.
    std::vector<uint8_t> f = {0xA8, 5};
    auto room = crypto::invite_room_id(w.invite);
    f.insert(f.end(), room.begin(), room.end());
    f.insert(f.end(), victim.ip.begin(), victim.ip.end());
    f.push_back(static_cast<uint8_t>(victim.port));
    f.push_back(static_cast<uint8_t>(victim.port >> 8));
    f.insert(f.end(), 100, 0x42);
    for (int i = 0; i < 20; ++i) te->send_to(w.server_addr, f.data(), f.size());
    w.run_ms_loop(50);
    NetAddr from;
    uint8_t buf[256];
    REQUIRE(tv->recv_from(from, buf, sizeof(buf)) == 0);
    REQUIRE(w.server->stats().relayed_packets == before);
    REQUIRE(w.server->stats().relay_dropped >= 20);
}

void test_rv_relay_rate_limit() {
    SimLinkParams link;
    RoomConfig rc;
    RendezvousConfig sc;
    sc.relay_bytes_per_sec = 20'000;
    sc.relay_burst_bytes = 5'000;
    World w(World::Nat::Blocked, link, rc, sc);
    w.joiner->start(w.now);
    REQUIRE(w.run_until(40'000, [&] { return is_connected(w); }));
    std::vector<uint8_t> blob(1000, 1);
    Config dummy;
    // flood unreliable data through the relay for 2 s of virtual time
    for (int ms = 0; ms < 2000; ++ms) {
        for (int i = 0; i < 3; ++i) w.joiner->endpoint().send(w.joiner->conn(), 0, blob, false);
        w.step();
    }
    const auto &st = w.server->stats();
    REQUIRE(st.relay_dropped > 0);
    // roughly burst + rate * time (+ handshake traffic); allow generous slack but far below the offered load
    REQUIRE(st.relayed_bytes < 5'000 + 20'000 * 4 + 20'000);
}

void test_rv_room_expiry() {
    RendezvousConfig sc;
    sc.room_ttl_us = 5'000'000;
    World w(World::Nat::Open, {}, {}, sc);
    for (int i = 0; i < 1000; ++i) w.step();
    REQUIRE(w.server->stats().rooms == 1);
    // host vanishes (stops refreshing): swap in a dead transport by dropping its traffic
    w.net.set_mutator([&](const NetAddr &from, const NetAddr &, std::vector<uint8_t> &) { return from != w.host_addr; });
    for (int i = 0; i < 8000; ++i) w.step();
    REQUIRE(w.server->stats().rooms == 0);
    REQUIRE(w.server->stats().rooms_expired == 1);
}

void test_rv_real_sockets_ipv4_and_ipv6() {
    for (int family = 0; family < 2; ++family) {
        std::string err;
        bool v6 = false;
        auto ts = open_udp_socket(0, nullptr, &err, family == 0, &v6);
        auto th = open_udp_socket(0, nullptr, &err, family == 0);
        auto tj = open_udp_socket(0, nullptr, &err, family == 0);
        REQUIRE(ts && th && tj);
        if (family == 1 && !v6) {
            std::printf("    (IPv6 unavailable on this host: skipped)\n");
            continue;
        }
        auto target = [&](uint16_t port) { return family == 0 ? NetAddr::loopback(port) : NetAddr::loopback6(port); };
        NetAddr server_addr = target(ts->local_addr().port);
        RendezvousServer server(*ts);
        crypto::Invite invite;
        REQUIRE(crypto::generate_invite(invite));
        RoomHost host(*th, server_addr, invite);
        RoomJoiner joiner(*tj, server_addr, invite);
        joiner.start(monotonic_now_us());
        bool connected = false, got = false;
        const std::vector<uint8_t> hello = {'h', 'e', 'l', 'l', 'o'};
        uint64_t deadline = monotonic_now_us() + 10'000'000;
        ConnId host_conn = 0;
        while (monotonic_now_us() < deadline && !got) {
            uint64_t now = monotonic_now_us();
            server.update(now);
            host.update(now);
            joiner.update(now);
            Event e;
            while (host.endpoint().poll(e)) {
                if (e.type == Event::Type::Connected) host_conn = e.conn;
                if (e.type == Event::Type::Message && e.data == hello) got = true;
            }
            while (joiner.poll(e)) {}
            if (!connected && joiner.state() == RoomJoiner::State::Connected) {
                connected = true;
                REQUIRE(joiner.endpoint().send(joiner.conn(), 1, hello, true) == SendResult::Ok);
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
        REQUIRE(connected && got && host_conn != 0);
        REQUIRE(!joiner.relayed());
        REQUIRE(host.registered());
        std::printf("    real sockets (%s): host sees public addr %s, joiner connected direct\n",
                    family == 0 ? "IPv4" : "IPv6", host.public_addr().to_string().c_str());
    }
}
