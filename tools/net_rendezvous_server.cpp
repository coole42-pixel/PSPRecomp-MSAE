// psp_net_rendezvous: standalone rendezvous + relay server for PSPRecomp private rooms.
//
//   psp_net_rendezvous [--port 3478] [--relay-kbps 256] [--seconds N]
//
// Run it on any machine with a public UDP port (a small VPS, or a home PC with a
// forwarded port).  It only ever sees room ids (one-way hashes of invites) and, when it
// relays, end-to-end encrypted ciphertext.  See include/psprecomp/net/rendezvous.hpp.

#include "psprecomp/net/rendezvous.hpp"

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <thread>

using namespace psprecomp::net;

int main(int argc, char **argv) {
    uint16_t port = 3478;
    uint32_t relay_kbps = 256;
    double seconds = 0; // 0 = run forever
    for (int i = 1; i + 1 < argc; i += 2) {
        if (!std::strcmp(argv[i], "--port")) port = static_cast<uint16_t>(std::atoi(argv[i + 1]));
        else if (!std::strcmp(argv[i], "--relay-kbps")) relay_kbps = static_cast<uint32_t>(std::atoi(argv[i + 1]));
        else if (!std::strcmp(argv[i], "--seconds")) seconds = std::atof(argv[i + 1]);
        else {
            std::fprintf(stderr, "usage: psp_net_rendezvous [--port N] [--relay-kbps K] [--seconds S]\n");
            return 2;
        }
    }
    std::string err;
    auto sock = open_udp_socket(port, nullptr, &err);
    if (!sock) {
        std::fprintf(stderr, "cannot open UDP port %u: %s\n", port, err.c_str());
        return 1;
    }
    const uint64_t t0 = monotonic_now_us();
    RendezvousConfig cfg;
    cfg.relay_bytes_per_sec = relay_kbps * 1024;
    cfg.log = [t0](LogLevel, const std::string &m) {
        std::printf("[%8.3f] %s\n", static_cast<double>(monotonic_now_us() - t0) / 1e6, m.c_str());
        std::fflush(stdout);
    };
    RendezvousServer server(*sock, cfg);
    std::printf("rendezvous server listening on %s (relay cap %u KiB/s per room)\n",
                sock->local_addr().to_string().c_str(), relay_kbps);
    std::fflush(stdout);
    uint64_t last_report = t0;
    for (;;) {
        const uint64_t now = monotonic_now_us();
        server.update(now);
        if (seconds > 0 && now - t0 >= static_cast<uint64_t>(seconds * 1e6)) break;
        if (now - last_report >= 30'000'000) {
            last_report = now;
            const auto &s = server.stats();
            std::printf("stats: rooms=%zu registers=%llu lookups=%llu (missed %llu) relayed=%llu pkts / %llu B "
                        "(dropped %llu) bad=%llu expired=%llu\n",
                        s.rooms, static_cast<unsigned long long>(s.registers), static_cast<unsigned long long>(s.lookups),
                        static_cast<unsigned long long>(s.lookups_missed), static_cast<unsigned long long>(s.relayed_packets),
                        static_cast<unsigned long long>(s.relayed_bytes), static_cast<unsigned long long>(s.relay_dropped),
                        static_cast<unsigned long long>(s.bad_packets), static_cast<unsigned long long>(s.rooms_expired));
            std::fflush(stdout);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    const auto &s = server.stats();
    std::printf("server done: registers=%llu lookups=%llu relayed=%llu pkts / %llu B\n",
                static_cast<unsigned long long>(s.registers), static_cast<unsigned long long>(s.lookups),
                static_cast<unsigned long long>(s.relayed_packets), static_cast<unsigned long long>(s.relayed_bytes));
    return 0;
}
