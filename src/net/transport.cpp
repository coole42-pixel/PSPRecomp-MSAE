#include "psprecomp/net/transport.hpp"

#include <chrono>
#include <cstdio>
#include <cstring>

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#include <mstcpip.h>
#ifndef SIO_UDP_CONNRESET
#define SIO_UDP_CONNRESET _WSAIOW(IOC_VENDOR, 12)
#endif
#else
#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cerrno>
#endif

namespace psprecomp::net {

std::string NetAddr::to_string() const {
    char buf[96];
    if (is_v4()) {
        uint32_t a = v4();
        std::snprintf(buf, sizeof(buf), "%u.%u.%u.%u:%u", (a >> 24) & 0xFFu, (a >> 16) & 0xFFu, (a >> 8) & 0xFFu,
                      a & 0xFFu, static_cast<unsigned>(port));
        return buf;
    }
    char text[INET6_ADDRSTRLEN] = {0};
    in6_addr a6;
    std::memcpy(&a6, ip.data(), 16);
    if (!inet_ntop(AF_INET6, &a6, text, sizeof(text))) return "[?]";
    std::snprintf(buf, sizeof(buf), "[%s]:%u", text, static_cast<unsigned>(port));
    return buf;
}

bool NetAddr::parse(const std::string &text, NetAddr &out) {
    auto parse_port = [](const char *s, uint16_t &out_port) {
        char *end = nullptr;
        unsigned long v = std::strtoul(s, &end, 10);
        if (end == s || *end != '\0' || v > 65535) return false;
        out_port = static_cast<uint16_t>(v);
        return true;
    };
    NetAddr r;
    if (!text.empty() && text[0] == '[') { // [v6]:port
        size_t close = text.find(']');
        if (close == std::string::npos) return false;
        in6_addr a6;
        if (inet_pton(AF_INET6, text.substr(1, close - 1).c_str(), &a6) != 1) return false;
        std::memcpy(r.ip.data(), &a6, 16);
        if (close + 1 < text.size()) {
            if (text[close + 1] != ':' || !parse_port(text.c_str() + close + 2, r.port)) return false;
        }
        out = r;
        return true;
    }
    if (text.find(':') != std::string::npos && text.find('.') == std::string::npos) { // bare v6
        in6_addr a6;
        if (inet_pton(AF_INET6, text.c_str(), &a6) != 1) return false;
        std::memcpy(r.ip.data(), &a6, 16);
        out = r;
        return true;
    }
    unsigned a = 0, b = 0, c = 0, d = 0;
    int consumed = 0;
    if (std::sscanf(text.c_str(), "%u.%u.%u.%u%n", &a, &b, &c, &d, &consumed) != 4) return false;
    if (a > 255 || b > 255 || c > 255 || d > 255) return false;
    const char *rest = text.c_str() + consumed;
    uint16_t port = 0;
    if (*rest == ':') {
        if (!parse_port(rest + 1, port)) return false;
    } else if (*rest != '\0') {
        return false;
    }
    out = NetAddr((a << 24) | (b << 16) | (c << 8) | d, port);
    return true;
}

uint64_t monotonic_now_us() {
    using namespace std::chrono;
    return static_cast<uint64_t>(
        duration_cast<microseconds>(steady_clock::now().time_since_epoch()).count());
}

// ---------------------------------------------------------------------------------
// Real UDP socket
// ---------------------------------------------------------------------------------
namespace {

#ifdef _WIN32
using sock_t = SOCKET;
constexpr sock_t kInvalidSock = INVALID_SOCKET;
void close_sock(sock_t s) { closesocket(s); }
#else
using sock_t = int;
constexpr sock_t kInvalidSock = -1;
void close_sock(sock_t s) { ::close(s); }
#endif

#ifdef _WIN32
// WSAStartup is reference counted by Windows itself; pair each socket with one call.
struct WsaGuard {
    bool ok = false;
    WsaGuard() {
        WSADATA data;
        ok = WSAStartup(MAKEWORD(2, 2), &data) == 0;
    }
    ~WsaGuard() {
        if (ok) WSACleanup();
    }
};
#endif

#ifdef _WIN32
using socklen_t_ = int;
using io_len_t = int;
#else
using socklen_t_ = socklen_t;
using io_len_t = size_t;
#endif

class UdpSocket;

NetAddr from_sockaddr(const sockaddr_storage &ss) {
    NetAddr a;
    if (ss.ss_family == AF_INET6) {
        const auto *s6 = reinterpret_cast<const sockaddr_in6 *>(&ss);
        std::memcpy(a.ip.data(), &s6->sin6_addr, 16);
        a.port = ntohs(s6->sin6_port);
    } else {
        const auto *s4 = reinterpret_cast<const sockaddr_in *>(&ss);
        a = NetAddr(ntohl(s4->sin_addr.s_addr), ntohs(s4->sin_port));
    }
    return a;
}

class UdpSocket final : public IDatagramTransport {
public:
    ~UdpSocket() override {
        if (sock_ != kInvalidSock) close_sock(sock_);
    }

