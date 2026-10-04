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
// Raw PSP texture data for one mip level, decoded on the GPU (DecodeCS).
struct GpuRawLevel {
    std::uint32_t width{}, height{}, stride{};  // stride in texels (TBW)
    std::vector<std::uint8_t> bytes;
};
struct GpuTexture {
    std::uint64_t key{};
    std::uint32_t width{1}, height{1};
    // Either decoded RGBA levels (CPU path) or raw levels plus the GE state
    // needed to decode them on the GPU.
    std::vector<std::vector<std::uint32_t>> levels;
    std::vector<GpuRawLevel> raw;
    std::array<std::uint32_t, 256> clut{};  // palette bytes as loaded by LOADCLUT
    std::uint32_t format{}, clut_mode{}, texture_mode{};
    // Streaming textures (video frames) keep one GPU texture for a stable key
    // and are re-decoded in place whenever generation changes.
    bool streaming{};
    std::uint64_t generation{};
    // Runtime alpha is 255 everywhere: a replacement needs no original sample.
    bool opaque{};
    // Texture packs: read the GPU-decoded base level back for hashing.
    bool identify{};
    mutable std::uint64_t last_use{};
    std::uint32_t feedback_address{}, feedback_stride{}, feedback_format{};
    // Texture-pack identity of the decoded base level (0 when packs are off),
    // and the replacement chosen for it: its identity and how many rows of the
    // GE texture it covers (fewer than height for non-power-of-two artwork).
    std::uint64_t content_hash{}, replacement_hash{};
    std::uint32_t replacement_rows{}, replacement_width{};
};
struct GpuReport {
    std::string adapter;
    std::uint64_t draws{}, hardware_transform_draws{}, vertices{}, submissions{}, texture_uploads{},
        feedback_syncs{}, feedback_draws{}, software_draws{}, presents{}, skipped_presents{}, superseded_presents{},
        replaced_draws{}, replacement_uploads{}, replacements_evicted{}, streamed_texture_updates{};
    // Optional asynchronous GPU timestamp totals: resolve, deband, colour.
    std::uint64_t post_gpu_frames{}, post_gpu_max_ns{};
    std::array<std::uint64_t, 3> post_gpu_ns{};
    bool active{};
    std::uint32_t resolution_scale{1}, raster_half{2}, antialiasing{};  // raster scale in half units
};
struct GpuImage {
    std::uint32_t width{}, height{};
    std::vector<std::uint8_t> rgba;
};
bool gpu_requested() noexcept;
// Base levels of textures marked `identify`, decoded on the GPU and read
// back once their commands completed. Empty rgba: the readback ring was full;
// the caller identifies that texture another way.
struct GpuDecodedTexture {
    std::uint64_t key{};
    std::uint32_t width{}, height{};
    std::vector<std::uint32_t> rgba;
};
std::vector<GpuDecodedTexture> gpu_take_decoded();
// Test hook: decodes one raw level through the GPU path and reads it back.
std::vector<std::uint32_t> gpu_debug_decode(const GpuTexture &texture, std::size_t level);
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
struct PostSettings;
// Pixel readback of PostPS shading using private diagnostic scratch buffers.
GpuImage gpu_debug_post(const GpuImage &, const PostSettings &, float fade = 1.0f, bool reference = false);
// UI thread publishes client dimensions without accessing renderer state.
void gpu_set_output_size(std::uint32_t width, std::uint32_t height) noexcept;
// The game is racing (countdown or race): the [enhancements] effects apply to
// the frames drawn and presented from now on. Set by the HLE at every flip.
void gpu_set_racing(bool racing) noexcept;
bool gpu_present(psprecomp::GuestMemory &, void *window, std::uint32_t framebuffer,
                 std::uint32_t stride, std::uint32_t format, std::uint32_t width, std::uint32_t height);
} // namespace motorstorm
