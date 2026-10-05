#pragma once

// Vulkan implementation of the GE renderer (motorstorm_gpu.hpp). The public
// gpu_* functions dispatch here when [graphics] renderer = vulkan; the
// semantics of every call match the D3D12 renderer in motorstorm_gpu.cpp.
#include "motorstorm_gpu.hpp"

namespace motorstorm::vulkan {
bool initialize();
void shutdown(bool reset_report) noexcept;
bool active() noexcept;
GpuReport report();
std::vector<GpuDecodedTexture> take_decoded();
std::vector<std::uint32_t> debug_decode(const GpuTexture &texture, std::size_t level);
void submit(psprecomp::GuestMemory &, const GpuDraw &, std::span<const GpuVertex>, const GpuTexture *,
            const GpuVertexJob *job);
void sync(psprecomp::GuestMemory &);
void end_list(psprecomp::GuestMemory &);
void settle(psprecomp::GuestMemory &);
bool sync_texture(psprecomp::GuestMemory &, std::uint32_t address, std::uint32_t bytes);
bool transfer_from_target(std::uint32_t source, std::uint32_t source_stride, std::uint32_t source_x,
                          std::uint32_t source_y, std::uint32_t destination, std::uint32_t destination_stride,
                          std::uint32_t destination_x, std::uint32_t destination_y, std::uint32_t width,
                          std::uint32_t height, std::uint32_t bpp);
bool source_in_target(std::uint32_t address, std::uint32_t bytes, bool palette, std::uint64_t &version) noexcept;
bool overlay_targets(std::uint32_t address, std::uint32_t bytes, std::uint64_t &version) noexcept;
bool touches_surface(std::uint32_t address, std::uint32_t bytes) noexcept;
bool feedback_available(std::uint32_t address, std::uint32_t stride, std::uint32_t format) noexcept;
void note_software_draw() noexcept;
std::uint64_t memory_epoch() noexcept;
GpuImage capture(psprecomp::GuestMemory &, std::uint32_t framebuffer, std::uint32_t stride, std::uint32_t format,
                 std::uint32_t width, std::uint32_t height);
GpuImage debug_post(const GpuImage &, const PostSettings &, float fade, bool reference,
                    const std::vector<std::uint32_t> *depth_words);
std::vector<std::uint32_t> debug_depth_words(psprecomp::GuestMemory &, std::uint32_t framebuffer,
                                             std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                                             std::uint32_t height);
bool widescreen_enabled() noexcept;
bool present(psprecomp::GuestMemory &, void *window, std::uint32_t framebuffer, std::uint32_t stride,
             std::uint32_t format, std::uint32_t width, std::uint32_t height);
// Shared settings forwarded by motorstorm_gpu.cpp.
void set_racing(bool racing) noexcept;
void set_deferred_readback(bool enabled) noexcept;
void set_publish_guard(void (*guard)()) noexcept;
void set_output_size(std::uint32_t width, std::uint32_t height) noexcept;
void set_guest_widescreen(bool active) noexcept;
} // namespace motorstorm::vulkan
