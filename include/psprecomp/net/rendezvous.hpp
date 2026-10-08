#pragma once

// Internet play: rendezvous (room lookup + NAT hole punching) and relay fallback.
//
//   host                     rendezvous server                      joiner
//    | Register(room,secret) ------>|                                  |
//    |<----- RegisterOK(reflexive)  |<------------ Lookup(room) -------|
//    |<----- PunchRequest(joiner)   |------- LookupOK(host reflexive)->|
//    | punch ---------------------------------------------> (opens NAT)|
//    |<========= direct thin-UDP handshake (retried every 500 ms) =====|
//    |                                                                  |
//    |  if direct fails: both sides wrap datagrams in Relay frames and  |
//    |  the server forwards them; the session is still end-to-end       |
//    |  encrypted with the invite, so the relay only sees ciphertext.   |
//
// The room id the server sees is crypto::invite_room_id(invite), a one-way hash; the
// invite itself (the PSK) never leaves the players.  The server is a convenience, not a
// trust anchor: a malicious server can deny service but cannot read or forge traffic.
//
// Limitations: no TURN-style allocation accounting beyond a per-room rate limit; hole
// punching works for full-cone / restricted / port-restricted NATs, symmetric NATs fall
// back to the relay.  The server does not authenticate Lookup/Register sources, so
// spoofed lookups can make the server send small punch requests to a host.

#include <array>
#include <deque>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>

#include "psprecomp/net/thin_udp.hpp"
#include "psprecomp/net/transport.hpp"

namespace psprecomp::net {

using RoomId = std::array<uint8_t, 16>;
using RoomSecret = std::array<uint8_t, 16>;

// ---------------------------------------------------------------------------------
// Server
// ---------------------------------------------------------------------------------
struct RendezvousConfig {
    uint64_t room_ttl_us = 45'000'000;        // room vanishes unless the host re-registers
    uint32_t max_rooms = 4096;
    uint32_t relay_bytes_per_sec = 256 * 1024; // per room, both directions combined
    uint32_t relay_burst_bytes = 64 * 1024;
    uint32_t max_relay_payload = 1500;
    std::function<void(LogLevel, const std::string &)> log;
    LogLevel log_level = LogLevel::Info;
};

struct RendezvousStats {
    uint64_t registers = 0, lookups = 0, lookups_missed = 0, relayed_packets = 0, relayed_bytes = 0,
             relay_dropped = 0, bad_packets = 0, rooms_expired = 0;
    size_t rooms = 0;
};

class RendezvousServer {
public:
    RendezvousServer(IDatagramTransport &transport, RendezvousConfig cfg = {});
    void update(uint64_t now_us);
    const RendezvousStats &stats() const { return stats_; }

private:
    struct Room {
        NetAddr host;
        RoomSecret secret{};
        uint64_t last_seen_us = 0;
        double tokens = 0;
        uint64_t tokens_us = 0;
    };
    void handle(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now);
    void log(LogLevel lvl, const std::string &m) const {
        if (cfg_.log && lvl <= cfg_.log_level) cfg_.log(lvl, m);
    }
    IDatagramTransport &transport_;
    RendezvousConfig cfg_;
    std::map<RoomId, Room> rooms_;
    RendezvousStats stats_;
    std::vector<uint8_t> buf_;
};

// ---------------------------------------------------------------------------------
// Client-side transport: shares the game socket with the Endpoint so the NAT mapping
// the server observes is the one the peer must reach.
// ---------------------------------------------------------------------------------
struct SignalEvent {
    enum class Type : uint8_t {
        Registered,      // addr = our reflexive (public) address
        RegisterRejected, // room already owned by someone else
        LookupOk,        // addr = host's reflexive address
        LookupFailed,    // no such room
        PunchRequest,    // addr = a joiner that is about to connect: punch toward it
    } type = Type::Registered;
    NetAddr addr;
    RoomId room{};
};

class SignalingTransport final : public IDatagramTransport {
public:
    // `inner` must outlive this object.
    SignalingTransport(IDatagramTransport &inner, NetAddr server);

