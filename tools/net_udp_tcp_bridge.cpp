// psp_net_bridge: TEST SHIM that carries UDP datagrams over one TCP connection.
//
// Exists only so two devices that cannot exchange UDP directly (e.g. a PC and a phone
// connected by `adb` over USB, where only TCP can be forwarded) can still run the real
// thin-UDP protocol against each other.  The datagrams are forwarded byte-for-byte, so
// the handshake, crypto and wire format are exercised unchanged.  Not a product feature:
// TCP adds head-of-line blocking, so do not use it to judge latency or loss behaviour.
//
//   psp_net_bridge serve  <tcp_port> <app_udp_port>     # next to the app that listens on UDP
//   psp_net_bridge client <tcp_host:port> <local_udp_port>  # app connects to 127.0.0.1:local_udp_port
//
// Frame format on the TCP stream: u16 little-endian length, then the datagram.

#include "psprecomp/net/transport.hpp"

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <thread>
#include <vector>

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
using sock_t = SOCKET;
static void close_sock(sock_t s) { closesocket(s); }
static void set_nonblocking(sock_t s) { u_long on = 1; ioctlsocket(s, FIONBIO, &on); }
static bool would_block() { int e = WSAGetLastError(); return e == WSAEWOULDBLOCK || e == WSAEINTR; }
#else
#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cerrno>
using sock_t = int;
static void close_sock(sock_t s) { ::close(s); }
static void set_nonblocking(sock_t s) { fcntl(s, F_SETFL, fcntl(s, F_GETFL, 0) | O_NONBLOCK); }
static bool would_block() { return errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR; }
#endif

using namespace psprecomp::net;

namespace {

void nodelay(sock_t s) {
    int one = 1;
    setsockopt(s, IPPROTO_TCP, TCP_NODELAY, reinterpret_cast<const char *>(&one), sizeof(one));
}

bool send_all(sock_t s, const uint8_t *d, size_t n) {
    size_t off = 0;
    while (off < n) {
        int rc = static_cast<int>(::send(s, reinterpret_cast<const char *>(d + off), static_cast<int>(n - off), 0));
        if (rc > 0) {
            off += static_cast<size_t>(rc);
        } else if (rc < 0 && would_block()) {
            std::this_thread::sleep_for(std::chrono::microseconds(200));
        } else {
            return false;
        }
    }
    return true;
}

} // namespace

int main(int argc, char **argv) {
    if (argc != 4) {
        std::fprintf(stderr, "usage: psp_net_bridge serve <tcp_port> <app_udp_port>\n"
                             "       psp_net_bridge client <tcp_host:port> <local_udp_port>\n");
        return 2;
    }
#ifdef _WIN32
    WSADATA wsa;
    WSAStartup(MAKEWORD(2, 2), &wsa);
#endif
    const bool serve = std::strcmp(argv[1], "serve") == 0;
    sock_t tcp = static_cast<sock_t>(-1);
    std::unique_ptr<IDatagramTransport> udp;
    NetAddr app; // where to deliver datagrams that arrive over TCP

    if (serve) {
        sock_t ls = ::socket(AF_INET, SOCK_STREAM, 0);
        int one = 1;
        setsockopt(ls, SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<const char *>(&one), sizeof(one));
        sockaddr_in sa{};
        sa.sin_family = AF_INET;
        sa.sin_addr.s_addr = htonl(0x7F000001u);
        sa.sin_port = htons(static_cast<uint16_t>(std::atoi(argv[2])));
        if (::bind(ls, reinterpret_cast<sockaddr *>(&sa), sizeof(sa)) != 0 || ::listen(ls, 1) != 0) {
            std::fprintf(stderr, "bridge: cannot listen on tcp %s\n", argv[2]);
            return 1;
        }
        std::printf("bridge: waiting for tcp client on port %s\n", argv[2]);
        std::fflush(stdout);
        tcp = ::accept(ls, nullptr, nullptr);
        close_sock(ls);
        app = NetAddr::loopback(static_cast<uint16_t>(std::atoi(argv[3])));
        std::string err;
        NetAddr any;
        udp = open_udp_socket(0, nullptr, &err, true);
    } else {
        std::string target = argv[2];
        size_t colon = target.rfind(':');
        if (colon == std::string::npos) return 2;
        sock_t s = ::socket(AF_INET, SOCK_STREAM, 0);
        sockaddr_in sa{};
        sa.sin_family = AF_INET;
        inet_pton(AF_INET, target.substr(0, colon).c_str(), &sa.sin_addr);
        sa.sin_port = htons(static_cast<uint16_t>(std::atoi(target.c_str() + colon + 1)));
        if (::connect(s, reinterpret_cast<sockaddr *>(&sa), sizeof(sa)) != 0) {
            std::fprintf(stderr, "bridge: cannot connect to tcp %s\n", argv[2]);
            return 1;
        }
        tcp = s;
        std::string err;
        NetAddr bind = NetAddr::loopback(0);
        udp = open_udp_socket(static_cast<uint16_t>(std::atoi(argv[3])), &bind, &err, true);
    }
    if (!udp || tcp == static_cast<sock_t>(-1)) {
        std::fprintf(stderr, "bridge: setup failed\n");
        return 1;
    }
    nodelay(tcp);
    set_nonblocking(tcp);
    std::printf("bridge: up (%s), udp local %s\n", serve ? "serve" : "client", udp->local_addr().to_string().c_str());
    std::fflush(stdout);

    std::vector<uint8_t> rx;     // TCP stream reassembly
    std::vector<uint8_t> dgram(2048);
    NetAddr from;
    uint64_t forwarded_up = 0, forwarded_down = 0;
    for (;;) {
        bool idle = true;
        // UDP -> TCP
        int n;
        while ((n = udp->recv_from(from, dgram.data(), dgram.size())) > 0) {
            idle = false;
            if (!serve) app = from; // client side: reply to whoever last talked to us
            uint8_t hdr[2] = {static_cast<uint8_t>(n), static_cast<uint8_t>(n >> 8)};
            if (!send_all(tcp, hdr, 2) || !send_all(tcp, dgram.data(), static_cast<size_t>(n))) goto done;
            ++forwarded_up;
        }
        // TCP -> UDP
        {
            uint8_t buf[4096];
            int rc = static_cast<int>(::recv(tcp, reinterpret_cast<char *>(buf), sizeof(buf), 0));
            if (rc > 0) {
                rx.insert(rx.end(), buf, buf + rc);
                idle = false;
            } else if (rc == 0) {
                goto done;
            } else if (!would_block()) {
                goto done;
            }
            while (rx.size() >= 2) {
                size_t len = static_cast<size_t>(rx[0] | (rx[1] << 8));
                if (rx.size() < 2 + len) break;
                if (app.port != 0) udp->send_to(app, rx.data() + 2, len);
                rx.erase(rx.begin(), rx.begin() + static_cast<std::ptrdiff_t>(2 + len));
                ++forwarded_down;
            }
        }
        if (idle) std::this_thread::sleep_for(std::chrono::microseconds(500));
    }
done:
    std::printf("bridge: closed (udp->tcp %llu, tcp->udp %llu)\n", static_cast<unsigned long long>(forwarded_up),
                static_cast<unsigned long long>(forwarded_down));
    return 0;
}
