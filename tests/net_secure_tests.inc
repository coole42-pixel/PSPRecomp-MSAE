// Security + fragmentation tests for the thin UDP layer.  Included inside the anonymous
// namespace of net_tests.cpp (uses Pair, pat, u32_payload, read_u32 from there).

Config secure_config(const crypto::Invite &inv) {
    Config c;
    c.set_invite(inv);
    return c;
}

bool contains_bytes(const std::vector<uint8_t> &hay, const std::vector<uint8_t> &needle) {
    return std::search(hay.begin(), hay.end(), needle.begin(), needle.end()) != hay.end();
}

void test_encrypted_session_end_to_end() {
    crypto::Invite inv;
    REQUIRE(crypto::generate_invite(inv));
    SimLinkParams link;
    link.latency_us = 15'000;
    link.loss = 0.05;
    link.seed = 77;
    Pair p(link, secure_config(inv), secure_config(inv));

    // Sniff everything on the wire.
    const std::vector<uint8_t> secret_msg = {'T', 'O', 'P', 'S', 'E', 'C', 'R', 'E', 'T', '-',
                                             'L', 'A', 'P', '-', 'T', 'I', 'M', 'E'};
    bool leaked = false;
    std::map<std::pair<uint32_t, uint64_t>, int> counters; // (sender ip, counter) uniqueness
    bool counter_reused = false;
    p.net.set_mutator([&](const NetAddr &from, const NetAddr &, std::vector<uint8_t> &d) {
        if (contains_bytes(d, secret_msg)) leaked = true;
        if (d.size() > 23 && d[1] == 7) { // Data: counter lives at offset 15..22
            uint64_t ctr = 0;
            for (int i = 0; i < 8; ++i) ctr |= static_cast<uint64_t>(d[15 + static_cast<size_t>(i)]) << (8 * i);
            if (++counters[{from.v4(), ctr}] > 1) counter_reused = true;
        }
        return true;
    });
    REQUIRE(p.connect());
    ConnStats s;
    REQUIRE(p.a->stats(p.conn_a, s) && s.encrypted);
    REQUIRE(p.b->stats(p.conn_b, s) && s.encrypted);

    for (int i = 0; i < 50; ++i) {
        REQUIRE(p.a->send(p.conn_a, 1, secret_msg, true) == SendResult::Ok);
        REQUIRE(p.b->send(p.conn_b, 1, secret_msg, false) == SendResult::Ok);
        p.run_ms(20);
    }
    p.run_ms(1500);
    size_t got_b = 0, got_a = 0;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) {
            REQUIRE(e.data == secret_msg);
            ++got_b;
        }
    for (auto &e : p.ev_a.events)
        if (e.type == Event::Type::Message) {
            REQUIRE(e.data == secret_msg);
            ++got_a;
        }
    REQUIRE(got_b == 50);
    REQUIRE(got_a > 30);
    REQUIRE(!leaked);         // plaintext never appears on the wire
    REQUIRE(!counter_reused); // AEAD nonce never repeats under one key
    REQUIRE(!counters.empty());
}

