#include "motorstorm_env.hpp"
#include "motorstorm_hle.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_audio.hpp"
#include "motorstorm_ge.hpp"
#include "motorstorm_arena.hpp"
#include "motorstorm_gpu.hpp"
#include "motorstorm_presentation.hpp"
#include "motorstorm_draw_distance.hpp"
#include "motorstorm_window.hpp"
#include "motorstorm_controller.hpp"
#include "motorstorm_rumble.hpp"
#include "motorstorm_media.hpp"
#include "motorstorm_atrac.hpp"
#include "motorstorm_frame_rate.hpp"
#include "motorstorm_pacing.hpp"
#include "motorstorm_textures.hpp"
#include "motorstorm_perf.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/hle_audio_output2.hpp"
#include "psprecomp/hle_savedata.hpp"
#include "psprecomp/hle_sas.hpp"
#include "psprecomp/runtime.hpp"
#include <memory>

#include <algorithm>
#include <atomic>
#include <condition_variable>
#include <exception>
#include <mutex>
#include <thread>
#include <array>
#include <bit>
#include <chrono>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <filesystem>
#include <fstream>
#include <optional>
#include <set>
#include <span>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace motorstorm {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::GuestMemory;
using psprecomp::Runtime;
using psprecomp::hex32;

constexpr std::uint32_t kUserRamTop = 0x0A000000u;
constexpr std::uint32_t kModuleThreadStackSize = 0x10000u;

// ---------------------------------------------------------------------------
// Lazily installed options / configuration
// ---------------------------------------------------------------------------

HleOptions g_options;
bool g_installed = false;

// ---------------------------------------------------------------------------
// Diagnostics helpers
// ---------------------------------------------------------------------------

void hle_line(const std::string &message) {
    log_line(category::kHle, message);
}

void dispatch_line(const std::string &message) {
    log_line(category::kDispatch, message);
}

void error_line(const std::string &message) {
    log_line(category::kError, message);
}

// ---------------------------------------------------------------------------
// Import tracing
// ---------------------------------------------------------------------------

std::unordered_map<std::string, std::uint64_t> g_import_calls;

void register_import(Runtime &runtime, const char *library, std::uint32_t nid, const char *name,
                     Runtime::HleFunction function) {
    const std::string label = std::string(library) + "::" + name;
    runtime.register_hle(
        library, nid,
        [label, function = std::move(function)](Runtime &rt, AllegrexContext &ctx) {
            const std::uint64_t count = ++g_import_calls[label];
            if (g_options.trace_imports &&
                (g_options.import_trace_limit == 0u || count <= g_options.import_trace_limit)) {
                std::ostringstream out;
                out << label << " thread=" << psprecomp::runtime_thread_uid()
                    << " pc=" << hex32(ctx.pc) << " ra=" << hex32(ctx.gpr[31]);
                log_line(category::kImport, out.str());
            }
            function(rt, ctx);
        });
}

// ---------------------------------------------------------------------------
// Cooperative PSP scheduler
// ---------------------------------------------------------------------------

enum class ThreadState { Created, Ready, Running, Delayed, Waiting, Suspended, Completed };
enum class CallbackWaitKind { None, Semaphore, EventFlag, ThreadEnd, Vblank };

struct SemaWaiter {
    std::int32_t uid{};
    std::int32_t amount{1};
};

struct FlagWaiter {
    std::int32_t uid{};
    std::uint32_t requested{};
    std::uint32_t mode{};
    std::uint32_t result_ptr{};
};

struct Joiner {
    std::int32_t uid{};
    std::uint32_t status_ptr{};
};

struct ThreadRecord {
    std::int32_t uid{};
    std::string name;
    std::uint32_t entry{};
    std::uint32_t priority{32};
    std::uint32_t stack_size{};
    std::uint32_t stack_top{};
    std::uint32_t stack_bottom{};
    std::uint32_t kernel_context{};
    ThreadState state{ThreadState::Created};
    AllegrexContext suspended{};
    std::uint64_t delay_until_us{};
    std::uint64_t vblank_deadline_us{};
    std::uint64_t ready_sequence{};
    std::uint32_t wakeup_count{};
    std::uint32_t exit_status{};
    bool suspended_flag{};
    bool callback_wait{};
    std::uint32_t callback_wait_pc{};
    CallbackWaitKind callback_wait_kind{CallbackWaitKind::None};
    std::int32_t callback_wait_object{-1};
    // Generic wait bookkeeping (semaphores / event flags / thread joins).
    std::uint64_t wait_deadline_us{};
    bool wait_has_deadline{};
    std::uint32_t wait_timeout_result{0x800201C9u};
};

struct SemaRecord {
    std::string name;
    std::int32_t count{};
    std::int32_t initial_count{};
    std::int32_t maximum{};
    // Diagnostic ownership for the middleware's binary semaphore mutexes.
    // PSP semaphores themselves do not release automatically on thread exit.
    std::int32_t mutex_owner{-1};
    std::vector<SemaWaiter> waiters;
};

struct EventFlagRecord {
    std::string name;
    std::uint32_t initial_pattern{};
    std::uint32_t current_pattern{};
    std::vector<FlagWaiter> waiters;
};

struct MutexWaiter {
    std::int32_t uid{};
    std::int32_t count{1};
};

struct MutexRecord {
    std::string name;
    std::int32_t lock_count{};
    std::int32_t owner_uid{-1};
    std::vector<MutexWaiter> waiters;
};

struct CallbackRecord {
    std::string name;
    std::uint32_t entry{};
    std::uint32_t arg{};   // commonArgument passed as a2 on every invocation
    std::int32_t owner_uid{};
    std::uint32_t notify_count{}, notify_arg{};
};

struct BlockRecord {
    std::string name;
    std::uint32_t address{};
    std::uint32_t size{};
    std::uint32_t memory_uid{};
};

// One nested guest callback execution on a PSP thread.  `saved` is the caller
// context to restore when the callback returns to the trampoline; its PC is the
// return address of the import that triggered the callback.
struct CallbackFrame {
    AllegrexContext saved{};
    std::int32_t callback_uid{};
    std::uint32_t notify_arg{};
    std::uint32_t entry{};
    const char *name{"callback"};
};

// PSP callback ABI: a0 = pending notification count, a1 = notify argument,
// a2 = the common argument given to sceKernelCreateCallback.  Address 4 is the
// kernel-style return trampoline for a callback invocation.
constexpr std::uint32_t kCallbackReturnAddress = 0x00000004u;

// UMD drive-state bits (pspumd.h).
constexpr std::uint32_t kUmdNotPresent = 0x0001u;
constexpr std::uint32_t kUmdPresent = 0x0002u;
constexpr std::uint32_t kUmdChanged = 0x0004u;
constexpr std::uint32_t kUmdNotReady = 0x0008u;
constexpr std::uint32_t kUmdReady = 0x0010u;
constexpr std::uint32_t kUmdReadable = 0x0020u;

struct UmdWaiter {
    std::int32_t uid{};
    std::uint32_t stat{};
};

std::int32_t g_current_uid = 0;
std::int32_t g_next_thread_uid = 1;
std::unordered_map<std::int32_t, ThreadRecord> g_threads;
std::vector<std::int32_t> g_ready;
std::uint64_t g_ready_sequence = 1;
std::unordered_map<std::int32_t, std::vector<Joiner>> g_joiners;
std::unordered_map<std::int32_t, SemaRecord> g_semas;
std::int32_t g_next_sema_uid = 0x100;
std::unordered_map<std::int32_t, EventFlagRecord> g_event_flags;
std::int32_t g_next_event_flag_uid = 0x200;
std::unordered_map<std::int32_t, MutexRecord> g_mutexes;
std::int32_t g_next_mutex_uid = 0x500;

bool g_dispatch_enabled = true;
bool g_interrupts_enabled = true;
std::unordered_map<std::int32_t, CallbackRecord> g_callbacks;
std::int32_t g_next_callback_uid = 0x300;
std::unordered_map<std::int32_t, std::vector<CallbackFrame>> g_callback_frames;
std::unordered_map<std::int32_t, BlockRecord> g_blocks;
std::int32_t g_next_block_uid = 0x400;
ArenaState g_arena;  // guest memory arena (see motorstorm_arena.hpp)
std::uint32_t g_stack_next_top{};
std::uint64_t g_virtual_time_us{};
FrameRatePlan g_frame_rate;
std::uint64_t g_music_next_trace{};
std::uint32_t g_ctrl_requested_cycle{}, g_ctrl_requested_mode{};
std::uint32_t g_last_pad_buttons{};
struct ScriptedInput { std::uint64_t time{}; std::uint32_t buttons{}; std::uint8_t x{128}, y{128}; };
std::vector<ScriptedInput> g_input_script;
std::size_t g_input_script_index{};
std::uint64_t g_input_script_live_after{};
std::uint64_t g_delay_sequence = 1;

// UMD virtual drive: the host supplies a disc, so the drive boots inserted and
// ready, and becomes readable when the guest activates disc0:.  Every state
// change wakes matching waiters and notifies the registered UMD callback.
std::uint32_t g_umd_state = kUmdPresent | kUmdReady;
bool g_volatile_mem_locked = false;
// PSP volatile RAM: 4 MiB at 0x08400000 (well inside the 32 MiB main RAM the
// recompiler provides).
constexpr std::uint32_t kVolatileMemAddress = 0x08400000u;
constexpr std::uint32_t kVolatileMemSize = 0x00400000u;
bool g_umd_activated = false;
std::int32_t g_umd_callback_uid = 0;
std::uint64_t g_umd_transitions = 0;
std::vector<UmdWaiter> g_umd_waiters;

// Utility firmware-module bookkeeping (sceUtilityLoadModule/UnloadModule).
std::unordered_map<std::uint32_t, bool> g_utility_modules;

// Display / GE milestone instrumentation (no rasterization in this phase).
struct DisplayState {
    std::uint32_t mode{};
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint32_t frame_buf{};
    std::uint32_t stride{};
    std::uint32_t format{};
    std::uint32_t set_frame_buf_count{};
    std::uint32_t set_mode_count{};
};
DisplayState g_display;
struct GeCallbackData {
    std::uint32_t signal_func{};
    std::uint32_t signal_arg{};
    std::uint32_t finish_func{};
    std::uint32_t finish_arg{};
};
std::unordered_map<std::uint32_t, GeCallbackData> g_ge_callback_table;
std::uint32_t g_ge_callback_id = 0;
std::uint32_t g_next_ge_callback_id = 0x40000000u;

// GE queue interrupts.  On hardware the signal handler runs when a queued list
// begins and the finish handler when it completes; both are delivered through
// sceKernelCheckCallback, the path this game uses to service them.
struct GePendingCallback {
    std::uint32_t callback_id{};
    std::uint32_t token{};
    bool finish{};
    std::uint32_t next_pc{};
};
std::deque<GePendingCallback> g_ge_pending_callbacks;
std::uint64_t g_ge_callbacks_delivered = 0;
std::uint64_t g_ge_submissions = 0;
std::uint32_t g_ge_stall_updates = 0;
std::uint32_t g_ge_sync_calls = 0;
bool g_ge_first_submission_logged = false;
std::uint32_t g_ge_frame_dumps = 0;
// One submitted GE list. The GE thread shares `progress` while it executes
// the list in segments.
struct GeListRecord {
    std::uint32_t id{};
    std::uint32_t list{};
    std::uint32_t stall{};
    std::uint32_t callback_id{};
    std::uint64_t submission{};
    std::shared_ptr<GeListProgress> progress{std::make_shared<GeListProgress>()};
};
std::vector<GeListRecord> g_ge_list_records;

