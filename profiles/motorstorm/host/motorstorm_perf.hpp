#pragma once

// Lightweight, opt-in wall-clock profiler for the MotorStorm host path.
//
// PSPRECOMP_MOTORSTORM_PROFILE=1 enables section timers; the totals are printed
// once at shutdown.  Timers are cheap but not free, so they stay disabled during
// normal play and tests.  The guest execution remainder is derived from the
// total run wall time, which the bootstrap reports alongside these sections.

#include <array>
#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

namespace motorstorm::perf {

enum Slot : int {
    kGeDecode = 0, // PRIM vertex fetching/decoding
    kGeSubmit,     // submit_gpu_primitive: matrices, texture lookup, gpu_submit
    kGeConvert,    // matrix composition + primitive expansion inside submit
    kTexture,      // texture state hashing, content hashing and upload
    kGpuPrepare,   // surface/texture resolution and vertex staging inside gpu_submit
    kGpuRecord,    // D3D12 command-list recording for one draw
    kGpuSync,      // explicit gpu_sync fences/readbacks
    kGpuFence,     // command-list execute + fence wait inside gpu_sync
    kGpuReadback,  // packed-pixel readback into guest memory inside gpu_sync
    kPresent,      // native window presentation
    kAudioWait,    // audio_submit queued-PCM backpressure
    kSlotCount,
};

inline std::array<std::uint64_t, kSlotCount> &ticks() noexcept {
    static std::array<std::uint64_t, kSlotCount> value{};
    return value;
}

// Read once at load; all profiled code runs after static initialization.
inline bool g_enabled = [] {
    const char *text = std::getenv("PSPRECOMP_MOTORSTORM_PROFILE");
    return text != nullptr && *text != '\0' && *text != '0';
}();

// INI defaults are applied after static initialization, before guest execution.
inline void configure() noexcept {
    const char *text = std::getenv("PSPRECOMP_MOTORSTORM_PROFILE");
    g_enabled = text != nullptr && *text != '\0' && *text != '0';
}

inline bool enabled() noexcept { return g_enabled; }

inline std::uint64_t now_ns() noexcept {
    return static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now().time_since_epoch())
            .count());
}

struct Scope {
    int slot;
    std::uint64_t start;
    explicit Scope(int s) noexcept : slot(s), start(s >= 0 && enabled() ? now_ns() : 0u) {}
    ~Scope() noexcept {
        if (start != 0u && slot >= 0) ticks()[slot] += now_ns() - start;
    }
};

// Prints the breakdown to stderr and returns it (empty when profiling is off)
// so the caller can also write it to the log.
inline std::string report(double wall_seconds) {
    if (!enabled()) return {};
    const auto ms = [](std::uint64_t ns) { return static_cast<double>(ns) / 1.0e6; };
    const auto &t = ticks();
    const double sections = ms(t[kGeDecode]) + ms(t[kGeSubmit]) + ms(t[kGpuSync]) + ms(t[kPresent]) +
                            ms(t[kAudioWait]);
    char line[512]{};
    std::snprintf(line, sizeof(line),
                  "[PROFILE] wall_ms=%.1f ge_decode_ms=%.1f ge_convert_ms=%.1f texture_ms=%.1f "
                  "gpu_prepare_ms=%.1f gpu_record_ms=%.1f ge_submit_ms=%.1f gpu_sync_ms=%.1f gpu_fence_ms=%.1f "
                  "gpu_readback_ms=%.1f present_ms=%.1f audio_wait_ms=%.1f sections_ms=%.1f other_ms=%.1f",
                  wall_seconds * 1000.0, ms(t[kGeDecode]), ms(t[kGeConvert]), ms(t[kTexture]),
                  ms(t[kGpuPrepare]), ms(t[kGpuRecord]), ms(t[kGeSubmit]), ms(t[kGpuSync]), ms(t[kGpuFence]),
                  ms(t[kGpuReadback]), ms(t[kPresent]), ms(t[kAudioWait]), sections,
                  wall_seconds * 1000.0 - sections);
    std::fwrite(line, 1, std::strlen(line), stderr);
    std::fputc('\n', stderr);
    std::fflush(stderr);
    return std::string(line + std::strlen("[PROFILE] "));
}

