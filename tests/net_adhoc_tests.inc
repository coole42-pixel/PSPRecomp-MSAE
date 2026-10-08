// PSP ad-hoc (PDP + Adhocctl) engine tests.  Included inside the anonymous namespace of
// net_tests.cpp.  Three consoles (one host, two joiners) over the simulator.

struct Console {
    NetAddr addr;
    std::unique_ptr<IDatagramTransport> transport;
    std::unique_ptr<Endpoint> ep;
    std::unique_ptr<AdhocNode> node;
    ConnId conn = 0; // client: connection to host
    std::vector<AdhocNode::CtlEvent> ctl;
    std::vector<std::string> log;
};

struct Lan {
    SimNetwork net;
    std::vector<std::unique_ptr<Console>> c; // c[0] = host
    uint64_t now = 1'000'000;
    NetAddr host_addr;

    explicit Lan(size_t n_clients, SimLinkParams link = {}, bool encrypted = false, bool pdp_reliable = true,
                 uint32_t host_max_peers = 7, bool last_reuses_first_clients_mac = false)
        : net(link) {
        crypto::Invite inv;
        crypto::generate_invite(inv);
        for (size_t i = 0; i <= n_clients; ++i) {
            auto con = std::make_unique<Console>();
            con->addr = NetAddr(0x0A000100u + static_cast<uint32_t>(i), static_cast<uint16_t>(6000 + i));
            con->transport = net.create_endpoint(con->addr);
            Config cfg;
            cfg.rng_seed = 100 + i;
            cfg.max_reliable_message = 70000; // PDP header + 65519 payload
            if (encrypted) cfg.set_invite(inv);
            con->ep = std::make_unique<Endpoint>(*con->transport, cfg);
            AdhocOptions o;
            o.host = i == 0;
            o.nickname = i == 0 ? "Host" : "Joiner" + std::to_string(i);
            o.product = "ULTEST00";
            o.pdp_reliable = pdp_reliable;
            o.max_peers = host_max_peers;
            if (last_reuses_first_clients_mac && i == n_clients && i >= 2) o.mac = c[1]->node->local_mac();
            Console *raw = con.get();
            o.log = [raw](LogLevel, const std::string &m) { raw->log.push_back(m); };
            o.log_level = LogLevel::Debug;
            con->node = std::make_unique<AdhocNode>(*con->ep, o);
            c.push_back(std::move(con));
        }
        host_addr = c[0]->addr;
        c[0]->ep->set_accepting(true);
        c[0]->node->start_host();
        net.set_time(now);
    }

    void join(size_t i) {
        c[i]->conn = c[i]->ep->connect(host_addr, now);
    }

    void step(uint64_t dt = 1000) {
        now += dt;
        net.set_time(now);
        for (auto &con : c) {
            con->ep->update(now);
            Event e;
            while (con->ep->poll(e)) {
                if (e.type == Event::Type::Connected && e.outbound) con->node->attach_client(e.conn);
                else con->node->handle_event(e);
            }
            con->node->update(now);
            AdhocNode::CtlEvent ce;
            while (con->node->poll_ctl_event(ce)) con->ctl.push_back(ce);
        }
    }
    void run_ms(uint64_t ms) {
        for (uint64_t i = 0; i < ms; ++i) step();
    }
    bool run_until(uint64_t max_ms, const std::function<bool()> &pred) {
        for (uint64_t i = 0; i < max_ms; ++i) {
            if (pred()) return true;
            step();
        }
        return pred();
    }
    AdhocNode &n(size_t i) { return *c[i]->node; }
    bool all_connected() {
        for (auto &con : c)
            if (con->node->state() != AdhocNode::State::Connected) return false;
        return true;
    }
};

static std::vector<uint8_t> bytes_of(const char *s) { return std::vector<uint8_t>(s, s + std::strlen(s)); }

void test_adhoc_group_formation() {
    Lan lan(2);
    lan.join(1);
    lan.join(2);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    lan.run_ms(200);
    // each node got exactly one CONNECT control event
    for (auto &con : lan.c) {
        size_t connects = 0;
        for (auto &e : con->ctl) connects += e.flag == adhocctl_event::kConnect;
        REQUIRE(connects == 1);
    }
    // unique MACs, locally administered unicast
    std::set<AdhocMac> macs;
    for (size_t i = 0; i < 3; ++i) {
        AdhocMac m = lan.n(i).local_mac();
        REQUIRE((m[0] & 0x03) == 0x02);
        macs.insert(m);
    }
    REQUIRE(macs.size() == 3);
    // every node knows the other two
    REQUIRE(lan.n(0).peers().size() == 2);
    REQUIRE(lan.n(1).peers().size() == 2);
    REQUIRE(lan.n(2).peers().size() == 2);
    // the first joiner learned about the second one through PeerJoin
    bool saw = false;
    for (auto &p : lan.n(1).peers()) saw |= p.mac == lan.n(2).local_mac() && p.nickname == "Joiner2";
    REQUIRE(saw);
}

