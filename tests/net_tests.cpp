// Tests for the thin UDP multiplayer transport (psprecomp_net).
// Everything except test_real_udp_loopback runs on the deterministic simulator with a
// virtual clock, so results are reproducible bit-for-bit.

#include "psprecomp/net/adhoc.hpp"
#include "psprecomp/net/crypto.hpp"
#include "psprecomp/net/rendezvous.hpp"
#include "psprecomp/net/thin_udp.hpp"
#include "psprecomp/net/transport.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <chrono>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <random>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

using namespace psprecomp::net;

static int g_checks = 0;
#define REQUIRE(cond)                                                                            \
    do {                                                                                         \
        ++g_checks;                                                                              \
        if (!(cond)) {                                                                           \
            std::ostringstream os_;                                                              \
            os_ << __FILE__ << ":" << __LINE__ << ": requirement failed: " #cond;                \
            throw std::runtime_error(os_.str());                                                 \
        }                                                                                        \
    } while (0)

namespace {
#include "net_crypto_vectors.inc"

std::vector<uint8_t> pat(size_t n, unsigned a = 7, unsigned b = 3) {
    std::vector<uint8_t> v(n);
    for (size_t i = 0; i < n; ++i) v[i] = static_cast<uint8_t>((i * a + b) & 0xFF);
    return v;
}
std::string to_hex(const uint8_t *d, size_t n) {
    static const char *h = "0123456789abcdef";
    std::string s;
    for (size_t i = 0; i < n; ++i) {
        s.push_back(h[d[i] >> 4]);
        s.push_back(h[d[i] & 15]);
    }
    return s;
}
std::vector<uint8_t> from_hex(const std::string &s) {
    std::vector<uint8_t> v;
    for (size_t i = 0; i + 1 < s.size(); i += 2) v.push_back(static_cast<uint8_t>(std::stoi(s.substr(i, 2), nullptr, 16)));
    return v;
}

struct Collected {
    std::vector<Event> events;
    size_t count(Event::Type t) const {
        return static_cast<size_t>(std::count_if(events.begin(), events.end(), [&](const Event &e) { return e.type == t; }));
    }
    const Event *find(Event::Type t) const {
        for (auto &e : events)
            if (e.type == t) return &e;
        return nullptr;
    }
};

// Two endpoints (A = client, B = host) on a simulated link.
struct Pair {
    SimNetwork net;
    NetAddr addr_a{0x0A000001u, 4000}, addr_b{0x0A000002u, 4001};
    std::unique_ptr<IDatagramTransport> ta, tb;
    std::unique_ptr<Endpoint> a, b;
    Collected ev_a, ev_b;
    uint64_t now = 1'000'000;
    ConnId conn_a = 0, conn_b = 0;

    explicit Pair(SimLinkParams link = {}, Config ca = {}, Config cb = {}) : net(link) {
        ca.rng_seed = ca.rng_seed ? ca.rng_seed : 11;
        cb.rng_seed = cb.rng_seed ? cb.rng_seed : 22;
        ta = net.create_endpoint(addr_a);
        tb = net.create_endpoint(addr_b);
        a = std::make_unique<Endpoint>(*ta, ca);
        b = std::make_unique<Endpoint>(*tb, cb);
        b->set_accepting(true);
        net.set_time(now);
    }

