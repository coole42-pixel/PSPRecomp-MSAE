#include "psprecomp/net/rendezvous.hpp"

#include <algorithm>
#include <cstring>

namespace psprecomp::net {

namespace {

constexpr uint8_t kRvMagic = 0xA8;
constexpr uint8_t kPunchMagic = 0xA9;
constexpr size_t kAddrWire = 18;

enum RvType : uint8_t {
    kRegister = 1,
    kRegisterOk = 2,
    kLookup = 3,
    kLookupOk = 4,
    kRelay = 5,
    kPunchRequest = 6,
    kError = 7,
    kRelayData = 8,
};
enum RvError : uint8_t { kErrNotFound = 1, kErrRoomTaken = 2, kErrServerFull = 3 };

void put_addr(std::vector<uint8_t> &out, const NetAddr &a) {
    out.insert(out.end(), a.ip.begin(), a.ip.end());
    out.push_back(static_cast<uint8_t>(a.port));
    out.push_back(static_cast<uint8_t>(a.port >> 8));
}
NetAddr get_addr(const uint8_t *p) {
    NetAddr a;
    std::memcpy(a.ip.data(), p, 16);
    a.port = static_cast<uint16_t>(p[16] | (p[17] << 8));
    return a;
}
RoomId get_room(const uint8_t *p) {
    RoomId r;
    std::memcpy(r.data(), p, 16);
    return r;
}
std::vector<uint8_t> frame(RvType type, const RoomId &room) {
    std::vector<uint8_t> v{kRvMagic, type};
    v.insert(v.end(), room.begin(), room.end());
    return v;
}

} // namespace

// ---------------------------------------------------------------------------------
// Server
// ---------------------------------------------------------------------------------
RendezvousServer::RendezvousServer(IDatagramTransport &transport, RendezvousConfig cfg)
    : transport_(transport), cfg_(std::move(cfg)), buf_(2048) {}

void RendezvousServer::update(uint64_t now) {
    for (int i = 0; i < 2048; ++i) {
        NetAddr from;
        int n = transport_.recv_from(from, buf_.data(), buf_.size());
        if (n <= 0) break;
        handle(from, buf_.data(), static_cast<size_t>(n), now);
    }
    for (auto it = rooms_.begin(); it != rooms_.end();) {
        if (now - it->second.last_seen_us > cfg_.room_ttl_us) {
            log(LogLevel::Info, "room expired (host " + it->second.host.to_string() + ")");
            ++stats_.rooms_expired;
            it = rooms_.erase(it);
        } else {
            ++it;
        }
    }
    stats_.rooms = rooms_.size();
}

void RendezvousServer::handle(const NetAddr &from, const uint8_t *p, size_t n, uint64_t now) {
    if (n < 2 || p[0] != kRvMagic) {
        ++stats_.bad_packets;
        return;
    }
    auto send = [&](const NetAddr &to, const std::vector<uint8_t> &v) { transport_.send_to(to, v.data(), v.size()); };
    auto error = [&](const RoomId &room, RvError code) {
        auto v = frame(kError, room);
        v.push_back(code);
        send(from, v);
    };

    switch (p[1]) {
    case kRegister: {
        if (n != 2 + 16 + 16) break;
        RoomId room = get_room(p + 2);
        RoomSecret secret;
        std::memcpy(secret.data(), p + 18, 16);
        auto it = rooms_.find(room);
        if (it == rooms_.end()) {
            if (rooms_.size() >= cfg_.max_rooms) return error(room, kErrServerFull);
            Room r;
            r.host = from;
            r.secret = secret;
            r.last_seen_us = now;
            r.tokens = cfg_.relay_burst_bytes;
            r.tokens_us = now;
            it = rooms_.emplace(room, r).first;
            log(LogLevel::Info, "room registered by " + from.to_string());
        } else if (it->second.secret != secret) {
            log(LogLevel::Warn, "register for existing room from " + from.to_string() + " rejected (wrong owner secret)");
            return error(room, kErrRoomTaken);
        } else {
            it->second.host = from; // NAT rebinding / refresh
            it->second.last_seen_us = now;
        }
        ++stats_.registers;
        auto v = frame(kRegisterOk, room);
        put_addr(v, from);
        send(from, v);
        return;
    }
    case kLookup: {
        if (n != 2 + 16) break;
        RoomId room = get_room(p + 2);
        ++stats_.lookups;
        auto it = rooms_.find(room);
        if (it == rooms_.end()) {
            ++stats_.lookups_missed;
            return error(room, kErrNotFound);
        }
        auto ok = frame(kLookupOk, room);
        put_addr(ok, it->second.host);
        send(from, ok);
        auto punch = frame(kPunchRequest, room);
        put_addr(punch, from);
        send(it->second.host, punch);
        log(LogLevel::Debug, "lookup from " + from.to_string() + " -> host " + it->second.host.to_string());
        return;
    }
    case kRelay: {
        if (n < 2 + 16 + kAddrWire) break;
        RoomId room = get_room(p + 2);
        NetAddr dest = get_addr(p + 18);
        auto it = rooms_.find(room);
        if (it == rooms_.end()) return error(room, kErrNotFound);
        Room &r = it->second;
        const size_t payload = n - (2 + 16 + kAddrWire);
        // Only flows that involve the room's host may use the relay: no open proxy.
        if (!(from == r.host || dest == r.host) || payload == 0 || payload > cfg_.max_relay_payload) {
            ++stats_.relay_dropped;
            return;
        }
        double cap = cfg_.relay_burst_bytes;
        r.tokens = std::min(cap, r.tokens + cfg_.relay_bytes_per_sec * static_cast<double>(now - r.tokens_us) * 1e-6);
        r.tokens_us = now;
        if (r.tokens < static_cast<double>(payload)) {
            ++stats_.relay_dropped;
            return;
        }
        r.tokens -= static_cast<double>(payload);
        auto v = frame(kRelayData, room);
        put_addr(v, from);
        v.insert(v.end(), p + 2 + 16 + kAddrWire, p + n);
        send(dest, v);
        ++stats_.relayed_packets;
        stats_.relayed_bytes += payload;
        return;
    }
    default: break;
    }
    ++stats_.bad_packets;
}

// ---------------------------------------------------------------------------------
// SignalingTransport
// ---------------------------------------------------------------------------------
SignalingTransport::SignalingTransport(IDatagramTransport &inner, NetAddr server)
    : inner_(inner), server_(server) {}

void SignalingTransport::register_room(const RoomId &room, const RoomSecret &secret) {
    register_room_ = room;
    secret_ = secret;
    relay_room_ = room;
    want_register_ = true;
    registered_ = false;
    last_register_us_ = 0;
}

void SignalingTransport::lookup(const RoomId &room) {
    lookup_room_ = room;
    want_lookup_ = true;
    last_lookup_us_ = 0;
}

void SignalingTransport::set_relay_peer(const NetAddr &peer, bool on) {
    if (on) relay_peers_.insert(peer);
    else relay_peers_.erase(peer);
}

void SignalingTransport::punch(const NetAddr &peer) {
    const uint8_t pkt[2] = {kPunchMagic, 1};
    inner_.send_to(peer, pkt, sizeof(pkt));
}

void SignalingTransport::update(uint64_t now) {
    if (want_register_) {
        const uint64_t every = registered_ ? 10'000'000 : 1'000'000;
        if (last_register_us_ == 0 || now - last_register_us_ >= every) {
            last_register_us_ = now ? now : 1;
            auto v = frame(kRegister, register_room_);
            v.insert(v.end(), secret_.begin(), secret_.end());
            inner_.send_to(server_, v.data(), v.size());
        }
    }
    if (want_lookup_ && (last_lookup_us_ == 0 || now - last_lookup_us_ >= 1'000'000)) {
        last_lookup_us_ = now ? now : 1;
        auto v = frame(kLookup, lookup_room_);
        inner_.send_to(server_, v.data(), v.size());
    }
}

bool SignalingTransport::poll(SignalEvent &out) {
    if (events_.empty()) return false;
    out = events_.front();
    events_.pop_front();
    return true;
}

bool SignalingTransport::send_to(const NetAddr &to, const uint8_t *data, size_t size) {
    if (relay_peers_.count(to)) {
        auto v = frame(kRelay, relay_room_);
        put_addr(v, to);
        v.insert(v.end(), data, data + size);
        ++relayed_tx;
        return inner_.send_to(server_, v.data(), v.size());
    }
    ++direct_tx;
    return inner_.send_to(to, data, size);
}

int SignalingTransport::recv_from(NetAddr &from, uint8_t *buf, size_t capacity) {
    uint8_t tmp[2048];
    for (int guard = 0; guard < 4096; ++guard) {
        NetAddr f;
        int n = inner_.recv_from(f, tmp, sizeof(tmp));
        if (n <= 0) return 0;
        const size_t len = static_cast<size_t>(n);
        if (tmp[0] == kPunchMagic) continue; // hole-punch keepalive: only purpose was the NAT mapping
        if (tmp[0] == kRvMagic && f == server_ && len >= 2 + 16) {
            RoomId room = get_room(tmp + 2);
            switch (tmp[1]) {
            case kRegisterOk:
                if (len == 2 + 16 + kAddrWire) {
                    bool first = !registered_ || reflexive_ != get_addr(tmp + 18);
                    registered_ = true;
                    reflexive_ = get_addr(tmp + 18);
                    if (first) events_.push_back({SignalEvent::Type::Registered, reflexive_, room});
                }
                break;
            case kLookupOk:
                if (len == 2 + 16 + kAddrWire && want_lookup_ && room == lookup_room_) {
                    want_lookup_ = false;
                    events_.push_back({SignalEvent::Type::LookupOk, get_addr(tmp + 18), room});
                }
                break;
            case kPunchRequest:
                if (len == 2 + 16 + kAddrWire) events_.push_back({SignalEvent::Type::PunchRequest, get_addr(tmp + 18), room});
                break;
            case kError:
                if (len == 2 + 16 + 1) {
                    if (tmp[18] == kErrRoomTaken && want_register_ && room == register_room_) {
                        want_register_ = false;
                        events_.push_back({SignalEvent::Type::RegisterRejected, NetAddr(), room});
                    } else if (tmp[18] == kErrNotFound && want_lookup_ && room == lookup_room_) {
                        want_lookup_ = false;
                        events_.push_back({SignalEvent::Type::LookupFailed, NetAddr(), room});
                    }
                }
                break;
            case kRelayData:
                if (len > 2 + 16 + kAddrWire) {
                    NetAddr src = get_addr(tmp + 18);
                    relay_peers_.insert(src); // reply the same way the peer reached us
                    size_t pl = len - (2 + 16 + kAddrWire);
                    if (pl > capacity) pl = capacity;
                    std::memcpy(buf, tmp + 2 + 16 + kAddrWire, pl);
                    from = src;
                    ++relayed_rx;
                    return static_cast<int>(pl);
                }
                break;
            default: break;
            }
            continue;
        }
        size_t copy = std::min(len, capacity);
        std::memcpy(buf, tmp, copy);
        from = f;
        ++direct_rx;
        return static_cast<int>(copy);
    }
    return 0;
}

// ---------------------------------------------------------------------------------
// RoomHost / RoomJoiner
// ---------------------------------------------------------------------------------
namespace {
Config with_invite(Config cfg, const crypto::Invite &invite) {
    cfg.set_invite(invite);
    return cfg;
}
} // namespace

RoomHost::RoomHost(IDatagramTransport &raw, const NetAddr &server, const crypto::Invite &invite, Config ep_cfg)
    : sig_(raw, server), ep_(sig_, with_invite(std::move(ep_cfg), invite)), room_(crypto::invite_room_id(invite)) {
    crypto::random_bytes(secret_.data(), secret_.size());
    ep_.set_accepting(true);
}

void RoomHost::update(uint64_t now) {
    if (!started_) {
        started_ = true;
        sig_.register_room(room_, secret_);
    }
    sig_.update(now);
    ep_.update(now);
    SignalEvent ev;
    while (sig_.poll(ev)) {
        if (ev.type == SignalEvent::Type::Registered) registered_ = true;
        else if (ev.type == SignalEvent::Type::PunchRequest) sig_.punch(ev.addr);
    }
}

RoomJoiner::RoomJoiner(IDatagramTransport &raw, const NetAddr &server, const crypto::Invite &invite, Config ep_cfg,
                       RoomConfig room_cfg)
    : sig_(raw, server), ep_(sig_, with_invite(std::move(ep_cfg), invite)), rcfg_(room_cfg),
      room_(crypto::invite_room_id(invite)) {
    sig_.set_relay_room(room_);
}

const char *RoomJoiner::state_name() const {
    switch (state_) {
    case State::Idle: return "idle";
    case State::LookingUp: return "looking-up";
    case State::ConnectingDirect: return "connecting-direct";
    case State::ConnectingRelay: return "connecting-relay";
    case State::Connected: return "connected";
    case State::Failed: return "failed";
    }
    return "?";
}

void RoomJoiner::start(uint64_t now) {
    state_ = State::LookingUp;
    started_us_ = now;
    sig_.lookup(room_);
}

bool RoomJoiner::poll(Event &out) {
    if (out_.empty()) return false;
    out = std::move(out_.front());
    out_.pop_front();
    return true;
}

void RoomJoiner::update(uint64_t now) {
    if (state_ == State::Idle || state_ == State::Failed) return;
    sig_.update(now);
    ep_.update(now);

    SignalEvent sev;
    while (sig_.poll(sev)) {
        if (sev.type == SignalEvent::Type::LookupOk && state_ == State::LookingUp) {
            host_ = sev.addr;
            state_ = State::ConnectingDirect;
            attempt_us_ = now;
            conn_ = ep_.connect(host_, now);
        } else if (sev.type == SignalEvent::Type::LookupFailed && state_ == State::LookingUp) {
            // Host may not have registered yet: keep asking until the overall timeout.
            sig_.lookup(room_);
        }
    }

    Event e;
    while (ep_.poll(e)) {
        if (e.conn != conn_) continue; // events from an abandoned (direct) attempt
        if (e.type == Event::Type::Connected) {
            used_relay_ = state_ == State::ConnectingRelay;
            state_ = State::Connected;
        } else if (e.type == Event::Type::Disconnected && state_ != State::Connected) {
            // Rejected (wrong app/version/invite mode) is final; a plain timeout is handled below.
            if (e.reason == DisconnectReason::Rejected) state_ = State::Failed;
            else if (state_ == State::ConnectingRelay) state_ = State::Failed;
        }
        out_.push_back(std::move(e));
    }

    if (state_ == State::ConnectingDirect && now - attempt_us_ >= rcfg_.direct_timeout_us) {
        if (rcfg_.allow_relay) {
            ep_.close(conn_, now); // abandon: its Disconnected event is filtered by conn id
            sig_.set_relay_peer(host_, true);
            conn_ = ep_.connect(host_, now);
            attempt_us_ = now;
            state_ = State::ConnectingRelay;
        } else {
            state_ = State::Failed;
        }
    }
    if (state_ != State::Connected && state_ != State::Failed && now - started_us_ >= rcfg_.total_timeout_us)
        state_ = State::Failed;
}

} // namespace psprecomp::net
