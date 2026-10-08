#pragma once

// Small self-contained crypto primitives for the PSPRecomp multiplayer transport.
//
// These are straight implementations of published algorithms and are verified against
// independent reference vectors (RFC 7748, RFC 8439, RFC 7693 and values generated with
// OpenSSL via Python `cryptography` / `hashlib`) in tests/net_tests.cpp.  They have NOT
// had an external security audit; the protocol built on them (thin_udp.cpp) is a simple
// PSK-authenticated ephemeral-X25519 handshake, not TLS.  Keep the surface small and
// replace with libsodium if this ever carries anything more sensitive than game state.

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>

namespace psprecomp::net::crypto {

constexpr size_t kKeySize = 32;
constexpr size_t kTagSize = 16;
constexpr size_t kNonceSize = 12;

using Key = std::array<uint8_t, kKeySize>;

// OS CSPRNG (BCryptGenRandom / /dev/urandom).  Returns false on failure.
bool random_bytes(uint8_t *out, size_t size);

// BLAKE2s-256 (RFC 7693), optionally keyed (key_size 0..32).
void blake2s(uint8_t out[32], const uint8_t *data, size_t size, const uint8_t *key = nullptr,
             size_t key_size = 0);

// X25519 (RFC 7748).  Returns false if the shared secret is all zero (low-order point).
void x25519_public(uint8_t pub[32], const uint8_t priv[32]);
bool x25519_shared(uint8_t shared[32], const uint8_t priv[32], const uint8_t peer_pub[32]);

// ChaCha20-Poly1305 AEAD (RFC 8439).  `out` must hold size + kTagSize bytes.
void aead_seal(uint8_t *out, const uint8_t key[32], const uint8_t nonce[12], const uint8_t *aad,
               size_t aad_size, const uint8_t *plain, size_t size);
// `in` is ciphertext||tag (size >= kTagSize).  Returns false on authentication failure;
// `out` (size - kTagSize bytes) is only meaningful on success.
bool aead_open(uint8_t *out, const uint8_t key[32], const uint8_t nonce[12], const uint8_t *aad,
               size_t aad_size, const uint8_t *in, size_t size);

bool constant_time_equal(const uint8_t *a, const uint8_t *b, size_t size);

// ---- invite codes ----------------------------------------------------------------
// A private-room invite is 16 random bytes shown as 26 base32 characters (Crockford
// alphabet, grouped for typing, e.g. "K7QF-3M2X-...").  The invite is the PSK that
// authenticates the host and derives session keys; a rendezvous server only ever
// sees invite_room_id(), a one-way hash, never the invite itself.
using Invite = std::array<uint8_t, 16>;
bool generate_invite(Invite &out);
std::string invite_to_string(const Invite &invite);
bool invite_from_string(const std::string &text, Invite &out); // tolerant: case, dashes, I/L/O
Key invite_psk(const Invite &invite);                          // 32-byte key for the handshake
std::array<uint8_t, 16> invite_room_id(const Invite &invite);  // public lookup id

} // namespace psprecomp::net::crypto
