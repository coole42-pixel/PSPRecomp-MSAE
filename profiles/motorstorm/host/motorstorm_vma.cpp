// Vulkan Memory Allocator implementation unit for the Vulkan renderer. VMA
// fetches its entry points through vkGetInstanceProcAddr/vkGetDeviceProcAddr
// (VmaVulkanFunctions), matching the runtime-loaded API in
// motorstorm_vulkan_api.hpp.
#include "motorstorm_vulkan_api.hpp"

#define VMA_STATIC_VULKAN_FUNCTIONS 0
#define VMA_DYNAMIC_VULKAN_FUNCTIONS 1
#define VMA_IMPLEMENTATION
#if defined(_MSC_VER)
#pragma warning(push, 0)
#endif
#include "vk_mem_alloc.h"
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
