#include "psprecomp/hle_audio_output2.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/runtime.hpp"

#include <cstdlib>
#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>
#include <string_view>
#include <unordered_map>

namespace psprecomp {
namespace {

// sceAudio SRC/Output2 error codes (PPSSPP ErrorCodes.h ground truth).
constexpr std::uint32_t kAudioErrorChannelNotReserved = 0x80260008u;
constexpr std::uint32_t kAudioErrorChannelBusy = 0x80260002u;
constexpr std::uint32_t kAudioErrorInvalidVolume = 0x8026000Bu;
constexpr std::uint32_t kAudioErrorSampleSizeNotAligned = 0x80260006u;
constexpr std::uint32_t kAudioErrorAlreadyReserved = 0x80268002u;
constexpr std::uint32_t kKernelErrorInvalidSize = 0x80000104u;
constexpr std::uint32_t kKernelErrorIllegalAddress = 0x800200D3u;

constexpr std::uint32_t kMinSamples = 17u;
constexpr std::uint32_t kMaxSamples = 4111u;

// sceAudioOutput2 owns two DMA descriptors (PPSSPP's AudioSRCChannel::Full()).
// The first submission after idle returns without blocking; a third while both
// are armed is refused with CHANNEL_BUSY rather than waiting for a slot.
constexpr std::size_t kOutput2QueueCapacity = 2u;

AudioOutput2State g_output2{};
AudioOutput2Config g_config{};
std::deque<std::uint64_t> g_completion_times;

void drain_completed_buffers() {
    if (g_config.clock==nullptr) return;
    const auto now=g_config.clock(g_config.clock_user);
    while(!g_completion_times.empty() && g_completion_times.front()<=now)
        g_completion_times.pop_front();
    g_output2.buffer_count=static_cast<std::uint32_t>(g_completion_times.size());
}

bool audio_trace_enabled() {
    static const bool enabled = std::getenv("PSPRECOMP_AUDIO_TRACE") != nullptr;
    return enabled;
}

constexpr std::uint64_t kAudioTraceLimit = 64u;

bool audio_trace_suppressed(const char *symbol) {
    static std::unordered_map<std::string, std::uint64_t> counts;
    auto &count = counts[symbol];
    if (++count <= kAudioTraceLimit) return false;
    if (count == kAudioTraceLimit + 1u) {
        std::cerr << "[AUDIO] " << symbol << " trace suppressed after " << kAudioTraceLimit
                  << " entries\n";
    }
    return true;
}

std::uint32_t audio_nid_for_symbol(const char *symbol) {
    const std::string_view name(symbol);
    if (name == "sceAudioOutput2Reserve") return 0x01562BA3u;
    if (name == "sceAudioOutput2Release") return 0x43196845u;
    if (name == "sceAudioOutput2ChangeLength") return 0x63F2889Cu;
    if (name == "sceAudioOutput2GetRestSample") return 0x647CEF33u;
    if (name == "sceAudioOutput2OutputBlocking") return 0x2D53F36Eu;
    return 0u;
}

void audio_trace(const char *symbol, const AllegrexContext &ctx, std::uint32_t result,
                 const std::string &detail = {}) {
    if (!audio_trace_enabled() || audio_trace_suppressed(symbol)) return;
    std::ostringstream out;
    out << "[AUDIO] thread=" << runtime_thread_uid()
        << " name=" << runtime_thread_name()
        << " lib=sceAudio nid=" << hex32(audio_nid_for_symbol(symbol))
        << " symbol=" << symbol
        << " ra=" << hex32(ctx.gpr[31])
        << " a0=" << hex32(ctx.gpr[4]) << " a1=" << hex32(ctx.gpr[5]);
    if (!detail.empty()) out << " " << detail;
    out << " result=" << hex32(result) << "\n";
    std::cerr << out.str();
}

void log_output2_state(const char *symbol, const AllegrexContext &ctx,
                       const std::string &detail = {}) {
    if (std::getenv("PSPRECOMP_AUDIO_DIAG") == nullptr) return;
    std::cerr << "[audio] " << symbol << " reserved=" << (g_output2.reserved ? 1 : 0)
              << " samples=" << g_output2.sample_count
              << " buffers=" << g_output2.buffer_count
              << " volume=" << g_output2.volume;
    if (!detail.empty()) std::cerr << " " << detail;
    std::cerr << "\n";
}

} // namespace

AudioOutput2State &audio_output2_state() noexcept { drain_completed_buffers(); return g_output2; }

void reset_audio_output2_state() noexcept {
    g_output2 = AudioOutput2State{};
    g_completion_times.clear();
}

void install_sce_audio_output2_hle(Runtime &runtime, AudioOutput2Config config) {
    g_config = config;
    g_completion_times.clear();

    // sceAudioOutput2Reserve(sampleCount) -> 0 on success.
    runtime.register_hle("sceAudio", 0x01562BA3u,
        [](Runtime &, AllegrexContext &ctx) {
            const std::uint32_t samples = ctx.gpr[4] & 0x7FFFFFFFu;
            if (samples < kMinSamples || samples > kMaxSamples) {
                ctx.set_gpr(2, kKernelErrorInvalidSize);
                audio_trace("sceAudioOutput2Reserve", ctx, kKernelErrorInvalidSize,
                            "samples=" + std::to_string(samples));
                return;
            }
            if (g_output2.reserved) {
                ctx.set_gpr(2, kAudioErrorAlreadyReserved);
                audio_trace("sceAudioOutput2Reserve", ctx, kAudioErrorAlreadyReserved,
                            "already reserved");
                return;
            }
            g_output2 = AudioOutput2State{};
            g_output2.reserved = true;
            g_output2.sample_count = samples;
            if (g_config.sample_rate == 0u) g_config.sample_rate = 44100u;
            audio_trace("sceAudioOutput2Reserve", ctx, 0u, "samples=" + std::to_string(samples));
            log_output2_state("output2-reserve", ctx);
            ctx.set_gpr(2, 0u);
        });

    // sceAudioOutput2Release() -> 0 on success.
    runtime.register_hle("sceAudio", 0x43196845u,
        [](Runtime &, AllegrexContext &ctx) {
            drain_completed_buffers();
            if (!g_output2.reserved) {
                ctx.set_gpr(2, kAudioErrorChannelNotReserved);
                audio_trace("sceAudioOutput2Release", ctx, kAudioErrorChannelNotReserved);
                return;
            }
            if (g_output2.buffer_count != 0u) {
                ctx.set_gpr(2, kAudioErrorAlreadyReserved);
                audio_trace("sceAudioOutput2Release", ctx, kAudioErrorAlreadyReserved, "output busy");
                return;
            }
            reset_audio_output2_state();
            audio_trace("sceAudioOutput2Release", ctx, 0u);
            ctx.set_gpr(2, 0u);
        });

    // sceAudioOutput2ChangeLength(sampleCount) -> 0 on success.
    runtime.register_hle("sceAudio", 0x63F2889Cu,
        [](Runtime &, AllegrexContext &ctx) {
            const std::uint32_t samples = ctx.gpr[4];
            if ((samples - kMinSamples) >= 0xFFFu) {
                ctx.set_gpr(2, kAudioErrorSampleSizeNotAligned);
                audio_trace("sceAudioOutput2ChangeLength", ctx, kAudioErrorSampleSizeNotAligned,
                            "samples=" + std::to_string(samples));
                return;
            }
            if (!g_output2.reserved) {
                ctx.set_gpr(2, kAudioErrorChannelNotReserved);
                audio_trace("sceAudioOutput2ChangeLength", ctx, kAudioErrorChannelNotReserved);
                return;
            }
            g_output2.sample_count = samples;
            audio_trace("sceAudioOutput2ChangeLength", ctx, 0u, "samples=" + std::to_string(samples));
            ctx.set_gpr(2, 0u);
        });

    // sceAudioOutput2GetRestSample() -> sample_count * buffers in flight.
    runtime.register_hle("sceAudio", 0x647CEF33u,
        [](Runtime &, AllegrexContext &ctx) {
            drain_completed_buffers();
            if (!g_output2.reserved) {
                ctx.set_gpr(2, kAudioErrorChannelNotReserved);
                audio_trace("sceAudioOutput2GetRestSample", ctx, kAudioErrorChannelNotReserved);
                return;
            }
            const std::uint32_t rest = g_output2.buffer_count * g_output2.sample_count;
            ctx.set_gpr(2, rest);
        });

    // sceAudioOutput2OutputBlocking(volume, dataPtr) -> 0 on success.
    //
    // The buffer contains `sample_count` stereo interleaved 16-bit frames.  The
    // channel owns two DMA descriptors: the first submission after idle returns
    // immediately, the next blocks until the oldest buffer completes, and a
    // third while both are armed is refused.  This is what makes a Release that
    // follows a submission observe an in-flight buffer and return "channel
    // busy" while preserving the reservation (PSP hardware behaviour; the
    // MotorStorm movie-to-game handoff depends on it).
    runtime.register_hle("sceAudio", 0x2D53F36Eu,
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t volume = ctx.gpr[4];
            const std::uint32_t buffer = ctx.gpr[5];
            if (volume > 0xFFFFFu) {
                ctx.set_gpr(2, kAudioErrorInvalidVolume);
                audio_trace("sceAudioOutput2OutputBlocking", ctx, kAudioErrorInvalidVolume,
                            "volume=" + hex32(volume));
                return;
            }
            if (!g_output2.reserved) {
                ctx.set_gpr(2, kAudioErrorChannelNotReserved);
                audio_trace("sceAudioOutput2OutputBlocking", ctx, kAudioErrorChannelNotReserved);
                return;
            }
            const std::size_t bytes = static_cast<std::size_t>(g_output2.sample_count) * 2u * 2u;
            if (buffer != 0u && !rt.memory().contains(buffer, bytes)) {
                ctx.set_gpr(2, kKernelErrorIllegalAddress);
                audio_trace("sceAudioOutput2OutputBlocking", ctx, kKernelErrorIllegalAddress,
                            "buffer=" + hex32(buffer));
                return;
            }
            g_output2.volume = volume;
            drain_completed_buffers();
            const std::uint32_t duration = static_cast<std::uint32_t>(
                static_cast<std::uint64_t>(g_output2.sample_count) * 1'000'000u /
                (g_config.sample_rate == 0u ? 44100u : g_config.sample_rate));
            std::uint32_t microseconds = 0;
            if (g_config.clock != nullptr) {
                const auto now = g_config.clock(g_config.clock_user);
                if (buffer != 0u) {
                    if (g_completion_times.size() >= kOutput2QueueCapacity) {
                        // Both descriptors are armed; the PSP refuses the third
                        // buffer outright instead of waiting for a slot.
                        ctx.set_gpr(2, kAudioErrorChannelBusy);
                        audio_trace("sceAudioOutput2OutputBlocking", ctx, kAudioErrorChannelBusy,
                                    "queue full");
                        return;
                    }
                    const auto previous =
                        g_completion_times.empty() ? now : g_completion_times.back();
                    g_completion_times.push_back(std::max(now, previous) + duration);
                    g_output2.buffer_count =
                        static_cast<std::uint32_t>(g_completion_times.size());
                    // The first buffer after idle starts the DMA and returns at
                    // once; later submissions wait for the oldest descriptor.
                    if (g_completion_times.size() > 1u)
                        microseconds = static_cast<std::uint32_t>(
                            g_completion_times.front() - now);
                } else if (!g_completion_times.empty()) {
                    // NULL drains the armed descriptors without arming another.
                    microseconds = static_cast<std::uint32_t>(
                        g_completion_times.front() - now);
                }
            } else {
                ++g_output2.buffer_count;
            }
            log_output2_state("output2-output", ctx,
                              "wait_us=" + std::to_string(microseconds));
            audio_trace("sceAudioOutput2OutputBlocking", ctx, 0u,
                        "buffer=" + hex32(buffer) + " volume=" + hex32(volume) +
                            " samples=" + std::to_string(g_output2.sample_count) +
                            " wait_us=" + std::to_string(microseconds));
            // Publish the PCM before the (possibly thread-switching) delay hook.
            if (g_config.sink != nullptr && buffer != 0u)
                g_config.sink(g_config.sink_user, rt, buffer, g_output2.sample_count);
            // Result of the blocking submission, written BEFORE the delay hook:
            // that hook parks the calling thread and switches `ctx` to another
            // guest thread, so any ctx write after it would corrupt the resumed
            // thread's registers (this exact bug resumed MotorStorm's main
            // thread with a clobbered $v0 and sent a NULL text-context pointer
            // into its renderer).
            ctx.set_gpr(2, 0u);
            if (g_config.delay != nullptr && microseconds != 0)
                g_config.delay(rt, ctx, microseconds, g_config.delay_user);
            // Without a guest clock there is no way to age descriptors, so the
            // submission is consumed immediately.
            if (g_config.clock == nullptr) --g_output2.buffer_count;
        });
}

} // namespace psprecomp
