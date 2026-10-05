#pragma once

// Controller rumble for MotorStorm. The PSP has no vibration motor, so the
// game never asks for any; these effects are derived from the player vehicle
// once per displayed frame (see update_rumble in motorstorm_hle.cpp):
//
//   * impacts and landings: sudden velocity changes of the vehicle position
//     (collisions, bumps, touchdown after a jump), framerate independent;
//   * wrecks: the vehicle leaves its driving state object (vehicle +704);
//   * boost: the game's own "distance under boost" counter (player +228)
//     advances only while nitro fires, under either control scheme;
//   * road: a light speed-dependent rumble while the wheels are on the ground.
//
// Calibration (docs/CONTROLLER_INPUT.md): game units are about 1 m, top speed
// is ~38 units/s on throttle and ~46 under boost, gravity is ~14.7 units/s^2.
// Per-frame velocity change while driving has a median of 0.3 units/s and a
// 95th percentile of 0.9; bumps and landings reach 7-18, crashes 20-40 spread
// over two to four frames. Respawns teleport the vehicle (>600 units/s).

#include <algorithm>
#include <cmath>
#include <cstdint>

namespace motorstorm {

struct RumbleOutput {
    float low{}, high{};                      // main motors, 0..1
    float left_trigger{}, right_trigger{};    // impulse triggers, 0..1
    [[nodiscard]] bool idle() const { return low <= 0.0f && high <= 0.0f && left_trigger <= 0.0f && right_trigger <= 0.0f; }
};

struct VehicleSample {
    double time{};               // guest seconds
    bool racing{};               // race in progress (not countdown, pause, menus, movies)
    std::uint32_t vehicle{};     // vehicle object; a change starts a new model
    std::uint32_t state{};       // current vehicle state object
    float x{}, y{}, z{};
    float boost_distance{};      // distance travelled under boost this race
};

namespace rumble_event {
inline constexpr unsigned kImpact = 1u, kLanding = 2u, kWreck = 4u, kBoostStart = 8u, kBoostEnd = 16u,
                          kRespawn = 32u, kTeleport = 64u;
}

class RumbleModel {
public:
    static constexpr float kTeleportSpeed = 150.0f;   // units/s; normal top speed is ~46
    static constexpr float kTopSpeed = 45.0f;
    static constexpr float kImpulseDecay = 0.05f;     // s; sums a crash spread over frames
    static constexpr float kImpactFloor = 4.0f;       // units/s of velocity change
    static constexpr float kImpactRange = 22.0f;
    static constexpr float kGravity = 14.7f;