// GE thread. Like the PSP's GE, a list renders while the CPU is still running:
// each sceGeListUpdateStallAddr queues the commands it releases, and
// sceGeDrawSync queues the rest, waits, and raises the GE callbacks. Commands
// before the stall address are final, so the GE never sees later CPU writes.
// The CPU also waits for the thread before a VRAM access publishes GPU
// readbacks (gpu_set_publish_guard) and at shutdown.
class GeThread {
public:
    struct Segment {
        std::shared_ptr<GeListProgress> progress;
        std::uint32_t list{}, stall{};
        std::uint64_t submission{};
        bool rasterize{}, last{};
    };
    ~GeThread() { stop(); }
    void submit(Runtime &runtime, Segment segment) {
        std::lock_guard lock(mutex_);
        if (!thread_.joinable()) {
            runtime_ = &runtime;
            thread_ = std::thread([this] { run(); });
        }
        queue_.push_back(std::move(segment));
        changed_.notify_all();
    }
    // Waits until every queued segment has run; rethrows a failure.
    void wait() {
        if (on_thread()) return;
        std::unique_lock lock(mutex_);
        changed_.wait(lock, [this] { return queue_.empty() && !busy_; });
        if (error_) std::rethrow_exception(std::exchange(error_, nullptr));
    }
    bool on_thread() const noexcept { return std::this_thread::get_id() == id_.load(); }
    void stop() {
        {
            std::unique_lock lock(mutex_);
            if (!thread_.joinable()) return;
            changed_.wait(lock, [this] { return queue_.empty() && !busy_; });
            quit_ = true;
            changed_.notify_all();
        }
        thread_.join();
        quit_ = false;
    }

private:
    void run() {
        id_.store(std::this_thread::get_id());
        for (;;) {
            Segment segment;
            bool failed{};
            {
                std::unique_lock lock(mutex_);
                changed_.wait(lock, [this] { return !queue_.empty() || quit_; });
                if (queue_.empty()) return;
                segment = std::move(queue_.front());
                queue_.pop_front();
                busy_ = true;
                failed = error_ != nullptr;
            }
            if (!failed) {
                try {
                    motorstorm::software_ge_execute_segment(runtime_->memory(), segment.list, segment.stall,
                                                            segment.rasterize, segment.submission,
                                                            *segment.progress, segment.last);
                } catch (...) {
                    std::lock_guard lock(mutex_);
                    error_ = std::current_exception();
                }
            }
            std::lock_guard lock(mutex_);
            busy_ = false;
            changed_.notify_all();
        }
    }
    Runtime *runtime_{};
    std::thread thread_;
    std::atomic<std::thread::id> id_{};
    std::mutex mutex_;
    std::condition_variable changed_;
    std::deque<Segment> queue_;
    bool busy_{}, quit_{};
    std::exception_ptr error_;
};
GeThread g_ge_thread;
void wait_for_ge_thread() { g_ge_thread.wait(); }
// PSPRECOMP_MOTORSTORM_GE_THREAD=0 runs every list on the CPU thread at
// sceGeDrawSync (the original ordering).
bool ge_thread_enabled() {
    static const bool enabled = [] {
        const char *value = std::getenv("PSPRECOMP_MOTORSTORM_GE_THREAD");
        return !(value && (std::strcmp(value, "0") == 0 || std::strcmp(value, "false") == 0));
    }();
    return enabled;
}
// Lists are rasterized once a renderer is active (SOFTGE_START_AFTER delays it).
bool ge_rasterize() {
    static const std::uint64_t start_after = [] {
        const char *value = std::getenv("PSPRECOMP_MOTORSTORM_SOFTGE_START_AFTER");
        return value != nullptr ? std::strtoull(value, nullptr, 0) : 0u;
    }();
    return (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_SOFTGE") || gpu_requested()) &&
           g_ge_submissions >= start_after;
}
// Queue the commands up to the record's stall on the GE thread. A stall at the
// list start is not a bound (the walk would run on into unwritten memory).
void update_racing_scene(Runtime &runtime);
void queue_ge_segment(Runtime &runtime, const GeListRecord &record, bool last) {
    if (!last && (record.stall == 0u || psprecomp::GuestMemory::canonical(record.stall) <=
                                            psprecomp::GuestMemory::canonical(record.list)))
        return;
    if (!record.progress->started)
        update_racing_scene(runtime);
    g_ge_thread.submit(runtime, GeThread::Segment{record.progress, record.list, record.stall, record.submission,
                                                  ge_rasterize(), last});
}

// Read-only, profile-gated scene diagnostics. These addresses are observations
// from the guest scene runner, not state changes or gameplay bypasses.
void trace_game_state(const Runtime &runtime) {
    if (!MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_STATE")) return;
    const auto &memory = runtime.memory();
    const auto read = [&](std::uint32_t address) {
        return memory.contains(address, 4u) ? memory.load32(address) : 0u;
    };
    const auto scene = read(0x08A76FDCu), requested = read(0x08A76FE0u);
    const auto script = read(0x08A9E48Cu);
    const auto table = scene != 0u ? read(scene + 8u) : 0u;
    const std::array<std::uint32_t, 7> snapshot{scene, requested, table, script,
        script != 0u ? read(script + 0x38u) : 0u,
        script != 0u ? read(script + 0x3Cu) : 0u,
        script != 0u ? read(script + 0x40u) : 0u};
    static std::array<std::uint32_t, 7> previous{};
    static bool seen = false;
    if (seen && snapshot == previous && g_display.set_frame_buf_count % 120u != 0u) return;
    previous = snapshot; seen = true;
    std::ostringstream out;
    out << "guest_us=" << g_virtual_time_us << " submission=" << g_ge_submissions
        << " frame=" << g_display.set_frame_buf_count << " scene=" << hex32(scene)
        << " requested=" << hex32(requested) << " table=" << hex32(table)
        << " enter=" << hex32(table != 0u ? read(table + 0x14u) : 0u)
        << " update=" << hex32(table != 0u ? read(table + 0x1Cu) : 0u)
        << " present=" << hex32(table != 0u ? read(table + 0x2Cu) : 0u)
        << " script=" << hex32(script) << " state=" << hex32(snapshot[4])
        << " requested_state=" << hex32(snapshot[5]) << " result=" << hex32(snapshot[6])
        << " callbacks_pending=" << g_ge_pending_callbacks.size();
    log_line("STATE", out.str());
}

// Race scenes for the [enhancements] effects. The scene runner's current scene
// object (0x08A76FDC, see trace_game_state) is 0x08A76044 during the race
// countdown and 0x08A76064 while racing; the pause menu (0x08A76074), loading
// screens, menus and movies are other scenes and keep the original image.
// Widescreen at the source (see find_camera_aspects): while racing, the game's
// camera objects get the window's aspect ratio so it renders and culls a true
// wider view. The shader-side widening of 3D geometry is the fallback and
// steps aside while a camera is patched. Originals are restored afterwards.
struct WideCamera { std::uint32_t address{}, original{}, written{}; };
void update_widescreen_camera(Runtime &runtime, bool racing) {
    static std::vector<WideCamera> cameras;
    static unsigned wait = 0u;
    auto &memory = runtime.memory();
    const auto restore = [&] {
        for (const auto &camera : cameras)
            if (memory.contains(camera.address, 4u) && memory.load32(camera.address) == camera.written)
                memory.store32(camera.address, camera.original);
        cameras.clear();
        gpu_set_guest_widescreen(false);
    };
    if (!racing || !gpu_widescreen_enabled()) {
        if (!cameras.empty()) restore();
        wait = 0u;
        return;
    }
    // A camera that is neither untouched nor ours has been freed or reused.
    std::erase_if(cameras, [&](const WideCamera &camera) {
        if (!memory.contains(camera.address, 4u)) return true;
        const auto value = memory.load32(camera.address);
        return value != camera.original && value != camera.written;
    });
    if (cameras.empty() && wait++ % 60u == 30u) {
        constexpr std::uint32_t kFirst = 0x08800000u, kLast = 0x0A000000u;
        constexpr std::uint32_t kStep = 1u << 20;
        std::vector<std::uint8_t> chunk(kStep + 32u);  // the overlap catches a camera on a boundary
        for (std::uint32_t base = kFirst; base < kLast; base += kStep) {
            if (!memory.contains(base, chunk.size())) continue;
            memory.copy_out(base, chunk);
            for (const auto offset : find_camera_aspects(chunk.data(), chunk.size()))
                if (offset < kStep) cameras.push_back({base + offset, memory.load32(base + offset), 0u});
        }
        if (!cameras.empty())
            log_line(category::kGe, "widescreen: " + std::to_string(cameras.size()) + " game camera(s) found");
    }
    std::uint32_t width{}, height{};
    gpu_output_size(width, height);
    bool widened = false;
    for (auto &camera : cameras) {
        float original;
        std::memcpy(&original, &camera.original, 4);
        const float target = camera_target_aspect(original, width, height);
        std::uint32_t bits;
        std::memcpy(&bits, &target, 4);
        camera.written = bits;
        if (memory.load32(camera.address) != bits) memory.store32(camera.address, bits);
        widened = widened || target > original;
    }
    gpu_set_guest_widescreen(widened);
}

// [graphics] render_distance / less_pop_in (see motorstorm_draw_distance.hpp).
// Distance-switched scene nodes are found by a rolling scan of user RAM, one
// step per displayed frame, so props loaded at any time are picked up without
// a stall (a full pass takes about 1.6 s at 60 fps). Their thresholds are
// restored when the race ends.
const draw_distance::Settings &draw_distance_settings() {
    static const draw_distance::Settings settings = [] {
        draw_distance::Settings result;
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_RENDER_DISTANCE"))
            if (const auto scale = draw_distance::parse_render_distance(value)) result.scale = *scale;
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_LESS_POP_IN"))
            result.less_pop_in = std::string_view(value) != "0";
        return result;
    }();
    return settings;
}
struct DistanceNode {
    std::uint32_t address{};
    bool fade{};  // fade node (near/far/split) rather than an LOD group
    std::array<std::int16_t, 4> original{}, written{};
    float far_band{};
};
void update_draw_distance(Runtime &runtime, bool racing) {
    namespace dd = draw_distance;
    static std::vector<DistanceNode> nodes;
    static std::unordered_set<std::uint32_t> known;
    static std::uint32_t cursor = 0x08800000u, scanned_frame = 0u;
    static bool reported = false;
    auto &memory = runtime.memory();
    const auto &settings = draw_distance_settings();
    const auto thresholds = [&](std::uint32_t node) {
        std::array<std::int16_t, 4> values{};
        for (std::uint32_t i = 0; i < 4u; ++i)
            values[i] = static_cast<std::int16_t>(memory.load16(node + dd::kNodeThresholds + 2u * i));
        return values;
    };
    const auto write = [&](std::uint32_t node, const std::array<std::int16_t, 4> &values) {
        for (std::uint32_t i = 0; i < 4u; ++i)
            memory.store16(node + dd::kNodeThresholds + 2u * i, static_cast<std::uint16_t>(values[i]));
    };
    const auto is_node = [&](std::uint32_t node) {
        return memory.contains(node, dd::kNodeTarget + 4u) && memory.load32(node + 0x10u) == dd::kNodeVtable;
    };
    if (!racing || !settings.active()) {
        for (const auto &node : nodes)
            if (is_node(node.address) && thresholds(node.address) == node.written) write(node.address, node.original);
        nodes.clear();
        known.clear();
        cursor = 0x08800000u;
        return;
    }
    // Adopts a node with its current values as the originals.
    const auto adopt = [&](DistanceNode &node) {
        node.original = thresholds(node.address);
        node.written = node.original;
        node.far_band = 0.0f;
        const auto &[near, far, split, last] = node.original;
        if (node.fade) {
            node.written[0] = dd::scaled_threshold(near, settings.scale, settings.less_pop_in);
            const auto scaled_far = dd::scaled_threshold(far, settings.scale, settings.less_pop_in);
            node.written[1] = settings.less_pop_in ? dd::fading_far(scaled_far) : scaled_far;
            node.far_band = static_cast<float>(node.written[1] - scaled_far);
            if (split > 0)
                node.written[2] = static_cast<std::int16_t>(std::clamp<long>(std::lround(split * settings.scale), 1, 32767));
        } else {
            for (std::size_t i = 0; i < 4u; ++i)
                node.written[i] = dd::scaled_threshold(node.original[i], settings.scale, false);
        }
        write(node.address, node.written);
    };
    // Freed nodes are dropped; values the game rewrote become the new originals.
    std::erase_if(nodes, [&](DistanceNode &node) {
        if (!is_node(node.address)) {
            known.erase(node.address);
            return true;
        }
        if (thresholds(node.address) != node.written) adopt(node);
        return false;
    });
    if (scanned_frame != g_display.set_frame_buf_count) {
        scanned_frame = g_display.set_frame_buf_count;
        constexpr std::uint32_t kFirst = 0x08800000u, kLast = 0x0A000000u, kStep = 256u * 1024u;
        static std::vector<std::uint8_t> chunk(kStep);
        if (memory.contains(cursor, kStep)) {
            memory.copy_out(cursor, chunk);
            for (std::uint32_t offset = 0; offset + 4u <= kStep; offset += 4u) {
                std::uint32_t word;
                std::memcpy(&word, chunk.data() + offset, 4u);
                if (word != dd::kNodeVtable || cursor + offset < kFirst + 0x10u) continue;
                const std::uint32_t address = cursor + offset - 0x10u;
                if (known.contains(address) || !is_node(address)) continue;
                const auto flags = memory.load32(address + dd::kNodeFlags);
                if ((flags & (dd::kFadeNode | dd::kLodGroup)) == 0u) continue;
                DistanceNode node{address, (flags & dd::kLodGroup) == 0u};
                adopt(node);
                nodes.push_back(node);
                known.insert(address);
            }
        }
        cursor = cursor + kStep >= kLast ? kFirst : cursor + kStep;
        if (cursor == kFirst && !reported && !nodes.empty()) {
            reported = true;
            std::ostringstream out;
            out << "draw distance: " << nodes.size() << " distance-switched scene node(s), render_distance x"
                << settings.scale << ", less_pop_in " << (settings.less_pop_in ? "on" : "off");
            log_line(category::kGe, out.str());
        }
    }
    if (!settings.less_pop_in) return;
    // Seed each prop's alpha so the game's next 1/16 step lands on the
    // opacity for its distance: a smooth fade across the band at any speed.
    const auto camera = memory.contains(dd::kCameraPointer, 4u) ? memory.load32(dd::kCameraPointer) : 0u;
    if (!memory.contains(camera + dd::kCameraPosition, 12u)) return;
    const auto position = [&](std::uint32_t address) {
        return std::array<float, 3>{std::bit_cast<float>(memory.load32(address)),
                                    std::bit_cast<float>(memory.load32(address + 4u)),
                                    std::bit_cast<float>(memory.load32(address + 8u))};
    };
    const auto eye = position(camera + dd::kCameraPosition);
    for (const auto &node : nodes) {
        if (!node.fade || (memory.load32(node.address + dd::kNodeFlags) & dd::kFadeNode) == 0u) continue;
        const auto at = position(node.address + dd::kNodePosition);
        const float distance = std::sqrt((at[0] - eye[0]) * (at[0] - eye[0]) + (at[1] - eye[1]) * (at[1] - eye[1]) +
                                         (at[2] - eye[2]) * (at[2] - eye[2]));
        const dd::Thresholds written{node.written[0], node.written[1], node.written[2]};
        const float alpha = dd::fade_alpha(distance, written, node.far_band);
        const float seed = dd::seed_alpha(alpha, dd::game_target(distance, written));
        memory.store32(node.address + dd::kNodeAlpha, std::bit_cast<std::uint32_t>(seed));
    }
}

// Player vehicle (see motorstorm_rumble.hpp and docs/CONTROLLER_INPUT.md):
// race 0x08A9E2AC -> player +4444 -> vehicle +8 -> motion +32, position at
// motion +48; vehicle +704 is the state object, player +228 the distance
// travelled under boost.
struct PlayerVehicle { std::uint32_t race{}, player{}, vehicle{}, motion{}, recovery{}; };
PlayerVehicle player_vehicle(const psprecomp::GuestMemory &memory) {
    const auto read = [&](std::uint32_t address) { return memory.contains(address, 4u) ? memory.load32(address) : 0u; };
    PlayerVehicle result;
    result.race = read(0x08A9E2ACu);
    result.player = result.race ? read(result.race + 4444u) : 0u;
    result.vehicle = result.player ? read(result.player + 8u) : 0u;
    result.motion = result.vehicle ? read(result.vehicle + 32u) : 0u;
    result.recovery = result.vehicle ? read(result.vehicle + 48u) : 0u;
    return result;
}

// Diagnostic: PSPRECOMP_MOTORSTORM_VEHICLE_DUMP=<file> appends one record per
// displayed race frame (48-byte header, then the race, player, vehicle,
// motion, recovery and camera objects); the layout is in CONTROLLER_INPUT.md.
void dump_vehicle(const psprecomp::GuestMemory &memory, std::uint32_t scene, const PlayerVehicle &player) {
    static const char *path = std::getenv("PSPRECOMP_MOTORSTORM_VEHICLE_DUMP");
    if (path == nullptr) return;
    static std::ofstream dump(path, std::ios::binary);
    const auto camera = memory.contains(0x08A78F8Cu, 4u) ? memory.load32(0x08A78F8Cu) : 0u;
    const std::uint32_t header[12]{static_cast<std::uint32_t>(g_virtual_time_us),
        static_cast<std::uint32_t>(g_virtual_time_us >> 32u), g_display.set_frame_buf_count, scene, player.race,
        player.player, player.vehicle, player.motion, player.recovery, camera, g_last_pad_buttons, 0u};
    dump.write(reinterpret_cast<const char *>(header), sizeof(header));
    const auto block = [&](std::uint32_t address, std::uint32_t size) {
        std::vector<std::uint8_t> bytes(size);
        if (address != 0u && memory.contains(address, size)) memory.copy_out(address, bytes);
        dump.write(reinterpret_cast<const char *>(bytes.data()), size);
    };
    block(player.race, 8192u); block(player.player, 1024u); block(player.vehicle, 4096u);
    block(player.motion, 512u); block(player.recovery, 1024u); block(camera, 512u);
    dump.flush();
}

// Controller rumble from the player vehicle, once per displayed frame. Only
// the running race (0x08A76064) rumbles: countdown, pause, menus and movies
// stay still.
void update_rumble(const Runtime &runtime, std::uint32_t scene) {
    // static RumbleModel model;
    static std::uint32_t sampled_frame = 0xFFFFFFFFu;
    if (sampled_frame == g_display.set_frame_buf_count) return;
    sampled_frame = g_display.set_frame_buf_count;
    const auto &memory = runtime.memory();
    const bool racing = scene == 0x08A76064u;
    const auto player = racing ? player_vehicle(memory) : PlayerVehicle{};
    if (racing) dump_vehicle(memory, scene, player);
    // Rumble disabled for the time being; the vehicle dump above still runs.
    // VehicleSample sample;
    // sample.time = static_cast<double>(g_virtual_time_us) / 1e6;
    // if (racing && player.motion != 0u && memory.contains(player.motion + 48u, 12u) &&
    //     memory.contains(player.vehicle + 704u, 4u) && memory.contains(player.player + 228u, 4u)) {
    //     sample.racing = true;
    //     sample.vehicle = player.vehicle;
    //     sample.state = memory.load32(player.vehicle + 704u);
    //     sample.x = std::bit_cast<float>(memory.load32(player.motion + 48u));
    //     sample.y = std::bit_cast<float>(memory.load32(player.motion + 52u));
    //     sample.z = std::bit_cast<float>(memory.load32(player.motion + 56u));
    //     sample.boost_distance = std::bit_cast<float>(memory.load32(player.player + 228u));
    // }
    // const auto rumble = model.update(sample);
    // controller_set_rumble(rumble);
    // if (model.events() != 0u && MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_RUMBLE")) {
    //     std::ostringstream out;
    //     out << "guest_us=" << g_virtual_time_us;
    //     const std::pair<unsigned, const char *> names[]{
    //         {rumble_event::kImpact, "impact"}, {rumble_event::kLanding, "landing"}, {rumble_event::kWreck, "wreck"},
    //         {rumble_event::kBoostStart, "boost-start"}, {rumble_event::kBoostEnd, "boost-end"},
    //         {rumble_event::kRespawn, "respawn"}, {rumble_event::kTeleport, "teleport"}};
    //     for (const auto &[bit, name] : names)
    //         if ((model.events() & bit) != 0u) out << ' ' << name;
    //     out << " low=" << rumble.low << " high=" << rumble.high << " lt=" << rumble.left_trigger
    //         << " rt=" << rumble.right_trigger << " state=" << hex32(sample.state);
    //     log_line("RUMBLE", out.str());
    // }
}

void update_racing_scene(Runtime &runtime) {
    const auto &memory = runtime.memory();
    const auto scene = memory.contains(0x08A76FDCu, 4u) ? memory.load32(0x08A76FDCu) : 0u;
    const bool racing = scene == 0x08A76044u || scene == 0x08A76064u;
    static bool previous = false;
    if (racing != previous) {
        log_line(category::kGe, std::string("race scene ") + (racing ? "entered" : "left") +
                                    " (scene " + hex32(scene) + ", guest_us=" + std::to_string(g_virtual_time_us) + ")");
        previous = racing;
    }
    gpu_set_racing(racing);
    update_widescreen_camera(runtime, racing);
    update_draw_distance(runtime, racing);
    update_rumble(runtime, scene);
}

// Scheduler counters for the end-of-run census.
std::uint64_t g_switch_count = 0;
std::uint64_t g_delay_count = 0;
std::uint64_t g_preempt_count = 0;
std::uint64_t g_deadlock_count = 0;
std::uint32_t g_ge_list_logs = 0;
std::uint32_t g_thread_wake_logs = 0;

[[nodiscard]] ThreadRecord *current_thread() {
    const auto found = g_threads.find(g_current_uid);
    return found != g_threads.end() ? &found->second : nullptr;
}

[[nodiscard]] std::uint32_t thread_priority(std::int32_t uid) {
    const auto found = g_threads.find(uid);
    return found != g_threads.end() ? found->second.priority : 0xFFFFFFFFu;
}

[[nodiscard]] std::int32_t best_ready_thread() {
    std::int32_t best = -1;
    std::uint32_t best_priority = 0xFFFFFFFFu;
    std::uint64_t best_sequence = 0;
    for (const std::int32_t uid : g_ready) {
        const auto found = g_threads.find(uid);
        if (found == g_threads.end() || found->second.state != ThreadState::Ready) continue;
        const std::uint32_t priority = found->second.priority;
        if (best == -1 || priority < best_priority ||
            (priority == best_priority && found->second.ready_sequence < best_sequence)) {
            best = uid;
            best_priority = priority;
            best_sequence = found->second.ready_sequence;
        }
    }
    return best;
}

void make_ready(ThreadRecord &thread, std::uint32_t v0) {
    thread.suspended.set_gpr(2, v0);
    thread.state = ThreadState::Ready;
    thread.ready_sequence = g_ready_sequence++;
    thread.wait_has_deadline = false;
    g_ready.push_back(thread.uid);
}

// Diagnostic bring-up helper (PSPRECOMP_MOTORSTORM_START_ALL_CREATED=1): makes
// a dormant thread runnable with the entry convention of sceKernelStartThread
// with no argument block.  Used to test whether work hidden behind a
// never-started thread explains a stalled guest state machine.
void start_created_thread(ThreadRecord &thread) {
    std::uint32_t sp = thread.kernel_context;
    AllegrexContext next{};
    next.set_gpr(4, 0u);
    next.set_gpr(5, 0u);
    sp -= 64u;
    next.set_gpr(26, thread.kernel_context);
    next.set_gpr(29, sp);
    next.set_gpr(30, sp);
    next.set_gpr(31, 0u);
    next.pc = thread.entry;
    make_ready(thread, 0u);
    thread.suspended = next;
    hle_line("start_created_thread uid=" + std::to_string(thread.uid) + " name=\"" +
             thread.name + "\" entry=" + hex32(thread.entry));
}

// Saves the current guest context as the continuation of `thread`, whose PC is
// the caller's $ra: the import wrapper's "pc = RA" rewrite is deliberately
// skipped when the HLE switches threads, so the saved continuation must carry
// the return address itself.
void save_continuation(ThreadRecord &thread, const AllegrexContext &ctx) {
    thread.suspended = ctx;
    thread.suspended.pc = ctx.gpr[31];
}

void promote_expired_delays();
bool service_owned_callback(Runtime &,AllegrexContext &,std::uint32_t resume_pc=0,bool check=false);

[[nodiscard]] bool activate_next(Runtime &runtime, AllegrexContext &ctx, const char *reason) {
    promote_expired_delays();

    // Drop stale ready entries.
    g_ready.erase(std::remove_if(g_ready.begin(), g_ready.end(),
        [](std::int32_t uid) {
            const auto found = g_threads.find(uid);
            return found == g_threads.end() || found->second.state != ThreadState::Ready;
        }),
        g_ready.end());

    if (g_ready.empty()) {
        // Any delayed thread? Advance execution-driven time to the earliest
        // deadline and retry.  This mirrors the PSP timer interrupt.
        std::uint64_t earliest = 0;
        bool any_delayed = false;
        for (const auto &[uid, thread] : g_threads) {
            (void)uid;
            if (thread.state == ThreadState::Delayed &&
                (!any_delayed || thread.delay_until_us < earliest)) {
                earliest = thread.delay_until_us;
                any_delayed = true;
            }
        }
        if (any_delayed) {
            g_virtual_time_us = std::max(g_virtual_time_us, earliest);
            promote_expired_delays();
        }
    }
    if (g_ready.empty()) return false;

    const std::int32_t selected = best_ready_thread();
    if (selected == -1) return false;
    ThreadRecord &thread = g_threads.at(selected);
    thread.state = ThreadState::Running;
    g_current_uid = selected;
    ctx = thread.suspended;
    psprecomp::set_runtime_thread_identity(selected, thread.name);
    if (thread.callback_wait) {
        thread.callback_wait=false;
        (void)service_owned_callback(runtime,ctx,ctx.pc);
    }
    ++g_switch_count;
    // Switch logging is a bring-up diagnostic, not a per-event trace: an idle
    // guest loop that delays by a frame switches thousands of times per second
    // and once produced an 18 GiB log.  Keep a bounded prefix, and allow the
    // full stream only on request.
    static const bool full_switch_log = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_SWITCH") != nullptr;
    static std::uint64_t switch_logs = 0u;
    if (g_options.trace_imports && (full_switch_log || switch_logs < 256u)) {
        ++switch_logs;
        std::ostringstream out;
        out << "switch reason=" << reason << " uid=" << selected << " name=\"" << thread.name
            << "\" pc=" << hex32(ctx.pc) << " sp=" << hex32(ctx.gpr[29])
            << " ra=" << hex32(ctx.gpr[31]);
        dispatch_line(out.str());
    }
    return true;
}

void promote_expired_delays() {
    for (auto &[uid, thread] : g_threads) {
        if (thread.state == ThreadState::Delayed && thread.delay_until_us <= g_virtual_time_us) {
            // Only the display wait itself consumes this deadline. A callback
            // may delay too, retaining the original vblank target on reentry.
            if (thread.callback_wait && thread.callback_wait_kind == CallbackWaitKind::Vblank)
                thread.callback_wait_kind = CallbackWaitKind::None;
            make_ready(thread, 0u);
            continue;
        }
        if (thread.state == ThreadState::Waiting && thread.wait_has_deadline &&
            thread.wait_deadline_us <= g_virtual_time_us) {
            make_ready(thread, thread.wait_timeout_result);
        }
    }
}

// Blocks the current thread and switches to the next runnable one.  The caller
// must have set $v0 to the value the guest should observe on wake-up.
[[nodiscard]] bool block_current(Runtime &runtime, AllegrexContext &ctx, ThreadState state,
                                 const char *reason) {
    ThreadRecord *thread = current_thread();
    if (thread == nullptr) {
        error_line("block_current with no current thread record");
        runtime.stop("PSP scheduler lost the current thread record");
        return false;
    }
    save_continuation(*thread, ctx);
    thread->state = state;
    if (!activate_next(runtime, ctx, reason)) {
        ++g_deadlock_count;
        runtime.stop(std::string("PSP scheduler deadlock: all threads blocked (") + reason + ")");
        return false;
    }
    return true;
}

void complete_thread(Runtime &runtime, AllegrexContext &ctx, std::int32_t uid,
                     std::uint32_t status, bool delete_record) {
    const auto found = g_threads.find(uid);
    if (found != g_threads.end()) {
        found->second.state = ThreadState::Completed;
        found->second.exit_status = status;
    }
    g_ready.erase(std::remove(g_ready.begin(), g_ready.end(), uid), g_ready.end());

    const auto joiners = g_joiners.find(uid);
    if (joiners != g_joiners.end()) {
        std::vector<Joiner> waiting = joiners->second;
        g_joiners.erase(joiners);
        std::sort(waiting.begin(), waiting.end(), [](const Joiner &left, const Joiner &right) {
            const std::uint32_t left_priority = thread_priority(left.uid);
            const std::uint32_t right_priority = thread_priority(right.uid);
            if (left_priority != right_priority) return left_priority < right_priority;
            return left.uid < right.uid;
        });
        for (const Joiner &joiner : waiting) {
            const auto waiter = g_threads.find(joiner.uid);
            if (waiter == g_threads.end()) continue;
            if (joiner.status_ptr != 0u && runtime.memory().contains(joiner.status_ptr, 4u))
                runtime.memory().store32(joiner.status_ptr, status);
            if (waiter->second.state == ThreadState::Waiting) make_ready(waiter->second, 0u);
        }
    }

    if (delete_record && found != g_threads.end()) g_threads.erase(found);

    if (g_current_uid == uid) {
        if (!activate_next(runtime, ctx, "thread-complete")) {
            runtime.stop("All PSP threads completed");
        }
    }
}

// ---------------------------------------------------------------------------
// Thread wake logging and callback delivery
// ---------------------------------------------------------------------------

void log_thread_wake(std::int32_t uid, std::uint32_t value, const char *reason) {
    if (g_thread_wake_logs >= 128u) return;
    ++g_thread_wake_logs;
    const auto found = g_threads.find(uid);
    std::ostringstream out;
    out << "wake uid=" << uid << " name=\""
        << (found != g_threads.end() ? found->second.name : std::string("?"))
        << "\" value=" << hex32(value) << " reason=" << reason;
    log_line(category::kThread, out.str());
}

void wake_thread(ThreadRecord &thread, std::uint32_t v0, const char *reason) {
    make_ready(thread, v0);
    log_thread_wake(thread.uid, v0, reason);
}

// Sets `bits` in an event flag's pattern and wakes every waiter whose
// requested bits now match (honouring the any/clear-on-exit wait modes).
void signal_event_flag_bits(Runtime &runtime, EventFlagRecord &flag, std::uint32_t bits) {
    // Diagnostic: PSPRECOMP_MOTORSTORM_TRACE_FLAGS=1 traces every event-flag
    // signal (name, bits, resulting pattern).  Off by default; capped so a hot
    // producer loop cannot grow the log without bound.
    static const bool trace_flags = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_FLAGS") != nullptr;
    if (trace_flags) {
        static std::uint64_t trace_count = 0;
        if (trace_count++ < 20000u)
            log_line("FLAGS", "set name=\"" + flag.name + "\" bits=" + hex32(bits) +
                                  " pattern=" + hex32(flag.current_pattern) +
                                  " thread=" + std::to_string(g_current_uid));
    }
    flag.current_pattern |= bits;
    std::vector<std::size_t> woken;
    for (std::size_t index = 0; index < flag.waiters.size(); ++index) {
        const FlagWaiter &waiter = flag.waiters[index];
        const bool any = (waiter.mode & 1u) != 0u;
        const bool matches = any ? (flag.current_pattern & waiter.requested) != 0u
                                 : (flag.current_pattern & waiter.requested) == waiter.requested;
        if (!matches) continue;
        if (waiter.result_ptr != 0u && runtime.memory().contains(waiter.result_ptr, 4u))
            runtime.memory().store32(waiter.result_ptr, flag.current_pattern);
        if ((waiter.mode & 0x20u) != 0u) flag.current_pattern &= ~waiter.requested;
        if ((waiter.mode & 0x10u) != 0u) flag.current_pattern = 0u;
        const auto thread = g_threads.find(waiter.uid);
        if (thread != g_threads.end()) wake_thread(thread->second, 0u, "event-flag-set");
        woken.push_back(index);
    }
    for (auto it = woken.rbegin(); it != woken.rend(); ++it)
        flag.waiters.erase(flag.waiters.begin() + static_cast<std::ptrdiff_t>(*it));
}

// Delivers a raw guest-function invocation (GE signal/finish handlers) with the
// kernel's callback calling convention: a0/a1 are the handler's arguments and
// the return address is the trampoline at 4.  Unlike sceKernelCreateCallback
// records these have no delete-on-nonzero-return semantics, so callback_uid
// stays zero and callback_return only restores the interrupted frame.
void notify_guest_function(Runtime &runtime, AllegrexContext &ctx, std::uint32_t entry,
                           std::uint32_t arg0, std::uint32_t arg1, const char *name,
                           const char *source) {
    CallbackFrame frame{};
    frame.saved = ctx;
    frame.saved.pc = ctx.gpr[31];
    frame.callback_uid = 0;
    frame.notify_arg = arg0;
    frame.entry = entry;
    frame.name = name;
    g_callback_frames[g_current_uid].push_back(frame);

    ctx.gpr[4] = arg0;
    ctx.gpr[5] = arg1;
    ctx.gpr[31] = kCallbackReturnAddress;
    ctx.pc = entry;

    if (g_options.trace_imports) {
        std::ostringstream out;
        out << "entering " << name << " entry=" << hex32(entry) << " a0=" << hex32(arg0)
            << " a1=" << hex32(arg1) << " thread=" << g_current_uid << " source=" << source;
        log_line(category::kCallback, out.str());
    }
}

// Delivers one callback invocation on the current PSP thread.  PSP callbacks
// run on the creating thread; the guest entry point is invoked with
// (notifyCount, notifyArg, commonArgument) and returns into the trampoline at
// address 4.  The caller context is saved with PC = the import return address,
// so when the callback finishes the interrupted guest code resumes as if the
// kernel call that triggered the notification had simply returned.
void notify_callback(Runtime &runtime, AllegrexContext &ctx, std::int32_t callback_uid,
                     std::uint32_t notify_arg, const char *source,
                     std::uint32_t count = 1u, std::uint32_t resume_pc = 0u) {
    const auto found = g_callbacks.find(callback_uid);
    if (found == g_callbacks.end()) {
        error_line("notify_callback: unknown callback uid=" + std::to_string(callback_uid));
        return;
    }
    const CallbackRecord &record = found->second;
    CallbackFrame frame{};
    frame.saved = ctx;
    frame.saved.pc = resume_pc ? resume_pc : ctx.gpr[31];
    frame.callback_uid = callback_uid;
    frame.notify_arg = notify_arg;
    frame.entry = record.entry;
    g_callback_frames[g_current_uid].push_back(frame);

    ctx.gpr[4] = count;          // notifyCount
    ctx.gpr[5] = notify_arg;     // notifyArg
    ctx.gpr[6] = record.arg;     // commonArgument
    ctx.gpr[31] = kCallbackReturnAddress;
    ctx.pc = record.entry;

    if (g_options.trace_imports) {
        std::ostringstream out;
        out << "entering uid=" << callback_uid << " name=\"" << record.name << "\""
            << " entry=" << hex32(record.entry) << " notify_arg=" << hex32(notify_arg)
            << " common_arg=" << hex32(record.arg)
            << " thread=" << g_current_uid << " source=" << source;
        log_line(category::kCallback, out.str());
    }
}

bool service_owned_callback(Runtime &runtime, AllegrexContext &ctx, std::uint32_t resume_pc,bool check) {
    const auto active=g_callback_frames.find(g_current_uid);
    if (check && MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_CALLBACK_OWNER")) {
        static std::unordered_set<std::int32_t> reported;
        for (const auto &[uid,cb] : g_callbacks) {
            if (cb.owner_uid!=g_current_uid || !cb.notify_count || !reported.insert(uid).second) continue;
            const auto *thread=current_thread();
            log_line("CALLBACK", "check owner="+std::to_string(g_current_uid)+" callback="+std::to_string(uid)+
                " count="+std::to_string(cb.notify_count)+" frames="+
                std::to_string(active==g_callback_frames.end()?0:active->second.size())+" pc="+
                hex32(ctx.pc)+" state="+std::to_string(thread?static_cast<int>(thread->state):-1));
        }
    }
    if (active!=g_callback_frames.end() && !active->second.empty()) return false;
    for (auto &[uid,cb] : g_callbacks) {
        if (cb.owner_uid != g_current_uid || !cb.notify_count) continue;
        const auto count=cb.notify_count,arg=cb.notify_arg;
        cb.notify_count=0;cb.notify_arg=0;
        if (auto *thread=current_thread()) thread->callback_wait=false;
        if (check) ctx.set_gpr(2,1);
        notify_callback(runtime,ctx,uid,arg,"owned-callback",count,resume_pc);
        return true;
    }
    return false;
}

void queue_owned_callback(std::int32_t uid,std::uint32_t arg) {
    auto &cb=g_callbacks.at(uid);++cb.notify_count;cb.notify_arg=arg;
    const auto it=g_threads.find(cb.owner_uid);
    if (it==g_threads.end() || !it->second.callback_wait) return;
    auto &thread=it->second;
    if (thread.state == ThreadState::Delayed && thread.callback_wait_kind == CallbackWaitKind::Vblank) {
        thread.suspended.pc = thread.callback_wait_pc;
        make_ready(thread, 0u);
        return;
    }
    if (thread.state != ThreadState::Waiting) return;
    // Interrupt a callback-aware wait without consuming its semaphore. Reenter
    // the wait import on the owning PSP stack, run the callback, then retry it.
    for (auto &[sema_uid,sema] : g_semas) {
        (void)sema_uid;
        std::erase_if(sema.waiters,[&](const SemaWaiter &w){return w.uid==cb.owner_uid;});
    }
    if (it->second.callback_wait_kind==CallbackWaitKind::EventFlag) {
        for (auto &[flag_uid,flag] : g_event_flags) {
            (void)flag_uid;
            std::erase_if(flag.waiters,[&](const FlagWaiter &w){return w.uid==cb.owner_uid;});
        }
    }
    if (thread.callback_wait_kind==CallbackWaitKind::ThreadEnd) {
        const auto joins=g_joiners.find(thread.callback_wait_object);
        if (joins!=g_joiners.end())
            std::erase_if(joins->second,[&](const Joiner &w){return w.uid==cb.owner_uid;});
    }
    thread.suspended.pc=thread.callback_wait_pc;
    make_ready(thread,0);
}

// Trampoline target for a returning guest callback (registered at address 4).
void callback_return(Runtime &runtime, AllegrexContext &ctx) {
    const std::int32_t uid = g_current_uid;
    auto found = g_callback_frames.find(uid);
    if (found == g_callback_frames.end() || found->second.empty()) {
        error_line("callback_return: no pending callback frame on thread " + std::to_string(uid));
        runtime.stop("PSP callback returned without a pending frame");
        return;
    }
    const CallbackFrame frame = found->second.back();
    found->second.pop_back();
    const std::uint32_t result = ctx.gpr[2];

    if (g_options.trace_imports) {
        std::ostringstream out;
        out << "returned uid=" << frame.callback_uid << " name=\""
            << (g_callbacks.contains(frame.callback_uid) ? g_callbacks.at(frame.callback_uid).name
                                                         : std::string(frame.name))
            << "\" result=" << hex32(result) << " notify_arg=" << hex32(frame.notify_arg)
            << " thread=" << uid;
        log_line(category::kCallback, out.str());
    }

    // The kernel deletes a callback whose function returns non-zero.
    if (result != 0u && g_callbacks.erase(frame.callback_uid) == 1u) {
        if (g_umd_callback_uid == frame.callback_uid) g_umd_callback_uid = 0;
        log_line(category::kCallback, "uid=" + std::to_string(frame.callback_uid) +
                                          " returned non-zero -> deleted");
    }

    ctx = frame.saved;
}

// ---------------------------------------------------------------------------
// UMD virtual drive
// ---------------------------------------------------------------------------

void umd_wake_waiters(const char *reason) {
    std::vector<std::int32_t> woken;
    for (const UmdWaiter &waiter : g_umd_waiters) {
        if ((waiter.stat & g_umd_state) == 0u) continue;
        const auto thread = g_threads.find(waiter.uid);
        if (thread != g_threads.end()) wake_thread(thread->second, 0u, reason);
        woken.push_back(waiter.uid);
    }
    for (const std::int32_t uid : woken) {
        g_umd_waiters.erase(
            std::remove_if(g_umd_waiters.begin(), g_umd_waiters.end(),
                           [uid](const UmdWaiter &waiter) { return waiter.uid == uid; }),
            g_umd_waiters.end());
    }
}

void umd_set_state(Runtime &runtime, AllegrexContext &ctx, std::uint32_t new_state,
                   const char *reason) {
    if (new_state == g_umd_state) return;
    const std::uint32_t old_state = g_umd_state;
    g_umd_state = new_state;
    ++g_umd_transitions;
    std::ostringstream out;
    out << "state " << hex32(old_state) << " -> " << hex32(new_state) << " (" << reason << ")";
    log_line(category::kUmd, out.str());
    umd_wake_waiters("umd-state-change");
    if (g_umd_callback_uid != 0)
        notify_callback(runtime, ctx, g_umd_callback_uid, new_state, reason);
}

// ---------------------------------------------------------------------------
// Execution-driven time
// ---------------------------------------------------------------------------

std::uint64_t g_tick_microseconds = 64u;

void starvation_tick(Runtime &runtime, AllegrexContext &ctx) {
    g_virtual_time_us += g_tick_microseconds;
    promote_expired_delays();

    ThreadRecord *thread = current_thread();
    if (thread == nullptr || thread->state != ThreadState::Running) return;
    if (!g_dispatch_enabled || !g_interrupts_enabled) return;
    const std::int32_t best = best_ready_thread();
    if (best == -1 || thread_priority(best) >= thread->priority) return;

    // Timer preemption resumes exactly at ctx.pc, not at $ra: the thread is not
    // inside a call.  set_runtime_thread_identity() makes the runtime
    // invalidate every nested native chain and re-dispatch from the new
    // context.
    if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_PREEMPT")) {
        std::ostringstream out;
        out << "[PREEMPT] uid=" << thread->uid << " name=" << thread->name
            << " pc=" << hex32(ctx.pc)
            << " v0=" << hex32(ctx.gpr[2]) << " v1=" << hex32(ctx.gpr[3])
            << " s1=" << hex32(ctx.gpr[17])
            << " sp=" << hex32(ctx.gpr[29]) << " ra=" << hex32(ctx.gpr[31]);
        log_line(category::kDispatch, out.str());
    }
    thread->suspended = ctx;
    thread->state = ThreadState::Ready;
    thread->ready_sequence = g_ready_sequence++;
    g_ready.push_back(thread->uid);
    ++g_preempt_count;
    (void)activate_next(runtime, ctx, "timer-preempt");
}

// ---------------------------------------------------------------------------
// Guest memory helpers
// ---------------------------------------------------------------------------

[[nodiscard]] std::uint32_t arena_allocate(std::uint32_t size, std::uint32_t alignment) {
    return arena_take(g_arena, size, alignment, kUserRamTop - kModuleThreadStackSize);
}

// Gives a block back, zeroed as fresh arena memory is.
void arena_release(Runtime &runtime, std::uint32_t address, std::uint32_t size) {
    if (size == 0u) size = 16u;
    if (address == 0u || address >= g_arena.next) return;
    size = std::min(size, g_arena.next - address);
    runtime.memory().zero(address, size);
    arena_give_back(g_arena, address, size);
}
// Frees a recorded block (any allocation API); false when the id is unknown.
bool free_block(Runtime &runtime, std::int32_t uid) {
    const auto found = g_blocks.find(uid);
    if (found == g_blocks.end()) return false;
    arena_release(runtime, found->second.address, found->second.size);
    g_blocks.erase(found);
    return true;
}

[[nodiscard]] bool allocate_thread_stack(std::uint32_t size, std::uint32_t &bottom, std::uint32_t &top) {
    if (size == 0u) return false;
    const std::uint32_t aligned = (size + 0xFFu) & ~0xFFu;
    top = g_stack_next_top & ~0xFFu;
    if (top < aligned) return false;
    bottom = top - aligned;
    if (bottom < g_arena.next) return false;
    g_stack_next_top = bottom;
    return true;
}

} // namespace

// ---------------------------------------------------------------------------
// Filesystem
// ---------------------------------------------------------------------------
namespace {

struct FileHandle {
    std::fstream stream;
    std::string psp_path;
    std::uint64_t position{};
    bool directory{};
    bool synthetic{};
    std::vector<std::string> entries;
    std::size_t entry_index{};
    // Async I/O state (IoFileMgrForUser async family).  Operations complete
    // inline in this cooperative runtime, so a result is always ready by the
    // time the guest polls/waits; the flags keep the PSP-visible protocol.
    std::int64_t async_result{};
    bool has_async_result{};
    bool close_pending{};
    bool open_failed{};
    std::uint32_t async_callback{};
    std::uint32_t async_callback_arg{};
};

std::unordered_map<std::int32_t, FileHandle> g_files;
std::int32_t g_next_fd = 3;
bool g_first_file_logged = false;
std::unordered_set<std::string> g_reported_missing;
std::uint64_t g_open_count = 0;
std::uint64_t g_open_missing = 0;
std::uint64_t g_read_count = 0;
std::uint64_t g_read_bytes = 0;
std::uint64_t g_write_count = 0;
std::uint64_t g_write_bytes = 0;
std::uint64_t g_seek_count = 0;
std::uint64_t g_largest_read = 0;
std::uint32_t g_seek_logs = 0;
std::uint32_t g_seek_offset_logs = 0;
std::uint32_t g_read_logs = 0;
std::set<std::int32_t> g_refer_flag_logs;
std::set<std::uint64_t> g_poll_flag_logs;

// First-time path access tracking (Phase 3 milestone instrumentation).
constexpr std::size_t kTrackedPathCapacity = 64u;
std::vector<std::string> g_tracked_paths;
std::unordered_set<std::string> g_tracked_path_set;
std::uint64_t g_path_access_total = 0;

[[nodiscard]] bool track_path_first_access(const std::string &path) {
    ++g_path_access_total;
    if (!g_tracked_path_set.insert(path).second) return false;
    if (g_tracked_paths.size() < kTrackedPathCapacity) g_tracked_paths.push_back(path);
    return true;
}

void file_line(const std::string &message) { log_line(category::kFile, message); }

[[nodiscard]] std::string guest_string(Runtime &runtime, std::uint32_t address, std::size_t max = 1024u) {
    if (address == 0u || !runtime.memory().contains(address, 1u)) return std::string();
    try {
        return runtime.memory().read_c_string(address, max);
    } catch (const std::exception &) {
        return std::string("<unreadable>");
    }
}

void log_file_request(Runtime &runtime, const char *operation, const std::string &psp_path,
                      const std::string &native_path, const char *result) {
    std::ostringstream out;
    out << operation << " \"" << psp_path << "\" -> \"" << native_path << "\" [" << result << "]"
        << " thread=" << psprecomp::runtime_thread_uid();
    log_line(category::kFilesystem, out.str());
}

void fill_stat(GuestMemory &memory, std::uint32_t address, std::uint32_t mode, std::uint64_t size) {
    if (address == 0u || !memory.contains(address, 64u)) return;
    memory.zero(address, 64u);
    memory.store32(address + 0u, mode);        // st_mode
    memory.store32(address + 4u, 0x00000020u); // st_attr (FIO_S_IFREG)
    memory.store32(address + 8u, static_cast<std::uint32_t>(size));
    memory.store32(address + 12u, static_cast<std::uint32_t>(size >> 32u));
    // atime/ctime/mtime left as zero (epoch) -- only size/mode are consumed in
    // practice before the first blocker.
}

} // namespace

// ---------------------------------------------------------------------------
// HLE installation
// ---------------------------------------------------------------------------

