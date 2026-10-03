#pragma once

#include <algorithm>
#include <array>
#include <cstdint>
#include <span>

namespace motorstorm {

// Smooth only the boundary of an actual underrun. Normal PCM is bit-identical;
// no frames are removed, repeated or time-stretched to hide a slow guest.
class AudioRecoveryRamp {
public:
    void pcm(std::span<std::int16_t> samples, std::uint32_t rate, bool recovering) {
        const auto frames = samples.size() / 2u;
        if (!frames) return;
        if (recovering) {
            const auto fade = std::min<std::size_t>(frames, std::max(1u, rate / 200u));
            for (std::size_t i = 0u; i < fade; ++i)
                for (std::size_t channel = 0u; channel < 2u; ++channel)
                    samples[i * 2u + channel] = static_cast<std::int16_t>(
                        static_cast<std::int64_t>(samples[i * 2u + channel]) *
                        static_cast<std::int64_t>(i + 1u) / static_cast<std::int64_t>(fade));
        }
        last_ = {samples[(frames - 1u) * 2u], samples[(frames - 1u) * 2u + 1u]};
    }
    void silence(std::span<std::int16_t> samples, std::uint32_t rate) {
        std::fill(samples.begin(), samples.end(), 0);
        const auto frames = samples.size() / 2u;
        if (!frames) return;
        const auto fade = std::min<std::size_t>(frames, std::max(1u, rate / 200u));
        for (std::size_t i = 0u; i < fade; ++i)
            for (std::size_t channel = 0u; channel < 2u; ++channel)
                samples[i * 2u + channel] = static_cast<std::int16_t>(
                    static_cast<std::int64_t>(last_[channel]) *
                    static_cast<std::int64_t>(fade - i - 1u) / static_cast<std::int64_t>(fade));
        last_ = {};
    }
private:
    std::array<std::int16_t, 2> last_{};
};
} // namespace motorstorm
