#include "android_platform.hpp"
#include "motorstorm_window.hpp"
#include "motorstorm_audio.hpp"
#include "motorstorm_audio_ring.hpp"
#include "motorstorm_controller.hpp"
#include "motorstorm_pacing.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_hle.hpp"
#include "motorstorm_mobile.hpp"
#include <SDL3/SDL.h>
#if defined(__ANDROID__)
#include <jni.h>
#endif
#include <algorithm>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <memory>
#include <mutex>
#include <thread>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <time.h>
#include <dlfcn.h>
#include <unistd.h>

namespace motorstorm {
namespace {
SDL_Window *display{};
std::atomic<bool> stopped{}, paused{};
std::mutex input_mutex, audio_mutex;
std::condition_variable pause_cv;
PadInput live;
std::uint32_t pressed{};
std::unordered_map<SDL_JoystickID,SDL_Gamepad *> pads;
std::unordered_map<SDL_FingerID,SDL_TouchFingerEvent> fingers;
SDL_AudioStream *audio_stream{};
// Guest PCM waits here; the SDL callback (audio thread) drains it, declicking
// underruns and easing consumption when it runs low. See motorstorm_audio_ring.hpp.
std::unique_ptr<AudioRing> audio_ring;
AudioReport audio_stats;
std::atomic<std::uint64_t> blocked_us{};
AudioPacingReserve reserve;
std::uint32_t sample_rate{44100};
// PCM queued ahead of the device, as on Windows WASAPI (12288 frames, 0.28 s).
// The guest delivers audio in uneven bursts; a 0.1 s queue ran dry often.
std::uint32_t queue_frames{12288};
std::uint64_t last_open_attempt_us{};
std::FILE *capture{};
std::uint64_t capture_bytes{};
void capture_header(){
    if(!capture)return;
    const auto put32=[](std::uint8_t *at,std::uint32_t value){std::memcpy(at,&value,4);};
    const auto put16=[](std::uint8_t *at,std::uint16_t value){std::memcpy(at,&value,2);};
    std::uint8_t header[44]{};
    std::memcpy(header,"RIFF",4);std::memcpy(header+8,"WAVEfmt ",8);std::memcpy(header+36,"data",4);
    put32(header+4,static_cast<std::uint32_t>(36+capture_bytes));put32(header+16,16);put16(header+20,1);put16(header+22,2);
    put32(header+24,sample_rate);put32(header+28,sample_rate*4);put16(header+32,4);put16(header+34,16);
    put32(header+40,static_cast<std::uint32_t>(capture_bytes));
    std::fseek(capture,0,SEEK_SET);std::fwrite(header,1,sizeof(header),capture);std::fseek(capture,0,SEEK_END);
}
std::atomic<std::uint64_t> back_until_us{};
bool enabled(const char *key,bool fallback=true){const char *v=std::getenv(key);return v?std::string(v)!="0"&&std::string(v)!="false":fallback;}
}
std::uint64_t host_time_us() noexcept {
    timespec now{};clock_gettime(CLOCK_MONOTONIC,&now);return static_cast<std::uint64_t>(now.tv_sec)*1000000+now.tv_nsec/1000;
}
void host_sleep_us(std::uint64_t us) noexcept { timespec delay{static_cast<time_t>(us/1000000),static_cast<long>((us%1000000)*1000)};while(nanosleep(&delay,&delay)&&errno==EINTR){} }
void host_sleep_until_us(std::uint64_t deadline) noexcept { timespec until{static_cast<time_t>(deadline/1000000),static_cast<long>((deadline%1000000)*1000)};while(clock_nanosleep(CLOCK_MONOTONIC,TIMER_ABSTIME,&until,nullptr)==EINTR){} }
// Android performance hints (ADPF, API 33+). The guest thread works in a burst
// each frame and then sleeps or waits for the GPU, so the governor sees a
// mostly idle thread and keeps its core slow. Reporting each frame's work
// against three quarters of the frame time lets it raise the clock first.
// PSPRECOMP_MOTORSTORM_PERF_HINT=0 turns it off for A/B runs.
void host_report_frame_work(std::uint64_t work_us,std::uint64_t frame_us) noexcept {
    using GetManager=void*(*)();
    using CreateSession=void*(*)(void*,const std::int32_t*,std::size_t,std::int64_t);
    using Report=int(*)(void*,std::int64_t);
    using UpdateTarget=int(*)(void*,std::int64_t);
    static bool opened{};
    static void *session{};
    static Report report{};
    static UpdateTarget update{};
    static std::uint64_t target_frame_us{};
    if(!opened){
        opened=true;
        if(!enabled("PSPRECOMP_MOTORSTORM_PERF_HINT")){log_line("ANDROID","performance hint off (PSPRECOMP_MOTORSTORM_PERF_HINT=0)");return;}
        void *library=dlopen("libandroid.so",RTLD_NOW|RTLD_LOCAL);
        const auto manager=library?reinterpret_cast<GetManager>(dlsym(library,"APerformanceHint_getManager")):nullptr;
        const auto create=library?reinterpret_cast<CreateSession>(dlsym(library,"APerformanceHint_createSession")):nullptr;
        report=library?reinterpret_cast<Report>(dlsym(library,"APerformanceHint_reportActualWorkDuration")):nullptr;
        update=library?reinterpret_cast<UpdateTarget>(dlsym(library,"APerformanceHint_updateTargetWorkDuration")):nullptr;
        void *hints=manager&&create&&report?manager():nullptr;
        const std::int32_t thread=static_cast<std::int32_t>(gettid());
        target_frame_us=frame_us;
        session=hints?create(hints,&thread,1,static_cast<std::int64_t>(frame_us)*750):nullptr;
        log_line("ANDROID",std::string("performance hint ")+(session?"on":"unavailable")+" for the guest thread, target "+
                 std::to_string(frame_us*3/4)+" us of work a frame");
    }
    if(!session||work_us==0)return;
    if(frame_us!=target_frame_us&&update){target_frame_us=frame_us;update(session,static_cast<std::int64_t>(frame_us)*750);}
    report(session,static_cast<std::int64_t>(work_us)*1000);
}
bool window_enabled(){return enabled("PSPRECOMP_MOTORSTORM_WINDOW");}
void window_start(){if(!display)display=SDL_CreateWindow("MotorStorm: Arctic Edge",960,544,SDL_WINDOW_FULLSCREEN);if(!display)throw std::runtime_error(SDL_GetError());}
void window_set_fullscreen(bool value){if(display)SDL_SetWindowFullscreen(display,value);}
bool window_fullscreen(){return true;}
bool window_close_requested(){return stopped;}
static std::string fmt1(double val){char buf[32];std::snprintf(buf,sizeof(buf),"%.1f",val);return buf;}
static std::string fmt2(double val){char buf[32];std::snprintf(buf,sizeof(buf),"%.2f",val);return buf;}

struct PerfTracker {
    std::mutex mutex;
    std::uint64_t total_frames{0};
    std::uint64_t total_late_frames{0};
    std::uint64_t total_stutters{0};
    std::uint64_t session_start_us{0};