    RumbleOutput update(const VehicleSample &sample) {
        events_ = 0u;
        if (!sample.racing || sample.vehicle == 0u) {
            reset();
            return {};
        }
        if (sample.vehicle != vehicle_) {
            reset();
            vehicle_ = sample.vehicle;
        }
        const double dt_full = sample.time - time_;
        if (!have_position_ || dt_full <= 0.0 || dt_full > 0.25) {
            // First frame, a guest stall or a pause: restart the history.
            remember(sample);
            have_velocity_ = false;
            return output_;
        }
        const float dt = static_cast<float>(dt_full);
        const float vx = (sample.x - x_) / dt, vy = (sample.y - y_) / dt, vz = (sample.z - z_) / dt;
        const float speed = std::sqrt(vx * vx + vy * vy + vz * vz);
        const auto decay = [dt](float tau) { return std::exp(-dt / tau); };

        // Driving state: the state the vehicle first moves steadily in. A
        // tumbling wreck also moves, so a different state is only adopted after
        // sustained racing speed (a wreck never holds 20 units/s for 3 s).
        if (speed > 3.0f && sample.state == state_ && speed <= kTeleportSpeed) {
            moving_time_ += dt;
            fast_time_ = speed > 20.0f ? fast_time_ + dt : 0.0f;
            if ((driving_state_ == 0u && moving_time_ > 0.5f) ||
                (driving_state_ != sample.state && fast_time_ > 3.0f))
                driving_state_ = sample.state;
        } else {
            moving_time_ = fast_time_ = 0.0f;
        }
        if (driving_state_ != 0u && sample.state != state_) {
            if (state_ == driving_state_) {
                wreck_ = 1.0f;
                events_ |= rumble_event::kWreck;
            } else if (sample.state == driving_state_) {
                events_ |= rumble_event::kRespawn;
            }
        }
        const bool wrecked = driving_state_ != 0u && sample.state != driving_state_;

        if (speed > kTeleportSpeed) {
            // Respawn or reset to track: no impact, restart the velocity history.
            events_ |= rumble_event::kTeleport;
            have_velocity_ = false;
            air_time_ = 0.0f;
        } else if (have_velocity_) {
            const float dvx = vx - vx_, dvy = vy - vy_, dvz = vz - vz_;
            const float change = std::sqrt(dvx * dvx + dvy * dvy + dvz * dvz);
            impulse_ = impulse_ * decay(kImpulseDecay) + change;
            const float level = std::clamp((impulse_ - kImpactFloor) / kImpactRange, 0.0f, 1.0f);
            if (level > 0.25f && impact_ < 0.25f) events_ |= rumble_event::kImpact;
            impact_ = std::max(impact_ * decay(0.12f), level);
            // Free fall: vertical acceleration near -g on consecutive frames.
            const float ay = dvy / dt;
            if (ay < -0.5f * kGravity && ay > -1.8f * kGravity) {
                air_time_ += dt;
            } else {
                // Touchdown spreads over a few frames (suspension first), so
                // the upward velocity change is summed over a short window.
                if (air_time_ > 0.25f) {
                    touchdown_window_ = 0.15f;
                    touchdown_air_ = air_time_;
                    touchdown_dv_ = 0.0f;
                    landed_ = false;
                }
                air_time_ = 0.0f;
            }
            if (touchdown_window_ > 0.0f) {
                touchdown_window_ -= dt;
                touchdown_dv_ += std::max(dvy, 0.0f);
                landing_ = std::max(landing_, std::clamp(touchdown_dv_ / 18.0f, 0.0f, 1.0f) *
                                                  std::clamp(touchdown_air_ / 0.8f, 0.4f, 1.0f));
                if (!landed_ && touchdown_dv_ > 3.0f) {
                    events_ |= rumble_event::kLanding;
                    landed_ = true;
                }
            }
        }
        if (speed <= kTeleportSpeed) {
            vx_ = vx; vy_ = vy; vz_ = vz;
            have_velocity_ = true;
        }

        const bool boosting = sample.boost_distance > boost_distance_ + 1e-4f && !wrecked;
        if (boosting != boosting_) events_ |= boosting ? rumble_event::kBoostStart : rumble_event::kBoostEnd;
        boosting_ = boosting;
        boost_ = boosting ? 1.0f - (1.0f - boost_) * decay(0.08f) : boost_ * decay(0.15f);
        wreck_ *= decay(0.3f);
        landing_ *= decay(0.15f);

        const bool airborne = air_time_ >= 0.15f;
        const float road = wrecked || airborne ? 0.0f : std::clamp(speed / kTopSpeed, 0.0f, 1.0f);
        road_ = road_ + (road - road_) * (1.0f - decay(0.1f));

        output_.low = clamp01(0.10f * road_ + 0.18f * boost_ + impact_ + 0.7f * landing_ + wreck_);
        output_.high = clamp01(0.06f * road_ + 0.32f * boost_ + 0.55f * impact_ + 0.25f * landing_ + 0.6f * wreck_);
        output_.right_trigger = clamp01(0.6f * boost_ + 0.3f * impact_);
        output_.left_trigger = clamp01(0.5f * impact_ + 0.5f * wreck_);
        remember(sample);
        return output_;
    }

    [[nodiscard]] unsigned events() const { return events_; }
    [[nodiscard]] float impact() const { return impact_; }
    [[nodiscard]] bool boosting() const { return boosting_; }

private:
    // Decayed envelopes end at exactly zero, so a finished effect is idle.
    static float clamp01(float value) { return value < 1.0f / 256.0f ? 0.0f : std::min(value, 1.0f); }
    void remember(const VehicleSample &sample) {
        time_ = sample.time;
        x_ = sample.x; y_ = sample.y; z_ = sample.z;
        state_ = sample.state;
        boost_distance_ = sample.boost_distance;
        have_position_ = true;
    }
    void reset() { *this = RumbleModel{}; }

    std::uint32_t vehicle_{}, state_{}, driving_state_{};
    double time_{};
    float x_{}, y_{}, z_{}, vx_{}, vy_{}, vz_{};
    bool have_position_{}, have_velocity_{}, boosting_{}, landed_{};
    float boost_distance_{}, moving_time_{}, fast_time_{}, air_time_{};
    float touchdown_window_{}, touchdown_air_{}, touchdown_dv_{};
    float impulse_{}, impact_{}, landing_{}, wreck_{}, boost_{}, road_{};
    RumbleOutput output_{};
    unsigned events_{};
};

} // namespace motorstorm