    // Host: keep `room` registered (refreshed automatically).  Joiner: resolve `room`.
    void register_room(const RoomId &room, const RoomSecret &secret);
    void lookup(const RoomId &room);
    // Route traffic to/from `peer` through the server's relay.
    void set_relay_peer(const NetAddr &peer, bool on);
    bool is_relayed(const NetAddr &peer) const { return relay_peers_.count(peer) != 0; }
    void set_relay_room(const RoomId &room) { relay_room_ = room; }
    // Send a tiny datagram directly to `peer` to open our NAT toward it.
    void punch(const NetAddr &peer);

    void update(uint64_t now_us); // retries + keepalives
    bool poll(SignalEvent &out);
    const NetAddr &reflexive() const { return reflexive_; }

    uint64_t relayed_tx = 0, relayed_rx = 0, direct_tx = 0, direct_rx = 0;

    // IDatagramTransport
    bool send_to(const NetAddr &to, const uint8_t *data, size_t size) override;
    int recv_from(NetAddr &from, uint8_t *buf, size_t capacity) override;
    NetAddr local_addr() const override { return inner_.local_addr(); }

private:
    IDatagramTransport &inner_;
    NetAddr server_;
    std::deque<SignalEvent> events_;
    std::set<NetAddr> relay_peers_;
    NetAddr reflexive_;
    RoomId relay_room_{};
    // pending requests (resent until answered)
    bool want_register_ = false, registered_ = false, want_lookup_ = false;
    RoomId register_room_{}, lookup_room_{};
    RoomSecret secret_{};
    uint64_t last_register_us_ = 0, last_lookup_us_ = 0;
};

// ---------------------------------------------------------------------------------
// Convenience orchestration of host / joiner (rendezvous -> punch -> direct -> relay)
// ---------------------------------------------------------------------------------
struct RoomConfig {
    uint64_t direct_timeout_us = 3'000'000; // give up on direct, switch to relay
    uint64_t total_timeout_us = 20'000'000;
    bool allow_relay = true;
};

class RoomHost {
public:
    // `raw` is the real socket (or simulator endpoint).  `ep_cfg.set_invite` is applied.
    RoomHost(IDatagramTransport &raw, const NetAddr &server, const crypto::Invite &invite, Config ep_cfg = {});
    void update(uint64_t now_us);
    Endpoint &endpoint() { return ep_; }
    bool registered() const { return registered_; }
    const NetAddr &public_addr() const { return sig_.reflexive(); }
    SignalingTransport &signaling() { return sig_; }

private:
    SignalingTransport sig_;
    Endpoint ep_;
    bool registered_ = false;
    bool started_ = false;
    RoomId room_;
    RoomSecret secret_{};
};

class RoomJoiner {
public:
    enum class State : uint8_t { Idle, LookingUp, ConnectingDirect, ConnectingRelay, Connected, Failed };
    RoomJoiner(IDatagramTransport &raw, const NetAddr &server, const crypto::Invite &invite, Config ep_cfg = {},
               RoomConfig room_cfg = {});
    void start(uint64_t now_us);
    void update(uint64_t now_us);
    Endpoint &endpoint() { return ep_; }
    ConnId conn() const { return conn_; }
    State state() const { return state_; }
    bool relayed() const { return state_ == State::Connected && used_relay_; }
    SignalingTransport &signaling() { return sig_; }
    const char *state_name() const;
    // Events other than Connected/Disconnected-of-failed-attempts are passed through.
    bool poll(Event &out);

private:
    SignalingTransport sig_;
    Endpoint ep_;
    RoomConfig rcfg_;
    RoomId room_;
    State state_ = State::Idle;
    NetAddr host_;
    ConnId conn_ = 0;
    bool used_relay_ = false;
    uint64_t started_us_ = 0, attempt_us_ = 0;
    std::deque<Event> out_;
};

} // namespace psprecomp::net
