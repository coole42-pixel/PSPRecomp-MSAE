#include "motorstorm_pacing.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include <chrono>
#include <thread>

namespace motorstorm {

std::uint64_t host_time_us() noexcept {
    return static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
}

void host_sleep_us(std::uint64_t microseconds) noexcept {
    if (microseconds == 0u) return;
    // One timer per thread; only the guest thread paces itself.
    thread_local HANDLE timer = CreateWaitableTimerExW(
        nullptr, nullptr, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, TIMER_ALL_ACCESS);
    if (timer == nullptr) {
        std::this_thread::sleep_for(std::chrono::microseconds(microseconds));
        return;
    }
    LARGE_INTEGER due{};
    due.QuadPart = -static_cast<LONGLONG>(microseconds) * 10;  // relative, 100 ns units
    if (!SetWaitableTimer(timer, &due, 0, nullptr, nullptr, FALSE)) {
        std::this_thread::sleep_for(std::chrono::microseconds(microseconds));
        return;
    }
    WaitForSingleObject(timer, INFINITE);
}

void host_sleep_until_us(std::uint64_t deadline) noexcept {
    for (auto now = host_time_us(); now < deadline; now = host_time_us())
        host_sleep_us(deadline - now);
}

} // namespace motorstorm