    void step(uint64_t dt_us = 1000) {
        now += dt_us;
        net.set_time(now);
        a->update(now);
        b->update(now);
        Event e;
        while (a->poll(e)) ev_a.events.push_back(std::move(e));
        while (b->poll(e)) ev_b.events.push_back(std::move(e));
    }
    void run_ms(uint64_t ms) {
        for (uint64_t i = 0; i < ms; ++i) step();
    }
    bool run_until(uint64_t max_ms, const std::function<bool()> &pred) {
        for (uint64_t i = 0; i < max_ms; ++i) {
            if (pred()) return true;
            step();
        }
        return pred();
    }
    bool connect() {
        conn_a = a->connect(addr_b, now);
        bool ok = run_until(20'000, [&] { return ev_a.count(Event::Type::Connected) && ev_b.count(Event::Type::Connected); });
        if (ok) conn_b = ev_b.find(Event::Type::Connected)->conn;
        return ok;
    }
};

std::vector<uint8_t> u32_payload(uint32_t v) {
    return {static_cast<uint8_t>(v), static_cast<uint8_t>(v >> 8), static_cast<uint8_t>(v >> 16), static_cast<uint8_t>(v >> 24)};
}
uint32_t read_u32(const std::vector<uint8_t> &d) {
    return d.size() < 4 ? 0u : static_cast<uint32_t>(d[0]) | static_cast<uint32_t>(d[1]) << 8 |
                                    static_cast<uint32_t>(d[2]) << 16 | static_cast<uint32_t>(d[3]) << 24;
}

// ---------------------------------------------------------------------------------
void test_siphash_vector() {
    // Reference vector from the SipHash paper: key 00..0f, message 00..0e.
    uint8_t msg[15];
    for (int i = 0; i < 15; ++i) msg[i] = static_cast<uint8_t>(i);
    uint64_t k0 = 0x0706050403020100ull, k1 = 0x0f0e0d0c0b0a0908ull;
    REQUIRE(siphash24(k0, k1, msg, 15) == 0xa129ca6149be45e5ull);
    REQUIRE(siphash24(k0, k1, msg, 0) == 0x726fdb47dd0e0e31ull);
}

void test_crypto_blake2s() {
    for (const auto &v : kBlake2sVecs) {
        auto msg = pat(v.len);
        auto key = v.keylen ? pat(v.keylen, 5, 1) : std::vector<uint8_t>();
        uint8_t out[32];
        crypto::blake2s(out, msg.data(), msg.size(), key.empty() ? nullptr : key.data(), key.size());
        REQUIRE(to_hex(out, 32) == v.hex);
    }
}

void test_crypto_aead() {
    auto key = pat(32, 3, 9);
    auto nonce = pat(12, 11, 2);
    for (const auto &v : kAeadVecs) {
        auto plain = pat(v.len, 9, 4);
        auto aad = pat(v.aad, 13, 5);
        std::vector<uint8_t> ct(v.len + crypto::kTagSize);
        crypto::aead_seal(ct.data(), key.data(), nonce.data(), aad.data(), aad.size(), plain.data(), plain.size());
        REQUIRE(to_hex(ct.data(), ct.size()) == v.hex);
        std::vector<uint8_t> back(v.len + 1);
        REQUIRE(crypto::aead_open(back.data(), key.data(), nonce.data(), aad.data(), aad.size(), ct.data(), ct.size()));
        REQUIRE(std::equal(plain.begin(), plain.end(), back.begin()));
        // every single-byte corruption of ciphertext/tag must be rejected
        for (size_t i = 0; i < ct.size(); ++i) {
            auto bad = ct;
            bad[i] ^= 0x01;
            REQUIRE(!crypto::aead_open(back.data(), key.data(), nonce.data(), aad.data(), aad.size(), bad.data(), bad.size()));
        }
        // wrong aad / nonce / key
        auto bad_aad = pat(v.aad + 1, 13, 5);
        REQUIRE(!crypto::aead_open(back.data(), key.data(), nonce.data(), bad_aad.data(), bad_aad.size(), ct.data(), ct.size()));
        auto bad_nonce = nonce;
        bad_nonce[0] ^= 1;
        REQUIRE(!crypto::aead_open(back.data(), key.data(), bad_nonce.data(), aad.data(), aad.size(), ct.data(), ct.size()));
        auto bad_key = key;
        bad_key[31] ^= 0x80;
        REQUIRE(!crypto::aead_open(back.data(), bad_key.data(), nonce.data(), aad.data(), aad.size(), ct.data(), ct.size()));
    }
    uint8_t tiny[8] = {0};
    uint8_t o[8];
    REQUIRE(!crypto::aead_open(o, key.data(), nonce.data(), nullptr, 0, tiny, 8)); // shorter than a tag
}

void test_crypto_x25519() {
    for (const auto &v : kX25519Vecs) {
        auto pa = pat(32, v.seed_a, 1), pb = pat(32, v.seed_b, 1);
        uint8_t pubA[32], pubB[32], s1[32], s2[32];
        crypto::x25519_public(pubA, pa.data());
        crypto::x25519_public(pubB, pb.data());
        REQUIRE(to_hex(pubA, 32) == v.pub_a);
        REQUIRE(to_hex(pubB, 32) == v.pub_b);
        REQUIRE(crypto::x25519_shared(s1, pa.data(), pubB));
        REQUIRE(crypto::x25519_shared(s2, pb.data(), pubA));
        REQUIRE(to_hex(s1, 32) == v.shared && to_hex(s2, 32) == v.shared);
    }
    // RFC 7748 section 6.1 (Alice/Bob)
    auto a = from_hex("77076d0a7318a57d3c16c17251b26645df4c2f87ebc0992ab177fba51db92c2a");
    auto bpub = from_hex("de9edb7d7b7dc1b4d35b61c2ece435373f8343c85b78674dadfc7e146f882b4f");
    uint8_t shared[32];
    REQUIRE(crypto::x25519_shared(shared, a.data(), bpub.data()));
    REQUIRE(to_hex(shared, 32) == "4a5d9d5ba4ce2de1728e3bf480350f25e07e21c947d19e3376f09b3c1e161742");
    // all-zero and other low-order public keys give an all-zero secret and must be refused
    uint8_t zero[32] = {0}, out[32];
    REQUIRE(!crypto::x25519_shared(out, a.data(), zero));
    uint8_t one[32] = {1};
    REQUIRE(!crypto::x25519_shared(out, a.data(), one));
}

void test_invites() {
    crypto::Invite inv;
    REQUIRE(crypto::generate_invite(inv));
    crypto::Invite inv2;
    REQUIRE(crypto::generate_invite(inv2));
    REQUIRE(inv != inv2);
    std::string text = crypto::invite_to_string(inv);
    REQUIRE(text.size() == 26 + 6); // 26 chars + 6 dashes
    crypto::Invite back;
    REQUIRE(crypto::invite_from_string(text, back) && back == inv);
    // tolerant of case, spaces and the I/L/O confusions
    std::string messy = text;
    for (auto &c : messy)
        if (c >= 'A' && c <= 'Z') c = static_cast<char>(c - 'A' + 'a');
    REQUIRE(crypto::invite_from_string(messy, back) && back == inv);
    REQUIRE(!crypto::invite_from_string(text.substr(0, text.size() - 1), back)); // too short
    REQUIRE(!crypto::invite_from_string(text + "A", back));                      // too long
    REQUIRE(!crypto::invite_from_string("U" + text.substr(1), back));          // 'U' is not in the alphabet
    REQUIRE(crypto::invite_psk(inv) != crypto::invite_psk(inv2));
    REQUIRE(crypto::invite_room_id(inv) != crypto::invite_room_id(inv2));
    // the lookup id must not reveal the psk
    auto psk = crypto::invite_psk(inv);
    auto rid = crypto::invite_room_id(inv);
    REQUIRE(std::memcmp(psk.data(), rid.data(), 16) != 0);
}

void test_addr_parse() {
    NetAddr a;
    REQUIRE(NetAddr::parse("192.168.1.20:4242", a));
    REQUIRE(a.is_v4() && a.v4() == 0xC0A80114u && a.port == 4242);
    REQUIRE(a.to_string() == "192.168.1.20:4242");
    REQUIRE(NetAddr::parse("10.0.0.1", a) && a.port == 0);
    REQUIRE(NetAddr::parse("[::1]:5000", a) && !a.is_v4() && a.port == 5000 && a == NetAddr::loopback6(5000));
    REQUIRE(a.to_string() == "[::1]:5000");
    REQUIRE(NetAddr::parse("[2001:db8::7]:99", a) && a.to_string() == "[2001:db8::7]:99");
    REQUIRE(NetAddr::parse("fe80::1", a) && a.port == 0 && !a.is_v4());
    REQUIRE(!NetAddr::parse("[::1", a) && !NetAddr::parse("[::1]:abc", a) && !NetAddr::parse("[zzz]:1", a));
    REQUIRE(NetAddr::loopback(80) != NetAddr::loopback6(80)); // different families never alias
    REQUIRE(NetAddr(0x7F000001u, 80).is_v4() && NetAddr(0x7F000001u, 80).v4() == 0x7F000001u);
    REQUIRE(!NetAddr::parse("300.1.1.1:1", a));
    REQUIRE(!NetAddr::parse("1.2.3.4:99999", a));
    REQUIRE(!NetAddr::parse("hello", a));
}

void test_handshake_clean() {
    Pair p;
    REQUIRE(p.connect());
    REQUIRE(p.a->state(p.conn_a) == ConnState::Connected);
    REQUIRE(p.b->state(p.conn_b) == ConnState::Connected);
    REQUIRE(p.ev_a.find(Event::Type::Connected)->outbound);
    REQUIRE(!p.ev_b.find(Event::Type::Connected)->outbound);
    REQUIRE(p.b->connection_count() == 1);
}

void test_handshake_under_heavy_loss() {
    SimLinkParams link;
    link.loss = 0.5;
    link.latency_us = 20'000;
    link.seed = 5;
    Pair p(link);
    REQUIRE(p.connect()); // retried every 500 ms, so 50% loss still converges
    REQUIRE(p.ev_b.count(Event::Type::Connected) == 1); // retries must not create duplicate connections
    REQUIRE(p.b->connection_count() == 1);
}

void test_basic_messages_both_ways() {
    SimLinkParams link;
    link.latency_us = 10'000;
    Pair p(link);
    REQUIRE(p.connect());
    std::vector<uint8_t> hello{'h', 'i'};
    REQUIRE(p.a->send(p.conn_a, 7, hello, true) == SendResult::Ok);
    REQUIRE(p.b->send(p.conn_b, 9, hello, false) == SendResult::Ok);
    p.run_ms(200);
    const Event *rb = nullptr, *ra = nullptr;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) rb = &e;
    for (auto &e : p.ev_a.events)
        if (e.type == Event::Type::Message) ra = &e;
    REQUIRE(rb && rb->channel == 7 && rb->reliable && rb->data == hello);
    REQUIRE(ra && ra->channel == 9 && !ra->reliable && ra->data == hello);
}

// 1000 reliable messages through 20% loss, jitter, duplication and reordering must
// arrive complete, in order, exactly once, in both directions simultaneously.
void test_reliable_ordered_exactly_once_under_chaos() {
    SimLinkParams link;
    link.loss = 0.20;
    link.duplicate = 0.05;
    link.reorder = 0.10;
    link.latency_us = 30'000;
    link.jitter_us = 10'000;
    link.seed = 99;
    Pair p(link);
    REQUIRE(p.connect());

    const uint32_t kCount = 1000;
    uint32_t sent_a = 0, sent_b = 0;
    std::vector<uint32_t> got_a, got_b;
    for (int ms = 0; ms < 120'000 && (got_a.size() < kCount || got_b.size() < kCount); ++ms) {
        while (sent_a < kCount && p.a->send(p.conn_a, 1, u32_payload(sent_a), true) == SendResult::Ok) ++sent_a;
        while (sent_b < kCount && p.b->send(p.conn_b, 2, u32_payload(sent_b), true) == SendResult::Ok) ++sent_b;
        p.step();
        for (auto &e : p.ev_a.events)
            if (e.type == Event::Type::Message) got_a.push_back(read_u32(e.data));
        for (auto &e : p.ev_b.events)
            if (e.type == Event::Type::Message) got_b.push_back(read_u32(e.data));
        p.ev_a.events.erase(std::remove_if(p.ev_a.events.begin(), p.ev_a.events.end(),
                                           [](const Event &e) { return e.type == Event::Type::Message; }),
                            p.ev_a.events.end());
        p.ev_b.events.erase(std::remove_if(p.ev_b.events.begin(), p.ev_b.events.end(),
                                           [](const Event &e) { return e.type == Event::Type::Message; }),
                            p.ev_b.events.end());
    }
    REQUIRE(got_a.size() == kCount && got_b.size() == kCount);
    for (uint32_t i = 0; i < kCount; ++i) {
        REQUIRE(got_a[i] == i);
        REQUIRE(got_b[i] == i);
    }
    ConnStats sa;
    REQUIRE(p.a->stats(p.conn_a, sa));
    REQUIRE(sa.reliable_retransmits > 0); // the chaos actually exercised retransmission
    REQUIRE(sa.packets_lost > 0);
    REQUIRE(p.net.dropped() > 0 && p.net.duplicated() > 0);
    std::printf("    chaos: net sent=%llu dropped=%llu dup=%llu | A: %s\n",
                static_cast<unsigned long long>(p.net.sent()), static_cast<unsigned long long>(p.net.dropped()),
                static_cast<unsigned long long>(p.net.duplicated()), format_stats(sa).c_str());
}

void test_unreliable_no_duplicates_and_loss_visible() {
    SimLinkParams link;
    link.loss = 0.25;
    link.duplicate = 0.10;
    link.latency_us = 5'000;
    link.seed = 3;
    Config cfg;
    cfg.max_unreliable_queue = 4096;
    Pair p(link, cfg, cfg);
    REQUIRE(p.connect());
    const uint32_t kCount = 2000;
    for (uint32_t i = 0; i < kCount; ++i) {
        REQUIRE(p.a->send(p.conn_a, 3, u32_payload(i), false) == SendResult::Ok);
        if (i % 4 == 3) p.step(); // pace so they spread across packets
    }
    p.run_ms(2000);
    std::map<uint32_t, int> seen;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) ++seen[read_u32(e.data)];
    REQUIRE(!seen.empty());
    for (auto &kv : seen) REQUIRE(kv.second == 1); // packet-level dedup => no duplicated unreliable msgs
    double frac = static_cast<double>(seen.size()) / kCount;
    REQUIRE(frac > 0.55 && frac < 0.90); // ~25% loss
}

