#pragma once

// Vulkan entry points of the MotorStorm renderer, loaded at runtime from the
// system loader (vulkan-1.dll); nothing links against a Vulkan SDK. Each
// function is a global pointer named like the Vulkan function it holds.
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#define VK_USE_PLATFORM_WIN32_KHR
#endif
#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>

#define MOTORSTORM_VK_GLOBAL(X)                                                                                    \
    X(vkCreateInstance)                                                                                            \
    X(vkEnumerateInstanceExtensionProperties)                                                                      \
    X(vkEnumerateInstanceLayerProperties)                                                                          \
    X(vkEnumerateInstanceVersion)

#define MOTORSTORM_VK_INSTANCE(X)                                                                                  \
    X(vkDestroyInstance)                                                                                           \
    X(vkEnumeratePhysicalDevices)                                                                                  \
    X(vkGetPhysicalDeviceProperties)                                                                               \
    X(vkGetPhysicalDeviceProperties2)                                                                              \
    X(vkGetPhysicalDeviceFeatures2)                                                                                \
    X(vkGetPhysicalDeviceQueueFamilyProperties)                                                                    \
    X(vkGetPhysicalDeviceMemoryProperties)                                                                         \
    X(vkGetPhysicalDeviceFormatProperties)                                                                         \
    X(vkEnumerateDeviceExtensionProperties)                                                                        \
    X(vkCreateDevice)                                                                                              \
    X(vkGetDeviceProcAddr)                                                                                         \
    X(vkCreateWin32SurfaceKHR)                                                                                     \
    X(vkDestroySurfaceKHR)                                                                                         \
    X(vkGetPhysicalDeviceSurfaceSupportKHR)                                                                        \
    X(vkGetPhysicalDeviceSurfaceCapabilitiesKHR)                                                                   \
    X(vkGetPhysicalDeviceSurfaceFormatsKHR)                                                                        \
    X(vkGetPhysicalDeviceSurfacePresentModesKHR)

#define MOTORSTORM_VK_INSTANCE_OPTIONAL(X)                                                                         \
    X(vkCreateDebugUtilsMessengerEXT)                                                                              \
    X(vkDestroyDebugUtilsMessengerEXT)

#define MOTORSTORM_VK_DEVICE(X)                                                                                    \
    X(vkDestroyDevice)                                                                                             \
    X(vkGetDeviceQueue)                                                                                            \
    X(vkDeviceWaitIdle)                                                                                            \
    X(vkQueueWaitIdle)                                                                                             \
    X(vkQueueSubmit)                                                                                               \
    X(vkCreateCommandPool)                                                                                         \
    X(vkDestroyCommandPool)                                                                                        \
    X(vkResetCommandPool)                                                                                          \
    X(vkAllocateCommandBuffers)                                                                                    \
    X(vkBeginCommandBuffer)                                                                                        \
    X(vkEndCommandBuffer)                                                                                          \
    X(vkCreateSemaphore)                                                                                           \
    X(vkDestroySemaphore)                                                                                          \
    X(vkWaitSemaphores)                                                                                            \
    X(vkGetSemaphoreCounterValue)                                                                                  \
    X(vkCreateShaderModule)                                                                                        \
    X(vkDestroyShaderModule)                                                                                       \
    X(vkCreateDescriptorSetLayout)                                                                                 \
    X(vkDestroyDescriptorSetLayout)                                                                                \
    X(vkCreatePipelineLayout)                                                                                      \
    X(vkDestroyPipelineLayout)                                                                                     \
    X(vkCreateGraphicsPipelines)                                                                                   \
    X(vkCreateComputePipelines)                                                                                    \
    X(vkDestroyPipeline)                                                                                           \
    X(vkCreateSampler)                                                                                             \
    X(vkDestroySampler)                                                                                            \
    X(vkCreateDescriptorPool)                                                                                      \
    X(vkDestroyDescriptorPool)                                                                                     \
    X(vkAllocateDescriptorSets)                                                                                    \
    X(vkUpdateDescriptorSets)                                                                                      \
    X(vkCreateImageView)                                                                                           \
    X(vkDestroyImageView)                                                                                          \
    X(vkCreateQueryPool)                                                                                           \
    X(vkDestroyQueryPool)                                                                                          \
    X(vkGetQueryPoolResults)                                                                                       \
    X(vkCreateSwapchainKHR)                                                                                        \
    X(vkDestroySwapchainKHR)                                                                                       \
    X(vkGetSwapchainImagesKHR)                                                                                     \
    X(vkAcquireNextImageKHR)                                                                                       \
    X(vkQueuePresentKHR)                                                                                           \
    X(vkCmdBindPipeline)                                                                                           \
    X(vkCmdBindDescriptorSets)                                                                                     \
    X(vkCmdPushDescriptorSetKHR)                                                                                   \
    X(vkCmdBindVertexBuffers)                                                                                      \
    X(vkCmdBindIndexBuffer)                                                                                        \
    X(vkCmdDraw)                                                                                                   \
    X(vkCmdDrawIndexed)                                                                                            \
    X(vkCmdDispatch)                                                                                               \
    X(vkCmdCopyBuffer)                                                                                             \
    X(vkCmdCopyBufferToImage)                                                                                      \
    X(vkCmdPipelineBarrier)                                                                                        \
    X(vkCmdSetViewport)                                                                                            \
    X(vkCmdSetScissor)                                                                                             \
    X(vkCmdBeginRendering)                                                                                         \
    X(vkCmdEndRendering)                                                                                           \
    X(vkCmdWriteTimestamp)                                                                                         \
    X(vkCmdResetQueryPool)

namespace motorstorm::vulkan::api {
#define MOTORSTORM_VK_DECLARE(name) inline PFN_##name name{};
inline PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr{};
MOTORSTORM_VK_GLOBAL(MOTORSTORM_VK_DECLARE)
MOTORSTORM_VK_INSTANCE(MOTORSTORM_VK_DECLARE)
MOTORSTORM_VK_INSTANCE_OPTIONAL(MOTORSTORM_VK_DECLARE)
MOTORSTORM_VK_DEVICE(MOTORSTORM_VK_DECLARE)
#undef MOTORSTORM_VK_DECLARE
} // namespace motorstorm::vulkan::api
