#include "psprecomp/net/crypto.hpp"

#include <cstdio>
#include <cstring>

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <bcrypt.h>
#pragma comment(lib, "bcrypt.lib")
#else
#include <fcntl.h>
#include <unistd.h>
#endif

namespace psprecomp::net::crypto {

bool random_bytes(uint8_t *out, size_t size) {
#ifdef _WIN32
    return BCryptGenRandom(nullptr, out, static_cast<ULONG>(size), BCRYPT_USE_SYSTEM_PREFERRED_RNG) == 0;
#else
    int fd = ::open("/dev/urandom", O_RDONLY);
    if (fd < 0) return false;
    size_t got = 0;
    while (got < size) {
        ssize_t n = ::read(fd, out + got, size - got);
        if (n <= 0) {
            ::close(fd);
            return false;
        }
        got += static_cast<size_t>(n);
    }
    ::close(fd);
    return true;
#endif
}

bool constant_time_equal(const uint8_t *a, const uint8_t *b, size_t size) {
    uint8_t diff = 0;
    for (size_t i = 0; i < size; ++i) diff = static_cast<uint8_t>(diff | (a[i] ^ b[i]));
    return diff == 0;
}

namespace {

inline uint32_t rotl32(uint32_t x, int b) { return (x << b) | (x >> (32 - b)); }
inline uint32_t rotr32(uint32_t x, int b) { return (x >> b) | (x << (32 - b)); }
inline uint32_t load32(const uint8_t *p) {
    return static_cast<uint32_t>(p[0]) | static_cast<uint32_t>(p[1]) << 8 | static_cast<uint32_t>(p[2]) << 16 |
           static_cast<uint32_t>(p[3]) << 24;
}
inline void store32(uint8_t *p, uint32_t v) {
    p[0] = static_cast<uint8_t>(v);
    p[1] = static_cast<uint8_t>(v >> 8);
    p[2] = static_cast<uint8_t>(v >> 16);
    p[3] = static_cast<uint8_t>(v >> 24);
}
inline void store64(uint8_t *p, uint64_t v) {
    store32(p, static_cast<uint32_t>(v));
    store32(p + 4, static_cast<uint32_t>(v >> 32));
}

// --------------------------------------------------------------------- BLAKE2s
constexpr uint32_t kB2sIv[8] = {0x6A09E667u, 0xBB67AE85u, 0x3C6EF372u, 0xA54FF53Au,
                                0x510E527Fu, 0x9B05688Cu, 0x1F83D9ABu, 0x5BE0CD19u};
constexpr uint8_t kB2sSigma[10][16] = {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, {14, 10, 4, 8, 9, 15, 13, 6, 1, 12, 0, 2, 11, 7, 5, 3},
    {11, 8, 12, 0, 5, 2, 15, 13, 10, 14, 3, 6, 7, 1, 9, 4}, {7, 9, 3, 1, 13, 12, 11, 14, 2, 6, 5, 10, 4, 0, 15, 8},
    {9, 0, 5, 7, 2, 4, 10, 15, 14, 1, 11, 12, 6, 8, 3, 13}, {2, 12, 6, 10, 0, 11, 8, 3, 4, 13, 7, 5, 15, 14, 1, 9},
    {12, 5, 1, 15, 14, 13, 4, 10, 0, 7, 6, 3, 9, 2, 8, 11}, {13, 11, 7, 14, 12, 1, 3, 9, 5, 0, 15, 4, 8, 6, 2, 10},
    {6, 15, 14, 9, 11, 3, 0, 8, 12, 2, 13, 7, 1, 4, 10, 5}, {10, 2, 8, 4, 7, 6, 1, 5, 15, 11, 9, 14, 3, 12, 13, 0}};

struct B2s {
    uint32_t h[8];
    uint64_t t = 0;
    uint8_t buf[64];
    size_t buflen = 0;

