#include "motorstorm_audio_ring.hpp"

#include <cmath>
#include <cstdio>
#include <vector>

using motorstorm::AudioRing;

static int failures = 0;
static void check(bool ok, const char *what) {
    if (!ok) {
        std::printf("FAIL: %s\n", what);
        ++failures;
    }
}
static std::vector<std::int16_t> tone(std::size_t frames, std::size_t from = 0) {
    std::vector<std::int16_t> pcm(frames * 2u);
    for (std::size_t i = 0; i < frames; ++i)
        pcm[i * 2u] = pcm[i * 2u + 1u] = static_cast<std::int16_t>(10000.0 * std::sin(0.05 * static_cast<double>(from + i)));
    return pcm;
}
// The largest sample-to-sample step, which a click makes large.
static int max_step(const std::vector<std::int16_t> &pcm) {
    int step = 0;
    for (std::size_t i = 1; i < pcm.size() / 2u; ++i)
        step = std::max(step, std::abs(pcm[i * 2u] - pcm[(i - 1u) * 2u]));
    return step;
}

int main() {
    // Waits for the start reserve, then plays the pushed samples unchanged.
    {
        AudioRing ring(8192, 1024, 2048);
        std::vector<std::int16_t> out(512 * 2u);
        ring.pull(out.data(), 512);
        check(ring.stats().silent_frames == 512 && ring.stats().underruns == 0, "silence before the reserve is not an underrun");
        auto pcm = tone(4096);
        check(ring.push(pcm.data(), 4096) == 4096, "push accepts what fits");
        ring.pull(out.data(), 512);
        check(ring.level() < 4096, "pull consumes");
        check(ring.stats().played_frames == 512, "plays once the reserve exists");
    }
    // A full ring refuses extra frames.
    {
        AudioRing ring(1024, 128, 256);
        auto pcm = tone(2048);
        check(ring.push(pcm.data(), 2048) == 1024, "push stops at capacity");
        check(ring.free_frames() == 0, "free frames reach zero");
    }
    // Running dry fades out without a click, counts one underrun, and recovers.
    {
        AudioRing ring(8192, 1024, 2048);
        auto pcm = tone(3000);
        ring.push(pcm.data(), 3000);
        std::vector<std::int16_t> played;
        std::vector<std::int16_t> out(256 * 2u);
        for (int i = 0; i < 20; ++i) {  // 5120 frames asked, 3000 available
            ring.pull(out.data(), 256);
            played.insert(played.end(), out.begin(), out.end());
        }
        check(ring.stats().underruns == 1, "one underrun is counted");
        check(max_step(played) < 1500, "no click when the ring runs dry");
        auto more = tone(4000, 3000);
        ring.push(more.data(), 4000);
        std::vector<std::int16_t> resumed;
        for (int i = 0; i < 8; ++i) {
            ring.pull(out.data(), 256);
            resumed.insert(resumed.end(), out.begin(), out.end());
        }
        check(max_step(resumed) < 1500, "no click when playback resumes");
        check(ring.stats().played_frames > 3000, "playback resumes after the reserve returns");
    }
    // Below the low mark it consumes slower, so the ring lasts longer.
    {
        AudioRing slow(16384, 512, 8192), fast(16384, 512, 0);
        auto pcm = tone(4000);
        slow.push(pcm.data(), 4000);
        fast.push(pcm.data(), 4000);
        std::vector<std::int16_t> out(256 * 2u);
        for (int i = 0; i < 12; ++i) {
            slow.pull(out.data(), 256);
            fast.pull(out.data(), 256);
        }
        check(slow.level() > fast.level(), "low ring consumes slower");
        check(slow.stats().resamples > 0 && fast.stats().resamples == 0, "resampling only below the low mark");
    }
    std::printf(failures ? "audio ring tests FAILED\n" : "audio ring tests passed\n");
    return failures ? 1 : 0;
}