    bool open(uint16_t port, const NetAddr *bind_addr, std::string *error, bool ipv4_only, bool *used_ipv6) {
        auto fail = [&](const char *what) {
            if (error) {
#ifdef _WIN32
                *error = std::string(what) + " failed, WSA error " + std::to_string(WSAGetLastError());
#else
                *error = std::string(what) + " failed: " + std::strerror(errno);
#endif
            }
            return false;
        };
#ifdef _WIN32
        if (!wsa_.ok) return fail("WSAStartup");
#endif
        const bool want_v4_only = ipv4_only || (bind_addr && !bind_addr->is_unspecified() && bind_addr->is_v4());
        v6_ = false;
        if (!want_v4_only) {
            sock_ = ::socket(AF_INET6, SOCK_DGRAM, IPPROTO_UDP);
            if (sock_ != kInvalidSock) {
                int off = 0; // dual stack: also accept IPv4 (as v4-mapped)
                setsockopt(sock_, IPPROTO_IPV6, IPV6_V6ONLY, reinterpret_cast<const char *>(&off), sizeof(off));
                v6_ = true;
            }
        }
        if (!v6_) {
            sock_ = ::socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
            if (sock_ == kInvalidSock) return fail("socket");
        }
        if (used_ipv6) *used_ipv6 = v6_;
#ifdef _WIN32
        u_long nonblocking = 1;
        if (ioctlsocket(sock_, FIONBIO, &nonblocking) != 0) return fail("ioctlsocket(FIONBIO)");
        // Windows reports ICMP port-unreachable as a recvfrom error on UDP sockets.
        BOOL no_reset = FALSE;
        DWORD ret = 0;
        WSAIoctl(sock_, SIO_UDP_CONNRESET, &no_reset, sizeof(no_reset), nullptr, 0, &ret, nullptr, nullptr);
#else
        int flags = fcntl(sock_, F_GETFL, 0);
        if (flags < 0 || fcntl(sock_, F_SETFL, flags | O_NONBLOCK) != 0) return fail("fcntl(O_NONBLOCK)");
#endif
        int buffer = 1 << 20;
        setsockopt(sock_, SOL_SOCKET, SO_RCVBUF, reinterpret_cast<const char *>(&buffer), sizeof(buffer));
        setsockopt(sock_, SOL_SOCKET, SO_SNDBUF, reinterpret_cast<const char *>(&buffer), sizeof(buffer));

        NetAddr want = bind_addr ? *bind_addr : NetAddr();
        want.port = port;
        sockaddr_storage ss{};
        socklen_t_ len = to_sockaddr(want, ss);
        if (::bind(sock_, reinterpret_cast<sockaddr *>(&ss), len) != 0) return fail("bind");

        sockaddr_storage bound{};
        socklen_t_ blen = sizeof(bound);
        if (getsockname(sock_, reinterpret_cast<sockaddr *>(&bound), &blen) != 0) return fail("getsockname");
        local_ = from_sockaddr(bound);
        return true;
    }

    socklen_t_ to_sockaddr(const NetAddr &a, sockaddr_storage &ss) const {
        std::memset(&ss, 0, sizeof(ss));
        if (v6_) {
            auto *s6 = reinterpret_cast<sockaddr_in6 *>(&ss);
            s6->sin6_family = AF_INET6;
            s6->sin6_port = htons(a.port);
            std::memcpy(&s6->sin6_addr, a.ip.data(), 16); // v4 stays v4-mapped
            return sizeof(sockaddr_in6);
        }
        auto *s4 = reinterpret_cast<sockaddr_in *>(&ss);
        s4->sin_family = AF_INET;
        s4->sin_port = htons(a.port);
        s4->sin_addr.s_addr = htonl(a.is_v4() ? a.v4() : 0);
        return sizeof(sockaddr_in);
    }

    bool send_to(const NetAddr &to, const uint8_t *data, size_t size) override {
        if (sock_ == kInvalidSock || size > 65000) return false;
        if (!v6_ && !to.is_v4()) return false; // IPv4-only socket cannot reach IPv6
        sockaddr_storage ss;
        socklen_t_ len = to_sockaddr(to, ss);
        // UDP: EWOULDBLOCK / ENOBUFS are indistinguishable from network loss to the
        // reliability layer above, so the result is reported but never fatal.
        int rc = static_cast<int>(::sendto(sock_, reinterpret_cast<const char *>(data), static_cast<io_len_t>(size), 0,
                                           reinterpret_cast<sockaddr *>(&ss), len));
        return rc == static_cast<int>(size);
    }