void register_thread_return_target(Runtime &runtime) {
    runtime.register_function(0x00000000u,
        [](Runtime &rt, AllegrexContext &ctx) {
            // Two conventions land on address 0.  A thread entry point returns
            // with $ra = 0, which the kernel treats as the thread exiting.
            // Games also call address 0 as a no-op trap (`jal 0`) with a live
            // $ra -- the kernel's page 0 holds a return stub -- and that must
            // simply return to the caller.  MotorStorm's main loop uses
            // `jal 0` as its iteration terminator, so completing the thread
            // there ends the game instead of restarting the boot stage.
            if (ctx.gpr[31] != 0u) {
                static int trap_logs = 0;
                if (trap_logs < 16) {
                    ++trap_logs;
                    log_line(category::kDispatch, "address-0 no-op trap return ra=" +
                                                      hex32(ctx.gpr[31]) + " sp=" +
                                                      hex32(ctx.gpr[29]) + " a0=" +
                                                      hex32(ctx.gpr[4]));
                }
                ctx.pc = ctx.gpr[31];
                return;
            }
            const std::int32_t uid = g_current_uid;
            const std::uint32_t status = ctx.gpr[2];
            // One-shot exit trace: the saved return addresses on the stack
            // identify the outermost function that returned with $ra = 0.
            std::ostringstream trace;
            trace << "thread entry returned uid=" << uid << " status=" << hex32(status)
                  << " sp=" << hex32(ctx.gpr[29]);
            for (std::int32_t offset = 0; offset <= 0x300; offset += 4) {
                const std::uint32_t address =
                    static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[29]) + offset);
                if (!rt.memory().contains(address, 4u)) break;
                const std::uint32_t value = rt.memory().load32(address);
                if (value < 0x08804000u || value >= 0x08AC0000u || (value & 3u) != 0u) continue;
                trace << " [" << hex32(address) << "]=" << hex32(value);
            }
            log_line(category::kDispatch, trace.str());
            complete_thread(rt, ctx, uid, status, false);
        },
        "psp_thread_return");
}

// ---------------------------------------------------------------------------
// Frame-rate unlock (see motorstorm_frame_rate.hpp)
// ---------------------------------------------------------------------------

namespace {
constexpr std::uint32_t kSetFrameRateAddress = 0x0891BF0Cu;
constexpr std::uint32_t kFlipVcountReturn = 0x089315FCu;
constexpr std::uint32_t kFrameIntervalAddress = 0x08A78E68u;
// Globals written by the timestep setters (0x0891BF0C from fps, 0x0891BF8C
// from a time-scaled step) and the scene's saved copy of the base step.
constexpr std::uint32_t kTimestepFps = 0x08A9F3C4u, kTimestepFlag = 0x08A78D60u,
    kTimestepStep = 0x08A9E21Cu, kTimestepBaseStep = 0x08A9E478u, kTimestepSavedStep = 0x08A9E3A0u,
    kTimestepDamping = 0x08A9E6B8u, kTimestepRate = 0x08AACDA8u;

// Pacing in effect: the INI target, or the retail 30 fps when the governor
// has fallen back. g_frame_rate keeps the configured target.
FrameRatePlan g_active_rate;
bool g_timestep_initialized{};
// sceDisplayGetVcount stays continuous when the vblank period changes.
std::uint64_t g_vblank_base_us{}, g_vblank_base_count{};

std::uint64_t vblank_count(std::uint64_t time_us) {
    return g_vblank_base_count + (time_us - g_vblank_base_us) / g_active_rate.vblank_us;
}
std::uint64_t next_vblank_us(std::uint64_t time_us) {
    const std::uint64_t period = g_active_rate.vblank_us;
    return g_vblank_base_us + ((time_us - g_vblank_base_us) / period + 1u) * period;
}

float load_float(GuestMemory &memory, std::uint32_t address) {
    return std::bit_cast<float>(memory.load32(address));
}
void store_float(GuestMemory &memory, std::uint32_t address, float value) {
    memory.store32(address, std::bit_cast<std::uint32_t>(value));
}

// 0x0891BF0C body: every per-frame constant from frames per second. Operation
// order and constants match the original exactly. Returns its final f12.
float write_timestep(GuestMemory &memory, float fps) {
    const float step = std::bit_cast<float>(0x3F800000u) / fps;          // 1.0 / fps
    const float scale = std::bit_cast<float>(0x42480000u) / fps;         // 50.0 / fps
    const float ratio = fps / std::bit_cast<float>(0x42480000u);         // fps / 50.0
    const float damping = scale * std::bit_cast<float>(0x3F19999Au);     // * 0.6
    const float rate = ratio * std::bit_cast<float>(0x3FD5566Du);        // * 1.6667
    store_float(memory, kTimestepFps, fps);
    store_float(memory, kTimestepStep, step);
    store_float(memory, kTimestepBaseStep, step);
    store_float(memory, kTimestepDamping, damping);
    store_float(memory, kTimestepRate, rate);
    return rate;
}
// 0x0891BF8C body: a time-scaled step (slow motion); the base step is kept.
void write_scaled_step(GuestMemory &memory, float step) {
    const float damping = step * std::bit_cast<float>(0x41F00001u);      // * 30.000002
    store_float(memory, kTimestepStep, step);
    store_float(memory, kTimestepDamping, damping);
    store_float(memory, kTimestepRate, std::bit_cast<float>(0x3F800000u) / damping);
    store_float(memory, kTimestepFps, std::bit_cast<float>(0x3F800000u) / step);
}

void restore_at_scene_boundary(GuestMemory &memory);
// Replaces the guest timestep setter (f12 = frames per second) so scenes use
// the active rate instead of their own 29.97/19.98.
void set_frame_rate(Runtime &runtime, AllegrexContext &ctx) {
    auto &memory = runtime.memory();
    // A scene (re)initialises its timestep here: the safe moment to return
    // to the target rate after a fallback.
    restore_at_scene_boundary(memory);
    const float rate = write_timestep(memory, g_active_rate.game_fps);
    memory.store8(kTimestepFlag, 1u);
    g_timestep_initialized = true;
    ctx.fpr[12] = rate;
    ctx.pc = ctx.gpr[31];
}

void switch_frame_rate(GuestMemory &memory, const FrameRatePlan &next, const std::string &reason) {
    const auto count = vblank_count(g_virtual_time_us);
    g_vblank_base_us += (count - g_vblank_base_count) * g_active_rate.vblank_us;
    g_vblank_base_count = count;
    const float previous_fps = g_active_rate.game_fps;
    g_active_rate = next;
    if (g_timestep_initialized) {
        const float base = load_float(memory, kTimestepBaseStep), step = load_float(memory, kTimestepStep);
        const float saved = load_float(memory, kTimestepSavedStep);
        write_timestep(memory, next.game_fps);
        const float new_base = load_float(memory, kTimestepBaseStep);
        // Keep an active time scale (slow motion) as the same share of the base.
        if (base > 0.0f && step != base)
            write_scaled_step(memory, new_base * (step / base));
        if (saved == base)
            store_float(memory, kTimestepSavedStep, new_base);
        else if (saved > 0.0f)
            store_float(memory, kTimestepSavedStep, saved * (previous_fps / next.game_fps));
    }
    hle_line("frame rate: now " + std::to_string(next.game_fps) + " fps at guest " +
             std::to_string(g_virtual_time_us / 1000000u) + " s (" + reason + ")");
}

struct Pacer {
    bool limit{}, govern{};
    FramePacer clock;
    std::uint64_t sample_wall{}, sample_guest{}, sample_idle{}, sample_frames{}, slept_us{}, frames{};
    // Loading work seen at the previous sample (see loading_activity).
    std::uint64_t sample_uploads{}, sample_replacements{}, sample_pack_loads{};
    std::uint64_t fallbacks{}, restores{};
    // Governor samples: total, ignored as loading work, and below real time.
    std::uint64_t samples{}, disturbed{}, slow{};
    FrameRateGovernor governor;
};
Pacer g_pacer;

// Returns the target after a fallback once the back-off has passed. Called
// where a rate change cannot jolt gameplay: the game's own timestep setter
// (scene start) and loading screens. Mid-race the rate only falls back.
void restore_target(GuestMemory &memory, const char *where) {
    if (!g_pacer.govern || g_active_rate.game_fps == g_frame_rate.game_fps || !g_pacer.governor.restore_due())
        return;
    (void)g_pacer.governor.restored();
    ++g_pacer.restores;
    switch_frame_rate(memory, g_frame_rate, std::string("target restored at ") + where);
}
void restore_at_scene_boundary(GuestMemory &memory) { restore_target(memory, "scene start"); }

// Texture uploads, replacement uploads and pack decodes since the previous
// sample. A burst marks streaming/loading work, not steady-state speed.
bool loading_activity(double seconds) {
    const auto gpu = gpu_report();
    const auto pack = textures::stats();
    const auto uploads = gpu.texture_uploads - gpu.streamed_texture_updates;
    // Only a burst counts as loading. Races keep uploading textures: texture
    // packs stream replacements in the background, and on heavy tracks such as
    // Anguta Glacier the game itself uploads 100-250 textures per second all
    // race long. Lower thresholds marked most race samples as loading, which
    // delayed the 30 fps fallback by half a minute while the game ran slowly.
    const auto delta = [](std::uint64_t now, std::uint64_t before) {
        return static_cast<double>(now - std::min(now, before));
    };
    const double burst = 16.0 * seconds;
    const bool busy = delta(gpu.replacement_uploads, g_pacer.sample_replacements) > burst ||
                      delta(pack.loaded, g_pacer.sample_pack_loads) > burst ||
                      delta(uploads, g_pacer.sample_uploads) > 600.0 * seconds;
    g_pacer.sample_uploads = uploads;
    g_pacer.sample_replacements = gpu.replacement_uploads;
    g_pacer.sample_pack_loads = pack.loaded;
    return busy;
}

// Called once per displayed frame.
void pace_frame(GuestMemory &memory) {
    ++g_pacer.frames;
    // Pace every visible frame, including with audio enabled. Audio's device
    // periods maintain average speed but wake the guest in uneven bursts.
    // Wait before publishing a snapshot, otherwise two early frames can
    // replace each other while the presenter waits for the display.
    if (g_pacer.limit && window_enabled() && audio_frame_pacing_ready()) {
        const auto wall = host_time_us();
        const auto deadline = g_pacer.clock.deadline(g_virtual_time_us, wall);
        if (deadline > wall) {
            host_sleep_until_us(deadline);
            g_pacer.slept_us += host_time_us() - wall;
        }
    } else {
        g_pacer.clock.reset();
    }
    // Governing needs a real-time pacing source (audio or the limiter); an
    // unthrottled diagnostic run has no notion of "below real time".
    if (!g_pacer.govern || !window_enabled() || (!audio_enabled() && !g_pacer.limit)) return;
    const auto wall = host_time_us();
    const auto idle = audio_blocked_us() + g_pacer.slept_us;
    const auto restart = [&] {
        g_pacer.sample_wall = wall;
        g_pacer.sample_guest = g_virtual_time_us;
        g_pacer.sample_idle = idle;
        g_pacer.sample_frames = g_pacer.frames;
    };
    if (g_pacer.sample_wall == 0u) {
        restart();
        (void)loading_activity(0.0);
        return;
    }
    const double sample_seconds = static_cast<double>(wall - g_pacer.sample_wall) / 1e6;
    if (sample_seconds < FrameRateGovernor::kSampleSeconds) return;
    // Loading screens present few frames and stall guest time for reasons
    // unrelated to rendering speed: they are where the target comes back.
    const bool playing = static_cast<double>(g_pacer.frames - g_pacer.sample_frames) >=
                         0.5 * static_cast<double>(g_active_rate.game_fps) * sample_seconds;
    const bool loading = loading_activity(sample_seconds);
    const bool at_target = g_active_rate.game_fps == g_frame_rate.game_fps;
    const auto fallback = plan_frame_rate(30u);
    if (!playing) {
        g_pacer.governor.elapse(sample_seconds);
        restore_target(memory, "loading screen");
        restart();
        return;
    }
    ++g_pacer.samples;
    if (loading) ++g_pacer.disturbed;
    if (static_cast<double>(g_virtual_time_us - g_pacer.sample_guest) / 1e6 < FrameRateGovernor::kSlowRatio * sample_seconds)
        ++g_pacer.slow;
    const auto decision = g_pacer.governor.update(
        sample_seconds, static_cast<double>(g_virtual_time_us - g_pacer.sample_guest) / 1e6,
        static_cast<double>(idle - g_pacer.sample_idle) / 1e6, at_target,
        static_cast<double>(g_frame_rate.game_fps) / static_cast<double>(fallback.game_fps), loading);
    restart();
    if (decision == FrameRateGovernor::Decision::Fallback) {
        ++g_pacer.fallbacks;
        switch_frame_rate(memory, fallback, "PC below real time for 2 s; the target returns at the next scene "
                          "or loading screen after " +
                          std::to_string(static_cast<int>(g_pacer.governor.backoff_seconds())) + " s");
    } else if (decision == FrameRateGovernor::Decision::Restore) {
        ++g_pacer.restores;
        switch_frame_rate(memory, g_frame_rate, "headroom for the target restored");
    }
}

bool option_disabled(const char *name) {
    const char *value = std::getenv(name);
    return value != nullptr && (std::strcmp(value, "0") == 0 || std::strcmp(value, "false") == 0 ||
                                std::strcmp(value, "off") == 0);
}

void install_frame_rate(Runtime &runtime) {
    std::uint32_t target = 0u;
    if (const char *text = std::getenv("PSPRECOMP_MOTORSTORM_FPS");
        text != nullptr && *text != char{} && std::strcmp(text, "original") != 0)
        target = static_cast<std::uint32_t>(std::strtoul(text, nullptr, 10));
    g_frame_rate = plan_frame_rate(target);
    g_active_rate = g_frame_rate;
    g_timestep_initialized = false;
    g_vblank_base_us = g_vblank_base_count = 0u;
    g_pacer = {};
    g_pacer.limit = std::getenv("PSPRECOMP_MOTORSTORM_UNTHROTTLED") == nullptr;
    g_pacer.govern = g_frame_rate.unlocked && g_frame_rate.game_fps > 30.5f &&
                     !option_disabled("PSPRECOMP_MOTORSTORM_DYNAMIC_FPS");
    if (!g_frame_rate.unlocked) {
        hle_line("frame rate: original game pacing");
        return;
    }
    runtime.register_function(kSetFrameRateAddress, &set_frame_rate, "motorstorm_set_frame_rate");
    hle_line("frame rate: target=" + std::to_string(target) + " game_fps=" +
             std::to_string(g_frame_rate.game_fps) + " interval=" + std::to_string(g_frame_rate.interval) +
             " vblank_us=" + std::to_string(g_frame_rate.vblank_us) +
             " dynamic=" + std::to_string(g_pacer.govern));
}
} // namespace

