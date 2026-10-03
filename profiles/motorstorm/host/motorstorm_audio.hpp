#pragma once

#include "psprecomp/guest_memory.hpp"

#include <cstdint>

namespace motorstorm {

// Native PCM output. Enabled by default with the native window; set
// PSPRECOMP_MOTORSTORM_AUDIO=0 for an explicit silent/headless run.
[[nodiscard]] bool audio_enabled();
struct AudioReport {
    bool opened{};
    std::uint64_t queued_buffers{}, completed_buffers{}, queued_frames{}, dropped_frames{}, errors{}, nonzero_samples{};
    std::uint32_t peak{};
    std::uint64_t underruns{}, longest_gap_us{}, buffered_frames{}, silent_frames{};
    bool playing{};
    bool mmcss{};
};
AudioReport audio_report();

void audio_start(std::uint32_t sample_rate);

// Submits one stereo interleaved signed 16-bit block from guest memory.
void audio_submit(const psprecomp::GuestMemory &memory, std::uint32_t buffer,
                  std::uint32_t sample_count, std::uint32_t volume = 0x8000u);

void audio_shutdown();

// Total wall time the guest thread spent blocked because the PCM queue was
// full (audio backpressure). The frame-rate governor treats it as idle time.
[[nodiscard]] std::uint64_t audio_blocked_us() noexcept;

} // namespace motorstorm
