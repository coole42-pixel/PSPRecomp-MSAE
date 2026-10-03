#pragma once

#include <algorithm>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <exception>
#include <mutex>
#include <thread>
#include <vector>

namespace psprecomp {

inline unsigned effective_jobs(unsigned requested, unsigned hardware) noexcept {
    return requested != 0u ? requested : std::max(1u, hardware);
}

// Workers claim indexes, write only their own result slots, and never detach.
// The caller alone aggregates results after every worker has joined. On failure
// stop claiming work, finish in-flight tasks, join, then rethrow on the caller.
template <class Work, class Tick>
void parallel_work(std::size_t count, unsigned jobs, Work work, Tick tick) {
    if (count == 0u) return;
    const auto workers = std::min<std::size_t>(std::max(1u, jobs), count);
    if (workers == 1u) {
        for (std::size_t i = 0u; i < count; ++i) work(i);
        return;
    }
    std::atomic<std::size_t> next{0u};
    std::atomic<bool> failed{false};
    std::mutex mutex;
    std::condition_variable changed;
    std::size_t finished_workers = 0u;
    std::exception_ptr error;
    std::vector<std::jthread> threads;
    threads.reserve(workers);
    for (std::size_t w = 0u; w < workers; ++w) {
        threads.emplace_back([&] {
            try {
                while (!failed.load(std::memory_order_relaxed)) {
                    const auto index = next.fetch_add(1u, std::memory_order_relaxed);
                    if (index >= count) break;
                    work(index);
                }
            } catch (...) {
                failed.store(true, std::memory_order_relaxed);
                std::lock_guard lock(mutex);
                if (!error) error = std::current_exception();
            }
            {
                std::lock_guard lock(mutex);
                ++finished_workers;
            }
            changed.notify_one();
        });
    }
    {
        std::unique_lock lock(mutex);
        while (finished_workers != workers) {
            changed.wait_for(lock, std::chrono::seconds(1));
            lock.unlock();
            tick();
            lock.lock();
        }
    }
    for (auto &thread : threads) thread.join();
    if (error) std::rethrow_exception(error);
}

} // namespace psprecomp
