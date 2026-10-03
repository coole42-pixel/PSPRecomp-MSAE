#pragma once

// Game-neutral HLE for the single sceAudioOutput2 channel family in the
// `sceAudio` library.  This is the simplified 44.1 kHz stereo output used by
// titles that feed it from sceSasCore (via sceSasCore output buffers).
//
// The host has no audio device sink in this module by design: output buffers
// are validated and consumed, guest-visible channel state (reserved, sample
// count, rest samples, volume) is tracked honestly, and blocking submissions
// are paced through an optional host hook so the guest sees realistic timing.
// Connecting a real output device means supplying the hook and reading the PCM,
// which is exactly what a later mixer phase can add without changing the API.

#include <cstdint>

namespace psprecomp {

class Runtime;
struct AllegrexContext;

struct AudioOutput2State {
    bool reserved{};
    std::uint32_t sample_count{};
    std::uint32_t buffer_count{};
    std::uint32_t volume{};
};

// Consumes `microseconds` of guest time for a blocking submission.  Typical
// implementation parks the calling guest thread on the virtual clock.
using AudioOutput2DelayHook = void (*)(Runtime &runtime, AllegrexContext &ctx,
                                       std::uint32_t microseconds, void *user);

// Receives every submitted PCM buffer (stereo interleaved signed 16-bit) so a
// host profile can connect a real audio device.  Called with the guest buffer
// address and the configured sample count; the callback reads guest memory.
using AudioOutput2Sink = void (*)(void *user, const Runtime &runtime, std::uint32_t buffer,
                                  std::uint32_t sample_count);
using AudioOutput2Clock = std::uint64_t (*)(void *user);

struct AudioOutput2Config {
    AudioOutput2DelayHook delay{};
    void *delay_user{};
    AudioOutput2Sink sink{};
    void *sink_user{};
    std::uint32_t sample_rate{44100};
    // With a scheduler clock, DMA buffers remain in flight while their
    // producer is parked. Channel release/rest queries use their deadlines.
    AudioOutput2Clock clock{};
    void *clock_user{};
};

// Installs sceAudioOutput2Reserve / Output2OutputBlocking / Output2ChangeLength /
// Output2GetRestSample / Output2Release.
void install_sce_audio_output2_hle(Runtime &runtime, AudioOutput2Config config = {});

AudioOutput2State &audio_output2_state() noexcept;
void reset_audio_output2_state() noexcept;

} // namespace psprecomp
