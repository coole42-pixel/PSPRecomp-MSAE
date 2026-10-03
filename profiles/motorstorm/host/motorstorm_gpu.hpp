#pragma once

#include "psprecomp/guest_memory.hpp"
#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace motorstorm {

// The GE frontend still decodes PSP vertex layouts, morphs, skinning and
// lighting. Non-through positions remain in model space for the vertex shader.
struct GpuVertex {
    float x{}, y{}, z{};
    std::uint32_t color{0xFFFFFFFFu}, secondary{};
    float u{}, v{}, q{1}, fog{1};
};
struct GpuDraw {
    std::array<std::uint32_t, 256> commands{};
    std::array<float, 16> model_to_clip{}; // row-major
    std::array<float, 4> model_to_view_z{};
    std::array<float, 4> scale{}, center{};
    std::uint32_t framebuffer{}, stride{}, format{}, depthbuffer{}, depth_stride{};
    std::int32_t left{}, top{}, right{}, bottom{}; // exclusive scissor
    bool hardware_transform{}, depth_clip{}, texture{};
    std::uint32_t primitive{3};
};
struct GpuTexture {
    std::uint64_t key{};
    std::uint32_t width{1}, height{1};
    std::vector<std::vector<std::uint32_t>> levels;
    std::uint32_t feedback_address{}, feedback_stride{}, feedback_format{};
};
struct GpuReport {
    std::string adapter;
    std::uint64_t draws{}, hardware_transform_draws{}, vertices{}, submissions{}, texture_uploads{},
        feedback_syncs{}, feedback_draws{}, software_draws{}, presents{}, skipped_presents{};
    bool active{};
    std::uint32_t resolution_scale{1}, raster_scale{1}, antialiasing{};
};
struct GpuImage {
    std::uint32_t width{}, height{};
    std::vector<std::uint8_t> rgba;
};
bool gpu_requested() noexcept;
bool gpu_initialize();
void gpu_shutdown(bool reset_report = false) noexcept;
bool gpu_active() noexcept;
void gpu_submit(psprecomp::GuestMemory &, const GpuDraw &, std::span<const GpuVertex>, const GpuTexture *);
// GE synchronization publishes GPU writes to guest memory before callbacks,
// transfers and CPU reads. This is also the software/GPU fallback boundary.
void gpu_sync(psprecomp::GuestMemory &);
// End-of-list synchronization. With deferred readback enabled the list is
// submitted without waiting and its pixels reach guest memory at gpu_settle
// (or any gpu_sync / submission / capture); otherwise this is gpu_sync.
void gpu_end_list(psprecomp::GuestMemory &);
void gpu_settle(psprecomp::GuestMemory &);
void gpu_set_deferred_readback(bool enabled) noexcept;
void gpu_sync_texture(psprecomp::GuestMemory &, std::uint32_t address, std::uint32_t bytes);
bool gpu_feedback_available(std::uint32_t address, std::uint32_t stride, std::uint32_t format) noexcept;
void gpu_note_software_draw() noexcept;
GpuReport gpu_report();
std::uint64_t gpu_memory_epoch() noexcept;
GpuImage gpu_capture(psprecomp::GuestMemory &, std::uint32_t framebuffer, std::uint32_t stride,
                     std::uint32_t format, std::uint32_t width, std::uint32_t height);
bool gpu_present(psprecomp::GuestMemory &, void *window, std::uint32_t framebuffer,
                 std::uint32_t stride, std::uint32_t format, std::uint32_t width, std::uint32_t height);
} // namespace motorstorm
