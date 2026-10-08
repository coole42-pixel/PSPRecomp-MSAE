#pragma once

// "Thin UDP": a small connection-oriented reliability layer for PSPRecomp multiplayer.
//
// Design goals (see MULTIPLAYER_PLAN.md): far lighter than GameNetworkingSockets,
// deterministic, single-threaded, no third-party dependencies, and rich diagnostics.
//
//   * Stateless-cookie handshake (ChallengeRequest -> ChallengeReply -> ConnectRequest
//     -> ConnectOK) so a spoofed source address cannot make the host allocate state or
//     reflect large replies.
//   * Data packets carry a 16-bit sequence number plus an ack + 32-bit ack bitfield
//     (the classic "ack vector" scheme), giving per-packet loss/RTT measurement.
//   * Two delivery classes per message: unreliable (fire and forget) and reliable
//     (ordered, exactly-once, retransmitted until acked).  A 16-bit channel tag lets
//     the PSP ad-hoc HLE map a PDP port / PTP socket onto a stream.
//   * NO encryption or authentication of payloads.  Connection ids are random 32-bit
//     values, which only defends against blind off-path spoofing.  Internet play needs
//     a keyed layer on top before it is exposed publicly (documented as a blocker).
//   * No congestion control beyond a configurable token-bucket send cap, and no
//     fragmentation: messages must fit one packet (max_message_size()).
//
// The Endpoint never blocks and never spawns threads.  The owner calls update(now_us)
// regularly with a monotonic microsecond clock and drains poll().

#include <cstddef>
#include <cstdint>
#include <deque>
#include <functional>
#include <map>
#include <memory>
#include <random>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

#include "psprecomp/net/crypto.hpp"
#include "psprecomp/net/transport.hpp"

namespace psprecomp::net {

using ConnId = uint32_t; // local connection handle; 0 is invalid

enum class ConnState : uint8_t { Connecting, Connected, Closed };

enum class DisconnectReason : uint8_t {
    None = 0,
    LocalClose,
    RemoteClose,
    Timeout,        // connected peer went silent
    ConnectTimeout, // handshake never completed
    Rejected,       // see Event::reject
    ProtocolError,
};

enum class RejectReason : uint8_t { None = 0, Full = 1, BadVersion = 2, BadAppTag = 3, NotAccepting = 4, BadAuth = 5 };

enum class SendResult : uint8_t { Ok, NotConnected, TooLarge, QueueFull };

enum class LogLevel : uint8_t { Error, Warn, Info, Debug, Trace };

const char *to_string(DisconnectReason r);
const char *to_string(RejectReason r);
const char *to_string(ConnState s);
const char *to_string(SendResult r);

struct Config {
    // Both peers must agree; mismatches are rejected during the handshake.
    uint32_t app_tag = 0x50535052; // 'PSPR'
    uint16_t protocol_version = 2;

    uint32_t mtu = 1200;            // max datagram size we emit (well under 1280 IPv6 min)
    uint32_t max_connections = 8;   // inbound + outbound
    uint64_t connect_retry_us = 500'000;
    uint64_t connect_timeout_us = 10'000'000;
    uint64_t timeout_us = 10'000'000;      // silence tolerated on an established link
    uint64_t keepalive_us = 1'000'000;     // send something at least this often
    uint64_t ack_delay_us = 20'000;        // max time we sit on an ack hoping to piggyback
    uint32_t max_send_bytes_per_sec = 2u * 1024u * 1024u; // token bucket cap per connection
    uint32_t max_reliable_in_flight = 256; // clamped to 256 (receive window)
    // Largest reliable message send() accepts.  Anything bigger than one packet is
    // split into fragments of the reliable stream and reassembled by the receiver, so it
    // must also fit max_reliable_in_flight fragments.  Unreliable messages are never
    // fragmented (limit: max_packet_payload(false)).
    uint32_t max_reliable_message = 65536;
    uint32_t max_unreliable_queue = 64;    // oldest dropped beyond this
    uint32_t max_packets_per_update = 16;  // per connection

    // Encryption + authentication.  When has_psk is set every connection (inbound and
    // outbound) must prove knowledge of the PSK during the handshake and all data is
    // sealed with ChaCha20-Poly1305 under per-connection keys from an ephemeral X25519
    // exchange.  Peers with mismatching setting are rejected (RejectReason::BadAuth).
    // Without a PSK the link is plaintext and unauthenticated (LAN / tests only).
    bool has_psk = false;
    crypto::Key psk{};
    void set_invite(const crypto::Invite &invite) {
        psk = crypto::invite_psk(invite);
        has_psk = true;
    }

    // Cookie key.  0 = random per Endpoint.  rng_seed 0 = random_device; set for tests.
    uint64_t cookie_secret = 0;
    uint64_t rng_seed = 0;

