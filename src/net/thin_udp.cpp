#include "psprecomp/net/thin_udp.hpp"

#include <algorithm>
#include <array>
#include <cstdio>
#include <cstring>

namespace psprecomp::net {

// ---------------------------------------------------------------------------------
// Wire constants
// ---------------------------------------------------------------------------------
namespace {

constexpr uint8_t kMagic = 0xA7;

enum PacketType : uint8_t {
    kChallengeRequest = 1,
    kChallengeReply = 2,
    kConnectRequest = 3,
    kConnectOk = 4,
    kReject = 5,
    kClose = 6,
    kData = 7,
};

constexpr size_t kMinChallengeRequestSize = 512; // anti-amplification padding
constexpr size_t kDataHeaderSize = 15;           // magic type dst seq flags ack bits
constexpr size_t kReliableFrameOverhead = 7;     // kind channel id len
constexpr size_t kUnreliableFrameOverhead = 5;   // kind channel len
constexpr uint8_t kFrameUnreliable = 1;
constexpr uint8_t kFrameReliable = 2;
constexpr uint8_t kFrameReliableFrag = 3; // reliable message that continues in the next reliable message
constexpr size_t kCounterSize = 8;
constexpr uint8_t kFlagEncrypted = 2;
constexpr size_t kPubSize = 32;
constexpr size_t kMacSize = 16;
constexpr uint8_t kFlagHasAck = 1;
constexpr size_t kSentRing = 1024;
constexpr size_t kRecvWindow = 256;
constexpr uint64_t kCookieBucketUs = 8'000'000;
constexpr int kCloseRepeats = 3;

struct Writer {
    std::vector<uint8_t> &b;
    void u8(uint8_t v) { b.push_back(v); }
    void u16(uint16_t v) {
        b.push_back(static_cast<uint8_t>(v));
        b.push_back(static_cast<uint8_t>(v >> 8));
    }
    void u32(uint32_t v) {
        for (int i = 0; i < 4; ++i) b.push_back(static_cast<uint8_t>(v >> (8 * i)));
    }
    void u64(uint64_t v) {
        for (int i = 0; i < 8; ++i) b.push_back(static_cast<uint8_t>(v >> (8 * i)));
    }
    void bytes(const uint8_t *d, size_t n) { b.insert(b.end(), d, d + n); }
};

struct Reader {
    const uint8_t *p;
    size_t n;
    size_t pos = 0;
    bool ok = true;
    bool need(size_t k) {
        if (pos + k > n) ok = false;
        return ok;
    }
    uint8_t u8() { return need(1) ? p[pos++] : uint8_t{0}; }
    uint16_t u16() {
        if (!need(2)) return 0;
        uint16_t v = static_cast<uint16_t>(p[pos] | (p[pos + 1] << 8));
        pos += 2;
        return v;
    }
    uint32_t u32() {
        if (!need(4)) return 0;
        uint32_t v = 0;
        for (int i = 0; i < 4; ++i) v |= static_cast<uint32_t>(p[pos + static_cast<size_t>(i)]) << (8 * i);
        pos += 4;
        return v;
    }
    uint64_t u64() {
        if (!need(8)) return 0;
        uint64_t v = 0;
        for (int i = 0; i < 8; ++i) v |= static_cast<uint64_t>(p[pos + static_cast<size_t>(i)]) << (8 * i);
        pos += 8;
        return v;
    }
    const uint8_t *bytes(size_t k) {
        if (!need(k)) return nullptr;
        const uint8_t *r = p + pos;
        pos += k;
        return r;
    }
};

inline bool seq_newer(uint16_t a, uint16_t b) { return a != b && static_cast<uint16_t>(a - b) < 32768; }

std::string hex_id(uint32_t v) {
    char buf[16];
    std::snprintf(buf, sizeof(buf), "%08x", v);
    return buf;
}

std::array<uint8_t, kMacSize> handshake_mac(const crypto::Key &psk, const char *label, const uint8_t *a,
                                            size_t an, const uint8_t *b = nullptr, size_t bn = 0) {
    std::vector<uint8_t> in(label, label + std::strlen(label));
    in.insert(in.end(), a, a + an);
    if (b) in.insert(in.end(), b, b + bn);
    uint8_t h[32];
    crypto::blake2s(h, in.data(), in.size(), psk.data(), psk.size());
    std::array<uint8_t, kMacSize> out{};
    std::memcpy(out.data(), h, kMacSize);
    return out;
}

void make_nonce(uint8_t nonce[12], uint64_t counter) {
    std::memset(nonce, 0, 4);
    for (int i = 0; i < 8; ++i) nonce[4 + i] = static_cast<uint8_t>(counter >> (8 * i));
}

bool replay_ok(bool any, uint64_t mx, uint64_t bm, uint64_t ctr) {
    if (!any || ctr > mx) return true;
    uint64_t d = mx - ctr;
    return d < 64 && !((bm >> d) & 1u);
}

void replay_commit(bool &any, uint64_t &mx, uint64_t &bm, uint64_t ctr) {
    if (!any) {
        any = true;
        mx = ctr;
        bm = 1;
    } else if (ctr > mx) {
        uint64_t sh = ctr - mx;
        bm = sh >= 64 ? 0 : bm << sh;
        bm |= 1;
        mx = ctr;
    } else {
        bm |= 1ull << (mx - ctr);
    }
}

void wipe(void *p, size_t n) {
    volatile uint8_t *v = static_cast<volatile uint8_t *>(p);
    for (size_t i = 0; i < n; ++i) v[i] = 0;
}

} // namespace

// ---------------------------------------------------------------------------------
// SipHash-2-4
// ---------------------------------------------------------------------------------
uint64_t siphash24(uint64_t k0, uint64_t k1, const uint8_t *data, size_t size) {
    auto rotl = [](uint64_t x, int b) { return (x << b) | (x >> (64 - b)); };
    uint64_t v0 = 0x736f6d6570736575ull ^ k0, v1 = 0x646f72616e646f6dull ^ k1;
    uint64_t v2 = 0x6c7967656e657261ull ^ k0, v3 = 0x7465646279746573ull ^ k1;
    auto round = [&] {
        v0 += v1; v1 = rotl(v1, 13); v1 ^= v0; v0 = rotl(v0, 32);
        v2 += v3; v3 = rotl(v3, 16); v3 ^= v2;
        v0 += v3; v3 = rotl(v3, 21); v3 ^= v0;
        v2 += v1; v1 = rotl(v1, 17); v1 ^= v2; v2 = rotl(v2, 32);
    };
    size_t i = 0;
    for (; i + 8 <= size; i += 8) {
        uint64_t m = 0;
        for (int j = 0; j < 8; ++j) m |= static_cast<uint64_t>(data[i + static_cast<size_t>(j)]) << (8 * j);
        v3 ^= m; round(); round(); v0 ^= m;
    }
    uint64_t last = static_cast<uint64_t>(size) << 56;
    for (size_t j = 0; i + j < size; ++j) last |= static_cast<uint64_t>(data[i + j]) << (8 * j);
    v3 ^= last; round(); round(); v0 ^= last;
    v2 ^= 0xff;
    round(); round(); round(); round();
    return v0 ^ v1 ^ v2 ^ v3;
}

// ---------------------------------------------------------------------------------
// Strings
// ---------------------------------------------------------------------------------
const char *to_string(DisconnectReason r) {
    switch (r) {
    case DisconnectReason::None: return "none";
    case DisconnectReason::LocalClose: return "local-close";
    case DisconnectReason::RemoteClose: return "remote-close";
    case DisconnectReason::Timeout: return "timeout";
    case DisconnectReason::ConnectTimeout: return "connect-timeout";
    case DisconnectReason::Rejected: return "rejected";
    case DisconnectReason::ProtocolError: return "protocol-error";
    }
    return "?";
}
const char *to_string(RejectReason r) {
    switch (r) {
    case RejectReason::None: return "none";
    case RejectReason::Full: return "full";
    case RejectReason::BadVersion: return "bad-version";
    case RejectReason::BadAppTag: return "bad-app-tag";
    case RejectReason::NotAccepting: return "not-accepting";
    case RejectReason::BadAuth: return "bad-auth";
    }
    return "?";
}
const char *to_string(ConnState s) {
    switch (s) {
    case ConnState::Connecting: return "connecting";
    case ConnState::Connected: return "connected";
    case ConnState::Closed: return "closed";
    }
    return "?";
}
const char *to_string(SendResult r) {
    switch (r) {
    case SendResult::Ok: return "ok";
    case SendResult::NotConnected: return "not-connected";
    case SendResult::TooLarge: return "too-large";
    case SendResult::QueueFull: return "queue-full";
    }
    return "?";
}

std::string format_stats(const ConnStats &s) {
    char buf[640];
    std::snprintf(buf, sizeof(buf),
                  "rtt=%.1fms (var %.1f, min %.1f) loss=%.1f%% (lost %llu / acked %llu) "
                  "tx=%llu pkt %llu B (%llu B/s) rx=%llu pkt %llu B (%llu B/s) "
                  "rel[sent %llu rexmit %llu deliv %llu inflight %u dup %llu] "
                  "unrel[sent %llu recv %llu qdrop %llu] dup-pkt=%llu old-pkt=%llu bad=%llu enc=%s authfail=%llu replay=%llu frag[tx %llu msgs %llu] silence=%.0fms",
                  static_cast<double>(s.srtt_us) / 1000.0, static_cast<double>(s.rttvar_us) / 1000.0,
                  static_cast<double>(s.min_rtt_us) / 1000.0, s.loss_ewma * 100.0,
                  static_cast<unsigned long long>(s.packets_lost), static_cast<unsigned long long>(s.packets_acked),
                  static_cast<unsigned long long>(s.packets_sent), static_cast<unsigned long long>(s.bytes_sent),
                  static_cast<unsigned long long>(s.tx_bytes_per_sec), static_cast<unsigned long long>(s.packets_recv),
                  static_cast<unsigned long long>(s.bytes_recv), static_cast<unsigned long long>(s.rx_bytes_per_sec),
                  static_cast<unsigned long long>(s.reliable_sent), static_cast<unsigned long long>(s.reliable_retransmits),
                  static_cast<unsigned long long>(s.reliable_delivered), s.reliable_in_flight,
                  static_cast<unsigned long long>(s.reliable_dup_dropped), static_cast<unsigned long long>(s.unreliable_sent),
                  static_cast<unsigned long long>(s.unreliable_recv),
                  static_cast<unsigned long long>(s.unreliable_queue_dropped),
                  static_cast<unsigned long long>(s.dup_packets_dropped), static_cast<unsigned long long>(s.old_packets_dropped),
                  static_cast<unsigned long long>(s.bad_packets), s.encrypted ? "yes" : "NO",
                  static_cast<unsigned long long>(s.auth_failures), static_cast<unsigned long long>(s.replay_dropped),
                  static_cast<unsigned long long>(s.fragments_sent), static_cast<unsigned long long>(s.messages_reassembled),
                  static_cast<double>(s.us_since_recv) / 1000.0);
    return buf;
}

// ---------------------------------------------------------------------------------
// Connection state
// ---------------------------------------------------------------------------------
struct Endpoint::SentPacket {
    bool valid = false;
    bool acked = false;
    bool loss_counted = false;
    uint16_t seq = 0;
    uint64_t sent_us = 0;
    std::vector<uint16_t> reliable_ids;
};

namespace {
struct RelOut {
    bool more = false; // fragment: continues in the next reliable message
    uint16_t id = 0;
    uint16_t channel = 0;
    std::vector<uint8_t> data;
    uint64_t next_send_us = 0; // 0 = due now
    bool sent_ever = false;
    bool acked = false;
};
struct RelIn {
    bool full = false;
    bool more = false; // fragment: continues in the next reliable message
    uint16_t id = 0;
    uint16_t channel = 0;
    std::vector<uint8_t> data;
};
struct UnrelOut {
    uint16_t channel = 0;
    std::vector<uint8_t> data;
};
} // namespace

struct Endpoint::Conn {
    ConnId id = 0;
    NetAddr peer;
    ConnState state = ConnState::Connecting;
    bool outbound = false;
    uint32_t remote_id = 0;