    int recv_from(NetAddr &from, uint8_t *buf, size_t capacity) override {
        if (sock_ == kInvalidSock) return 0;
        for (;;) {
            sockaddr_storage ss{};
            socklen_t_ len = sizeof(ss);
            int rc = static_cast<int>(::recvfrom(sock_, reinterpret_cast<char *>(buf), static_cast<io_len_t>(capacity), 0,
                                                 reinterpret_cast<sockaddr *>(&ss), &len));
            if (rc > 0) {
                from = from_sockaddr(ss);
                return rc;
            }
            if (rc == 0) continue; // zero-length datagram: skip
#ifdef _WIN32
            int err = WSAGetLastError();
            if (err == WSAECONNRESET || err == WSAEMSGSIZE) continue;
#else
            if (errno == EINTR || errno == ECONNREFUSED) continue;
#endif
            return 0;
        }
    }

    NetAddr local_addr() const override { return local_; }

private:
#ifdef _WIN32
    WsaGuard wsa_;
#endif
    sock_t sock_ = kInvalidSock;
    bool v6_ = false;
    NetAddr local_;
};

} // namespace

std::unique_ptr<IDatagramTransport> open_udp_socket(uint16_t port, const NetAddr *bind_addr, std::string *error,
                                                    bool ipv4_only, bool *used_ipv6) {
    auto sock = std::make_unique<UdpSocket>();
    if (!sock->open(port, bind_addr, error, ipv4_only, used_ipv6)) return nullptr;
    return sock;
}

// ---------------------------------------------------------------------------------
// Simulator
// ---------------------------------------------------------------------------------
SimNetwork::SimNetwork(SimLinkParams params) : params_(params), rng_(params.seed) {}
SimNetwork::~SimNetwork() = default;

double SimNetwork::unit() {
    return static_cast<double>(rng_() >> 11) * (1.0 / 9007199254740992.0);
}

class SimTransport final : public IDatagramTransport {
public:
    SimTransport(SimNetwork &net, NetAddr addr) : net_(net), addr_(addr) {}

    bool send_to(const NetAddr &to, const uint8_t *data, size_t size) override {
        if (size > 65000) return false;
        net_.route(addr_, to, data, size);
        return true;
    }

    int recv_from(NetAddr &from, uint8_t *buf, size_t capacity) override {
        auto &inbox = net_.inboxes_[addr_];
        auto it = inbox.begin();
        if (it == inbox.end() || it->first > net_.now_us_) return 0;
        from = it->second.from;
        size_t n = it->second.data.size();
        if (n > capacity) n = capacity; // matches UDP truncation semantics
        std::memcpy(buf, it->second.data.data(), n);
        inbox.erase(it);
        return static_cast<int>(n);
    }

    NetAddr local_addr() const override { return addr_; }

private:
    SimNetwork &net_;
    NetAddr addr_;
};

std::unique_ptr<IDatagramTransport> SimNetwork::create_endpoint(NetAddr addr) {
    inboxes_[addr];
    return std::make_unique<SimTransport>(*this, addr);
}

void SimNetwork::route(const NetAddr &from, const NetAddr &to, const uint8_t *data_in, size_t size_in) {
    ++sent_;
    std::vector<uint8_t> mutable_copy;
    if (mutator_) {
        mutable_copy.assign(data_in, data_in + size_in);
        if (!mutator_(from, to, mutable_copy)) {
            ++dropped_;
            return;
        }
    }
    const uint8_t *data = mutator_ ? mutable_copy.data() : data_in;
    const size_t size = mutator_ ? mutable_copy.size() : size_in;
    if (blackhole_ || unit() < params_.loss) {
        ++dropped_;
        return;
    }
    auto it = inboxes_.find(to);
    if (it == inboxes_.end()) {
        ++dropped_; // nobody listening
        return;
    }
    int copies = 1;
    if (params_.duplicate > 0.0 && unit() < params_.duplicate) {
        copies = 2;
        ++duplicated_;
    }
    for (int i = 0; i < copies; ++i) {
        uint64_t delay = params_.latency_us;
        if (params_.jitter_us) delay += static_cast<uint64_t>(unit() * static_cast<double>(params_.jitter_us));
        if (params_.reorder > 0.0 && unit() < params_.reorder) delay += params_.reorder_extra_us;
        Packet p;
        p.from = from;
        p.data.assign(data, data + size);
        it->second.emplace(now_us_ + delay, std::move(p));
    }
}

void SimNetwork::inject(const NetAddr &from, const NetAddr &to, const std::vector<uint8_t> &data) {
    Packet p;
    p.from = from;
    p.data = data;
    inboxes_[to].emplace(now_us_, std::move(p));
}

} // namespace psprecomp::net
