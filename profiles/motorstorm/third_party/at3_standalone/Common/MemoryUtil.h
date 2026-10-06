#pragma once

// Aligned allocation used by mem.cpp. Written for this profile in place of
// PPSSPP's Common/MemoryUtil.h (not PPSSPP code).
#include <cstddef>
#include <cstdlib>

inline void *AllocateAlignedMemory(std::size_t size, std::size_t alignment) {
#if defined(_WIN32)
    return _aligned_malloc(size, alignment);
#else
    void *pointer = nullptr;
    if (posix_memalign(&pointer, alignment < sizeof(void *) ? sizeof(void *) : alignment, size ? size : 1) != 0)
        return nullptr;
    return pointer;
#endif
}

inline void FreeAlignedMemory(void *pointer) {
#if defined(_WIN32)
    _aligned_free(pointer);
#else
    std::free(pointer);
#endif
}