void test_wrong_invite_cannot_connect() {
    crypto::Invite good, bad;
    REQUIRE(crypto::generate_invite(good) && crypto::generate_invite(bad));
    Config ca = secure_config(bad);
    ca.connect_timeout_us = 3'000'000;
    std::vector<std::string> host_log;
    Config cb = secure_config(good);
    cb.log_level = LogLevel::Warn;
    cb.log = [&](LogLevel, const std::string &m) { host_log.push_back(m); };
    Pair p({}, ca, cb);
    p.conn_a = p.a->connect(p.addr_b, p.now);
    REQUIRE(p.run_until(8000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
    REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reason == DisconnectReason::ConnectTimeout);
    REQUIRE(p.b->connection_count() == 0); // host kept no state for the failed attempt
    REQUIRE(p.ev_b.count(Event::Type::Connected) == 0);
    bool saw = false;
    for (auto &l : host_log)
        if (l.find("failed PSK authentication") != std::string::npos) saw = true;
    REQUIRE(saw);
}

void test_security_mode_mismatch_is_rejected() {
    crypto::Invite inv;
    REQUIRE(crypto::generate_invite(inv));
    { // plaintext client -> secure host
        Pair p({}, Config{}, secure_config(inv));
        p.conn_a = p.a->connect(p.addr_b, p.now);
        REQUIRE(p.run_until(3000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
        REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reject == RejectReason::BadAuth);
    }
    { // secure client -> plaintext host
        Pair p({}, secure_config(inv), Config{});
        p.conn_a = p.a->connect(p.addr_b, p.now);
        REQUIRE(p.run_until(3000, [&] { return p.ev_a.count(Event::Type::Disconnected) > 0; }));
        REQUIRE(p.ev_a.find(Event::Type::Disconnected)->reject == RejectReason::BadAuth);
    }
}

void test_tampering_is_detected_and_repaired() {
    crypto::Invite inv;
    REQUIRE(crypto::generate_invite(inv));
    SimLinkParams link;
    link.latency_us = 10'000;
    Pair p(link, secure_config(inv), secure_config(inv));
    REQUIRE(p.connect());
    // From now on, flip a ciphertext bit in every 3rd data packet A->B.
    int n = 0;
    p.net.set_mutator([&](const NetAddr &from, const NetAddr &, std::vector<uint8_t> &d) {
        if (from == p.addr_a && d.size() > 30 && d[1] == 7 && (++n % 3) == 0) d[25] ^= 0x40;
        return true;
    });
    const uint32_t kCount = 200;
    for (uint32_t i = 0; i < kCount; ++i) {
        while (p.a->send(p.conn_a, 1, u32_payload(i), true) != SendResult::Ok) p.step();
        p.step();
    }
    p.run_ms(20'000);
    std::vector<uint32_t> got;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) got.push_back(read_u32(e.data));
    REQUIRE(got.size() == kCount); // corrupted packets rejected, reliable layer retransmitted
    for (uint32_t i = 0; i < kCount; ++i) REQUIRE(got[i] == i);
    ConnStats sb;
    REQUIRE(p.b->stats(p.conn_b, sb));
    REQUIRE(sb.auth_failures > 5);
}

void test_replay_is_rejected() {
    crypto::Invite inv;
    REQUIRE(crypto::generate_invite(inv));
    Pair p({}, secure_config(inv), secure_config(inv));
    REQUIRE(p.connect());
    std::vector<std::vector<uint8_t>> captured;
    p.net.set_mutator([&](const NetAddr &from, const NetAddr &, std::vector<uint8_t> &d) {
        if (from == p.addr_a && d.size() > 40 && d[1] == 7 && captured.size() < 5) captured.push_back(d);
        return true;
    });
    for (uint32_t i = 0; i < 5; ++i) {
        p.a->send(p.conn_a, 1, u32_payload(i), true);
        p.run_ms(60);
    }
    p.run_ms(200);
    REQUIRE(!captured.empty());
    // Replay each captured datagram verbatim, immediately and much later.
    for (auto &d : captured) p.net.inject(p.addr_a, p.addr_b, d);
    p.run_ms(50);
    // push the 64-wide replay window far past the captured packets
    for (int i = 0; i < 3000; ++i) {
        p.a->send(p.conn_a, 2, u32_payload(static_cast<uint32_t>(i)), false);
        p.step();
    }
    for (auto &d : captured) p.net.inject(p.addr_a, p.addr_b, d);
    p.run_ms(50);
    ConnStats after;
    REQUIRE(p.b->stats(p.conn_b, after));
    REQUIRE(after.replay_dropped >= captured.size() * 2);
    size_t reliable_after = 0;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message && e.reliable) ++reliable_after;
    REQUIRE(reliable_after == 5); // the 5 originals exactly once
}

void test_forged_close_and_impostor_host() {
    crypto::Invite inv;
    REQUIRE(crypto::generate_invite(inv));
    { // forged Close (right connection id and source address, no key) does not end the session
        Pair p({}, secure_config(inv), secure_config(inv));
        REQUIRE(p.connect());
        std::vector<uint8_t> close = {0xA7, 6, 0, 0, 0, 0, 1};
        for (int i = 0; i < 4; ++i) close[2 + static_cast<size_t>(i)] = static_cast<uint8_t>(p.conn_b >> (8 * i));
        p.net.inject(p.addr_a, p.addr_b, close); // spoofed from the real peer address
        std::vector<uint8_t> long_close = close;
        long_close.resize(7 + 8 + 16, 0x11);
        p.net.inject(p.addr_a, p.addr_b, long_close);
        p.run_ms(100);
        REQUIRE(p.b->state(p.conn_b) == ConnState::Connected);
        // a genuine close still works
        p.a->close(p.conn_a, p.now);
        REQUIRE(p.run_until(500, [&] { return p.ev_b.count(Event::Type::Disconnected) > 0; }));
        REQUIRE(p.ev_b.find(Event::Type::Disconnected)->reason == DisconnectReason::RemoteClose);
    }
    { // an impostor answering the ConnectRequest (no invite) is not accepted
        Pair p({}, secure_config(inv), Config{});
        p.b->set_accepting(false); // the real host stays silent; only the impostor answers
        p.conn_a = p.a->connect(p.addr_b, p.now);
        uint32_t cid = p.conn_a;
        std::vector<uint8_t> fake_ok = {0xA7, 4, 0, 0, 0, 0, 0x99, 0x99, 0x99, 0x99, 1};
        for (int i = 0; i < 4; ++i) fake_ok[2 + static_cast<size_t>(i)] = static_cast<uint8_t>(cid >> (8 * i));
        for (int i = 0; i < 48; ++i) fake_ok.push_back(static_cast<uint8_t>(i * 5)); // pub + bogus mac
        p.net.inject(p.addr_b, p.addr_a, fake_ok); // even spoofed from the host's address
        p.run_ms(100);
        REQUIRE(p.ev_a.count(Event::Type::Connected) == 0);
    }
}

void test_fragmentation() {
    for (int encrypted = 0; encrypted < 2; ++encrypted) {
        crypto::Invite inv;
        REQUIRE(crypto::generate_invite(inv));
        SimLinkParams link;
        link.loss = 0.15;
        link.duplicate = 0.03;
        link.reorder = 0.05;
        link.latency_us = 20'000;
        link.jitter_us = 5'000;
        link.seed = 4242 + static_cast<uint64_t>(encrypted);
        Config ca = encrypted ? secure_config(inv) : Config{};
        Config cb = ca;
        Pair p(link, ca, cb);
        REQUIRE(p.connect());
        const size_t single = p.a->max_packet_payload(true);
        REQUIRE(p.a->max_message_size(true) == 65536);
        REQUIRE(p.a->max_message_size(false) == p.a->max_packet_payload(false));

        std::vector<size_t> sizes = {single, single + 1, 2 * single, 2 * single + 1, 5000, 30000, 65536, 1, 0};
        std::vector<std::vector<uint8_t>> sent;
        for (size_t i = 0; i < sizes.size(); ++i)
            sent.push_back(pat(sizes[i], static_cast<unsigned>(3 + i), static_cast<unsigned>(i)));
        size_t next = 0;
        std::vector<std::vector<uint8_t>> got;
        for (int ms = 0; ms < 120'000 && got.size() < sent.size(); ++ms) {
            while (next < sent.size() && p.a->send(p.conn_a, 8, sent[next], true) == SendResult::Ok) ++next;
            p.step();
            for (auto &e : p.ev_b.events)
                if (e.type == Event::Type::Message) got.push_back(e.data);
            p.ev_b.events.clear();
        }
        REQUIRE(got.size() == sent.size());
        for (size_t i = 0; i < sent.size(); ++i) REQUIRE(got[i] == sent[i]); // exact bytes, original order
        ConnStats sa, sb;
        REQUIRE(p.a->stats(p.conn_a, sa) && p.b->stats(p.conn_b, sb));
        REQUIRE(sa.fragments_sent >= 90);
        REQUIRE(sb.messages_reassembled == 6);
        // limits
        std::vector<uint8_t> too_big(65537, 1);
        REQUIRE(p.a->send(p.conn_a, 8, too_big, true) == SendResult::TooLarge);
        std::vector<uint8_t> big_unrel(p.a->max_packet_payload(false) + 1, 1);
        REQUIRE(p.a->send(p.conn_a, 8, big_unrel, false) == SendResult::TooLarge);
        std::vector<uint8_t> ok_unrel(p.a->max_packet_payload(false), 1);
        REQUIRE(p.a->send(p.conn_a, 8, ok_unrel, false) == SendResult::Ok);
        std::printf("    fragmentation (%s): %s\n", encrypted ? "encrypted" : "plain", format_stats(sa).c_str());
    }
}

void test_fragments_respect_window() {
    Config cfg;
    cfg.max_reliable_in_flight = 16; // at most 16 fragments in flight
    Pair p({}, cfg, cfg);
    REQUIRE(p.connect());
    std::vector<uint8_t> a(10 * p.a->max_packet_payload(true), 1);
    std::vector<uint8_t> b(10 * p.a->max_packet_payload(true), 2);
    REQUIRE(p.a->send(p.conn_a, 0, a, true) == SendResult::Ok);
    REQUIRE(p.a->send(p.conn_a, 0, b, true) == SendResult::QueueFull); // would need 20 slots
    p.run_ms(500);
    REQUIRE(p.a->send(p.conn_a, 0, b, true) == SendResult::Ok); // window drained
    p.run_ms(500);
    std::vector<std::vector<uint8_t>> got;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) got.push_back(e.data);
    REQUIRE(got.size() == 2 && got[0] == a && got[1] == b);
}

void test_oversized_reassembly_is_dropped() {
    // Receiver configured with a smaller limit than the sender: the oversized message is
    // discarded (never delivered truncated) and the stream keeps working.
    Config sender, receiver;
    receiver.max_reliable_message = 4000;
    Pair p({}, sender, receiver);
    REQUIRE(p.connect());
    std::vector<uint8_t> big(20000, 7), small = {1, 2, 3};
    REQUIRE(p.a->send(p.conn_a, 0, big, true) == SendResult::Ok);
    REQUIRE(p.a->send(p.conn_a, 0, small, true) == SendResult::Ok);
    p.run_ms(2000);
    std::vector<std::vector<uint8_t>> got;
    for (auto &e : p.ev_b.events)
        if (e.type == Event::Type::Message) got.push_back(e.data);
    REQUIRE(got.size() == 1 && got[0] == small);
    ConnStats sb;
    REQUIRE(p.b->stats(p.conn_b, sb));
    REQUIRE(sb.bad_packets >= 1);
}