void test_rtt_and_loss_estimates() {
    SimLinkParams link;
    link.latency_us = 40'000; // 80 ms RTT
    link.loss = 0.10;
    link.seed = 7;
    Pair p(link);
    REQUIRE(p.connect());
    // steady traffic so there are plenty of ack samples
    for (int i = 0; i < 15'000; ++i) {
        if (i % 10 == 0) p.a->send(p.conn_a, 1, u32_payload(static_cast<uint32_t>(i)), false);
        if (i % 10 == 5) p.b->send(p.conn_b, 1, u32_payload(static_cast<uint32_t>(i)), false);
        p.step();
    }
    ConnStats s;
    REQUIRE(p.a->stats(p.conn_a, s));
    REQUIRE(s.srtt_us > 75'000 && s.srtt_us < 110'000);
    REQUIRE(s.min_rtt_us >= 80'000 && s.min_rtt_us < 95'000);
    REQUIRE(s.loss_ewma > 0.04 && s.loss_ewma < 0.20);
    std::printf("    rtt/loss: %s\n", format_stats(s).c_str());
}

void test_timeout_on_blackhole() {
    Config cfg;
    cfg.timeout_us = 3'000'000;
    Pair p({}, cfg, cfg);
    REQUIRE(p.connect());
    p.run_ms(100);
    p.net.set_blackhole(true);
    uint64_t start = p.now;
    REQUIRE(p.run_until(10'000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
    uint64_t elapsed = p.now - start;
    REQUIRE(elapsed >= 2'900'000 && elapsed <= 3'300'000);
    REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reason == DisconnectReason::Timeout);
    REQUIRE(p.a->state(p.conn_a) == ConnState::Closed);
}

void test_connect_timeout() {
    Config cfg;
    cfg.connect_timeout_us = 2'000'000;
    Pair p({}, cfg, cfg);
    p.net.set_blackhole(true);
    p.conn_a = p.a->connect(p.addr_b, p.now);
    REQUIRE(p.run_until(5'000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
    REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reason == DisconnectReason::ConnectTimeout);
}

void test_graceful_close() {
    Pair p;
    REQUIRE(p.connect());
    p.run_ms(50);
    p.a->close(p.conn_a, p.now);
    REQUIRE(p.run_until(500, [&] { return p.ev_b.count(Event::Type::Disconnected) > 0; }));
    REQUIRE(p.ev_b.find(Event::Type::Disconnected)->reason == DisconnectReason::RemoteClose);
    REQUIRE(p.b->connection_count() == 0);
    // closing the dead handle again is harmless
    p.a->close(p.conn_a, p.now);
}

void test_close_survives_loss_of_first_copy() {
    SimLinkParams link;
    link.loss = 0.6; // the close is sent 3x; with seed below at least one must arrive
    link.seed = 12;
    Pair p(link);
    link.loss = 0.0;
    p.net.set_params(link);
    REQUIRE(p.connect());
    link.loss = 0.6;
    p.net.set_params(link);
    p.a->close(p.conn_a, p.now);
    // Even if all 3 are lost the host must time out rather than hang forever.
    REQUIRE(p.run_until(15'000, [&] { return p.ev_b.count(Event::Type::Disconnected) > 0; }));
}

void test_reject_reasons() {
    {
        Config bad;
        bad.app_tag = 0xDEADBEEF;
        Pair p({}, bad, {});
        p.conn_a = p.a->connect(p.addr_b, p.now);
        REQUIRE(p.run_until(3000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
        auto *d = p.ev_a.find(Event::Type::Disconnected);
        REQUIRE(d->reason == DisconnectReason::Rejected && d->reject == RejectReason::BadAppTag);
        REQUIRE(p.b->connection_count() == 0);
    }
    {
        Config bad;
        bad.protocol_version = 99;
        Pair p({}, bad, {});
        p.conn_a = p.a->connect(p.addr_b, p.now);
        REQUIRE(p.run_until(3000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
        REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reject == RejectReason::BadVersion);
    }
    {
        Pair p;
        p.b->set_accepting(false);
        p.conn_a = p.a->connect(p.addr_b, p.now);
        REQUIRE(p.run_until(3000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
        REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reject == RejectReason::NotAccepting);
    }
    { // host full: second client is rejected
        SimNetwork net;
        NetAddr h{0x0A000002u, 4001}, c1{0x0A000001u, 4000}, c2{0x0A000003u, 4002};
        auto th = net.create_endpoint(h), t1 = net.create_endpoint(c1), t2 = net.create_endpoint(c2);
        Config hc;
        hc.max_connections = 1;
        Endpoint host(*th, hc), cl1(*t1), cl2(*t2);
        host.set_accepting(true);
        uint64_t now = 1'000'000;
        net.set_time(now);
        cl1.connect(h, now);
        Collected e1, e2;
        auto pump = [&](int ms) {
            for (int i = 0; i < ms; ++i) {
                now += 1000;
                net.set_time(now);
                host.update(now);
                cl1.update(now);
                cl2.update(now);
                Event e;
                while (cl1.poll(e)) e1.events.push_back(std::move(e));
                while (cl2.poll(e)) e2.events.push_back(std::move(e));
                while (host.poll(e)) {}
            }
        };
        pump(100);
        REQUIRE(e1.count(Event::Type::Connected) == 1);
        cl2.connect(h, now);
        pump(3000);
        auto *d = e2.find(Event::Type::Disconnected);
        REQUIRE(d && d->reject == RejectReason::Full);
    }
}

void test_anti_spoof_and_cookie() {
    Pair p;
    NetAddr evil{0x0B000001u, 6666};
    auto te = p.net.create_endpoint(evil);

    // 1. Undersized ChallengeRequest gets no reply (anti-amplification).
    std::vector<uint8_t> small{0xA7, 1, 1, 0, 0, 0};
    p.net.inject(evil, p.addr_b, small);
    p.run_ms(10);
    NetAddr from;
    uint8_t buf[2048];
    REQUIRE(te->recv_from(from, buf, sizeof(buf)) == 0);

    // 2. Full-size ChallengeRequest gets a *short* reply, much smaller than the request.
    std::vector<uint8_t> big(512, 0);
    big[0] = 0xA7;
    big[1] = 1;
    big[2] = 0x42;
    p.net.inject(evil, p.addr_b, big);
    p.run_ms(10);
    int n = te->recv_from(from, buf, sizeof(buf));
    REQUIRE(n > 0 && n < 32);

    // 3. ConnectRequest with a forged cookie creates no connection and gets no answer.
    std::vector<uint8_t> forged = {0xA7, 3, 0x42, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 2, 0, 0x52, 0x50, 0x53, 0x50, 0};
    p.net.inject(evil, p.addr_b, forged);
    p.run_ms(10);
    REQUIRE(p.b->connection_count() == 0);
    REQUIRE(te->recv_from(from, buf, sizeof(buf)) == 0);

    // 4. Data packets from the wrong source address are ignored on an established link.
    REQUIRE(p.connect());
    ConnStats before;
    REQUIRE(p.b->stats(p.conn_b, before));
    std::vector<uint8_t> data(40, 0);
    data[0] = 0xA7;
    data[1] = 7;
    for (int i = 0; i < 4; ++i) data[2 + static_cast<size_t>(i)] = static_cast<uint8_t>(p.conn_b >> (8 * i));
    p.net.inject(evil, p.addr_b, data);
    p.run_ms(5);
    ConnStats after;
    REQUIRE(p.b->stats(p.conn_b, after));
    REQUIRE(after.bad_packets == before.bad_packets);
    REQUIRE(after.packets_recv - before.packets_recv < 5); // only real keepalives, not the forgery
    // and a forged Close from the wrong address cannot kill the session
    std::vector<uint8_t> close = {0xA7, 6, 0, 0, 0, 0, 1};
    for (int i = 0; i < 4; ++i) close[2 + static_cast<size_t>(i)] = static_cast<uint8_t>(p.conn_b >> (8 * i));
    p.net.inject(evil, p.addr_b, close);
    p.run_ms(10);
    REQUIRE(p.b->state(p.conn_b) == ConnState::Connected);
}

void test_send_limits() {
    Config cfg;
    cfg.max_reliable_in_flight = 8;
    Pair p({}, cfg, cfg);
    std::vector<uint8_t> x{1};
    REQUIRE(p.a->send(12345, 0, x, true) == SendResult::NotConnected);
    REQUIRE(p.connect());
    std::vector<uint8_t> huge(p.a->max_message_size(true) + 1, 0);
    REQUIRE(p.a->send(p.conn_a, 0, huge, true) == SendResult::TooLarge);
    std::vector<uint8_t> maxmsg(p.a->max_packet_payload(true), 0x5A);
    for (int i = 0; i < 8; ++i) REQUIRE(p.a->send(p.conn_a, 0, maxmsg, true) == SendResult::Ok);
    REQUIRE(p.a->send(p.conn_a, 0, maxmsg, true) == SendResult::QueueFull);
    p.run_ms(500);
    size_t got = 0;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) {
            REQUIRE(e.data == maxmsg);
            ++got;
        }
    REQUIRE(got == 8);
    REQUIRE(p.a->send(p.conn_a, 0, maxmsg, true) == SendResult::Ok); // window reopened after acks
}

// Reliable message ids and packet sequence numbers are 16 bit; push both through
// several wraps.
void test_sequence_wraparound() {
    SimLinkParams link;
    link.latency_us = 1000;
    link.loss = 0.02;
    link.seed = 21;
    Config cfg;
    cfg.max_send_bytes_per_sec = 200u * 1024u * 1024u;
    Pair p(link, cfg, cfg);
    REQUIRE(p.connect());
    const uint32_t kCount = 150'000; // > 2 * 65536
    uint32_t sent = 0, next_expected = 0;
    bool ordered = true;
    for (int ms = 0; ms < 600'000 && next_expected < kCount; ++ms) {
        while (sent < kCount && p.a->send(p.conn_a, 0, u32_payload(sent), true) == SendResult::Ok) ++sent;
        p.step();
        for (auto &e : p.ev_b.events)
            if (e.type == Event::Type::Message) {
                if (read_u32(e.data) != next_expected) ordered = false;
                ++next_expected;
            }
        p.ev_b.events.clear();
        p.ev_a.events.clear();
    }
    REQUIRE(ordered);
    REQUIRE(next_expected == kCount);
}

void test_garbage_does_not_crash() {
    Pair p;
    REQUIRE(p.connect());
    std::mt19937_64 rng(1234);
    NetAddr evil{0x0B000001u, 6666};
    for (int i = 0; i < 20'000; ++i) {
        std::vector<uint8_t> junk(1 + rng() % 200);
        for (auto &b : junk) b = static_cast<uint8_t>(rng());
        if (rng() % 2) junk[0] = 0xA7;
        if (rng() % 2 && junk.size() > 1) junk[1] = static_cast<uint8_t>(1 + rng() % 8);
        // aim a good share at the real connection id and from the real peer address
        NetAddr src = (rng() % 3 == 0) ? p.addr_a : evil;
        if (junk.size() >= 6 && rng() % 2)
            for (int k = 0; k < 4; ++k) junk[2 + static_cast<size_t>(k)] = static_cast<uint8_t>(p.conn_b >> (8 * k));
        p.net.inject(src, p.addr_b, junk);
        if (i % 50 == 0) p.step();
    }
    p.run_ms(100);
    // Truncated real packets
    std::vector<uint8_t> t{0xA7, 7};
    p.net.inject(p.addr_a, p.addr_b, t);
    p.run_ms(5);
    REQUIRE(true); // reaching here without a crash / sanitizer trap is the assertion
}

void test_rate_limit() {
    Config cfg;
    cfg.max_send_bytes_per_sec = 50'000;
    cfg.max_unreliable_queue = 100000;
    Pair p({}, cfg, cfg);
    REQUIRE(p.connect());
    std::vector<uint8_t> blob(1000, 1);
    for (int i = 0; i < 5000; ++i) p.a->send(p.conn_a, 0, blob, false);
    ConnStats s0;
    p.a->stats(p.conn_a, s0);
    p.run_ms(2000);
    ConnStats s1;
    p.a->stats(p.conn_a, s1);
    double rate = static_cast<double>(s1.bytes_sent - s0.bytes_sent) / 2.0;
    REQUIRE(rate < 50'000 * 1.3 + 5000); // 2 s window incl. one burst allowance
    REQUIRE(rate > 50'000 * 0.6);
}

void test_real_udp_loopback() {
    std::string err;
    auto sa = open_udp_socket(0, nullptr, &err);
    auto sb = open_udp_socket(0, nullptr, &err);
    REQUIRE(sa && sb);
    REQUIRE(sa->local_addr().port != 0 && sb->local_addr().port != sa->local_addr().port);
    Endpoint a(*sa), b(*sb);
    b.set_accepting(true);
    NetAddr host = NetAddr::loopback(sb->local_addr().port);
    uint64_t t0 = monotonic_now_us();
    ConnId ca = a.connect(host, t0);
    ConnId cb = 0;
    bool conn_a = false, conn_b = false;
    const int kCount = 300;
    int sent = 0, got_b = 0, got_a = 0;
    bool in_order = true;
    uint64_t deadline = t0 + 10'000'000;
    while (monotonic_now_us() < deadline && (got_b < kCount || got_a < kCount)) {
        uint64_t now = monotonic_now_us();
        a.update(now);
        b.update(now);
        Event e;
        while (a.poll(e)) {
            if (e.type == Event::Type::Connected) conn_a = true;
            if (e.type == Event::Type::Message && e.reliable) {
                if (read_u32(e.data) != static_cast<uint32_t>(got_a)) in_order = false;
                ++got_a;
            }
        }
        while (b.poll(e)) {
            if (e.type == Event::Type::Connected) {
                conn_b = true;
                cb = e.conn;
            }
            if (e.type == Event::Type::Message && e.reliable) {
                if (read_u32(e.data) != static_cast<uint32_t>(got_b)) in_order = false;
                ++got_b;
                if (e.data.size() == 4) b.send(cb, 5, e.data, true); // echo back
            }
        }
        if (conn_a && sent < kCount && a.send(ca, 5, u32_payload(static_cast<uint32_t>(sent)), true) == SendResult::Ok) ++sent;
        // brief yield so the loop does not spin a core during the test
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    REQUIRE(conn_a && conn_b);
    REQUIRE(in_order);
    REQUIRE(got_b == kCount && got_a == kCount);
    ConnStats s;
    REQUIRE(a.stats(ca, s));
    REQUIRE(s.srtt_us > 0 && s.srtt_us < 100'000); // loopback RTT is tiny
    std::printf("    real UDP loopback: %s\n", format_stats(s).c_str());
    a.close(ca, monotonic_now_us());
}

void test_log_output() {
    std::vector<std::string> lines;
    Config cfg;
    cfg.log_level = LogLevel::Debug;
    cfg.log = [&](LogLevel, const std::string &m) { lines.push_back(m); };
    Pair p({}, cfg, {});
    REQUIRE(p.connect());
    p.a->close(p.conn_a, p.now);
    bool saw_connecting = false, saw_connected = false, saw_closed = false;
    for (auto &l : lines) {
        if (l.find("connecting") != std::string::npos) saw_connecting = true;
        if (l.find("connected (handshake") != std::string::npos) saw_connected = true;
        if (l.find("closed: local-close") != std::string::npos && l.find("rtt=") != std::string::npos) saw_closed = true;
    }
    REQUIRE(saw_connecting && saw_connected && saw_closed);
}

#include "net_secure_tests.inc"
#include "net_rendezvous_tests.inc"
#include "net_adhoc_tests.inc"
#include "net_adhoc_sweep_tests.inc"

} // namespace

int main() {
    struct T {
        const char *name;
        void (*fn)();
    };
    const T tests[] = {
        {"siphash_vector", test_siphash_vector},
        {"crypto_blake2s", test_crypto_blake2s},
        {"crypto_aead", test_crypto_aead},
        {"crypto_x25519", test_crypto_x25519},
        {"invites", test_invites},
        {"addr_parse", test_addr_parse},
        {"handshake_clean", test_handshake_clean},
        {"handshake_under_heavy_loss", test_handshake_under_heavy_loss},
        {"basic_messages_both_ways", test_basic_messages_both_ways},
        {"reliable_ordered_exactly_once_under_chaos", test_reliable_ordered_exactly_once_under_chaos},
        {"unreliable_no_duplicates_and_loss_visible", test_unreliable_no_duplicates_and_loss_visible},
        {"rtt_and_loss_estimates", test_rtt_and_loss_estimates},
        {"timeout_on_blackhole", test_timeout_on_blackhole},
        {"connect_timeout", test_connect_timeout},
        {"graceful_close", test_graceful_close},
        {"close_survives_loss_of_first_copy", test_close_survives_loss_of_first_copy},
        {"reject_reasons", test_reject_reasons},
        {"anti_spoof_and_cookie", test_anti_spoof_and_cookie},
        {"send_limits", test_send_limits},
        {"sequence_wraparound", test_sequence_wraparound},
        {"garbage_does_not_crash", test_garbage_does_not_crash},
        {"rate_limit", test_rate_limit},
        {"real_udp_loopback", test_real_udp_loopback},
        {"log_output", test_log_output},
        {"encrypted_session_end_to_end", test_encrypted_session_end_to_end},
        {"wrong_invite_cannot_connect", test_wrong_invite_cannot_connect},
        {"security_mode_mismatch_is_rejected", test_security_mode_mismatch_is_rejected},
        {"tampering_is_detected_and_repaired", test_tampering_is_detected_and_repaired},
        {"replay_is_rejected", test_replay_is_rejected},
        {"forged_close_and_impostor_host", test_forged_close_and_impostor_host},
        {"fragmentation", test_fragmentation},
        {"fragments_respect_window", test_fragments_respect_window},
        {"oversized_reassembly_is_dropped", test_oversized_reassembly_is_dropped},
        {"rv_direct_open_nat", test_rv_direct_open_nat},
        {"rv_hole_punching_restricted_nat", test_rv_hole_punching_restricted_nat},
        {"rv_punch_is_what_makes_restricted_nat_work", test_rv_punch_is_what_makes_restricted_nat_work},
        {"rv_relay_fallback_when_direct_impossible", test_rv_relay_fallback_when_direct_impossible},
        {"rv_unknown_room_and_wrong_invite_fail", test_rv_unknown_room_and_wrong_invite_fail},
        {"rv_room_hijack_rejected", test_rv_room_hijack_rejected},
        {"rv_relay_is_not_an_open_proxy", test_rv_relay_is_not_an_open_proxy},
        {"rv_relay_rate_limit", test_rv_relay_rate_limit},
        {"rv_room_expiry", test_rv_room_expiry},
        {"rv_real_sockets_ipv4_and_ipv6", test_rv_real_sockets_ipv4_and_ipv6},
        {"adhoc_group_formation", test_adhoc_group_formation},
        {"adhoc_pdp_routing", test_adhoc_pdp_routing},
        {"adhoc_port_semantics_and_errors", test_adhoc_port_semantics_and_errors},
        {"adhoc_ordering_under_loss", test_adhoc_ordering_under_loss},
        {"adhoc_large_datagram_and_rcvbuf", test_adhoc_large_datagram_and_rcvbuf},
        {"adhoc_spoofed_source_mac_is_dropped", test_adhoc_spoofed_source_mac_is_dropped},
        {"adhoc_leave_and_host_loss", test_adhoc_leave_and_host_loss},
        {"adhoc_group_full_and_mac_collision", test_adhoc_group_full_and_mac_collision},
        {"adhoc_encrypted_and_unreliable_modes", test_adhoc_encrypted_and_unreliable_modes},
        {"adhoc_ordering_seed_sweep", test_adhoc_ordering_seed_sweep},
        {"adhoc_backpressure_reports_no_space_and_recovers", test_adhoc_backpressure_reports_no_space_and_recovers},
    };
    int failed = 0;
    for (const auto &t : tests) {
        try {
            std::printf("[ RUN  ] %s\n", t.name);
            std::fflush(stdout);
            t.fn();
            std::printf("[  OK  ] %s\n", t.name);
        } catch (const std::exception &e) {
            ++failed;
            std::printf("[ FAIL ] %s: %s\n", t.name, e.what());
        }
    }
    std::printf("%d checks, %d test(s) failed\n", g_checks, failed);
    return failed ? 1 : 0;
}