void install_hle(Runtime &runtime, std::uint32_t user_arena_start, const HleOptions &options) {
    gpu_set_publish_guard(wait_for_ge_thread);
    g_options = options;
    g_installed = true;
    g_arena.next = (user_arena_start + 0xFFu) & ~0xFFu;
    g_stack_next_top = kUserRamTop - kModuleThreadStackSize;
    psprecomp::reset_sas_hle_state();
    psprecomp::reset_audio_output2_state();

    // Re-installation (tests) starts from a clean scheduler/IO state.
    g_threads.clear();
    g_ready.clear();
    g_joiners.clear();
    g_semas.clear();
    g_event_flags.clear();
    g_mutexes.clear();
    g_callbacks.clear();
    g_callback_frames.clear();
    g_blocks.clear();
    g_arena.free.clear();
    g_files.clear();
    g_import_calls.clear();
    g_reported_missing.clear();
    g_tracked_paths.clear();
    g_tracked_path_set.clear();
    g_utility_modules.clear();
    g_umd_waiters.clear();
    g_current_uid = 0;
    g_next_thread_uid = 1;
    g_next_sema_uid = 0x100;
    g_next_event_flag_uid = 0x200;
    g_next_mutex_uid = 0x500;
    g_dispatch_enabled = true;
    g_interrupts_enabled = true;
    g_next_callback_uid = 0x300;
    g_next_block_uid = 0x400;
    g_next_fd = 3;
    g_ready_sequence = 1;
    g_virtual_time_us = 0;
    g_music_next_trace = 0;
    g_ctrl_requested_cycle = g_ctrl_requested_mode = 0u;
    g_input_script.clear();
    g_input_script_index = 0;
    // Diagnostic menu automation can hand control back to the real pad in-race.
    // Zero preserves the usual fully scripted input for regression captures.
    g_input_script_live_after = 0;
    if (const char *time = std::getenv("PSPRECOMP_MOTORSTORM_INPUT_SCRIPT_LIVE_AFTER"))
        g_input_script_live_after = std::strtoull(time, nullptr, 0);
    if (const char *path = std::getenv("PSPRECOMP_MOTORSTORM_INPUT_SCRIPT")) {
        std::ifstream script(path);
        if (!script) throw psprecomp::Error("Cannot open controller input script");
        std::uint64_t time;
        std::string buttons;
        unsigned x, y;
        while (script >> time >> buttons >> x >> y) {
            if (x > 255 || y > 255 || (!g_input_script.empty() && time < g_input_script.back().time))
                throw psprecomp::Error("Invalid controller input script record");
            g_input_script.push_back({time, static_cast<std::uint32_t>(std::stoul(buttons, nullptr, 0)),
                                       static_cast<std::uint8_t>(x), static_cast<std::uint8_t>(y)});
        }
        if (!script.eof()) throw psprecomp::Error("Malformed controller input script");
    }
    g_delay_sequence = 1;
    g_switch_count = 0;
    g_delay_count = 0;
    g_preempt_count = 0;
    g_deadlock_count = 0;
    g_ge_list_logs = 0;
    g_thread_wake_logs = 0;
    g_open_count = 0;
    g_open_missing = 0;
    g_read_count = 0;
    g_read_bytes = 0;
    g_write_count = 0;
    g_write_bytes = 0;
    g_seek_count = 0;
    g_seek_offset_logs = 0;
    g_largest_read = 0;
    g_seek_logs = 0;
    g_path_access_total = 0;
    g_umd_state = kUmdPresent | kUmdReady;
    g_umd_activated = false;
    g_umd_callback_uid = 0;
    g_umd_transitions = 0;
    g_display = DisplayState{};
    g_ge_callback_table.clear();
    g_ge_pending_callbacks.clear();
    g_ge_callback_id = 0u;
    g_next_ge_callback_id = 0x40000000u;
    g_ge_submissions = 0;
    g_ge_stall_updates = 0;
    g_ge_sync_calls = 0;
    g_ge_first_submission_logged = false;
    g_ge_frame_dumps = 0;
    g_ge_list_records.clear();
    motorstorm::reset_software_ge();
    g_first_file_logged = false;
    g_read_logs = 0;
    g_refer_flag_logs.clear();
    g_poll_flag_logs.clear();

    // Module thread (uid 0): mirrors the PSP kernel thread that runs
    // module_start.  The bootstrap sets the actual registers before run().
    ThreadRecord module_thread{};
    module_thread.uid = 0;
    module_thread.name = "module_start";
    module_thread.priority = 32u;
    module_thread.stack_size = kModuleThreadStackSize;
    module_thread.stack_top = kUserRamTop;
    module_thread.stack_bottom = kUserRamTop - kModuleThreadStackSize;
    module_thread.kernel_context = module_thread.stack_top - 0x100u;
    module_thread.state = ThreadState::Running;
    g_threads.emplace(0, std::move(module_thread));

    runtime.memory().zero(kUserRamTop - kModuleThreadStackSize, kModuleThreadStackSize);
    register_thread_return_target(runtime);
    runtime.register_function(kCallbackReturnAddress, &callback_return, "psp_callback_return");

    const std::uint64_t tick_interval = []() {
        const char *text = std::getenv("PSPRECOMP_TIME_TICK_DISPATCHES");
        if (text == nullptr || *text == '\0') return std::uint64_t{256};
        char *end = nullptr;
        const unsigned long long value = std::strtoull(text, &end, 0);
        return end != text && *end == '\0' ? static_cast<std::uint64_t>(value) : std::uint64_t{256};
    }();
    if (tick_interval != 0u) {
    g_tick_microseconds = std::max<std::uint64_t>(1u, tick_interval / 4u);
        psprecomp::set_runtime_starvation_hook(&starvation_tick, tick_interval);
        hle_line("execution clock: interval=" + std::to_string(tick_interval) +
                 " dispatches tick_us=" + std::to_string(g_tick_microseconds));
    }

    install_frame_rate(runtime);

    // -----------------------------------------------------------------------
    // Kernel_Library
    // -----------------------------------------------------------------------
    register_import(runtime, "Kernel_Library", 0x092968F4u, "sceKernelCpuSuspendIntr",
        [](Runtime &, AllegrexContext &ctx) {
            const auto previous=g_interrupts_enabled?1u:0u;
            g_interrupts_enabled=false;ctx.set_gpr(2,previous);
        });
    register_import(runtime, "Kernel_Library", 0x5F10D406u, "sceKernelCpuResumeIntr",
        [](Runtime &, AllegrexContext &ctx) {
            g_interrupts_enabled=ctx.gpr[4]!=0;ctx.set_gpr(2,0u);
        });

    // -----------------------------------------------------------------------
    // SysMemUserForUser
    // -----------------------------------------------------------------------
    register_import(runtime, "SysMemUserForUser", 0x7591C7DBu, "sceKernelSetCompiledSdkVersion",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "SysMemUserForUser", 0x91DE343Cu, "sceKernelSetCompiledSdkVersion500_550",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "SysMemUserForUser", 0xF77D77CBu, "sceKernelSetCompilerVersion",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "SysMemUserForUser", 0x237DBD4Fu, "sceKernelAllocPartitionMemory",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t name_address = ctx.gpr[5];
            const std::uint32_t size = ctx.gpr[7];
            const std::string name = name_address != 0u ? guest_string(rt, name_address, 64u) : "unnamed";
            const std::uint32_t address = arena_allocate(size, 64u);
            if (address == 0u) {
                error_line("sceKernelAllocPartitionMemory: arena exhausted for size=" + hex32(size));
                ctx.set_gpr(2, 0x800200D9u); // SCE_KERNEL_ERROR_MEMBLOCK_ALLOC_FAILED
                return;
            }
            const std::int32_t uid = g_next_block_uid++;
            g_blocks.emplace(uid, BlockRecord{name, address, size, 0u});
            std::ostringstream out;
            out << "sceKernelAllocPartitionMemory \"" << name << "\" uid=" << uid
                << " size=" << hex32(size) << " -> " << hex32(address);
            hle_line(out.str());
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "SysMemUserForUser", 0xB6D61D02u, "sceKernelFreePartitionMemory",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, free_block(rt, uid) ? 0u : 0x800200CBu);
        });
    register_import(runtime, "SysMemUserForUser", 0x9D9A5BA1u, "sceKernelGetBlockHeadAddr",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_blocks.find(static_cast<std::int32_t>(ctx.gpr[4]));
            ctx.set_gpr(2, found != g_blocks.end() ? found->second.address : 0u);
        });
    register_import(runtime, "SysMemUserForUser", 0xA291F107u, "sceKernelMaxFreeMemSize",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, arena_free_largest(g_arena, kUserRamTop - kModuleThreadStackSize));
        });
    register_import(runtime, "SysMemUserForUser", 0xF919F628u, "sceKernelTotalFreeMemSize",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, arena_free_total(g_arena, kUserRamTop - kModuleThreadStackSize));
        });
    register_import(runtime, "SysMemUserForUser", 0x13A5ABEFu, "sceKernelPrintf",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string format = guest_string(rt, ctx.gpr[4], 512u);
            hle_line("sceKernelPrintf \"" + format + "\"");
        });
    // sceKernelAllocMemoryBlock / GetMemoryBlockAddr / FreeMemoryBlock: the
    // alternative block allocator next to the partition API.  MotorStorm asks
    // for its multi-megabyte main heap through this path.
    register_import(runtime, "SysMemUserForUser", 0xFE707FDFu, "sceKernelAllocMemoryBlock",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t name_address = ctx.gpr[4];
            const std::uint32_t size = ctx.gpr[6];
            const std::string name = name_address != 0u ? guest_string(rt, name_address, 64u) : "unnamed";
            const std::uint32_t address = arena_allocate(size, 64u);
            if (address == 0u) {
                error_line("sceKernelAllocMemoryBlock: arena exhausted for size=" + hex32(size));
                ctx.set_gpr(2, 0x800200D9u);
                return;
            }
            const std::int32_t uid = g_next_block_uid++;
            g_blocks.emplace(uid, BlockRecord{name, address, size, 0u});
            std::ostringstream out;
            out << "sceKernelAllocMemoryBlock \"" << name << "\" uid=" << uid
                << " size=" << hex32(size) << " -> " << hex32(address);
            hle_line(out.str());
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "SysMemUserForUser", 0xDB83A952u, "sceKernelGetMemoryBlockAddr",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t address_out = ctx.gpr[5];
            const auto found = g_blocks.find(uid);
            const std::uint32_t address = found != g_blocks.end() ? found->second.address : 0u;
            if (address_out != 0u && rt.memory().contains(address_out, 4u))
                rt.memory().store32(address_out, address);
            if (found == g_blocks.end()) {
                error_line("sceKernelGetMemoryBlockAddr unknown uid=" + std::to_string(uid));
                ctx.set_gpr(2, static_cast<std::uint32_t>(-1));
                return;
            }
            std::ostringstream out;
            out << "sceKernelGetMemoryBlockAddr uid=" << uid << " -> " << hex32(address);
            hle_line(out.str());
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "SysMemUserForUser", 0x50F61D8Au, "sceKernelFreeMemoryBlock",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, free_block(rt, uid) ? 0u : static_cast<std::uint32_t>(-1));
        });

    // -----------------------------------------------------------------------
    // LoadExecForUser
    // -----------------------------------------------------------------------
    register_import(runtime, "LoadExecForUser", 0x4AC57943u, "sceKernelRegisterExitCallback",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "LoadExecForUser", 0x05572A5Fu, "sceKernelExitGame",
        [](Runtime &rt, AllegrexContext &) {
            rt.stop("Guest requested sceKernelExitGame");
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: thread life cycle
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0x446D8DE6u, "sceKernelCreateThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "unnamed";
            const std::uint32_t requested_stack = ctx.gpr[7];
            if (requested_stack < 0x200u) {
                ctx.set_gpr(2, 0x80020194u);
                return;
            }
            std::uint32_t stack_bottom = 0;
            std::uint32_t stack_top = 0;
            if (!allocate_thread_stack(requested_stack, stack_bottom, stack_top)) {
                error_line("sceKernelCreateThread: no stack space for " + hex32(requested_stack));
                ctx.set_gpr(2, 0x80020190u);
                return;
            }
            ThreadRecord record{};
            record.uid = g_next_thread_uid++;
            record.name = name;
            record.entry = ctx.gpr[5];
            record.priority = ctx.gpr[6];
            record.stack_size = (requested_stack + 0xFFu) & ~0xFFu;
            record.stack_top = stack_top;
            record.stack_bottom = stack_bottom;
            record.kernel_context = stack_top - 0x100u;
            record.state = ThreadState::Created;
            rt.memory().zero(stack_bottom, record.stack_size);
            rt.memory().store32(stack_bottom, static_cast<std::uint32_t>(record.uid));
            rt.memory().store32(record.kernel_context + 0xC0u, static_cast<std::uint32_t>(record.uid));
            rt.memory().store32(record.kernel_context + 0xC8u, stack_bottom);
            rt.memory().store32(record.kernel_context + 0xF8u, 0xFFFFFFFFu);
            rt.memory().store32(record.kernel_context + 0xFCu, 0xFFFFFFFFu);
            const std::int32_t uid = record.uid;
            std::ostringstream out;
            out << "sceKernelCreateThread uid=" << uid << " name=\"" << name << "\""
                << " entry=" << hex32(record.entry) << " priority=" << record.priority
                << " stack=" << hex32(record.stack_size) << " range="
                << hex32(stack_bottom) << "-" << hex32(stack_top);
            hle_line(out.str());
            g_threads.emplace(uid, std::move(record));
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "ThreadManForUser", 0xF475845Du, "sceKernelStartThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            ThreadRecord &thread = found->second;
            // A thread that exited becomes dormant on the PSP and may be started
            // again; MotorStorm restarts its StreamThread for each new music
            // stream after the profile load.  Only a thread that has never run
            // or has completed can be started.
            if (thread.state != ThreadState::Created && thread.state != ThreadState::Completed) {
                ctx.set_gpr(2, 0x800201A4u);
                return;
            }
            if (thread.state == ThreadState::Completed) {
                thread.exit_status = 0;
                thread.suspended = AllegrexContext{};
                thread.callback_wait = false;
                thread.callback_wait_kind = CallbackWaitKind::None;
                thread.wait_has_deadline = false;
            }
            const std::uint32_t arg_size = ctx.gpr[5];
            const std::uint32_t arg_ptr = ctx.gpr[6];
            std::uint32_t sp = thread.kernel_context;
            AllegrexContext next{};
            if (arg_ptr != 0u && arg_size != 0u) {
                const std::uint32_t aligned = (arg_size + 0xFu) & ~0xFu;
                if (sp < thread.stack_bottom + aligned + 64u ||
                    !rt.memory().contains(arg_ptr, arg_size)) {
                    ctx.set_gpr(2, 0x800200D3u);
                    return;
                }
                sp -= aligned;
                std::vector<std::uint8_t> arguments(arg_size);
                rt.memory().copy_out(arg_ptr, arguments);
                rt.memory().copy_in(sp, arguments);
                next.set_gpr(4, arg_size);
                next.set_gpr(5, sp);
            } else {
                next.set_gpr(4, 0u);
                next.set_gpr(5, 0u);
            }
            sp -= 64u;
            next.set_gpr(26, thread.kernel_context);
            next.set_gpr(28, ctx.gpr[28]);
            next.set_gpr(29, sp);
            next.set_gpr(30, sp);
            next.set_gpr(31, 0u);
            next.pc = thread.entry;
            make_ready(thread, 0u);
            thread.suspended = next;
            std::ostringstream out;
            out << "sceKernelStartThread uid=" << uid << " name=\"" << thread.name << "\""
                << " entry=" << hex32(thread.entry) << " priority=" << thread.priority
                << " caller=" << g_current_uid;
            hle_line(out.str());
            if (g_dispatch_enabled && g_interrupts_enabled &&
                thread.priority < thread_priority(g_current_uid)) {
                ThreadRecord *caller = current_thread();
                if (caller != nullptr) {
                    caller->suspended = ctx;
                    caller->suspended.pc = ctx.gpr[31];
                    caller->state = ThreadState::Ready;
                    caller->ready_sequence = g_ready_sequence++;
                    g_ready.push_back(caller->uid);
                }
                (void)activate_next(rt, ctx, "thread-control");
            } else {
                ctx.set_gpr(2, 0u);
            }
        });
    register_import(runtime, "ThreadManForUser", 0xAA73C935u, "sceKernelExitThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t status = ctx.gpr[4];
            complete_thread(rt, ctx, g_current_uid, status, false);
        });
    register_import(runtime, "ThreadManForUser", 0x809CE29Bu, "sceKernelExitDeleteThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t status = ctx.gpr[4];
            complete_thread(rt, ctx, g_current_uid, status, true);
        });
    register_import(runtime, "ThreadManForUser", 0x616403BAu, "sceKernelTerminateThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (uid == g_current_uid) {
                complete_thread(rt, ctx, uid, 0u, false);
                return;
            }
            complete_thread(rt, ctx, uid, 0u, false);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x383F7BCCu, "sceKernelTerminateDeleteThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (g_threads.find(uid) == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (uid == g_current_uid) {
                complete_thread(rt, ctx, uid, 0u, true);
                return;
            }
            complete_thread(rt, ctx, uid, 0u, true);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x9FA03CD3u, "sceKernelDeleteThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (uid == g_current_uid) {
                complete_thread(rt, ctx, uid, 0u, true);
                return;
            }
            g_threads.erase(found);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x278C0DF5u, "sceKernelWaitThreadEnd",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t status_ptr = ctx.gpr[5];
            const std::uint32_t timeout_ptr = ctx.gpr[6];
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (found->second.state == ThreadState::Completed ||
                found->second.state == ThreadState::Created) {
                // A never-started (dormant) thread ends the wait immediately
                // with its unset exit status, exactly like an ended one.
                if (status_ptr != 0u && rt.memory().contains(status_ptr, 4u))
                    rt.memory().store32(status_ptr, found->second.exit_status);
                ctx.set_gpr(2, 0u);
                return;
            }
            // Diagnostic: log each distinct waiter -> target join so a stuck
            // shutdown can be traced to the exact thread it is waiting for.
            {
                static std::set<std::string> logged_joins;
                const std::string key = std::to_string(g_current_uid) + "->" + std::to_string(uid);
                if (logged_joins.insert(key).second)
                    hle_line("sceKernelWaitThreadEnd waiter=" + std::to_string(g_current_uid) +
                             " target=" + std::to_string(uid) + " name=\"" + found->second.name +
                             "\" state=" + std::to_string(static_cast<int>(found->second.state)));
            }
            g_joiners[uid].push_back(Joiner{g_current_uid, status_ptr});
            ThreadRecord *thread = current_thread();
            if (thread != nullptr && timeout_ptr != 0u && rt.memory().contains(timeout_ptr, 4u)) {
                const std::uint32_t timeout = rt.memory().load32(timeout_ptr);
                if (timeout != 0u) {
                    thread->wait_has_deadline = true;
                    thread->wait_deadline_us = g_virtual_time_us + timeout;
                }
            }
            (void)block_current(rt, ctx, ThreadState::Waiting, "wait-thread-end");
        });
    register_import(runtime, "ThreadManForUser", 0x293B45B8u, "sceKernelGetThreadId",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, static_cast<std::uint32_t>(g_current_uid)); });
    register_import(runtime, "ThreadManForUser", 0x71BC9871u, "sceKernelChangeThreadPriority",
        [](Runtime &, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            found->second.priority = ctx.gpr[5];
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x94AA61EEu, "sceKernelGetThreadCurrentPriority",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_threads.find(g_current_uid);
            ctx.set_gpr(2, found != g_threads.end() ? found->second.priority : 32u);
        });
    register_import(runtime, "ThreadManForUser", 0xEA748E31u, "sceKernelChangeCurrentThreadAttr",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "ThreadManForUser", 0x17C1684Eu, "sceKernelReferThreadStatus",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t address = ctx.gpr[5];
            // SceKernelThreadInfo is exactly 0x68 bytes:
            // size@0x00, name[32]@0x04, attr@0x24, status@0x28, entry@0x2C,
            // stack@0x30, stackSize@0x34, gpReg@0x38, initPriority@0x3C,
            // currentPriority@0x40, waitType@0x44, waitId@0x48,
            // wakeupCount@0x4C, exitStatus@0x50, runClocks@0x54,
            // intrPreemptCount@0x5C, threadPreemptCount@0x60, releaseCount@0x64.
            // Over-long or shifted writes corrupt the caller's stack frame.
            constexpr std::uint32_t kThreadInfoSize = 0x68u;
            const auto found = g_threads.find(uid);
            if (found == g_threads.end() || address == 0u ||
                !rt.memory().contains(address, kThreadInfoSize)) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            rt.memory().zero(address, kThreadInfoSize);
            rt.memory().store32(address + 0u, kThreadInfoSize);
            const std::size_t name_length = std::min<std::size_t>(found->second.name.size(), 31u);
            for (std::size_t index = 0; index < name_length; ++index)
                rt.memory().store8(address + 4u + static_cast<std::uint32_t>(index),
                                   static_cast<std::uint8_t>(found->second.name[index]));
            const std::uint32_t status =
                found->second.state == ThreadState::Completed ? 4u
                : found->second.state == ThreadState::Running ? 1u : 2u;
            rt.memory().store32(address + 0x28u, status);
            rt.memory().store32(address + 0x2Cu, found->second.entry);
            rt.memory().store32(address + 0x30u, found->second.stack_top);
            rt.memory().store32(address + 0x34u, found->second.stack_size);
            rt.memory().store32(address + 0x3Cu, found->second.priority);
            rt.memory().store32(address + 0x40u, found->second.priority);
            rt.memory().store32(address + 0x4Cu, found->second.wakeup_count);
            rt.memory().store32(address + 0x50u, found->second.exit_status);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x3AD58B8Cu, "sceKernelSuspendDispatchThread",
        [](Runtime &, AllegrexContext &ctx) {
            const std::uint32_t previous = g_dispatch_enabled ? 1u : 0u;
            g_dispatch_enabled = false;
            ctx.set_gpr(2, previous);
        });
    register_import(runtime, "ThreadManForUser", 0x27E22EC2u, "sceKernelResumeDispatchThread",
        [](Runtime &, AllegrexContext &ctx) {
            g_dispatch_enabled = ctx.gpr[4] != 0u;
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xCEADEB47u, "sceKernelDelayThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t microseconds = ctx.gpr[4];
            ++g_delay_count;
            ThreadRecord *thread = current_thread();
            if (thread == nullptr) {
                rt.stop("sceKernelDelayThread with no current thread");
                return;
            }
            save_continuation(*thread, ctx);
            thread->suspended.set_gpr(2, 0u);
            thread->state = ThreadState::Delayed;
            thread->delay_until_us = g_virtual_time_us + microseconds;
            if (!activate_next(rt, ctx, "delay")) {
                ++g_deadlock_count;
                rt.stop("PSP scheduler deadlock while delaying thread");
            }
        });
    register_import(runtime, "ThreadManForUser", 0x68DA9E36u, "sceKernelDelayThreadCB",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t microseconds = ctx.gpr[4];
            ++g_delay_count;
            ThreadRecord *thread = current_thread();
            if (thread == nullptr) {
                rt.stop("sceKernelDelayThreadCB with no current thread");
                return;
            }
            save_continuation(*thread, ctx);
            thread->suspended.set_gpr(2, 0u);
            thread->state = ThreadState::Delayed;
            thread->delay_until_us = g_virtual_time_us + microseconds;
            if (!activate_next(rt, ctx, "delay-cb")) {
                ++g_deadlock_count;
                rt.stop("PSP scheduler deadlock while delaying thread");
            }
        });
    register_import(runtime, "ThreadManForUser", 0x9ACE131Eu, "sceKernelSleepThread",
        [](Runtime &rt, AllegrexContext &ctx) {
            ThreadRecord *thread = current_thread();
            if (thread == nullptr) {
                rt.stop("sceKernelSleepThread with no current thread");
                return;
            }
            if (thread->wakeup_count != 0u) {
                --thread->wakeup_count;
                ctx.set_gpr(2, 0u);
                return;
            }
            (void)block_current(rt, ctx, ThreadState::Waiting, "sleep");
        });
    register_import(runtime, "ThreadManForUser", 0x82826F70u, "sceKernelSleepThreadCB",
        [](Runtime &rt, AllegrexContext &ctx) {
            ThreadRecord *thread = current_thread();
            if (thread == nullptr) {
                rt.stop("sceKernelSleepThreadCB with no current thread");
                return;
            }
            if (thread->wakeup_count != 0u) {
                --thread->wakeup_count;
                ctx.set_gpr(2, 0u);
                return;
            }
            (void)block_current(rt, ctx, ThreadState::Waiting, "sleep-cb");
        });
    register_import(runtime, "ThreadManForUser", 0xD59EAD2Fu, "sceKernelWakeupThread",
        [](Runtime &, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, static_cast<std::uint32_t>(-1));
                return;
            }
            if (found->second.state == ThreadState::Waiting) {
                wake_thread(found->second, 0u, "thread-wakeup");
                ctx.set_gpr(2, 0u);
            } else {
                ++found->second.wakeup_count;
                ctx.set_gpr(2, 0u);
            }
        });
    register_import(runtime, "ThreadManForUser", 0xFCCFAD26u, "sceKernelCancelWakeupThread",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_threads.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            const std::uint32_t previous = found->second.wakeup_count;
            found->second.wakeup_count = 0u;
            ctx.set_gpr(2, previous);
        });
    // NOTE: several ThreadManForUser NIDs in the import table (0xF8170FBE,
    // 0x3B183E26, 0x0DDCD2C9, 0x840E8133, ...) do not have a verified semantic
    // yet.  They are deliberately left unregistered so the runtime prints a
    // precise [HLE MISSING] diagnostic with module/NID/PC/RA when the guest
    // genuinely calls them.

    // -----------------------------------------------------------------------
    // ThreadManForUser: time
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0xDB738F35u, "sceKernelGetSystemTime",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t address = ctx.gpr[4];
            if (address != 0u && rt.memory().contains(address, 8u)) {
                rt.memory().store32(address, static_cast<std::uint32_t>(g_virtual_time_us));
                rt.memory().store32(address + 4u, static_cast<std::uint32_t>(g_virtual_time_us >> 32u));
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x82BC5777u, "sceKernelGetSystemTimeWide",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, static_cast<std::uint32_t>(g_virtual_time_us));
            ctx.set_gpr(3, static_cast<std::uint32_t>(g_virtual_time_us >> 32u));
        });
    register_import(runtime, "ThreadManForUser", 0x369ED59Du, "sceKernelGetSystemTimeLow",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, static_cast<std::uint32_t>(g_virtual_time_us));
        });
    register_import(runtime, "ThreadManForUser", 0x110DEC9Au, "sceKernelUSec2SysClock",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t address = ctx.gpr[5];
            if (address != 0u && rt.memory().contains(address, 8u)) {
                rt.memory().store32(address, ctx.gpr[4]);
                rt.memory().store32(address + 4u, 0u);
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xC8CD158Cu, "sceKernelUSec2SysClockWide",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, ctx.gpr[4]);
            ctx.set_gpr(3, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xBA6B92E2u, "sceKernelSysClock2USec",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t clock_address = ctx.gpr[4];
            const std::uint32_t seconds_address = ctx.gpr[5];
            const std::uint32_t usec_address = ctx.gpr[6];
            std::uint64_t clock = 0u;
            if (clock_address != 0u && rt.memory().contains(clock_address, 8u))
                clock = rt.memory().load32(clock_address) |
                        (static_cast<std::uint64_t>(rt.memory().load32(clock_address + 4u)) << 32u);
            if (seconds_address != 0u && rt.memory().contains(seconds_address, 4u))
                rt.memory().store32(seconds_address, static_cast<std::uint32_t>(clock / 1'000'000ull));
            if (usec_address != 0u && rt.memory().contains(usec_address, 4u))
                rt.memory().store32(usec_address, static_cast<std::uint32_t>(clock % 1'000'000ull));
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xE1619D7Cu, "sceKernelSysClock2USecWide",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, static_cast<std::uint32_t>(ctx.gpr[4] / 1'000'000u));
            ctx.set_gpr(3, static_cast<std::uint32_t>(ctx.gpr[4] % 1'000'000u));
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: callbacks
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0xE81CAF8Fu, "sceKernelCreateCallback",
        [](Runtime &rt, AllegrexContext &ctx) {
            CallbackRecord record{};
            record.name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "callback";
            record.entry = ctx.gpr[5];
            record.arg = ctx.gpr[6];
            record.owner_uid = g_current_uid;
            const std::int32_t uid = g_next_callback_uid++;
            std::ostringstream out;
            out << "sceKernelCreateCallback uid=" << uid << " name=\"" << record.name
                << "\" entry=" << hex32(record.entry) << " arg=" << hex32(record.arg);
            hle_line(out.str());
            g_callbacks.emplace(uid, std::move(record));
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "ThreadManForUser", 0xEDBA5844u, "sceKernelDeleteCallback",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto removed = g_callbacks.erase(uid);
            if (removed == 1u) {
                g_callback_frames.erase(uid);
                if (g_umd_callback_uid == uid) {
                    g_umd_callback_uid = 0;
                    log_line(category::kUmd, "callback uid=" + std::to_string(uid) +
                                                 " deleted; UMD callback unregistered");
                }
                hle_line("sceKernelDeleteCallback uid=" + std::to_string(uid));
                ctx.set_gpr(2, 0u);
            } else {
                ctx.set_gpr(2, 0x800201A6u);
            }
        });
    register_import(runtime, "ThreadManForUser", 0x349D6D6Cu, "sceKernelCheckCallback",
        [](Runtime &rt, AllegrexContext &ctx) {
            if (service_owned_callback(rt,ctx,0,true)) return;
            // Watch self-test (PSPRECOMP_MOTORSTORM_PROBE=1): write a canary to
            // the scene-object pointer so a write watch on it can be shown to
            // work before trusting a "no writes" result.
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_PROBE")) {
                static bool probed = false;
                if (!probed) {
                    probed = true;
                    rt.memory().store32(0x08AAE48Cu, 0xC0FFEE00u);
                    log_line(category::kGe, "probe wrote 0xC0FFEE00 to 0x08AAE48C");
                }
            }
            // Service one pending GE queue interrupt in the calling thread,
            // exactly like the kernel's callback dispatcher: the callback runs
            // on top of this call and the interrupted code resumes when it
            // returns through the trampoline at address 4.
            if (!g_ge_pending_callbacks.empty()) {
                const GePendingCallback event = g_ge_pending_callbacks.front();
                g_ge_pending_callbacks.pop_front();
                const auto found = g_ge_callback_table.find(event.callback_id);
                if (found != g_ge_callback_table.end()) {
                    const std::uint32_t func = event.finish ? found->second.finish_func
                                                            : found->second.signal_func;
                    const std::uint32_t arg = event.finish ? found->second.finish_arg
                                                           : found->second.signal_arg;
                    if (func != 0u) {
                        ++g_ge_callbacks_delivered;
                        ctx.set_gpr(2, 1u);
                        notify_guest_function(rt, ctx, func, event.token, arg,
                                              event.finish ? "ge-finish" : "ge-signal",
                                              "CheckCallback");
                        ctx.set_gpr(6, event.next_pc);
                        return;
                    }
                }
            }
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: semaphores
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0xD6DA4BA1u, "sceKernelCreateSema",
        [](Runtime &rt, AllegrexContext &ctx) {
            SemaRecord record{};
            record.name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "sema";
            record.count = static_cast<std::int32_t>(ctx.gpr[6]);
            record.initial_count = record.count;
            record.maximum = static_cast<std::int32_t>(ctx.gpr[7]);
            const std::int32_t uid = g_next_sema_uid++;
            std::ostringstream out;
            out << "sceKernelCreateSema uid=" << uid << " name=\"" << record.name
                << "\" initial=" << record.count << " max=" << record.maximum;
            hle_line(out.str());
            g_semas.emplace(uid, std::move(record));
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "ThreadManForUser", 0x28B6489Cu, "sceKernelDeleteSema",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_semas.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_semas.end()) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            for (const SemaWaiter &waiter : found->second.waiters) {
                const auto thread = g_threads.find(waiter.uid);
                if (thread != g_threads.end()) wake_thread(thread->second, 0x800201A7u, "sema-deleted");
            }
            g_semas.erase(found);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x3F53E640u, "sceKernelSignalSema",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_semas.find(static_cast<std::int32_t>(ctx.gpr[4]));
            const auto amount = static_cast<std::int32_t>(ctx.gpr[5]);
            if (found == g_semas.end() || amount <= 0 ||
                static_cast<std::int64_t>(found->second.count) + amount > found->second.maximum) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            SemaRecord &sema = found->second;
            sema.count += amount;
            if (sema.name == "pthread mutex" && sema.maximum == 1) sema.mutex_owner = -1;
            // Wake waiters by PSP priority, then arrival order.
            std::sort(sema.waiters.begin(), sema.waiters.end(),
                [](const SemaWaiter &left, const SemaWaiter &right) {
                    const std::uint32_t left_priority = thread_priority(left.uid);
                    const std::uint32_t right_priority = thread_priority(right.uid);
                    if (left_priority != right_priority) return left_priority < right_priority;
                    return left.uid < right.uid;
                });
            auto waiter = sema.waiters.begin();
            while (waiter != sema.waiters.end() && sema.count >= waiter->amount) {
                sema.count -= waiter->amount;
                if (sema.name == "pthread mutex" && sema.maximum == 1)
                    sema.mutex_owner = waiter->uid;
                const auto thread = g_threads.find(waiter->uid);
                if (thread != g_threads.end()) wake_thread(thread->second, 0u, "sema-signal");
                waiter = sema.waiters.erase(waiter);
            }
            ctx.set_gpr(2, 0u);
        });
    auto semaphore_wait = [](Runtime &rt, AllegrexContext &ctx, bool callbacks) {
        if (callbacks && service_owned_callback(rt,ctx,ctx.pc)) return;
        if (auto *thread=current_thread()) {
            thread->callback_wait=callbacks;thread->callback_wait_pc=ctx.pc;
            thread->callback_wait_kind=callbacks?CallbackWaitKind::Semaphore:CallbackWaitKind::None;
            thread->callback_wait_object=static_cast<std::int32_t>(ctx.gpr[4]);
        }
        const auto found = g_semas.find(static_cast<std::int32_t>(ctx.gpr[4]));
        const auto amount = static_cast<std::int32_t>(ctx.gpr[5]);
        if (found == g_semas.end() || amount <= 0 || amount > found->second.maximum) {
            ctx.set_gpr(2, 0x80020199u);
            return;
        }
        if (found->second.count >= amount) {
            if (auto *thread=current_thread()) {thread->callback_wait=false;thread->callback_wait_kind=CallbackWaitKind::None;}
            found->second.count -= amount;
            if (found->second.name == "pthread mutex" && found->second.maximum == 1)
                found->second.mutex_owner = g_current_uid;
            ctx.set_gpr(2, 0u);
            return;
        }
        if (found->second.name=="pthread mutex" && found->second.mutex_owner==g_current_uid) {
            std::ostringstream out;
            out << "self-wait sema=" << found->first << " thread=" << g_current_uid
                << " ra=" << hex32(ctx.gpr[31]) << " guest_mutex=" << hex32(ctx.gpr[18])
                << " self=" << hex32(ctx.gpr[20]) << " sp=" << hex32(ctx.gpr[29]);
            if (rt.memory().contains(ctx.gpr[18],24))
                for (std::uint32_t i=0;i<6;++i)
                    out << " word" << i << '=' << hex32(rt.memory().load32(ctx.gpr[18]+i*4));
            if (rt.memory().contains(ctx.gpr[29]+0x6C,4))
                out << " caller=" << hex32(rt.memory().load32(ctx.gpr[29]+0x6C));
            log_line(category::kDispatch,out.str());
        }
        found->second.waiters.push_back(SemaWaiter{g_current_uid, amount});
        (void)block_current(rt, ctx, ThreadState::Waiting,
                            ("wait-sema-" + std::to_string(found->first)).c_str());
    };
    register_import(runtime, "ThreadManForUser", 0x4E3A1105u, "sceKernelWaitSema",
        [semaphore_wait](Runtime &rt,AllegrexContext &ctx){semaphore_wait(rt,ctx,false);});
    register_import(runtime, "ThreadManForUser", 0x6D212BACu, "sceKernelWaitSemaCB",
        [semaphore_wait](Runtime &rt,AllegrexContext &ctx){semaphore_wait(rt,ctx,true);});
    register_import(runtime, "ThreadManForUser", 0x58B1F937u, "sceKernelPollSema",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_semas.find(static_cast<std::int32_t>(ctx.gpr[4]));
            const auto amount = static_cast<std::int32_t>(ctx.gpr[5]);
            if (found == g_semas.end() || amount <= 0 || amount > found->second.maximum) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            if (found->second.count < amount) {
                ctx.set_gpr(2, 0x800201AEu);
                return;
            }
            found->second.count -= amount;
            if (found->second.name == "pthread mutex" && found->second.maximum == 1)
                found->second.mutex_owner = g_current_uid;
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: event flags
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0x55C20A00u, "sceKernelCreateEventFlag",
        [](Runtime &rt, AllegrexContext &ctx) {
            EventFlagRecord record{};
            record.name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "event_flag";
            record.current_pattern = ctx.gpr[6];
            record.initial_pattern = ctx.gpr[6];
            const std::int32_t uid = g_next_event_flag_uid++;
            std::ostringstream out;
            out << "sceKernelCreateEventFlag uid=" << uid << " name=\"" << record.name
                << "\" initial=" << hex32(record.current_pattern);
            hle_line(out.str());
            g_event_flags.emplace(uid, std::move(record));
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "ThreadManForUser", 0xEF9E4C70u, "sceKernelDeleteEventFlag",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_event_flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            for (const FlagWaiter &waiter : found->second.waiters) {
                const auto thread = g_threads.find(waiter.uid);
                if (thread != g_threads.end()) wake_thread(thread->second, 0x800201A7u, "event-flag-deleted");
            }
            g_event_flags.erase(found);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x1FB15A32u, "sceKernelSetEventFlag",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto found = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_event_flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            EventFlagRecord &flag = found->second;
            signal_event_flag_bits(rt, flag, ctx.gpr[5]);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x812346E4u, "sceKernelClearEventFlag",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_event_flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            // Unlike WAITCLEAR, ClearEventFlag ANDs the supplied retain mask.
            // Callers pass ~bits to remove those bits, or zero to clear all.
            static const bool trace_flags = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_FLAGS") != nullptr;
            if (trace_flags) {
                static std::uint64_t trace_count = 0;
                if (trace_count++ < 20000u)
                    log_line("FLAGS", "clear uid=" + std::to_string(found->first) + " name=\"" +
                                          found->second.name + "\" mask=" + hex32(ctx.gpr[5]) +
                                          " pattern=" + hex32(found->second.current_pattern) +
                                          " thread=" + std::to_string(g_current_uid));
            }
            found->second.current_pattern &= ctx.gpr[5];
            ctx.set_gpr(2, 0u);
        });
    auto event_flag_wait = [](Runtime &rt, AllegrexContext &ctx, bool callbacks) {
        const auto found = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (found == g_event_flags.end()) {
            ctx.set_gpr(2, 0x8002019Au);
            return;
        }
        EventFlagRecord &flag = found->second;
        if (callbacks && service_owned_callback(rt,ctx,ctx.pc)) return;
        const std::uint32_t requested = ctx.gpr[5];
        const std::uint32_t mode = ctx.gpr[6];
        const std::uint32_t result_ptr = ctx.gpr[7];
        const std::uint32_t timeout_ptr = ctx.gpr[8];
        {
            // Rate-limit the wait trace: a correctly parked thread logs a few
            // entries, while a misspinning consumer cannot flood the log.
            static std::unordered_map<std::string, std::uint64_t> wait_counts;
            static const bool trace_flags = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_FLAGS") != nullptr;
            const std::string key = std::to_string(found->first) + ":" + flag.name;
            const std::uint64_t count = ++wait_counts[key];
            if (trace_flags || count <= 4u || count % 4096u == 0u) {
                std::ostringstream out;
                out << "sceKernelWaitEventFlag uid=" << found->first << " name=\"" << flag.name
                    << "\" bits=" << hex32(requested) << " mode=" << hex32(mode)
                    << " current=" << hex32(flag.current_pattern)
                    << " attempt=" << count
                    << " ra=" << hex32(ctx.gpr[31]);
                hle_line(out.str());
            }
        }
        const bool any = (mode & 1u) != 0u;
        const bool matches = any ? (flag.current_pattern & requested) != 0u
                                 : (flag.current_pattern & requested) == requested;
        if (matches) {
            if (ThreadRecord *thread=current_thread()) {thread->callback_wait=false;thread->callback_wait_kind=CallbackWaitKind::None;}
            if (result_ptr != 0u && rt.memory().contains(result_ptr, 4u))
                rt.memory().store32(result_ptr, flag.current_pattern);
            if ((mode & 0x20u) != 0u) flag.current_pattern &= ~requested;
            if ((mode & 0x10u) != 0u) flag.current_pattern = 0u;
            ctx.set_gpr(2, 0u);
            return;
        }
        if (ThreadRecord *thread=current_thread()) {
            thread->callback_wait=callbacks;thread->callback_wait_pc=ctx.pc;
            thread->callback_wait_kind=callbacks?CallbackWaitKind::EventFlag:CallbackWaitKind::None;
            thread->callback_wait_object=static_cast<std::int32_t>(ctx.gpr[4]);
        }
        flag.waiters.push_back(FlagWaiter{g_current_uid, requested, mode, result_ptr});
        ThreadRecord *thread = current_thread();
        if (thread != nullptr && timeout_ptr != 0u && rt.memory().contains(timeout_ptr, 4u)) {
            const std::uint32_t timeout = rt.memory().load32(timeout_ptr);
            if (timeout != 0u) {
                thread->wait_has_deadline = true;
                thread->wait_deadline_us = g_virtual_time_us + timeout;
            }
        }
        (void)block_current(rt, ctx, ThreadState::Waiting, "wait-event-flag");
    };
    register_import(runtime, "ThreadManForUser", 0x402FCF22u, "sceKernelWaitEventFlag",
        [event_flag_wait](Runtime &rt,AllegrexContext &ctx){event_flag_wait(rt,ctx,false);});
    register_import(runtime, "ThreadManForUser", 0x328C546Au, "sceKernelWaitEventFlagCB",
        [event_flag_wait](Runtime &rt,AllegrexContext &ctx){event_flag_wait(rt,ctx,true);});
    register_import(runtime, "ThreadManForUser", 0x30FD48F0u, "sceKernelPollEventFlag",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto found = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_event_flags.end()) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            EventFlagRecord &flag = found->second;
            const std::uint32_t requested = ctx.gpr[5];
            const std::uint32_t mode = ctx.gpr[6];
            const std::uint32_t result_ptr = ctx.gpr[7];
            const std::uint64_t key = (static_cast<std::uint64_t>(ctx.gpr[4]) << 32u) |
                (static_cast<std::uint64_t>(requested) << 8u) | (mode & 0xFFu);
            if (g_poll_flag_logs.size() < 16u && g_poll_flag_logs.insert(key).second) {
                std::ostringstream out;
                out << "sceKernelPollEventFlag uid=" << ctx.gpr[4] << " name=\"" << flag.name
                    << "\" bits=" << hex32(requested) << " mode=" << hex32(mode)
                    << " current=" << hex32(flag.current_pattern)
                    << " ra=" << hex32(ctx.gpr[31]);
                log_line(category::kDispatch, out.str());
            }
            const bool any = (mode & 1u) != 0u;
            const bool matches = any ? (flag.current_pattern & requested) != 0u
                                     : (flag.current_pattern & requested) == requested;
            if (!matches) {
                ctx.set_gpr(2, 0x800201A8u);
                return;
            }
            if (result_ptr != 0u && rt.memory().contains(result_ptr, 4u))
                rt.memory().store32(result_ptr, flag.current_pattern);
            if ((mode & 0x20u) != 0u) flag.current_pattern &= ~requested;
            if ((mode & 0x10u) != 0u) flag.current_pattern = 0u;
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: mutexes (NID mapping verified against PPSSPP)
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0xB7D098C6u, "sceKernelCreateMutex",
        [](Runtime &rt, AllegrexContext &ctx) {
            MutexRecord record{};
            record.name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "mutex";
            const auto initial_count = static_cast<std::int32_t>(ctx.gpr[6]);
            record.lock_count = initial_count;
            record.owner_uid = initial_count > 0 ? g_current_uid : -1;
            const std::int32_t uid = g_next_mutex_uid++;
            std::ostringstream out;
            out << "sceKernelCreateMutex uid=" << uid << " name=\"" << record.name
                << "\" attr=" << hex32(ctx.gpr[5]) << " initial=" << initial_count;
            hle_line(out.str());
            g_mutexes.emplace(uid, std::move(record));
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    auto lock_mutex_fn = [](Runtime &rt, AllegrexContext &ctx) {
        const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto count = static_cast<std::int32_t>(ctx.gpr[5]);
        const auto found = g_mutexes.find(uid);
        if (found == g_mutexes.end() || count <= 0) {
            ctx.set_gpr(2, 0x800201C3u); // SCE_KERNEL_ERROR_MUTEX_NOT_FOUND
            return;
        }
        MutexRecord &mutex = found->second;
        if (mutex.owner_uid == g_current_uid || mutex.lock_count == 0) {
            mutex.lock_count += count;
            mutex.owner_uid = g_current_uid;
            ctx.set_gpr(2, 0u);
            return;
        }
        mutex.waiters.push_back(MutexWaiter{g_current_uid, count});
        (void)block_current(rt, ctx, ThreadState::Waiting, "mutex-lock");
    };
    register_import(runtime, "ThreadManForUser", 0xB011B11Fu, "sceKernelLockMutex", lock_mutex_fn);
    register_import(runtime, "ThreadManForUser", 0x5BF4DD27u, "sceKernelLockMutexCB", lock_mutex_fn);
    register_import(runtime, "ThreadManForUser", 0x0DDCD2C9u, "sceKernelTryLockMutex",
        [](Runtime &, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto count = static_cast<std::int32_t>(ctx.gpr[5]);
            const auto found = g_mutexes.find(uid);
            if (found == g_mutexes.end() || count <= 0) {
                ctx.set_gpr(2, 0x800201C3u);
                return;
            }
            MutexRecord &mutex = found->second;
            if (mutex.owner_uid == g_current_uid || mutex.lock_count == 0) {
                mutex.lock_count += count;
                mutex.owner_uid = g_current_uid;
                ctx.set_gpr(2, 0u);
            } else {
                ctx.set_gpr(2, 0x800201C4u); // SCE_KERNEL_ERROR_MUTEX_LOCKED
            }
        });
    register_import(runtime, "ThreadManForUser", 0x6B30100Fu, "sceKernelUnlockMutex",
        [](Runtime &, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto count = static_cast<std::int32_t>(ctx.gpr[5]);
            const auto found = g_mutexes.find(uid);
            if (found == g_mutexes.end() || count <= 0) {
                ctx.set_gpr(2, 0x800201C3u);
                return;
            }
            MutexRecord &mutex = found->second;
            if (mutex.lock_count == 0 || mutex.owner_uid != g_current_uid) {
                ctx.set_gpr(2, 0x800201C5u); // SCE_KERNEL_ERROR_MUTEX_UNLOCKED
                return;
            }
            mutex.lock_count -= count;
            if (mutex.lock_count <= 0) {
                mutex.lock_count = 0;
                mutex.owner_uid = -1;
                if (!mutex.waiters.empty()) {
                    const MutexWaiter next = mutex.waiters.front();
                    mutex.waiters.erase(mutex.waiters.begin());
                    mutex.owner_uid = next.uid;
                    mutex.lock_count = next.count;
                    const auto thread = g_threads.find(next.uid);
                    if (thread != g_threads.end()) wake_thread(thread->second, 0u, "mutex-handoff");
                }
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xF8170FBEu, "sceKernelDeleteMutex",
        [](Runtime &, AllegrexContext &ctx) {
            const auto found = g_mutexes.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_mutexes.end()) {
                ctx.set_gpr(2, 0x800201C3u);
                return;
            }
            for (const MutexWaiter &waiter : found->second.waiters) {
                const auto thread = g_threads.find(waiter.uid);
                if (thread != g_threads.end()) wake_thread(thread->second, 0x800201A7u, "mutex-deleted");
            }
            g_mutexes.erase(found);
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: remaining imported queries / control
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0x840E8133u, "sceKernelWaitThreadEndCB",
        [](Runtime &rt, AllegrexContext &ctx) {
            // Same semantics as sceKernelWaitThreadEnd; the CB variant only allows
            // callbacks while waiting.
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t status_ptr = ctx.gpr[5];
            if (service_owned_callback(rt,ctx,ctx.pc)) return;
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            // A never-started (dormant) thread resumes the waiter immediately,
            // same as an ended one (see sceKernelWaitThreadEnd).
            if (found->second.state == ThreadState::Completed ||
                found->second.state == ThreadState::Created) {
                if (status_ptr != 0u && rt.memory().contains(status_ptr, 4u))
                    rt.memory().store32(status_ptr, found->second.exit_status);
                if (auto *thread=current_thread()) {
                    thread->callback_wait=false;
                    thread->callback_wait_kind=CallbackWaitKind::None;
                }
                ctx.set_gpr(2, 0u);
                return;
            }
            // Diagnostic: log each distinct waiter -> target join so a stuck
            // shutdown can be traced to the exact thread it is waiting for.
            {
                static std::set<std::string> logged_joins;
                const std::string key = std::to_string(g_current_uid) + "->" + std::to_string(uid);
                if (logged_joins.insert(key).second)
                    hle_line("sceKernelWaitThreadEndCB waiter=" + std::to_string(g_current_uid) +
                             " target=" + std::to_string(uid) + " name=\"" + found->second.name +
                             "\" state=" + std::to_string(static_cast<int>(found->second.state)));
            }
            if (auto *thread=current_thread()) {
                thread->callback_wait=true;
                thread->callback_wait_pc=ctx.pc;
                thread->callback_wait_kind=CallbackWaitKind::ThreadEnd;
                thread->callback_wait_object=uid;
                const auto timeout_ptr=ctx.gpr[6];
                if (timeout_ptr!=0 && rt.memory().contains(timeout_ptr,4)) {
                    const auto timeout=rt.memory().load32(timeout_ptr);
                    if (timeout!=0) {
                        thread->wait_has_deadline=true;
                        thread->wait_deadline_us=g_virtual_time_us+timeout;
                    }
                }
            }
            g_joiners[uid].push_back(Joiner{g_current_uid, status_ptr});
            (void)block_current(rt, ctx, ThreadState::Waiting, "wait-thread-end-cb");
        });
    register_import(runtime, "ThreadManForUser", 0x3B183E26u, "sceKernelGetThreadExitStatus",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t status_ptr = ctx.gpr[5];
            const auto found = g_threads.find(uid);
            if (found == g_threads.end()) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            if (found->second.state != ThreadState::Completed) {
                ctx.set_gpr(2, 0x800201A4u); // not dormant
                return;
            }
            if (status_ptr != 0u && rt.memory().contains(status_ptr, 4u))
                rt.memory().store32(status_ptr, found->second.exit_status);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xA66B0120u, "sceKernelReferEventFlagStatus",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t address = ctx.gpr[5];
            // SceKernelEventFlagInfo is exactly 0x34 bytes:
            // size@0x00, name[32]@0x04, attr@0x24, initPattern@0x28,
            // currentPattern@0x2C, numWaitThreads@0x30.  Writing more than
            // that (or a shifted layout) corrupts the caller's stack frame:
            // the movie library passes its own 52-byte frame as the info
            // struct, so an over-long write zeroed the saved $ra and the
            // thread died with pc=0.
            constexpr std::uint32_t kEventFlagInfoSize = 0x34u;
            const auto found = g_event_flags.find(uid);
            if (found != g_event_flags.end() && g_refer_flag_logs.size() < 32u &&
                g_refer_flag_logs.insert(uid).second) {
                std::ostringstream out;
                out << "sceKernelReferEventFlagStatus uid=" << uid << " name=\""
                    << found->second.name << "\" pattern=" << hex32(found->second.current_pattern)
                    << " ra=" << hex32(ctx.gpr[31]);
                log_line(category::kDispatch, out.str());
            }
            if (found == g_event_flags.end() || address == 0u ||
                !rt.memory().contains(address, kEventFlagInfoSize)) {
                ctx.set_gpr(2, 0x8002019Au);
                return;
            }
            rt.memory().zero(address, kEventFlagInfoSize);
            rt.memory().store32(address + 0u, kEventFlagInfoSize);
            const std::size_t length = std::min<std::size_t>(found->second.name.size(), 31u);
            for (std::size_t index = 0; index < length; ++index)
                rt.memory().store8(address + 4u + static_cast<std::uint32_t>(index),
                                   static_cast<std::uint8_t>(found->second.name[index]));
            rt.memory().store32(address + 0x24u, 0u); // attr
            rt.memory().store32(address + 0x28u, found->second.initial_pattern);
            rt.memory().store32(address + 0x2Cu, found->second.current_pattern);
            rt.memory().store32(address + 0x30u,
                                static_cast<std::uint32_t>(found->second.waiters.size()));
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xC11BA8C4u, "sceKernelNotifyCallback",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (!g_callbacks.contains(uid)) {
                error_line("sceKernelNotifyCallback: unknown callback uid=" + std::to_string(uid));
                ctx.set_gpr(2, 0x800201A6u);
                return;
            }
            const std::uint32_t notify_arg = ctx.gpr[5];
            // Return value observed by the interrupted guest code once the
            // callback returns into the trampoline.
            ctx.set_gpr(2, 0u);
            queue_owned_callback(uid,notify_arg);
        });
    register_import(runtime, "ThreadManForUser", 0x8FFDF9A2u, "sceKernelCancelSema",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto found = g_semas.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (found == g_semas.end()) {
                ctx.set_gpr(2, 0x80020199u);
                return;
            }
            const auto new_count=static_cast<std::int32_t>(ctx.gpr[5]);
            if (new_count>found->second.maximum) {
                ctx.set_gpr(2,0x800201BDu);
                return;
            }
            const std::uint32_t count_ptr = ctx.gpr[6];
            const std::uint32_t previous_waiters =
                static_cast<std::uint32_t>(found->second.waiters.size());
            for (const SemaWaiter &waiter : found->second.waiters) {
                const auto thread = g_threads.find(waiter.uid);
                if (thread != g_threads.end()) wake_thread(thread->second, 0x800201A9u, "sema-cancelled");
            }
            found->second.waiters.clear();
            found->second.count = new_count<0 ? found->second.initial_count : new_count;
            if (count_ptr != 0u && rt.memory().contains(count_ptr, 4u))
                rt.memory().store32(count_ptr, previous_waiters);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x94416130u, "sceKernelGetThreadmanIdList",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t type = ctx.gpr[4];
            const std::uint32_t buffer = ctx.gpr[5];
            const std::uint32_t buffer_size = ctx.gpr[6];
            const std::uint32_t count_ptr = ctx.gpr[7];
            std::vector<std::int32_t> ids;
            switch (type) {
            case 1u: for (const auto &[uid, t] : g_threads) { (void)t; ids.push_back(uid); } break;
            case 2u: for (const auto &[uid, s] : g_semas) { (void)s; ids.push_back(uid); } break;
            case 3u: for (const auto &[uid, f] : g_event_flags) { (void)f; ids.push_back(uid); } break;
            case 6u: for (const auto &[uid, b] : g_blocks) { (void)b; ids.push_back(uid); } break;
            case 8u: for (const auto &[uid, c] : g_callbacks) { (void)c; ids.push_back(uid); } break;
            default: break;
            }
            std::sort(ids.begin(), ids.end());
            const std::size_t written = std::min<std::size_t>(ids.size(), buffer_size);
            for (std::size_t index = 0; index < written; ++index) {
                if (buffer != 0u && rt.memory().contains(buffer + static_cast<std::uint32_t>(index) * 4u, 4u))
                    rt.memory().store32(buffer + static_cast<std::uint32_t>(index) * 4u,
                                        static_cast<std::uint32_t>(ids[index]));
            }
            if (count_ptr != 0u && rt.memory().contains(count_ptr, 4u))
                rt.memory().store32(count_ptr, static_cast<std::uint32_t>(ids.size()));
            ctx.set_gpr(2, static_cast<std::uint32_t>(written));
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser: fixed/variable pools
    // -----------------------------------------------------------------------
    register_import(runtime, "ThreadManForUser", 0xC07BB470u, "sceKernelCreateFpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            BlockRecord record{};
            record.name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "fpl";
            const std::uint32_t size = ctx.gpr[6];
            record.address = arena_allocate(size, 64u);
            record.size = size;
            if (record.address == 0u) {
                ctx.set_gpr(2, 0x800200D9u);
                return;
            }
            const std::int32_t uid = g_next_block_uid++;
            g_blocks.emplace(uid, record);
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    register_import(runtime, "ThreadManForUser", 0xD979E9BFu, "sceKernelAllocateFpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto found = g_blocks.find(static_cast<std::int32_t>(ctx.gpr[4]));
            const std::uint32_t pointer = ctx.gpr[5];
            if (found == g_blocks.end() || pointer == 0u || !rt.memory().contains(pointer, 4u)) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            // Single-shot pool: hand out the whole block once.
            rt.memory().store32(pointer, found->second.address);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x623AE665u, "sceKernelTryAllocateFpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto found = g_blocks.find(static_cast<std::int32_t>(ctx.gpr[4]));
            const std::uint32_t pointer = ctx.gpr[5];
            if (found == g_blocks.end() || pointer == 0u || !rt.memory().contains(pointer, 4u)) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            rt.memory().store32(pointer, found->second.address);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0xF6414A71u, "sceKernelFreeFpl",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "ThreadManForUser", 0xED1410E0u, "sceKernelDeleteFpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            ctx.set_gpr(2, free_block(rt, static_cast<std::int32_t>(ctx.gpr[4])) ? 0u : 0x80020198u);
        });
    register_import(runtime, "ThreadManForUser", 0x56C039B5u, "sceKernelCreateVpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            BlockRecord record{};
            record.name = ctx.gpr[4] != 0u ? guest_string(rt, ctx.gpr[4], 64u) : "vpl";
            const std::uint32_t size = ctx.gpr[6];
            record.address = arena_allocate(size, 64u);
            record.size = size;
            if (record.address == 0u) {
                ctx.set_gpr(2, 0x800200D9u);
                return;
            }
            const std::int32_t uid = g_next_block_uid++;
            g_blocks.emplace(uid, record);
            ctx.set_gpr(2, static_cast<std::uint32_t>(uid));
        });
    // VPL pool family.  NID mapping verified against the PPSSPP ThreadMan table:
    // 0xBED27435 = AllocateVpl, 0xB736E9FF = FreeVpl, 0x89B3D48C = DeleteVpl.
    register_import(runtime, "ThreadManForUser", 0xBED27435u, "sceKernelAllocateVpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto found = g_blocks.find(static_cast<std::int32_t>(ctx.gpr[4]));
            const std::uint32_t pointer = ctx.gpr[6];
            if (found == g_blocks.end() || pointer == 0u || !rt.memory().contains(pointer, 4u)) {
                ctx.set_gpr(2, 0x80020198u);
                return;
            }
            rt.memory().store32(pointer, found->second.address);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "ThreadManForUser", 0x89B3D48Cu, "sceKernelDeleteVpl",
        [](Runtime &rt, AllegrexContext &ctx) {
            ctx.set_gpr(2, free_block(rt, static_cast<std::int32_t>(ctx.gpr[4])) ? 0u : 0x80020198u);
        });
    register_import(runtime, "ThreadManForUser", 0xB736E9FFu, "sceKernelFreeVpl",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });

    // -----------------------------------------------------------------------
    // IoFileMgrForUser file primitives, shared by the synchronous and the
    // asynchronous entry points.  The async family completes inline in this
    // cooperative runtime, so a result is always ready before the guest can
    // observe it; the protocol flags keep PSP-visible behavior.
    constexpr std::uint32_t kIoErrorNoent = 0x80010002u;
    constexpr std::uint32_t kIoErrorBadFd = 0x80010009u;
    constexpr std::uint32_t kIoErrorInval = 0x80010016u;
    constexpr std::uint32_t kIoErrorNoAsync = 0x8002032Au;
    constexpr std::uint32_t kIoErrorAsyncBusy = 0x80020329u;

    auto io_open_file = [](Runtime &rt, const std::string &psp_path, std::uint32_t flags,
                           std::uint32_t caller_ra) -> std::uint32_t {
        const auto native = rt.translate_path(psp_path);
        ++g_open_count;
        const bool first_access = track_path_first_access(psp_path);
        std::ios::openmode mode = std::ios::binary;
        if ((flags & 0x0003u) == 0u || (flags & 0x0001u) != 0u) mode |= std::ios::in;
        if ((flags & 0x0002u) != 0u) mode |= std::ios::out;
        std::fstream stream(native, mode);
        if (!stream) {
            ++g_open_missing;
            if (g_reported_missing.insert(psp_path).second || first_access) {
                log_file_request(rt, "sceIoOpen", psp_path, native.string(), "MISSING");
                file_line("open \"" + psp_path + "\" [MISSING] flags=" + hex32(flags) +
                          " native=\"" + native.string() + "\"");
            }
            return kIoErrorNoent;
        }
        const std::int32_t fd = g_next_fd++;
        FileHandle handle;
        handle.stream = std::move(stream);
        handle.psp_path = psp_path;
        g_files.emplace(fd, std::move(handle));
        if (g_options.trace_filesystem && first_access) {
            log_file_request(rt, "sceIoOpen", psp_path, native.string(), "ok");
            file_line("open \"" + psp_path + "\" fd=" + std::to_string(fd) +
                      " flags=" + hex32(flags) + " [ok]");
        }
        // Phase 5 milestone record: the first real disc0 file the game opens.
        if (!g_first_file_logged) {
            g_first_file_logged = true;
            std::error_code size_ec;
            const auto size = std::filesystem::file_size(native, size_ec);
            file_line("[FILE FIRST] path=\"" + psp_path + "\" size=" +
                      (size_ec ? std::string("?") : std::to_string(size)) +
                      " caller_ra=" + hex32(caller_ra));
        }
        return static_cast<std::uint32_t>(fd);
    };

    auto io_read_file = [](Runtime &rt, std::int32_t fd, std::uint32_t buffer,
                           std::uint32_t size) -> std::uint32_t {
        const auto found = g_files.find(fd);
        if (found == g_files.end() || found->second.open_failed || found->second.directory)
            return kIoErrorBadFd;
        if (buffer == 0u || !rt.memory().contains(buffer, size == 0u ? 1u : size))
            return kIoErrorBadFd;
        // A zero-byte request leaves std::istream::gcount() unchanged. The
        // soundtrack streamer issues one at the asset boundary; reusing the
        // previous count would copy from an empty vector's null data pointer.
        if (size == 0u) return 0u;
        std::vector<std::uint8_t> data(size);
        found->second.stream.clear();
        found->second.stream.seekg(static_cast<std::streamoff>(found->second.position));
        found->second.stream.read(reinterpret_cast<char *>(data.data()),
                                  static_cast<std::streamsize>(size));
        const std::streamsize got = found->second.stream.gcount();
        const std::size_t read_size = static_cast<std::size_t>(std::max<std::streamsize>(0, got));
        if (read_size != 0u)
            rt.memory().copy_in(buffer, std::span<const std::uint8_t>(data.data(), read_size));
        if (read_size >= 4 && data[0] == 'P' && data[1] == 'S' && data[2] == 'M' && data[3] == 'F')
            record_psmf_read(rt.translate_path(found->second.psp_path), found->second.position,
                             std::span<const std::uint8_t>(data.data(), read_size));
        if(read_size>=128 && std::memcmp(data.data(),"RIFF",4)==0)
            record_atrac_read(rt.translate_path(found->second.psp_path),found->second.position,
                              std::span<const std::uint8_t>(data.data(),read_size));
        found->second.position += read_size;
        ++g_read_count;
        g_read_bytes += read_size;
        if (read_size > g_largest_read) g_largest_read = read_size;
        // Log the first few large reads (asset/archive traffic) with the file's
        // path so the phase record can identify payload streams.
        if (read_size >= 65536u && g_read_logs < 128u) {
            ++g_read_logs;
            file_line("read fd=" + std::to_string(fd) + " size=" + std::to_string(read_size) +
                      " at=" + std::to_string(found->second.position - read_size) +
                      " file=\"" + found->second.psp_path + "\"");
        }
        return static_cast<std::uint32_t>(read_size);
    };

    auto io_write_file = [](Runtime &rt, std::int32_t fd, std::uint32_t buffer,
                            std::uint32_t size) -> std::uint32_t {
        const auto found = g_files.find(fd);
        if (found == g_files.end() || found->second.open_failed || found->second.directory)
            return kIoErrorBadFd;
        if (!rt.memory().contains(buffer, size == 0u ? 1u : size)) return kIoErrorBadFd;
        std::vector<std::uint8_t> data(size);
        if (size != 0u) rt.memory().copy_out(buffer, data);
        found->second.stream.clear();
        found->second.stream.seekp(static_cast<std::streamoff>(found->second.position));
        if (size != 0u)
            found->second.stream.write(reinterpret_cast<const char *>(data.data()),
                                       static_cast<std::streamsize>(size));
        found->second.position += size;
        ++g_write_count;
        g_write_bytes += size;
        return size;
    };

    auto io_seek_file = [](std::int32_t fd, std::int64_t offset, std::int32_t whence,
                           std::int64_t &position_out) -> std::uint32_t {
        const auto found = g_files.find(fd);
        if (found == g_files.end() || found->second.open_failed) return kIoErrorBadFd;
        std::int64_t base = 0;
        if (whence == 1) base = static_cast<std::int64_t>(found->second.position);
        else if (whence == 2) {
            found->second.stream.clear();
            found->second.stream.seekg(0, std::ios::end);
            base = static_cast<std::int64_t>(found->second.stream.tellg());
        } else if (whence != 0) {
            return kIoErrorInval;
        }
        const std::int64_t position = base + offset;
        if (position < 0) return kIoErrorInval;
        found->second.position = static_cast<std::uint64_t>(position);
        ++g_seek_count;
        if (g_seek_logs < 32u) {
            ++g_seek_logs;
            file_line("lseek fd=" + std::to_string(fd) + " offset=" + std::to_string(offset) +
                      " whence=" + std::to_string(whence) + " -> pos=" +
                      std::to_string(position) + " file=\"" + found->second.psp_path + "\"");
        }
        position_out = position;
        return 0u;
    };

    auto io_close_file = [](std::int32_t fd) -> std::uint32_t {
        return g_files.erase(fd) == 1u ? 0u : kIoErrorBadFd;
    };

    // Publishes a completed async result to the guest and releases a
    // close-pending descriptor.
    auto io_complete_async = [](Runtime &rt, std::int32_t fd, std::uint32_t address) -> bool {
        const auto found = g_files.find(fd);
        if (found == g_files.end() || !found->second.has_async_result) return false;
        const std::int64_t result = found->second.async_result;
        const bool close_pending = found->second.close_pending;
        if (address != 0u && rt.memory().contains(address, 8u)) {
            rt.memory().store32(address, static_cast<std::uint32_t>(result));
            rt.memory().store32(address + 4u,
                                static_cast<std::uint32_t>(static_cast<std::uint64_t>(result) >> 32u));
        }
        if (close_pending)
            g_files.erase(found);
        else
            found->second.has_async_result = false;
        return true;
    };

    register_import(runtime, "IoFileMgrForUser", 0x109F50BCu, "sceIoOpen",
        [io_open_file](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            ctx.set_gpr(2, io_open_file(rt, psp_path, ctx.gpr[5], ctx.gpr[31]));
        });
    register_import(runtime, "IoFileMgrForUser", 0x810C4BC3u, "sceIoClose",
        [io_close_file](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, io_close_file(static_cast<std::int32_t>(ctx.gpr[4])));
        });
    register_import(runtime, "IoFileMgrForUser", 0x6A638D83u, "sceIoRead",
        [io_read_file](Runtime &rt, AllegrexContext &ctx) {
            ctx.set_gpr(2, io_read_file(rt, static_cast<std::int32_t>(ctx.gpr[4]), ctx.gpr[5],
                                        ctx.gpr[6]));
        });
    register_import(runtime, "IoFileMgrForUser", 0x42EC03ACu, "sceIoWrite",
        [io_write_file](Runtime &rt, AllegrexContext &ctx) {
            ctx.set_gpr(2, io_write_file(rt, static_cast<std::int32_t>(ctx.gpr[4]), ctx.gpr[5],
                                         ctx.gpr[6]));
        });
    register_import(runtime, "IoFileMgrForUser", 0x27EB27B8u, "sceIoLseek",
        [io_seek_file](Runtime &, AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint64_t raw_offset = static_cast<std::uint64_t>(ctx.gpr[6]) |
                (static_cast<std::uint64_t>(ctx.gpr[7]) << 32u);
            if ((raw_offset >> 32u) != 0u && g_seek_offset_logs < 32u) {
                ++g_seek_offset_logs;
                std::ostringstream out;
                out << "sceIoLseek 64-bit offset high word nonzero fd=" << fd
                    << " low=" << hex32(ctx.gpr[6]) << " high=" << hex32(ctx.gpr[7])
                    << " a1=" << hex32(ctx.gpr[5]) << " a3=" << hex32(ctx.gpr[8])
                    << " ra=" << hex32(ctx.gpr[31]);
                log_line(category::kFile, out.str());
            }
            std::int64_t position = 0;
            const std::uint32_t error = io_seek_file(
                fd, static_cast<std::int64_t>(raw_offset), static_cast<std::int32_t>(ctx.gpr[8]),
                position);
            if (error != 0u) {
                ctx.set_gpr(2, error);
                return;
            }
            ctx.set_gpr(2, static_cast<std::uint32_t>(position));
            ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::uint64_t>(position) >> 32u));
        });

    // --- asynchronous family -------------------------------------------------
    // The game streams its assets through the async API; each operation
    // completes inline and its result stays queued until the guest polls or
    // waits, exactly like a finished PSP async request.
    register_import(runtime, "IoFileMgrForUser", 0x89AA9906u, "sceIoOpenAsync",
        [io_open_file](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            const std::uint32_t result = io_open_file(rt, psp_path, ctx.gpr[5], ctx.gpr[31]);
            if (static_cast<std::int32_t>(result) >= 0) {
                g_files[static_cast<std::int32_t>(result)].has_async_result = true;
                g_files[static_cast<std::int32_t>(result)].async_result =
                    static_cast<std::int64_t>(static_cast<std::int32_t>(result));
                ctx.set_gpr(2, result);
                return;
            }
            // PSP still returns a descriptor for a failed async open; the error
            // surfaces through WaitAsync/PollAsync and releases the descriptor.
            const std::int32_t fd = g_next_fd++;
            FileHandle handle;
            handle.open_failed = true;
            handle.psp_path = psp_path;
            handle.async_result = static_cast<std::int64_t>(static_cast<std::int32_t>(result));
            handle.has_async_result = true;
            handle.close_pending = true;
            g_files.emplace(fd, std::move(handle));
            ctx.set_gpr(2, static_cast<std::uint32_t>(fd));
        });
    register_import(runtime, "IoFileMgrForUser", 0xA0B5A7C2u, "sceIoReadAsync",
        [io_read_file](Runtime &rt, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            auto found = g_files.find(fd);
            if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
            if (found->second.has_async_result) { ctx.set_gpr(2, kIoErrorAsyncBusy); return; }
            found->second.async_result = static_cast<std::int64_t>(static_cast<std::int32_t>(
                io_read_file(rt, fd, ctx.gpr[5], ctx.gpr[6])));
            found->second.has_async_result = true;
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0x0FACAB19u, "sceIoWriteAsync",
        [io_write_file](Runtime &rt, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            auto found = g_files.find(fd);
            if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
            if (found->second.has_async_result) { ctx.set_gpr(2, kIoErrorAsyncBusy); return; }
            found->second.async_result = static_cast<std::int64_t>(static_cast<std::int32_t>(
                io_write_file(rt, fd, ctx.gpr[5], ctx.gpr[6])));
            found->second.has_async_result = true;
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0x71B19E77u, "sceIoLseekAsync",
        [io_seek_file](Runtime &, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            // Same o32 64-bit-argument ABI as sceIoLseek: a0 = fd, a1 is
            // padding, the SceOff lands in the even-aligned pair a2/a3 and the
            // whence in a4.  Decoding a1/a2 instead produced enormous bogus
            // offsets (0x02EC0000_00000000-style) that read zero bytes at EOF
            // and stalled the movie streamer.
            const std::uint64_t raw_offset = static_cast<std::uint64_t>(ctx.gpr[6]) |
                (static_cast<std::uint64_t>(ctx.gpr[7]) << 32u);
            if ((raw_offset >> 32u) != 0u && g_seek_offset_logs < 32u) {
                ++g_seek_offset_logs;
                std::ostringstream out;
                out << "sceIoLseekAsync 64-bit offset high word nonzero fd=" << fd
                    << " low=" << hex32(ctx.gpr[6]) << " high=" << hex32(ctx.gpr[7])
                    << " a1=" << hex32(ctx.gpr[5]) << " ra=" << hex32(ctx.gpr[31]);
                log_line(category::kFile, out.str());
            }
            const auto found = g_files.find(fd);
            if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
            if (found->second.has_async_result) { ctx.set_gpr(2, kIoErrorAsyncBusy); return; }
            std::int64_t position = 0;
            const std::uint32_t error = io_seek_file(
                fd, static_cast<std::int64_t>(raw_offset), static_cast<std::int32_t>(ctx.gpr[8]),
                position);
            found->second.async_result =
                error != 0u ? static_cast<std::int64_t>(static_cast<std::int32_t>(error)) : position;
            found->second.has_async_result = true;
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0xFF5940B6u, "sceIoCloseAsync",
        [](Runtime &, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            auto found = g_files.find(fd);
            if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
            if (found->second.has_async_result) { ctx.set_gpr(2, kIoErrorAsyncBusy); return; }
            found->second.async_result = 0;
            found->second.has_async_result = true;
            found->second.close_pending = true;
            ctx.set_gpr(2, 0u);
        });
    auto io_async_wait = [io_complete_async](Runtime &rt, AllegrexContext &ctx) {
        const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto found = g_files.find(fd);
        if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
        if (!found->second.has_async_result) { ctx.set_gpr(2, kIoErrorNoAsync); return; }
        (void)io_complete_async(rt, fd, ctx.gpr[5]);
        ctx.set_gpr(2, 0u);
    };
    register_import(runtime, "IoFileMgrForUser", 0xE23EEC33u, "sceIoWaitAsync", io_async_wait);
    register_import(runtime, "IoFileMgrForUser", 0x35DBD746u, "sceIoWaitAsyncCB", io_async_wait);
    auto io_async_poll = [io_complete_async](Runtime &rt, AllegrexContext &ctx) {
        const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto found = g_files.find(fd);
        if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
        // Operations complete inline, so a queued result means "done" and an
        // empty queue means the guest never issued one.
        if (!found->second.has_async_result) { ctx.set_gpr(2, kIoErrorNoAsync); return; }
        (void)io_complete_async(rt, fd, ctx.gpr[5]);
        ctx.set_gpr(2, 0u);
    };
    register_import(runtime, "IoFileMgrForUser", 0x3251EA56u, "sceIoPollAsync", io_async_poll);
    register_import(runtime, "IoFileMgrForUser", 0xCB05F8D6u, "sceIoGetAsyncStat",
        [io_complete_async](Runtime &rt, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_files.find(fd);
            if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
            if (!found->second.has_async_result) { ctx.set_gpr(2, kIoErrorNoAsync); return; }
            (void)io_complete_async(rt, fd, ctx.gpr[6]);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0xB293727Fu, "sceIoChangeAsyncPriority",
        [](Runtime &, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            ctx.set_gpr(2, g_files.find(fd) != g_files.end() ? 0u : kIoErrorBadFd);
        });
    register_import(runtime, "IoFileMgrForUser", 0xA12A0514u, "sceIoSetAsyncCallback",
        [](Runtime &, AllegrexContext &ctx) {
            const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
            auto found = g_files.find(fd);
            if (found == g_files.end()) { ctx.set_gpr(2, kIoErrorBadFd); return; }
            found->second.async_callback = ctx.gpr[5];
            found->second.async_callback_arg = ctx.gpr[6];
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0xACE946E8u, "sceIoGetstat",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            const std::uint32_t stat_address = ctx.gpr[5];
            const auto native = rt.translate_path(psp_path);
            const bool first_access = track_path_first_access(psp_path);
            std::error_code ec;
            const auto size = std::filesystem::file_size(native, ec);
            if (ec) {
                if (g_reported_missing.insert(psp_path).second || first_access) {
                    log_file_request(rt, "sceIoGetstat", psp_path, native.string(), "MISSING");
                    file_line("getstat \"" + psp_path + "\" [MISSING]");
                }
                ctx.set_gpr(2, 0x80010002u);
                return;
            }
            fill_stat(rt.memory(), stat_address, 0x00001FFFu, size);
            if (first_access)
                file_line("getstat \"" + psp_path + "\" size=" + std::to_string(size) + " [ok]");
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0xB29DDF9Cu, "sceIoDopen",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            const auto native = rt.translate_path(psp_path);
            const bool first_access = track_path_first_access(psp_path);
            std::error_code ec;
            if (!std::filesystem::is_directory(native, ec)) {
                if (g_reported_missing.insert(psp_path).second || first_access) {
                    log_file_request(rt, "sceIoDopen", psp_path, native.string(), "MISSING");
                    file_line("dopen \"" + psp_path + "\" [MISSING]");
                }
                ctx.set_gpr(2, 0x80010002u);
                return;
            }
            FileHandle handle;
            handle.directory = true;
            handle.psp_path = psp_path;
            for (const auto &entry : std::filesystem::directory_iterator(native, ec)) {
                handle.entries.push_back(entry.path().filename().string());
            }
            if (first_access)
                file_line("dopen \"" + psp_path + "\" entries=" +
                          std::to_string(handle.entries.size()) + " [ok]");
            if (g_options.trace_filesystem && first_access)
                log_file_request(rt, "sceIoDopen", psp_path, native.string(),
                                 ("ok entries=" + std::to_string(handle.entries.size())).c_str());
            const std::int32_t fd = g_next_fd++;
            g_files.emplace(fd, std::move(handle));
            ctx.set_gpr(2, static_cast<std::uint32_t>(fd));
        });
    register_import(runtime, "IoFileMgrForUser", 0xE3EB004Cu, "sceIoDread",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::uint32_t dirent = ctx.gpr[5];
            const auto found = g_files.find(fd);
            if (found == g_files.end() || !found->second.directory) {
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            if (found->second.entry_index >= found->second.entries.size()) {
                ctx.set_gpr(2, 0u);
                return;
            }
            constexpr std::size_t kDirentSize = 0x148u;
            if (dirent != 0u && rt.memory().contains(dirent, kDirentSize)) {
                rt.memory().zero(dirent, kDirentSize);
                const std::string &name = found->second.entries[found->second.entry_index];
                const std::size_t length = std::min<std::size_t>(name.size(), 255u);
                rt.memory().store32(dirent + 0u, 0x00001FFFu); // st_mode
                rt.memory().store32(dirent + 4u, 0x00000020u); // st_attr (FIO_S_IFREG)
                for (std::size_t index = 0; index < length; ++index)
                    rt.memory().store8(dirent + 64u + static_cast<std::uint32_t>(index),
                                       static_cast<std::uint8_t>(name[index]));
            }
            ++found->second.entry_index;
            ctx.set_gpr(2, 1u);
        });
    register_import(runtime, "IoFileMgrForUser", 0xEB092469u, "sceIoDclose",
        [](Runtime &, AllegrexContext &ctx) {
            const auto removed = g_files.erase(static_cast<std::int32_t>(ctx.gpr[4]));
            ctx.set_gpr(2, removed == 1u ? 0u : 0x80010009u);
        });
    register_import(runtime, "IoFileMgrForUser", 0x54F5FB11u, "sceIoDevctl",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            const std::uint32_t command = ctx.gpr[5];
            const std::uint32_t out_data = ctx.gpr[8];
            const std::uint32_t out_length = ctx.gpr[9];
            if (g_options.trace_filesystem) {
                std::ostringstream out;
                out << "sceIoDevctl \"" << psp_path << "\" cmd=" << hex32(command)
                    << " out_len=" << out_length << " (returning success)";
                log_line(category::kFilesystem, out.str());
            }
            if (out_data != 0u && out_length != 0u && rt.memory().contains(out_data, out_length))
                rt.memory().zero(out_data, out_length);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0x06A70004u, "sceIoRemove",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            const auto native = rt.translate_path(psp_path);
            std::error_code ec;
            if (!std::filesystem::remove(native, ec)) {
                log_file_request(rt, "sceIoRemove", psp_path, native.string(), "MISSING");
                ctx.set_gpr(2, 0x80010002u);
                return;
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "IoFileMgrForUser", 0x779103A0u, "sceIoRename",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::string from = guest_string(rt, ctx.gpr[4]);
            const std::string to = guest_string(rt, ctx.gpr[5]);
            std::error_code ec;
            std::filesystem::rename(rt.translate_path(from), rt.translate_path(to), ec);
            if (ec) {
                log_line(category::kFilesystem, "sceIoRename failed \"" + from + "\" -> \"" + to + "\"");
                ctx.set_gpr(2, 0x80010002u);
                return;
            }
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // StdioForUser (stdout/stderr are informational)
    // -----------------------------------------------------------------------
    auto stdio_handle = [](Runtime &rt, AllegrexContext &ctx, const char *stream) {
        const std::string format = guest_string(rt, ctx.gpr[4], 512u);
        if (!format.empty()) hle_line(std::string("stdio ") + stream + ": " + format);
        ctx.set_gpr(2, 0u);
    };
    register_import(runtime, "StdioForUser", 0x172D316Eu, "sceKernelStdin",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "StdioForUser", 0xA6BAB2E9u, "sceKernelStdout",
        [stdio_handle](Runtime &rt, AllegrexContext &ctx) { stdio_handle(rt, ctx, "stdout"); });
    register_import(runtime, "StdioForUser", 0xF78BA90Au, "sceKernelStderr",
        [stdio_handle](Runtime &rt, AllegrexContext &ctx) { stdio_handle(rt, ctx, "stderr"); });

    // -----------------------------------------------------------------------
    // ModuleMgrForUser
    // -----------------------------------------------------------------------
    auto module_load = [](const char *name) {
        return [name](Runtime &rt, AllegrexContext &ctx) {
            const std::string psp_path = guest_string(rt, ctx.gpr[4]);
            const auto native = rt.translate_path(psp_path);
            std::error_code ec;
            const bool exists = std::filesystem::is_regular_file(native, ec);
            // Diagnostic experiment only: claim dynamic modules load when the
            // caller tolerates a failure differently.  Never enabled by default.
            const bool fake_success = std::getenv("PSPRECOMP_MOTORSTORM_FAKE_MODULE_UID") != nullptr;
            if (exists && fake_success) {
                static std::int32_t next_fake_uid = 0x300;
                log_line(category::kModule, std::string(name) + " \"" + psp_path +
                                               "\" -> fake uid=" + std::to_string(next_fake_uid) +
                                               " (PSPRECOMP_MOTORSTORM_FAKE_MODULE_UID diagnostic)");
                ctx.set_gpr(2, static_cast<std::uint32_t>(next_fake_uid++));
                return;
            }
            // Dynamic (game-supplied) PRX modules are encrypted with the
            // kernel's `~SCE` container.  This runtime cannot decrypt or
            // recompile them, so the load fails with the real kernel error a
            // corrupt/unsupported module would produce.  Callers that treat the
            // module as optional (MotorStorm's movie module wrapper does)
            // continue without it; we never fake a successful load.
            static thread_local std::uint64_t logged = 0;
            if (logged < 16u) {
                ++logged;
                std::ostringstream out;
                out << name << " \"" << psp_path << "\" native=\"" << native.string()
                    << "\" exists=" << (exists ? 1 : 0)
                    << " caller_pc=" << hex32(psprecomp::runtime_dispatch_pc())
                    << " ra=" << hex32(ctx.gpr[31])
                    << (exists ? " -> 0x80020148 (encrypted dynamic PRX, unsupported)"
                               : " -> 0x80010002 (not found)");
                log_line(category::kModule, out.str());
            }
            ctx.set_gpr(2, exists ? 0x80020148u : 0x80010002u);
        };
    };
    register_import(runtime, "ModuleMgrForUser", 0x2E0911AAu, "sceKernelLoadModule",
                    module_load("sceKernelLoadModule"));
    register_import(runtime, "ModuleMgrForUser", 0x50F0C1ECu, "sceKernelLoadModuleByID",
                    module_load("sceKernelLoadModuleByID"));
    register_import(runtime, "ModuleMgrForUser", 0x977DE386u, "sceKernelLoadStartModule",
                    module_load("sceKernelLoadStartModule"));
    register_import(runtime, "ModuleMgrForUser", 0xD1FF982Au, "sceKernelStartModule",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (std::getenv("PSPRECOMP_MOTORSTORM_FAKE_MODULE_UID") != nullptr && uid >= 0x300) {
                log_line(category::kModule, "sceKernelStartModule uid=" + std::to_string(uid) +
                                               " -> 0 (diagnostic fake)");
                ctx.set_gpr(2, 0u);
                return;
            }
            std::ostringstream out;
            out << "sceKernelStartModule uid=" << uid
                << " caller_pc=" << hex32(psprecomp::runtime_dispatch_pc())
                << " ra=" << hex32(ctx.gpr[31])
                << " -> 0x8002012E (no such module: dynamic PRX loads always fail)";
            log_line(category::kModule, out.str());
            ctx.set_gpr(2, 0x8002012Eu); // SCE_KERNEL_ERROR_UNKNOWN_MODULE
        });
    register_import(runtime, "ModuleMgrForUser", 0x8F2DF740u, "sceKernelUnloadModule",
        [](Runtime &rt, AllegrexContext &ctx) {
            std::ostringstream out;
            out << "sceKernelUnloadModule uid=" << static_cast<std::int32_t>(ctx.gpr[4]);
            log_line(category::kModule, out.str());
            ctx.set_gpr(2, 0x80020148u);
        });
    register_import(runtime, "ModuleMgrForUser", 0xF0A26395u, "sceKernelGetModuleId",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 1u); });
    register_import(runtime, "ModuleMgrForUser", 0xD8B73127u, "sceKernelGetModuleIdByAddress",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 1u); });

    // -----------------------------------------------------------------------
    // InterruptManager
    // -----------------------------------------------------------------------
    register_import(runtime, "InterruptManager", 0xCA04A2B9u, "sceKernelRegisterSubIntrHandler",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "InterruptManager", 0xD61E6961u, "sceKernelReleaseSubIntrHandler",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "InterruptManager", 0xFB8E22ECu, "sceKernelEnableSubIntr",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });

    // -----------------------------------------------------------------------
    // UtilsForUser: cache maintenance is a no-op on the recompiler.
    // -----------------------------------------------------------------------
    register_import(runtime, "UtilsForUser", 0x79D1C3FAu, "sceKernelDcacheWritebackAll",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "UtilsForUser", 0x71EC4271u, "sceKernelCacheOp(0x71EC4271)",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "UtilsForUser", 0x91E4F6A7u, "sceKernelCacheOp(0x91E4F6A7)",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "UtilsForUser", 0x27CC57F0u, "sceKernelCacheOp(0x27CC57F0)",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });

    // -----------------------------------------------------------------------
    // sceSuspendForUser
    // -----------------------------------------------------------------------
    register_import(runtime, "sceSuspendForUser", 0xEADB1BD7u, "sceKernelPowerLock",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, ctx.gpr[4] == 0u ? 0u : 0x80000107u); });
    register_import(runtime, "sceSuspendForUser", 0x3AEE7261u, "sceKernelPowerUnlock",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, ctx.gpr[4] == 0u ? 0u : 0x80000107u); });
    register_import(runtime, "sceSuspendForUser", 0x090CCB3Fu, "sceKernelPowerTick",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    // Volatile RAM: 4 MiB at 0x08400000, the extra memory PSP-2000+ exposes as
    // scratch.  Games lock it during boot to grow their own heaps -- MotorStorm
    // stores the returned base pointer as its arena and *spins* in its
    // allocator until it is non-zero, so failing this call hangs the game right
    // after the boot sequence.  The call takes output pointers, not values.
    register_import(runtime, "sceSuspendForUser", 0x3E0271D3u, "sceKernelVolatileMemLock",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t type = ctx.gpr[4];
            const std::uint32_t address_out = ctx.gpr[5];
            const std::uint32_t size_out = ctx.gpr[6];
            if (type != 0u) {
                ctx.set_gpr(2, 0x80000107u); // invalid mode
                return;
            }
            if (g_volatile_mem_locked) {
                ctx.set_gpr(2, 0x800201B1u); // SCE_KERNEL_ERROR_POWER_VMEM_IN_USE
                return;
            }
            if (address_out != 0u && rt.memory().contains(address_out, 4u))
                rt.memory().store32(address_out, kVolatileMemAddress);
            if (size_out != 0u && rt.memory().contains(size_out, 4u))
                rt.memory().store32(size_out, kVolatileMemSize);
            g_volatile_mem_locked = true;
            hle_line("sceKernelVolatileMemLock -> address=" + hex32(kVolatileMemAddress) +
                     " size=" + hex32(kVolatileMemSize));
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceSuspendForUser", 0xA569E425u, "sceKernelVolatileMemUnlock",
        [](Runtime &, AllegrexContext &ctx) {
            g_volatile_mem_locked = false;
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // sceDisplay: state is retained so the GE milestone reports the framebuffer
    // configuration the guest actually selected.  No presentation happens yet.
    // -----------------------------------------------------------------------
    register_import(runtime, "sceDisplay", 0x0E20F177u, "sceDisplaySetMode",
        [](Runtime &, AllegrexContext &ctx) {
            g_display.mode = ctx.gpr[4];
            g_display.width = ctx.gpr[5];
            g_display.height = ctx.gpr[6];
            if (g_display.set_mode_count++ < 4u)
                log_line(category::kGe, "sceDisplaySetMode mode=" + hex32(g_display.mode) +
                                            " size=" + std::to_string(g_display.width) + "x" +
                                            std::to_string(g_display.height));
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceDisplay", 0x289D82FEu, "sceDisplaySetFrameBuf",
        [](Runtime &rt, AllegrexContext &ctx) {
            g_display.frame_buf = ctx.gpr[4];
            g_display.stride = ctx.gpr[5];
            g_display.format = ctx.gpr[6];
            if (g_display.set_frame_buf_count++ < 8u) {
                log_line(category::kGe, "sceDisplaySetFrameBuf top=" + hex32(g_display.frame_buf) +
                                            " stride=" + std::to_string(g_display.stride) +
                                            " format=" + std::to_string(g_display.format) +
                                            " sync=" + hex32(ctx.gpr[7]));
            }
            trace_game_state(rt);
            update_racing_scene(rt);
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_DISPLAY")) {
                if (g_display.set_frame_buf_count <= 4u || g_display.set_frame_buf_count % 60u == 0u) {
                    std::ostringstream out;
                    out << "guest_us=" << g_virtual_time_us << " frame=" << g_display.set_frame_buf_count
                        << " submission=" << g_ge_submissions << " fb=" << hex32(g_display.frame_buf)
                        << " stride=" << g_display.stride << " format=" << g_display.format
                        << " sync=" << ctx.gpr[7] << " ge_fb=" << hex32(software_ge_framebuffer())
                        << " ge_stride=" << software_ge_framebuffer_stride();
                    log_line("DISPLAY", out.str());
                }
            }
            // PSPRECOMP_MOTORSTORM_FRAME_DUMP_FLIP=1: dump each buffer as it is
            // handed to the display, which is the moment a finished frame is
            // visible (mid-list dumps can catch the next frame's clear).
            static const std::uint64_t flip_dump_after = [] {
                const char *value = std::getenv("PSPRECOMP_MOTORSTORM_FRAME_DUMP_FLIP_AFTER_GE");
                return value != nullptr ? std::strtoull(value, nullptr, 0) : 0u;
            }();
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_FRAME_DUMP_FLIP") &&
                g_ge_submissions >= flip_dump_after) {
                static int flip_dumps = 0;
                if (flip_dumps < 8) {
                    ++flip_dumps;
                    const std::uint32_t width = g_display.width != 0u ? g_display.width : 480u;
                    const std::uint32_t height = g_display.height != 0u ? g_display.height : 272u;
                    const std::uint32_t stride = g_display.stride != 0u ? g_display.stride : 512u;
                    std::vector<std::uint8_t> rgb(static_cast<std::size_t>(width) * height * 3u, 0u);
                    for (std::uint32_t y = 0u; y < height; ++y) {
                        for (std::uint32_t x = 0u; x < width; ++x) {
                            const std::uint32_t address = g_display.frame_buf + (y * stride + x) * 4u;
                            if (!rt.memory().contains(address, 4u)) continue;
                            const std::uint32_t v = rt.memory().load32(address);
                            const std::size_t index = (static_cast<std::size_t>(y) * width + x) * 3u;
                            rgb[index + 0u] = static_cast<std::uint8_t>(v & 0xFFu);
                            rgb[index + 1u] = static_cast<std::uint8_t>((v >> 8u) & 0xFFu);
                            rgb[index + 2u] = static_cast<std::uint8_t>((v >> 16u) & 0xFFu);
                        }
                    }
                    const std::string path = "out/motorstorm/flip_" + std::to_string(flip_dumps) + ".ppm";
                    std::ofstream ppm(path, std::ios::binary);
                    ppm << "P6\n" << width << " " << height << "\n255\n";
                    ppm.write(reinterpret_cast<const char *>(rgb.data()),
                              static_cast<std::streamsize>(rgb.size()));
                    log_line(category::kGe, "flip dump written: " + path + " fb=" + hex32(g_display.frame_buf));
                }
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceDisplay", 0xEEDA2E54u, "sceDisplayGetFrameBuf",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto write_output = [&rt](std::uint32_t pointer, std::uint32_t value) {
                if (pointer != 0u && (pointer & 3u) == 0u && rt.memory().contains(pointer, 4u))
                    rt.memory().store32(pointer, value);
            };
            write_output(ctx.gpr[4], g_display.frame_buf);
            write_output(ctx.gpr[5], g_display.stride);
            write_output(ctx.gpr[6], g_display.format);
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceDisplay", 0xDBA6C4C4u, "sceDisplayGetFramePerSec",
        [](Runtime &, AllegrexContext &ctx) { ctx.fpr[0] = g_active_rate.refresh_hz; });
    register_import(runtime, "sceDisplay", 0x9C6EAAD7u, "sceDisplayGetVcount",
        [](Runtime &rt, AllegrexContext &ctx) {
            // The flip routine reads its minimum vblank interval right after
            // this call; an unlocked rate replaces whatever the scene chose.
            if (g_frame_rate.unlocked && ctx.gpr[31] == kFlipVcountReturn)
                rt.memory().store32(kFrameIntervalAddress, g_active_rate.interval);
            ctx.set_gpr(2, static_cast<std::uint32_t>(vblank_count(g_virtual_time_us)));
        });
    const auto wait_vblank = [](Runtime &rt, AllegrexContext &ctx, bool callbacks) {
        if (window_close_requested()) {
            ctx.set_gpr(2, 0u);
            rt.stop("Native window closed");
            return;
        }
        ThreadRecord *thread = current_thread();
        if (thread == nullptr) { ctx.set_gpr(2, 0x80020198u); return; }
        // Notifications reenter this import. Retain the original target so a
        // callback that crosses it does not introduce another frame's wait.
        if (!callbacks || thread->callback_wait_kind != CallbackWaitKind::Vblank)
            thread->vblank_deadline_us = next_vblank_us(g_virtual_time_us);
        thread->callback_wait_kind = callbacks ? CallbackWaitKind::Vblank : CallbackWaitKind::None;
        thread->callback_wait_pc = ctx.pc;
        if (callbacks && service_owned_callback(rt, ctx, ctx.pc)) return;
        if (thread->vblank_deadline_us <= g_virtual_time_us) {
            thread->callback_wait = false;
            thread->callback_wait_kind = CallbackWaitKind::None;
            ctx.set_gpr(2, 0u);
            return;
        }
        thread->callback_wait = callbacks;
        save_continuation(*thread, ctx);
        thread->suspended.set_gpr(2, 0u);
        thread->state = ThreadState::Delayed;
        thread->delay_until_us = thread->vblank_deadline_us;
        ++g_delay_count;
        if (!activate_next(rt, ctx, "vblank")) {
            ++g_deadlock_count;
            rt.stop("PSP scheduler deadlock while waiting for vblank");
        }
    };
    register_import(runtime, "sceDisplay", 0x984C27E7u, "sceDisplayWaitVblankStart",
        [wait_vblank](Runtime &rt, AllegrexContext &ctx) { wait_vblank(rt, ctx, false); });
    register_import(runtime, "sceDisplay", 0x46F186C3u, "sceDisplayWaitVblankStartCB",
        [wait_vblank](Runtime &rt, AllegrexContext &ctx) { wait_vblank(rt, ctx, true); });

    // -----------------------------------------------------------------------
    // sceGe_user: metadata and submission logging.  Lists are recorded (address,
    // stall pointer, callback id, first command words) but not rasterized; the
    // first submission is the Phase 3 milestone and the next phase's work item.
    // -----------------------------------------------------------------------
    register_import(runtime, "sceGe_user", 0xE47E40E4u, "sceGeEdramGetAddr",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0x04000000u); });
    register_import(runtime, "sceGe_user", 0x1F6752ADu, "sceGeEdramGetSize",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0x00200000u); });
    register_import(runtime, "sceGe_user", 0xB77905EAu, "sceGeEdramSetAddrTranslation",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    auto ge_list_enqueue = [](Runtime &rt, AllegrexContext &ctx, const char *call) {
        static std::uint32_t next_list_id = 0x35000000u;
        const std::uint32_t list_address = ctx.gpr[4];
        const std::uint32_t stall_address = ctx.gpr[5];
        const std::uint32_t callback_id = ctx.gpr[6];
        const std::uint32_t callback_arg = ctx.gpr[7];
        const std::int32_t list_id = static_cast<std::int32_t>(next_list_id++);
        const std::uint64_t submission = ++g_ge_submissions;
        // Diagnostic delayed thread start: PSPRECOMP_MOTORSTORM_START_ALL_CREATED
        // holds a submission count; once reached, every dormant thread is
        // released exactly once.  Used to probe whether a stalled guest state
        // machine is waiting on work hidden behind a never-started thread.
        if (const char *start_text = std::getenv("PSPRECOMP_MOTORSTORM_START_ALL_CREATED")) {
            static const std::uint64_t start_at = std::strtoull(start_text, nullptr, 0);
            static bool started = false;
            if (!started && start_at != 0u && submission >= start_at) {
                started = true;
                for (auto &[other_uid, other] : g_threads) {
                    if (other.state == ThreadState::Created) start_created_thread(other);
                }
            }
        }
        // Queue lifetime and callbacks are guest-visible even in headless runs.
        g_ge_list_records.push_back(GeListRecord{
            static_cast<std::uint32_t>(list_id), list_address, stall_address, callback_id, submission});
        // SIGNAL and FINISH interrupts are generated when the corresponding
        // command/END pairs execute, not merely when a list is enqueued.
        if (submission <= 8u || !g_ge_first_submission_logged) {
            std::ostringstream out;
            out << call << " list=" << hex32(list_address) << " stall=" << hex32(stall_address)
                << " cb=" << hex32(callback_id) << " arg=" << hex32(callback_arg)
                << " -> id=" << hex32(static_cast<std::uint32_t>(list_id))
                << " ra=" << hex32(ctx.gpr[31]) << " (queued only, not rasterized)";
            log_line(category::kGe, out.str());
        }
        if (!g_ge_first_submission_logged && list_address != 0u &&
            rt.memory().contains(list_address, 4u)) {
            g_ge_first_submission_logged = true;
            std::ostringstream out;
            // Raw first 64 list words (command byte in bits 24..31, low 24 bits
            // are the inline parameter for two-word commands).  Recorded as-is:
            // nothing is decoded or executed.
            out << "first submission raw words (first 64):";
            for (std::uint32_t index = 0u; index < 64u; ++index) {
                const std::uint32_t address = list_address + index * 4u;
                if (!rt.memory().contains(address, 4u)) break;
                const std::uint32_t word = rt.memory().load32(address);
                out << " [" << index << "]=cmd" << hex32(word >> 24u) << "/" << hex32(word & 0xFFFFFFu);
            }
            log_line(category::kGe, out.str());
        }
        // Diagnostic stop: bound a front-end/attract loop run so it terminates
        // and prints the full census.
        if (const char *limit_text = std::getenv("PSPRECOMP_MOTORSTORM_STOP_AFTER_GE")) {
            static const std::uint64_t limit = std::strtoull(limit_text, nullptr, 0);
            if (limit != 0u && submission >= limit)
                rt.stop("GE submission limit reached (" + std::to_string(submission) +
                        "): diagnostic stop");
        }
        ctx.set_gpr(2, static_cast<std::uint32_t>(list_id));
    };
    register_import(runtime, "sceGe_user", 0xAB49E76Au, "sceGeListEnQueue",
        [ge_list_enqueue](Runtime &rt, AllegrexContext &ctx) {
            ge_list_enqueue(rt, ctx, "sceGeListEnQueue");
        });
    register_import(runtime, "sceGe_user", 0x1C0D95A6u, "sceGeListEnQueueHead",
        [ge_list_enqueue](Runtime &rt, AllegrexContext &ctx) {
            ge_list_enqueue(rt, ctx, "sceGeListEnQueueHead");
        });
    register_import(runtime, "sceGe_user", 0x05DB22CEu, "sceGeUnsetCallback",
        [](Runtime &, AllegrexContext &ctx) {
            const std::uint32_t callback_id = ctx.gpr[4];
            if (g_ge_callback_table.erase(callback_id) == 1u) {
                if (g_ge_callback_id == callback_id) g_ge_callback_id = 0u;
                log_line(category::kGe, "sceGeUnsetCallback id=" + hex32(callback_id) + " cleared");
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceGe_user", 0xE0D68148u, "sceGeListUpdateStallAddr",
        [](Runtime &rt, AllegrexContext &ctx) {
            if (g_ge_stall_updates++ < 8u) {
                log_line(category::kGe, "sceGeListUpdateStallAddr list=" + hex32(ctx.gpr[4]) +
                                            " stall=" + hex32(ctx.gpr[5]));
            }
            const std::uint32_t list_id = ctx.gpr[4];
            for (auto &record : g_ge_list_records) {
                if (record.id != list_id) continue;
                record.stall = ctx.gpr[5];
                if (ge_thread_enabled() && ge_rasterize())
                    queue_ge_segment(rt, record, false);
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceGe_user", 0x03444EB4u, "sceGeListSync",
        [](Runtime &, AllegrexContext &ctx) {
            if (g_ge_sync_calls++ < 8u)
                log_line(category::kGe, "sceGeListSync id=" + hex32(ctx.gpr[4]) +
                                            " mode=" + hex32(ctx.gpr[5]) + " -> 0 (immediate)");
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceGe_user", 0xB287BD61u, "sceGeDrawSync",
        [](Runtime &rt, AllegrexContext &ctx) {
            if (g_ge_sync_calls++ < 8u)
                log_line(category::kGe, "sceGeDrawSync mode=" + hex32(ctx.gpr[4]) +
                                            " -> 0 (immediate)");
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_DUMP_GE") && !g_ge_list_records.empty()) {
                std::ofstream out("out/motorstorm/ge_lists.txt", std::ios::app);
                for (const auto &record : g_ge_list_records) {
                    const std::uint32_t begin = record.list;
                    std::uint32_t end = record.stall > begin ? record.stall : begin + 4096u * 4u;
                    out << "list id=" << hex32(record.id) << " addr=" << hex32(begin)
                        << " stall=" << hex32(record.stall) << " words=" << ((end - begin) / 4u)
                        << "\n";
                    std::uint32_t words = 0u;
                    for (std::uint32_t address = begin; address + 4u <= end && words < 4096u;
                         address += 4u, ++words) {
                        if (!rt.memory().contains(address, 4u)) break;
                        out << hex32(rt.memory().load32(address)) << ((words % 8u) == 7u ? '\n' : ' ');
                    }
                    out << "\nend-list\n";
                }
            }
            const bool rasterize = ge_rasterize();
            const bool threaded = rasterize && ge_thread_enabled();
            if (threaded) {
                for (const auto &record : g_ge_list_records)
                    queue_ge_segment(rt, record, true);
                g_ge_thread.wait();
            }
            for (const auto &record : g_ge_list_records) {
                std::vector<GeInterrupt> interrupts;
                if (threaded) {
                    interrupts = std::move(record.progress->interrupts);
                } else {
                    update_racing_scene(rt);
                    interrupts = motorstorm::software_ge_execute_list(rt.memory(), record.list, record.stall,
                                                                      rasterize, record.submission);
                }
                const auto found = g_ge_callback_table.find(record.callback_id);
                if (found == g_ge_callback_table.end()) continue;
                for (const auto &event : interrupts) {
                    if ((event.finish ? found->second.finish_func : found->second.signal_func) != 0u)
                        g_ge_pending_callbacks.push_back(
                            GePendingCallback{record.callback_id, event.token, event.finish, event.next_pc});
                }
            }
            g_ge_list_records.clear();
            // Frame dump: write the most recently rendered GE framebuffer as PPM
            // for inspection.  The game double-buffers, so the display pointer at
            // DrawSync time is usually the front buffer (still blank).
            static std::uint64_t next_frame_dump_submission = [] {
                const char *text = std::getenv("PSPRECOMP_MOTORSTORM_DUMP_AFTER_GE");
                return text != nullptr ? std::strtoull(text, nullptr, 0) : std::uint64_t{0};
            }();
            // FRAME_DUMP_EVERY spaces periodic dumps across a long run (the
            // window slides by N submissions after each written frame) and
            // FRAME_DUMP_COUNT raises the eight-frame default cap.
            static const std::uint64_t dump_every = [] {
                const char *text = std::getenv("PSPRECOMP_MOTORSTORM_FRAME_DUMP_EVERY");
                return text != nullptr ? std::strtoull(text, nullptr, 0) : std::uint64_t{0};
            }();
            static const std::uint64_t dump_count_limit = [] {
                const char *text = std::getenv("PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT");
                return text != nullptr ? std::strtoull(text, nullptr, 0) : std::uint64_t{8};
            }();
            // FRAME_DUMP_ROLLING keeps only the most recent FRAME_DUMP_COUNT
            // frames by reusing the same numbered slots, so an intermittent
            // visual fault can be captured without unbounded disk use.
            static const bool dump_rolling =
                MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_FRAME_DUMP_ROLLING");
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_FRAME_DUMP") &&
                (dump_rolling || g_ge_frame_dumps < dump_count_limit) &&
                g_ge_submissions >= next_frame_dump_submission) {
                // The window advances only after a successful dump (the first
                // DrawSync may run before any framebuffer is configured).
                const bool dump_wanted = true;
                (void)dump_wanted;
                const std::uint32_t dump_fb = motorstorm::software_ge_framebuffer() != 0u
                    ? motorstorm::software_ge_framebuffer()
                    : g_display.frame_buf;
                const std::uint32_t dump_stride = motorstorm::software_ge_framebuffer_stride() != 0u
                    ? motorstorm::software_ge_framebuffer_stride()
                    : (g_display.stride != 0u ? g_display.stride : 512u);
                const std::uint32_t dump_format = motorstorm::software_ge_framebuffer() != 0u
                    ? motorstorm::software_ge_framebuffer_format()
                    : g_display.format;
                if (dump_fb == 0u) {
                    ctx.set_gpr(2, 0u);
                    return;
                }
                ++g_ge_frame_dumps;
                gpu_settle(rt.memory());  // dumps read guest VRAM
                const std::uint64_t dump_slot = dump_rolling && dump_count_limit != 0u
                    ? ((g_ge_frame_dumps - 1u) % dump_count_limit) + 1u
                    : g_ge_frame_dumps;
                if (dump_every != 0u)
                    next_frame_dump_submission = g_ge_submissions + dump_every;
                const std::uint32_t width = g_display.width != 0u ? g_display.width : 480u;
                const std::uint32_t height = g_display.height != 0u ? g_display.height : 272u;
                // Optionally dump a second framebuffer (the display target)
                // beside the GE's current one: the game double-buffers, so the
                // finished picture is usually the other buffer.
                const char *both_env = std::getenv("PSPRECOMP_MOTORSTORM_FRAME_DUMP_BOTH");
                const std::uint32_t second_fb = both_env != nullptr ? g_display.frame_buf : 0u;
                const std::uint32_t second_stride = g_display.stride != 0u ? g_display.stride : 512u;
                const auto write_ppm = [&](std::uint32_t fb, std::uint32_t stride, std::uint32_t format,
                                           const char *suffix) {
                    std::vector<std::uint8_t> rgb(static_cast<std::size_t>(width) * height * 3u, 0u);
                    for (std::uint32_t y = 0u; y < height; ++y) {
                        for (std::uint32_t x = 0u; x < width; ++x) {
                            const std::uint32_t pixel_bytes = format == 3u ? 4u : 2u;
                            const std::uint32_t address = fb + (y * stride + x) * pixel_bytes;
                            if (!rt.memory().contains(address, pixel_bytes)) continue;
                            std::uint32_t r = 0u, g = 0u, b = 0u;
                            switch (format) {
                            case 0u: { // 5650
                                const std::uint32_t v = rt.memory().load16(address);
                                r = (v & 0x1Fu) << 3u; g = ((v >> 5u) & 0x3Fu) << 2u; b = ((v >> 11u) & 0x1Fu) << 3u;
                                break;
                            }
                            case 1u: { // 5551
                                const std::uint32_t v = rt.memory().load16(address);
                                r = (v & 0x1Fu) << 3u; g = ((v >> 5u) & 0x1Fu) << 3u; b = ((v >> 10u) & 0x1Fu) << 3u;
                                break;
                            }
                            case 2u: { // 4444
                                const std::uint32_t v = rt.memory().load16(address);
                                r = (v & 0xFu) << 4u; g = ((v >> 4u) & 0xFu) << 4u; b = ((v >> 8u) & 0xFu) << 4u;
                                break;
                            }
                            default: { // 8888
                                const std::uint32_t v = rt.memory().load32(address);
                                r = v & 0xFFu; g = (v >> 8u) & 0xFFu; b = (v >> 16u) & 0xFFu;
                                break;
                            }
                            }
                            const std::size_t index = (static_cast<std::size_t>(y) * width + x) * 3u;
                            rgb[index + 0u] = static_cast<std::uint8_t>(r);
                            rgb[index + 1u] = static_cast<std::uint8_t>(g);
                            rgb[index + 2u] = static_cast<std::uint8_t>(b);
                        }
                    }
                    const char *dump_root = std::getenv("PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR");
                    const auto root = dump_root ? std::filesystem::path(dump_root) : std::filesystem::path("out/motorstorm");
                    std::filesystem::create_directories(root);
                    const std::string path = (root / ("frame_" + std::to_string(dump_slot) +
                        suffix + ".ppm")).string();
                    std::ofstream ppm(path, std::ios::binary);
                    ppm << "P6\n" << width << " " << height << "\n255\n";
                    ppm.write(reinterpret_cast<const char *>(rgb.data()),
                              static_cast<std::streamsize>(rgb.size()));
                    log_line(category::kGe, "frame dump written: " + path + " fb=" + hex32(fb));
                };
                write_ppm(dump_fb, dump_stride, dump_format, "");
                if(gpu_active()) {
                    // The GE may finish on an intermediate target (for example
                    // a world pass before HUD composition). Capture the display
                    // target used by window_present, not that intermediate view.
                    const auto display_fb = g_display.frame_buf != 0u ? g_display.frame_buf : dump_fb;
                    const auto display_stride = g_display.frame_buf != 0u ? g_display.stride : dump_stride;
                    const auto display_format = g_display.frame_buf != 0u ? g_display.format : dump_format;
                    const auto image=gpu_capture(rt.memory(),display_fb,display_stride,display_format,480,272);
                    if(!image.rgba.empty()) {
                        const char *dump_root=std::getenv("PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR");
                        const auto root=dump_root?std::filesystem::path(dump_root):std::filesystem::path("out/motorstorm");
                        const auto path=root/("frame_"+std::to_string(dump_slot)+"_gpu.ppm");
                        // Pack RGBA to RGB first: one write instead of one per pixel.
                        std::vector<std::uint8_t> rgb(image.rgba.size()/4*3);
                        for(std::size_t i=0,o=0;i<image.rgba.size();i+=4,o+=3) std::memcpy(rgb.data()+o,image.rgba.data()+i,3);
                        std::ofstream ppm(path,std::ios::binary); ppm<<"P6\n"<<image.width<<' '<<image.height<<"\n255\n";
                        ppm.write(reinterpret_cast<const char *>(rgb.data()),static_cast<std::streamsize>(rgb.size()));
                        log_line(category::kGe,"GPU output dump written: "+path.string());
                    }
                }
                if (second_fb != 0u && second_fb != dump_fb)
                    write_ppm(second_fb, second_stride, g_display.format, "_disp");
            }
            pace_frame(rt.memory());
            // Publish the frame the guest just displayed to the native window.
            window_present(rt.memory(), g_display.frame_buf,
                           g_display.stride != 0u ? g_display.stride : 512u, g_display.format,
                           g_display.width != 0u ? g_display.width : 480u,
                           g_display.height != 0u ? g_display.height : 272u);
            // Optional race benchmark: close the guest-time window and stop.
            const auto bench_audio = perf::bench_window().enabled ? audio_report() : AudioReport{};
            if (perf::bench_frame(g_virtual_time_us, g_display.set_frame_buf_count,
                                  g_ge_submissions, bench_audio.underruns, bench_audio.device_dry))
                rt.stop("race benchmark window complete");
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceGe_user", 0xB448EC0Du, "sceGeBreak",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "sceGe_user", 0x4C06E472u, "sceGeContinue",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    // 0xA4FC06A4 is sceGeSetCallback (verified against the PPSSPP sceGe
    // table).  The guest supplies a PspGeCallbackData { signal_func,
    // signal_arg, finish_func, finish_arg } and receives a callback id used
    // by sceGeListEnQueue. SIGNAL/FINISH command tokens are delivered through
    // CheckCallback, with the command continuation PC as the third argument.
    register_import(runtime, "sceGe_user", 0xA4FC06A4u, "sceGeSetCallback",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t data_address = ctx.gpr[4];
            if (data_address == 0u || !rt.memory().contains(data_address, 16u)) {
                error_line("sceGeSetCallback: invalid data pointer " + hex32(data_address));
                ctx.set_gpr(2, 0x80000103u);
                return;
            }
            GeCallbackData data;
            data.signal_func = rt.memory().load32(data_address + 0u);
            data.signal_arg = rt.memory().load32(data_address + 4u);
            data.finish_func = rt.memory().load32(data_address + 8u);
            data.finish_arg = rt.memory().load32(data_address + 12u);
            const std::uint32_t callback_id = g_next_ge_callback_id++;
            g_ge_callback_table.emplace(callback_id, data);
            if (g_ge_callback_id == 0u) g_ge_callback_id = callback_id;
            std::ostringstream out;
            out << "sceGeSetCallback signal=" << hex32(data.signal_func)
                << " signal_arg=" << hex32(data.signal_arg)
                << " finish=" << hex32(data.finish_func)
                << " finish_arg=" << hex32(data.finish_arg)
                << " -> id=" << hex32(callback_id);
            log_line(category::kGe, out.str());
            ctx.set_gpr(2, callback_id);
        });

    // -----------------------------------------------------------------------
    // sceMpeg: the profile cannot decode PMF movies.  MotorStorm imports the
    // full movie API statically, so the missing module would stop the run the
    // moment the intro movie starts.  sceMpegInit reports failure through the
    // documented error range and every other entry stays a harmless success;
    // the game's movie wrapper checks Init and takes its "no movie" path.
    // -----------------------------------------------------------------------
    register_import(runtime, "sceMpeg", 0x682A619Bu, "sceMpegInit",
        [](Runtime &, AllegrexContext &ctx) {
            static const bool succeed = std::getenv("PSPRECOMP_MOTORSTORM_MPEG_INIT_OK") != nullptr;
            if (succeed) {
                log_line(category::kModule, "sceMpegInit -> 0 (diagnostic)");
                ctx.set_gpr(2, 0u);
                return;
            }
            log_line(category::kModule, "sceMpegInit -> 0x80618001 (no MPEG decoding on the host)");
            ctx.set_gpr(2, 0x80618001u);
        });
    // Ringbuffer bookkeeping: the movie feeder thread asks how much space is
    // free (in packets) before each put, so a constant zero stalls it forever.
    // MotorStorm constructs a 1024-packet ringbuffer; report the whole ring
    // free each time so the feeder streams the source file through and reaches
    // its end-of-stream handling quickly.  QueryMemSize must return the real
    // packet footprint (2048-byte packets plus 104 bytes of bookkeeping each)
    // or the game allocates a zero-length ring.
    register_import(runtime, "sceMpeg", 0xD7A29F46u, "sceMpegRingbufferQueryMemSize",
        [](Runtime &, AllegrexContext &ctx) {
            const std::int32_t packets = static_cast<std::int32_t>(ctx.gpr[4]);
            const std::int32_t size = packets > 0 ? packets * 2152 : 0;
            ctx.set_gpr(2, static_cast<std::uint32_t>(size));
        });
    register_import(runtime, "sceMpeg", 0xB5F6DC87u, "sceMpegRingbufferAvailableSize",
        [](Runtime &, AllegrexContext &ctx) {
            ctx.set_gpr(2, 1024u);
        });
    register_import(runtime, "sceMpeg", 0xB240A59Eu, "sceMpegRingbufferPut",
        [](Runtime &, AllegrexContext &ctx) {
            // Report that every offered packet was accepted; the game tracks
            // read/write offsets in its own ringbuffer structure.
            ctx.set_gpr(2, ctx.gpr[5]);
        });
    {
        struct MpegStub { std::uint32_t nid; const char *name; };
        static constexpr MpegStub kMpegStubs[] = {
            {0x13407F13u, "sceMpegAvcDecode"},
            {0x167AFD9Eu, "sceMpegInitAu"},            {0x211A057Cu, "sceMpegAvcQueryYCbCrSize"},
            {0x21FF80E4u, "sceMpegQueryStreamOffset"}, {0x31BD0272u, "sceMpegAvcCsc"},
            {0x37295ED8u, "sceMpegRingbufferConstruct"}, {0x42560F23u, "sceMpegRegistStream"},
            {0x4571CC64u, "sceMpegAvcDecodeFlush"},     {0x591A4AA2u, "sceMpegUnRegistStream"},
            {0x606A4649u, "sceMpegDelete"},            {0x611E9E11u, "sceMpegQueryStreamSize"},
            {0x67179B1Bu, "sceMpegAvcInitYCbCr"},      {0x707B7629u, "sceMpegFlushAllStream"},
            {0x800C44DFu, "sceMpegAtracDecode"},       {0x874624D6u, "sceMpegFinish"},
            {0x8C1E027Du, "sceMpegGetPcmAu"},          {0xA11C7026u, "sceMpegAvcDecodeMode"},
            {0xA780CF7Eu, "sceMpegMallocAvcEsBuf"},
            {0xC02CF6B5u, "sceMpegQueryPcmEsSize"},
            {0xC132E22Fu, "sceMpegQueryMemSize"},      {0xCEB870B1u, "sceMpegFreeAvcEsBuf"},
            {0xD8C5F121u, "sceMpegCreate"},
            {0xE1CE83A7u, "sceMpegGetAtracAu"},        {0xF0EB1125u, "sceMpegAvcDecodeYCbCr"},
            {0xF8DCB679u, "sceMpegQueryAtracEsSize"},  {0xFE246728u, "sceMpegGetAvcAu"},
        };
        for (const MpegStub &stub : kMpegStubs) {
            register_import(runtime, "sceMpeg", stub.nid, stub.name,
                [nid = stub.nid](Runtime &, AllegrexContext &ctx) {
                    // A decoder context was never created. Reporting success
                    // here makes the guest dereference an uninitialized handle
                    // and spin before it can take its normal movie-error path.
                    ctx.set_gpr(2, nid == 0xC132E22Fu ? 0x10000u :
                                   nid == 0xD8C5F121u ? 0x80618001u : 0u);
                });
        }
    }

    // -----------------------------------------------------------------------
    // sceCtrl
    // -----------------------------------------------------------------------
    register_import(runtime, "sceCtrl", 0x6A2774F3u, "sceCtrlSetSamplingCycle",
        [](Runtime &, AllegrexContext &ctx) {
            const auto previous = g_ctrl_requested_cycle;
            if ((ctx.gpr[4] != 0u && ctx.gpr[4] < 5555u) || ctx.gpr[4] > 20000u) {
                ctx.set_gpr(2, 0x800001FEu); return;
            }
            g_ctrl_requested_cycle = ctx.gpr[4];
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_CTRL"))
                log_line("CTRL", "SetSamplingCycle requested=" + std::to_string(ctx.gpr[4]));
            ctx.set_gpr(2, previous);
        });
    register_import(runtime, "sceCtrl", 0x1F4011E6u, "sceCtrlSetSamplingMode",
        [](Runtime &, AllegrexContext &ctx) {
            const auto previous = g_ctrl_requested_mode;
            if (ctx.gpr[4] > 1u) { ctx.set_gpr(2, 0x80000107u); return; }
            g_ctrl_requested_mode = ctx.gpr[4];
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_CTRL"))
                log_line("CTRL", "SetSamplingMode requested=" + std::to_string(ctx.gpr[4]));
            ctx.set_gpr(2, previous);
        });
    register_import(runtime, "sceCtrl", 0x1F803938u, "sceCtrlReadBufferPositive",
        [](Runtime &rt, AllegrexContext &ctx) {
            // PSPRECOMP_MOTORSTORM_PAD holds a pad word (see sceCtrl bits) that
            // is reported as held for the whole run; used for unattended
            // bring-up and as the hook the host window will drive later.
            static const std::uint32_t forced_pad = [] {
                if (const char *text = std::getenv("PSPRECOMP_MOTORSTORM_PAD"))
                    return static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
                return 0u;
            }();
            const std::uint32_t address = ctx.gpr[4];
            const std::int32_t count = static_cast<std::int32_t>(ctx.gpr[5]);
            if (count < 0 || count > 64) { ctx.set_gpr(2, 0x80000104u); return; }
            if (count == 0) { ctx.set_gpr(2, 0u); return; }
            if (address == 0u || !rt.memory().contains(address, 16u)) { ctx.set_gpr(2, 0x80000103u); return; }
            auto input = window_input();
            if (!g_input_script.empty() &&
                (g_input_script_live_after == 0u || g_virtual_time_us < g_input_script_live_after)) {
                while (g_input_script_index + 1 < g_input_script.size() &&
                       g_input_script[g_input_script_index + 1].time <= g_virtual_time_us)
                    ++g_input_script_index;
                input.buttons = 0;
                input.x = input.y = 128;
                if (g_input_script[g_input_script_index].time <= g_virtual_time_us) {
                    const auto &record = g_input_script[g_input_script_index];
                    input.buttons = record.buttons; input.x = record.x; input.y = record.y;
                }
            }
            const std::uint32_t live_pad = input.buttons;
            g_last_pad_buttons = live_pad | (static_cast<std::uint32_t>(input.x) << 16u) | (static_cast<std::uint32_t>(input.y) << 24u);
            const auto analog_x = g_ctrl_requested_mode == 1u ? input.x : std::uint8_t{128u};
            const auto analog_y = g_ctrl_requested_mode == 1u ? input.y : std::uint8_t{128u};
            if (address != 0u && count > 0 && rt.memory().contains(address, 16u)) {
                rt.memory().zero(address, 16u);
                rt.memory().store32(address, static_cast<std::uint32_t>(g_virtual_time_us));
                rt.memory().store32(address + 4u, forced_pad | live_pad);
                rt.memory().store8(address + 8u, analog_x);
                rt.memory().store8(address + 9u, analog_y);
            }
            if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_CTRL")) {
                static std::uint64_t samples = 0u;
                static std::uint32_t previous_buttons = 0xFFFFFFFFu;
                static std::uint32_t previous_axes = 0xFFFFFFFFu;
                const std::uint32_t buttons = forced_pad | live_pad;
                const std::uint32_t axes = static_cast<std::uint32_t>(analog_x) |
                    (static_cast<std::uint32_t>(analog_y) << 8u);
                if (++samples <= 4u || buttons != previous_buttons || axes != previous_axes || samples % 120u == 0u) {
                    std::ostringstream out;
                    out << "guest_us=" << g_virtual_time_us << " sample=" << samples
                        << " frame=" << g_display.set_frame_buf_count << " address=" << hex32(address)
                        << " count=" << count << " live=" << hex32(live_pad) << " forced=" << hex32(forced_pad)
                        << " buttons=" << hex32(buttons) << " analog=" << static_cast<unsigned>(analog_x)
                        << ',' << static_cast<unsigned>(analog_y) << " returned=1"
                        << " xinput=" << input.connected << " slot=" << input.slot << " packet=" << input.packet
                        << " requested_cycle=" << g_ctrl_requested_cycle << " requested_mode=" << g_ctrl_requested_mode
                        << " ra=" << hex32(ctx.gpr[31]);
                    log_line("CTRL", out.str());
                }
                previous_buttons = buttons;
                previous_axes = axes;
            }
            // This profile currently supplies one latest snapshot. Report that
            // actual initialized record, not the caller's eight-record capacity.
            ctx.set_gpr(2, 1u);
        });

    // -----------------------------------------------------------------------
    // sceUmdUser: game-neutral virtual drive state machine.
    //
    // The host supplies a disc, so the drive powers up inserted and ready
    // (kUmdPresent|kUmdReady).  sceUmdActivate() spins it up to readable
    // (kUmdReadable) and delivers the registered UMD callback through the
    // normal guest callback path; every transition wakes matching waiters.
    // -----------------------------------------------------------------------
    register_import(runtime, "sceUmdUser", 0x46EBB729u, "sceUmdCheckMedium",
        [](Runtime &, AllegrexContext &ctx) {
            hle_line("sceUmdCheckMedium -> 1 (disc present)");
            ctx.set_gpr(2, 1u);
        });
    register_import(runtime, "sceUmdUser", 0x6B4A146Cu, "sceUmdGetDriveStat",
        [](Runtime &rt, AllegrexContext &ctx) {
            // Diagnostic boot-skip (PSPRECOMP_MOTORSTORM_SKIP_BOOT=N): once the
            // loading screen has been up for N frames, walk the Boot scene's
            // object to the "finished" state the scene-change handler looks for
            // (obj+0x40 == -2).  This runs in the present phase, i.e. after the
            // update forced -1 and before the scene-change handler runs, which
            // is exactly when the game's own loading logic would set it.  It is
            // a bring-up probe for the missing producer of that marker.
            static const std::uint64_t skip_after = [] {
                const char *text = std::getenv("PSPRECOMP_MOTORSTORM_SKIP_BOOT");
                return text != nullptr ? std::strtoull(text, nullptr, 0) : std::uint64_t{0};
            }();
            if (skip_after != 0u) {
                static std::uint64_t polls = 0u;
                static bool fired = false;
                ++polls;
                if (!fired && polls >= skip_after) {
                    fired = true;
                    if (rt.memory().contains(0x08A9E48Cu, 4u)) {
                        const std::uint32_t object = rt.memory().load32(0x08A9E48Cu);
                        if (object != 0u && rt.memory().contains(object + 0x40u, 4u)) {
                            rt.memory().store32(object + 0x40u, 0xFFFFFFFEu);
                            log_line(category::kGe, "skip-boot: scene object " + hex32(object) +
                                " marked complete after " + std::to_string(polls) + " polls");
                        }
                    }
                }
            }
            // Diagnostic movie skip (PSPRECOMP_MOTORSTORM_SKIP_MOVIE=1): the PMF
            // player cannot run without MPEG decoding, so once the game raises
            // its "movie playing" flag (0x08AB58E6) the profile calls the game's
            // own completion callback (0x0893BC5C) with status 0 -- exactly the
            // call the player makes when a movie ends.  The callback clears the
            // flag and updates the movie state machine, which a bare flag clear
            // does not (the game then exits instead of continuing).
            if (std::getenv("PSPRECOMP_MOTORSTORM_SKIP_MOVIE") != nullptr) {
                static std::uint64_t movie_completions = 0u;
                static bool in_callback = false;
                if (!in_callback && rt.memory().contains(0x08AB58E6u, 1u) &&
                    rt.memory().load8(0x08AB58E6u) != 0u) {
                    if (movie_completions < 8u) {
                        ++movie_completions;
                        in_callback = true;
                        log_line(category::kGe, "skip-movie: invoking movie completion (#" +
                            std::to_string(movie_completions) + ")");
                        notify_guest_function(rt, ctx, 0x0893BC5Cu, 0u, 0u, "movie-complete",
                                              "skip-movie");
                        in_callback = false;
                        ctx.set_gpr(2, g_umd_state);
                        return;
                    }
                }
            }
            // Diagnostic movie-scene skip
            // (PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE=1): the host cannot decode
            // the PMF/ATRAC stream, so the movie's player threads keep polling
            // for data that never arrives and starve the main thread.  Once the
            // movie pipeline has come up, mark the current scene complete (the
            // same obj+0x40 == -2 marker the scene-change handler looks for)
            // and reap the middleware player threads, letting the scene runner
            // advance to the next scene.  Bring-up probe in the same spirit as
            // SKIP_BOOT.
            if (std::getenv("PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE") != nullptr) {
                static bool fired_movie_scene = false;
                if (!fired_movie_scene && rt.memory().contains(0x08AB58E4u, 1u) &&
                    rt.memory().load8(0x08AB58E4u) != 0u &&
                    rt.memory().contains(0x08AB58E6u, 1u) &&
                    rt.memory().load8(0x08AB58E6u) == 0u) {
                    fired_movie_scene = true;
                    if (rt.memory().contains(0x08A9E48Cu, 4u)) {
                        const std::uint32_t object = rt.memory().load32(0x08A9E48Cu);
                        if (object != 0u && rt.memory().contains(object + 0x40u, 4u)) {
                            rt.memory().store32(object + 0x40u, 0xFFFFFFFEu);
                            log_line(category::kGe, "skip-movie-scene: scene object " +
                                hex32(object) + " marked complete");
                        }
                    }
                    std::vector<std::int32_t> workers;
                    for (const auto &[uid, thread] : g_threads) {
                        if (uid != g_current_uid && thread.entry == 0x08A40DF8u &&
                            thread.state != ThreadState::Completed)
                            workers.push_back(uid);
                    }
                    for (const std::int32_t uid : workers) {
                        log_line(category::kGe, "skip-movie-scene: terminating movie worker uid=" +
                            std::to_string(uid));
                        complete_thread(rt, ctx, uid, 0u, false);
                        // This diagnostic cancellation bypasses the worker's
                        // pthread cleanup. Release only mutex semaphores we
                        // observed it acquiring, so its parent can join and
                        // destroy the movie player. Normal thread termination
                        // retains the kernel's semaphore semantics.
                        std::vector<std::int32_t> held_mutexes;
                        for (const auto &[sema_uid, sema] : g_semas) {
                            if (sema.mutex_owner == uid && sema.count == 0)
                                held_mutexes.push_back(sema_uid);
                        }
                        for (const std::int32_t sema_uid : held_mutexes) {
                            AllegrexContext release{};
                            release.gpr[4] = static_cast<std::uint32_t>(sema_uid);
                            release.gpr[5] = 1u;
                            rt.invoke_import("ThreadManForUser", 0x3F53E640u, release);
                            log_line(category::kGe, "skip-movie-scene: released worker " +
                                std::to_string(uid) + " mutex uid=" + std::to_string(sema_uid));
                        }
                    }
                    // The movie shutdown then drains the streamed audio: it
                    // waits for the sound driver to free its output buffers
                    // (SoundEvent bits).  The stream that would feed those
                    // buffers cannot run on the host, so release the drain
                    // waiters once, exactly like a completed audio stream.
                    for (auto &[flag_uid, flag] : g_event_flags) {
                        if (flag.name == "SoundEvent") {
                            signal_event_flag_bits(rt, flag, 0x09u);
                            log_line(category::kGe, "skip-movie-scene: released SoundEvent uid=" +
                                std::to_string(flag_uid) + " pattern=" +
                                hex32(flag.current_pattern));
                        }
                    }
                }
            }
            ctx.set_gpr(2, g_umd_state);
        });
    auto umd_wait = [](Runtime &rt, AllegrexContext &ctx, bool has_timeout) {
        const std::uint32_t stat = ctx.gpr[4];
        // WithTimeout takes a microsecond duration in a1, not a pointer.
        const std::uint32_t timeout = has_timeout ? ctx.gpr[5] : 0u;
        if ((stat & g_umd_state) != 0u) {
            ctx.set_gpr(2, 0u);
            return;
        }
        // Park until the drive reaches the requested bits or the timeout expires.
        ThreadRecord *thread = current_thread();
        if (thread != nullptr && timeout != 0u) {
            thread->wait_has_deadline = true;
            thread->wait_deadline_us = g_virtual_time_us + timeout;
            thread->wait_timeout_result = 0x800201C9u; // SCE_KERNEL_ERROR_WAIT_TIMEOUT
        }
        {
            std::ostringstream out;
            out << "wait stat=" << hex32(stat) << " state=" << hex32(g_umd_state)
                << " timeout_us=" << timeout << " ra=" << hex32(ctx.gpr[31]);
            log_line(category::kUmd, out.str());
        }
        g_umd_waiters.push_back(UmdWaiter{g_current_uid, stat});
        (void)block_current(rt, ctx, ThreadState::Waiting, "umd-wait-drive-stat");
    };
    register_import(runtime, "sceUmdUser", 0x8EF08FCEu, "sceUmdWaitDriveStat",
        [umd_wait](Runtime &rt, AllegrexContext &ctx) { umd_wait(rt, ctx, false); });
    register_import(runtime, "sceUmdUser", 0x4A9E5E29u, "sceUmdWaitDriveStatCB",
        [umd_wait](Runtime &rt, AllegrexContext &ctx) { umd_wait(rt, ctx, false); });
    register_import(runtime, "sceUmdUser", 0x6AF9B50Au, "sceUmdWaitDriveStatWithTimeout",
        [umd_wait](Runtime &rt, AllegrexContext &ctx) { umd_wait(rt, ctx, true); });
    register_import(runtime, "sceUmdUser", 0xAEE7404Du, "sceUmdRegisterUMDCallBack",
        [](Runtime &rt, AllegrexContext &ctx) {
            const auto callback_uid = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_callbacks.find(callback_uid);
            if (found == g_callbacks.end()) {
                error_line("sceUmdRegisterUMDCallBack: unknown callback uid=" +
                           std::to_string(callback_uid));
                ctx.set_gpr(2, 0x80000103u); // invalid argument
                return;
            }
            g_umd_callback_uid = callback_uid;
            std::ostringstream out;
            out << "callback uid=" << callback_uid << " name=\"" << found->second.name
                << "\" entry=" << hex32(found->second.entry) << " ra=" << hex32(ctx.gpr[31])
                << " registered (drive stat=" << hex32(g_umd_state) << ")";
            log_line(category::kUmd, out.str());
            // If the drive is already readable, deliver the current state so a
            // late registration still observes "media ready".
            if (g_umd_activated)
                notify_callback(rt, ctx, callback_uid, g_umd_state, "register-already-ready");
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceUmdUser", 0xBD2BDE07u, "sceUmdUnRegisterUMDCallBack",
        [](Runtime &, AllegrexContext &ctx) {
            const auto callback_uid = static_cast<std::int32_t>(ctx.gpr[4]);
            if (callback_uid != g_umd_callback_uid) {
                log_line(category::kUmd, "unregister callback uid=" + std::to_string(callback_uid) +
                                             " does not match the registered UMD callback");
                ctx.set_gpr(2, 0x80000103u);
                return;
            }
            g_umd_callback_uid = 0;
            log_line(category::kUmd, "callback uid=" + std::to_string(callback_uid) + " unregistered");
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceUmdUser", 0xC6183D47u, "sceUmdActivate",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t mode = ctx.gpr[4];
            const std::string name = guest_string(rt, ctx.gpr[5], 32u);
            if (mode < 1u || mode > 2u || name.rfind("disc0:", 0u) != 0u) {
                std::ostringstream out;
                out << "activate ignored mode=" << mode << " name=\"" << name
                    << "\" (expects mode 1-2 and \"disc0:\")";
                log_line(category::kUmd, out.str());
                ctx.set_gpr(2, 0x80000103u);
                return;
            }
            g_umd_activated = true;
            umd_set_state(rt, ctx, kUmdPresent | kUmdReady | kUmdReadable, "activate");
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // sceRtc
    // -----------------------------------------------------------------------
    // Wall-clock time here made guest execution depend on host speed: the same
    // guest code took different branches depending on how fast the emulator
    // was.  sceRtcGetCurrentTick must report the same execution-driven clock
    // the scheduler uses, so guest timing is deterministic.
    register_import(runtime, "sceRtc", 0x3F7AD767u, "sceRtcGetCurrentTick",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t address = ctx.gpr[4];
            const std::uint64_t microseconds = g_virtual_time_us;
            if (address != 0u && rt.memory().contains(address, 8u)) {
                rt.memory().store32(address, static_cast<std::uint32_t>(microseconds));
                rt.memory().store32(address + 4u, static_cast<std::uint32_t>(microseconds >> 32u));
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceRtc", 0xE7C27D1Bu, "sceRtcGetCurrentClockLocalTime",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t address = ctx.gpr[4];
            if (address == 0u || !rt.memory().contains(address, 16u)) {
                ctx.set_gpr(2, 0x80000103u);
                return;
            }
            // Derived from the virtual clock so the date is deterministic too.
            const std::time_t now = static_cast<std::time_t>(g_virtual_time_us / 1'000'000u);
            std::tm local{};
#if defined(_WIN32)
            gmtime_s(&local, &now);
#else
            gmtime_r(&now, &local);
#endif
            rt.memory().zero(address, 16u);
            rt.memory().store16(address + 0u, static_cast<std::uint16_t>(local.tm_year + 1900));
            rt.memory().store16(address + 2u, static_cast<std::uint16_t>(local.tm_mon + 1));
            rt.memory().store16(address + 4u, static_cast<std::uint16_t>(local.tm_mday));
            rt.memory().store16(address + 6u, static_cast<std::uint16_t>(local.tm_hour));
            rt.memory().store16(address + 8u, static_cast<std::uint16_t>(local.tm_min));
            rt.memory().store16(address + 10u, static_cast<std::uint16_t>(local.tm_sec));
            rt.memory().store32(address + 12u, 0u);
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // scePower
    // -----------------------------------------------------------------------
    register_import(runtime, "scePower", 0x04B7766Eu, "scePowerIsBatteryExist",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 1u); });
    register_import(runtime, "scePower", 0x87440F5Eu, "scePowerIsPowerOnline",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 1u); });
    register_import(runtime, "scePower", 0xDFA8BAF8u, "scePowerIsBatteryCharging",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 1u); });
    register_import(runtime, "scePower", 0xEBD177D6u, "scePowerGetBatteryLifePercent",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 100u); });

    // -----------------------------------------------------------------------
    // sceImpose / sceDmac
    // -----------------------------------------------------------------------
    register_import(runtime, "sceImpose", 0x36AA6E91u, "sceImposeSetLanguageMode",
        [](Runtime &, AllegrexContext &ctx) { ctx.set_gpr(2, 0u); });
    register_import(runtime, "sceDmac", 0x617F3FE6u, "sceDmacMemcpy",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t destination = ctx.gpr[4];
            const std::uint32_t source = ctx.gpr[5];
            const std::uint32_t size = ctx.gpr[6];
            if (!rt.memory().contains(destination, size == 0u ? 1u : size) ||
                !rt.memory().contains(source, size == 0u ? 1u : size)) {
                ctx.set_gpr(2, 0x80000102u);
                return;
            }
            if (size != 0u) {
                std::vector<std::uint8_t> data(size);
                rt.memory().copy_out(source, data);
                rt.memory().copy_in(destination, data);
            }
            ctx.set_gpr(2, 0u);
        });

    // -----------------------------------------------------------------------
    // sceUtility: system parameters are answered with sane defaults; firmware
    // module loading is the gate to the AV codec and networking subsystems.
    // LoadModule is understood, but successfully loading a firmware PRX
    // without implementing the services it exports would be a fake success, so
    // it reports the exact module and stops.
    // -----------------------------------------------------------------------
    register_import(runtime, "sceUtility", 0xA5DA2406u, "sceUtilityGetSystemParamInt",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t param = ctx.gpr[4];
            const std::uint32_t address = ctx.gpr[5];
            std::uint32_t value = 0u;
            const char *name = "unknown";
            switch (param) {
            case 1u: name = "nickname"; value = 0u; break;
            case 2u: name = "adhoc_channel"; value = 0u; break;
            case 3u: name = "wlan_powersave"; value = 0u; break;
            case 4u: name = "date_format"; value = 0u; break;       // YYYYMMDD
            case 5u: name = "time_format"; value = 0u; break;       // 24 hour
            case 6u: name = "timezone"; value = 0u; break;          // UTC
            case 7u: name = "daylight_savings"; value = 0u; break;
            case 8u: {
                name = "language";
                value = 1u; // English (PSP_SYSTEMPARAM_LANGUAGE_ENGLISH)
                if (const char *env_lang = std::getenv("PSPRECOMP_MOTORSTORM_LANGUAGE")) {
                    value = static_cast<std::uint32_t>(std::strtoul(env_lang, nullptr, 0));
                }
                break;
            }
            case 9u: name = "button_preference"; value = 1u; break; // cross = confirm
            case 10u: name = "parental_level"; value = 0u; break;   // unrestricted
            default: break;
            }
            if (address != 0u && rt.memory().contains(address, 4u))
                rt.memory().store32(address, value);
            if (param == 0u || param > 10u) {
                hle_line("sceUtilityGetSystemParamInt unknown id=" + std::to_string(param) +
                         " -> 0");
            }
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceUtility", 0x34B78343u, "sceUtilityGetSystemParamString",
        [](Runtime &rt, AllegrexContext &ctx) {
            const std::uint32_t param = ctx.gpr[4];
            const std::uint32_t buffer = ctx.gpr[5];
            const std::uint32_t size = ctx.gpr[6];
            const std::string value = param == 1u ? std::string("MSPlayer") : std::string();
            if (buffer != 0u && size != 0u && rt.memory().contains(buffer, size)) {
                const std::size_t length = std::min<std::size_t>(value.size(), size - 1u);
                rt.memory().zero(buffer, size);
                for (std::size_t index = 0; index < length; ++index)
                    rt.memory().store8(buffer + static_cast<std::uint32_t>(index),
                                       static_cast<std::uint8_t>(value[index]));
            }
            ctx.set_gpr(2, 0u);
        });
    // -----------------------------------------------------------------------
    // sceUtility module manager and NP DRM entry points.
    //
    // Module loader policy: known firmware modules are reported present (0),
    // matching a real PSP whose flash0 carries them, because the guest's boot
    // path has no bounded failure handling (its retry helper always returns 1,
    // so a negative result spins forever).  This claims loader bookkeeping
    // only: none of the module SERVICES are implemented, and the DRM/AV/NET
    // imports remain unregistered, stopping loudly with [HLE MISSING] if the
    // guest ever calls one.  PSPRECOMP_MOTORSTORM_MODULE_FAILURE=1 restores the
    // unusual "module unavailable" result (0x80111103) for diagnostics; with
    // MotorStorm that result makes ensure_module_loaded() retry without bound.
    // -----------------------------------------------------------------------
    auto utility_module_name = [](std::uint32_t module_id) -> const char * {
        switch (module_id) {
        case 0x0100u: return "PSP_MODULE_NET_COMMON";
        case 0x0101u: return "PSP_MODULE_NET_ADHOC";
        case 0x0102u: return "PSP_MODULE_NET_INET";
        case 0x0103u: return "PSP_MODULE_NET_PARSEURI";
        case 0x0104u: return "PSP_MODULE_NET_PARSEHTTP";
        case 0x0105u: return "PSP_MODULE_NET_HTTP";
        case 0x0106u: return "PSP_MODULE_NET_SSL";
        case 0x0300u: return "PSP_MODULE_AV_AVCODEC";
        case 0x0301u: return "PSP_MODULE_AV_SASCORE";
        case 0x0302u: return "PSP_MODULE_AV_ATRAC3PLUS";
        case 0x0303u: return "PSP_MODULE_AV_MPEGBASE";
        case 0x0304u: return "PSP_MODULE_AV_MP3";
        case 0x0305u: return "PSP_MODULE_AV_VAUDIO";
        case 0x0306u: return "PSP_MODULE_AV_AAC";
        case 0x0307u: return "PSP_MODULE_AV_G729";
        case 0x0400u: return "PSP_MODULE_NP_COMMON";
        case 0x0401u: return "PSP_MODULE_NP_SERVICE";
        case 0x0500u: return "PSP_MODULE_NP_DRM";
        default: return nullptr;
        }
    };
    register_import(runtime, "sceUtility", 0x2A2B3DE0u, "sceUtilityLoadModule",
        [utility_module_name](Runtime &, AllegrexContext &ctx) {
            const std::uint32_t module_id = ctx.gpr[4];
            const char *module_name = utility_module_name(module_id);
            std::ostringstream out;
            out << "sceUtilityLoadModule id=" << hex32(module_id) << " ("
                << (module_name != nullptr ? module_name : "unknown")
                << ") ra=" << hex32(ctx.gpr[31]);
            log_line(category::kModule, out.str());
            if (module_name == nullptr) {
                log_line(category::kModule,
                         "unknown module id -> 0x80111101 (SCE_ERROR_MODULE_BAD_ID)");
                ctx.set_gpr(2, 0x80111101u);
                return;
            }
            if (std::getenv("PSPRECOMP_MOTORSTORM_MODULE_FAILURE") != nullptr) {
                log_line(category::kModule,
                         "diagnostic mode: -> 0x80111103 (SCE_ERROR_MODULE_NOT_LOADED); "
                         "no successful load claimed");
                ctx.set_gpr(2, 0x80111103u);
                return;
            }
            const bool already_loaded = g_utility_modules.contains(module_id);
            g_utility_modules[module_id] = true;
            log_line(category::kModule,
                     std::string("-> 0 (loader bookkeeping only") +
                         (already_loaded ? ", repeat load is idempotent" : "") +
                         "; module services are not implemented and any call stops with "
                         "[HLE MISSING])");
            ctx.set_gpr(2, 0u);
        });
    register_import(runtime, "sceUtility", 0xE49BFE92u, "sceUtilityUnloadModule",
        [utility_module_name](Runtime &, AllegrexContext &ctx) {
            const std::uint32_t module_id = ctx.gpr[4];
            const char *module_name = utility_module_name(module_id);
            if (module_name == nullptr) {
                log_line(category::kModule, "sceUtilityUnloadModule unknown id=" +
                                                hex32(module_id) + " -> 0x80111101");
                ctx.set_gpr(2, 0x80111101u);
                return;
            }
            if (g_utility_modules.erase(module_id) == 0u) {
                log_line(category::kModule,
                         std::string("sceUtilityUnloadModule id=") + hex32(module_id) + " (" +
                             module_name + ") -> 0x80111103 (SCE_ERROR_MODULE_NOT_LOADED)");
                ctx.set_gpr(2, 0x80111103u);
                return;
            }
            log_line(category::kModule, std::string("sceUtilityUnloadModule id=") +
                                            hex32(module_id) + " (" + module_name + ") -> 0");
            ctx.set_gpr(2, 0u);
        });
    // -----------------------------------------------------------------------
    // scePspNpDrm_user (same NID table as sceNpDrm).  These are the only NP DRM
    // services MotorStorm imports.  For plain (non-EDAT) UMD files both are
    // pure bookkeeping; encrypted EDAT files need PGD decryption and report an
    // honest "no licensee key set" failure instead of faking content.
    // -----------------------------------------------------------------------
    auto file_size_of = [](FileHandle &handle) -> std::uint64_t {
        handle.stream.clear();
        handle.stream.seekg(0, std::ios::end);
        const std::streamoff end = handle.stream.tellg();
        return end > 0 ? static_cast<std::uint64_t>(end) : 0u;
    };
    auto edat_magic_present = [](FileHandle &handle) -> bool {
        std::uint8_t header[8]{};
        handle.stream.clear();
        handle.stream.seekg(static_cast<std::streamoff>(handle.position));
        handle.stream.read(reinterpret_cast<char *>(header), sizeof(header));
        const bool read_ok = handle.stream.gcount() == static_cast<std::streamsize>(sizeof(header));
        handle.stream.clear();
        return read_ok && header[0] == 0x50 && header[1] == 0x53 && header[2] == 0x50 &&
               header[3] == 0x00 && header[4] == 0x45 && header[5] == 0x44 &&
               header[6] == 0x41 && header[7] == 0x54; // "PSP\0EDAT"
    };
    register_import(runtime, "scePspNpDrm_user", 0x08D98894u, "sceNpDrmEdataSetupKey",
        [edat_magic_present](Runtime &rt, AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_files.find(fd);
            if (found == g_files.end()) {
                error_line("sceNpDrmEdataSetupKey: bad fd=" + std::to_string(fd));
                ctx.set_gpr(2, 0x80010009u);
                return;
            }
            if (!edat_magic_present(found->second)) {
                log_line(category::kFile, "sceNpDrmEdataSetupKey fd=" + std::to_string(fd) +
                                              " plain file -> 0 (no DRM)");
                ctx.set_gpr(2, 0u);
                return;
            }
            error_line("sceNpDrmEdataSetupKey: EDAT (encrypted) file requires PGD decryption, "
                       "not implemented");
            ctx.set_gpr(2, 0x80550901u); // SCE_NPDRM_ERROR_NO_K_LICENSEE_SET
        });
    register_import(runtime, "scePspNpDrm_user", 0x219EF5CCu, "sceNpDrmEdataGetDataSize",
        [file_size_of](Runtime &, AllegrexContext &ctx) {
            const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
            const auto found = g_files.find(fd);
            if (found == g_files.end()) {
                error_line("sceNpDrmEdataGetDataSize: bad fd=" + std::to_string(fd));
                ctx.set_gpr(2, static_cast<std::uint32_t>(-1));
                return;
            }
            const std::uint64_t size = found->second.directory ? 0u : file_size_of(found->second);
            log_line(category::kFile, "sceNpDrmEdataGetDataSize fd=" + std::to_string(fd) +
                                          " -> " + std::to_string(size));
            ctx.set_gpr(2, static_cast<std::uint32_t>(size));
        });
    register_import(runtime, "scePspNpDrm_user", 0xA1336091u, "sceNpDrmSetLicenseeKey",
        [](Runtime &, AllegrexContext &ctx) {
            log_line(category::kModule, "sceNpDrmSetLicenseeKey ra=" + hex32(ctx.gpr[31]) +
                                            " -> 0 (key stored by reference only; no DRM content "
                                            "is decrypted by this profile)");
            ctx.set_gpr(2, 0u);
        });

    // Shared game-neutral sceSasCore HLE (same implementation used by the VCS
    // profile): software VAG/ADSR mixer with honest PSP state.  No custom audio
    // backend is added here; audio output is a deterministic host-side mix.
    psprecomp::install_sce_sas_core_hle(runtime);

    // sceAudioOutput2 output path: blocking output parks the calling thread for the buffer's
    // duration.  Returning immediately starved lower-priority threads (the
    // SoundThread spun at priority 16 and user_main never ran again).
    psprecomp::AudioOutput2Config audio_config{};
    audio_config.clock=[](void *) {return g_virtual_time_us;};
    audio_config.delay = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                            std::uint32_t microseconds, void *) {
        ++g_delay_count;
        ThreadRecord *thread = current_thread();
        if (thread == nullptr) {
            rt.stop("sceAudioOutput2OutputBlocking with no current thread");
            return;
        }
        save_continuation(*thread, ctx);
        thread->suspended.set_gpr(2, 0u);
        thread->state = ThreadState::Delayed;
        thread->delay_until_us = g_virtual_time_us + microseconds;
        if (!activate_next(rt, ctx, "audio-output2")) {
            ++g_deadlock_count;
            rt.stop("PSP scheduler deadlock while pacing audio output");
        }
    };
    audio_config.sink = [](void *, const psprecomp::Runtime &rt, std::uint32_t buffer,
                           std::uint32_t sample_count) {
        if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_MUSIC")) {
            if (g_virtual_time_us >= g_music_next_trace) {
                g_music_next_trace = g_virtual_time_us + 1'000'000;
                const auto &m = rt.memory();
                const auto object = m.load32(0x08AA15C0);
                int peak = 0;
                for (std::uint32_t i = 0; i < sample_count * 2; ++i)
                    peak = std::max(peak, std::abs(static_cast<int>(static_cast<std::int16_t>(m.load16(buffer + i * 2)))));
                const auto audio=audio_report();
                log_line("MUSIC", "time_us=" + std::to_string(g_virtual_time_us) +
                    " thread=" + std::to_string(g_current_uid) + " buffer=" + hex32(buffer) +
                    " peak=" + std::to_string(peak) + " enabled=" + std::to_string(m.load8(0x08AB3F10)) +
                    " busy=" + std::to_string(object && m.contains(object + 0x54, 1) ? m.load8(object + 0x54) : 255) +
                    " gain=" + hex32(m.load32(0x08AA14FC)) + " fade=" + hex32(m.load32(0x08AB3F0C)) +
                    " read=" + std::to_string(m.load32(0x08AB3F04)) + "/" + std::to_string(m.load32(0x08AB3F08))+
                    " underruns="+std::to_string(audio.underruns)+" gap_us="+std::to_string(audio.longest_gap_us)+
                    " queued="+std::to_string(audio.buffered_frames));
            }
        }
        audio_submit(rt.memory(), buffer, sample_count,psprecomp::audio_output2_state().volume);
    };
    psprecomp::install_sce_audio_output2_hle(runtime, audio_config);

    // The window presents and supplies input. Its waveOut sink is on by default;
    // explicit AUDIO=0 keeps diagnostic/headless runs silent.
    window_start();
    audio_start(44100u);
    if (window_enabled()) hle_line("native window enabled");
    if (audio_enabled()) hle_line("host audio sink enabled (waveOut 44100 stereo)");

    install_mpeg_hle(runtime);
    install_atrac_hle(runtime);
    const auto save_root = std::getenv("PSPRECOMP_MOTORSTORM_SAVEDATA");
    psprecomp::install_savedata_hle(runtime,
        save_root ? std::filesystem::path(save_root) : runtime.game_root().parent_path().parent_path() / "SAVEDATA",
        [&runtime](std::uint32_t parameter, std::uint32_t result) {
            const auto &memory = runtime.memory();
            const auto mode = memory.load32(parameter + 0x30);
            std::ostringstream line;
            line << "mode=" << mode
                << " game=" << memory.read_c_string(parameter + 0x3C, 13)
                << " slot=" << memory.read_c_string(parameter + 0x4C, 20)
                << " file=" << memory.read_c_string(parameter + 0x64, 13)
                << " bytes=" << memory.load32(parameter + 0x7C) << " result=" << hex32(result);
            // Delete-family modes carry their targets in saveNameList (offset 0x60);
            // dump it plus the surrounding parameter words so the HLE behavior for
            // these modes can be verified against the real request.
            if (mode == 6 || mode == 7 || mode == 10 || mode == 21) {
                const auto list = memory.load32(parameter + 0x60);
                line << " list=" << hex32(list);
                if (list && memory.contains(list, 20)) {
                    for (int i = 0; i < 16; ++i) {
                        if (!memory.contains(list + static_cast<std::uint32_t>(i) * 20u, 20)) break;
                        const auto name = memory.read_c_string(list + static_cast<std::uint32_t>(i) * 20u, 20);
                        if (name.empty()) break;
                        line << " [" << i << "]=\"" << name << "\"";
                    }
                }
                line << " raw=";
                for (std::uint32_t offset = 0x40; offset < 0x90; offset += 4)
                    line << hex32(memory.load32(parameter + offset)) << ' ';
            }
            log_line("SAVEDATA", line.str());
        });
    hle_line("HLE installation complete: scheduler, filesystem, display/GE/ctrl, savedata, SAS, AudioOutput2");
}

