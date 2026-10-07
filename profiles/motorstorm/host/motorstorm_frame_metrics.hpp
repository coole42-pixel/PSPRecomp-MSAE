#pragma once

// Benchmark-only events retain the originating game frame. GPU timestamps and
// CLOCK_MONOTONIC display times are separate clock domains; do not subtract them.
#include <atomic>
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <mutex>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>

namespace motorstorm {
class FrameMetrics {
public:
    struct Metadata {
        std::uint64_t frame{}, guest_us{};
        std::uint32_t raster_half{};
        bool racing{};
    };
    FrameMetrics() {
        const char *output = std::getenv("PSPRECOMP_MOTORSTORM_BENCH_OUT");
        if (!output || !*output) return;
        std::string path(output);
        if (path.ends_with(".txt")) path.resize(path.size() - 4);
        stream_.open(path + "-gpu-frame-times.csv", std::ios::trunc);
        enabled_ = stream_.good();
        if (enabled_)
            stream_ << "frame_id,guest_us,event,start_ns,end_ns,raster_half,racing\n";
    }
    bool enabled() const noexcept { return enabled_; }
    void event(Metadata frame, const char *kind, std::uint64_t begin = 0, std::uint64_t end = 0) {
        if (!enabled_) return;
        std::lock_guard lock(mutex_);
        write(frame, kind, begin, end);
    }
    void request(std::uint32_t present_id, Metadata frame) {
        ++requests_;
        if (!enabled_) return;
        std::lock_guard lock(mutex_);
        pending_[present_id] = frame;
        write(frame, "present_request", 0, 0);
        // The display API only retains limited history. Retain bounded metadata
        // for mailbox drops rather than growing it throughout a thermal soak.
        if (pending_.size() > 512) {
            const auto oldest = pending_.begin();
            write(oldest->second, "display_unreported", 0, 0);
            pending_.erase(oldest);
        }
    }
    void displayed(std::uint32_t present_id, std::uint64_t actual_ns) {
        if (!enabled_) return;
        std::lock_guard lock(mutex_);
        const auto found = pending_.find(present_id);
        if (found == pending_.end()) return;
        if (actual_ns && displayed_times_.insert(actual_ns).second) {
            ++displayed_;
            write(found->second, "display", actual_ns, actual_ns);
        } else {
            write(found->second, "display_unreported", 0, 0);
        }
        pending_.erase(found);
    }
    void flush() {
        if (!enabled_) return;
        std::lock_guard lock(mutex_);
        stream_.flush();
    }
    std::uint64_t requests() const noexcept { return requests_.load(); }
    std::uint64_t displays() const noexcept { return displayed_.load(); }
    void snapshot(bool direct, std::uint64_t bytes) noexcept {
        if (direct) { ++direct_images_; image_bytes_ += bytes; }
        else buffer_bytes_ += bytes;
    }
    void converted() noexcept { ++conversions_; }
    std::uint64_t direct_images() const noexcept { return direct_images_.load(); }
    std::uint64_t image_bytes() const noexcept { return image_bytes_.load(); }
    std::uint64_t buffer_bytes() const noexcept { return buffer_bytes_.load(); }
    std::uint64_t conversions() const noexcept { return conversions_.load(); }
private:
    void write(Metadata frame, const char *kind, std::uint64_t begin, std::uint64_t end) {
        stream_ << frame.frame << ',' << frame.guest_us << ',' << kind << ',' << begin << ',' << end << ','
                << frame.raster_half << ',' << (frame.racing ? 1 : 0) << '\n';
        if ((++events_ & 31u) == 0u) stream_.flush();
    }
    bool enabled_{};
    std::mutex mutex_;
    std::ofstream stream_;
    std::map<std::uint32_t, Metadata> pending_;
    std::unordered_set<std::uint64_t> displayed_times_;
    std::atomic<std::uint64_t> requests_{}, displayed_{};
    std::atomic<std::uint64_t> direct_images_{}, image_bytes_{}, buffer_bytes_{}, conversions_{};
    std::uint64_t events_{};
};
} // namespace motorstorm
