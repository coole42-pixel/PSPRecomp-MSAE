#pragma once

#include <cstdint>

namespace motorstorm {

// Monotonic host wall clock in microseconds.
[[nodiscard]] std::uint64_t host_time_us() noexcept;

// Sleeps the calling thread with sub-millisecond precision (high-resolution
// waitable timer; the default Windows sleep granularity is ~15.6 ms).
void host_sleep_us(std::uint64_t microseconds) noexcept;

} // namespace motorstorm
