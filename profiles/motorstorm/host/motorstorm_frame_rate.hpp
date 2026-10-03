#pragma once

#include <cstdint>

namespace motorstorm {

// MotorStorm paces itself in its flip routine (0x08931588): it waits until a
// minimum number of vblanks (0x08A78E68) has elapsed since the previous flip,
// and passes the matching rate to its timestep setter (0x0891BF0C), which
// derives every per-frame simulation constant from it. The retail game uses
// 2 vblanks / 29.97 fps (3 / 19.98 in heavier scenes).
//
// An unlocked rate keeps the PSP's 60 Hz vblank when the target divides it
// (30, 60). Any other target runs the virtual display at the target rate with
// one vblank per frame, so 120 fps means a 120 Hz vblank.
struct FrameRatePlan {
    bool unlocked{};
    std::uint32_t vblank_us{16667u};
    std::uint32_t interval{};  // vblanks per game frame; 0 = the game's own choice
    float game_fps{};          // value passed to the timestep setter
    float refresh_hz{59.9400599f};
};

constexpr std::uint32_t kMinUnlockedFps = 30u, kMaxUnlockedFps = 240u;

// target_fps 0 leaves the game's original pacing untouched.
[[nodiscard]] constexpr FrameRatePlan plan_frame_rate(std::uint32_t target_fps) {
    FrameRatePlan plan;
    if (target_fps == 0u) return plan;
    if (target_fps < kMinUnlockedFps) target_fps = kMinUnlockedFps;
    if (target_fps > kMaxUnlockedFps) target_fps = kMaxUnlockedFps;
    plan.unlocked = true;
    if (60u % target_fps == 0u) {
        plan.interval = 60u / target_fps;
        plan.game_fps = plan.refresh_hz / static_cast<float>(plan.interval);
        return plan;
    }
    plan.interval = 1u;
    plan.vblank_us = (1'000'000u + target_fps / 2u) / target_fps;
    plan.refresh_hz = static_cast<float>(target_fps);
    plan.game_fps = plan.refresh_hz;
    return plan;
}

// Keeps an unlocked frame rate from turning into slow motion. Guest time is
// paced by audio (or the wall-clock limiter), so a PC that cannot simulate the
// target rate makes guest time fall behind wall time. The governor drops to the
// retail 30 fps pacing when that persists and returns to the target once the
// measured host load leaves enough headroom for it.
class FrameRateGovernor {
public:
    enum class Decision { Keep, Fallback, Restore };
    // One sample per ~second of wall time. idle_s is time the host spent
    // blocked on audio backpressure or the limiter (it had nothing to do).
    // target_scale = target fps / fallback fps.
    Decision update(double wall_s, double guest_s, double idle_s, bool at_target, double target_scale) {
        if (wall_s <= 0.0) return Decision::Keep;
        const double ratio = guest_s / wall_s;
        double busy = (wall_s - idle_s) / wall_s;
        busy = busy < 0.0 ? 0.0 : (busy > 1.0 ? 1.0 : busy);
        since_switch_ += wall_s;
        if (at_target) {
            slow_ = ratio < kSlowRatio ? slow_ + 1 : 0;
            if (slow_ < kSlowSamples) return Decision::Keep;
            // Falling back again soon after a restore: wait longer next time.
            if (restored_ && since_switch_ < kBounceSeconds) backoff_ = backoff_ * 2.0 > kMaxBackoff ? kMaxBackoff : backoff_ * 2.0;
            reset();
            return Decision::Fallback;
        }
        const bool headroom = ratio >= kSteadyRatio && busy * target_scale < kRestoreLoad;
        fast_ = since_switch_ >= backoff_ && headroom ? fast_ + 1 : 0;
        if (fast_ < kFastSamples) return Decision::Keep;
        reset();
        restored_ = true;
        return Decision::Restore;
    }
    [[nodiscard]] double backoff_seconds() const { return backoff_; }

    static constexpr double kSlowRatio = 0.95, kSteadyRatio = 0.98, kRestoreLoad = 0.85;
    static constexpr int kSlowSamples = 2, kFastSamples = 3;
    static constexpr double kBounceSeconds = 20.0, kMaxBackoff = 160.0;

private:
    void reset() { slow_ = fast_ = 0; since_switch_ = 0.0; }
    int slow_{}, fast_{};
    double since_switch_{}, backoff_{10.0};
    bool restored_{};
};

} // namespace motorstorm
