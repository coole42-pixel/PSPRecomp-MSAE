#pragma once

// Datagram transport abstraction for the PSPRecomp multiplayer stack.
//
// The thin reliability layer (thin_udp.hpp) only talks to IDatagramTransport, so the
// same code runs over a real UDP socket, over a deterministic in-process network
// simulator (loss / latency / jitter / duplication / reordering), or later over a
// relay.  Everything here is non-blocking and single-threaded: the owner pumps it.

#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <random>
#include <string>
#include <vector>

namespace psprecomp::net {

// IP endpoint.  The address is always stored as 16 bytes: IPv6 as-is, IPv4 as the
// v4-mapped form ::ffff:a.b.c.d (the same representation a dual-stack socket reports),
// so one type and one comparison cover both families.
struct NetAddr {
    std::array<uint8_t, 16> ip{};
    uint16_t port = 0;

    NetAddr() = default;
    // IPv4, host byte order (0x7F000001 = 127.0.0.1).
    NetAddr(uint32_t v4, uint16_t p) : port(p) { set_v4(v4); }

    void set_v4(uint32_t v4) {
        ip.fill(0);
        ip[10] = ip[11] = 0xFF;
        ip[12] = static_cast<uint8_t>(v4 >> 24);
        ip[13] = static_cast<uint8_t>(v4 >> 16);
        ip[14] = static_cast<uint8_t>(v4 >> 8);
        ip[15] = static_cast<uint8_t>(v4);
    }
    bool is_v4() const {
        for (int i = 0; i < 10; ++i)
            if (ip[static_cast<size_t>(i)] != 0) return false;
        return ip[10] == 0xFF && ip[11] == 0xFF;
    }
    uint32_t v4() const {
        return static_cast<uint32_t>(ip[12]) << 24 | static_cast<uint32_t>(ip[13]) << 16 |
               static_cast<uint32_t>(ip[14]) << 8 | ip[15];
    }
    bool is_unspecified() const {
        for (uint8_t b : ip)
            if (b) return false;
        return true;
    }

    bool operator==(const NetAddr &o) const { return port == o.port && ip == o.ip; }
    bool operator!=(const NetAddr &o) const { return !(*this == o); }
    bool operator<(const NetAddr &o) const { return ip != o.ip ? ip < o.ip : port < o.port; }

    // "a.b.c.d:port" / "a.b.c.d" for IPv4, "[v6]:port" / "v6" for IPv6.
    std::string to_string() const;
    static bool parse(const std::string &text, NetAddr &out);
    static NetAddr loopback(uint16_t port) { return NetAddr(0x7F000001u, port); }
    static NetAddr loopback6(uint16_t port) {
        NetAddr a;
        a.ip[15] = 1;
        a.port = port;
        return a;
    }
};

class IDatagramTransport {
public:
    virtual ~IDatagramTransport() = default;
    // Fire and forget.  Returns false only for local errors (oversize, closed socket).
    virtual bool send_to(const NetAddr &to, const uint8_t *data, size_t size) = 0;
    // Returns the datagram length, or 0 when nothing is pending.
    virtual int recv_from(NetAddr &from, uint8_t *buf, size_t capacity) = 0;
    virtual NetAddr local_addr() const = 0;
};

// Real non-blocking UDP socket (Winsock / BSD sockets).  By default a dual-stack IPv6
// socket bound to the wildcard address that also talks IPv4 (as v4-mapped addresses);
// it falls back to a plain IPv4 socket if the host has no IPv6.  `bind_addr` restricts
// the local address (unspecified = wildcard); `ipv4_only` forces an AF_INET socket.
// port 0 = ephemeral; local_addr() reports the actual port.  Returns nullptr and fills
// *error on failure.  `used_ipv6` (optional) reports which kind was created.
std::unique_ptr<IDatagramTransport> open_udp_socket(uint16_t port, const NetAddr *bind_addr = nullptr,
                                                    std::string *error = nullptr, bool ipv4_only = false,
                                                    bool *used_ipv6 = nullptr);

// Monotonic microsecond clock for real-time callers.
uint64_t monotonic_now_us();

// ---------------------------------------------------------------------------------
// Deterministic network simulator.  Driven by an explicit virtual clock so tests are
// reproducible: call set_time() before pumping the endpoints.
// ---------------------------------------------------------------------------------
struct SimLinkParams {
    double loss = 0.0;        // probability a datagram is dropped, [0,1]
    double duplicate = 0.0;   // probability a datagram is delivered twice
    double reorder = 0.0;     // probability a datagram gets extra delay (reorders it)
    uint64_t latency_us = 0;  // one-way base latency
    uint64_t jitter_us = 0;   // uniform extra delay in [0, jitter_us]
    uint64_t reorder_extra_us = 20'000;
    uint64_t seed = 1;
};

class SimNetwork {
public:
    explicit SimNetwork(SimLinkParams params = {});
    ~SimNetwork();
    SimNetwork(const SimNetwork &) = delete;
    SimNetwork &operator=(const SimNetwork &) = delete;

    // The returned transport must not outlive the network.
    std::unique_ptr<IDatagramTransport> create_endpoint(NetAddr addr);

    void set_time(uint64_t now_us) { now_us_ = now_us; }
    uint64_t now() const { return now_us_; }
    void set_params(const SimLinkParams &p) { params_ = p; }
    // Drop everything in both directions (cable pull / partition).
    void set_blackhole(bool on) { blackhole_ = on; }
    // Put a raw datagram in `to`'s inbox as if sent by `from` (spoofing / fuzzing).
    void inject(const NetAddr &from, const NetAddr &to, const std::vector<uint8_t> &data);

    // Observe / tamper with every datagram before loss is applied.  Return false to
    // drop it.  Used by tests to act as a hostile network (sniff, flip bits, replay).
    using Mutator = std::function<bool(const NetAddr &from, const NetAddr &to, std::vector<uint8_t> &data)>;
    void set_mutator(Mutator m) { mutator_ = std::move(m); }

    uint64_t sent() const { return sent_; }
    uint64_t dropped() const { return dropped_; }
    uint64_t duplicated() const { return duplicated_; }

private:
    friend class SimTransport;
    struct Packet {
        NetAddr from;
        std::vector<uint8_t> data;
    };
    using Inbox = std::multimap<uint64_t, Packet>;

    void route(const NetAddr &from, const NetAddr &to, const uint8_t *data, size_t size);
    double unit();

    SimLinkParams params_;
    std::mt19937_64 rng_;
    uint64_t now_us_ = 0;
    bool blackhole_ = false;
    Mutator mutator_;
    std::map<NetAddr, Inbox> inboxes_;
    uint64_t sent_ = 0, dropped_ = 0, duplicated_ = 0;
};

} // namespace psprecomp::net
