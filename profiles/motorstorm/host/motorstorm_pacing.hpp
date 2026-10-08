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

// Keeps the guest at real time when drawing is the bottleneck: audio, game
// logic and input all run in guest time, so a guest that falls behind the wall
// clock gives slow motion and an audio device that runs dry. When the guest is
// behind, the draws of the next frame are skipped (its picture is not shown), so
// the guest catches up; no more than `max_in_row` frames in a row are skipped.
class FrameSkipGovernor {
public:
    explicit FrameSkipGovernor(unsigned max_in_row = 2u) noexcept : max_in_row_(max_in_row) {}
    // behind_us: how far guest time trails the wall clock (0 when on time or
    // ahead); frame_us: the duration of one game frame. Returns whether the next
    // frame's draws are skipped.
    [[nodiscard]] bool update(std::uint64_t behind_us, std::uint64_t frame_us) noexcept {
        const bool behind = behind_us * 4u > frame_us;  // more than a quarter frame late
        if (behind && in_row_ < max_in_row_) {
            ++in_row_;
            ++skipped_;
            return true;
        }
        in_row_ = 0u;  // on time, or a frame is drawn after the longest run
        return false;
    }
    [[nodiscard]] std::uint64_t skipped() const noexcept { return skipped_; }
    void reset() noexcept { in_row_ = 0u; }

private:
    unsigned max_in_row_;
    unsigned in_row_{};
    std::uint64_t skipped_{};
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
