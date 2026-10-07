#pragma once

// Generic PSP user-mode HLE for the MotorStorm profile.
//
// The implementation is deliberately independent from the VCS profile: it
// provides the reusable kernel/runtime services a PSP EBOOT needs to reach its
// own module_start and first frame loop, and nothing game specific.  Anything
// not implemented here stops execution with a loud [HLE MISSING] diagnostic so
// the first genuine blocker is never silent.

#include <cstdint>
#include <filesystem>

namespace psprecomp {
class Runtime;
class GuestMemory;
}

namespace motorstorm {

struct HleOptions {
    // Directory mounted as disc0:/ (the PSP "disc" root).  May not exist;
    // filesystem calls then fail with a real PSP error and a clear log line.
    std::filesystem::path disc_root;
    bool trace_imports{true};
    bool trace_filesystem{true};
    // Per-import trace budget before that import goes quiet (0 = unlimited).
    std::uint64_t import_trace_limit{4};
};

// Installs the MotorStorm HLE set: cooperative PSP scheduler, guest file I/O
// against disc0:/, partition/heap allocation, display/GE/controller stubs, and
// the timing/preemption hook that keeps blocking guest waits making progress.
void install_hle(psprecomp::Runtime &runtime, std::uint32_t user_arena_start,
                 const HleOptions &options);

// Registers address 0 as the PSP thread-return trampoline.  Called by
// install_hle; exposed separately so the bootstrap can assert it happened.
void register_thread_return_target(psprecomp::Runtime &runtime);

// Prints the end-of-run counters: import histogram, file I/O statistics and
// thread/scheduler census.  Safe to call after Runtime::run returned.
void report_summary();

// Current execution-driven guest clock in microseconds.
[[nodiscard]] std::uint64_t guest_time_us();
// Benchmark CPU execution time on the GE worker; excludes blocking waits.
[[nodiscard]] std::uint64_t ge_worker_cpu_time_ns();
// True when the INI frame rate replaces the game's own 30 fps pacing.
[[nodiscard]] bool frame_rate_unlocked();



} // namespace motorstorm
