#include "psprecomp/net/adhoc.hpp"

#include <algorithm>
#include <cstdio>
#include <cstring>

namespace psprecomp::net {

namespace {

constexpr uint16_t kChanControl = 1;
constexpr uint16_t kChanData = 2;
constexpr uint8_t kCtlHello = 1;
constexpr uint8_t kCtlWelcome = 2;
constexpr uint8_t kCtlPeerJoin = 3;
constexpr uint8_t kCtlPeerLeave = 4;
constexpr uint8_t kWireVersion = 1;
constexpr size_t kDataHeader = 6 + 6 + 2 + 2;
constexpr size_t kMaxPdpPayload = 65519;

void put_mac(std::vector<uint8_t> &v, const AdhocMac &m) { v.insert(v.end(), m.begin(), m.end()); }
void put_str(std::vector<uint8_t> &v, const std::string &s) {
    const size_t n = std::min<size_t>(s.size(), 64);
    v.push_back(static_cast<uint8_t>(n));
    v.insert(v.end(), s.begin(), s.begin() + static_cast<std::ptrdiff_t>(n));
}

struct Cursor {
    const uint8_t *p;
    size_t n;
    size_t pos = 0;
    bool ok = true;
    uint8_t u8() {
        if (pos + 1 > n) { ok = false; return 0; }
        return p[pos++];
    }
    AdhocMac mac() {
        AdhocMac m{};
        if (pos + 6 > n) { ok = false; return m; }
        std::memcpy(m.data(), p + pos, 6);
        pos += 6;
        return m;
    }
    std::string str() {
        size_t len = u8();
        if (!ok || pos + len > n) { ok = false; return {}; }
        std::string s(reinterpret_cast<const char *>(p + pos), len);
        pos += len;
        return s;
    }
};

} // namespace

std::string mac_to_string(const AdhocMac &mac) {
    char buf[24];
    std::snprintf(buf, sizeof(buf), "%02x:%02x:%02x:%02x:%02x:%02x", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
    return buf;
}

AdhocNode::AdhocNode(Endpoint &ep, AdhocOptions opts) : ep_(ep), opt_(std::move(opts)) {
    // A stable, unique virtual MAC is picked up front: the guest reads its MAC
    // (sceNetGetLocalEtherAddr) possibly before the group exists and keeps using it.
    if (opt_.mac != AdhocMac{}) {
        local_mac_ = opt_.mac;
        return;
    }
    uint8_t r[4] = {1, 2, 3, 4};
    crypto::random_bytes(r, sizeof(r));
    local_mac_ = AdhocMac{0x02, 0x50, r[0], r[1], r[2], r[3]};
}

void AdhocNode::log(LogLevel lvl, const std::string &m) const {
    if (opt_.log && lvl <= opt_.log_level) opt_.log(lvl, "[adhoc " + mac_to_string(local_mac_) + "] " + m);
}

void AdhocNode::start_host() {
    state_ = State::Connected;
    log(LogLevel::Info, "group created (host)");
    ctl_events_.push_back({adhocctl_event::kConnect, 0});
}

void AdhocNode::attach_client(ConnId host_conn) {
    host_conn_ = host_conn;
    state_ = State::Joining;
    std::vector<uint8_t> hello{kCtlHello, kWireVersion};
    put_mac(hello, local_mac_);
    put_str(hello, opt_.nickname);
    put_str(hello, opt_.product);
    send_to_conn(host_conn_, kChanControl, hello, true);
    log(LogLevel::Info, "joining group, hello sent");
}

std::vector<AdhocPeer> AdhocNode::peers() const {
    std::vector<AdhocPeer> out;
    if (opt_.host) {
        for (const auto &kv : by_conn_)
            if (kv.second.mac != AdhocMac{}) out.push_back(kv.second);
    } else {
        out = known_;
    }
    return out;
}

bool AdhocNode::poll_ctl_event(CtlEvent &out) {
    if (ctl_events_.empty()) return false;
    out = ctl_events_.front();
    ctl_events_.pop_front();
    return true;
}

namespace {
constexpr size_t kMaxPendingBytes = 8u << 20; // per connection; beyond this PdpSend reports no space
}

bool AdhocNode::send_to_conn(ConnId c, uint16_t channel, const std::vector<uint8_t> &msg, bool reliable) {
    if (!reliable) {
        SendResult r = ep_.send(c, channel, msg, false);
        if (r != SendResult::Ok) log(LogLevel::Debug, std::string("unreliable send failed: ") + to_string(r));
        return r == SendResult::Ok;
    }
    PendingQueue &pq = pending_[c];
    if (pq.bytes + msg.size() > kMaxPendingBytes) {
        ++stats_.dropped_send_backlog;
        return false;
    }
    pq.bytes += msg.size();
    pq.q.push_back(PendingMsg{channel, msg});
    stats_.send_backlog_peak_bytes = std::max<uint64_t>(stats_.send_backlog_peak_bytes, pq.bytes);
    flush_pending(c);
    return true;
}

void AdhocNode::flush_pending(ConnId c) {
    auto it = pending_.find(c);
    if (it == pending_.end()) return;
    PendingQueue &pq = it->second;
    while (!pq.q.empty()) {
        const PendingMsg &m = pq.q.front();
        SendResult r = ep_.send(c, m.channel, m.data, true);
        if (r == SendResult::QueueFull) return; // wait for acks to open the window
        if (r != SendResult::Ok) { // connection gone / message impossible: discard
            log(LogLevel::Warn, std::string("dropping queued message: ") + to_string(r));
            ++stats_.dropped_send_backlog;
        }
        pq.bytes -= m.data.size();
        pq.q.pop_front();
    }
}

void AdhocNode::broadcast_control(const std::vector<uint8_t> &msg, ConnId except) {
    for (const auto &kv : by_conn_)
        if (kv.first != except && kv.second.mac != AdhocMac{}) send_to_conn(kv.first, kChanControl, msg, true);
}

void AdhocNode::update(uint64_t) {
    for (auto &kv : pending_)
        if (!kv.second.q.empty()) flush_pending(kv.first);
}

void AdhocNode::handle_event(const Event &ev) {
    if (ev.type == Event::Type::Connected) {
        if (opt_.host && !ev.outbound) {
            if (by_conn_.size() >= opt_.max_peers) {
                log(LogLevel::Warn, "group full, refusing connection");
                ep_.close(ev.conn, 0);
                return;
            }
            by_conn_[ev.conn] = AdhocPeer{AdhocMac{}, "", ev.conn}; // pending until Hello
        }
        return;
    }
    if (ev.type == Event::Type::Disconnected) {
        pending_.erase(ev.conn);
        if (opt_.host) {
            auto it = by_conn_.find(ev.conn);
            if (it == by_conn_.end()) return;
            const AdhocPeer gone = it->second;
            by_conn_.erase(it);
            if (gone.mac != AdhocMac{}) {
                by_mac_.erase(gone.mac);
                std::vector<uint8_t> leave{kCtlPeerLeave};
                put_mac(leave, gone.mac);
                broadcast_control(leave);
                log(LogLevel::Info, "peer left: " + mac_to_string(gone.mac) + " (" + gone.nickname + ")");
            }
        } else if (ev.conn == host_conn_) {
            host_conn_ = 0;
            state_ = State::Disconnected;
            known_.clear();
            log(LogLevel::Warn, std::string("lost connection to host: ") + to_string(ev.reason));
            ctl_events_.push_back({adhocctl_event::kDisconnect, 0});
        }
        return;
    }
    // Message
    if (ev.channel == kChanControl) on_control(ev.conn, ev.data.data(), ev.data.size());
    else if (ev.channel == kChanData) on_data(ev.conn, ev.data.data(), ev.data.size());
}

void AdhocNode::on_control(ConnId from, const uint8_t *p, size_t n) {
    Cursor c{p, n};
    uint8_t type = c.u8();
    if (!c.ok) return;
    if (opt_.host) {
        if (type != kCtlHello) return;
        auto it = by_conn_.find(from);
        if (it == by_conn_.end() || it->second.mac != AdhocMac{}) return; // unknown or duplicate hello
        uint8_t ver = c.u8();
        AdhocMac mac = c.mac();
        std::string nick = c.str();
        std::string product = c.str();
        if (!c.ok || ver != kWireVersion || mac == AdhocMac{} || mac == kAdhocBroadcastMac) {
            ++stats_.dropped_malformed;
            ep_.close(from, 0);
            return;
        }
        if (mac == local_mac_ || by_mac_.count(mac)) {
            log(LogLevel::Warn, "MAC collision from joiner " + mac_to_string(mac) + ", refusing");
            ep_.close(from, 0);
            return;
        }
        it->second.mac = mac;
        it->second.nickname = nick;
        by_mac_[mac] = from;
        std::vector<uint8_t> welcome{kCtlWelcome, kWireVersion};
        put_mac(welcome, local_mac_);
        put_str(welcome, opt_.nickname);
        std::vector<AdhocPeer> others;
        for (const auto &kv : by_conn_)
            if (kv.first != from && kv.second.mac != AdhocMac{}) others.push_back(kv.second);
        welcome.push_back(static_cast<uint8_t>(others.size()));
        for (const auto &o : others) {
            put_mac(welcome, o.mac);
            put_str(welcome, o.nickname);
        }
        send_to_conn(from, kChanControl, welcome, true);
        std::vector<uint8_t> join{kCtlPeerJoin};
        put_mac(join, mac);
        put_str(join, nick);
        broadcast_control(join, from);
        log(LogLevel::Info, "peer joined: " + mac_to_string(mac) + " nick=\"" + nick + "\" product=\"" + product + "\"");
        return;
    }
    // client
    if (from != host_conn_) return;
    if (type == kCtlWelcome) {
        uint8_t ver = c.u8();
        AdhocMac host_mac = c.mac();
        std::string host_nick = c.str();
        uint8_t count = c.u8();
        if (!c.ok || ver != kWireVersion) {
            ++stats_.dropped_malformed;
            return;
        }
        known_.clear();
        known_.push_back(AdhocPeer{host_mac, host_nick, from});
        for (uint8_t i = 0; i < count; ++i) {
            AdhocMac m = c.mac();
            std::string nick = c.str();
            if (!c.ok) {
                ++stats_.dropped_malformed;
                return;
            }
            known_.push_back(AdhocPeer{m, nick, 0});
        }
        by_mac_[host_mac] = from;
        state_ = State::Connected;
        log(LogLevel::Info, "joined group: host " + mac_to_string(host_mac) + " nick=\"" + host_nick + "\", " +
                                std::to_string(count) + " other peer(s)");
        ctl_events_.push_back({adhocctl_event::kConnect, 0});
    } else if (type == kCtlPeerJoin) {
        AdhocMac m = c.mac();
        std::string nick = c.str();
        if (c.ok) {
            known_.push_back(AdhocPeer{m, nick, 0});
            log(LogLevel::Info, "peer joined: " + mac_to_string(m) + " nick=\"" + nick + "\"");
        }
    } else if (type == kCtlPeerLeave) {
        AdhocMac m = c.mac();
        if (c.ok) {
            known_.erase(std::remove_if(known_.begin(), known_.end(), [&](const AdhocPeer &x) { return x.mac == m; }),
                         known_.end());
            log(LogLevel::Info, "peer left: " + mac_to_string(m));
        }
    }
}

void AdhocNode::on_data(ConnId from, const uint8_t *p, size_t n) {
    if (n < kDataHeader || n - kDataHeader > kMaxPdpPayload) {
        ++stats_.dropped_malformed;
        return;
    }
    AdhocMac src, dst;
    std::memcpy(src.data(), p, 6);
    std::memcpy(dst.data(), p + 6, 6);
    const uint16_t sport = static_cast<uint16_t>(p[12] | (p[13] << 8));
    const uint16_t dport = static_cast<uint16_t>(p[14] | (p[15] << 8));
    const uint8_t *payload = p + kDataHeader;
    const size_t plen = n - kDataHeader;

    if (!opt_.host) { // client: host already routed it to us
        if (from != host_conn_) return;
        if (dst == local_mac_ || dst == kAdhocBroadcastMac) deliver_local(src, sport, dst, dport, payload, plen);
        else ++stats_.dropped_unknown_dst;
        return;
    }
    // host: validate sender and route
    auto it = by_conn_.find(from);
    if (it == by_conn_.end() || it->second.mac == AdhocMac{} || it->second.mac != src) {
        ++stats_.dropped_malformed; // spoofed source MAC or pre-Hello traffic
        return;
    }
    std::vector<uint8_t> msg(p, p + n);
    if (dst == kAdhocBroadcastMac) {
        deliver_local(src, sport, dst, dport, payload, plen);
        for (const auto &kv : by_conn_)
            if (kv.first != from && kv.second.mac != AdhocMac{}) {
                send_to_conn(kv.first, kChanData, msg, opt_.pdp_reliable);
                ++stats_.pdp_forwarded;
            }
    } else if (dst == local_mac_) {
        deliver_local(src, sport, dst, dport, payload, plen);
    } else {
        auto route = by_mac_.find(dst);
        if (route == by_mac_.end()) {
            ++stats_.dropped_unknown_dst;
            return;
        }
        send_to_conn(route->second, kChanData, msg, opt_.pdp_reliable);
        ++stats_.pdp_forwarded;
    }
}

void AdhocNode::deliver_local(const AdhocMac &src, uint16_t sport, const AdhocMac &, uint16_t dport,
                              const uint8_t *data, size_t n) {
    Socket *s = find_socket_by_port(dport);
    if (!s) {
        ++stats_.dropped_no_socket;
        return;
    }
    if (s->queued_bytes + n > s->rcvbuf) {
        ++stats_.dropped_queue_full;
        return;
    }
    Datagram d;
    d.src = src;
    d.src_port = sport;
    d.data.assign(data, data + n);
    s->queued_bytes += static_cast<uint32_t>(n);
    s->queue.push_back(std::move(d));
    ++stats_.pdp_recv;
    stats_.bytes_recv += n;
}

void AdhocNode::leave(uint64_t now_us) {
    if (opt_.host) {
        for (auto &kv : by_conn_) ep_.close(kv.first, now_us);
        by_conn_.clear();
        by_mac_.clear();
    } else if (host_conn_) {
        ep_.close(host_conn_, now_us);
        host_conn_ = 0;
    }
    if (state_ != State::Disconnected) ctl_events_.push_back({adhocctl_event::kDisconnect, 0});
    state_ = State::Disconnected;
}

// ------------------------------------------------------------------------------ PDP
AdhocNode::Socket *AdhocNode::find_socket(int id) {
    auto it = sockets_.find(id);
    return it == sockets_.end() ? nullptr : &it->second;
}
const AdhocNode::Socket *AdhocNode::find_socket(int id) const {
    auto it = sockets_.find(id);
    return it == sockets_.end() ? nullptr : &it->second;
}
AdhocNode::Socket *AdhocNode::find_socket_by_port(uint16_t port) {
    for (auto &kv : sockets_)
        if (kv.second.port == port) return &kv.second;
    return nullptr;
}

int32_t AdhocNode::pdp_create(const AdhocMac &mac, uint16_t port, uint32_t rcvbuf) {
    if (state_ != State::Connected) return static_cast<int32_t>(adhoc_err::kNotConnected);
    if (mac != local_mac_ && mac != AdhocMac{}) return static_cast<int32_t>(adhoc_err::kInvalidAddr);
    if (rcvbuf == 0 || rcvbuf > (1u << 20)) return static_cast<int32_t>(adhoc_err::kInvalidArg);
    if (port == 0) { // ephemeral
        for (uint32_t p = 0xC000; p <= 0xFFFF; ++p)
            if (!find_socket_by_port(static_cast<uint16_t>(p))) {
                port = static_cast<uint16_t>(p);
                break;
            }
        if (port == 0) return static_cast<int32_t>(adhoc_err::kPortInUse);
    } else if (find_socket_by_port(port)) {
        return static_cast<int32_t>(adhoc_err::kPortInUse);
    }
    Socket s;
    s.id = next_socket_id_++;
    s.mac = local_mac_;
    s.port = port;
    s.rcvbuf = rcvbuf;
    const int id = s.id;
    sockets_[id] = std::move(s);
    log(LogLevel::Info, "PDP socket " + std::to_string(id) + " bound to port " + std::to_string(port) +
                            " rcvbuf=" + std::to_string(rcvbuf));
    return id;
}

int32_t AdhocNode::pdp_delete(int id) {
    if (!sockets_.erase(id)) return static_cast<int32_t>(adhoc_err::kInvalidSocketId);
    log(LogLevel::Info, "PDP socket " + std::to_string(id) + " deleted");
    return 0;
}

uint32_t AdhocNode::pdp_send(int id, const AdhocMac &dst, uint16_t dst_port, const uint8_t *data, size_t n) {
    Socket *s = find_socket(id);
    if (!s) return adhoc_err::kInvalidSocketId;
    if (n > kMaxPdpPayload) return adhoc_err::kInvalidDataLen;
    if (state_ != State::Connected) return adhoc_err::kNotConnected;
    if (dst_port == 0) return adhoc_err::kInvalidPort;

    ++stats_.pdp_sent;
    stats_.bytes_sent += n;
    std::vector<uint8_t> msg;
    msg.reserve(kDataHeader + n);
    put_mac(msg, local_mac_);
    put_mac(msg, dst);
    msg.push_back(static_cast<uint8_t>(s->port));
    msg.push_back(static_cast<uint8_t>(s->port >> 8));
    msg.push_back(static_cast<uint8_t>(dst_port));
    msg.push_back(static_cast<uint8_t>(dst_port >> 8));
    msg.insert(msg.end(), data, data + n);

    if (dst == local_mac_) {
        deliver_local(local_mac_, s->port, dst, dst_port, data, n);
        return 0;
    }
    if (!opt_.host) {
        if (!host_conn_) return adhoc_err::kNotConnected;
        return send_to_conn(host_conn_, kChanData, msg, opt_.pdp_reliable) ? 0 : adhoc_err::kNoSpace;
    }
    // host
    if (dst == kAdhocBroadcastMac) {
        for (const auto &kv : by_conn_)
            if (kv.second.mac != AdhocMac{}) send_to_conn(kv.first, kChanData, msg, opt_.pdp_reliable);
    } else {
        auto route = by_mac_.find(dst);
        if (route == by_mac_.end()) {
            ++stats_.dropped_unknown_dst; // PSP radios also lose frames for absent MACs silently
            return 0;
        }
        if (!send_to_conn(route->second, kChanData, msg, opt_.pdp_reliable)) return adhoc_err::kNoSpace;
    }
    return 0;
}

uint32_t AdhocNode::pdp_recv(int id, Datagram &out) {
    Socket *s = find_socket(id);
    if (!s) return adhoc_err::kInvalidSocketId;
    if (s->queue.empty()) return adhoc_err::kWouldBlock;
    out = std::move(s->queue.front());
    s->queue.pop_front();
    s->queued_bytes -= static_cast<uint32_t>(out.data.size());
    return 0;
}

size_t AdhocNode::pdp_peek_size(int id) const {
    const Socket *s = find_socket(id);
    return (s && !s->queue.empty()) ? s->queue.front().data.size() : 0;
}

std::vector<AdhocNode::SocketInfo> AdhocNode::sockets() const {
    std::vector<SocketInfo> out;
    for (const auto &kv : sockets_)
        out.push_back({kv.second.id, kv.second.mac, kv.second.port, kv.second.rcvbuf, kv.second.queued_bytes});
    return out;
}

} // namespace psprecomp::net