    // Frame time histogram: 0 to 127 ms in 1 ms steps (bucket 127 is >= 127 ms)
    std::uint32_t histogram[128]{};

    // Window tracking (2.0s windows)
    std::uint64_t window_start_us{0};
    std::uint64_t window_frames{0};
    std::uint64_t window_late_frames{0};
    std::uint64_t window_stutters{0};
    double window_sum_ms{0.0};
    double window_max_ms{0.0};
    double window_min_ms{9999.0};
    double window_gpu_sum_ms{0.0};
    std::uint64_t window_gpu_samples{0};

    // Cumulative causes across window
    double window_cause_pipeline_ms{0.0};
    double window_cause_readback_ms{0.0};
    double window_cause_audio_ms{0.0};
    double window_cause_present_ms{0.0};
    double window_cause_cpu_ms{0.0};
    std::uint64_t window_gpu_overload_frames{0};

    // Lifetime metrics
    double total_pipeline_compile_ms{0.0};
    std::uint64_t total_pipelines_created{0};
    double total_readback_wait_ms{0.0};
    std::uint64_t total_readback_waits{0};
    double worst_stutter_ms{0.0};
    std::uint64_t worst_stutter_frame{0};
    std::string worst_stutter_cause;

    GpuReport prev_report{};
    std::uint64_t prev_audio_blocked_us{0};
    std::uint64_t last_stutter_log_us{0};
    bool initialized{false};

    void on_resume() {
        std::lock_guard lock(mutex);
        window_start_us = host_time_us();
        initialized = false;
    }