// ---------------------------------------------------------------------------
// Race benchmark window
// ---------------------------------------------------------------------------
//
// PSPRECOMP_MOTORSTORM_BENCH_START_US and _END_US select a guest-time window
// and PSPRECOMP_MOTORSTORM_BENCH_OUT names the report file.  bench_frame() is
// called once per displayed frame: the first frame at or after the start
// boundary opens the window, the first frame at or after the end boundary
// closes it, writes the report and asks the caller to stop the run.
//
// With an identical input script the window always covers the same guest work,
// so frames and GE submissions stay comparable across builds while wall time,
// guest_s/wall_s and the section deltas show the performance change.  Audio
// must be off (PSPRECOMP_MOTORSTORM_AUDIO=0); audio backpressure deliberately
// paces the run to real time and would hide throughput changes.

struct BenchWindow {
    bool enabled{};
    bool started{};
    bool finished{};
    std::uint64_t start_us{};
    std::uint64_t end_us{};
    std::string name;
    std::string output;
    std::uint64_t start_wall_ns{};
    std::uint64_t start_us_actual{};
    std::uint64_t start_frame{};
    std::uint64_t start_submissions{};
    std::uint64_t start_audio_underruns{}, start_audio_device_dry{};
    std::array<std::uint64_t, kSlotCount> start_ticks{};
    std::uint64_t previous_frame_ns{};
    std::vector<std::uint64_t> frame_intervals_ns;
};

inline BenchWindow &bench_window() {
    static BenchWindow window = [] {
        BenchWindow value;
        const char *start = std::getenv("PSPRECOMP_MOTORSTORM_BENCH_START_US");
        const char *end = std::getenv("PSPRECOMP_MOTORSTORM_BENCH_END_US");
        const char *out = std::getenv("PSPRECOMP_MOTORSTORM_BENCH_OUT");
        value.start_us = start != nullptr ? std::strtoull(start, nullptr, 0) : 0u;
        value.end_us = end != nullptr ? std::strtoull(end, nullptr, 0) : 0u;
        value.output = out != nullptr ? out : "";
        value.enabled = value.end_us > value.start_us && !value.output.empty();
        if (value.enabled) {
            const std::size_t slash = value.output.find_last_of("/\\");
            value.name = slash == std::string::npos ? value.output : value.output.substr(slash + 1u);
            const std::size_t dot = value.name.find_last_of('.');
            if (dot != std::string::npos) value.name.erase(dot);
        }
        return value;
    }();
    return window;
}