    // Logging.  The callback may be empty.  Per-packet events are Trace; state changes
    // Info; anomalies (bad packets, loss bursts) Warn.
    LogLevel log_level = LogLevel::Info;
    std::function<void(LogLevel, const std::string &)> log;
    // If non-zero, emit a stats line per connection at Info this often.
    uint64_t stats_log_interval_us = 0;
};

struct ConnStats {
    uint64_t packets_sent = 0, packets_recv = 0;
    uint64_t bytes_sent = 0, bytes_recv = 0;
    uint64_t packets_acked = 0;
    uint64_t packets_lost = 0;          // sent packets that fell out of the ack window unacked
    uint64_t dup_packets_dropped = 0;
    uint64_t old_packets_dropped = 0;   // older than the 32-packet ack window
    uint64_t bad_packets = 0;           // malformed frames / bad acks
    uint64_t auth_failures = 0;         // packets that failed AEAD authentication
    uint64_t replay_dropped = 0;        // authentic packets replayed / too old
    uint64_t fragments_sent = 0, messages_reassembled = 0;
    bool encrypted = false;
    uint64_t reliable_sent = 0;         // unique reliable messages accepted by send()
    uint64_t reliable_retransmits = 0;
    uint64_t reliable_delivered = 0;
    uint64_t reliable_rejected = 0;     // send() refused (queue full / too large)
    uint64_t reliable_dup_dropped = 0;
    uint64_t unreliable_sent = 0, unreliable_recv = 0, unreliable_queue_dropped = 0;
    uint64_t srtt_us = 0, rttvar_us = 0, min_rtt_us = 0, last_rtt_us = 0;
    double loss_ewma = 0.0;             // smoothed packet loss fraction [0,1]
    uint32_t reliable_in_flight = 0;
    uint64_t us_since_recv = 0;
    uint64_t tx_bytes_per_sec = 0, rx_bytes_per_sec = 0; // ~1 s windows
};

std::string format_stats(const ConnStats &s);

struct Event {
    enum class Type : uint8_t { Connected, Disconnected, Message } type = Type::Message;
    ConnId conn = 0;
    NetAddr peer;
    // Message
    uint16_t channel = 0;
    bool reliable = false;
    std::vector<uint8_t> data;
    // Disconnected
    DisconnectReason reason = DisconnectReason::None;
    RejectReason reject = RejectReason::None;
    // Connected: true if we initiated it.
    bool outbound = false;
};

class Endpoint {
public:
    // The transport must outlive the Endpoint.
    Endpoint(IDatagramTransport &transport, Config config = {});
    ~Endpoint();
    Endpoint(const Endpoint &) = delete;
    Endpoint &operator=(const Endpoint &) = delete;

    // Accept inbound connections (host).  Default: false.
    void set_accepting(bool on) { accepting_ = on; }
    bool accepting() const { return accepting_; }

    // Begin an outbound handshake.  Returns 0 if at the connection limit.
    ConnId connect(const NetAddr &peer, uint64_t now_us);
    // Graceful close: tells the peer, emits a LocalClose event.
    void close(ConnId id, uint64_t now_us);

    SendResult send(ConnId id, uint16_t channel, const uint8_t *data, size_t size, bool reliable);
    SendResult send(ConnId id, uint16_t channel, const std::vector<uint8_t> &d, bool reliable) {
        return send(id, channel, d.data(), d.size(), reliable);
    }
    // Largest message send() accepts: reliable may be fragmented (cfg.max_reliable_message),
    // unreliable must fit one packet.
    size_t max_message_size(bool reliable) const;
    // Largest message that fits a single packet (no fragmentation).
    size_t max_packet_payload(bool reliable) const;

    // Pump: receive, run timers, transmit.  Cheap when idle.
    void update(uint64_t now_us);
    bool poll(Event &out);

    ConnState state(ConnId id) const;
    bool peer_addr(ConnId id, NetAddr &out) const;
    bool stats(ConnId id, ConnStats &out) const;
    size_t connection_count() const { return conns_.size(); }
    std::vector<ConnId> connections() const;

    const Config &config() const { return cfg_; }

private:
    struct Conn;
    struct SentPacket;

    // wire
    void handle_datagram(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_challenge_request(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_challenge_reply(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_connect_request(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_connect_ok(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_reject(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_close(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void handle_data(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);

    // per-connection
    void tick_connection(Conn &c, uint64_t now);
    void send_handshake_step(Conn &c, uint64_t now);
    bool should_send(const Conn &c, uint64_t now) const;
    void send_data_packet(Conn &c, uint64_t now);
    void process_acks(Conn &c, uint16_t ack, uint32_t bits, uint64_t now);
    void mark_lost(Conn &c, SentPacket &rec, const char *why);
    void derive_session(Conn &c, const uint8_t dh[32], const uint8_t client_pub[32], const uint8_t server_pub[32]);
    size_t packet_overhead() const;
    void scan_timeouts(Conn &c, uint64_t now);
    bool parse_frames(Conn &c, const uint8_t *p, size_t n);
    void deliver_reliable(Conn &c);
    uint64_t current_rto(const Conn &c) const;

    void finish_connection(ConnId id, DisconnectReason reason, RejectReason reject, bool notify_peer,
                           uint64_t now);
    void queue_event(Event ev);
    ConnId allocate_id();
    Conn *find(ConnId id);
    const Conn *find(ConnId id) const;
    uint64_t make_cookie(const NetAddr &from, uint32_t client_id, uint64_t bucket) const;
    void raw_send(const NetAddr &to, const std::vector<uint8_t> &pkt);
    bool enabled(LogLevel lvl) const { return cfg_.log && lvl <= cfg_.log_level; }
    void log(LogLevel lvl, const std::string &msg) const;
    void log_conn(LogLevel lvl, const Conn &c, const std::string &msg) const;

    IDatagramTransport &transport_;
    Config cfg_;
    bool accepting_ = false;
    uint64_t now_ = 0;
    uint64_t cookie_secret_ = 0;
    std::mt19937_64 rng_;
    std::unordered_map<ConnId, std::unique_ptr<Conn>> conns_;
    // server-side dedup of retried ConnectRequests: (addr, client_id) -> local id
    std::map<std::tuple<NetAddr, uint32_t>, ConnId> inbound_index_;
    std::deque<Event> events_;
    std::vector<uint8_t> rx_buf_;
};

// SipHash-2-4 (public domain algorithm) used for handshake cookies.  Exposed for tests.
uint64_t siphash24(uint64_t k0, uint64_t k1, const uint8_t *data, size_t size);

} // namespace psprecomp::net
