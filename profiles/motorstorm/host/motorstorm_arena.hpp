#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <map>

namespace motorstorm {

// The guest memory arena behind sceKernelAllocMemoryBlock / AllocPartitionMemory /
// the pools. Blocks come from a free list first (first fit) and then from the top
// of the arena. Freed blocks are given back: the arena used to only grow, so a game
// that frees and allocates a block around every load (MotorStorm does) ran out of
// memory after a few races and crashed.
struct ArenaState {
    std::uint32_t next{};                          // first never-used address
    std::map<std::uint32_t, std::uint32_t> free;   // freed ranges below next: start -> size
};

// Returns the block's address, or 0 when nothing fits below `limit`.
[[nodiscard]] inline std::uint32_t arena_take(ArenaState &arena, std::uint32_t size, std::uint32_t alignment,
                                              std::uint32_t limit) {
    if (size == 0u) size = 16u;
    if (alignment < 4u) alignment = 4u;
    for (auto found = arena.free.begin(); found != arena.free.end(); ++found) {
        const std::uint32_t start = found->first, end = start + found->second;
        const std::uint32_t fit = (start + alignment - 1u) & ~(alignment - 1u);
        if (fit < start || static_cast<std::uint64_t>(fit) + size > end) continue;
        arena.free.erase(found);
        if (fit > start) arena.free.emplace(start, fit - start);
        if (fit + size < end) arena.free.emplace(fit + size, end - (fit + size));
        return fit;
    }
    const std::uint32_t base = (arena.next + alignment - 1u) & ~(alignment - 1u);
    if (base < arena.next || static_cast<std::uint64_t>(base) + size > limit) return 0u;
    arena.next = base + size;
    return base;
}

// Gives a block back, merging it with free neighbours and lowering the arena top
// when it was the last block. The caller clears the memory.
inline void arena_give_back(ArenaState &arena, std::uint32_t address, std::uint32_t size) {
    if (size == 0u) size = 16u;
    if (address == 0u || address >= arena.next) return;
    size = std::min(size, arena.next - address);
    auto inserted = arena.free.emplace(address, size).first;
    if (inserted != arena.free.begin()) {
        auto before = std::prev(inserted);
        if (before->first + before->second == inserted->first) {
            before->second += inserted->second;
            arena.free.erase(inserted);
            inserted = before;
        }
    }
    auto after = std::next(inserted);
    if (after != arena.free.end() && inserted->first + inserted->second == after->first) {
        inserted->second += after->second;
        arena.free.erase(after);
    }
    if (inserted->first + inserted->second == arena.next) {
        arena.next = inserted->first;
        arena.free.erase(inserted);
    }
}

[[nodiscard]] inline std::uint32_t arena_free_total(const ArenaState &arena, std::uint32_t limit) {
    std::uint32_t total = limit > arena.next ? limit - arena.next : 0u;
    for (const auto &[start, size] : arena.free) total += size;
    return total;
}
[[nodiscard]] inline std::uint32_t arena_free_largest(const ArenaState &arena, std::uint32_t limit) {
    std::uint32_t largest = limit > arena.next ? limit - arena.next : 0u;
    for (const auto &[start, size] : arena.free) largest = std::max(largest, size);
    return largest;
}

} // namespace motorstorm