    // handshake (outbound)
    int hs_step = 0; // 0 = awaiting ChallengeReply, 1 = awaiting ConnectOK
    uint64_t cookie = 0;
    uint64_t created_us = 0;
    uint64_t hs_last_send_us = 0;

    uint64_t last_recv_us = 0;
    uint64_t last_send_us = 0;

    // sequencing / acks
    uint32_t data_packets_sent = 0;
    uint16_t next_seq = 0;
    std::array<SentPacket, kSentRing> sent;
    uint16_t loss_scan = 0;
    bool have_highest_ack = false;
    uint16_t highest_ack = 0;
    bool have_recv = false;
    uint16_t recv_latest = 0;
    uint32_t recv_bits = 0;
    bool ack_pending = false;
    uint32_t rx_since_ack = 0; // fresh packets received since we last sent an ack
    uint64_t ack_due_us = 0;

    // reliable
    std::deque<RelOut> rel_out;
    uint16_t next_rel_id = 0;
    uint16_t rel_in_next = 0;
    std::array<RelIn, kRecvWindow> rel_in;
    std::deque<UnrelOut> unrel_out;

    // pacing
    double tokens = 0.0;
    uint64_t tokens_us = UINT64_MAX; // UINT64_MAX = bucket not primed yet
    bool sent_any = false;

    // encryption
    bool encrypted = false;
    uint8_t eph_priv[32] = {0};
    uint8_t eph_pub[32] = {0};
    crypto::Key tx_key{}, rx_key{};
    uint64_t tx_counter = 0;
    bool rx_any = false;
    uint64_t rx_max = 0, rx_bitmap = 0; // replay window (64 counters)
    std::vector<uint8_t> ok_packet;     // host: cached ConnectOK for retried requests

