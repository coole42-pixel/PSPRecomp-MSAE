#pragma once

// PSP ad-hoc (sceNetAdhoc PDP + sceNetAdhocctl group) semantics on top of the thin UDP
// transport.  Game-agnostic and free of guest-memory access, so it can be unit tested
// without a game; the profile glue (motorstorm_net_hle.cpp) maps guest calls onto it.
//
// Model: a "group" is a private room.  One node hosts, the others join; the host assigns
// each node a virtual MAC and routes datagrams (star topology), so joiner<->joiner and
// broadcast traffic works with a single inbound connection per player (one invite, one
// NAT traversal each).  PDP datagrams ride the reliable ordered channel by default
// because PSP games were written for a nearly lossless local radio link and the one
// MotorStorm path inspected so far does not retransmit; set pdp_reliable=false for
// lowest latency.  See docs/MULTIPLAYER_PSP_PROTOCOL.md.
//
// Not thread safe: pump update() / handle_event() from one thread.

#include <array>
#include <deque>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "psprecomp/net/thin_udp.hpp"

namespace psprecomp::net {

using AdhocMac = std::array<uint8_t, 6>;
constexpr AdhocMac kAdhocBroadcastMac{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
std::string mac_to_string(const AdhocMac &mac);

// Error codes returned to the guest.  Values follow the public PSP SDK headers as best
// recalled and are UNVERIFIED against this game: the call sites inspected only test
// for zero / non-zero, and the first real trace will confirm or correct them.
namespace adhoc_err {
constexpr uint32_t kInvalidSocketId = 0x80410701u;
constexpr uint32_t kInvalidAddr = 0x80410702u;
constexpr uint32_t kInvalidPort = 0x80410703u;
constexpr uint32_t kInvalidDataLen = 0x80410705u;
constexpr uint32_t kSocketDeleted = 0x80410707u;
constexpr uint32_t kWouldBlock = 0x80410709u;
constexpr uint32_t kPortInUse = 0x8041070Au;
constexpr uint32_t kNotConnected = 0x8041070Bu;
constexpr uint32_t kTimeout = 0x80410715u;
constexpr uint32_t kInvalidArg = 0x80410711u;
constexpr uint32_t kNotInitialized = 0x80410712u;
constexpr uint32_t kNoDataAvailable = 0x80410713u;
constexpr uint32_t kNoSpace = 0x80410718u;
} // namespace adhoc_err

// Adhocctl event flags delivered to the handler registered with AddHandler.
namespace adhocctl_event {
constexpr int kError = 0;
constexpr int kConnect = 1;
constexpr int kDisconnect = 2;
constexpr int kScan = 3;
constexpr int kGame = 4;
constexpr int kDiscover = 5;
} // namespace adhocctl_event

struct AdhocPeer {
    AdhocMac mac{};
    std::string nickname;
    ConnId conn = 0; // host side only
};

struct AdhocOptions {
    bool host = false;
    AdhocMac mac{}; // all-zero = pick a random locally administered MAC
    std::string nickname = "PSPRecomp";
    std::string product; // PSP adhoc product id presented by the game (informational)
    bool pdp_reliable = true;
    uint32_t max_peers = 7; // PSP ad-hoc groups are small
    std::function<void(LogLevel, const std::string &)> log;
    LogLevel log_level = LogLevel::Info;
};

struct AdhocStats {
    uint64_t pdp_sent = 0, pdp_recv = 0, pdp_routed = 0, pdp_forwarded = 0;
    uint64_t dropped_no_socket = 0, dropped_queue_full = 0, dropped_unknown_dst = 0, dropped_malformed = 0;
    uint64_t dropped_send_backlog = 0, send_backlog_peak_bytes = 0;
    uint64_t bytes_sent = 0, bytes_recv = 0;
};

class AdhocNode {
public:
    enum class State : uint8_t { Idle, Joining, Connected, Disconnected };

    struct Datagram {
        AdhocMac src{};
        uint16_t src_port = 0;
        std::vector<uint8_t> data;
    };
    struct CtlEvent {
        int flag = 0;
        int error = 0;
    };
    struct SocketInfo {
        int id = 0;
        AdhocMac mac{};
        uint16_t port = 0;
        uint32_t rcvbuf = 0;
        uint32_t queued_bytes = 0;
    };

    // `ep` must outlive the node.  For a host the Endpoint must be accepting.
    AdhocNode(Endpoint &ep, AdhocOptions opts);

    // Host: the group exists immediately.  Client: attach to an established outbound
    // connection (sends Hello; Connected once the host answers with Welcome).
    void start_host();
    void attach_client(ConnId host_conn);
    // Feed every Endpoint event for connections this node owns.
    void handle_event(const Event &ev);
    void update(uint64_t now_us);
    void leave(uint64_t now_us); // disconnect the group (client closes, host drops peers)

    State state() const { return state_; }
    AdhocMac local_mac() const { return local_mac_; }
    std::vector<AdhocPeer> peers() const;
    const AdhocStats &stats() const { return stats_; }
    bool poll_ctl_event(CtlEvent &out);

    // ---- sceNetAdhoc PDP ----
    // Return >0 socket id, or a negative-as-u32 SDK error (as int32).
    int32_t pdp_create(const AdhocMac &mac, uint16_t port, uint32_t rcvbuf);
    int32_t pdp_delete(int id);
    // 0 on success, else an SDK error.  `n` up to 65519.
    uint32_t pdp_send(int id, const AdhocMac &dst, uint16_t dst_port, const uint8_t *data, size_t n);
    // 0 on success (out filled), kWouldBlock when the queue is empty, other errors for bad ids.
    uint32_t pdp_recv(int id, Datagram &out);
    // Size in bytes of the next queued datagram (0 = none) -- for GetPdpStat style probing.
    size_t pdp_peek_size(int id) const;
    std::vector<SocketInfo> sockets() const;

private:
    struct Socket {
        int id = 0;
        AdhocMac mac{};
        uint16_t port = 0;
        uint32_t rcvbuf = 0;
        uint32_t queued_bytes = 0;
        std::deque<Datagram> queue;
    };

    void log(LogLevel lvl, const std::string &m) const;
    void on_control(ConnId from, const uint8_t *p, size_t n);
    void on_data(ConnId from, const uint8_t *p, size_t n);
    void deliver_local(const AdhocMac &src, uint16_t sport, const AdhocMac &dst, uint16_t dport,
                       const uint8_t *data, size_t n);
    // Queues (reliable) or sends (unreliable) a message.  Reliable messages wait in a
    // bounded per-connection queue until the transport window has room, so a burst never
    // silently loses data; returns false only when that queue is full.
    bool send_to_conn(ConnId c, uint16_t channel, const std::vector<uint8_t> &msg, bool reliable);
    void flush_pending(ConnId c);
    void broadcast_control(const std::vector<uint8_t> &msg, ConnId except = 0);
    AdhocMac allocate_mac();
    Socket *find_socket(int id);
    const Socket *find_socket(int id) const;
    Socket *find_socket_by_port(uint16_t port);

    Endpoint &ep_;
    AdhocOptions opt_;
    State state_ = State::Idle;
    AdhocMac local_mac_{};
    ConnId host_conn_ = 0;                 // client: connection to the host
    std::map<ConnId, AdhocPeer> by_conn_;  // host: joined peers (and pending until Hello)
    std::map<AdhocMac, ConnId> by_mac_;    // host: routing table
    std::vector<AdhocPeer> known_;         // client: peers learned from the host
    struct PendingMsg {
        uint16_t channel;
        std::vector<uint8_t> data;
    };
    struct PendingQueue {
        std::deque<PendingMsg> q;
        size_t bytes = 0;
    };
    std::map<ConnId, PendingQueue> pending_;
    std::map<int, Socket> sockets_;
    int next_socket_id_ = 1;
    uint8_t next_host_index_ = 2;
    std::deque<CtlEvent> ctl_events_;
    AdhocStats stats_;
};

} // namespace psprecomp::net
