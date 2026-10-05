# Vulkan headers 1.4.321

Headers for the Vulkan renderer ([graphics] renderer = vulkan). The renderer
loads `vulkan-1.dll` (installed with every Vulkan driver) at runtime and
builds with `VK_NO_PROTOTYPES`, so no Vulkan SDK or import library is needed.

- Source: Khronos Vulkan-Headers `VK_HEADER_VERSION 321`, as vendored by PPSSPP
  (`ext/vulkan`).
- Contents kept: `include/vulkan/{vulkan.h, vulkan_core.h, vk_platform.h,
  vulkan_win32.h}` and `include/vk_video/*` (included by `vulkan_core.h`).
- Licence: Apache-2.0 OR MIT (SPDX identifiers in each header).