// Returns true when the window just closed: the caller must stop the guest run.
inline bool bench_frame(std::uint64_t guest_us, std::uint64_t frames, std::uint64_t submissions,
                        std::uint64_t audio_underruns = 0u, std::uint64_t audio_device_dry = 0u) {
    BenchWindow &window = bench_window();
    if (!window.enabled || window.finished) return false;
    if (!window.started) {
        if (guest_us < window.start_us) return false;
        window.started = true;
        window.start_wall_ns = now_ns();
        window.start_us_actual = guest_us;
        window.start_frame = frames;
        window.start_submissions = submissions;
        window.start_audio_underruns = audio_underruns;
        window.start_audio_device_dry = audio_device_dry;
        window.start_ticks = ticks();
        window.previous_frame_ns = window.start_wall_ns;
        return false;
    }
    const auto frame_now = now_ns();
    window.frame_intervals_ns.push_back(frame_now - window.previous_frame_ns);
    window.previous_frame_ns = frame_now;
    if (guest_us < window.end_us) return false;
    window.finished = true;

    const double wall_seconds = static_cast<double>(now_ns() - window.start_wall_ns) / 1.0e9;
    const std::uint64_t guest_us_span = guest_us - window.start_us_actual;
    const std::uint64_t frame_span = frames - window.start_frame;
    const std::uint64_t submission_span = submissions - window.start_submissions;
    const double guest_seconds = static_cast<double>(guest_us_span) / 1.0e6;
    const auto ms = [](std::uint64_t ns) { return static_cast<double>(ns) / 1.0e6; };
    std::array<double, kSlotCount> section_ms{};
    for (int slot = 0; slot < kSlotCount; ++slot)
        section_ms[slot] = ms(ticks()[slot] - window.start_ticks[slot]);
    const double sections = section_ms[kGeDecode] + section_ms[kGeSubmit] + section_ms[kGpuSync] +
                            section_ms[kPresent] + section_ms[kAudioWait];
    const double other = static_cast<double>(wall_seconds) * 1000.0 - sections;

    std::ofstream report(window.output, std::ios::trunc);
    const auto field = [&](const char *key, auto value) {
        report << key << '=' << value << '\n';
    };
    report << "# MotorStorm race benchmark window\n";
    field("name", window.name);
    field("start_us", window.start_us_actual);
    field("end_us", guest_us);
    field("start_frame", window.start_frame);
    field("end_frame", frames);
    field("frames", frame_span);
    field("ge_submissions", submission_span);
    field("wall_ms", static_cast<std::int64_t>(wall_seconds * 1000.0 + 0.5));
    field("guest_ms", guest_us_span);
    field("guest_per_wall", guest_seconds / wall_seconds);
    field("fps", static_cast<double>(frame_span) / guest_seconds);
    field("wall_fps", static_cast<double>(frame_span) / wall_seconds);
    field("audio_underruns", audio_underruns - window.start_audio_underruns);
    field("audio_device_dry", audio_device_dry - window.start_audio_device_dry);
    std::sort(window.frame_intervals_ns.begin(), window.frame_intervals_ns.end());
    const auto percentile = [&](double fraction) {
        const auto &samples = window.frame_intervals_ns;
        const auto index = std::min(samples.size() - 1, static_cast<std::size_t>(fraction * samples.size()));
        return ms(samples[index]);
    };
    field("frame_p50_ms", percentile(0.50));
    field("frame_p95_ms", percentile(0.95));
    field("frame_p99_ms", percentile(0.99));
    field("frame_max_ms", ms(window.frame_intervals_ns.back()));
    field("ge_decode_ms", section_ms[kGeDecode]);
    field("ge_convert_ms", section_ms[kGeConvert]);
    field("texture_ms", section_ms[kTexture]);
    field("gpu_prepare_ms", section_ms[kGpuPrepare]);
    field("gpu_record_ms", section_ms[kGpuRecord]);
    field("ge_submit_ms", section_ms[kGeSubmit]);
    field("gpu_sync_ms", section_ms[kGpuSync]);
    field("gpu_fence_ms", section_ms[kGpuFence]);
    field("gpu_readback_ms", section_ms[kGpuReadback]);
    field("present_ms", section_ms[kPresent]);
    field("audio_wait_ms", section_ms[kAudioWait]);
    field("sections_ms", sections);
    field("other_ms", other);
    report << "[BENCH] name=" << window.name << " frames=" << frame_span
           << " ge=" << submission_span << " guest_ms=" << guest_us_span
           << " wall_ms=" << static_cast<std::int64_t>(wall_seconds * 1000.0 + 0.5)
           << " guest_per_wall=" << (guest_seconds / wall_seconds)
           << " sections_ms=" << sections << " other_ms=" << other << '\n';
    report.close();

    char line[512]{};
    std::snprintf(line, sizeof(line),
                  "[BENCH] name=%s frames=%llu ge=%llu guest_ms=%llu wall_ms=%lld "
                  "guest_per_wall=%.3f sections_ms=%.1f other_ms=%.1f\n",
                  window.name.c_str(), static_cast<unsigned long long>(frame_span),
                  static_cast<unsigned long long>(submission_span),
                  static_cast<unsigned long long>(guest_us_span),
                  static_cast<long long>(wall_seconds * 1000.0 + 0.5),
                  guest_seconds / wall_seconds, sections, other);
    std::fwrite(line, 1, std::strlen(line), stderr);
    std::fflush(stderr);
    return true;
}

} // namespace motorstorm::perf