    void compress(const uint8_t block[64], bool last) {
        uint32_t m[16], v[16];
        for (int i = 0; i < 16; ++i) m[i] = load32(block + 4 * i);
        for (int i = 0; i < 8; ++i) {
            v[i] = h[i];
            v[i + 8] = kB2sIv[i];
        }
        v[12] ^= static_cast<uint32_t>(t);
        v[13] ^= static_cast<uint32_t>(t >> 32);
        if (last) v[14] = ~v[14];
        auto g = [&](int a, int b, int c, int d, uint32_t x, uint32_t y) {
            v[a] = v[a] + v[b] + x;
            v[d] = rotr32(v[d] ^ v[a], 16);
            v[c] = v[c] + v[d];
            v[b] = rotr32(v[b] ^ v[c], 12);
            v[a] = v[a] + v[b] + y;
            v[d] = rotr32(v[d] ^ v[a], 8);
            v[c] = v[c] + v[d];
            v[b] = rotr32(v[b] ^ v[c], 7);
        };
        for (int r = 0; r < 10; ++r) {
            const uint8_t *s = kB2sSigma[r];
            g(0, 4, 8, 12, m[s[0]], m[s[1]]);
            g(1, 5, 9, 13, m[s[2]], m[s[3]]);
            g(2, 6, 10, 14, m[s[4]], m[s[5]]);
            g(3, 7, 11, 15, m[s[6]], m[s[7]]);
            g(0, 5, 10, 15, m[s[8]], m[s[9]]);
            g(1, 6, 11, 12, m[s[10]], m[s[11]]);
            g(2, 7, 8, 13, m[s[12]], m[s[13]]);
            g(3, 4, 9, 14, m[s[14]], m[s[15]]);
        }
        for (int i = 0; i < 8; ++i) h[i] ^= v[i] ^ v[i + 8];
    }

    void update(const uint8_t *data, size_t size) {
        while (size > 0) {
            if (buflen == 64) { // only compress a full buffer when more data follows
                t += 64;
                compress(buf, false);
                buflen = 0;
            }
            size_t take = 64 - buflen;
            if (take > size) take = size;
            std::memcpy(buf + buflen, data, take);
            buflen += take;
            data += take;
            size -= take;
        }
    }
};

// --------------------------------------------------------------------- ChaCha20
void chacha_block(uint8_t out[64], const uint32_t state[16]) {
    uint32_t x[16];
    std::memcpy(x, state, sizeof(x));
    auto qr = [&](int a, int b, int c, int d) {
        x[a] += x[b]; x[d] = rotl32(x[d] ^ x[a], 16);
        x[c] += x[d]; x[b] = rotl32(x[b] ^ x[c], 12);
        x[a] += x[b]; x[d] = rotl32(x[d] ^ x[a], 8);
        x[c] += x[d]; x[b] = rotl32(x[b] ^ x[c], 7);
    };
    for (int i = 0; i < 10; ++i) {
        qr(0, 4, 8, 12); qr(1, 5, 9, 13); qr(2, 6, 10, 14); qr(3, 7, 11, 15);
        qr(0, 5, 10, 15); qr(1, 6, 11, 12); qr(2, 7, 8, 13); qr(3, 4, 9, 14);
    }
    for (int i = 0; i < 16; ++i) store32(out + 4 * i, x[i] + state[i]);
}

void chacha_init(uint32_t st[16], const uint8_t key[32], const uint8_t nonce[12], uint32_t counter) {
    st[0] = 0x61707865u; st[1] = 0x3320646eu; st[2] = 0x79622d32u; st[3] = 0x6b206574u;
    for (int i = 0; i < 8; ++i) st[4 + i] = load32(key + 4 * i);
    st[12] = counter;
    for (int i = 0; i < 3; ++i) st[13 + i] = load32(nonce + 4 * i);
}

void chacha_xor(const uint8_t key[32], const uint8_t nonce[12], uint32_t counter, const uint8_t *in, uint8_t *out,
                size_t size) {
    uint32_t st[16];
    chacha_init(st, key, nonce, counter);
    uint8_t block[64];
    for (size_t off = 0; off < size; off += 64) {
        chacha_block(block, st);
        ++st[12];
        size_t n = size - off < 64 ? size - off : 64;
        for (size_t i = 0; i < n; ++i) out[off + i] = static_cast<uint8_t>(in[off + i] ^ block[i]);
    }
}

// --------------------------------------------------------------------- Poly1305
struct Poly1305 {
    uint32_t r[5], h[5] = {0, 0, 0, 0, 0}, pad[4];

