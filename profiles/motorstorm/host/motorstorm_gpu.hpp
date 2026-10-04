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
    // Rendered by the GPU in the current list: the texel bytes (gpu_source) or
    // the palette (gpu_clut) are read from those targets on the GPU, in command
    // order, so the list never waits for a readback.
    bool gpu_source{}, gpu_clut{};
    // Texel bytes partly inside 32-bit targets drawn in this list: the guest
    // bytes are uploaded and the drawn parts overwritten from those targets on
    // the GPU before decoding.
    bool gpu_overlay{};
    std::uint32_t gpu_source_address{}, gpu_clut_address{}, gpu_clut_bytes{};
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
        replaced_draws{}, replacement_uploads{}, replacements_evicted{}, streamed_texture_updates{},
        gpu_vertex_draws{};
    // Optional asynchronous GPU timestamp totals: resolve, deband, colour.
    std::uint64_t post_gpu_frames{}, post_gpu_max_ns{};
    // Readback publishes by trigger: draw, sync, list end, CPU VRAM access,
    // list start, other. Count, of which waited on the GPU, and wait time.
    std::array<std::uint64_t, 6> publishes{}, publish_waits{}, publish_wait_ns{};
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
// Vertices processed on the GPU (VertexCS in motorstorm_gpu.hlsl): the GE
// hands over the raw guest vertex bytes, an index table and a parameter block
// instead of decoded vertices; the draw reads the shader's output.
struct GpuVertexJob {
    std::vector<std::uint32_t> header;   // parameter block (see VertexCS)
    std::vector<std::uint32_t> indices;  // draw indices into the decoded vertices; empty: draw in order
    std::uint32_t vertex_address{}, vertex_bytes{};
    std::uint32_t decode_count{};        // input vertices VertexCS decodes
    std::uint32_t output_count{};        // vertices (or indices) the draw consumes
    bool strip{};                        // triangle strip, otherwise a triangle list
    bool uv_range_valid{};
    std::array<float, 4> uv_range{};     // texel range of the draw (min u, min v, max u, max v)
};
void gpu_submit(psprecomp::GuestMemory &, const GpuDraw &, std::span<const GpuVertex>, const GpuTexture *,
                const GpuVertexJob *job = nullptr);
// GE synchronization publishes GPU writes to guest memory before callbacks,
// transfers and CPU reads. This is also the software/GPU fallback boundary.
void gpu_sync(psprecomp::GuestMemory &);
// End-of-list synchronization. With deferred readback enabled the list is
// submitted without waiting and its pixels reach guest memory at gpu_settle
// (or any gpu_sync / submission / capture); otherwise this is gpu_sync.
void gpu_end_list(psprecomp::GuestMemory &);
void gpu_settle(psprecomp::GuestMemory &);
void gpu_set_deferred_readback(bool enabled) noexcept;
// Returns true when the bytes overlapped a drawn target and forced a sync.
bool gpu_sync_texture(psprecomp::GuestMemory &, std::uint32_t address, std::uint32_t bytes);
// A GE block transfer whose source lies in a target drawn by the current list:
// the GPU snapshots the rows and they reach guest memory at the next publish,
// so the list continues without waiting. False: the caller must sync and copy.
bool gpu_transfer_from_target(std::uint32_t source, std::uint32_t source_stride, std::uint32_t source_x,
                              std::uint32_t source_y, std::uint32_t destination, std::uint32_t destination_stride,
                              std::uint32_t destination_x, std::uint32_t destination_y, std::uint32_t width,
                              std::uint32_t height, std::uint32_t bpp);
// Called before a CPU access to VRAM publishes GPU readbacks: the HLE waits
// there for its GE thread, which owns the renderer while it runs lists.
void gpu_set_publish_guard(void (*guard)()) noexcept;
// These guest bytes lie inside one target drawn by the current list, so a
// texture can be decoded from it on the GPU. `version` changes with each draw
// to that target. A palette (`palette`) additionally needs a 32-bit target.
bool gpu_source_in_target(std::uint32_t address, std::uint32_t bytes, bool palette,
                          std::uint64_t &version) noexcept;
// Every target drawn in the current list that overlaps these bytes is 32-bit
// (its resolved pixels are the guest bytes), so a texture can be composed on
// the GPU. `version` combines their draw versions. False: none overlap, or
// one cannot be composed.
bool gpu_overlay_targets(std::uint32_t address, std::uint32_t bytes, std::uint64_t &version) noexcept;
// Any render target (drawn, pending readback or cached) overlaps these guest bytes.
bool gpu_touches_surface(std::uint32_t address, std::uint32_t bytes) noexcept;
bool gpu_feedback_available(std::uint32_t address, std::uint32_t stride, std::uint32_t format) noexcept;
void gpu_note_software_draw() noexcept;
GpuReport gpu_report();
std::uint64_t gpu_memory_epoch() noexcept;
GpuImage gpu_capture(psprecomp::GuestMemory &, std::uint32_t framebuffer, std::uint32_t stride,
                     std::uint32_t format, std::uint32_t width, std::uint32_t height);
struct PostSettings;
// Pixel readback of PostPS shading using private diagnostic scratch buffers.
// depth_words (optional, one per pixel, bit 16 = HUD tag) are the depth
// snapshot the HUD mask comes from; null means no HUD tags.
GpuImage gpu_debug_post(const GpuImage &, const PostSettings &, float fade = 1.0f, bool reference = false,
                        const std::vector<std::uint32_t> *depth_words = nullptr);
// The depth snapshot the present path would hand to the post chain for this
// displayed target (16-bit depth, HUD tag in bit 16, output resolution), or
// empty when the target has no resident depth buffer. Needs a completed GE list.
std::vector<std::uint32_t> gpu_debug_depth_words(psprecomp::GuestMemory &, std::uint32_t framebuffer,
                                                 std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                                                 std::uint32_t height);
// UI thread publishes client dimensions without accessing renderer state.
void gpu_set_output_size(std::uint32_t width, std::uint32_t height) noexcept;
// The game is racing (countdown or race): the [enhancements] effects apply to
// the frames drawn and presented from now on. Set by the HLE at every flip.
void gpu_set_racing(bool racing) noexcept;
// [graphics] widescreen = auto on the D3D12 renderer.
bool gpu_widescreen_enabled() noexcept;
// The presentation window's client size (what widescreen adapts to).
void gpu_output_size(std::uint32_t &width, std::uint32_t &height) noexcept;
// The game itself renders the wider view (its camera aspect was raised), so 3D
// geometry must not be widened again in the vertex shader. HUD handling is unchanged.
void gpu_set_guest_widescreen(bool active) noexcept;
bool gpu_present(psprecomp::GuestMemory &, void *window, std::uint32_t framebuffer,
                 std::uint32_t stride, std::uint32_t format, std::uint32_t width, std::uint32_t height);
} // namespace motorstorm