void test_adhoc_pdp_routing() {
    Lan lan(2);
    lan.join(1);
    lan.join(2);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 5000, 65523);
    int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 65523);
    int s2 = lan.n(2).pdp_create(lan.n(2).local_mac(), 5000, 65523);
    REQUIRE(sh > 0 && s1 > 0 && s2 > 0);

    // joiner1 -> host, host -> joiner2, joiner1 -> joiner2 (routed by host), to self
    auto m1 = bytes_of("one-to-host"), m2 = bytes_of("host-to-two"), m3 = bytes_of("one-to-two");
    REQUIRE(lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, m1.data(), m1.size()) == 0);
    REQUIRE(lan.n(0).pdp_send(sh, lan.n(2).local_mac(), 5000, m2.data(), m2.size()) == 0);
    REQUIRE(lan.n(1).pdp_send(s1, lan.n(2).local_mac(), 5000, m3.data(), m3.size()) == 0);
    lan.run_ms(300);
    AdhocNode::Datagram d;
    REQUIRE(lan.n(0).pdp_recv(sh, d) == 0 && d.data == m1 && d.src == lan.n(1).local_mac() && d.src_port == 5000);
    REQUIRE(lan.n(0).pdp_recv(sh, d) == adhoc_err::kWouldBlock);
    REQUIRE(lan.n(2).pdp_recv(s2, d) == 0 && d.data == m2 && d.src == lan.n(0).local_mac());
    REQUIRE(lan.n(2).pdp_recv(s2, d) == 0 && d.data == m3 && d.src == lan.n(1).local_mac());
    REQUIRE(lan.n(2).pdp_recv(s2, d) == adhoc_err::kWouldBlock);
    REQUIRE(lan.n(0).stats().pdp_forwarded >= 1); // host really relayed joiner1 -> joiner2

    // broadcast from a joiner: reaches host and the other joiner, not the sender
    auto bc = bytes_of("hello-everyone");
    REQUIRE(lan.n(1).pdp_send(s1, kAdhocBroadcastMac, 5000, bc.data(), bc.size()) == 0);
    lan.run_ms(300);
    REQUIRE(lan.n(0).pdp_recv(sh, d) == 0 && d.data == bc);
    REQUIRE(lan.n(2).pdp_recv(s2, d) == 0 && d.data == bc);
    REQUIRE(lan.n(1).pdp_recv(s1, d) == adhoc_err::kWouldBlock);
    // broadcast from the host
    REQUIRE(lan.n(0).pdp_send(sh, kAdhocBroadcastMac, 5000, bc.data(), bc.size()) == 0);
    lan.run_ms(300);
    REQUIRE(lan.n(1).pdp_recv(s1, d) == 0 && d.data == bc);
    REQUIRE(lan.n(2).pdp_recv(s2, d) == 0 && d.data == bc);
    REQUIRE(lan.n(0).pdp_recv(sh, d) == adhoc_err::kWouldBlock);
}