    explicit Poly1305(const uint8_t key[32]) {
        r[0] = load32(key + 0) & 0x3ffffffu;
        r[1] = (load32(key + 3) >> 2) & 0x3ffff03u;
        r[2] = (load32(key + 6) >> 4) & 0x3ffc0ffu;
        r[3] = (load32(key + 9) >> 6) & 0x3f03fffu;
        r[4] = (load32(key + 12) >> 8) & 0x00fffffu;
        for (int i = 0; i < 4; ++i) pad[i] = load32(key + 16 + 4 * i);
    }

    void block(const uint8_t m[16], uint32_t hibit) {
        const uint32_t s1 = r[1] * 5, s2 = r[2] * 5, s3 = r[3] * 5, s4 = r[4] * 5;
        h[0] += load32(m + 0) & 0x3ffffffu;
        h[1] += (load32(m + 3) >> 2) & 0x3ffffffu;
        h[2] += (load32(m + 6) >> 4) & 0x3ffffffu;
        h[3] += (load32(m + 9) >> 6) & 0x3ffffffu;
        h[4] += (load32(m + 12) >> 8) | hibit;
        uint64_t d0 = static_cast<uint64_t>(h[0]) * r[0] + static_cast<uint64_t>(h[1]) * s4 +
                      static_cast<uint64_t>(h[2]) * s3 + static_cast<uint64_t>(h[3]) * s2 +
                      static_cast<uint64_t>(h[4]) * s1;
        uint64_t d1 = static_cast<uint64_t>(h[0]) * r[1] + static_cast<uint64_t>(h[1]) * r[0] +
                      static_cast<uint64_t>(h[2]) * s4 + static_cast<uint64_t>(h[3]) * s3 +
                      static_cast<uint64_t>(h[4]) * s2;
        uint64_t d2 = static_cast<uint64_t>(h[0]) * r[2] + static_cast<uint64_t>(h[1]) * r[1] +
                      static_cast<uint64_t>(h[2]) * r[0] + static_cast<uint64_t>(h[3]) * s4 +
                      static_cast<uint64_t>(h[4]) * s3;
        uint64_t d3 = static_cast<uint64_t>(h[0]) * r[3] + static_cast<uint64_t>(h[1]) * r[2] +
                      static_cast<uint64_t>(h[2]) * r[1] + static_cast<uint64_t>(h[3]) * r[0] +
                      static_cast<uint64_t>(h[4]) * s4;
        uint64_t d4 = static_cast<uint64_t>(h[0]) * r[4] + static_cast<uint64_t>(h[1]) * r[3] +
                      static_cast<uint64_t>(h[2]) * r[2] + static_cast<uint64_t>(h[3]) * r[1] +
                      static_cast<uint64_t>(h[4]) * r[0];
        uint32_t c = static_cast<uint32_t>(d0 >> 26); h[0] = static_cast<uint32_t>(d0) & 0x3ffffffu;
        d1 += c; c = static_cast<uint32_t>(d1 >> 26); h[1] = static_cast<uint32_t>(d1) & 0x3ffffffu;
        d2 += c; c = static_cast<uint32_t>(d2 >> 26); h[2] = static_cast<uint32_t>(d2) & 0x3ffffffu;
        d3 += c; c = static_cast<uint32_t>(d3 >> 26); h[3] = static_cast<uint32_t>(d3) & 0x3ffffffu;
        d4 += c; c = static_cast<uint32_t>(d4 >> 26); h[4] = static_cast<uint32_t>(d4) & 0x3ffffffu;
        h[0] += c * 5; c = h[0] >> 26; h[0] &= 0x3ffffffu;
        h[1] += c;
    }

    void update(const uint8_t *m, size_t size) {
        while (size >= 16) {
            block(m, 1u << 24);
            m += 16;
            size -= 16;
        }
        if (size) {
            uint8_t last[16] = {0};
            std::memcpy(last, m, size);
            last[size] = 1;
            block(last, 0);
        }
    }