std::uint64_t guest_time_us() { return g_virtual_time_us; }
bool frame_rate_unlocked() { return g_frame_rate.unlocked; }

void report_summary() {
    try {
        g_ge_thread.stop();
    } catch (const std::exception &error) {
        error_line(std::string("GE thread: ") + error.what());
    }
    window_shutdown();
    audio_shutdown();
    if (window_close_requested()) hle_line("native window closed by the user");
    if (g_pacer.samples != 0u)
        hle_line("frame-rate governor: samples=" + std::to_string(g_pacer.samples) +
                 " below_real_time=" + std::to_string(g_pacer.slow) + " loading=" + std::to_string(g_pacer.disturbed) +
                 " fallbacks=" + std::to_string(g_pacer.fallbacks) + " restores=" + std::to_string(g_pacer.restores));
    {
        std::vector<std::pair<std::string, std::uint64_t>> imports(g_import_calls.begin(),
                                                                   g_import_calls.end());
        std::sort(imports.begin(), imports.end(), [](const auto &left, const auto &right) {
            return left.second > right.second;
        });
        std::uint64_t total_calls = 0;
        for (const auto &[name, count] : imports) total_calls += count;
        std::ostringstream out;
        out << "imports_with_calls=" << imports.size() << " total_calls=" << total_calls;
        log_line(category::kHle, out.str());
        std::size_t shown = 0;
        for (const auto &[name, count] : imports) {
            if (shown++ >= 25u) break;
            log_line(category::kImport, name + " calls=" + std::to_string(count));
        }
    }
    {
        std::ostringstream out;
        out << "opens=" << g_open_count << " missing=" << g_open_missing
            << " reads=" << g_read_count << " read_bytes=" << g_read_bytes
            << " largest_read=" << g_largest_read
            << " seeks=" << g_seek_count << " writes=" << g_write_count
            << " written_bytes=" << g_write_bytes;
        log_line(category::kFilesystem, out.str());
    }
    {
        std::ostringstream out;
        out << "unique_paths=" << g_tracked_path_set.size() << " accesses=" << g_path_access_total
            << " (first " << std::min<std::size_t>(g_tracked_paths.size(), 50u) << " listed)";
        log_line(category::kFile, out.str());
        const std::size_t count = std::min<std::size_t>(g_tracked_paths.size(), 50u);
        for (std::size_t index = 0; index < count; ++index)
            log_line(category::kFile, "path[" + std::to_string(index) + "]=" + g_tracked_paths[index]);
    }
    {
        log_line(category::kUmd, "transitions=" + std::to_string(g_umd_transitions) +
                                     " final_state=" + hex32(g_umd_state) +
                                     " activated=" + (g_umd_activated ? "1" : "0") +
                                     " callback_uid=" + std::to_string(g_umd_callback_uid) +
                                     " pending_waiters=" + std::to_string(g_umd_waiters.size()));
    }
    {
        std::ostringstream out;
        out << "submissions=" << g_ge_submissions << " stall_updates=" << g_ge_stall_updates
            << " sync_calls=" << g_ge_sync_calls
            << " queue_callbacks_delivered=" << g_ge_callbacks_delivered
            << " display_fb=" << hex32(g_display.frame_buf)
            << " stride=" << g_display.stride << " format=" << g_display.format
            << " mode=" << hex32(g_display.mode) << " " << g_display.width << "x"
            << g_display.height;
        log_line(category::kGe, out.str());
    }
    {
        const auto gpu = gpu_report();
        if (!gpu.adapter.empty()) {
            std::ostringstream out;
            out << gpu.api << " adapter=\"" << gpu.adapter << "\" draws=" << gpu.draws
                << " hardware_transform_draws=" << gpu.hardware_transform_draws << " vertices=" << gpu.vertices
                << " submissions=" << gpu.submissions << " texture_uploads=" << gpu.texture_uploads
                << " publishes(draw/sync/end/cpu/start/other)=" << gpu.publishes[0] << '/' << gpu.publishes[1] << '/'
                << gpu.publishes[2] << '/' << gpu.publishes[3] << '/' << gpu.publishes[4] << '/' << gpu.publishes[5]
                << " publish_waits=" << gpu.publish_waits[0] << '/' << gpu.publish_waits[1] << '/' << gpu.publish_waits[2]
                << '/' << gpu.publish_waits[3] << '/' << gpu.publish_waits[4] << '/' << gpu.publish_waits[5]
                << " publish_wait_ms=" << gpu.publish_wait_ns[0] / 1000000u << '/' << gpu.publish_wait_ns[1] / 1000000u
                << '/' << gpu.publish_wait_ns[2] / 1000000u << '/' << gpu.publish_wait_ns[3] / 1000000u << '/'
                << gpu.publish_wait_ns[4] / 1000000u << '/' << gpu.publish_wait_ns[5] / 1000000u
                << " feedback_syncs=" << gpu.feedback_syncs << " feedback_draws=" << gpu.feedback_draws << " software_draws=" << gpu.software_draws
                << " presents=" << gpu.presents << " skipped_presents=" << gpu.skipped_presents
                << " superseded_presents=" << gpu.superseded_presents
                << " streamed_texture_updates=" << gpu.streamed_texture_updates
                << " replaced_draws=" << gpu.replaced_draws << " replacement_uploads=" << gpu.replacement_uploads
                << " replacements_evicted=" << gpu.replacements_evicted;
            if (gpu.post_gpu_frames) {
                const double scale = 1.0e-6 / gpu.post_gpu_frames;
                out << " post_gpu_frames=" << gpu.post_gpu_frames
                    << " post_resolve_ms=" << gpu.post_gpu_ns[0]*scale
                    << " post_deband_ms=" << gpu.post_gpu_ns[1]*scale
                    << " post_color_ms=" << gpu.post_gpu_ns[2]*scale
                    << " post_max_ms=" << gpu.post_gpu_max_ns*1.0e-6;
            }
            out << " output=" << gpu.resolution_scale*480 << 'x' << gpu.resolution_scale*272
                << " raster=" << gpu.raster_half*240 << 'x' << gpu.raster_half*136 << " AA=" << gpu.antialiasing;
            log_line(category::kGe, out.str());
        }
        if (textures::active()) {
            const auto pack = textures::stats();
            log_line("TEXTURE", "indexed=" + std::to_string(pack.indexed) + " dumped=" + std::to_string(pack.dumped) +
                                    " loaded=" + std::to_string(pack.loaded) + " rejected=" + std::to_string(pack.failed) +
                                    " decode_ms=" + std::to_string(pack.load_microseconds / 1000u));
        }
    }
    psprecomp::report_sas_hle_summary();
    {
        const motorstorm::GeSummary summary = motorstorm::software_ge_summary();
        std::ostringstream out;
        out << "lists=" << summary.lists_executed << " commands=" << summary.commands
            << " max_commands_per_list=" << summary.max_commands_per_list
            << " draws=" << summary.draws << " points=" << summary.prims_by_type[0]
            << " lines=" << (summary.prims_by_type[1] + summary.prims_by_type[2])
            << " triangles=" << (summary.prims_by_type[3] + summary.prims_by_type[4] + summary.prims_by_type[5])
            << " sprites=" << summary.prims_by_type[6] << " unknown=" << summary.unknown_commands
            << " pixels=" << summary.pixels_drawn << " colored=" << summary.pixels_colored
            << " textured_draws=" << summary.textured_draws
            << " vertex_decodes=" << summary.vertex_decodes << " vertex_cache_hits=" << summary.vertex_cache_hits
            << " transfers=" << summary.block_transfers << " transfer_syncs=" << summary.transfer_syncs << " clut_syncs=" << summary.clut_syncs << " gpu_cluts=" << summary.gpu_cluts
            << " gpu_sourced_textures=" << summary.gpu_sourced_textures
            << " transferred_bytes=" << summary.transferred_bytes;
        log_line(category::kGe, out.str());
    }
    {
        std::ostringstream out;
        out << "switches=" << g_switch_count << " delays=" << g_delay_count
            << " preempts=" << g_preempt_count << " deadlocks=" << g_deadlock_count
            << " virtual_time_us=" << g_virtual_time_us
            << " threads_created=" << (g_next_thread_uid - 1);
        log_line(category::kDispatch, out.str());
        for (const auto &[uid, thread] : g_threads) {
            std::ostringstream thread_out;
            thread_out << "uid=" << uid << " name=\"" << thread.name << "\""
                       << " entry=" << hex32(thread.entry) << " priority=" << thread.priority
                       << " state=" << static_cast<int>(thread.state)
                       << " pc=" << hex32(thread.suspended.pc)
                       << " ra=" << hex32(thread.suspended.gpr[31])
                       << " sp=" << hex32(thread.suspended.gpr[29]);
            log_line(category::kDispatch, thread_out.str());
        }
        for (const auto &[uid,cb] : g_callbacks)
            if (cb.notify_count)
                log_line("CALLBACK", "pending uid=" + std::to_string(uid) + " owner=" +
                    std::to_string(cb.owner_uid) + " count=" + std::to_string(cb.notify_count));
        for (const auto &[uid, flag] : g_event_flags) {
            std::ostringstream flag_out;
            flag_out << "eventflag uid=" << uid << " name=\"" << flag.name << "\""
                     << " pattern=" << hex32(flag.current_pattern) << " waiters=";
            if (flag.waiters.empty()) {
                flag_out << "none";
            } else {
                for (std::size_t index = 0; index < flag.waiters.size(); ++index) {
                    if (index != 0u) flag_out << ",";
                    flag_out << flag.waiters[index].uid << "/"
                             << hex32(flag.waiters[index].requested) << "/"
                             << hex32(flag.waiters[index].mode);
                }
            }
            log_line(category::kDispatch, flag_out.str());
        }
        for (const auto &[uid, sema] : g_semas) {
            if (sema.waiters.empty() && sema.mutex_owner < 0) continue;
            std::ostringstream sema_out;
            sema_out << "sema uid=" << uid << " name=\"" << sema.name << "\" count=" << sema.count
                     << " owner=" << sema.mutex_owner << " waiters=";
            for (const auto &waiter : sema.waiters) sema_out << waiter.uid << '/' << waiter.amount << ',';
            log_line(category::kDispatch, sema_out.str());
        }
    }
}


} // namespace motorstorm
