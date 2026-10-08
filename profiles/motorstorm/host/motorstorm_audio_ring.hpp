#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <mutex>
#include <vector>

namespace motorstorm {

// Stereo S16 ring between the guest thread (producer) and the audio device
// callback (consumer). The consumer never fails or blocks on the producer:
//  * it keeps playing from the ring while it holds data;
//  * if the ring runs low it slows consumption a little (up to 5 %, linear
//    interpolation) so a short shortfall becomes a small pitch dip, not a gap;
//  * if the ring runs dry it fades the last sample out over about a
//    millisecond instead of cutting to silence, waits until a reserve has built
//    up again, and fades back in, so an underrun is a short silence without a click.
class AudioRing {
public:
    struct Stats {
        std::uint64_t underruns{}, resamples{}, played_frames{}, silent_frames{};
    };
    explicit AudioRing(std::size_t capacity_frames = 12288, std::size_t start_frames = 2048,
                       std::size_t low_frames = 3072)
        : capacity_(capacity_frames), start_(start_frames), low_(low_frames), data_(capacity_frames * 2u) {}

    void reset() {
        std::lock_guard lock(mutex_);
        head_ = size_ = 0u;
        frac_ = 0.0;
        starved_ = true;
        playing_ = false;
        fade_in_ = 0u;
        last_[0] = last_[1] = 0.0f;
    }
    [[nodiscard]] std::size_t capacity() const noexcept { return capacity_; }
    [[nodiscard]] std::size_t level() const {
        std::lock_guard lock(mutex_);
        return size_;
    }
    [[nodiscard]] std::size_t free_frames() const {
        std::lock_guard lock(mutex_);
        return capacity_ - size_;
    }
    [[nodiscard]] Stats stats() const {
        std::lock_guard lock(mutex_);
        return stats_;
    }
    // Appends up to `frames` interleaved stereo frames; returns how many fit.
    std::size_t push(const std::int16_t *stereo, std::size_t frames) {
        std::lock_guard lock(mutex_);
        const std::size_t count = std::min(frames, capacity_ - size_);
        for (std::size_t i = 0; i < count * 2u; ++i)
            data_[(head_ * 2u + size_ * 2u + i) % (capacity_ * 2u)] = stereo[i];
        size_ += count;
        return count;
    }
    // Fills exactly `frames` stereo frames.
    void pull(std::int16_t *out, std::size_t frames) {
        std::lock_guard lock(mutex_);
        for (std::size_t n = 0; n < frames; ++n) {
            if (starved_ && size_ >= start_) {
                starved_ = false;
                fade_in_ = kFade;
                frac_ = 0.0;
            }
            if (!starved_ && size_ < 2u) {
                starved_ = true;
                if (playing_) ++stats_.underruns;
            }
            float left, right;
            if (starved_) {
                // Decay the last sample instead of a hard cut.
                last_[0] *= kDecay;
                last_[1] *= kDecay;
                left = last_[0];
                right = last_[1];
                ++stats_.silent_frames;
            } else {
                // Below the low mark, consume up to 5 % slower.
                double ratio = 1.0;
                if (size_ < low_) {
                    ratio = 1.0 - 0.05 * static_cast<double>(low_ - size_) / static_cast<double>(low_);
                    ++stats_.resamples;
                }
                const auto at = [&](std::size_t frame, std::size_t channel) {
                    return static_cast<float>(data_[((head_ + frame) * 2u + channel) % (capacity_ * 2u)]);
                };
                const float f = static_cast<float>(frac_);
                left = at(0, 0) + (at(1, 0) - at(0, 0)) * f;
                right = at(0, 1) + (at(1, 1) - at(0, 1)) * f;
                frac_ += ratio;
                while (frac_ >= 1.0 && size_ > 1u) {
                    head_ = (head_ + 1u) % capacity_;
                    --size_;
                    frac_ -= 1.0;
                }
                if (frac_ >= 1.0) frac_ = 0.0;
                if (fade_in_ != 0u) {
                    const float gain = 1.0f - static_cast<float>(fade_in_) / static_cast<float>(kFade);
                    left *= gain;
                    right *= gain;
                    --fade_in_;
                }
                last_[0] = left;
                last_[1] = right;
                playing_ = true;
                ++stats_.played_frames;
            }
            out[n * 2u] = static_cast<std::int16_t>(std::clamp(left, -32768.0f, 32767.0f));
            out[n * 2u + 1u] = static_cast<std::int16_t>(std::clamp(right, -32768.0f, 32767.0f));
        }
    }

private:
    static constexpr std::uint32_t kFade = 256;
    static constexpr float kDecay = 0.97f;
    mutable std::mutex mutex_;
    std::size_t capacity_, start_, low_;
    std::vector<std::int16_t> data_;
    std::size_t head_{}, size_{};
    double frac_{};
    bool starved_{true}, playing_{};
    std::uint32_t fade_in_{};
    float last_[2]{};
    Stats stats_;
};

} // namespace motorstorm