    void finish(uint8_t tag[16]) {
        uint32_t c = h[1] >> 26; h[1] &= 0x3ffffffu;
        h[2] += c; c = h[2] >> 26; h[2] &= 0x3ffffffu;
        h[3] += c; c = h[3] >> 26; h[3] &= 0x3ffffffu;
        h[4] += c; c = h[4] >> 26; h[4] &= 0x3ffffffu;
        h[0] += c * 5; c = h[0] >> 26; h[0] &= 0x3ffffffu;
        h[1] += c;

        uint32_t g[5];
        g[0] = h[0] + 5; c = g[0] >> 26; g[0] &= 0x3ffffffu;
        g[1] = h[1] + c; c = g[1] >> 26; g[1] &= 0x3ffffffu;
        g[2] = h[2] + c; c = g[2] >> 26; g[2] &= 0x3ffffffu;
        g[3] = h[3] + c; c = g[3] >> 26; g[3] &= 0x3ffffffu;
        g[4] = h[4] + c - (1u << 26);
        uint32_t mask = (g[4] >> 31) - 1; // all ones if h >= p
        for (int i = 0; i < 5; ++i) h[i] = (h[i] & ~mask) | (g[i] & mask);

        uint32_t w0 = h[0] | (h[1] << 26);
        uint32_t w1 = (h[1] >> 6) | (h[2] << 20);
        uint32_t w2 = (h[2] >> 12) | (h[3] << 14);
        uint32_t w3 = (h[3] >> 18) | (h[4] << 8);
        uint64_t f = static_cast<uint64_t>(w0) + pad[0];
        store32(tag + 0, static_cast<uint32_t>(f));
        f = static_cast<uint64_t>(w1) + pad[1] + (f >> 32);
        store32(tag + 4, static_cast<uint32_t>(f));
        f = static_cast<uint64_t>(w2) + pad[2] + (f >> 32);
        store32(tag + 8, static_cast<uint32_t>(f));
        f = static_cast<uint64_t>(w3) + pad[3] + (f >> 32);
        store32(tag + 12, static_cast<uint32_t>(f));
    }
};

void aead_tag(uint8_t tag[16], const uint8_t otk[32], const uint8_t *aad, size_t aad_size, const uint8_t *ct,
              size_t ct_size) {
    Poly1305 p(otk);
    static const uint8_t zeros[16] = {0};
    p.update(aad, aad_size & ~size_t{15});
    if (aad_size & 15) {
        uint8_t tail[16] = {0};
        std::memcpy(tail, aad + (aad_size & ~size_t{15}), aad_size & 15);
        p.update(tail, 16);
    }
    p.update(ct, ct_size & ~size_t{15});
    if (ct_size & 15) {
        uint8_t tail[16] = {0};
        std::memcpy(tail, ct + (ct_size & ~size_t{15}), ct_size & 15);
        p.update(tail, 16);
    }
    (void)zeros;
    uint8_t lens[16];
    store64(lens, aad_size);
    store64(lens + 8, ct_size);
    p.update(lens, 16);
    p.finish(tag);
}

// --------------------------------------------------------------------- X25519 (TweetNaCl field arithmetic)
using gf = int64_t[16];

void car25519(gf o) {
    for (int i = 0; i < 16; ++i) {
        o[i] += (int64_t{1} << 16);
        int64_t c = o[i] >> 16;
        o[(i + 1) * (i < 15)] += c - 1 + 37 * (c - 1) * (i == 15);
        o[i] -= c * (int64_t{1} << 16);
    }
}
void sel25519(gf p, gf q, int64_t b) {
    int64_t c = ~(b - 1);
    for (int i = 0; i < 16; ++i) {
        int64_t t = c & (p[i] ^ q[i]);
        p[i] ^= t;
        q[i] ^= t;
    }
}
void pack25519(uint8_t *o, const gf n) {
    gf m, t;
    for (int i = 0; i < 16; ++i) t[i] = n[i];
    car25519(t);
    car25519(t);
    car25519(t);
    for (int j = 0; j < 2; ++j) {
        m[0] = t[0] - 0xffed;
        for (int i = 1; i < 15; ++i) {
            m[i] = t[i] - 0xffff - ((m[i - 1] >> 16) & 1);
            m[i - 1] &= 0xffff;
        }
        m[15] = t[15] - 0x7fff - ((m[14] >> 16) & 1);
        int64_t b = (m[15] >> 16) & 1;
        m[14] &= 0xffff;
        sel25519(t, m, 1 - b);
    }
    for (int i = 0; i < 16; ++i) {
        o[2 * i] = static_cast<uint8_t>(t[i] & 0xff);
        o[2 * i + 1] = static_cast<uint8_t>(t[i] >> 8);
    }
}
void unpack25519(gf o, const uint8_t *n) {
    for (int i = 0; i < 16; ++i) o[i] = n[2 * i] + (static_cast<int64_t>(n[2 * i + 1]) << 8);
    o[15] &= 0x7fff;
}
void fadd(gf o, const gf a, const gf b) { for (int i = 0; i < 16; ++i) o[i] = a[i] + b[i]; }
void fsub(gf o, const gf a, const gf b) { for (int i = 0; i < 16; ++i) o[i] = a[i] - b[i]; }
void fmul(gf o, const gf a, const gf b) {
    int64_t t[31];
    for (int i = 0; i < 31; ++i) t[i] = 0;
    for (int i = 0; i < 16; ++i)
        for (int j = 0; j < 16; ++j) t[i + j] += a[i] * b[j];
    for (int i = 0; i < 15; ++i) t[i] += 38 * t[i + 16];
    for (int i = 0; i < 16; ++i) o[i] = t[i];
    car25519(o);
    car25519(o);
}
void fsq(gf o, const gf a) { fmul(o, a, a); }
void inv25519(gf o, const gf i) {
    gf c;
    for (int a = 0; a < 16; ++a) c[a] = i[a];
    for (int a = 253; a >= 0; --a) {
        fsq(c, c);
        if (a != 2 && a != 4) fmul(c, c, i);
    }
    for (int a = 0; a < 16; ++a) o[a] = c[a];
}

void scalarmult(uint8_t q[32], const uint8_t n[32], const uint8_t p[32]) {
    static const gf k121665 = {0xDB41, 1};
    uint8_t z[32];
    int64_t x[80];
    gf a, b, c, d, e, f;
    for (int i = 0; i < 31; ++i) z[i] = n[i];
    z[31] = static_cast<uint8_t>((n[31] & 127) | 64);
    z[0] &= 248;
    unpack25519(x, p);
    for (int i = 0; i < 16; ++i) {
        b[i] = x[i];
        d[i] = a[i] = c[i] = 0;
    }
    a[0] = d[0] = 1;
    for (int i = 254; i >= 0; --i) {
        int64_t r = (z[i >> 3] >> (i & 7)) & 1;
        sel25519(a, b, r);
        sel25519(c, d, r);
        fadd(e, a, c);
        fsub(a, a, c);
        fadd(c, b, d);
        fsub(b, b, d);
        fsq(d, e);
        fsq(f, a);
        fmul(a, c, a);
        fmul(c, b, e);
        fadd(e, a, c);
        fsub(a, a, c);
        fsq(b, a);
        fsub(c, d, f);
        fmul(a, c, k121665);
        fadd(a, a, d);
        fmul(c, c, a);
        fmul(a, d, f);
        fmul(d, b, x);
        fsq(b, e);
        sel25519(a, b, r);
        sel25519(c, d, r);
    }
    for (int i = 0; i < 16; ++i) {
        x[i + 16] = a[i];
        x[i + 32] = c[i];
        x[i + 48] = b[i];
        x[i + 64] = d[i];
    }
    inv25519(x + 32, x + 32);
    fmul(x + 16, x + 16, x + 32);
    pack25519(q, x + 16);
}

} // namespace

void blake2s(uint8_t out[32], const uint8_t *data, size_t size, const uint8_t *key, size_t key_size) {
    B2s s;
    for (int i = 0; i < 8; ++i) s.h[i] = kB2sIv[i];
    s.h[0] ^= 0x01010000u ^ (static_cast<uint32_t>(key_size) << 8) ^ 32u;
    if (key_size) {
        uint8_t kb[64] = {0};
        std::memcpy(kb, key, key_size);
        s.update(kb, 64);
    }
    s.update(data, size);
    s.t += s.buflen;
    std::memset(s.buf + s.buflen, 0, 64 - s.buflen);
    s.compress(s.buf, true);
    for (int i = 0; i < 8; ++i) store32(out + 4 * i, s.h[i]);
}

void x25519_public(uint8_t pub[32], const uint8_t priv[32]) {
    uint8_t base[32] = {9};
    scalarmult(pub, priv, base);
}

bool x25519_shared(uint8_t shared[32], const uint8_t priv[32], const uint8_t peer_pub[32]) {
    scalarmult(shared, priv, peer_pub);
    uint8_t acc = 0;
    for (int i = 0; i < 32; ++i) acc = static_cast<uint8_t>(acc | shared[i]);
    return acc != 0;
}

void aead_seal(uint8_t *out, const uint8_t key[32], const uint8_t nonce[12], const uint8_t *aad, size_t aad_size,
               const uint8_t *plain, size_t size) {
    uint8_t block0[64], zero[64] = {0};
    chacha_xor(key, nonce, 0, zero, block0, 64);
    chacha_xor(key, nonce, 1, plain, out, size);
    aead_tag(out + size, block0, aad, aad_size, out, size);
}

bool aead_open(uint8_t *out, const uint8_t key[32], const uint8_t nonce[12], const uint8_t *aad, size_t aad_size,
               const uint8_t *in, size_t size) {
    if (size < kTagSize) return false;
    const size_t ct = size - kTagSize;
    uint8_t block0[64], zero[64] = {0}, tag[16];
    chacha_xor(key, nonce, 0, zero, block0, 64);
    aead_tag(tag, block0, aad, aad_size, in, ct);
    if (!constant_time_equal(tag, in + ct, kTagSize)) return false;
    chacha_xor(key, nonce, 1, in, out, ct);
    return true;
}

// ------------------------------------------------------------------------ invites
namespace {
constexpr char kAlphabet[] = "0123456789ABCDEFGHJKMNPQRSTVWXYZ";
}

bool generate_invite(Invite &out) { return random_bytes(out.data(), out.size()); }

std::string invite_to_string(const Invite &invite) {
    std::string s;
    uint32_t acc = 0;
    int bits = 0;
    for (uint8_t b : invite) {
        acc = (acc << 8) | b;
        bits += 8;
        while (bits >= 5) {
            s.push_back(kAlphabet[(acc >> (bits - 5)) & 31]);
            bits -= 5;
        }
    }
    if (bits > 0) s.push_back(kAlphabet[(acc << (5 - bits)) & 31]);
    std::string grouped;
    for (size_t i = 0; i < s.size(); ++i) {
        if (i && i % 4 == 0) grouped.push_back('-');
        grouped.push_back(s[i]);
    }
    return grouped;
}

bool invite_from_string(const std::string &text, Invite &out) {
    uint32_t acc = 0;
    int bits = 0;
    size_t count = 0, produced = 0;
    out.fill(0);
    for (char ch : text) {
        if (ch == '-' || ch == ' ') continue;
        if (ch >= 'a' && ch <= 'z') ch = static_cast<char>(ch - 'a' + 'A');
        if (ch == 'O') ch = '0';
        if (ch == 'I' || ch == 'L') ch = '1';
        const char *p = std::strchr(kAlphabet, ch);
        if (!p || ch == '\0') return false;
        acc = (acc << 5) | static_cast<uint32_t>(p - kAlphabet);
        bits += 5;
        ++count;
        if (bits >= 8) {
            if (produced >= out.size()) {
                // 26th char only carries 3 data bits + 2 padding bits that must be zero
                return false;
            }
            out[produced++] = static_cast<uint8_t>((acc >> (bits - 8)) & 0xFF);
            bits -= 8;
        }
    }
    return count == 26 && produced == 16 && (acc & ((1u << bits) - 1)) == 0;
}

Key invite_psk(const Invite &invite) {
    static const char kLabel[] = "psprecomp-net-invite-psk-v1";
    Key k{};
    blake2s(k.data(), invite.data(), invite.size(), reinterpret_cast<const uint8_t *>(kLabel), sizeof(kLabel) - 1);
    return k;
}

std::array<uint8_t, 16> invite_room_id(const Invite &invite) {
    static const char kLabel[] = "psprecomp-net-invite-room-v1";
    uint8_t h[32];
    blake2s(h, invite.data(), invite.size(), reinterpret_cast<const uint8_t *>(kLabel), sizeof(kLabel) - 1);
    std::array<uint8_t, 16> id{};
    std::memcpy(id.data(), h, 16);
    return id;
}

} // namespace psprecomp::net::crypto
