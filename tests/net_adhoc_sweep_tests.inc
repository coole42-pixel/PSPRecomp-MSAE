// Regression guard: the ad-hoc ordering scenario must complete for EVERY loss pattern, not
// just one lucky seed.  An earlier version silently dropped datagrams that the host could
// not forward because its reliable window was full (about a third of seeds stalled), and
// the failure only showed up on another platform because connection iteration order
// differs between standard libraries.
void test_adhoc_ordering_seed_sweep() {
    int failures = 0;
    for (uint64_t seed = 1; seed <= 150; ++seed) {
        SimLinkParams link;
        link.loss = 0.15;
        link.duplicate = 0.05;
        link.reorder = 0.10;
        link.latency_us = 20'000;
        link.jitter_us = 8'000;
        link.seed = seed;
        Lan lan(2, link);
        lan.join(1);
        lan.join(2);
        if (!lan.run_until(60'000, [&] { return lan.all_connected(); })) {
            std::printf("    seed %llu: group never formed\n", static_cast<unsigned long long>(seed));
            ++failures;
            continue;
        }
        int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 1 << 20);
        int s2 = lan.n(2).pdp_create(lan.n(2).local_mac(), 5000, 1 << 20);
        const uint32_t kCount = 500;
        uint32_t sent = 0;
        std::vector<uint32_t> got;
        for (int ms = 0; ms < 120'000 && got.size() < kCount; ++ms) {
            if (sent < kCount) {
                auto p = u32_payload(sent);
                if (lan.n(1).pdp_send(s1, lan.n(2).local_mac(), 5000, p.data(), p.size()) == 0) ++sent;
            }
            lan.step();
            AdhocNode::Datagram d;
            while (lan.n(2).pdp_recv(s2, d) == 0) got.push_back(read_u32(d.data));
        }
        if (got.size() != kCount) {
            ConnStats a;
            lan.c[1]->ep->stats(lan.c[1]->conn, a);
            std::printf("    seed %llu: STALL got=%zu sent=%u | joiner1: %s\n", static_cast<unsigned long long>(seed),
                        got.size(), sent, format_stats(a).c_str());
            ++failures;
        }
    }
    std::printf("    sweep: %d failing seeds of 150\n", failures);
    REQUIRE(failures == 0);
}

void test_adhoc_backpressure_reports_no_space_and_recovers() {
    Lan lan(1);
    lan.join(1);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 5000, 1 << 20);
    int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 1 << 20);
    auto chunk = pat(60000, 7, 3);
    // No time passes while we queue, so nothing can drain: the backlog must fill and
    // PdpSend must say so instead of silently dropping or growing without bound.
    int accepted = 0;
    uint32_t r = 0;
    for (int i = 0; i < 400 && (r = lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, chunk.data(), chunk.size())) == 0; ++i)
        ++accepted;
    REQUIRE(r == adhoc_err::kNoSpace);
    REQUIRE(accepted >= 100 && accepted < 400);       // ~8 MiB backlog / 60 KB
    REQUIRE(lan.n(1).stats().dropped_send_backlog >= 1);
    // Everything that was accepted is delivered, in order and intact; then sending works again.
    int received = 0;
    for (int ms = 0; ms < 600'000 && received < accepted; ++ms) {
        lan.step();
        AdhocNode::Datagram d;
        while (lan.n(0).pdp_recv(sh, d) == 0) {
            REQUIRE(d.data == chunk);
            ++received;
        }
    }
    REQUIRE(received == accepted);
    REQUIRE(lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, chunk.data(), chunk.size()) == 0);
}