    void record_frame(double flip_interval_ms, double present_cost_ms, const GpuReport &report,
                      uint64_t audio_blocked_us, int target_fps) {
        std::lock_guard lock(mutex);
        const double budget_ms = frame_budget_ms(target_fps);
        const double late_threshold_ms = budget_ms * 1.15;
        const double stutter_threshold_ms = budget_ms * 1.45;
        const uint64_t now = host_time_us();

        if (!initialized || flip_interval_ms <= 0.0) {
            initialized = true;
            if (!session_start_us) session_start_us = now;
            window_start_us = now;
            prev_report = report;
            prev_audio_blocked_us = audio_blocked_us;
            return;
        }

        ++total_frames;
        ++window_frames;
        window_sum_ms += flip_interval_ms;
        if (flip_interval_ms > window_max_ms) window_max_ms = flip_interval_ms;
        if (flip_interval_ms < window_min_ms) window_min_ms = flip_interval_ms;

        const int h_idx = std::clamp(static_cast<int>(flip_interval_ms), 0, 127);
        histogram[h_idx]++;

        const bool is_late = (flip_interval_ms > late_threshold_ms);
        const bool is_stutter = (flip_interval_ms > stutter_threshold_ms);
        if (is_late) {
            ++total_late_frames;
            ++window_late_frames;
        }
        if (is_stutter) {
            ++total_stutters;
            ++window_stutters;
        }

        // Deltas since last frame
        const uint64_t delta_pipelines = report.pipelines_created >= prev_report.pipelines_created ?
            (report.pipelines_created - prev_report.pipelines_created) : 0;
        const double delta_pipeline_ms = (report.pipeline_create_ns >= prev_report.pipeline_create_ns ?
            (report.pipeline_create_ns - prev_report.pipeline_create_ns) : 0) / 1'000'000.0;
        total_pipeline_compile_ms += delta_pipeline_ms;
        total_pipelines_created += delta_pipelines;
        window_cause_pipeline_ms += delta_pipeline_ms;

        uint64_t curr_pub_waits = 0, curr_pub_wait_ns = 0;
        uint64_t prev_pub_waits = 0, prev_pub_wait_ns = 0;
        for (int i = 0; i < 6; ++i) {
            curr_pub_waits += report.publish_waits[i];
            curr_pub_wait_ns += report.publish_wait_ns[i];
            prev_pub_waits += prev_report.publish_waits[i];
            prev_pub_wait_ns += prev_report.publish_wait_ns[i];
        }
        const uint64_t delta_pub_waits = curr_pub_waits >= prev_pub_waits ? curr_pub_waits - prev_pub_waits : 0;
        const double delta_pub_wait_ms = (curr_pub_wait_ns >= prev_pub_wait_ns ?
            curr_pub_wait_ns - prev_pub_wait_ns : 0) / 1'000'000.0;
        total_readback_wait_ms += delta_pub_wait_ms;
        total_readback_waits += delta_pub_waits;
        window_cause_readback_ms += delta_pub_wait_ms;

        const double delta_audio_blocked_ms = (audio_blocked_us >= prev_audio_blocked_us ?
            (audio_blocked_us - prev_audio_blocked_us) : 0) / 1000.0;
        window_cause_audio_ms += delta_audio_blocked_ms;

        window_cause_present_ms += present_cost_ms;

        const double gpu_ms = report.last_gpu_ms;
        if (gpu_ms >= 0.0) {
            window_gpu_sum_ms += gpu_ms;
            ++window_gpu_samples;
            if (gpu_ms > budget_ms) ++window_gpu_overload_frames;
        }

        const uint64_t delta_sw_draws = report.software_draws >= prev_report.software_draws ?
            (report.software_draws - prev_report.software_draws) : 0;

        const double cpu_work_ms = std::max(0.0, flip_interval_ms - delta_pipeline_ms - delta_pub_wait_ms
                                            - delta_audio_blocked_ms - present_cost_ms);
        window_cause_cpu_ms += cpu_work_ms;

        // Diagnose root causes for this stutter/drop
        if (is_stutter) {
            std::string primary;
            double max_contrib = 0.0;
            std::string causes;

            if (delta_pipeline_ms >= 2.0) {
                causes += "pipeline_compile=" + fmt1(delta_pipeline_ms) + "ms (" + std::to_string(delta_pipelines) + " PSO), ";
                if (delta_pipeline_ms > max_contrib) { max_contrib = delta_pipeline_ms; primary = "Shader/pipeline compile (" + fmt1(delta_pipeline_ms) + "ms)"; }
            }
            if (gpu_ms > budget_ms) {
                const double excess = gpu_ms - budget_ms;
                causes += "gpu_overload=" + fmt1(gpu_ms) + "ms (scale=" + fmt2(report.render_scale) + "), ";
                if (excess > max_contrib) { max_contrib = excess; primary = "GPU bottleneck (" + fmt1(gpu_ms) + "ms > " + fmt1(budget_ms) + "ms)"; }
            }
            if (delta_pub_wait_ms >= 1.5) {
                causes += "vram_readback_wait=" + fmt1(delta_pub_wait_ms) + "ms (" + std::to_string(delta_pub_waits) + " waits), ";
                if (delta_pub_wait_ms > max_contrib) { max_contrib = delta_pub_wait_ms; primary = "VRAM readback wait (" + fmt1(delta_pub_wait_ms) + "ms)"; }
            }
            if (present_cost_ms >= 8.0) {
                causes += "presentation_wait=" + fmt1(present_cost_ms) + "ms, ";
                if (present_cost_ms > max_contrib) { max_contrib = present_cost_ms; primary = "Presentation/VSync wait (" + fmt1(present_cost_ms) + "ms)"; }
            }
            if (delta_audio_blocked_ms >= 3.0) {
                causes += "audio_stall=" + fmt1(delta_audio_blocked_ms) + "ms, ";
                if (delta_audio_blocked_ms > max_contrib) { max_contrib = delta_audio_blocked_ms; primary = "Audio backpressure (" + fmt1(delta_audio_blocked_ms) + "ms)"; }
            }
            if (delta_sw_draws > 0) {
                causes += "sw_draws=" + std::to_string(delta_sw_draws) + ", ";
            }
            if (cpu_work_ms > budget_ms * 1.1) {
                causes += "cpu_work=" + fmt1(cpu_work_ms) + "ms, ";
                const double excess = cpu_work_ms - budget_ms;
                if (excess > max_contrib) { max_contrib = excess; primary = "CPU work (" + fmt1(cpu_work_ms) + "ms)"; }
            }
            if (primary.empty()) {
                primary = "General delay (" + fmt1(flip_interval_ms) + "ms)";
            }
            if (causes.ends_with(", ")) causes.resize(causes.size() - 2);

            if (flip_interval_ms > worst_stutter_ms) {
                worst_stutter_ms = flip_interval_ms;
                worst_stutter_frame = total_frames;
                worst_stutter_cause = primary;
            }

            // Rate-limit individual stutter logs to at most 3 per second
            if (now - last_stutter_log_us >= 333'333ull) {
                last_stutter_log_us = now;
                log_line("PERF_STUTTER", "frame=" + std::to_string(total_frames) + " took=" + fmt1(flip_interval_ms) +
                         "ms (target=" + fmt1(budget_ms) + "ms, +" + fmt1(flip_interval_ms - budget_ms) +
                         "ms late) | primary: " + primary + " | breakdown: " + (causes.empty() ? "none" : causes));
            }
        }

        // Periodic window check (every 2.0 seconds)
        const uint64_t window_duration_us = now - window_start_us;
        if (window_duration_us >= 2'000'000ull && window_frames > 0) {
            const double duration_sec = static_cast<double>(window_duration_us) / 1'000'000.0;
            const double fps = static_cast<double>(window_frames) / duration_sec;
            const double avg_ms = window_sum_ms / window_frames;
            const double late_pct = (window_late_frames * 100.0) / window_frames;
            const double gpu_avg = window_gpu_samples > 0 ? (window_gpu_sum_ms / window_gpu_samples) : 0.0;
            const std::string timing_detail = " | frame=" + std::to_string(total_frames) +
                " host_unattributed_avg_ms=" + fmt1(window_cause_cpu_ms / window_frames) +
                " readback_ms=" + fmt1(window_cause_readback_ms) +
                " present_ms=" + fmt1(window_cause_present_ms) +
                " audio_wait_ms=" + fmt1(window_cause_audio_ms) +
                " compile_ms=" + fmt1(window_cause_pipeline_ms) +
                " gpu_avg_ms=" + fmt1(gpu_avg);
            // Keep trigger-level coherence counters in live logs, including
            // sessions stopped without a clean shutdown census.
            std::string coherence = "cumulative publishes(draw/sync/end/cpu/start/other)=";
            for (unsigned i = 0; i < report.publishes.size(); ++i)
                coherence += (i ? "/" : "") + std::to_string(report.publishes[i]);
            coherence += " wait_ms=";
            for (unsigned i = 0; i < report.publish_wait_ns.size(); ++i)
                coherence += (i ? "/" : "") + fmt1(report.publish_wait_ns[i] / 1'000'000.0);
            coherence += " pk_c=" + std::to_string(report.pack_color_dispatches) +
                         " pk_d=" + std::to_string(report.pack_depth_dispatches) +
                         " direct=" + std::to_string(report.direct_image_presents);
            coherence += " unrelated=" + std::to_string(report.unrelated_vram_accesses);
            coherence += " tail_gpu=" + std::to_string(report.feedback_tail_compositions);
            char sync_range[160];
            std::snprintf(sync_range, sizeof(sync_range), " texture_sync_last=0x%08X/%u target=0x%08X bpp=%u",
                          report.texture_sync_address, report.texture_sync_bytes,
                          report.texture_sync_target, report.texture_sync_bpp);
            coherence += sync_range;
            char cpu_range[96];
            std::snprintf(cpu_range, sizeof(cpu_range), " cpu_last=0x%08X/%llu racing=%u",
                          report.cpu_vram_address, static_cast<unsigned long long>(report.cpu_vram_bytes),
                          report.racing ? 1u : 0u);
            coherence += cpu_range;
            coherence += " query_prefetch=" + std::to_string(report.query_prefetches) +
                         " query_bytes=" + std::to_string(report.query_prefetch_bytes);
            coherence += " depth_readonly=" + std::to_string(report.readonly_depth_passes) +
                         " color_restore=" + std::to_string(report.color_only_restores) +
                         " depth_restore=" + std::to_string(report.depth_restores);
            log_line("VRAM_COHERENCE", coherence);
            log_line("TINY_QUERY_TOTAL", "count=" + std::to_string(report.tiny_query_count) +
                " bytes=" + std::to_string(report.tiny_query_bytes) +
                " waits=" + std::to_string(report.tiny_query_gpu_waits) +
                " wait_ms=" + fmt1(report.tiny_query_wait_ns / 1e6) +
                " avoided=" + std::to_string(report.full_publication_avoided) +
                " hits=" + std::to_string(report.tiny_query_cache_hits) +
                " verified=" + std::to_string(report.tiny_query_verified_values) +
                " mismatches=" + std::to_string(report.tiny_query_mismatches));

            std::string dominant_bottleneck = "None (smooth)";
            if (window_cause_pipeline_ms >= 15.0) {
                dominant_bottleneck = "Pipeline/shader compilation (" + fmt1(window_cause_pipeline_ms) + "ms total in 2s)";
            } else if (window_cause_readback_ms >= 15.0 && window_cause_readback_ms >= window_cause_cpu_ms &&
                       window_cause_readback_ms >= window_cause_present_ms) {
                dominant_bottleneck = "VRAM readback sync (" + fmt1(window_cause_readback_ms) + "ms total in 2s)";
            } else if (window_gpu_overload_frames >= window_frames / 3) {
                dominant_bottleneck = "GPU rendering (avg " + fmt1(gpu_avg) + "ms vs " + fmt1(budget_ms) + "ms budget, scale=" + fmt2(report.render_scale) + ")";
            } else if (window_cause_readback_ms >= 15.0) {
                dominant_bottleneck = "VRAM readback sync (" + fmt1(window_cause_readback_ms) + "ms total in 2s)";
            } else if (window_cause_audio_ms >= 15.0) {
                dominant_bottleneck = "Audio thread backpressure (" + fmt1(window_cause_audio_ms) + "ms total in 2s)";
            } else if (late_pct >= 25.0) {
                dominant_bottleneck = "CPU work (avg cpu " + fmt1(window_cause_cpu_ms / window_frames) + "ms)";
            }

            if (late_pct >= 25.0 || fps < target_fps * 0.75) {
                log_line("PERF_REGRESSION", "sustained drop to " + fmt1(fps) + " fps (target " + std::to_string(target_fps) +
                         " fps) | late=" + std::to_string(window_late_frames) + "/" + std::to_string(window_frames) +
                         " (" + fmt1(late_pct) + "%) | stutters=" + std::to_string(window_stutters) +
                         " | primary cause: " + dominant_bottleneck + timing_detail);
            } else {
                log_line("PERF", "fps=" + fmt1(fps) + " (avg=" + fmt1(avg_ms) + "ms, min=" + fmt1(window_min_ms) +
                         "ms, max=" + fmt1(window_max_ms) + "ms) | late=" + std::to_string(window_late_frames) +
                         "/" + std::to_string(window_frames) + " (" + fmt1(late_pct) + "%) | gpu_avg=" +
                         fmt1(gpu_avg) + "ms (scale=" + fmt2(report.render_scale) + ") | stutters=" +
                         std::to_string(window_stutters) + timing_detail);
            }

            window_start_us = now;
            window_frames = 0;
            window_late_frames = 0;
            window_stutters = 0;
            window_sum_ms = 0.0;
            window_max_ms = 0.0;
            window_min_ms = 9999.0;
            window_gpu_sum_ms = 0.0;
            window_gpu_samples = 0;
            window_cause_pipeline_ms = 0.0;
            window_cause_readback_ms = 0.0;
            window_cause_audio_ms = 0.0;
            window_cause_present_ms = 0.0;
            window_cause_cpu_ms = 0.0;
            window_gpu_overload_frames = 0;
        }

        prev_report = report;
        prev_audio_blocked_us = audio_blocked_us;
    }