void test_adhoc_port_semantics_and_errors() {
    Lan lan(1);
    // before the group exists on the client side
    REQUIRE(static_cast<uint32_t>(lan.n(1).pdp_create(lan.n(1).local_mac(), 1, 100)) == adhoc_err::kNotConnected);
    lan.join(1);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    AdhocMac self = lan.n(1).local_mac();
    int a = lan.n(1).pdp_create(self, 7000, 4096);
    REQUIRE(a > 0);
    REQUIRE(static_cast<uint32_t>(lan.n(1).pdp_create(self, 7000, 4096)) == adhoc_err::kPortInUse);
    AdhocMac wrong{2, 2, 2, 2, 2, 2};
    REQUIRE(static_cast<uint32_t>(lan.n(1).pdp_create(wrong, 7001, 4096)) == adhoc_err::kInvalidAddr);
    int eph = lan.n(1).pdp_create(self, 0, 4096);
    REQUIRE(eph > 0 && eph != a);
    bool found_ephemeral = false;
    for (auto &s : lan.n(1).sockets()) found_ephemeral |= s.id == eph && s.port >= 0xC000;
    REQUIRE(found_ephemeral);
    // data for an unbound port is dropped and counted, never queued
    int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 7000, 4096);
    auto m = bytes_of("x");
    REQUIRE(lan.n(0).pdp_send(sh, self, 9999, m.data(), 1) == 0);
    lan.run_ms(200);
    REQUIRE(lan.n(1).stats().dropped_no_socket == 1);
    // bad ids / sizes / ports
    REQUIRE(lan.n(1).pdp_send(12345, self, 7000, m.data(), 1) == adhoc_err::kInvalidSocketId);
    std::vector<uint8_t> big(65520, 1);
    REQUIRE(lan.n(1).pdp_send(a, lan.n(0).local_mac(), 7000, big.data(), big.size()) == adhoc_err::kInvalidDataLen);
    REQUIRE(lan.n(1).pdp_send(a, lan.n(0).local_mac(), 0, m.data(), 1) == adhoc_err::kInvalidPort);
    AdhocNode::Datagram d;
    REQUIRE(lan.n(1).pdp_recv(777, d) == adhoc_err::kInvalidSocketId);
    REQUIRE(lan.n(1).pdp_delete(a) == 0);
    REQUIRE(static_cast<uint32_t>(lan.n(1).pdp_delete(a)) == adhoc_err::kInvalidSocketId);
}

void test_adhoc_ordering_under_loss() {
    SimLinkParams link;
    link.loss = 0.15;
    link.duplicate = 0.05;
    link.reorder = 0.10;
    link.latency_us = 20'000;
    link.jitter_us = 8'000;
    link.seed = 31;
    Lan lan(2, link);
    lan.join(1);
    lan.join(2);
    REQUIRE(lan.run_until(60'000, [&] { return lan.all_connected(); }));
    int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 1 << 20);
    int s2 = lan.n(2).pdp_create(lan.n(2).local_mac(), 5000, 1 << 20);
    REQUIRE(s1 > 0 && s2 > 0);
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
    REQUIRE(got.size() == kCount);
    for (uint32_t i = 0; i < kCount; ++i) REQUIRE(got[i] == i); // joiner -> host -> joiner, in order, exactly once
}

void test_adhoc_large_datagram_and_rcvbuf() {
    Lan lan(1);
    lan.join(1);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 5000, 65523); // the exact size the game passes
    int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 65523);
    auto big = pat(65519, 5, 7);
    REQUIRE(lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, big.data(), big.size()) == 0);
    lan.run_ms(3000);
    AdhocNode::Datagram d;
    REQUIRE(lan.n(0).pdp_recv(sh, d) == 0 && d.data == big);
    // receive-buffer overflow drops the excess, keeps what fits, and counts it
    auto chunk = pat(30000, 3, 1);
    for (int i = 0; i < 4; ++i) REQUIRE(lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, chunk.data(), chunk.size()) == 0);
    lan.run_ms(5000);
    int received = 0;
    while (lan.n(0).pdp_recv(sh, d) == 0) {
        REQUIRE(d.data == chunk);
        ++received;
    }
    REQUIRE(received == 2); // 2 * 30000 <= 65523 < 3 * 30000
    REQUIRE(lan.n(0).stats().dropped_queue_full == 2);
    REQUIRE(lan.n(0).pdp_peek_size(sh) == 0);
}

void test_adhoc_spoofed_source_mac_is_dropped() {
    Lan lan(2);
    lan.join(1);
    lan.join(2);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 5000, 4096);
    // Joiner1 hand-crafts a data frame claiming to be joiner2.
    std::vector<uint8_t> msg;
    AdhocMac liar = lan.n(2).local_mac(), dst = lan.n(0).local_mac();
    msg.insert(msg.end(), liar.begin(), liar.end());
    msg.insert(msg.end(), dst.begin(), dst.end());
    msg.insert(msg.end(), {0x88, 0x13, 0x88, 0x13}); // ports 5000/5000
    msg.push_back('!');
    REQUIRE(lan.c[1]->ep->send(lan.c[1]->conn, 2, msg, true) == SendResult::Ok);
    lan.run_ms(300);
    AdhocNode::Datagram d;
    REQUIRE(lan.n(0).pdp_recv(sh, d) == adhoc_err::kWouldBlock);
    REQUIRE(lan.n(0).stats().dropped_malformed >= 1);
}

