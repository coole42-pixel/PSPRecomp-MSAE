#pragma once

#include <cstdint>

namespace motorstorm {

// Monotonic host wall clock in microseconds.
[[nodiscard]] std::uint64_t host_time_us() noexcept;

// Sleeps the calling thread with sub-millisecond precision (high-resolution
// waitable timer; the default Windows sleep granularity is ~15.6 ms).
void host_sleep_us(std::uint64_t microseconds) noexcept;

// Waits against an absolute deadline so early wakeups cannot publish early.
void host_sleep_until_us(std::uint64_t deadline) noexcept;

// Called once per displayed frame on the guest thread with the time the frame
// kept the thread busy (pacing sleeps and audio waits excluded) and the time a
// frame has. Android forwards it to the performance hint API (ADPF) so the
// governor raises the clock before frames run late; elsewhere it does nothing.
void host_report_frame_work(std::uint64_t work_us, std::uint64_t frame_us) noexcept;

// Maps the guest display timeline to host deadlines. Audio backpressure limits
// average speed, but its buffer-sized wakes do not provide a frame cadence.
class FramePacer {
public:
    [[nodiscard]] std::uint64_t deadline(std::uint64_t guest, std::uint64_t wall) noexcept {
        if (!anchored_ || guest < previous_guest_ ||
            (wall > wall_anchor_ && wall - wall_anchor_ > guest - guest_anchor_ + 100'000u)) {
            guest_anchor_ = guest;
            wall_anchor_ = wall;
            anchored_ = true;
        }
        previous_guest_ = guest;
        return wall_anchor_ + (guest - guest_anchor_);
    }
    void reset() noexcept { anchored_ = false; }

private:
    bool anchored_{};
    std::uint64_t guest_anchor_{}, wall_anchor_{}, previous_guest_{};
};

// Let audio build its reserve before adding frame waits. Hysteresis avoids
// switching pacing on and off at each audio device wake. A loading stall can
// consume the reserve; refill it before anchoring the display clock again.
class AudioPacingReserve {
public:
    [[nodiscard]] bool ready(std::uint64_t queued, std::uint64_t capacity) noexcept {
        if (queued < capacity / 4u) ready_ = false;
        else if (queued >= capacity * 3u / 4u) ready_ = true;
        return ready_;
    }
private:
    bool ready_{};
};

} // namespace motorstorm