    void log_summary() {
        std::lock_guard lock(mutex);
        if (total_frames == 0) return;
        const uint64_t now = host_time_us();
        const double duration_sec = session_start_us ? static_cast<double>(now - session_start_us) / 1'000'000.0 : 0.0;
        const double avg_fps = duration_sec > 0.0 ? static_cast<double>(total_frames) / duration_sec : 0.0;
        const double late_pct = (total_late_frames * 100.0) / total_frames;

        const uint32_t p01_count = std::max(1u, static_cast<uint32_t>(total_frames / 100u));
        uint32_t accum = 0;
        double p99_frame_ms = 33.3;
        for (int i = 127; i >= 0; --i) {
            accum += histogram[i];
            if (accum >= p01_count) {
                p99_frame_ms = static_cast<double>(i);
                break;
            }
        }
        const double one_pct_low_fps = p99_frame_ms > 0.0 ? (1000.0 / p99_frame_ms) : 0.0;

        log_line("PERF_SUMMARY", "frames=" + std::to_string(total_frames) + " duration=" + fmt1(duration_sec) +
                 "s | avg_fps=" + fmt1(avg_fps) + " | 1%_low_fps=" + fmt1(one_pct_low_fps) +
                 " | late_frames=" + std::to_string(total_late_frames) + "/" + std::to_string(total_frames) +
                 " (" + fmt1(late_pct) + "%) | total_stutters=" + std::to_string(total_stutters) +
                 " | pipeline_compiles=" + fmt1(total_pipeline_compile_ms) + "ms (" + std::to_string(total_pipelines_created) + " PSOs)" +
                 " | vram_readback_waits=" + fmt1(total_readback_wait_ms) + "ms (" + std::to_string(total_readback_waits) + " waits)" +
                 (worst_stutter_ms > 0.0 ? (" | worst_stutter=" + fmt1(worst_stutter_ms) + "ms at frame " +
                  std::to_string(worst_stutter_frame) + " (" + worst_stutter_cause + ")") : ""));
        flush_log_file();
    }
};

static PerfTracker g_perf_tracker;
static std::uint64_t g_last_present_us{0};

void window_present(psprecomp::GuestMemory &memory,std::uint32_t fb,std::uint32_t stride,std::uint32_t format,std::uint32_t width,std::uint32_t height){
    android::pause_wait();
    static std::uint64_t count{}, previous{};
    static double last_present_cost_ms{0.0};
    const auto now=host_time_us();
    const double flip_interval_ms=g_last_present_us?static_cast<double>(now-g_last_present_us)/1000.0:0.0;
    const char *fps_env=std::getenv("PSPRECOMP_MOTORSTORM_FPS");
    const int target=fps_env&&std::strcmp(fps_env,"60")==0?60:30;
    const auto report=gpu_report();

    if(const char *bench=std::getenv("PSPRECOMP_MOTORSTORM_BENCH_OUT")) {
        if(now-previous>2000000) {
            log_line("ANDROID", "guest_us="+std::to_string(guest_time_us())+" flips="+std::to_string(count)+
                " gpu_draws="+std::to_string(report.draws));previous=now;
        }
        const int late=flip_interval_ms>frame_budget_ms(target)?1:0;
        std::string path=bench;
        const auto slash=path.find_last_of("/\\");
        if(path.ends_with(".txt"))path.resize(path.size()-4);
        path+="-frame-times.csv";
        static std::ofstream out(path,std::ios::trunc);
        static bool header=false;
        if(!header){out<<"flip_interval_ms,legacy_gpu_ms,render_scale,late\n";header=true;}
        out<<flip_interval_ms<<','<<report.last_gpu_ms<<','<<report.render_scale<<','<<late<<'\n';
        if((count&63u)==0u)out.flush();
        ++count;
    }

    g_perf_tracker.record_frame(flip_interval_ms, last_present_cost_ms, report,
                                motorstorm::audio_blocked_us(), target);

    g_last_present_us=now;
    const auto t_pres_start=host_time_us();
    if(!stopped && display)gpu_present(memory,display,fb,stride,format,width,height);
    last_present_cost_ms=static_cast<double>(host_time_us()-t_pres_start)/1000.0;
}
PadInput window_input(){std::lock_guard lock(input_mutex);PadInput result=live;result.buttons|=pressed;pressed=0;return result;}
std::uint32_t window_pad(){return window_input().buttons;}
void window_shutdown(){g_perf_tracker.log_summary();if(display){SDL_DestroyWindow(display);display=nullptr;}}
ControllerSettings controller_settings_from_environment(){ControllerSettings out;out.api="sdl";return out;}
void controller_start(){}
void controller_shutdown(){for(auto &[id,pad]:pads)SDL_CloseGamepad(pad);pads.clear();}
PadInput controller_input(){return window_input();}
void controller_set_rumble(const RumbleOutput &){} // Mobile rumble is pending; never leave motors running.
void controller_set_focus(bool focused){if(!focused){std::lock_guard lock(input_mutex);live={};pressed=0;}}
std::string controller_backend(){return "SDL3 Android";}
bool audio_enabled(){return enabled("PSPRECOMP_MOTORSTORM_AUDIO");}
// Audio thread: fills what the device asks for from the ring. Never waits for the guest.
void SDLCALL audio_pull(void *,SDL_AudioStream *stream,int additional,int){
    AudioRing *ring=audio_ring.get();
    if(!ring||additional<=0)return;
    std::int16_t block[1024*2];
    for(int frames=additional/4;frames>0;){
        const int count=std::min(frames,1024);
        ring->pull(block,static_cast<std::size_t>(count));
        SDL_PutAudioStreamData(stream,block,count*4);
        frames-=count;
    }
}
// Opens the SDL (AAudio/OpenSL ES) output stream. Some Adreno/AAudio devices
// refuse the first open at boot, so a failed open is retried from
// audio_submit at most once a second instead of leaving the game silent.
void audio_start(std::uint32_t rate){
    if(!audio_enabled())return;
    std::lock_guard lock(audio_mutex);if(audio_stream)return;
    if(rate)sample_rate=rate;
    const auto now=host_time_us();
    if(last_open_attempt_us&&now-last_open_attempt_us<1000000)return;
    last_open_attempt_us=now;
    if(const char *value=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_QUEUE");value&&*value)
        queue_frames=static_cast<std::uint32_t>(std::clamp<long long>(std::atoll(value),2048,32768));
    SDL_AudioSpec format{SDL_AUDIO_S16,2,static_cast<int>(sample_rate)};
    audio_ring=std::make_unique<AudioRing>(queue_frames,2048,3072);
    audio_stream=SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK,&format,audio_pull,nullptr);
    if(!audio_stream){audio_ring.reset();++audio_stats.errors;log_line("AUDIO",std::string("SDL audio open failed: ")+SDL_GetError()+"; retrying");return;}
    if(!SDL_ResumeAudioStreamDevice(audio_stream))log_line("AUDIO",std::string("SDL audio resume failed: ")+SDL_GetError());
    audio_stats.opened=true;audio_stats.playing=true;
    if(const char *path=std::getenv("PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE");path&&*path&&!capture){
        capture=std::fopen(path,"wb");capture_bytes=0;capture_header();
    }
    SDL_AudioSpec device{};int device_frames=0;
    SDL_GetAudioDeviceFormat(SDL_GetAudioStreamDevice(audio_stream),&device,&device_frames);
    const char *driver=SDL_GetCurrentAudioDriver();
    log_line("AUDIO","SDL audio opened driver="+std::string(driver?driver:"?")+
        " guest="+std::to_string(sample_rate)+"Hz stereo S16 device="+std::to_string(device.freq)+"Hz ch="+
        std::to_string(device.channels)+" period="+std::to_string(device_frames)+" queue="+std::to_string(queue_frames));
}
void audio_submit(const psprecomp::GuestMemory &memory,std::uint32_t at,std::uint32_t frames,std::uint32_t volume){
    if(!audio_enabled()||!frames||!at)return;android::pause_wait();
    if(!memory.contains(at,static_cast<std::size_t>(frames)*4))return;
    audio_start(sample_rate);
    std::vector<std::int16_t> pcm(static_cast<std::size_t>(frames)*2);
    memory.copy_out(at,std::span(reinterpret_cast<std::uint8_t *>(pcm.data()),pcm.size()*2));
    for(auto &value:pcm)value=static_cast<std::int16_t>(std::clamp<std::int64_t>(static_cast<std::int64_t>(value)*volume/0x8000,-32768,32767));
    // Backpressure: the guest waits while the queue is full, like WASAPI.
    const auto start=host_time_us();
    const auto deadline=start+2000000;
    for(;;){
        std::uint64_t room=0;
        {std::lock_guard lock(audio_mutex);if(!audio_stream||!audio_ring)return;room=audio_ring->free_frames();}
        if(room>=frames||stopped||paused)break;
        const auto now=host_time_us();
        if(now>=deadline){std::lock_guard lock(audio_mutex);audio_stats.dropped_frames+=frames;++audio_stats.errors;return;}
        const auto excess=frames-room;
        host_sleep_us(std::clamp<std::uint64_t>(excess*1000000ull/sample_rate,500u,5000u));
    }
    if(const auto waited=host_time_us()-start;waited>200)blocked_us.fetch_add(waited);
    std::lock_guard lock(audio_mutex);if(!audio_stream||!audio_ring)return;
    for(const auto value:pcm){
        const auto magnitude=static_cast<std::uint32_t>(std::abs(static_cast<int>(value)));
        audio_stats.peak=std::max(audio_stats.peak,magnitude);if(magnitude)++audio_stats.nonzero_samples;
    }
    if(const auto pushed=audio_ring->push(pcm.data(),frames);pushed<frames)audio_stats.dropped_frames+=frames-pushed;
    ++audio_stats.queued_buffers;audio_stats.queued_frames+=frames;
    if(capture&&capture_bytes<0x7FFF0000ull){std::fwrite(pcm.data(),2,pcm.size(),capture);capture_bytes+=pcm.size()*2;}
}
AudioReport audio_report(){
    std::lock_guard lock(audio_mutex);auto out=audio_stats;
    if(audio_stream&&audio_ring){
        out.buffered_frames=audio_ring->level();
        const auto ring=audio_ring->stats();
        out.underruns=ring.underruns;out.silent_frames=ring.silent_frames;
    }
    return out;
}
void audio_shutdown(){
    std::lock_guard lock(audio_mutex);
    if(audio_ring){const auto ring=audio_ring->stats();audio_stats.underruns=ring.underruns;audio_stats.silent_frames=ring.silent_frames;}
    // Destroying the stream waits for the callback, so the ring outlives it.
    if(audio_stream)SDL_DestroyAudioStream(audio_stream);audio_stream=nullptr;audio_ring.reset();audio_stats.playing=false;
    if(capture){capture_header();std::fclose(capture);capture=nullptr;}
    log_line("AUDIO","queued_buffers="+std::to_string(audio_stats.queued_buffers)+" queued_frames="+std::to_string(audio_stats.queued_frames)+
        " nonzero_samples="+std::to_string(audio_stats.nonzero_samples)+" peak="+std::to_string(audio_stats.peak)+
        " underruns="+std::to_string(audio_stats.underruns)+" dropped_frames="+std::to_string(audio_stats.dropped_frames)+
        " errors="+std::to_string(audio_stats.errors)+" api=sdl");
}
std::uint64_t audio_blocked_us() noexcept {return blocked_us;}
bool audio_frame_pacing_ready(){if(!audio_enabled())return true;auto report=audio_report();return reserve.ready(report.buffered_frames,queue_frames);}

namespace android {
std::atomic<int> skin_buttons{}, skin_axis_x{128}, skin_axis_y{128}, skin_analog{}, skin_generation{};
void request_stop(){stopped=true;paused=false;pause_cv.notify_all();}
// Pause the guest and audio as soon as SDL queues the background event: an
// event watch runs then, before SDL's pump blocks for the paused activity.
void enter_background(){
    if(paused.exchange(true))return;
    log_line("LIFECYCLE","Game entered background; syncing logs");
    g_perf_tracker.log_summary();
    flush_log_file();
    controller_set_focus(false);
    std::lock_guard lock(audio_mutex);if(audio_stream)SDL_PauseAudioStreamDevice(audio_stream);
}
void enter_foreground(){
    {std::lock_guard lock(audio_mutex);if(audio_stream)SDL_ResumeAudioStreamDevice(audio_stream);}
    {std::lock_guard lock(input_mutex);paused=false;}
    pause_cv.notify_all();
    g_perf_tracker.on_resume();
    g_last_present_us = 0;
}
bool SDLCALL lifecycle_watch(void *,SDL_Event *event){
    if(event->type==SDL_EVENT_WILL_ENTER_BACKGROUND)enter_background();
    else if(event->type==SDL_EVENT_DID_ENTER_FOREGROUND)enter_foreground();
    return true;
}
void install_lifecycle_watch(){SDL_AddEventWatch(lifecycle_watch,nullptr);}
void pause_wait(){if(paused){std::unique_lock lock(input_mutex);pause_cv.wait(lock,[]{return !paused||stopped;});}}
void pump_events(){
    SDL_Event event;
    while(SDL_PollEvent(&event)){
        if(event.type==SDL_EVENT_QUIT||event.type==SDL_EVENT_TERMINATING){
            log_line("LIFECYCLE","Game terminating or closing; syncing logs");
            g_perf_tracker.log_summary();
            flush_log_file();
            request_stop();
        }
        if(event.type==SDL_EVENT_WILL_ENTER_BACKGROUND)enter_background();
        if(event.type==SDL_EVENT_DID_ENTER_FOREGROUND)enter_foreground();
        // Back opens the game's pause menu (Start) instead of closing the game.
        if(event.type==SDL_EVENT_KEY_DOWN&&event.key.scancode==SDL_SCANCODE_AC_BACK)back_until_us=host_time_us()+150000;
        if(event.type==SDL_EVENT_GAMEPAD_ADDED){if(auto *pad=SDL_OpenGamepad(event.gdevice.which))pads[event.gdevice.which]=pad;}
        if(event.type==SDL_EVENT_GAMEPAD_REMOVED){auto it=pads.find(event.gdevice.which);if(it!=pads.end()){SDL_CloseGamepad(it->second);pads.erase(it);}}
        if(event.type==SDL_EVENT_FINGER_DOWN||event.type==SDL_EVENT_FINGER_MOTION)fingers[event.tfinger.fingerID]=event.tfinger;
        if(event.type==SDL_EVENT_FINGER_UP||event.type==SDL_EVENT_FINGER_CANCELED)fingers.erase(event.tfinger.fingerID);
        if(event.type==SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED&&display){int width{},height{};SDL_GetWindowSizeInPixels(display,&width,&height);gpu_set_output_size(width,height);}
    }
    PadInput next;
    if(!paused){
        for(auto &[id,pad]:pads){GamepadState sample;
            for(int button=0;button<=SDL_GAMEPAD_BUTTON_TOUCHPAD;++button)if(SDL_GetGamepadButton(pad,static_cast<SDL_GamepadButton>(button)))sample.buttons|=1u<<button;
            sample.left_x=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_LEFTX);sample.left_y=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_LEFTY);
            sample.left_trigger=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_LEFT_TRIGGER);sample.right_trigger=SDL_GetGamepadAxis(pad,SDL_GAMEPAD_AXIS_RIGHT_TRIGGER);
            next=merge_inputs(next,map_gamepad(sample));
        }
        PadInput touch;
        if(skin_generation.load()){
            touch.buttons=static_cast<std::uint32_t>(skin_buttons.load());
            if(skin_analog.load()){touch.x=static_cast<std::uint8_t>(skin_axis_x.load());touch.y=static_cast<std::uint8_t>(skin_axis_y.load());}
        } else {
            for(auto &[id,finger]:fingers){
                const auto hit=touch_sample(finger.x,finger.y);
                if(hit.axis_x>=0){touch.x=static_cast<std::uint8_t>(hit.axis_x);touch.y=static_cast<std::uint8_t>(hit.axis_y);}
                touch.buttons|=hit.buttons;
            }
        }
        next=merge_inputs(next,touch);
        if(host_time_us()<back_until_us.load())next.buttons|=0x0008u;
    } else fingers.clear();
    std::lock_guard lock(input_mutex);pressed|=next.buttons&~live.buttons;live=next;
}
}
}
#if defined(__ANDROID__)
extern "C" JNIEXPORT void JNICALL
Java_org_psprecomp_motorstorm_GameActivity_setTouch(JNIEnv *, jclass, jint buttons, jint axis_x, jint axis_y, jboolean analog) {
    motorstorm::android::skin_buttons.store(buttons);
    motorstorm::android::skin_axis_x.store(axis_x);
    motorstorm::android::skin_axis_y.store(axis_y);
    motorstorm::android::skin_analog.store(analog ? 1 : 0);
    motorstorm::android::skin_generation.store(1);
}
extern "C" JNIEXPORT void JNICALL
Java_org_psprecomp_motorstorm_GameActivity_flushLog(JNIEnv *, jclass) {
    motorstorm::flush_log_file();
}
#endif