void test_adhoc_leave_and_host_loss() {
    Lan lan(2);
    lan.join(1);
    lan.join(2);
    REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
    lan.run_ms(100);
    // joiner2 leaves: host and joiner1 forget it
    lan.n(2).leave(lan.now);
    lan.run_ms(500);
    REQUIRE(lan.n(0).peers().size() == 1);
    REQUIRE(lan.n(1).peers().size() == 1); // only the host remains
    size_t disc2 = 0;
    for (auto &e : lan.c[2]->ctl) disc2 += e.flag == adhocctl_event::kDisconnect;
    REQUIRE(disc2 == 1);
    // host vanishes: joiner1 gets a DISCONNECT event and sends start failing
    int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 4096);
    REQUIRE(s1 > 0);
    lan.n(0).leave(lan.now);
    REQUIRE(lan.run_until(5000, [&] { return lan.n(1).state() == AdhocNode::State::Disconnected; }));
    size_t disc1 = 0;
    for (auto &e : lan.c[1]->ctl) disc1 += e.flag == adhocctl_event::kDisconnect;
    REQUIRE(disc1 == 1);
    auto m = bytes_of("x");
    REQUIRE(lan.n(1).pdp_send(s1, kAdhocBroadcastMac, 5000, m.data(), 1) == adhoc_err::kNotConnected);
}

void test_adhoc_group_full_and_mac_collision() {
    { // max_peers = 1: second joiner is turned away
        Lan lan(2, {}, false, true, 1);
        lan.join(1);
        REQUIRE(lan.run_until(20'000, [&] { return lan.n(1).state() == AdhocNode::State::Connected; }));
        lan.join(2);
        lan.run_ms(2000);
        REQUIRE(lan.n(2).state() != AdhocNode::State::Connected);
        REQUIRE(lan.n(0).peers().size() == 1);
    }
    { // two joiners with identical virtual MACs: the second is refused, the first keeps working
        Lan lan(2, {}, false, true, 7, true);
        REQUIRE(lan.n(1).local_mac() == lan.n(2).local_mac());
        lan.join(1);
        REQUIRE(lan.run_until(20'000, [&] { return lan.n(1).state() == AdhocNode::State::Connected; }));
        lan.join(2);
        lan.run_ms(2000);
        REQUIRE(lan.n(2).state() != AdhocNode::State::Connected);
        REQUIRE(lan.n(0).peers().size() == 1); // joiner1 only
        REQUIRE(lan.n(1).state() == AdhocNode::State::Connected);
        bool refused = false;
        for (auto &l : lan.c[0]->log) refused |= l.find("MAC collision") != std::string::npos;
        REQUIRE(refused);
    }
}

void test_adhoc_encrypted_and_unreliable_modes() {
    { // encrypted group works end to end
        Lan lan(1, {}, true);
        lan.join(1);
        REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
        int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 5000, 4096);
        int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 4096);
        auto m = bytes_of("encrypted-pdp");
        REQUIRE(lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, m.data(), m.size()) == 0);
        lan.run_ms(300);
        AdhocNode::Datagram d;
        REQUIRE(lan.n(0).pdp_recv(sh, d) == 0 && d.data == m);
        ConnStats st;
        REQUIRE(lan.c[1]->ep->stats(lan.c[1]->conn, st) && st.encrypted);
    }
    { // unreliable PDP: lossless link delivers everything, small datagrams only
        Lan lan(1, {}, false, false);
        lan.join(1);
        REQUIRE(lan.run_until(20'000, [&] { return lan.all_connected(); }));
        int sh = lan.n(0).pdp_create(lan.n(0).local_mac(), 5000, 65523);
        int s1 = lan.n(1).pdp_create(lan.n(1).local_mac(), 5000, 65523);
        for (uint32_t i = 0; i < 50; ++i) {
            auto p = u32_payload(i);
            REQUIRE(lan.n(1).pdp_send(s1, lan.n(0).local_mac(), 5000, p.data(), p.size()) == 0);
            lan.step();
        }
        lan.run_ms(300);
        AdhocNode::Datagram d;
        uint32_t n = 0;
        while (lan.n(0).pdp_recv(sh, d) == 0) {
            REQUIRE(read_u32(d.data) == n);
            ++n;
        }
        REQUIRE(n == 50);
    }
}