    // reliable fragment reassembly
    std::vector<uint8_t> reasm;
    bool reasm_drop = false; // overflowed: discard until the message ends

    ConnStats st;
    uint64_t win_start_us = 0, win_tx = 0, win_rx = 0;
    uint64_t last_stats_log_us = 0;
    bool loss_primed = false;
};

// ---------------------------------------------------------------------------------
// Endpoint basics
// ---------------------------------------------------------------------------------
Endpoint::Endpoint(IDatagramTransport &transport, Config config)
    : transport_(transport), cfg_(std::move(config)), rx_buf_(2048) {
    if (cfg_.max_reliable_in_flight > kRecvWindow) cfg_.max_reliable_in_flight = kRecvWindow;
    if (cfg_.max_reliable_in_flight == 0) cfg_.max_reliable_in_flight = 1;
    if (cfg_.mtu < 128) cfg_.mtu = 128;
    if (cfg_.mtu > 1472) cfg_.mtu = 1472; // fits a 1500-byte Ethernet MTU
    if (cfg_.rng_seed == 0) {
        std::random_device rd;
        rng_.seed((static_cast<uint64_t>(rd()) << 32) ^ rd());
    } else {
        rng_.seed(cfg_.rng_seed);
    }
    cookie_secret_ = cfg_.cookie_secret ? cfg_.cookie_secret : (rng_() | 1u);
}

Endpoint::~Endpoint() = default;

void Endpoint::log(LogLevel lvl, const std::string &msg) const {
    if (enabled(lvl)) cfg_.log(lvl, msg);
}

void Endpoint::log_conn(LogLevel lvl, const Conn &c, const std::string &msg) const {
    if (!enabled(lvl)) return;
    cfg_.log(lvl, "[conn " + hex_id(c.id) + " " + c.peer.to_string() + "] " + msg);
}

Endpoint::Conn *Endpoint::find(ConnId id) {
    auto it = conns_.find(id);
    return it == conns_.end() ? nullptr : it->second.get();
}
const Endpoint::Conn *Endpoint::find(ConnId id) const {
    auto it = conns_.find(id);
    return it == conns_.end() ? nullptr : it->second.get();
}

ConnId Endpoint::allocate_id() {
    for (;;) {
        ConnId id = static_cast<ConnId>(rng_());
        if (id != 0 && !conns_.count(id)) return id;
    }
}

void Endpoint::queue_event(Event ev) { events_.push_back(std::move(ev)); }

bool Endpoint::poll(Event &out) {
    if (events_.empty()) return false;
    out = std::move(events_.front());
    events_.pop_front();
    return true;
}

ConnState Endpoint::state(ConnId id) const {
    const Conn *c = find(id);
    return c ? c->state : ConnState::Closed;
}
bool Endpoint::peer_addr(ConnId id, NetAddr &out) const {
    const Conn *c = find(id);
    if (!c) return false;
    out = c->peer;
    return true;
}
std::vector<ConnId> Endpoint::connections() const {
    std::vector<ConnId> ids;
    ids.reserve(conns_.size());
    for (const auto &kv : conns_) ids.push_back(kv.first);
    return ids;
}

bool Endpoint::stats(ConnId id, ConnStats &out) const {
    const Conn *c = find(id);
    if (!c) return false;
    out = c->st;
    out.encrypted = c->encrypted;
    out.reliable_in_flight = 0;
    for (const auto &r : c->rel_out)
        if (!r.acked) ++out.reliable_in_flight;
    out.us_since_recv = now_ > c->last_recv_us ? now_ - c->last_recv_us : 0;
    return true;
}

size_t Endpoint::packet_overhead() const {
    return kDataHeaderSize + (cfg_.has_psk ? kCounterSize + crypto::kTagSize : 0);
}

size_t Endpoint::max_packet_payload(bool reliable) const {
    size_t overhead = packet_overhead() + (reliable ? kReliableFrameOverhead : kUnreliableFrameOverhead);
    return cfg_.mtu > overhead ? cfg_.mtu - overhead : 0;
}

size_t Endpoint::max_message_size(bool reliable) const {
    return reliable ? std::max<size_t>(cfg_.max_reliable_message, max_packet_payload(true)) : max_packet_payload(false);
}

uint64_t Endpoint::make_cookie(const NetAddr &from, uint32_t client_id, uint64_t bucket) const {
    std::vector<uint8_t> buf;
    Writer w{buf};
    w.bytes(from.ip.data(), from.ip.size());
    w.u16(from.port);
    w.u32(client_id);
    w.u64(bucket);
    return siphash24(cookie_secret_, cookie_secret_ ^ 0x9E3779B97F4A7C15ull, buf.data(), buf.size());
}

void Endpoint::raw_send(const NetAddr &to, const std::vector<uint8_t> &pkt) {
    transport_.send_to(to, pkt.data(), pkt.size());
}

// ---------------------------------------------------------------------------------
// Handshake
// ---------------------------------------------------------------------------------
ConnId Endpoint::connect(const NetAddr &peer, uint64_t now_us) {
    if (conns_.size() >= cfg_.max_connections) return 0;
    now_ = std::max(now_, now_us);
    auto c = std::make_unique<Conn>();
    c->id = allocate_id();
    c->peer = peer;
    c->outbound = true;
    c->state = ConnState::Connecting;
    c->created_us = now_us;
    c->last_recv_us = now_us;
    if (cfg_.has_psk) {
        if (!crypto::random_bytes(c->eph_priv, sizeof(c->eph_priv))) {
            log(LogLevel::Error, "no OS randomness available: refusing to connect");
            return 0;
        }
        crypto::x25519_public(c->eph_pub, c->eph_priv);
    }
    ConnId id = c->id;
    Conn &ref = *c;
    conns_[id] = std::move(c);
    log_conn(LogLevel::Info, ref, cfg_.has_psk ? "connecting (encrypted)" : "connecting (PLAINTEXT, no invite)");
    send_handshake_step(ref, now_us);
    return id;
}

void Endpoint::send_handshake_step(Conn &c, uint64_t now) {
    std::vector<uint8_t> pkt;
    Writer w{pkt};
    w.u8(kMagic);
    if (c.hs_step == 0) {
        w.u8(kChallengeRequest);
        w.u32(c.id);
        pkt.resize(kMinChallengeRequestSize, 0);
    } else {
        w.u8(kConnectRequest);
        w.u32(c.id);
        w.u64(c.cookie);
        w.u16(cfg_.protocol_version);
        w.u32(cfg_.app_tag);
        w.u8(cfg_.has_psk ? uint8_t{1} : uint8_t{0});
        if (cfg_.has_psk) {
            w.bytes(c.eph_pub, kPubSize);
            auto mac = handshake_mac(cfg_.psk, "CRQ", pkt.data(), pkt.size());
            w.bytes(mac.data(), mac.size());
        }
    }
    c.hs_last_send_us = now;
    raw_send(c.peer, pkt);
    log_conn(LogLevel::Debug, c, c.hs_step == 0 ? "-> ChallengeRequest" : "-> ConnectRequest");
}

void Endpoint::handle_challenge_request(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    if (n < kMinChallengeRequestSize) {
        log(LogLevel::Debug, "undersized ChallengeRequest from " + from.to_string() + " ignored");
        return;
    }
    Reader r{p, n, 2};
    uint32_t client_id = r.u32();
    if (!r.ok || client_id == 0) return;
    std::vector<uint8_t> pkt;
    Writer w{pkt};
    w.u8(kMagic);
    if (!accepting_) {
        w.u8(kReject);
        w.u32(client_id);
        w.u8(static_cast<uint8_t>(RejectReason::NotAccepting));
    } else {
        w.u8(kChallengeReply);
        w.u32(client_id);
        w.u64(make_cookie(from, client_id, now / kCookieBucketUs));
    }
    raw_send(from, pkt);
}

void Endpoint::handle_challenge_reply(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    Reader r{p, n, 2};
    uint32_t client_id = r.u32();
    uint64_t cookie = r.u64();
    if (!r.ok) return;
    Conn *c = find(client_id);
    if (!c || !c->outbound || c->state != ConnState::Connecting || c->hs_step != 0 || c->peer != from) return;
    c->cookie = cookie;
    c->hs_step = 1;
    log_conn(LogLevel::Debug, *c, "<- ChallengeReply");
    send_handshake_step(*c, now);
}

void Endpoint::derive_session(Conn &c, const uint8_t dh[32], const uint8_t client_pub[32], const uint8_t server_pub[32]) {
    static const char kLabel[] = "psprecomp-session-v1";
    std::vector<uint8_t> in(kLabel, kLabel + sizeof(kLabel) - 1);
    in.insert(in.end(), dh, dh + 32);
    in.insert(in.end(), client_pub, client_pub + 32);
    in.insert(in.end(), server_pub, server_pub + 32);
    crypto::Key master{}, c2s{}, s2c{};
    crypto::blake2s(master.data(), in.data(), in.size(), cfg_.psk.data(), cfg_.psk.size());
    static const uint8_t kC2S[] = {'c', '2', 's'}, kS2C[] = {'s', '2', 'c'};
    crypto::blake2s(c2s.data(), kC2S, sizeof(kC2S), master.data(), master.size());
    crypto::blake2s(s2c.data(), kS2C, sizeof(kS2C), master.data(), master.size());
    c.tx_key = c.outbound ? c2s : s2c;
    c.rx_key = c.outbound ? s2c : c2s;
    c.encrypted = true;
    wipe(master.data(), master.size());
    wipe(c2s.data(), c2s.size());
    wipe(s2c.data(), s2c.size());
}

void Endpoint::handle_connect_request(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    Reader r{p, n, 2};
    uint32_t client_id = r.u32();
    uint64_t cookie = r.u64();
    uint16_t version = r.u16();
    uint32_t app_tag = r.u32();
    uint8_t flags = r.u8();
    const bool peer_encrypted = (flags & 1u) != 0;
    const uint8_t *client_pub = nullptr;
    const uint8_t *mac = nullptr;
    size_t mac_pos = 0;
    if (peer_encrypted) {
        client_pub = r.bytes(kPubSize);
        mac_pos = r.pos;
        mac = r.bytes(kMacSize);
    }
    if (!r.ok || client_id == 0) return;

    auto reject = [&](RejectReason why) {
        std::vector<uint8_t> pkt;
        Writer w{pkt};
        w.u8(kMagic);
        w.u8(kReject);
        w.u32(client_id);
        w.u8(static_cast<uint8_t>(why));
        raw_send(from, pkt);
        log(LogLevel::Info, "rejected " + from.to_string() + ": " + to_string(why));
    };

    // Retried request for a connection we already created: repeat the cached answer.
    auto existing = inbound_index_.find(std::make_tuple(from, client_id));
    if (existing != inbound_index_.end()) {
        if (Conn *ec = find(existing->second)) raw_send(from, ec->ok_packet);
        return;
    }
    if (!accepting_) return reject(RejectReason::NotAccepting);

    uint64_t bucket = now / kCookieBucketUs;
    bool cookie_ok = cookie == make_cookie(from, client_id, bucket) ||
                     (bucket > 0 && cookie == make_cookie(from, client_id, bucket - 1));
    if (!cookie_ok) {
        log(LogLevel::Debug, "ConnectRequest from " + from.to_string() + " with bad/expired cookie ignored");
        return; // silently ignore: do not help a spoofer probe
    }
    if (version != cfg_.protocol_version) return reject(RejectReason::BadVersion);
    if (app_tag != cfg_.app_tag) return reject(RejectReason::BadAppTag);
    if (peer_encrypted != cfg_.has_psk) return reject(RejectReason::BadAuth);
    if (cfg_.has_psk) {
        auto expect = handshake_mac(cfg_.psk, "CRQ", p, mac_pos);
        if (!crypto::constant_time_equal(expect.data(), mac, kMacSize)) {
            log(LogLevel::Warn, "ConnectRequest from " + from.to_string() + " failed PSK authentication (ignored)");
            return; // wrong/missing invite: no answer, no state
        }
    }
    if (conns_.size() >= cfg_.max_connections) return reject(RejectReason::Full);

    auto c = std::make_unique<Conn>();
    c->id = allocate_id();
    c->peer = from;
    c->outbound = false;
    c->remote_id = client_id;
    c->state = ConnState::Connected;
    c->created_us = now;
    c->last_recv_us = now;
    c->win_start_us = now;

    std::vector<uint8_t> ok;
    Writer w{ok};
    w.u8(kMagic);
    w.u8(kConnectOk);
    w.u32(client_id);
    w.u32(c->id);
    w.u8(cfg_.has_psk ? uint8_t{1} : uint8_t{0});
    if (cfg_.has_psk) {
        if (!crypto::random_bytes(c->eph_priv, sizeof(c->eph_priv))) {
            log(LogLevel::Error, "no OS randomness available: refusing connection");
            return;
        }
        crypto::x25519_public(c->eph_pub, c->eph_priv);
        uint8_t dh[32];
        if (!crypto::x25519_shared(dh, c->eph_priv, client_pub)) {
            log(LogLevel::Warn, "degenerate client public key from " + from.to_string());
            wipe(c->eph_priv, sizeof(c->eph_priv));
            return;
        }
        w.bytes(c->eph_pub, kPubSize);
        auto okmac = handshake_mac(cfg_.psk, "OK_", ok.data(), ok.size(), client_pub, kPubSize);
        w.bytes(okmac.data(), okmac.size());
        derive_session(*c, dh, client_pub, c->eph_pub);
        wipe(dh, sizeof(dh));
        wipe(c->eph_priv, sizeof(c->eph_priv));
    }
    c->ok_packet = ok;

    ConnId id = c->id;
    inbound_index_[std::make_tuple(from, client_id)] = id;
    log_conn(LogLevel::Info, *c,
             std::string("accepted inbound connection (remote id ") + hex_id(client_id) + ", " +
                 (c->encrypted ? "encrypted, PSK-authenticated" : "PLAINTEXT") + ")");
    conns_[id] = std::move(c);
    raw_send(from, ok);

    Event ev;
    ev.type = Event::Type::Connected;
    ev.conn = id;
    ev.peer = from;
    ev.outbound = false;
    queue_event(std::move(ev));
}

void Endpoint::handle_connect_ok(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    Reader r{p, n, 2};
    uint32_t client_id = r.u32();
    uint32_t server_id = r.u32();
    uint8_t flags = r.u8();
    const bool peer_encrypted = (flags & 1u) != 0;
    const uint8_t *server_pub = nullptr;
    const uint8_t *mac = nullptr;
    size_t mac_pos = 0;
    if (peer_encrypted) {
        server_pub = r.bytes(kPubSize);
        mac_pos = r.pos;
        mac = r.bytes(kMacSize);
    }
    if (!r.ok || server_id == 0) return;
    Conn *c = find(client_id);
    if (!c || !c->outbound || c->state != ConnState::Connecting || c->hs_step != 1 || c->peer != from) return;
    if (peer_encrypted != cfg_.has_psk) {
        log_conn(LogLevel::Warn, *c, "ConnectOK security mode mismatch (ignored)");
        return;
    }
    if (cfg_.has_psk) {
        auto expect = handshake_mac(cfg_.psk, "OK_", p, mac_pos, c->eph_pub, kPubSize);
        if (!crypto::constant_time_equal(expect.data(), mac, kMacSize)) {
            log_conn(LogLevel::Warn, *c, "ConnectOK failed host authentication (wrong invite or impostor); ignored");
            return;
        }
        uint8_t dh[32];
        if (!crypto::x25519_shared(dh, c->eph_priv, server_pub)) return;
        derive_session(*c, dh, c->eph_pub, server_pub);
        wipe(dh, sizeof(dh));
        wipe(c->eph_priv, sizeof(c->eph_priv));
    }
    c->remote_id = server_id;
    c->state = ConnState::Connected;
    c->last_recv_us = now;
    c->win_start_us = now;
    log_conn(LogLevel::Info, *c,
             "connected (handshake " + std::to_string((now - c->created_us) / 1000) + " ms, remote id " +
                 hex_id(server_id) + ", " + (c->encrypted ? "encrypted, host authenticated" : "PLAINTEXT") + ")");
    Event ev;
    ev.type = Event::Type::Connected;
    ev.conn = c->id;
    ev.peer = c->peer;
    ev.outbound = true;
    queue_event(std::move(ev));
}

void Endpoint::handle_reject(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    Reader r{p, n, 2};
    uint32_t client_id = r.u32();
    uint8_t why = r.u8();
    if (!r.ok) return;
    Conn *c = find(client_id);
    if (!c || !c->outbound || c->state != ConnState::Connecting || c->peer != from) return;
    finish_connection(c->id, DisconnectReason::Rejected,
                      why >= 1 && why <= 5 ? static_cast<RejectReason>(why) : RejectReason::None, false, now);
}

void Endpoint::handle_close(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    Reader r{p, n, 2};
    uint32_t dst = r.u32();
    uint8_t reason_byte = r.u8();
    (void)reason_byte;
    if (!r.ok) return;
    Conn *c = find(dst);
    if (!c || c->peer != from) return;
    if (c->encrypted) {
        // An unauthenticated Close would let anyone who sees a packet (the connection id is
        // in the clear) kill the session, so require a valid AEAD tag.
        const size_t aad_len = r.pos;
        uint64_t ctr = r.u64();
        const uint8_t *tag = r.bytes(crypto::kTagSize);
        if (!r.ok || !replay_ok(c->rx_any, c->rx_max, c->rx_bitmap, ctr)) return;
        uint8_t nonce[12];
        make_nonce(nonce, ctr);
        if (!crypto::aead_open(nullptr, c->rx_key.data(), nonce, p, aad_len + 8, tag, crypto::kTagSize)) {
            ++c->st.auth_failures;
            return;
        }
        replay_commit(c->rx_any, c->rx_max, c->rx_bitmap, ctr);
    }
    finish_connection(c->id, DisconnectReason::RemoteClose, RejectReason::None, false, now);
}

void Endpoint::finish_connection(ConnId id, DisconnectReason reason, RejectReason reject, bool notify_peer,
                                 uint64_t now) {
    Conn *c = find(id);
    if (!c) return;
    (void)now;
    if (notify_peer && c->state == ConnState::Connected && c->remote_id != 0) {
        std::vector<uint8_t> pkt;
        Writer w{pkt};
        w.u8(kMagic);
        w.u8(kClose);
        w.u32(c->remote_id);
        w.u8(static_cast<uint8_t>(reason));
        if (c->encrypted) {
            const uint64_t ctr = c->tx_counter++;
            w.u64(ctr);
            uint8_t nonce[12], tag[crypto::kTagSize];
            make_nonce(nonce, ctr);
            crypto::aead_seal(tag, c->tx_key.data(), nonce, pkt.data(), pkt.size(), nullptr, 0);
            w.bytes(tag, sizeof(tag));
        }
        for (int i = 0; i < kCloseRepeats; ++i) raw_send(c->peer, pkt);
    }
    std::string text = std::string("closed: ") + to_string(reason);
    if (reject != RejectReason::None) text += std::string(" (") + to_string(reject) + ")";
    if (c->state == ConnState::Connected) text += " | " + format_stats(c->st);
    log_conn(reason == DisconnectReason::LocalClose || reason == DisconnectReason::RemoteClose ? LogLevel::Info
                                                                                              : LogLevel::Warn,
             *c, text);

    Event ev;
    ev.type = Event::Type::Disconnected;
    ev.conn = id;
    ev.peer = c->peer;
    ev.reason = reason;
    ev.reject = reject;
    ev.outbound = c->outbound;
    queue_event(std::move(ev));

    if (!c->outbound) inbound_index_.erase(std::make_tuple(c->peer, c->remote_id));
    conns_.erase(id);
}

void Endpoint::close(ConnId id, uint64_t now_us) {
    now_ = std::max(now_, now_us);
    finish_connection(id, DisconnectReason::LocalClose, RejectReason::None, true, now_us);
}

// ---------------------------------------------------------------------------------
// Sending
// ---------------------------------------------------------------------------------
SendResult Endpoint::send(ConnId id, uint16_t channel, const uint8_t *data, size_t size, bool reliable) {
    Conn *c = find(id);
    if (!c || c->state != ConnState::Connected) return SendResult::NotConnected;
    if (size > max_message_size(reliable)) {
        if (reliable) ++c->st.reliable_rejected;
        return SendResult::TooLarge;
    }
    const size_t single = max_packet_payload(reliable);
    if (reliable) {
        const size_t frags = size <= single ? 1 : (size + single - 1) / single;
        if (c->rel_out.size() + frags > cfg_.max_reliable_in_flight) {
            ++c->st.reliable_rejected;
            return SendResult::QueueFull;
        }
        size_t off = 0;
        for (size_t i = 0; i < frags; ++i) {
            const size_t take = std::min(single, size - off);
            RelOut m;
            m.id = c->next_rel_id++;
            m.channel = channel;
            m.more = i + 1 < frags;
            m.data.assign(data + off, data + off + take);
            off += take;
            c->rel_out.push_back(std::move(m));
        }
        ++c->st.reliable_sent;
        if (frags > 1) c->st.fragments_sent += frags;
    } else {
        if (size > single) return SendResult::TooLarge;
        if (c->unrel_out.size() >= cfg_.max_unreliable_queue) {
            c->unrel_out.pop_front();
            ++c->st.unreliable_queue_dropped;
        }
        UnrelOut m;
        m.channel = channel;
        m.data.assign(data, data + size);
        c->unrel_out.push_back(std::move(m));
        ++c->st.unreliable_sent;
    }
    return SendResult::Ok;
}

uint64_t Endpoint::current_rto(const Conn &c) const {
    if (c.st.srtt_us == 0) return 200'000;
    return std::clamp<uint64_t>(c.st.srtt_us + 4 * c.st.rttvar_us + cfg_.ack_delay_us, 60'000, 2'000'000);
}

bool Endpoint::should_send(const Conn &c, uint64_t now) const {
    if (c.tokens <= 0.0) return false;
    if (c.ack_pending && now >= c.ack_due_us) return true;
    if (!c.unrel_out.empty()) return true;
    for (const auto &m : c.rel_out)
        if (!m.acked && now >= m.next_send_us) return true;
    return !c.sent_any || now - c.last_send_us >= cfg_.keepalive_us; // first packet gives an early RTT sample
}

void Endpoint::send_data_packet(Conn &c, uint64_t now) {
    std::vector<uint8_t> pkt;
    pkt.reserve(cfg_.mtu);
    Writer w{pkt};
    uint16_t seq = c.next_seq++;
    ++c.data_packets_sent;
    w.u8(kMagic);
    w.u8(kData);
    w.u32(c.remote_id);
    w.u16(seq);
    w.u8(static_cast<uint8_t>((c.have_recv ? kFlagHasAck : 0) | (c.encrypted ? kFlagEncrypted : 0)));
    w.u16(c.have_recv ? c.recv_latest : uint16_t{0});
    w.u32(c.have_recv ? c.recv_bits : 0u);
    uint64_t counter = 0;
    if (c.encrypted) {
        counter = c.tx_counter++;
        w.u64(counter);
    }

    SentPacket &rec = c.sent[seq % kSentRing];
    if (rec.valid && !rec.acked && !rec.loss_counted) {
        // Ring wrapped over a never-resolved packet (peer silent for >1024 packets).
        ++c.st.packets_lost;
    }
    rec.valid = true;
    rec.acked = false;
    rec.loss_counted = false;
    rec.seq = seq;
    rec.sent_us = now;
    rec.reliable_ids.clear();

    // Frames go into `body` (sealed as a unit when encrypted).
    std::vector<uint8_t> body;
    Writer bw{body};
    const size_t budget = cfg_.mtu - packet_overhead();
    const uint64_t rto = current_rto(c);
    for (auto &m : c.rel_out) {
        if (m.acked || now < m.next_send_us) continue;
        if (body.size() + kReliableFrameOverhead + m.data.size() > budget) break;
        bw.u8(m.more ? kFrameReliableFrag : kFrameReliable);
        bw.u16(m.channel);
        bw.u16(m.id);
        bw.u16(static_cast<uint16_t>(m.data.size()));
        bw.bytes(m.data.data(), m.data.size());
        if (m.sent_ever) ++c.st.reliable_retransmits;
        m.sent_ever = true;
        m.next_send_us = now + rto;
        rec.reliable_ids.push_back(m.id);
    }
    while (!c.unrel_out.empty()) {
        const UnrelOut &m = c.unrel_out.front();
        if (body.size() + kUnreliableFrameOverhead + m.data.size() > budget) break;
        bw.u8(kFrameUnreliable);
        bw.u16(m.channel);
        bw.u16(static_cast<uint16_t>(m.data.size()));
        bw.bytes(m.data.data(), m.data.size());
        c.unrel_out.pop_front();
    }

    if (c.encrypted) {
        uint8_t nonce[12];
        make_nonce(nonce, counter);
        const size_t hdr = pkt.size();
        pkt.resize(hdr + body.size() + crypto::kTagSize);
        crypto::aead_seal(pkt.data() + hdr, c.tx_key.data(), nonce, pkt.data(), hdr, body.data(), body.size());
    } else {
        pkt.insert(pkt.end(), body.begin(), body.end());
    }

    c.ack_pending = false;
    c.rx_since_ack = 0;
    c.last_send_us = now;
    c.sent_any = true;
    c.tokens -= static_cast<double>(pkt.size());
    ++c.st.packets_sent;
    c.st.bytes_sent += pkt.size();
    c.win_tx += pkt.size();
    raw_send(c.peer, pkt);
    if (enabled(LogLevel::Trace))
        log_conn(LogLevel::Trace, c,
                 "tx seq=" + std::to_string(seq) + " bytes=" + std::to_string(pkt.size()) +
                     " rel=" + std::to_string(rec.reliable_ids.size()));
}

// ---------------------------------------------------------------------------------
// Receiving
// ---------------------------------------------------------------------------------
void Endpoint::handle_datagram(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    if (n < 2 || p[0] != kMagic) return;
    switch (p[1]) {
    case kChallengeRequest: handle_challenge_request(from, p, n, now); break;
    case kChallengeReply: handle_challenge_reply(from, p, n, now); break;
    case kConnectRequest: handle_connect_request(from, p, n, now); break;
    case kConnectOk: handle_connect_ok(from, p, n, now); break;
    case kReject: handle_reject(from, p, n, now); break;
    case kClose: handle_close(from, p, n, now); break;
    case kData: handle_data(from, p, n, now); break;
    default: break;
    }
}

void Endpoint::handle_data(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    Reader r{p, n, 2};
    uint32_t dst = r.u32();
    uint16_t seq = r.u16();
    uint8_t flags = r.u8();
    uint16_t ack = r.u16();
    uint32_t bits = r.u32();
    const bool pkt_encrypted = (flags & kFlagEncrypted) != 0;
    uint64_t counter = 0;
    if (pkt_encrypted) counter = r.u64();
    if (!r.ok) return;
    Conn *c = find(dst);
    if (!c || c->peer != from || c->state != ConnState::Connected) return;

    const uint8_t *body = p + r.pos;
    size_t body_len = n - r.pos;
    std::vector<uint8_t> plain;
    if (c->encrypted != pkt_encrypted) { // downgrade / confusion: never process
        ++c->st.bad_packets;
        return;
    }
    if (c->encrypted) {
        // Authenticate BEFORE touching any state, so forged packets cannot refresh the
        // timeout, poison the ack window or consume replay slots.
        if (body_len < crypto::kTagSize) {
            ++c->st.bad_packets;
            return;
        }
        if (!replay_ok(c->rx_any, c->rx_max, c->rx_bitmap, counter)) {
            ++c->st.replay_dropped;
            return;
        }
        uint8_t nonce[12];
        make_nonce(nonce, counter);
        plain.resize(body_len - crypto::kTagSize);
        if (!crypto::aead_open(plain.data(), c->rx_key.data(), nonce, p, r.pos, body, body_len)) {
            ++c->st.auth_failures;
            if (enabled(LogLevel::Debug)) log_conn(LogLevel::Debug, *c, "AEAD authentication failed");
            return;
        }
        replay_commit(c->rx_any, c->rx_max, c->rx_bitmap, counter);
        body = plain.data();
        body_len = plain.size();
    }

    ++c->st.packets_recv;
    c->st.bytes_recv += n;
    c->win_rx += n;
    c->last_recv_us = now;

    // Duplicate / old detection (also lets us re-ack when our ack was lost).
    bool fresh = true;
    if (!c->have_recv) {
        c->have_recv = true;
        c->recv_latest = seq;
        c->recv_bits = 0;
    } else if (seq_newer(seq, c->recv_latest)) {
        uint16_t shift = static_cast<uint16_t>(seq - c->recv_latest);
        if (shift > 32) {
            c->recv_bits = 0;
        } else {
            uint64_t nb = (static_cast<uint64_t>(c->recv_bits) << shift) | (1ull << (shift - 1));
            c->recv_bits = static_cast<uint32_t>(nb);
        }
        c->recv_latest = seq;
    } else {
        uint16_t d = static_cast<uint16_t>(c->recv_latest - seq);
        if (d == 0 || (d <= 32 && (c->recv_bits >> (d - 1)) & 1u)) {
            ++c->st.dup_packets_dropped;
            fresh = false;
        } else if (d > 32) {
            ++c->st.old_packets_dropped;
            fresh = false;
        } else {
            c->recv_bits |= 1u << (d - 1);
        }
    }
    if (!c->ack_pending) {
        c->ack_pending = true;
        c->ack_due_us = now + cfg_.ack_delay_us;
    }
    // The ack field covers only the last 33 packets.  Under a burst, ack early so
    // received packets never fall out of the window and get falsely reported lost.
    if (fresh && ++c->rx_since_ack >= 8) c->ack_due_us = now;
    if (!fresh) {
        if (enabled(LogLevel::Trace)) log_conn(LogLevel::Trace, *c, "rx dup/old seq=" + std::to_string(seq));
        return;
    }
    if (enabled(LogLevel::Trace))
        log_conn(LogLevel::Trace, *c, "rx seq=" + std::to_string(seq) + " bytes=" + std::to_string(n));

    if (flags & kFlagHasAck) process_acks(*c, ack, bits, now);
    if (!parse_frames(*c, body, body_len)) {
        ++c->st.bad_packets;
        log_conn(LogLevel::Debug, *c, "malformed frame in packet seq=" + std::to_string(seq));
    }
}

void Endpoint::process_acks(Conn &c, uint16_t ack, uint32_t bits, uint64_t now) {
    if (c.data_packets_sent == 0) {
        ++c.st.bad_packets;
        return;
    }
    uint16_t last_sent = static_cast<uint16_t>(c.next_seq - 1);
    if (seq_newer(ack, last_sent)) { // acks a packet we never sent
        ++c.st.bad_packets;
        log_conn(LogLevel::Debug, c, "ack " + std::to_string(ack) + " is ahead of last sent " + std::to_string(last_sent));
        return;
    }

    for (uint16_t i = 0; i <= 32; ++i) {
        if (i > 0 && !((bits >> (i - 1)) & 1u)) continue;
        uint16_t s = static_cast<uint16_t>(ack - i);
        SentPacket &rec = c.sent[s % kSentRing];
        if (!rec.valid || rec.seq != s || rec.acked) continue;
        rec.acked = true;
        ++c.st.packets_acked;
        if (!rec.loss_counted) c.st.loss_ewma *= 0.99; // delivered
        for (uint16_t id : rec.reliable_ids) {
            if (c.rel_out.empty()) break;
            uint16_t idx = static_cast<uint16_t>(id - c.rel_out.front().id);
            if (idx < c.rel_out.size()) c.rel_out[idx].acked = true;
        }
        if (i == 0) { // RTT only from the newest ack: older ones include extra queuing
            uint64_t rtt = now > rec.sent_us ? now - rec.sent_us : 0;
            if (rtt == 0) rtt = 1;
            c.st.last_rtt_us = rtt;
            if (c.st.srtt_us == 0) {
                c.st.srtt_us = rtt;
                c.st.rttvar_us = rtt / 2;
            } else {
                uint64_t diff = rtt > c.st.srtt_us ? rtt - c.st.srtt_us : c.st.srtt_us - rtt;
                c.st.rttvar_us = (3 * c.st.rttvar_us + diff) / 4;
                c.st.srtt_us = (7 * c.st.srtt_us + rtt) / 8;
            }
            if (c.st.min_rtt_us == 0 || rtt < c.st.min_rtt_us) c.st.min_rtt_us = rtt;
        }
    }
    while (!c.rel_out.empty() && c.rel_out.front().acked) c.rel_out.pop_front();

    // Anything older than the 33-packet window that is still unacked is lost.
    if (!c.have_highest_ack || seq_newer(ack, c.highest_ack)) {
        c.have_highest_ack = true;
        c.highest_ack = ack;
        while (seq_newer(ack, c.loss_scan) && static_cast<uint16_t>(ack - c.loss_scan) > 32) {
            SentPacket &rec = c.sent[c.loss_scan % kSentRing];
            if (rec.valid && rec.seq == c.loss_scan && !rec.acked && !rec.loss_counted)
                mark_lost(c, rec, "fell out of ack window");
            ++c.loss_scan;
        }
    }
}

void Endpoint::mark_lost(Conn &c, SentPacket &rec, const char *why) {
    rec.loss_counted = true;
    ++c.st.packets_lost;
    c.st.loss_ewma = c.st.loss_ewma * 0.99 + 0.01;
    for (uint16_t id : rec.reliable_ids) { // fast retransmit
        if (c.rel_out.empty()) break;
        uint16_t idx = static_cast<uint16_t>(id - c.rel_out.front().id);
        if (idx < c.rel_out.size() && !c.rel_out[idx].acked) c.rel_out[idx].next_send_us = 0;
    }
    if (enabled(LogLevel::Debug))
        log_conn(LogLevel::Debug, c, "packet seq=" + std::to_string(rec.seq) + " declared lost (" + why + ")");
}

// The ack window only notices a loss once 33 newer packets have been acked, which at
// PSP-ish packet rates (a few per second) could take many seconds.  Also declare a
// packet lost when it has been unacknowledged for several RTOs.
void Endpoint::scan_timeouts(Conn &c, uint64_t now) {
    const uint64_t limit = std::max<uint64_t>(3 * current_rto(c), 300'000);
    while (c.loss_scan != c.next_seq) {
        SentPacket &rec = c.sent[c.loss_scan % kSentRing];
        if (!rec.valid || rec.seq != c.loss_scan || rec.acked || rec.loss_counted) {
            ++c.loss_scan;
            continue;
        }
        if (now - rec.sent_us < limit) break;
        mark_lost(c, rec, "ack timeout");
        ++c.loss_scan;
    }
}

bool Endpoint::parse_frames(Conn &c, const uint8_t *p, size_t n) {
    Reader r{p, n, 0};
    while (r.pos < n) {
        uint8_t kind = r.u8();
        if (kind == kFrameUnreliable) {
            uint16_t channel = r.u16();
            uint16_t len = r.u16();
            const uint8_t *d = r.bytes(len);
            if (!r.ok) return false;
            ++c.st.unreliable_recv;
            Event ev;
            ev.type = Event::Type::Message;
            ev.conn = c.id;
            ev.peer = c.peer;
            ev.channel = channel;
            ev.reliable = false;
            ev.data.assign(d, d + len);
            queue_event(std::move(ev));
        } else if (kind == kFrameReliable || kind == kFrameReliableFrag) {
            uint16_t channel = r.u16();
            uint16_t id = r.u16();
            uint16_t len = r.u16();
            const uint8_t *d = r.bytes(len);
            if (!r.ok) return false;
            uint16_t diff = static_cast<uint16_t>(id - c.rel_in_next);
            if (diff >= 32768) { // already delivered: retransmit of something we have
                ++c.st.reliable_dup_dropped;
            } else if (diff >= kRecvWindow) {
                ++c.st.bad_packets; // peer violated the in-flight window
                return false;
            } else {
                RelIn &slot = c.rel_in[id % kRecvWindow];
                if (slot.full && slot.id == id) {
                    ++c.st.reliable_dup_dropped;
                } else {
                    slot.full = true;
                    slot.more = kind == kFrameReliableFrag;
                    slot.id = id;
                    slot.channel = channel;
                    slot.data.assign(d, d + len);
                }
            }
        } else {
            return false; // unknown frame kind: cannot resync
        }
    }
    deliver_reliable(c);
    return true;
}

void Endpoint::deliver_reliable(Conn &c) {
    for (;;) {
        RelIn &slot = c.rel_in[c.rel_in_next % kRecvWindow];
        if (!slot.full || slot.id != c.rel_in_next) break;
        const bool more = slot.more;
        const uint16_t channel = slot.channel;
        std::vector<uint8_t> data = std::move(slot.data);
        slot.full = false;
        slot.more = false;
        slot.data.clear();
        ++c.rel_in_next;

        if (more || !c.reasm.empty() || c.reasm_drop) {
            // Fragmented message: collect until the final (non-"more") piece.
            if (!c.reasm_drop) {
                if (c.reasm.size() + data.size() > cfg_.max_reliable_message) {
                    ++c.st.bad_packets;
                    c.reasm.clear();
                    c.reasm_drop = true; // peer exceeded the agreed limit: discard this message
                } else {
                    c.reasm.insert(c.reasm.end(), data.begin(), data.end());
                }
            }
            if (more) continue;
            if (c.reasm_drop) {
                c.reasm_drop = false;
                c.reasm.clear();
                continue;
            }
            data = std::move(c.reasm);
            c.reasm.clear();
            ++c.st.messages_reassembled;
        }
        Event ev;
        ev.type = Event::Type::Message;
        ev.conn = c.id;
        ev.peer = c.peer;
        ev.channel = channel;
        ev.reliable = true;
        ev.data = std::move(data);
        ++c.st.reliable_delivered;
        queue_event(std::move(ev));
    }
}

// ---------------------------------------------------------------------------------
// Pump
// ---------------------------------------------------------------------------------
void Endpoint::update(uint64_t now_us) {
    now_ = std::max(now_, now_us);
    const uint64_t now = now_;

    for (int i = 0; i < 1024; ++i) {
        NetAddr from;
        int n = transport_.recv_from(from, rx_buf_.data(), rx_buf_.size());
        if (n <= 0) break;
        handle_datagram(from, rx_buf_.data(), static_cast<size_t>(n), now);
    }

    for (ConnId id : connections()) {
        Conn *c = find(id);
        if (c) tick_connection(*c, now);
    }
}

void Endpoint::tick_connection(Conn &c, uint64_t now) {
    if (c.state == ConnState::Connecting) {
        if (now - c.created_us >= cfg_.connect_timeout_us) {
            finish_connection(c.id, DisconnectReason::ConnectTimeout, RejectReason::None, false, now);
        } else if (now - c.hs_last_send_us >= cfg_.connect_retry_us) {
            send_handshake_step(c, now);
        }
        return;
    }

    if (now - c.last_recv_us >= cfg_.timeout_us) {
        finish_connection(c.id, DisconnectReason::Timeout, RejectReason::None, false, now);
        return;
    }

    // Token bucket refill.
    const double rate = static_cast<double>(cfg_.max_send_bytes_per_sec);
    const double cap = std::max(rate * 0.1, 2.0 * static_cast<double>(cfg_.mtu));
    if (c.tokens_us == UINT64_MAX) {
        c.tokens = cap;
    } else if (now > c.tokens_us) {
        c.tokens = std::min(cap, c.tokens + rate * static_cast<double>(now - c.tokens_us) * 1e-6);
    }
    c.tokens_us = now;

    scan_timeouts(c, now);
    for (uint32_t i = 0; i < cfg_.max_packets_per_update && should_send(c, now); ++i) send_data_packet(c, now);

    if (now - c.win_start_us >= 1'000'000) {
        const uint64_t dt = now - c.win_start_us;
        c.st.tx_bytes_per_sec = c.win_tx * 1'000'000 / dt;
        c.st.rx_bytes_per_sec = c.win_rx * 1'000'000 / dt;
        c.win_start_us = now;
        c.win_tx = c.win_rx = 0;
    }
    if (cfg_.stats_log_interval_us && now - c.last_stats_log_us >= cfg_.stats_log_interval_us) {
        c.last_stats_log_us = now;
        if (enabled(LogLevel::Info)) {
            ConnStats s;
            if (stats(c.id, s)) log_conn(LogLevel::Info, c, "stats " + format_stats(s));
        }
    }
}

} // namespace psprecomp::net
