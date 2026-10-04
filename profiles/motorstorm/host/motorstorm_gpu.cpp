#include "motorstorm_gpu.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_presentation.hpp"
#include "motorstorm_perf.hpp"
#include "motorstorm_post.hpp"
#include "motorstorm_textures.hpp"

#include <algorithm>
#include <atomic>
#include <bit>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string_view>
#include <unordered_map>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <d3d12.h>
#include <dxgi1_6.h>
#include <windows.h>
#include <wrl/client.h>
#endif

namespace motorstorm {
namespace {
GpuReport report;
bool attempted{};
// Increments once per GE list whose GPU work completed and was published to
// guest memory.  The texture cache uses it to drop per-list keys when a
// submission may have changed guest-visible pixels; chunk submissions that are
// still in flight do not publish anything, so they must not advance it.
std::uint64_t gpu_publish_epoch{};
// When set, the end of a GE list submits its readbacks without waiting; they
// are published to guest memory at the next point that needs guest-visible
// pixels (the next list, transfers, software draws, captures). The GPU tail of
// each frame then overlaps the guest CPU work for the next one.
bool deferred_readback{};
bool emulation_racing{};
std::atomic<bool> guest_widescreen{};
void (*publish_guard)() = nullptr;
std::atomic<std::uint64_t> output_size{(480ull << 32) | 272u};
#if defined(_WIN32)
using Microsoft::WRL::ComPtr;
// Shader bytecode compiled at build time by fxc from motorstorm_gpu.hlsl.
#include "motorstorm_shader_VS.h"
#include "motorstorm_shader_PS.h"
#include "motorstorm_shader_PointGS.h"
#include "motorstorm_shader_PresentVS.h"
#include "motorstorm_shader_PresentPS.h"
#include "motorstorm_shader_ExpandCS.h"
#include "motorstorm_shader_ResolveCS.h"
#include "motorstorm_shader_CaptureCS.h"
#include "motorstorm_shader_DecodeCS.h"
#include "motorstorm_shader_MipCS.h"
#include "motorstorm_shader_VertexCS.h"
#include "motorstorm_shader_DecodeTargetCS.h"
#include "motorstorm_shader_PostResolveCS.h"
#include "motorstorm_shader_DebandCS.h"
#include "motorstorm_shader_PostPS.h"
#include "motorstorm_shader_PostCaptureCS.h"
#include "motorstorm_shader_PostColorCS.h"
#include "motorstorm_shader_PostPresentPS.h"
#include "motorstorm_shader_PostColorCaptureCS.h"
#include "motorstorm_shader_DepthResolveCS.h"
constexpr UINT64 kUploadBytes = 64ull * 1024 * 1024;
constexpr UINT kDescriptors = 16384;
void check(HRESULT hr, const char *operation) {
    if (FAILED(hr)) {
        char code[24];
        std::snprintf(code, sizeof(code), "0x%08X", static_cast<unsigned>(hr));
        throw std::runtime_error(std::string("MotorStorm D3D12 ") + operation + " failed: " + code);
    }
}
std::uint32_t physical(std::uint32_t address) {
    address = psprecomp::GuestMemory::canonical(address);
    if (address >= 0x04000000u && address < 0x04800000u)
        address = 0x04000000u | (address & 0x1FFFFFu);
    return address;
}
// Raster scales are kept in half units (2 = 1x, 3 = 1.5x, 4 = 2x, ...) so
// SSAA2x can rasterize at 1.5x per axis. Raster pixel r belongs to native
// pixel (2r+1)/half; native pixel n starts at raster pixel (n*half)/2. Every
// raster pixel centre lies inside exactly one native pixel, so native-aligned
// content resolves exactly at any scale.
constexpr UINT raster_extent(UINT native, UINT half) { return native * half / 2u; }
constexpr UINT native_row_of_boundary(UINT raster, UINT half) { return (2u * raster + half - 1u) / half; }
struct Surface {
    std::uint32_t address{}, stride{}, height{}, bpp{};
    std::uint32_t raster_half{2}, format{4};
    ComPtr<ID3D12Resource> image, native, readback;
    D3D12_RESOURCE_STATES native_state{D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
    UINT64 native_version{~0ull};
    std::vector<std::uint8_t> guest_shadow;
    D3D12_RESOURCE_STATES state{D3D12_RESOURCE_STATE_COPY_DEST};
    bool loaded{}, dirty{}, readback_pending{};
    float aspect_scale{1.0f};
    // The depth buffer the last draw to this target used (physical address and
    // stride, 0 = none): the presented frame snapshots it for the post chain.
    std::uint32_t depth_address{}, depth_stride{};
    UINT64 version{}, snapshot_version{~0ull};
    UINT64 snapshot_bytes{};
    UINT64 snapshot_guest_epoch{~0ull};
    ComPtr<ID3D12Resource> snapshot;
    UINT raster_stride() const { return raster_extent(stride, raster_half); }
    UINT raster_height() const { return raster_extent(height, raster_half); }
    UINT64 bytes() const { return static_cast<UINT64>(raster_stride()) * raster_height() * 4; }
    UINT64 native_bytes() const { return static_cast<UINT64>(stride) * height * 4; }
    UINT64 guest_bytes() const { return static_cast<UINT64>(stride) * height * bpp; }
};
struct Texture {
    ComPtr<ID3D12Resource> image;
    UINT descriptor{};
    UINT64 bytes{}, last_used{};
    UINT width{}, height{}, mips{};
    std::uint64_t generation{};  // content of a streaming texture
};
// Draws are submitted in chunks while the list is being decoded so the GPU can
// rasterize chunk N while the CPU decodes and records chunk N+1.  Execution
// order on the single queue and the per-draw ROV barrier keep the result
// identical to one command list; only the final fence wait absorbs the
// remaining GPU time.  Slot 0 is opened per GE list and the ring bounds how
// many chunks may be in flight before recording waits for the oldest.
constexpr UINT kCommandSlotCapacity = 4u;
// Measured on the race benchmark: 512-draw chunks still expose about half the
// GPU fence time, 64-192 draws hide almost all of it, and smaller chunks add
// submission overhead without further gain.  128 keeps the queues short and the
// overlap stable (see progress/PERFORMANCE_RACE_BENCH.md).
constexpr UINT64 kDefaultChunkDraws = 128u;
// Command slots actually used in the ring; PSPRECOMP_MOTORSTORM_GPU_COMMAND_SLOTS
// overrides it for tuning (clamped to 2..kCommandSlotCapacity, default 3).
UINT command_slot_count() {
    static const UINT value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_GPU_COMMAND_SLOTS");
        const unsigned long parsed = text != nullptr ? std::strtoul(text, nullptr, 0) : 0ul;
        if (parsed < 2ul) return 3u;
        return static_cast<UINT>(std::min<unsigned long>(parsed, kCommandSlotCapacity));
    }();
    return value;
}
// Draws per submitted chunk; PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS overrides it
// for tuning (0 or unset keeps the default).
UINT64 chunk_draws_limit() {
    static const UINT64 value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS");
        const unsigned long long parsed = text != nullptr ? std::strtoull(text, nullptr, 0) : 0ull;
        return parsed != 0ull ? static_cast<UINT64>(parsed) : kDefaultChunkDraws;
    }();
    return value;
}
struct CommandSlot {
    ComPtr<ID3D12CommandAllocator> allocator;
    ComPtr<ID3D12GraphicsCommandList> list;
    // VertexCS dispatches of the chunk, executed just before `list`.
    ComPtr<ID3D12CommandAllocator> pre_allocator;
    ComPtr<ID3D12GraphicsCommandList> pre_list;
    UINT64 fence_value{};
    bool pending{};
};
// One shared, 256-aligned constants block per snapshot.
constexpr UINT kConstantsStride = 1280;
constexpr UINT kPresentConstantBytes = kConstantsStride;
static_assert(kConstantsStride >= 1248 && kConstantsStride % 256 == 0);
struct State {
    ComPtr<IDXGIFactory6> factory;
    ComPtr<ID3D12Device> device;
    ComPtr<ID3D12CommandQueue> queue;
    // The extra slot is reserved for presentation so presenting never waits
    // for a GE chunk that happens to share a ring slot.
    CommandSlot slots[kCommandSlotCapacity + 1];
    ComPtr<ID3D12CommandAllocator> allocator;
    ComPtr<ID3D12GraphicsCommandList> list;
    UINT slot_index{};
    UINT64 frame_fence{}, chunk_draws{};
    // readback_fence: submitted GE work whose readbacks are not yet published.
    // arena_fence: last submission that may still read the upload arena.
    UINT64 readback_fence{}, arena_fence{};
    ComPtr<ID3D12RootSignature> root;
    // VertexCS output for the draws of the current arena generation (recycled
    // together with the upload arena, see begin()).
    ComPtr<ID3D12PipelineState> vertex_pipeline, decode_target_pipeline;
    ComPtr<ID3D12Resource> vertex_arena;
    D3D12_RESOURCE_STATES vertex_arena_state{D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
    UINT64 vertex_used{};
    bool pre_open{};  // the slot's pre_list is recording this chunk's VertexCS work
    ComPtr<ID3D12PipelineState> pipeline, line_pipeline, point_pipeline, present_pipeline, expand_pipeline,
        resolve_pipeline, capture_pipeline, decode_pipeline, mip_pipeline;
    // GPU texture decoding scratch (decode output / mip ping-pong).
    ComPtr<ID3D12Resource> decode_scratch[2];
    D3D12_RESOURCE_STATES decode_state[2]{D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                                          D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
    bool enhanced_filtering{};
    // Texture-pack identification: base levels decoded on the GPU are copied
    // to this persistently mapped readback ring and handed to a hashing
    // worker once their submission's fence completes.
    struct IdentifyCopy {
        std::uint64_t key{};
        UINT width{}, height{}, pitch{};
        UINT64 start{}, end{};        // monotonic ring positions
        UINT64 execution{}, fence{};  // queue execution that holds the copy; its fence
    };
    ComPtr<ID3D12Resource> identify_ring;
    const std::uint8_t *identify_mapped{};
    UINT64 identify_head{}, identify_tail{};
    std::deque<IdentifyCopy> identify_copies;
    std::vector<std::uint64_t> identify_failed;
    UINT64 executions{};  // command lists executed on the GE queue
    UINT raster_half{2}, output_scale{1}, antialiasing{};
    ComPtr<ID3D12DescriptorHeap> srv, rtv;
    ComPtr<ID3D12Resource> upload;
    ComPtr<ID3D12Fence> fence;
    HANDLE event{};
    UINT64 fence_value{}, used{};
    std::uint8_t *mapped{};
    UINT descriptor_size{}, next_descriptor{};
    UINT64 texture_bytes{};
    std::vector<UINT> free_descriptors;
    std::vector<ComPtr<ID3D12Resource>> transient;
    bool recording{}, has_commands{};
    std::vector<std::unique_ptr<Surface>> surfaces;
    // GE block transfers out of a target drawn in the current list: the GPU
    // snapshots the source rows into this readback ring at the transfer's
    // place in the command stream, and publish_readbacks writes them to the
    // destination (before the targets, which may only be drawn later).
    struct PendingTransfer {
        UINT64 offset{};
        std::uint32_t destination{}, destination_stride{}, x{}, y{}, width{}, height{}, bpp{};
        std::uint32_t start() const { return destination + (y * destination_stride + x) * bpp; }
        std::uint32_t bytes() const { return ((height - 1u) * destination_stride + width) * bpp; }
    };
    static constexpr UINT64 kTransferRingBytes = 1u << 20;
    ComPtr<ID3D12Resource> transfer_ring;
    UINT64 transfer_used{};
    std::vector<PendingTransfer> pending_transfers;
    // Decode constants whose palette is copied from a target on the GPU.
    static constexpr UINT kClutConstantSlots = 64, kClutConstantStride = 1280;
    ComPtr<ID3D12Resource> clut_constants;
    D3D12_RESOURCE_STATES clut_constants_state{D3D12_RESOURCE_STATE_COPY_DEST};
    UINT clut_constant_slot{};
    std::unordered_map<std::uint64_t, Texture> textures;
    // Texture-pack replacements, keyed by content hash. descriptor == 0 with
    // no image marks a file that was rejected (not retried this session).
    struct Replacement {
        ComPtr<ID3D12Resource> image;
        UINT descriptor{};
        UINT64 bytes{}, last_used{};
        bool no_alpha{};  // pack image is fully transparent: use the game's alpha
    };
    std::unordered_map<std::uint64_t, Replacement> replacements;
    std::unordered_map<std::uint64_t, std::unique_ptr<textures::Image>> pending_replacements;
    UINT64 replacement_bytes{}, replacement_uploaded_in_list{};
    UINT replacement_count_in_list{};
    ComPtr<IDXGISwapChain3> swapchain;
    HANDLE frame_latency{};
    // Three buffers keep the GE queue from waiting at vblank for a free one.
    static constexpr UINT kBackBuffers = 3;
    ComPtr<ID3D12Resource> backbuffers[kBackBuffers];
    HWND window{};
    UINT present_width{}, present_height{}, rtv_size{};
    // DXGI Present runs on its own thread: it blocks at the display refresh,
    // which would otherwise cap emulation at the monitor's frame rate.
    std::thread presenter;
    std::mutex present_mutex;
    std::condition_variable present_cv;
    bool presenter_stop{};
    HRESULT present_result{S_OK};
    // Presentation options and the presenter thread's swap chain state.
    bool vsync{true}, tearing{}, exclusive_fullscreen{}, exclusive_active{}, exclusive_failed{};
    bool latency_token{};
    UINT refresh_hz{}, swap_flags{};
    UINT64 displayed{};
    // Presentation runs on its own queue, which owns the swap chain. A flip
    // present waits on its queue for a free back buffer at vblank; on the GE
    // queue that wait stalled every GE chunk behind it and capped emulation at
    // the display refresh. The GE queue only copies the displayed target into
    // a snapshot ring; the present queue scales/filters from the snapshot.
    // Snapshot slots: the emulation thread writes one and publishes it as
    // the newest frame; the presenter thread takes the newest when the
    // display has room. A newer frame replaces an unshown one.
    enum class FrameState { Free, Writing, Ready, Presenting };
    struct PresentFrame {
        ComPtr<ID3D12CommandAllocator> allocator;
        ComPtr<ID3D12GraphicsCommandList> list;
        ComPtr<ID3D12Resource> image, constants;
        // Depth words (16-bit depth, HUD tag in bit 16) at output resolution,
        // one per pixel; valid when has_depth. See DepthResolveCS.
        ComPtr<ID3D12Resource> depth_image;
        UINT64 depth_bytes{};
        bool has_depth{};
        ComPtr<ID3D12CommandAllocator> post_allocator;
        ComPtr<ID3D12GraphicsCommandList> post_list;
        ComPtr<ID3D12Resource> post_buffers[2], post_color;
        UINT64 post_bytes{};
        ComPtr<ID3D12QueryHeap> post_queries;
        ComPtr<ID3D12Resource> post_timing;
        bool timed_post{};
        UINT64 bytes{}, fence{}, copy_fence{};
        void *mapped{};
        FrameState state{FrameState::Free};
        std::uint32_t width{}, height{}, stride{}, format{};
        bool racing{};  // the game was racing when this frame was drawn
        float aspect_scale{1.0f};
    };
    int ready_frame{-1};
    static constexpr UINT kPresentFrames = 3;
    ComPtr<ID3D12CommandQueue> present_queue;
    ComPtr<ID3D12CommandQueue> post_queue;
    ComPtr<ID3D12Fence> post_fence;
    UINT64 post_fence_value{}, post_frequency{};
    ComPtr<ID3D12Fence> present_fence;
    HANDLE present_event{};
    UINT64 present_fence_value{};
    PresentFrame present_frames[kPresentFrames];
    UINT present_frame{};
    // Race-only image enhancements ([enhancements]). The emulation thread sets
    // `racing` from the guest scene; the presenter fades the effects in and
    // out and runs them in post_buffers (half-float RGB at output resolution).
    PostSettings post;
    bool widescreen{true};
    bool racing{};
    ComPtr<ID3D12PipelineState> post_resolve_pipeline, deband_pipeline, post_pipeline, post_capture_pipeline,
        post_color_pipeline, post_present_pipeline, post_color_capture_pipeline, depth_resolve_pipeline;
    float post_fade{};
    std::chrono::steady_clock::time_point post_clock{};
    std::uint32_t post_frames{};
    void stop_presenter() {
        if (!presenter.joinable())
            return;
        {
            std::lock_guard lock(present_mutex);
            presenter_stop = true;
        }
        present_cv.notify_all();
        presenter.join();
        presenter_stop = false;
    }
    ~State() {
        stop_presenter();
        // Release nothing the present queue may still be reading.
        if (present_queue && present_fence && present_event) {
            const UINT64 value = ++present_fence_value;
            if (SUCCEEDED(present_queue->Signal(present_fence.Get(), value)) &&
                present_fence->GetCompletedValue() < value &&
                SUCCEEDED(present_fence->SetEventOnCompletion(value, present_event)))
                WaitForSingleObject(present_event, 5000);
        }
        if (post_queue && post_fence && present_event && post_fence->GetCompletedValue() < post_fence_value &&
            SUCCEEDED(post_fence->SetEventOnCompletion(post_fence_value, present_event)))
            WaitForSingleObject(present_event, 5000);
        if (upload && mapped)
            upload->Unmap(0, nullptr);
        if (event)
            CloseHandle(event);
        if (frame_latency)
            CloseHandle(frame_latency);
        if (present_event)
            CloseHandle(present_event);
    }
};
std::unique_ptr<State> state;
void publish_readbacks(State &s, psprecomp::GuestMemory &memory);
int publish_reason = 5;
struct PublishReason {
    int previous;
    explicit PublishReason(int reason) noexcept : previous(publish_reason) { publish_reason = reason; }
    ~PublishReason() { publish_reason = previous; }
};
struct Constants {
    std::array<std::uint32_t, 256> commands;
    std::array<float, 16> clip;
    std::array<float, 4> view_z, scale, center;
    std::array<std::uint32_t, 4> surface, mode;
    std::array<std::uint32_t, 4> feedback{};
    std::array<std::uint32_t, 4> render{1, 1, 0, 0};
    std::array<std::uint32_t, 4> replace{};  // active, covered PSP width, covered rows, 0
    // Enhanced filtering: texel range the draw's coordinates span (min u, min
    // v, max u, max v); all zero = unknown, no mip clamp.
    std::array<float, 4> uv_range{};
    std::array<float, 4> wide{1.0f, 240.0f, 0.0f, 0.0f};
};
static_assert(sizeof(Constants) == 1248);
static_assert(sizeof(GpuVertex) == 36);
ComPtr<ID3D12Resource> buffer(State &s, UINT64 bytes, D3D12_HEAP_TYPE type, D3D12_RESOURCE_STATES initial,
                              bool uav = false) {
    D3D12_HEAP_PROPERTIES heap{};
    heap.Type = type;
    D3D12_RESOURCE_DESC desc{};
    desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    desc.Width = bytes;
    desc.Height = 1;
    desc.DepthOrArraySize = 1;
    desc.MipLevels = 1;
    desc.SampleDesc.Count = 1;
    desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    if (uav)
        desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
    ComPtr<ID3D12Resource> result;
    check(s.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc, initial, nullptr,
                                            IID_PPV_ARGS(&result)),
          "create buffer");
    return result;
}
void prepare_post_buffers(State &s, State::PresentFrame &frame, UINT width, UINT height) {
    const UINT64 bytes = static_cast<UINT64>(width) * height * s.output_scale * s.output_scale * 8;
    if (frame.post_bytes >= bytes) return;
    for (auto &target : frame.post_buffers)
        target = buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    frame.post_color = buffer(s, bytes / 2 * 3, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COMMON, true);
    frame.post_bytes = bytes;
}
// The race HUD is kept out of the colour grade ([enhancements] hud_ungraded):
// draws to display-sized VRAM targets tag their through-mode pixels in the
// depth word while the effects are on. The race framebuffer is 512x296 (the
// scissor), so the test is the VRAM range and stride, not a 272-row height.
bool hud_tag_enabled(const State &s, const Surface &color, std::uint32_t stride) {
    return s.racing && s.post.active() && s.post.hud_ungraded && (stride == 480u || stride == 512u) &&
           color.address >= 0x04000000u && color.address < 0x04200000u;
}
void transition(State &s, Surface &surface, D3D12_RESOURCE_STATES next) {
    if (surface.state == next)
        return;
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {surface.image.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES, surface.state, next};
    s.list->ResourceBarrier(1, &barrier);
    surface.state = next;
}
UINT64 signal_fence(State &s) {
    const UINT64 value = ++s.fence_value;
    check(s.queue->Signal(s.fence.Get(), value), "signal fence");
    for (auto &copy : s.identify_copies)
        if (copy.fence == 0u && copy.execution < s.executions)
            copy.fence = value;
    return value;
}
void wait_value(State &s, UINT64 value) {
    if (s.fence->GetCompletedValue() < value) {
        check(s.fence->SetEventOnCompletion(value, s.event), "arm fence");
        if (WaitForSingleObject(s.event, 30000) != WAIT_OBJECT_0)
            throw std::runtime_error("MotorStorm D3D12 GPU fence timeout");
    }
    check(s.device->GetDeviceRemovedReason(), "device status");
}
void wait(State &s) { wait_value(s, signal_fence(s)); }
// Start recording into a slot, waiting only when that slot is still executing.
void open_chunk(State &s, UINT index) {
    CommandSlot &slot = s.slots[index];
    if (slot.pending) {
        wait_value(s, slot.fence_value);
        slot.pending = false;
    }
    check(slot.allocator->Reset(), "reset allocator");
    check(slot.list->Reset(slot.allocator.Get(), s.pipeline.Get()), "reset command list");
    s.slot_index = index;
    s.allocator = slot.allocator;
    s.list = slot.list;
    s.recording = true;
    s.has_commands = false;
    s.chunk_draws = 0;
    s.list->SetGraphicsRootSignature(s.root.Get());
    ID3D12DescriptorHeap *heaps[]{s.srv.Get()};
    s.list->SetDescriptorHeaps(1, heaps);
}
constexpr UINT kPresentSlot = kCommandSlotCapacity;
void begin(State &s, UINT slot = 0) {
    if (s.recording)
        return;
    // Deferred readbacks and presentation leave submissions in flight that
    // still read the upload arena. Append behind them until they complete;
    // wait only when the arena would otherwise run short.
    if (s.arena_fence != 0u && s.fence->GetCompletedValue() < s.arena_fence && s.used > kUploadBytes / 2u)
        wait_value(s, s.arena_fence);
    if (s.arena_fence == 0u || s.fence->GetCompletedValue() >= s.arena_fence) {
        s.used = 0;
        s.vertex_used = 0;
    }
    s.frame_fence = 0;
    open_chunk(s, slot);
}
// Close and execute the recording chunk without waiting for it.
void submit_chunk(State &s) {
    check(s.list->Close(), "close GE chunk");
    CommandSlot &chunk = s.slots[s.slot_index];
    if (s.pre_open) {
        // The decoded vertices become the chunk's vertex buffers.
        D3D12_RESOURCE_BARRIER barrier{};
        barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Transition = {s.vertex_arena.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                              D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER};
        chunk.pre_list->ResourceBarrier(1, &barrier);
        s.vertex_arena_state = D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER;
        check(chunk.pre_list->Close(), "close vertex list");
        ID3D12CommandList *lists[]{chunk.pre_list.Get(), s.list.Get()};
        s.queue->ExecuteCommandLists(2, lists);
        s.pre_open = false;
    } else {
        ID3D12CommandList *lists[]{s.list.Get()};
        s.queue->ExecuteCommandLists(1, lists);
    }
    ++s.executions;
    ++report.submissions;
    CommandSlot &slot = s.slots[s.slot_index];
    slot.fence_value = signal_fence(s);
    slot.pending = true;
    s.frame_fence = slot.fence_value;
    s.arena_fence = slot.fence_value;
    s.recording = false;
    s.has_commands = false;
    s.chunk_draws = 0;
}
void flush_chunk(State &s) {
    if (!s.recording || !s.has_commands)
        return;
    submit_chunk(s);
    open_chunk(s, (s.slot_index + 1u) % command_slot_count());
}
UINT64 allocate(State &s, UINT64 bytes, UINT64 alignment) {
    s.used = (s.used + alignment - 1) & ~(alignment - 1);
    if (bytes > kUploadBytes - s.used)
        throw std::runtime_error("MotorStorm D3D12 upload arena exhausted");
    const auto offset = s.used;
    s.used += bytes;
    return offset;
}
struct Bytecode {
    std::string_view entry;
    const void *data;
    std::size_t size;
    [[nodiscard]] const void *GetBufferPointer() const { return data; }
    [[nodiscard]] std::size_t GetBufferSize() const { return size; }
};
// Precompiled shader for an entry point (the profile is fixed at build time).
const Bytecode *compile(const char *entry, const char *) {
#define MOTORSTORM_SHADER(name) Bytecode{#name, g_motorstorm_##name, sizeof(g_motorstorm_##name)}
    static const Bytecode shaders[]{
        MOTORSTORM_SHADER(VS),        MOTORSTORM_SHADER(PS),        MOTORSTORM_SHADER(PointGS),
        MOTORSTORM_SHADER(PresentVS), MOTORSTORM_SHADER(PresentPS), MOTORSTORM_SHADER(ExpandCS),
        MOTORSTORM_SHADER(ResolveCS), MOTORSTORM_SHADER(CaptureCS), MOTORSTORM_SHADER(DecodeCS),
        MOTORSTORM_SHADER(MipCS),     MOTORSTORM_SHADER(VertexCS),      MOTORSTORM_SHADER(DecodeTargetCS),
        MOTORSTORM_SHADER(PostResolveCS),
        MOTORSTORM_SHADER(DebandCS),
        MOTORSTORM_SHADER(PostPS), MOTORSTORM_SHADER(PostCaptureCS), MOTORSTORM_SHADER(PostColorCS),
        MOTORSTORM_SHADER(PostPresentPS), MOTORSTORM_SHADER(PostColorCaptureCS),
        MOTORSTORM_SHADER(DepthResolveCS)};
#undef MOTORSTORM_SHADER
    for (const auto &shader : shaders)
        if (shader.entry == entry)
            return &shader;
    throw std::runtime_error(std::string("MotorStorm shader not compiled: ") + entry);
}
void create_pipeline(State &s) {
    D3D12_DESCRIPTOR_RANGE range{};
    range.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV;
    range.NumDescriptors = 1;
    range.BaseShaderRegister = 0;
    D3D12_DESCRIPTOR_RANGE replacement_range = range;
    replacement_range.BaseShaderRegister = 3;  // t3: texture-pack image
    D3D12_ROOT_PARAMETER params[9]{};
    params[0].ParameterType = D3D12_ROOT_PARAMETER_TYPE_CBV;
    params[1].ParameterType = D3D12_ROOT_PARAMETER_TYPE_UAV;
    params[1].Descriptor.ShaderRegister = 0;
    params[2].ParameterType = D3D12_ROOT_PARAMETER_TYPE_UAV;
    params[2].Descriptor.ShaderRegister = 1;
    params[3].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
    params[3].DescriptorTable = {1, &range};
    params[4].ParameterType = D3D12_ROOT_PARAMETER_TYPE_SRV;
    params[4].Descriptor.ShaderRegister = 1;
    params[5].ParameterType = D3D12_ROOT_PARAMETER_TYPE_SRV;
    params[5].Descriptor.ShaderRegister = 2;
    params[6].ParameterType = D3D12_ROOT_PARAMETER_TYPE_UAV;
    params[6].Descriptor.ShaderRegister = 2;
    params[7].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
    params[7].DescriptorTable = {1, &replacement_range};
    params[8].ParameterType = D3D12_ROOT_PARAMETER_TYPE_SRV;  // t5: HUD depth snapshot
    params[8].Descriptor.ShaderRegister = 5;
    D3D12_ROOT_SIGNATURE_DESC desc{};
    desc.NumParameters = 9;
    desc.pParameters = params;
    D3D12_STATIC_SAMPLER_DESC samplers[8]{};
    for (UINT i = 0u; i < 4u; ++i) {
        samplers[i].Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR;
        samplers[i].AddressU = (i & 1u) ? D3D12_TEXTURE_ADDRESS_MODE_CLAMP : D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        samplers[i].AddressV = (i & 2u) ? D3D12_TEXTURE_ADDRESS_MODE_CLAMP : D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        samplers[i].AddressW = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
        samplers[i].MaxAnisotropy = 1u;
        samplers[i].ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        samplers[i].MaxLOD = D3D12_FLOAT32_MAX;
        samplers[i].ShaderRegister = i;
        samplers[i].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    }
    // s4..s7: the same wrap/clamp combinations with 8x anisotropic filtering,
    // used only for texture-pack replacements (upscaled art at grazing angles).
    for (UINT i = 4; i < 8; ++i) {
        samplers[i] = samplers[i - 4];
        samplers[i].Filter = D3D12_FILTER_ANISOTROPIC;
        samplers[i].MaxAnisotropy = 8u;
        samplers[i].ShaderRegister = i;
    }
    desc.NumStaticSamplers = 8u;
    desc.pStaticSamplers = samplers;
    desc.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT;
    ComPtr<ID3DBlob> serialized, errors;
    check(D3D12SerializeRootSignature(&desc, D3D_ROOT_SIGNATURE_VERSION_1, &serialized, &errors),
          "serialize root signature");
    check(s.device->CreateRootSignature(0, serialized->GetBufferPointer(), serialized->GetBufferSize(),
                                        IID_PPV_ARGS(&s.root)),
          "create root signature");
    const auto vs = compile("VS", "vs_5_1"), ps = compile("PS", "ps_5_1");
    D3D12_INPUT_ELEMENT_DESC elements[]{
        {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"COLOR", 0, DXGI_FORMAT_R32_UINT, 0, 12, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"COLOR", 1, DXGI_FORMAT_R32_UINT, 0, 16, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 20, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32_FLOAT, 0, 32, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0}};
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pso{};
    pso.pRootSignature = s.root.Get();
    pso.VS = {vs->GetBufferPointer(), vs->GetBufferSize()};
    pso.PS = {ps->GetBufferPointer(), ps->GetBufferSize()};
    pso.InputLayout = {elements, 5};
    pso.SampleMask = UINT_MAX;
    pso.SampleDesc.Count = 1;
    pso.RasterizerState.FillMode = D3D12_FILL_MODE_SOLID;
    pso.RasterizerState.CullMode = D3D12_CULL_MODE_NONE;
    pso.RasterizerState.DepthClipEnable = FALSE;
    pso.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    check(s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.pipeline)), "create GE pipeline");
    pso.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_LINE;
    check(s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.line_pipeline)),
          "create line pipeline");
    pso.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT;
    const auto point_gs = compile("PointGS", "gs_5_1");
    pso.GS = {point_gs->GetBufferPointer(), point_gs->GetBufferSize()};
    check(s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.point_pipeline)),
          "create point pipeline");
    pso.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    pso.GS = {};
    const auto pvs = compile("PresentVS", "vs_5_1"), pps = compile("PresentPS", "ps_5_1");
    pso.VS = {pvs->GetBufferPointer(), pvs->GetBufferSize()};
    pso.PS = {pps->GetBufferPointer(), pps->GetBufferSize()};
    pso.InputLayout = {};
    pso.NumRenderTargets = 1;
    pso.RTVFormats[0] = DXGI_FORMAT_R8G8B8A8_UNORM;
    pso.BlendState.RenderTarget[0].RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    check(s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.present_pipeline)),
          "create present pipeline");
    const auto post_ps = compile("PostPS", "ps_5_1");
    pso.PS = {post_ps->GetBufferPointer(), post_ps->GetBufferSize()};
    check(s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.post_pipeline)), "create post pipeline");
    const auto post_present_ps = compile("PostPresentPS", "ps_5_1");
    pso.PS = {post_present_ps->GetBufferPointer(), post_present_ps->GetBufferSize()};
    check(s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.post_present_pipeline)), "create post present pipeline");
    auto create_compute = [&](const char *entry, ComPtr<ID3D12PipelineState> &pipeline) {
        const auto shader = compile(entry, "cs_5_1");
        D3D12_COMPUTE_PIPELINE_STATE_DESC desc{};
        desc.pRootSignature = s.root.Get();
        desc.CS = {shader->GetBufferPointer(), shader->GetBufferSize()};
        check(s.device->CreateComputePipelineState(&desc, IID_PPV_ARGS(&pipeline)), entry);
    };
    create_compute("ExpandCS", s.expand_pipeline);
    create_compute("ResolveCS", s.resolve_pipeline);
    create_compute("CaptureCS", s.capture_pipeline);
    create_compute("DecodeCS", s.decode_pipeline);
    create_compute("VertexCS", s.vertex_pipeline);
    create_compute("DecodeTargetCS", s.decode_target_pipeline);
    create_compute("MipCS", s.mip_pipeline);
    create_compute("PostResolveCS", s.post_resolve_pipeline);
    create_compute("DebandCS", s.deband_pipeline);
    create_compute("PostCaptureCS", s.post_capture_pipeline);
    create_compute("PostColorCS", s.post_color_pipeline);
    create_compute("PostColorCaptureCS", s.post_color_capture_pipeline);
    create_compute("DepthResolveCS", s.depth_resolve_pipeline);
}
void compute_with(State &s, ID3D12PipelineState *pipeline, D3D12_GPU_VIRTUAL_ADDRESS constants,
                  D3D12_GPU_VIRTUAL_ADDRESS source, D3D12_GPU_VIRTUAL_ADDRESS destination, UINT width,
                  UINT height);
void compute(State &s, ID3D12PipelineState *pipeline, const Constants &constants,
             D3D12_GPU_VIRTUAL_ADDRESS source, D3D12_GPU_VIRTUAL_ADDRESS destination, UINT width,
             UINT height) {
    const auto offset = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + offset, &constants, sizeof(constants));
    compute_with(s, pipeline, s.upload->GetGPUVirtualAddress() + offset, source, destination, width, height);
}
void compute_with(State &s, ID3D12PipelineState *pipeline, D3D12_GPU_VIRTUAL_ADDRESS constants,
                  D3D12_GPU_VIRTUAL_ADDRESS source, D3D12_GPU_VIRTUAL_ADDRESS destination, UINT width,
                  UINT height) {
    s.list->SetComputeRootSignature(s.root.Get());
    s.list->SetPipelineState(pipeline);
    s.list->SetComputeRootConstantBufferView(0, constants);
    s.list->SetComputeRootShaderResourceView(4, source);
    s.list->SetComputeRootUnorderedAccessView(6, destination);
    s.list->Dispatch((width + 7) / 8, (height + 7) / 8, 1);
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_UAV;
    s.list->ResourceBarrier(1, &barrier);
    s.has_commands = true;
}
void native_transition(State &s, Surface &surface, D3D12_RESOURCE_STATES next) {
    if (surface.native_state == next)
        return;
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {surface.native.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES, surface.native_state,
                          next};
    s.list->ResourceBarrier(1, &barrier);
    surface.native_state = next;
}
ID3D12Resource *resolve_surface(State &s, Surface &surface) {
    if (surface.raster_half == 2)
        return surface.image.Get();
    if (surface.native_version != surface.version) {
        transition(s, surface, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
        native_transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
        Constants constants{};
        constants.surface = {surface.stride, surface.height, surface.raster_stride(), 0};
        constants.mode[0] = surface.format;
        constants.render[0] = surface.raster_half;
        compute(s, s.resolve_pipeline.Get(), constants, surface.image->GetGPUVirtualAddress(),
                surface.native->GetGPUVirtualAddress(), surface.stride, surface.height);
        transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
        surface.native_version = surface.version;
    }
    return surface.native.Get();
}
void load_surface(State &s, Surface &surface, const psprecomp::GuestMemory &memory) {
    if (surface.loaded)
        return;
    std::vector<std::uint8_t> guest(static_cast<std::size_t>(surface.guest_bytes()));
    if (surface.readback_pending) {
        // Reading this target's own bytes publishes its deferred readback.
        memory.copy_out(surface.address, guest);
    } else {
        // Already-published bytes: a renderer read must not force another
        // target's deferred readback (e.g. presenting the front buffer while
        // the back buffer is still rendering).
        const bool armed = memory.vram_hook_armed();
        memory.arm_vram_hook(false);
        memory.copy_out(surface.address, guest);
        memory.arm_vram_hook(armed);
    }
    // Retain real subpixel detail after resolving into guest VRAM. A reload is
    // required only when the CPU or a transfer actually changed those bytes.
    if (surface.version && guest == surface.guest_shadow) {
        surface.loaded = true;
        return;
    }
    surface.guest_shadow = std::move(guest);
    const auto offset = allocate(s, surface.native_bytes(), 4);
    auto *destination = reinterpret_cast<std::uint32_t *>(s.mapped + offset);
    if (surface.bpp == 4)
        std::memcpy(destination, surface.guest_shadow.data(), surface.guest_shadow.size());
    else
        for (UINT64 i = 0; i < surface.native_bytes() / 4; ++i) {
            std::uint16_t value;
            std::memcpy(&value, surface.guest_shadow.data() + i * 2, 2);
            destination[i] = value;
        }
    if (surface.raster_half == 2) {
        transition(s, surface, D3D12_RESOURCE_STATE_COPY_DEST);
        s.list->CopyBufferRegion(surface.image.Get(), 0, s.upload.Get(), offset, surface.bytes());
        transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    } else {
        transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
        Constants constants{};
        constants.surface = {surface.stride, surface.height, surface.raster_stride(), 0};
        constants.render[0] = surface.raster_half;
        compute(s, s.expand_pipeline.Get(), constants, s.upload->GetGPUVirtualAddress() + offset,
                surface.image->GetGPUVirtualAddress(), surface.raster_stride(), surface.raster_height());
    }
    surface.aspect_scale = 1.0f;  // CPU uploads, including movie frames.
    surface.loaded = true;
    ++surface.version;
    s.has_commands = true;
}
Surface &get_surface(State &s, psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t stride,
                     std::uint32_t height, std::uint32_t bpp, std::uint32_t format = 4) {
    address = physical(address);
    for (const auto &candidate : s.surfaces)
        if (candidate->address == address && candidate->stride == stride && candidate->bpp == bpp &&
            candidate->height >= height) {
            candidate->format = format;
            load_surface(s, *candidate, memory);
            return *candidate;
        }
    // Overlapping PSP targets share bytes. Publish the old interpretation before
    // loading a new one, including 16/32-bit views and VRAM mirror addresses.
    for (const auto &candidate : s.surfaces) {
        const auto end = static_cast<UINT64>(address) + static_cast<UINT64>(stride) * height * bpp;
        if (address < static_cast<UINT64>(candidate->address) + candidate->guest_bytes() &&
            candidate->address < end) {
            gpu_sync(memory);
            begin(s);
            s.surfaces.erase(std::remove_if(s.surfaces.begin(), s.surfaces.end(),
                                            [&](const auto &other) {
                                                return address < static_cast<UINT64>(other->address) +
                                                                     other->guest_bytes() &&
                                                       other->address < end;
                                            }),
                             s.surfaces.end());
            break;
        }
    }
    auto target = std::make_unique<Surface>();
    target->address = address;
    target->stride = stride;
    target->height = height;
    target->bpp = bpp;
    target->raster_half = s.raster_half;
    target->format = format;
    target->image = buffer(s, target->bytes(), D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST, true);
    target->readback =
        buffer(s, target->native_bytes(), D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
    if (s.raster_half > 2)
        target->native = buffer(s, target->native_bytes(), D3D12_HEAP_TYPE_DEFAULT,
                                D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    s.surfaces.push_back(std::move(target));
    load_surface(s, *s.surfaces.back(), memory);
    return *s.surfaces.back();
}
D3D12_GPU_DESCRIPTOR_HANDLE srv_handle(State &s, UINT index) {
    auto handle = s.srv->GetGPUDescriptorHandleForHeapStart();
    handle.ptr += static_cast<UINT64>(index) * s.descriptor_size;
    return handle;
}
// Scratch buffers for GPU texture decoding: decode output (and mip input).
constexpr UINT64 kDecodeScratchBytes = 4ull * 1024 * 1024 + 64 * 1024;
void scratch_state(State &s, UINT index, D3D12_RESOURCE_STATES next) {
    if (s.decode_state[index] == next)
        return;
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {s.decode_scratch[index].Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                          s.decode_state[index], next};
    s.list->ResourceBarrier(1, &barrier);
    s.decode_state[index] = next;
}
UINT decode_pitch(UINT width) { return ((width * 4u + 255u) & ~255u) / 4u; }
// Copies scratch[index] (pitch-aligned RGBA rows) into one texture mip.
void copy_scratch_to_mip(State &s, UINT index, ID3D12Resource *image, UINT mip, UINT width, UINT height) {
    scratch_state(s, index, D3D12_RESOURCE_STATE_COPY_SOURCE | D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    D3D12_TEXTURE_COPY_LOCATION source{};
    source.pResource = s.decode_scratch[index].Get();
    source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    source.PlacedFootprint.Footprint = {DXGI_FORMAT_R8G8B8A8_UNORM, width, height, 1, decode_pitch(width) * 4u};
    D3D12_TEXTURE_COPY_LOCATION destination{};
    destination.pResource = image;
    destination.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    destination.SubresourceIndex = mip;
    s.list->CopyTextureRegion(&destination, 0, 0, 0, &source, nullptr);
}
constexpr UINT64 kIdentifyRingBytes = 48ull * 1024 * 1024;
// Copies the decoded base level (scratch[0], in a copy-source state) to the
// identification ring. A full ring hands the key back for a CPU fallback.
void queue_identify_copy(State &s, std::uint64_t key, UINT width, UINT height) {
    const UINT pitch = decode_pitch(width);
    const UINT64 bytes = static_cast<UINT64>(pitch) * 4u * height;
    if (!s.identify_ring) {
        s.identify_ring = buffer(s, kIdentifyRingBytes, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
        void *mapped{};
        check(s.identify_ring->Map(0, nullptr, &mapped), "map identify ring");
        s.identify_mapped = static_cast<const std::uint8_t *>(mapped);
    }
    UINT64 start = s.identify_head;
    if (start % kIdentifyRingBytes + bytes > kIdentifyRingBytes)
        start += kIdentifyRingBytes - start % kIdentifyRingBytes;  // keep each copy contiguous
    if (bytes > kIdentifyRingBytes || start + bytes - s.identify_tail > kIdentifyRingBytes) {
        s.identify_failed.push_back(key);
        return;
    }
    s.list->CopyBufferRegion(s.identify_ring.Get(), start % kIdentifyRingBytes, s.decode_scratch[0].Get(), 0, bytes);
    s.identify_copies.push_back({key, width, height, pitch, start, start + bytes, s.executions, 0});
    s.identify_head = start + bytes;
}
void transition_image(State &s, ID3D12Resource *image, D3D12_RESOURCE_STATES from, D3D12_RESOURCE_STATES to);
// The target drawn in the current list that holds these guest bytes.
Surface *drawn_target(State &s, std::uint32_t address, std::uint32_t bytes, bool palette) {
    address = physical(address);
    for (const auto &surface : s.surfaces)
        if (surface->dirty && (!palette || surface->bpp == 4u) && address >= surface->address &&
            static_cast<UINT64>(address) + bytes <= surface->address + surface->guest_bytes() &&
            (!palette || (address - surface->address) % 4u == 0u))
            return surface.get();
    return nullptr;
}
void target_state(State &s, Surface &target, D3D12_RESOURCE_STATES next) {
    if (target.raster_half == 2)
        transition(s, target, next);
    else
        native_transition(s, target, next);
}
// Decode constants in a GPU buffer whose palette bytes (commands[]) are copied
// from the target that rendered them. 0: the palette target is gone.
D3D12_GPU_VIRTUAL_ADDRESS gpu_clut_constants(State &s, const Constants &constants, const GpuTexture &texture) {
    Surface *target = drawn_target(s, texture.gpu_clut_address, texture.gpu_clut_bytes, true);
    if (!target)
        return 0;
    if (!s.clut_constants) {
        s.clut_constants = buffer(s, UINT64{State::kClutConstantSlots} * State::kClutConstantStride,
                                  D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST);
        s.clut_constants_state = D3D12_RESOURCE_STATE_COPY_DEST;
    }
    const auto constants_state = [&](D3D12_RESOURCE_STATES next) {
        if (s.clut_constants_state == next)
            return;
        transition_image(s, s.clut_constants.Get(), s.clut_constants_state, next);
        s.clut_constants_state = next;
    };
    const UINT64 slot = UINT64{s.clut_constant_slot++ % State::kClutConstantSlots} * State::kClutConstantStride;
    const auto offset = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + offset, &constants, sizeof(constants));
    auto *resolved = resolve_surface(s, *target);
    target_state(s, *target, D3D12_RESOURCE_STATE_COPY_SOURCE);
    constants_state(D3D12_RESOURCE_STATE_COPY_DEST);
    s.list->CopyBufferRegion(s.clut_constants.Get(), slot, s.upload.Get(), offset, sizeof(constants));
    // 32-bit target pixels are the palette's bytes, one word per pixel.
    s.list->CopyBufferRegion(s.clut_constants.Get(), slot, resolved,
                             physical(texture.gpu_clut_address) - target->address, texture.gpu_clut_bytes);
    target_state(s, *target, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    constants_state(D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER);
    s.has_commands = true;
    return s.clut_constants->GetGPUVirtualAddress() + slot;
}
// Decodes one raw PSP level into scratch[index] with DecodeCS. The texel bytes
// come from the upload arena, or straight from a drawn target (gpu_source).
void decode_level(State &s, const GpuTexture &texture, UINT level, UINT index) {
    const auto &raw = texture.raw[level];
    Constants constants{};
    std::copy(texture.clut.begin(), texture.clut.end(), constants.commands.begin());
    constants.surface = {raw.width, raw.height, decode_pitch(raw.width), raw.stride};
    constants.mode = {texture.format, (texture.texture_mode & 1u) != 0u ? 1u : 0u, texture.clut_mode, level};
    constants.feedback = {texture.texture_mode, 0, 0, 0};
    D3D12_GPU_VIRTUAL_ADDRESS source{};
    Surface *source_target = nullptr;
    if (texture.gpu_source) {
        // DecodeCS reads guest bytes from the resolved target: one word per
        // pixel holding `bpp` guest bytes (DecodeTargetCS, replace = {1, bpp, offset}).
        source_target = drawn_target(s, texture.gpu_source_address, 1u, false);
        if (!source_target)
            throw std::runtime_error("MotorStorm GPU texture source target vanished");
        auto *resolved = resolve_surface(s, *source_target);
        target_state(s, *source_target, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
        source = resolved->GetGPUVirtualAddress();
        constants.replace = {1u, source_target->bpp,
                             physical(texture.gpu_source_address) - source_target->address, 0u};
    } else {
        const auto padded = (raw.bytes.size() + 3u) & ~std::size_t{3};
        const auto offset = allocate(s, padded + 4u, 4);
        std::memcpy(s.mapped + offset, raw.bytes.data(), raw.bytes.size());
        std::memset(s.mapped + offset + raw.bytes.size(), 0, padded + 4u - raw.bytes.size());
        source = s.upload->GetGPUVirtualAddress() + offset;
        if (texture.gpu_overlay && level == 0u) {
            // Guest bytes first, then the drawn parts from each overlapping
            // 32-bit target (its resolved words are the guest bytes).
            auto composed = buffer(s, padded + 4u, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST);
            s.list->CopyBufferRegion(composed.Get(), 0, s.upload.Get(), offset, padded + 4u);
            const UINT64 begin = physical(texture.gpu_source_address), end = begin + raw.bytes.size();
            for (const auto &surface : s.surfaces) {
                const UINT64 first = std::max<UINT64>(begin, surface->address);
                const UINT64 last = std::min<UINT64>(end, surface->address + surface->guest_bytes());
                if (!surface->dirty || first >= last)
                    continue;
                auto *resolved = resolve_surface(s, *surface);
                target_state(s, *surface, D3D12_RESOURCE_STATE_COPY_SOURCE);
                s.list->CopyBufferRegion(composed.Get(), first - begin, resolved, first - surface->address,
                                         last - first);
                target_state(s, *surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
            }
            transition_image(s, composed.Get(), D3D12_RESOURCE_STATE_COPY_DEST,
                             D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
            source = composed->GetGPUVirtualAddress();
            s.transient.push_back(std::move(composed));
            s.has_commands = true;
        }
    }
    scratch_state(s, index, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    D3D12_GPU_VIRTUAL_ADDRESS palette{};
    if (texture.gpu_clut)
        palette = gpu_clut_constants(s, constants, texture);
    auto *pipeline = source_target ? s.decode_target_pipeline.Get() : s.decode_pipeline.Get();
    if (palette)
        compute_with(s, pipeline, palette, source, s.decode_scratch[index]->GetGPUVirtualAddress(), raw.width,
                     raw.height);
    else
        compute(s, pipeline, constants, source, s.decode_scratch[index]->GetGPUVirtualAddress(), raw.width,
                raw.height);
    if (source_target)
        target_state(s, *source_target, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
}
// Fills every mip of `image` from the raw levels; extra mips (enhanced
// filtering) are box-filtered from the previous level on the GPU.
void decode_into(State &s, const GpuTexture &texture, ID3D12Resource *image, UINT mips) {
    UINT width = texture.raw[0].width, height = texture.raw[0].height, current = 0;
    for (UINT mip = 0; mip < mips; ++mip) {
        if (mip < texture.raw.size()) {
            decode_level(s, texture, mip, 0);
            current = 0;
            width = texture.raw[mip].width;
            height = texture.raw[mip].height;
        } else {
            const UINT next_width = std::max(1u, width / 2u), next_height = std::max(1u, height / 2u);
            const UINT target = current ^ 1u;
            Constants constants{};
            constants.surface = {next_width, next_height, decode_pitch(next_width), decode_pitch(width)};
            constants.mode = {width, height, 0, 0};
            scratch_state(s, current, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE |
                                          D3D12_RESOURCE_STATE_COPY_SOURCE);
            scratch_state(s, target, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
            compute(s, s.mip_pipeline.Get(), constants, s.decode_scratch[current]->GetGPUVirtualAddress(),
                    s.decode_scratch[target]->GetGPUVirtualAddress(), next_width, next_height);
            current = target;
            width = next_width;
            height = next_height;
        }
        copy_scratch_to_mip(s, current, image, mip, width, height);
        if (mip == 0u && texture.identify)
            queue_identify_copy(s, texture.key, width, height);
    }
}
UINT mip_count_for(const State &s, const GpuTexture &texture) {
    if (texture.raw.empty())
        return static_cast<UINT>(texture.levels.size());
    // Enhanced filtering gives single-level textures a full chain.
    if (!s.enhanced_filtering || texture.raw.size() > 1u || texture.streaming)
        return static_cast<UINT>(texture.raw.size());
    UINT count = 1, size = std::max(texture.width, texture.height);
    while (size > 1u) { size /= 2u; ++count; }
    return count;
}
void transition_image(State &s, ID3D12Resource *image, D3D12_RESOURCE_STATES from, D3D12_RESOURCE_STATES to) {
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {image, D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES, from, to};
    s.list->ResourceBarrier(1, &barrier);
}
Texture &get_texture(State &s, const GpuTexture &texture) {
    if (auto found = s.textures.find(texture.key); found != s.textures.end()) {
        auto &cached = found->second;
        cached.last_used = s.fence_value;
        // Streaming textures (video) re-decode into the same GPU texture.
        if (texture.streaming && cached.generation != texture.generation && !texture.raw.empty() &&
            cached.width == texture.width && cached.height == texture.height &&
            cached.mips == mip_count_for(s, texture)) {
            transition_image(s, cached.image.Get(), D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE,
                             D3D12_RESOURCE_STATE_COPY_DEST);
            decode_into(s, texture, cached.image.Get(), cached.mips);
            transition_image(s, cached.image.Get(), D3D12_RESOURCE_STATE_COPY_DEST,
                             D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
            cached.generation = texture.generation;
            ++report.streamed_texture_updates;
            return cached;
        }
        if (!texture.streaming || cached.generation == texture.generation)
            return cached;
        // Shape changed: drop the old texture and create a new one below.
        s.texture_bytes -= cached.bytes;
        s.free_descriptors.push_back(cached.descriptor);
        s.transient.push_back(std::move(cached.image));
        s.textures.erase(found);
    }
    if (s.free_descriptors.empty() && s.next_descriptor >= kDescriptors)
        throw std::runtime_error("MotorStorm D3D12 texture descriptor heap exhausted");
    Texture target;
    target.last_used = s.fence_value;
    if (s.free_descriptors.empty())
        target.descriptor = s.next_descriptor++;
    else {
        target.descriptor = s.free_descriptors.back();
        s.free_descriptors.pop_back();
    }
    D3D12_HEAP_PROPERTIES heap{};
    heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    D3D12_RESOURCE_DESC desc{};
    desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    desc.Width = texture.width;
    desc.Height = texture.height;
    desc.DepthOrArraySize = 1;
    desc.MipLevels = static_cast<UINT16>(mip_count_for(s, texture));
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    check(s.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc,
                                            D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                            IID_PPV_ARGS(&target.image)),
          "create texture");
    target.width = texture.width;
    target.height = texture.height;
    target.mips = desc.MipLevels;
    target.generation = texture.generation;
    if (!texture.raw.empty()) {
        // Raw PSP data: decoded by DecodeCS on the GPU.
        decode_into(s, texture, target.image.Get(), desc.MipLevels);
        UINT w = texture.width, h = texture.height;
        for (UINT mip = 0; mip < desc.MipLevels; ++mip) {
            target.bytes += static_cast<UINT64>(w) * h * 4u;
            w = std::max(1u, w / 2u);
            h = std::max(1u, h / 2u);
        }
    } else {
        for (UINT mip = 0; mip < desc.MipLevels; ++mip) {
            target.bytes += texture.levels[mip].size() * 4;
            D3D12_PLACED_SUBRESOURCE_FOOTPRINT footprint{};
            UINT rows{};
            UINT64 row_bytes{}, bytes{};
            s.device->GetCopyableFootprints(&desc, mip, 1, 0, &footprint, &rows, &row_bytes, &bytes);
            footprint.Offset = allocate(s, bytes, D3D12_TEXTURE_DATA_PLACEMENT_ALIGNMENT);
            for (UINT y = 0; y < rows; ++y)
                std::memcpy(s.mapped + footprint.Offset + y * footprint.Footprint.RowPitch,
                            texture.levels[mip].data() + y * (row_bytes / 4),
                            static_cast<std::size_t>(row_bytes));
            D3D12_TEXTURE_COPY_LOCATION source{};
            source.pResource = s.upload.Get();
            source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
            source.PlacedFootprint = footprint;
            D3D12_TEXTURE_COPY_LOCATION destination{};
            destination.pResource = target.image.Get();
            destination.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
            destination.SubresourceIndex = mip;
            s.list->CopyTextureRegion(&destination, 0, 0, 0, &source, nullptr);
        }
    }
    transition_image(s, target.image.Get(), D3D12_RESOURCE_STATE_COPY_DEST,
                     D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
    D3D12_SHADER_RESOURCE_VIEW_DESC view{};
    view.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    view.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    view.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    view.Texture2D.MipLevels = desc.MipLevels;
    auto handle = s.srv->GetCPUDescriptorHandleForHeapStart();
    handle.ptr += static_cast<SIZE_T>(target.descriptor) * s.descriptor_size;
    s.device->CreateShaderResourceView(target.image.Get(), &view, handle);
    ++report.texture_uploads;
    s.has_commands = true;
    s.texture_bytes += target.bytes;
    return s.textures.emplace(texture.key, std::move(target)).first->second;
}
DXGI_FORMAT replacement_format(textures::Format format) {
    switch (format) {
    case textures::Format::Bc1: return DXGI_FORMAT_BC1_UNORM;
    case textures::Format::Bc2: return DXGI_FORMAT_BC2_UNORM;
    case textures::Format::Bc3: return DXGI_FORMAT_BC3_UNORM;
    case textures::Format::Bc7: return DXGI_FORMAT_BC7_UNORM;
    default: return DXGI_FORMAT_R8G8B8A8_UNORM;
    }
}
// Most texture-pack bytes one GE list may upload; the rest waits a list so a
// burst of new replacements (a level load) cannot hitch a single frame.
// Per GE list (about one frame): a scene load can make hundreds of
// replacements ready at once. Uploading them all in one frame stalled the
// guest for a quarter second (audible audio gaps); spread them instead.
constexpr UINT64 kReplacementUploadsPerList = 16ull * 1024 * 1024;
constexpr UINT kReplacementCountPerList = 8;

// Returns the GPU replacement for a content hash, uploading a decoded image
// once it is ready. Never blocks on file I/O or decoding.
const State::Replacement *get_replacement(State &s, std::uint64_t hash) {
    if (auto found = s.replacements.find(hash); found != s.replacements.end()) {
        if (!found->second.image)
            return nullptr;
        found->second.last_used = s.fence_value;
        return &found->second;
    }
    auto pending = s.pending_replacements.find(hash);
    std::unique_ptr<textures::Image> image;
    if (pending != s.pending_replacements.end()) {
        image = std::move(pending->second);
        s.pending_replacements.erase(pending);
    } else {
        image = textures::take_replacement(hash);
    }
    if (!image || image->levels.empty())
        return nullptr;
    const UINT64 bytes = image->bytes();
    if (s.replacement_count_in_list >= kReplacementCountPerList ||
        (s.replacement_uploaded_in_list != 0u && s.replacement_uploaded_in_list + bytes > kReplacementUploadsPerList)) {
        s.pending_replacements.emplace(hash, std::move(image));
        return nullptr;
    }
    const auto &base = image->levels[0];
    const bool block = image->format != textures::Format::Rgba8;
    if (block && ((base.width & 3u) != 0u || (base.height & 3u) != 0u)) {
        log_line("TEXTURE", "replacement rejected: " + image->source.string() +
                                " (block-compressed size must be a multiple of 4)");
        s.replacements.emplace(hash, State::Replacement{});
        return nullptr;
    }
    if (s.free_descriptors.empty() && s.next_descriptor >= kDescriptors)
        return nullptr;
    D3D12_RESOURCE_DESC desc{};
    desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    desc.Width = base.width;
    desc.Height = base.height;
    desc.DepthOrArraySize = 1;
    desc.MipLevels = static_cast<UINT16>(image->levels.size());
    desc.Format = replacement_format(image->format);
    desc.SampleDesc.Count = 1;
    // A dedicated staging buffer keeps replacements out of the shared upload
    // arena, whose flush mark forces a GPU wait mid-frame.
    std::vector<D3D12_PLACED_SUBRESOURCE_FOOTPRINT> footprints(desc.MipLevels);
    std::vector<UINT> rows(desc.MipLevels);
    std::vector<UINT64> row_bytes(desc.MipLevels);
    UINT64 staging_bytes{};
    s.device->GetCopyableFootprints(&desc, 0, desc.MipLevels, 0, footprints.data(), rows.data(), row_bytes.data(),
                                    &staging_bytes);
    D3D12_HEAP_PROPERTIES heap{};
    heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    State::Replacement target;
    check(s.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc, D3D12_RESOURCE_STATE_COPY_DEST,
                                            nullptr, IID_PPV_ARGS(&target.image)),
          "create replacement texture");
    auto staging = buffer(s, staging_bytes, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
    std::uint8_t *mapped{};
    check(staging->Map(0, nullptr, reinterpret_cast<void **>(&mapped)), "map replacement staging");
    for (UINT mip = 0; mip < desc.MipLevels; ++mip) {
        const auto &level = image->levels[mip];
        const auto copy = static_cast<std::size_t>(std::min<UINT64>(row_bytes[mip], level.row_pitch));
        for (UINT y = 0; y < rows[mip] && y < level.rows; ++y)
            std::memcpy(mapped + footprints[mip].Offset + static_cast<UINT64>(y) * footprints[mip].Footprint.RowPitch,
                        level.data.data() + static_cast<std::size_t>(y) * level.row_pitch, copy);
        D3D12_TEXTURE_COPY_LOCATION source{};
        source.pResource = staging.Get();
        source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
        source.PlacedFootprint = footprints[mip];
        D3D12_TEXTURE_COPY_LOCATION destination{};
        destination.pResource = target.image.Get();
        destination.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
        destination.SubresourceIndex = mip;
        s.list->CopyTextureRegion(&destination, 0, 0, 0, &source, nullptr);
    }
    staging->Unmap(0, nullptr);
    s.transient.push_back(std::move(staging));  // released after the list's fence
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {target.image.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                          D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE};
    s.list->ResourceBarrier(1, &barrier);
    if (s.free_descriptors.empty())
        target.descriptor = s.next_descriptor++;
    else {
        target.descriptor = s.free_descriptors.back();
        s.free_descriptors.pop_back();
    }
    D3D12_SHADER_RESOURCE_VIEW_DESC view{};
    view.Format = desc.Format;
    view.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    view.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    view.Texture2D.MipLevels = desc.MipLevels;
    auto handle = s.srv->GetCPUDescriptorHandleForHeapStart();
    handle.ptr += static_cast<SIZE_T>(target.descriptor) * s.descriptor_size;
    s.device->CreateShaderResourceView(target.image.Get(), &view, handle);
    target.bytes = bytes;
    target.no_alpha = image->no_alpha;
    target.last_used = s.fence_value;
    s.replacement_bytes += bytes;
    s.replacement_uploaded_in_list += bytes;
    ++s.replacement_count_in_list;
    s.has_commands = true;
    ++report.replacement_uploads;
    return &s.replacements.emplace(hash, std::move(target)).first->second;
}
ID3D12Resource *feedback_snapshot(State &s, const psprecomp::GuestMemory &memory, const GpuTexture &texture,
                                  std::array<std::uint32_t, 4> &constants) {
    const auto address = physical(texture.feedback_address);
    const auto bpp = texture.feedback_format == 3 ? 4u : 2u;
    Surface *source = nullptr;
    for (const auto &candidate : s.surfaces)
        if (candidate->loaded && candidate->stride == texture.feedback_stride && candidate->bpp == bpp &&
            address >= candidate->address &&
            address < static_cast<UINT64>(candidate->address) + candidate->guest_bytes()) {
            source = candidate.get();
            break;
        }
    const UINT64 first = source ? (address - source->address) / bpp : 0;
    const UINT half = source ? source->raster_half : 2u;
    const bool scaled = half > 2u;
    UINT64 bytes = std::max(source ? source->native_bytes() : 0ull,
                            (first + static_cast<UINT64>(texture.feedback_stride) * texture.height) * 4);
    // Scaled snapshots hold whole raster rows of the source surface.
    const UINT raster_pitch = scaled ? source->raster_stride() : 0u;
    if (scaled) {
        const auto rows = static_cast<UINT>((bytes + texture.feedback_stride * 4 - 1) / (texture.feedback_stride * 4));
        bytes = static_cast<UINT64>(raster_pitch) * raster_extent(rows, half) * 4;
    }
    auto initialize_tail = [&](ID3D12Resource *destination, UINT64 from) {
        if (from >= bytes)
            return;
        UINT64 native_from = from, native_bytes = bytes - from;
        if (scaled) {
            // Raster rows [from, bytes) cover these native rows.
            const UINT first_row = native_row_of_boundary(static_cast<UINT>(from / (raster_pitch * 4ull)), half);
            const UINT end_row = native_row_of_boundary(static_cast<UINT>(bytes / (raster_pitch * 4ull)), half);
            native_from = static_cast<UINT64>(first_row) * source->stride * 4;
            native_bytes = static_cast<UINT64>(end_row - std::min(end_row, first_row)) * source->stride * 4;
            if (native_bytes == 0)
                return;
        }
        const auto offset = allocate(s, native_bytes, 4);
        auto *out = reinterpret_cast<std::uint32_t *>(s.mapped + offset);
        const auto base = source ? source->address : address;
        const UINT64 first_texel = native_from / 4, texels = native_bytes / 4;
        const auto start = base + static_cast<std::uint32_t>(first_texel * bpp);
        if (memory.contains(start, static_cast<std::size_t>(texels * bpp))) {
            // One bulk VRAM read instead of a slow-path load per texel.
            if (bpp == 4) {
                memory.copy_out(start, {reinterpret_cast<std::uint8_t *>(out), static_cast<std::size_t>(texels * 4)});
            } else {
                thread_local std::vector<std::uint16_t> packed;
                packed.resize(static_cast<std::size_t>(texels));
                memory.copy_out(start, {reinterpret_cast<std::uint8_t *>(packed.data()), packed.size() * 2});
                for (UINT64 i = 0; i < texels; ++i)
                    out[i] = packed[static_cast<std::size_t>(i)];
            }
        } else {
            for (UINT64 i = first_texel; i < first_texel + texels; ++i) {
                const auto at = base + static_cast<std::uint32_t>(i * bpp);
                out[i - first_texel] =
                    memory.contains(at, bpp) ? (bpp == 4 ? memory.aot_load32(at) : memory.aot_load16(at)) : 0;
            }
        }
        if (!scaled)
            s.list->CopyBufferRegion(destination, from, s.upload.Get(), offset, native_bytes);
        else {
            D3D12_RESOURCE_BARRIER barrier{};
            barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
            barrier.Transition = {destination, D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                                  D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
            s.list->ResourceBarrier(1, &barrier);
            Constants constants{};
            constants.surface = {source->stride, static_cast<UINT>(native_bytes / 4 / source->stride),
                                 raster_pitch, 0};
            constants.render[0] = half;
            compute(s, s.expand_pipeline.Get(), constants, s.upload->GetGPUVirtualAddress() + offset,
                    destination->GetGPUVirtualAddress() + from, raster_pitch,
                    raster_extent(constants.surface[1], half));
            std::swap(barrier.Transition.StateBefore, barrier.Transition.StateAfter);
            s.list->ResourceBarrier(1, &barrier);
        }
    };
    constants = {1, static_cast<UINT>(first), texture.feedback_stride, texture.feedback_format};
    if (scaled)
        constants = {2,
                     static_cast<UINT>(static_cast<UINT64>(raster_extent(static_cast<UINT>(first / source->stride), half)) *
                                           raster_pitch +
                                       raster_extent(static_cast<UINT>(first % source->stride), half)),
                     raster_pitch, texture.feedback_format};
    if (!source) {
        // Alias switching has already synchronized the previous interpretation.
        auto image = buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST);
        initialize_tail(image.Get(), 0);
        D3D12_RESOURCE_BARRIER barrier{};
        barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Transition = {image.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                              D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE};
        s.list->ResourceBarrier(1, &barrier);
        s.transient.push_back(std::move(image));
        return s.transient.back().Get();
    }
    bool fresh = !source->snapshot || source->snapshot_bytes < bytes;
    if (fresh) {
        if (source->snapshot)
            s.transient.push_back(std::move(source->snapshot));
        source->snapshot =
            buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST, scaled);
        source->snapshot_bytes = bytes;
        source->snapshot_version = ~0ull;
    }
    if (source->snapshot_version != source->version) {
        if (!fresh) {
            D3D12_RESOURCE_BARRIER barrier{};
            barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
            barrier.Transition = {source->snapshot.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                                  D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST};
            s.list->ResourceBarrier(1, &barrier);
        }
        if (fresh || source->snapshot_guest_epoch != s.fence_value) {
            initialize_tail(source->snapshot.Get(), source->bytes());
            source->snapshot_guest_epoch = s.fence_value;
        }
        transition(s, *source, D3D12_RESOURCE_STATE_COPY_SOURCE);
        s.list->CopyBufferRegion(source->snapshot.Get(), 0, source->image.Get(), 0, source->bytes());
        transition(s, *source, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
        D3D12_RESOURCE_BARRIER barrier{};
        barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Transition = {source->snapshot.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                              D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE};
        s.list->ResourceBarrier(1, &barrier);
        source->snapshot_version = source->version;
    }
    return source->snapshot.Get();
}
#endif
} // namespace

std::vector<GpuDecodedTexture> gpu_take_decoded() {
    std::vector<GpuDecodedTexture> result;
#if defined(_WIN32)
    if (!state)
        return result;
    auto &s = *state;
    for (const auto key : s.identify_failed)
        result.push_back({key, 0, 0, {}});
    s.identify_failed.clear();
    if (s.identify_copies.empty())
        return result;
    const UINT64 completed = s.fence->GetCompletedValue();
    while (!s.identify_copies.empty()) {
        const auto &copy = s.identify_copies.front();
        if (copy.fence == 0u || copy.fence > completed)
            break;
        GpuDecodedTexture decoded{copy.key, copy.width, copy.height, {}};
        decoded.rgba.resize(static_cast<std::size_t>(copy.width) * copy.height);
        const auto *source = s.identify_mapped + copy.start % kIdentifyRingBytes;
        for (UINT y = 0; y < copy.height; ++y)
            std::memcpy(decoded.rgba.data() + static_cast<std::size_t>(y) * copy.width,
                        source + static_cast<std::size_t>(y) * copy.pitch * 4u, copy.width * 4u);
        result.push_back(std::move(decoded));
        s.identify_tail = copy.end;
        s.identify_copies.pop_front();
    }
#endif
    return result;
}
std::vector<std::uint32_t> gpu_debug_decode(const GpuTexture &texture, std::size_t level) {
    std::vector<std::uint32_t> result;
#if defined(_WIN32)
    if (!state || state->recording || level >= texture.raw.size())
        return result;
    auto &s = *state;
    const auto &raw = texture.raw[level];
    const UINT64 bytes = static_cast<UINT64>(decode_pitch(raw.width)) * 4u * raw.height;
    auto readback = buffer(s, bytes, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
    begin(s);
    decode_level(s, texture, static_cast<UINT>(level), 0);
    scratch_state(s, 0, D3D12_RESOURCE_STATE_COPY_SOURCE | D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    s.list->CopyBufferRegion(readback.Get(), 0, s.decode_scratch[0].Get(), 0, bytes);
    check(s.list->Close(), "close decode test list");
    s.recording = false;
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, lists);
    ++s.executions;
    wait(s);
    void *mapped{};
    D3D12_RANGE range{0, static_cast<SIZE_T>(bytes)};
    check(readback->Map(0, &range, &mapped), "map decode test");
    result.resize(static_cast<std::size_t>(raw.width) * raw.height);
    for (UINT y = 0; y < raw.height; ++y)
        std::memcpy(result.data() + static_cast<std::size_t>(y) * raw.width,
                    static_cast<const std::uint8_t *>(mapped) + static_cast<std::size_t>(y) * decode_pitch(raw.width) * 4u,
                    raw.width * 4u);
    D3D12_RANGE none{};
    readback->Unmap(0, &none);
#endif
    return result;
}
#if defined(_WIN32)
namespace {
// Reads the remaining race-only image enhancements.
void setup_post(State &s) {
    s.post = post_settings_from_environment();
    s.racing = emulation_racing;
    if (const char *mode = std::getenv("PSPRECOMP_MOTORSTORM_WIDESCREEN"))
        s.widescreen = std::string_view(mode) == "auto";
    log_line("GE", std::string("widescreen: ") + (s.widescreen ? "auto (Hor+, centred HUD)" : "psp"));
    const auto &p = s.post;
    std::ostringstream out;
    out << "enhancements (racing only): " << (p.active() ? "on" : "off");
    if (p.active()) {
        out << " color_depth=" << (p.extended_color ? 32 : 16)
            << " color_correction=" << (p.color_correction ? "on" : "off")
            << " sharpening=" << (p.sharpening ? std::to_string(p.sharpening_strength) : std::string("off"));
    }
    log_line("GE", out.str());
}
} // namespace
#endif
void gpu_set_racing(bool racing) noexcept {
    emulation_racing = racing;
#if defined(_WIN32)
    if (state)
        state->racing = racing;
#else
    (void)racing;
#endif
}
bool gpu_requested() noexcept {
    const char *backend = std::getenv("PSPRECOMP_MOTORSTORM_RENDERER");
    return backend && (std::strcmp(backend, "d3d12") == 0 || std::strcmp(backend, "auto") == 0);
}
bool gpu_active() noexcept { return report.active; }
bool gpu_initialize() {
    if (report.active)
        return true;
    if (attempted || !gpu_requested())
        return false;
    attempted = true;
#if defined(_WIN32)
    try {
        auto native = std::make_unique<State>();
        auto &s = *native;
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_RESOLUTION")) {
            const std::string choice = value;
            if (choice == "1" || choice == "1x" || choice == "480x272")
                s.output_scale = 1;
            else if (choice == "2" || choice == "2x" || choice == "960x544")
                s.output_scale = 2;
            else if (choice == "3" || choice == "3x" || choice == "1440x816")
                s.output_scale = 3;
            else if (choice == "4" || choice == "4x" || choice == "1920x1088")
                s.output_scale = 4;
            else
                throw std::runtime_error("MotorStorm resolution must be 1x, 2x, 3x or 4x");
        }
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_AA")) {
            const std::string choice = value;
            if (choice == "none" || choice == "None")
                s.antialiasing = 0;
            else if (choice == "fxaa" || choice == "FXAA")
                s.antialiasing = 1;
            else if (choice == "ssaa4x" || choice == "SSAA4x")
                s.antialiasing = 2;
            else if (choice == "ssaa2x" || choice == "SSAA2x")
                s.antialiasing = 3;
            else
                throw std::runtime_error("MotorStorm antialiasing must be none, fxaa, ssaa2x or ssaa4x");
        }
        // SSAA4x: 2x2 samples per output pixel. SSAA2x: 1.5x per axis (about
        // 2.25 samples), area-weighted on output: the middle ground in cost.
        s.raster_half = s.antialiasing == 2 ? s.output_scale * 4
                      : s.antialiasing == 3 ? s.output_scale * 3
                                            : s.output_scale * 2;
        if (const char *filter = std::getenv("PSPRECOMP_MOTORSTORM_TEXTURE_FILTER"))
            s.enhanced_filtering = std::string_view(filter) == "enhanced";
        report.resolution_scale = s.output_scale;
        report.raster_half = s.raster_half;
        report.antialiasing = s.antialiasing;
        UINT flags = 0;
        if (std::getenv("PSPRECOMP_MOTORSTORM_D3D12_DEBUG")) {
            // The layer ships with the optional Windows Graphics Tools; without
            // them (DXGI_ERROR_SDK_COMPONENT_MISSING) run unvalidated instead of stopping.
            ComPtr<ID3D12Debug> debug;
            const HRESULT hr = D3D12GetDebugInterface(IID_PPV_ARGS(&debug));
            if (SUCCEEDED(hr)) {
                debug->EnableDebugLayer();
                flags = DXGI_CREATE_FACTORY_DEBUG;
            } else {
                std::ostringstream message;
                message << "d3d12_debug unavailable (0x" << std::hex << static_cast<unsigned long>(hr)
                        << "); install Windows Graphics Tools for validation. Continuing without it.";
                log_line("GE", message.str());
            }
        }
        check(CreateDXGIFactory2(flags, IID_PPV_ARGS(&s.factory)), "create DXGI factory");
        for (UINT i = 0;; ++i) {
            ComPtr<IDXGIAdapter1> adapter;
            if (s.factory->EnumAdapterByGpuPreference(i, DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE,
                                                      IID_PPV_ARGS(&adapter)) == DXGI_ERROR_NOT_FOUND)
                break;
            DXGI_ADAPTER_DESC1 desc{};
            adapter->GetDesc1(&desc);
            if (desc.Flags & DXGI_ADAPTER_FLAG_SOFTWARE)
                continue;
            if (FAILED(D3D12CreateDevice(adapter.Get(), D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&s.device))))
                continue;
            D3D12_FEATURE_DATA_D3D12_OPTIONS options{};
            if (FAILED(
                    s.device->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS, &options, sizeof(options))) ||
                !options.ROVsSupported) {
                s.device.Reset();
                continue;
            }
            char name[256];
            WideCharToMultiByte(CP_UTF8, 0, desc.Description, -1, name, sizeof(name), nullptr, nullptr);
            report.adapter = name;
            break;
        }
        if (!s.device)
            throw std::runtime_error("No hardware D3D12 adapter with rasterizer "
                                     "ordered views is available");
        D3D12_COMMAND_QUEUE_DESC queue{};
        queue.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
        check(s.device->CreateCommandQueue(&queue, IID_PPV_ARGS(&s.queue)), "create queue");
        for (CommandSlot &slot : s.slots) {
            check(s.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT,
                                                   IID_PPV_ARGS(&slot.allocator)),
                  "create allocator");
            check(s.device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, slot.allocator.Get(),
                                              nullptr, IID_PPV_ARGS(&slot.list)),
                  "create list");
            check(slot.list->Close(), "close initial list");
            check(s.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT,
                                                   IID_PPV_ARGS(&slot.pre_allocator)),
                  "create vertex allocator");
            check(s.device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, slot.pre_allocator.Get(),
                                              nullptr, IID_PPV_ARGS(&slot.pre_list)),
                  "create vertex list");
            check(slot.pre_list->Close(), "close initial vertex list");
        }
        s.allocator = s.slots[0].allocator;
        s.list = s.slots[0].list;
        check(s.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&s.fence)), "create fence");
        s.event = CreateEventW(nullptr, FALSE, FALSE, nullptr);
        if (!s.event)
            throw std::runtime_error("Cannot create GPU fence event");
        D3D12_DESCRIPTOR_HEAP_DESC heap{};
        heap.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        heap.NumDescriptors = kDescriptors;
        heap.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
        check(s.device->CreateDescriptorHeap(&heap, IID_PPV_ARGS(&s.srv)), "create SRV heap");
        s.descriptor_size = s.device->GetDescriptorHandleIncrementSize(heap.Type);
        s.upload = buffer(s, kUploadBytes, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
        for (auto &scratch : s.decode_scratch)
            scratch = buffer(s, kDecodeScratchBytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
        D3D12_RANGE none{};
        check(s.upload->Map(0, &none, reinterpret_cast<void **>(&s.mapped)), "map upload arena");
        create_pipeline(s);
        setup_post(s);
        state = std::move(native);
        report.active = true;
        std::cerr << "[D3D12] hardware GE adapter=" << report.adapter
                  << " ROV=1 GPU_transform=1 output=" << s.output_scale * 480 << 'x' << s.output_scale * 272
                  << " raster=" << raster_extent(480, s.raster_half) << 'x' << raster_extent(272, s.raster_half)
                  << " AA=" << s.antialiasing << '\n';
        return true;
    } catch (const std::exception &error) {
        std::cerr << "[D3D12] initialization: " << error.what() << '\n';
        const char *backend = std::getenv("PSPRECOMP_MOTORSTORM_RENDERER");
        if (backend && std::strcmp(backend, "d3d12") == 0)
            throw;
        std::cerr << "[D3D12] auto backend falling back to software GE\n";
    }
#endif
    return false;
}
void gpu_shutdown(bool reset_report) noexcept {
#if defined(_WIN32)
    if (state) {
        try {
            wait(*state);
        } catch (...) {
        }
        state.reset();
    }
#endif
    if (reset_report)
        report = {};
    else
        report.active = false;
    attempted = false;
}
#if defined(_WIN32)
namespace {
// Uploads a VertexCS job and records its dispatch in the chunk's vertex
// pre-pass; returns the offset of the decoded vertices in vertex_arena (a
// vertex buffer by the time the chunk's draws run).
UINT64 process_vertices(State &s, psprecomp::GuestMemory &memory, const GpuVertexJob &job, UINT output_bytes) {
    constexpr UINT64 kVertexArenaBytes = 128ull * 1024 * 1024;
    if (!s.vertex_arena) {
        s.vertex_arena = buffer(s, kVertexArenaBytes, D3D12_HEAP_TYPE_DEFAULT,
                                D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, true);
        s.vertex_arena_state = D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER;
    }
    if (s.vertex_used + output_bytes > kVertexArenaBytes) {
        // Every earlier draw of this generation must finish before reuse.
        flush_chunk(s);
        wait(s);
        s.vertex_used = 0;
    }
    const UINT64 output = s.vertex_used;
    s.vertex_used = (s.vertex_used + output_bytes + 255u) & ~UINT64{255u};
    // One buffer: parameter block, raw vertex bytes at their guest alignment.
    std::vector<std::uint32_t> header = job.header;
    const UINT64 header_bytes = header.size() * 4u;
    const UINT64 vertex_at = header_bytes + (job.vertex_address & 3u);
    const UINT64 total = vertex_at + job.vertex_bytes;
    header[10] = static_cast<std::uint32_t>(vertex_at);  // vertex bytes (byte offset)
    header[15] = static_cast<std::uint32_t>(total);      // read bound (bytes)
    const auto offset = allocate(s, (total + 7u) & ~UINT64{7u}, 256);
    std::memcpy(s.mapped + offset, header.data(), header_bytes);
    std::span<std::uint8_t> raw(s.mapped + offset + vertex_at, job.vertex_bytes);
    memory.copy_out(job.vertex_address, raw);
    CommandSlot &chunk = s.slots[s.slot_index];
    auto *list = chunk.pre_list.Get();
    if (!s.pre_open) {
        check(chunk.pre_allocator->Reset(), "reset vertex allocator");
        check(list->Reset(chunk.pre_allocator.Get(), s.vertex_pipeline.Get()), "reset vertex list");
        list->SetComputeRootSignature(s.root.Get());
        D3D12_RESOURCE_BARRIER barrier{};
        barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Transition = {s.vertex_arena.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                              s.vertex_arena_state, D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
        list->ResourceBarrier(1, &barrier);
        s.vertex_arena_state = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
        s.pre_open = true;
    }
    list->SetComputeRootShaderResourceView(4, s.upload->GetGPUVirtualAddress() + offset);
    list->SetComputeRootUnorderedAccessView(6, s.vertex_arena->GetGPUVirtualAddress() + output);
    list->Dispatch((job.decode_count + 63u) / 64u, 1, 1);
    s.has_commands = true;
    return output;
}
} // namespace
#endif
void gpu_submit(psprecomp::GuestMemory &memory, const GpuDraw &draw, std::span<const GpuVertex> vertices,
                const GpuTexture *texture, const GpuVertexJob *job) {
#if defined(_WIN32)
    const UINT vertex_count = job ? job->output_count : static_cast<UINT>(vertices.size());
    if (!state || vertex_count == 0 || draw.framebuffer == 0 || draw.stride == 0 || draw.stride > 1024 ||
        draw.right <= draw.left || draw.bottom <= draw.top)
        return;
    auto &s = *state;
    const auto height = static_cast<UINT>(std::clamp(draw.bottom, 1, 1024));
    const auto bpp = draw.format == 3 ? 4u : 2u;
    if (!memory.contains(draw.framebuffer, static_cast<std::size_t>(draw.stride) * height * bpp))
        return;
    bool valid_depth =
        draw.depthbuffer && draw.depth_stride > 0 && draw.depth_stride <= 1024 &&
        memory.contains(draw.depthbuffer, static_cast<std::size_t>(draw.depth_stride) * height * 2);
    // Targets compare guest bytes on load; publish any deferred readback first.
    if (!s.recording && s.readback_fence != 0u) {
        PublishReason reason(0);
        publish_readbacks(s, memory);
    }
    // Keep enough arena space for the maximum texture chain and target reloads.
    if (s.recording && s.used > kUploadBytes - 20 * 1024 * 1024)
        gpu_sync(memory);
    begin(s);
    // Acquire depth first: alias handling may retire overlapping target objects.
    if (valid_depth)
        get_surface(s, memory, draw.depthbuffer, draw.depth_stride, height, 2);
    auto &color = get_surface(s, memory, draw.framebuffer, draw.stride, height, bpp, draw.format);
    // Widen display-sized VRAM targets; offscreen effects retain GE semantics.
    // The race framebuffer is 512x296 (its scissor is taller than the 272-row
    // picture), menus use 272 rows; both are the displayed picture.
    const bool display_target = (color.height == 272u || color.height == 296u) &&
                                (draw.stride == 480u || draw.stride == 512u) &&
                                color.address >= 0x04000000u && color.address < 0x04200000u;
    const auto dimensions = output_size.load(std::memory_order_relaxed);
    const float aspect = display_target && s.racing && s.widescreen
                             ? widescreen_scale(static_cast<UINT>(dimensions >> 32), static_cast<UINT>(dimensions))
                             : 1.0f;
    color.aspect_scale = aspect;
    bool full_screen = (draw.commands[0xD3] & 1u) != 0;
    if (!draw.hardware_transform && !full_screen && aspect > 1.0f &&
        (vertices.size() == 6 || (texture && texture->feedback_address))) {
        float left = 1e10f, right = -1e10f, top = 1e10f, bottom = -1e10f;
        for (const auto &v : vertices) {
            left = std::min(left, v.x); right = std::max(right, v.x);
            top = std::min(top, v.y); bottom = std::max(bottom, v.y);
        }
        // Full-frame overlays/feedback cover the widened scene too.
        full_screen = (vertices.size() == 6 || (texture && texture->feedback_address)) &&
                      left <= 0.0f && right >= 480.0f && top <= 0.0f && bottom >= 272.0f;
    }
    // The game copies one display buffer onto the other in 32-pixel strips, as
    // through-mode draws that sample the framebuffer. Those copy picture to
    // picture one to one: squeezing each strip toward the centre like HUD
    // artwork tore the widened view into seams.
    if (!draw.hardware_transform && texture && texture->feedback_address) {
        if (samples_display_picture(physical(texture->feedback_address), texture->feedback_stride))
            full_screen = true;
    }
    const bool widen = aspect > 1.0f && !full_screen;
    Surface *depth = &color;
    if (valid_depth) {
        depth = nullptr;
        for (const auto &candidate : s.surfaces)
            if (candidate->address == physical(draw.depthbuffer) && candidate->stride == draw.depth_stride &&
                candidate->bpp == 2 && candidate->height >= height) {
                depth = candidate.get();
                break;
            }
        // Color/depth byte aliases cannot be independently resident.
        if (!depth)
            throw std::runtime_error("MotorStorm D3D12 overlapping color/depth surfaces");
        load_surface(s, *depth, memory);
        color.depth_address = depth->address;
        color.depth_stride = depth->stride;
    }
    ID3D12Resource *feedback = nullptr;
    UINT descriptor = 0, replacement_descriptor = 0;
    UINT cb_offset = 0;
    UINT vertex_offset = 0;
    UINT vertex_bytes = 0;
    UINT index_offset = 0;
    {
        perf::Scope prepare_profile(perf::kGpuPrepare);
        if (job) {
            vertex_bytes = job->decode_count * static_cast<UINT>(sizeof(GpuVertex));
            vertex_offset = static_cast<UINT>(process_vertices(s, memory, *job, vertex_bytes));
            if (!job->indices.empty()) {
                index_offset = static_cast<UINT>(allocate(s, job->indices.size() * 4u, 4));
                std::memcpy(s.mapped + index_offset, job->indices.data(), job->indices.size() * 4u);
            }
        } else {
            vertex_bytes = static_cast<UINT>(vertices.size_bytes());
            vertex_offset = static_cast<UINT>(allocate(s, vertex_bytes, 4));
            std::memcpy(s.mapped + vertex_offset, vertices.data(), vertex_bytes);
        }
        Constants constants{draw.commands,
                            draw.model_to_clip,
                            draw.model_to_view_z,
                            draw.scale,
                            draw.center,
                            {raster_extent(draw.stride, s.raster_half), raster_extent(height, s.raster_half),
                             raster_extent(draw.stride, s.raster_half),
                             raster_extent(valid_depth ? draw.depth_stride : draw.stride, s.raster_half)},
                            {draw.format, draw.hardware_transform ? 1u : 0u,
                             (draw.depth_clip ? 1u : 0u) | (draw.primitive == 0 ? 2u : 0u),
                             valid_depth ? 1u : 0u}};
        // render.w: bit0 enhanced filtering, bit1 32-bit colour in 16-bit targets (racing only),
        // bit2 tag through-mode (HUD) pixels in the depth word (racing, display-sized VRAM targets).
        const bool extended_color = s.racing && s.post.active() && s.post.extended_color;
        bool tag_hud = valid_depth && hud_tag_enabled(s, color, draw.stride);
        if (tag_hud && !draw.hardware_transform) {
            // A through-mode draw that covers (nearly) the whole picture is a screen
            // overlay (tint, fade, vignette), not HUD artwork: tagging it would
            // exempt the entire frame from the grade.
            float left = 1e10f, right = -1e10f, top = 1e10f, bottom = -1e10f;
            for (const auto &v : vertices) {
                left = std::min(left, v.x); right = std::max(right, v.x);
                top = std::min(top, v.y); bottom = std::max(bottom, v.y);
            }
            if (right - left >= 440.0f && bottom - top >= 250.0f)
                tag_hud = false;
            // Likewise the per-frame copy of the display picture, drawn in strips.
            if (texture && texture->feedback_address &&
                samples_display_picture(physical(texture->feedback_address), texture->feedback_stride))
                tag_hud = false;
        }
        // Soft particles apply to camera-facing blended draws only: a billboard has
        // (nearly) one view depth over all its vertices, while a ground decal such as
        // a shadow or a tyre mark spans a range and must keep its edge on the ground.
        std::uint32_t soft_range = 0;
        if (s.racing && s.post.soft_particles_active() && valid_depth && draw.hardware_transform &&
            (draw.commands[0x21] & 1u) && (draw.commands[0x23] & 1u) && draw.commands[0xE7] != 0u &&
            (draw.commands[0xDE] & 7u) >= 4u && !vertices.empty()) {
            float lowest = 1e30f, highest = -1e30f;
            for (const auto &v : vertices) {
                const float depth = draw.model_to_view_z[0] * v.x + draw.model_to_view_z[1] * v.y +
                                    draw.model_to_view_z[2] * v.z + draw.model_to_view_z[3];
                lowest = std::min(lowest, depth);
                highest = std::max(highest, depth);
            }
            const float mean = 0.5f * (lowest + highest);
            if (highest - lowest <= 0.04f * std::max(std::fabs(mean), 1e-3f))
                soft_range = static_cast<std::uint32_t>(std::clamp(s.post.soft_particle_softness, 1.0f, 65535.0f));
        }
        constants.render = {s.raster_half, s.output_scale, s.antialiasing,
                            (s.enhanced_filtering ? 1u : 0u) | (extended_color ? 2u : 0u) | (tag_hud ? 4u : 0u) |
                                (soft_range ? 8u | (soft_range << 8) : 0u)};
        // wide.w: the game already renders the wider view, so 3D geometry is left alone.
        constants.wide = {1.0f / aspect, 240.0f, widen ? 1.0f : 0.0f,
                          widen && guest_widescreen.load(std::memory_order_relaxed) ? 1.0f : 0.0f};
        if (texture && texture->feedback_address) {
            feedback = feedback_snapshot(s, memory, *texture, constants.feedback);
            ++report.feedback_draws;
        }
        const State::Replacement *replacement = nullptr;
        if (texture && !feedback && texture->replacement_hash != 0u)
            replacement = get_replacement(s, texture->replacement_hash);
        if (replacement) {
            constants.replace = {1u, texture->replacement_width ? texture->replacement_width : texture->width,
                                 texture->replacement_rows,
                                 (replacement->no_alpha ? 1u : 0u) | (texture->opaque ? 2u : 0u)};  // see shade()
            replacement_descriptor = replacement->descriptor;
            ++report.replaced_draws;
        }
        if ((!replacement || !texture->opaque) && s.enhanced_filtering && texture && !feedback &&
            (draw.commands[0x1E] & 1u) && (draw.commands[0xC6] & 0x101u)) {
            // Atlas bounds affect only original bilinear-filtered textures.
            // Opaque replacements and nearest filtering do not consume it;
            // translucent replacements still need the original's alpha/mips.
            float lo_u = 3.0e38f, lo_v = 3.0e38f, hi_u = -3.0e38f, hi_v = -3.0e38f;
            if (job && job->uv_range_valid) {
                lo_u = job->uv_range[0]; lo_v = job->uv_range[1]; hi_u = job->uv_range[2]; hi_v = job->uv_range[3];
            }
            for (const auto &vertex : vertices) {
                const float q = vertex.q != 0.0f ? vertex.q : 1.0f, u = vertex.u / q, v = vertex.v / q;
                lo_u = std::min(lo_u, u); hi_u = std::max(hi_u, u);
                lo_v = std::min(lo_v, v); hi_v = std::max(hi_v, v);
            }
            if (std::isfinite(lo_u) && std::isfinite(hi_u) && std::isfinite(lo_v) && std::isfinite(hi_v))
                constants.uv_range = {lo_u, lo_v, hi_u, hi_v};
        }
        cb_offset = static_cast<UINT>(allocate(s, sizeof(constants), 256));
        std::memcpy(s.mapped + cb_offset, &constants, sizeof(constants));
        static const GpuTexture white{0, 1, 1, {{0xFFFFFFFFu}}};
        // The original stays bound: it supplies the game's runtime alpha.
        descriptor = get_texture(s, texture && !feedback ? *texture : white).descriptor;
        if (!replacement)
            replacement_descriptor = descriptor;
    }
    {
    perf::Scope record_profile(perf::kGpuRecord);
    ID3D12PipelineState *pipeline = draw.primitive == 0   ? s.point_pipeline.Get()
                                    : draw.primitive == 1 ? s.line_pipeline.Get()
                                                          : s.pipeline.Get();
    const auto topology = draw.primitive == 0   ? D3D_PRIMITIVE_TOPOLOGY_POINTLIST
                          : draw.primitive == 1 ? D3D_PRIMITIVE_TOPOLOGY_LINELIST
                          : job && job->strip   ? D3D_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP
                                                : D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
    s.list->SetPipelineState(pipeline);
    // Root signature and descriptor heaps are bound once per command list.
    s.list->SetGraphicsRootConstantBufferView(0, s.upload->GetGPUVirtualAddress() + cb_offset);
    s.list->SetGraphicsRootUnorderedAccessView(1, color.image->GetGPUVirtualAddress());
    s.list->SetGraphicsRootUnorderedAccessView(2, depth->image->GetGPUVirtualAddress());
    s.list->SetGraphicsRootDescriptorTable(3, srv_handle(s, descriptor));
    s.list->SetGraphicsRootDescriptorTable(7, srv_handle(s, replacement_descriptor));
    s.list->SetGraphicsRootShaderResourceView(5, feedback ? feedback->GetGPUVirtualAddress()
                                                          : s.upload->GetGPUVirtualAddress());
    D3D12_VIEWPORT viewport{
        0, 0, static_cast<float>(raster_extent(draw.stride, s.raster_half)),
        static_cast<float>(raster_extent(height, s.raster_half)), 0, 1};
    s.list->RSSetViewports(1, &viewport);
    const auto raster = [&](int native, int limit) {
        return static_cast<LONG>(raster_extent(static_cast<UINT>(std::clamp(native, 0, limit)), s.raster_half));
    };
    D3D12_RECT scissor{raster(draw.left, static_cast<int>(draw.stride)), raster(draw.top, static_cast<int>(height)),
                       raster(draw.right, static_cast<int>(draw.stride)),
                       raster(draw.bottom, static_cast<int>(height))};
    if (widen && (draw.left > 0 || draw.right < 480)) {
        scissor.left = static_cast<LONG>(std::floor(widescreen_hud_x(static_cast<float>(draw.left), aspect) * s.raster_half * 0.5f));
        scissor.right = static_cast<LONG>(std::ceil(widescreen_hud_x(static_cast<float>(draw.right), aspect) * s.raster_half * 0.5f));
    }
    s.list->RSSetScissorRects(1, &scissor);
    s.list->IASetPrimitiveTopology(topology);
    D3D12_VERTEX_BUFFER_VIEW view{(job ? s.vertex_arena->GetGPUVirtualAddress() : s.upload->GetGPUVirtualAddress()) +
                                      vertex_offset,
                                  static_cast<UINT>(vertex_bytes), sizeof(GpuVertex)};
    s.list->IASetVertexBuffers(0, 1, &view);
    if (job && !job->indices.empty()) {
        D3D12_INDEX_BUFFER_VIEW indices{s.upload->GetGPUVirtualAddress() + index_offset,
                                        static_cast<UINT>(job->indices.size() * 4u), DXGI_FORMAT_R32_UINT};
        s.list->IASetIndexBuffer(&indices);
        s.list->DrawIndexedInstanced(vertex_count, 1, 0, 0, 0);
    } else {
        s.list->DrawInstanced(vertex_count, 1, 0, 0);
    }
    // ROV order is guaranteed within a draw. UAV barriers order separate draws.
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_UAV;
    s.list->ResourceBarrier(1, &barrier);
    s.has_commands = true;
    }
    color.dirty = true;
    ++color.version;
    const bool depth_write = (draw.commands[0xD3] & 1)
                                 ? (draw.commands[0xD3] & 0x400) != 0
                                 : (draw.commands[0x23] & 1) && draw.commands[0xE7] == 0;
    if (valid_depth && depth_write) {
        depth->dirty = true;
        ++depth->version;
    }
    ++report.draws;
    report.vertices += vertex_count;
    if (job)
        ++report.gpu_vertex_draws;
    if (draw.hardware_transform)
        ++report.hardware_transform_draws;
    // Hand the finished chunk to the GPU so rasterization overlaps the next
    // chunk's vertex decode and command recording.
    if (++s.chunk_draws >= chunk_draws_limit())
        flush_chunk(s);
#endif
}
#if defined(_WIN32)
namespace {
// Record the readback of every surface drawn by this list and submit the list.
// The copies land in the readback buffers once the queue reaches them.
void finish_list(State &s) {
    for (const auto &surface : s.surfaces) {
        if (surface->dirty) {
            auto *resolved = resolve_surface(s, *surface);
            if (surface->raster_half == 2)
                transition(s, *surface, D3D12_RESOURCE_STATE_COPY_SOURCE);
            else
                native_transition(s, *surface, D3D12_RESOURCE_STATE_COPY_SOURCE);
            s.list->CopyBufferRegion(surface->readback.Get(), 0, resolved, 0, surface->native_bytes());
            if (surface->raster_half == 2)
                transition(s, *surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
            else
                native_transition(s, *surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
            surface->dirty = false;
            surface->readback_pending = true;
        }
        surface->loaded = false;
    }
    if (s.has_commands) {
        submit_chunk(s);
    } else {
        check(s.list->Close(), "close GE chunk");
        s.recording = false;
    }
    s.readback_fence = std::max(s.readback_fence, s.frame_fence);
    s.frame_fence = 0u;
    s.replacement_uploaded_in_list = 0u;
    s.replacement_count_in_list = 0u;
}
// Wait for submitted GE work and copy its pixels into guest memory. Bytes the
// CPU changed after the list ended keep the CPU's value, exactly as if the
// readback had been published at the list boundary and the CPU wrote after.
void publish_readbacks(State &s, psprecomp::GuestMemory &memory) {
    memory.arm_vram_hook(false);
    if (s.readback_fence == 0u)
        return;
    {
        perf::Scope fence_profile(perf::kGpuFence);
        ++report.publishes[publish_reason];
        if (s.fence->GetCompletedValue() < s.readback_fence) {
            const auto begin = perf::now_ns();
            wait_value(s, s.readback_fence);
            ++report.publish_waits[publish_reason];
            report.publish_wait_ns[publish_reason] += perf::now_ns() - begin;
        }
    }
    s.readback_fence = 0u;
    ++gpu_publish_epoch;
    perf::Scope readback_profile(perf::kGpuReadback);
    // Transfers recorded by a list still being recorded wait for its own publish.
    if (!s.pending_transfers.empty() && !s.recording) {
        void *mapped{};
        D3D12_RANGE range{0, static_cast<SIZE_T>(s.transfer_used)};
        check(s.transfer_ring->Map(0, &range, &mapped), "map GE transfer readback");
        std::vector<std::uint8_t> row;
        for (const auto &transfer : s.pending_transfers) {
            const auto *pixels = static_cast<const std::uint8_t *>(mapped) + transfer.offset;
            row.resize(static_cast<std::size_t>(transfer.width) * transfer.bpp);
            for (std::uint32_t y = 0; y < transfer.height; ++y, pixels += transfer.width * 4u) {
                if (transfer.bpp == 4u) {
                    std::memcpy(row.data(), pixels, row.size());
                } else {
                    for (std::uint32_t x = 0; x < transfer.width; ++x)
                        std::memcpy(row.data() + x * 2u, pixels + x * 4u, 2);
                }
                const auto address = transfer.destination +
                                     ((transfer.y + y) * transfer.destination_stride + transfer.x) * transfer.bpp;
                if (memory.contains(address, static_cast<std::uint32_t>(row.size())))
                    memory.copy_in(address, row);
            }
        }
        D3D12_RANGE none{};
        s.transfer_ring->Unmap(0, &none);
        s.pending_transfers.clear();
        s.transfer_used = 0u;
    }
    std::vector<std::uint8_t> current;
    for (const auto &surface : s.surfaces) {
        if (!surface->readback_pending)
            continue;
        void *mapped_pixels{};
        D3D12_RANGE range{0, static_cast<SIZE_T>(surface->native_bytes())};
        check(surface->readback->Map(0, &range, &mapped_pixels), "map GE readback");
        const auto *pixels = static_cast<const std::uint32_t *>(mapped_pixels);
        std::vector<std::uint8_t> published(static_cast<std::size_t>(surface->guest_bytes()));
        if (surface->bpp == 4) {
            std::memcpy(published.data(), pixels, published.size());
        } else {
            for (UINT64 i = 0; i < surface->native_bytes() / 4; ++i) {
                const auto value = static_cast<std::uint16_t>(pixels[i]);
                std::memcpy(published.data() + i * 2, &value, 2);
            }
        }
        D3D12_RANGE none{};
        surface->readback->Unmap(0, &none);
        current.resize(published.size());
        memory.copy_out(surface->address, current);
        if (current == surface->guest_shadow || current.size() != surface->guest_shadow.size()) {
            memory.copy_in(surface->address, published);
        } else {
            for (std::size_t i = 0; i < current.size(); ++i)
                if (current[i] == surface->guest_shadow[i])
                    current[i] = published[i];
            memory.copy_in(surface->address, current);
        }
        surface->guest_shadow = std::move(published);
        surface->readback_pending = false;
    }
    // A publish can run while a list is recording (VRAM hook); that list may
    // still reference transient resources and cached textures.
    if (s.recording)
        return;
    s.transient.clear();
    if (s.replacement_bytes > textures::budget_bytes()) {
        std::vector<std::pair<UINT64, std::uint64_t>> oldest;
        for (const auto &[hash, replacement] : s.replacements)
            if (replacement.image)
                oldest.emplace_back(replacement.last_used, hash);
        std::sort(oldest.begin(), oldest.end());
        for (const auto &[last_used, hash] : oldest) {
            if (s.replacement_bytes <= textures::budget_bytes() / 10u * 9u)
                break;
            const auto found = s.replacements.find(hash);
            s.replacement_bytes -= found->second.bytes;
            s.free_descriptors.push_back(found->second.descriptor);
            s.replacements.erase(found);  // reloaded from disk if drawn again
            ++report.replacements_evicted;
        }
    }
    // Retire caches only after the fence, never while recorded draws use them.
    if (s.textures.size() > 4096 || s.texture_bytes > 256ull * 1024 * 1024) {
        std::vector<std::pair<UINT64, UINT64>> oldest;
        for (const auto &[key, texture] : s.textures)
            oldest.emplace_back(texture.last_used, key);
        std::sort(oldest.begin(), oldest.end());
        for (const auto &[epoch, key] : oldest) {
            if (s.texture_bytes <= 128ull * 1024 * 1024 && s.textures.size() <= 2048)
                break;
            const auto found = s.textures.find(key);
            s.texture_bytes -= found->second.bytes;
            s.free_descriptors.push_back(found->second.descriptor);
            s.textures.erase(found);
        }
    }
}
} // namespace
#endif
void gpu_sync(psprecomp::GuestMemory &memory) {
#if defined(_WIN32)
    if (!state)
        return;
    auto &s = *state;
    if (!s.recording && s.readback_fence == 0u)
        return;
    perf::Scope sync_profile(perf::kGpuSync);
    if (s.recording)
        finish_list(s);
    PublishReason reason(1);
    publish_readbacks(s, memory);
#endif
}
void gpu_end_list(psprecomp::GuestMemory &memory) {
#if defined(_WIN32)
    if (!deferred_readback) {
        gpu_sync(memory);
        return;
    }
    if (!state || !state->recording)
        return;
    perf::Scope sync_profile(perf::kGpuSync);
    {
        PublishReason reason(2);
        publish_readbacks(*state, memory);
    }
    finish_list(*state);
    // The game's CPU code reads and writes the framebuffer between lists.
    // Publish the moment anything touches VRAM so it never sees stale pixels.
    memory.set_vram_access_hook([](void *context) {
        if (publish_guard)
            publish_guard();
        if (state) {
            PublishReason reason(3);
            publish_readbacks(*state, *static_cast<psprecomp::GuestMemory *>(context));
        }
    }, &memory);
    memory.arm_vram_hook(state->readback_fence != 0u);
#endif
}
void gpu_settle(psprecomp::GuestMemory &memory) {
#if defined(_WIN32)
    if (state) {
        PublishReason reason(4);
        publish_readbacks(*state, memory);
    }
#endif
}
void gpu_set_deferred_readback(bool enabled) noexcept { deferred_readback = enabled; }
void gpu_set_publish_guard(void (*guard)()) noexcept { publish_guard = guard; }
bool gpu_sync_texture(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t bytes) {
#if defined(_WIN32)
    if (!state)
        return false;
    address = physical(address);
    for (const auto &pending : state->pending_transfers)
        if (address < static_cast<UINT64>(pending.start()) + pending.bytes() &&
            pending.start() < static_cast<UINT64>(address) + bytes) {
            ++report.feedback_syncs;
            gpu_sync(memory);
            return true;
        }
    for (const auto &target : state->surfaces)
        if (target->dirty && address < static_cast<UINT64>(target->address) + target->guest_bytes() &&
            target->address < static_cast<UINT64>(address) + bytes) {
            ++report.feedback_syncs;
            gpu_sync(memory);
            return true;
        }
#endif
    return false;
}
bool gpu_transfer_from_target(std::uint32_t source, std::uint32_t source_stride, std::uint32_t source_x,
                              std::uint32_t source_y, std::uint32_t destination, std::uint32_t destination_stride,
                              std::uint32_t destination_x, std::uint32_t destination_y, std::uint32_t width,
                              std::uint32_t height, std::uint32_t bpp) {
#if defined(_WIN32)
    if (!state || !state->recording)
        return false;
    auto &s = *state;
    source = physical(source);
    destination = physical(destination);
    const UINT64 start = source + static_cast<UINT64>(source_y * source_stride + source_x) * bpp;
    const UINT64 end = start + static_cast<UINT64>((height - 1u) * source_stride + width) * bpp;
    Surface *target = nullptr;
    for (const auto &surface : s.surfaces)
        if (surface->dirty && surface->stride == source_stride && surface->bpp == bpp &&
            start >= surface->address && end <= surface->address + surface->guest_bytes() &&
            (start - surface->address) % bpp == 0u) {
            target = surface.get();
            break;
        }
    const UINT64 bytes = static_cast<UINT64>(width) * height * 4u;
    if (!target || s.transfer_used + bytes > State::kTransferRingBytes)
        return false;
    // The destination must not be a target, and the source must not be an
    // earlier transfer's destination that is still unpublished.
    const State::PendingTransfer transfer{s.transfer_used, destination, destination_stride, destination_x,
                                          destination_y, width, height, bpp};
    for (const auto &surface : s.surfaces)
        if (transfer.start() < static_cast<UINT64>(surface->address) + surface->guest_bytes() &&
            surface->address < static_cast<UINT64>(transfer.start()) + transfer.bytes())
            return false;
    for (const auto &pending : s.pending_transfers)
        if (start < static_cast<UINT64>(pending.start()) + pending.bytes() && pending.start() < end)
            return false;
    if (!s.transfer_ring)
        s.transfer_ring = buffer(s, State::kTransferRingBytes, D3D12_HEAP_TYPE_READBACK,
                                 D3D12_RESOURCE_STATE_COPY_DEST);
    auto *resolved = resolve_surface(s, *target);
    if (target->raster_half == 2)
        transition(s, *target, D3D12_RESOURCE_STATE_COPY_SOURCE);
    else
        native_transition(s, *target, D3D12_RESOURCE_STATE_COPY_SOURCE);
    const UINT64 first_pixel = (start - target->address) / bpp;
    for (std::uint32_t y = 0; y < height; ++y)
        s.list->CopyBufferRegion(s.transfer_ring.Get(), s.transfer_used + static_cast<UINT64>(y) * width * 4u,
                                 resolved, (first_pixel + static_cast<UINT64>(y) * source_stride) * 4u,
                                 static_cast<UINT64>(width) * 4u);
    if (target->raster_half == 2)
        transition(s, *target, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    else
        native_transition(s, *target, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    s.has_commands = true;
    s.pending_transfers.push_back(transfer);
    s.transfer_used += (bytes + 255u) & ~UINT64{255u};
    return true;
#else
    return false;
#endif
}
bool gpu_source_in_target(std::uint32_t address, std::uint32_t bytes, bool palette,
                          std::uint64_t &version) noexcept {
#if defined(_WIN32)
    if (!state || !state->recording || bytes == 0u || (palette && bytes % 4u != 0u))
        return false;
    const auto start = physical(address);
    for (const auto &pending : state->pending_transfers)
        if (start < static_cast<UINT64>(pending.start()) + pending.bytes() && pending.start() < start + bytes)
            return false;
    Surface *target = drawn_target(*state, address, bytes, palette);
    if (!target)
        return false;
    version = (static_cast<std::uint64_t>(target->address) << 32) ^ target->version;
    return true;
#else
    (void)address; (void)bytes; (void)palette; (void)version;
    return false;
#endif
}
bool gpu_overlay_targets(std::uint32_t address, std::uint32_t bytes, std::uint64_t &version) noexcept {
#if defined(_WIN32)
    if (!state || !state->recording || bytes == 0u)
        return false;
    const UINT64 begin = physical(address), end = begin + bytes;
    for (const auto &pending : state->pending_transfers)
        if (begin < static_cast<UINT64>(pending.start()) + pending.bytes() && pending.start() < end)
            return false;
    bool any = false;
    version = 0u;
    for (const auto &surface : state->surfaces) {
        if (!surface->dirty || begin >= surface->address + surface->guest_bytes() || surface->address >= end)
            continue;
        if (surface->bpp != 4u)
            return false;
        any = true;
        version = version * 1099511628211ull ^ ((static_cast<std::uint64_t>(surface->address) << 32) ^ surface->version);
    }
    return any;
#else
    (void)address; (void)bytes; (void)version;
    return false;
#endif
}
bool gpu_touches_surface(std::uint32_t address, std::uint32_t bytes) noexcept {
#if defined(_WIN32)
    if (!state)
        return false;
    address = physical(address);
    for (const auto &target : state->surfaces)
        if (address < static_cast<UINT64>(target->address) + target->guest_bytes() &&
            target->address < static_cast<UINT64>(address) + bytes)
            return true;
    for (const auto &pending : state->pending_transfers)
        if (address < static_cast<UINT64>(pending.start()) + pending.bytes() &&
            pending.start() < static_cast<UINT64>(address) + bytes)
            return true;
#endif
    return false;
}
void gpu_note_software_draw() noexcept { ++report.software_draws; }
bool gpu_feedback_available(std::uint32_t address, std::uint32_t stride, std::uint32_t format) noexcept {
#if defined(_WIN32)
    if (!state)
        return false;
    address = physical(address);
    const auto bpp = format == 3 ? 4u : 2u;
    for (const auto &target : state->surfaces)
        if (target->loaded && target->stride == stride && target->bpp == bpp && address >= target->address &&
            address < static_cast<UINT64>(target->address) + target->guest_bytes())
            return true;
#endif
    return false;
}
GpuReport gpu_report() { return report; }
std::uint64_t gpu_memory_epoch() noexcept { return gpu_publish_epoch; }
GpuImage gpu_capture(psprecomp::GuestMemory &memory, std::uint32_t framebuffer, std::uint32_t stride,
                     std::uint32_t format, std::uint32_t width, std::uint32_t height) {
    GpuImage result;
#if defined(_WIN32)
    if (!state || state->recording || !width || !height)
        return result;
    auto &s = *state;
    publish_readbacks(s, memory);
    Surface *color = nullptr;
    for (const auto &target : s.surfaces)
        if (target->address == physical(framebuffer) && target->stride == stride &&
            target->bpp == (format == 3 ? 4u : 2u) && target->height >= height) {
            color = target.get();
            break;
        }
    if (!color)
        return result;
    result.width = width * s.output_scale;
    result.height = height * s.output_scale;
    const UINT64 bytes = static_cast<UINT64>(result.width) * result.height * 4;
    auto output = buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    auto readback = buffer(s, bytes, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
    begin(s);
    load_surface(s, *color, memory);
    transition(s, *color, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    Constants constants{};
    constants.surface = {width, height, raster_extent(stride, s.raster_half), 0};
    constants.mode[0] = format;
    constants.render = {s.raster_half, s.output_scale, s.antialiasing, 0};
    compute(s, s.capture_pipeline.Get(), constants, color->image->GetGPUVirtualAddress(),
            output->GetGPUVirtualAddress(), result.width, result.height);
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {output.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                          D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE};
    s.list->ResourceBarrier(1, &barrier);
    s.list->CopyBufferRegion(readback.Get(), 0, output.Get(), 0, bytes);
    transition(s, *color, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    check(s.list->Close(), "close capture list");
    s.recording = false;
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, lists);
    ++s.executions;
    wait(s);
    void *mapped{};
    D3D12_RANGE range{0, static_cast<SIZE_T>(bytes)};
    check(readback->Map(0, &range, &mapped), "map output capture");
    result.rgba.resize(static_cast<std::size_t>(bytes));
    std::memcpy(result.rgba.data(), mapped, result.rgba.size());
    D3D12_RANGE none{};
    readback->Unmap(0, &none);
    color->loaded = false;
#endif
    return result;
}
#if defined(_WIN32)
namespace {
void create_present_queue(State &s, UINT width, UINT height) {
    if (s.present_queue)
        return;
    D3D12_COMMAND_QUEUE_DESC desc{};
    desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    check(s.device->CreateCommandQueue(&desc, IID_PPV_ARGS(&s.present_queue)), "create present queue");
    check(s.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&s.present_fence)), "create present fence");
    desc.Type = D3D12_COMMAND_LIST_TYPE_COMPUTE;
    check(s.device->CreateCommandQueue(&desc, IID_PPV_ARGS(&s.post_queue)), "create async post queue");
    check(s.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&s.post_fence)), "create async post fence");
    check(s.post_queue->GetTimestampFrequency(&s.post_frequency), "post timestamp frequency");
    s.present_event = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (!s.present_event)
        throw std::runtime_error("Cannot create present fence event");
    for (auto &frame : s.present_frames) {
        check(s.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&frame.allocator)),
              "create present allocator");
        check(s.device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, frame.allocator.Get(), nullptr,
                                          IID_PPV_ARGS(&frame.list)),
              "create present list");
        check(frame.list->Close(), "close present list");
        check(s.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_COMPUTE, IID_PPV_ARGS(&frame.post_allocator)),
              "create post allocator");
        check(s.device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_COMPUTE, frame.post_allocator.Get(), nullptr,
                                          IID_PPV_ARGS(&frame.post_list)), "create async post list");
        check(frame.post_list->Close(), "close async post list");
        if (perf::enabled()) {
            D3D12_QUERY_HEAP_DESC queries{};
            queries.Type = D3D12_QUERY_HEAP_TYPE_TIMESTAMP;
            queries.Count = 4;
            check(s.device->CreateQueryHeap(&queries, IID_PPV_ARGS(&frame.post_queries)), "create post timestamps");
            frame.post_timing = buffer(s, 4 * sizeof(UINT64), D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
        }
        frame.constants = buffer(s, kPresentConstantBytes, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
        check(frame.constants->Map(0, nullptr, &frame.mapped), "map present constants");
        // Allocate during initial menu presentation, not at the race boundary.
        if (s.post.active()) prepare_post_buffers(s, frame, width, height);
    }
}
// Wait until the present queue has finished everything submitted to it.
// Only the presenter thread (or the owner once it has stopped) calls this.
void drain_present_queue(State &s) {
    if (!s.present_queue)
        return;
    const UINT64 value = ++s.present_fence_value;
    check(s.present_queue->Signal(s.present_fence.Get(), value), "signal present fence");
    if (s.present_fence->GetCompletedValue() < value) {
        check(s.present_fence->SetEventOnCompletion(value, s.present_event), "arm present fence");
        WaitForSingleObject(s.present_event, 30000);
    }
}
void create_backbuffer_views(State &s) {
    for (UINT i = 0; i < State::kBackBuffers; ++i) {
        check(s.swapchain->GetBuffer(i, IID_PPV_ARGS(&s.backbuffers[i])), "get swapchain buffer");
        auto handle = s.rtv->GetCPUDescriptorHandleForHeapStart();
        handle.ptr += i * s.rtv_size;
        s.device->CreateRenderTargetView(s.backbuffers[i].Get(), nullptr, handle);
    }
}
void create_swapchain(State &s, HWND window, UINT frame_width, UINT frame_height) {
    RECT client{};
    GetClientRect(window, &client);
    const UINT w = std::max<LONG>(1, client.right), h = std::max<LONG>(1, client.bottom);
    if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_VSYNC"))
        s.vsync = std::strcmp(value, "0") != 0 && std::strcmp(value, "off") != 0;
    if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_FULLSCREEN_MODE"))
        s.exclusive_fullscreen = std::strcmp(value, "exclusive") == 0;
    if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_FULLSCREEN_REFRESH"))
        s.refresh_hz = static_cast<UINT>(std::strtoul(value, nullptr, 10));
    BOOL tearing = FALSE;
    s.tearing = SUCCEEDED(s.factory->CheckFeatureSupport(DXGI_FEATURE_PRESENT_ALLOW_TEARING, &tearing,
                                                          sizeof(tearing))) && tearing;
    s.swap_flags = DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT |
                   (s.tearing ? DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING : 0u);
    DXGI_SWAP_CHAIN_DESC1 desc{};
    desc.Width = w;
    desc.Height = h;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    desc.BufferCount = State::kBackBuffers;
    desc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
    desc.Flags = s.swap_flags;
    ComPtr<IDXGISwapChain1> chain;
    create_present_queue(s, frame_width, frame_height);
    check(s.factory->CreateSwapChainForHwnd(s.present_queue.Get(), window, &desc, nullptr, nullptr, &chain),
          "create swapchain");
    check(chain.As(&s.swapchain), "query swapchain");
    // Two queued frames; the presenter waits for room on its own thread.
    check(s.swapchain->SetMaximumFrameLatency(2), "set frame latency");
    s.frame_latency = s.swapchain->GetFrameLatencyWaitableObject();
    s.factory->MakeWindowAssociation(window, DXGI_MWA_NO_ALT_ENTER);
    D3D12_DESCRIPTOR_HEAP_DESC heap{};
    heap.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    heap.NumDescriptors = State::kBackBuffers;
    check(s.device->CreateDescriptorHeap(&heap, IID_PPV_ARGS(&s.rtv)), "create RTV heap");
    s.rtv_size = s.device->GetDescriptorHandleIncrementSize(heap.Type);
    create_backbuffer_views(s);
    s.window = window;
    s.present_width = w;
    s.present_height = h;
    s.latency_token = false;
    log_line("GE", std::string("presentation: vsync=") + (s.vsync ? "on" : "off") +
                       " tearing=" + (s.tearing ? "supported" : "unsupported") +
                       " fullscreen_mode=" + (s.exclusive_fullscreen ? "exclusive" : "borderless"));
}
// True when the window covers its whole monitor (borderless fullscreen).
bool covers_monitor(HWND window) {
    RECT rect{};
    if (!GetWindowRect(window, &rect))
        return false;
    MONITORINFO info{sizeof(info)};
    if (!GetMonitorInfoW(MonitorFromWindow(window, MONITOR_DEFAULTTONEAREST), &info))
        return false;
    return rect.left <= info.rcMonitor.left && rect.top <= info.rcMonitor.top &&
           rect.right >= info.rcMonitor.right && rect.bottom >= info.rcMonitor.bottom;
}
// Presenter thread: follows the window size and exclusive fullscreen.
void update_present_target(State &s) {
    bool resize = false;
    if (s.exclusive_fullscreen) {
        BOOL active = FALSE;
        s.swapchain->GetFullscreenState(&active, nullptr);
        // The window thread marks fullscreen with a caption-less popup style;
        // F11 / Alt+Enter restore the caption.
        const bool borderless = (GetWindowLongPtrW(s.window, GWL_STYLE) & WS_CAPTION) == 0;
        const bool focused = GetForegroundWindow() == s.window;
        const bool want = !s.exclusive_failed && borderless && focused && covers_monitor(s.window);
        // DXGI leaves exclusive mode by itself (focus loss, another app taking
        // the display); flip-model buffers must then be resized before Present.
        if (s.exclusive_active && !active) {
            s.exclusive_active = false;
            resize = true;
            log_line("GE", "exclusive fullscreen lost");
        }
        // While exclusive, DXGI owns the display mode; leave it when the
        // window loses focus or the user toggles back to a window.
        const bool leave = active && (!focused || !borderless);
        if (!active && want) {
            if (s.refresh_hz) {
                ComPtr<IDXGIOutput> output;
                if (SUCCEEDED(s.swapchain->GetContainingOutput(&output))) {
                    MONITORINFO info{sizeof(info)};
                    GetMonitorInfoW(MonitorFromWindow(s.window, MONITOR_DEFAULTTONEAREST), &info);
                    DXGI_MODE_DESC wanted{};
                    wanted.Width = static_cast<UINT>(info.rcMonitor.right - info.rcMonitor.left);
                    wanted.Height = static_cast<UINT>(info.rcMonitor.bottom - info.rcMonitor.top);
                    wanted.RefreshRate = {s.refresh_hz, 1};
                    wanted.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
                    DXGI_MODE_DESC mode{};
                    if (SUCCEEDED(output->FindClosestMatchingMode(&wanted, &mode, nullptr)))
                        s.swapchain->ResizeTarget(&mode);
                }
            }
            const HRESULT hr = s.swapchain->SetFullscreenState(TRUE, nullptr);
            if (FAILED(hr)) {
                s.exclusive_failed = true;  // e.g. not available on this output: stay borderless
                log_line("GE", "exclusive fullscreen unavailable; using borderless");
            } else {
                s.exclusive_active = true;
                resize = true;  // flip model: buffers must be resized after the switch
                log_line("GE", "exclusive fullscreen enabled");
            }
        } else if (leave) {
            s.swapchain->SetFullscreenState(FALSE, nullptr);
            s.exclusive_active = false;
            resize = true;
            log_line("GE", "exclusive fullscreen left");
        }
    }
    RECT client{};
    GetClientRect(s.window, &client);
    const UINT w = std::max<LONG>(1, client.right), h = std::max<LONG>(1, client.bottom);
    if (!resize && w == s.present_width && h == s.present_height)
        return;
    drain_present_queue(s);
    for (auto &back : s.backbuffers)
        back.Reset();
    check(s.swapchain->ResizeBuffers(State::kBackBuffers, w, h, DXGI_FORMAT_R8G8B8A8_UNORM, s.swap_flags),
          "resize swapchain");
    create_backbuffer_views(s);
    s.present_width = w;
    s.present_height = h;
}
// Post-processing settings in the present constants. commands[] is unused by
// presentation, so it carries them (see PostPS in motorstorm_gpu.hlsl).
enum PostSlot : UINT {
    kPostFlags, kPostFade, kPostSharpness, kPostExposure, kPostContrast, kPostSaturation, kPostBalance,
    kPostDebandThreshold = kPostBalance + 3, kPostDebandRange, kPostFrame
};
enum PostFlag : std::uint32_t { kPostCas = 2, kPostGrade = 4, kPostDither = 32, kPostHud = 64 };
// Effects fade in over half a second when a race starts and out when it ends.
float update_post_fade(State &s, bool racing) {
    const auto now = std::chrono::steady_clock::now();
    const float elapsed = s.post_clock.time_since_epoch().count() == 0
                              ? 0.0f
                              : std::min(0.1f, std::chrono::duration<float>(now - s.post_clock).count());
    s.post_clock = now;
    constexpr float kFadeSeconds = 0.5f;
    s.post_fade = std::clamp(s.post_fade + (racing ? elapsed : -elapsed) / kFadeSeconds, 0.0f, 1.0f);
    // The first race frame after a long idle still starts the fade.
    if (racing && s.post_fade == 0.0f)
        s.post_fade = 1.0f / 60.0f;
    return s.post_fade;
}
void set_post_constants(const PostSettings &p, Constants &constants, float fade,
                        UINT output_scale, UINT frame, bool hud_tags = false) {
    auto &c = constants.commands;
    const auto put = [&](UINT slot, float value) { c[slot] = std::bit_cast<std::uint32_t>(value); };
    c[kPostFlags] = (p.sharpening ? kPostCas : 0u) | (p.color_correction ? kPostGrade : 0u) |
                    kPostDither | (hud_tags ? kPostHud : 0u);
    put(kPostFade, fade);
    put(kPostSharpness, p.sharpening_strength);
    put(kPostExposure, std::exp2(p.exposure));
    put(kPostContrast, p.contrast);
    put(kPostSaturation, p.saturation);
    const auto balance = white_balance(p.temperature, p.tint);
    for (UINT i = 0; i < 3; ++i)
        put(kPostBalance + i, balance[i]);
    // Debanding: steps up to about 2.5/255 within 3 PSP pixels count as a
    // quantized gradient (16-bit colour steps after shading are this small).
    put(kPostDebandThreshold, 2.5f / 255.0f);
    put(kPostDebandRange, 3.0f * static_cast<float>(output_scale));
    c[kPostFrame] = frame;
}
// The depth buffer the displayed target was last drawn with, if still resident.
Surface *find_depth_surface(State &s, const Surface &color) {
    if (!color.depth_stride)
        return nullptr;
    for (const auto &candidate : s.surfaces)
        if (candidate->address == color.depth_address && candidate->stride == color.depth_stride &&
            candidate->bpp == 2)
            return candidate.get();
    return nullptr;
}
// Records DepthResolveCS on the open GE list: the depth words of `depth` (16-bit
// depth, HUD tag in bit 16) at output resolution into `target`, which the
// caller moves into and out of the unordered-access state.
void record_depth_resolve(State &s, Surface &depth, ID3D12Resource *target, UINT width, UINT height) {
    transition(s, depth, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    Constants constants{};
    constants.surface = {width, height, 0, raster_extent(depth.stride, s.raster_half)};
    constants.render = {s.raster_half, s.output_scale, s.antialiasing, 0};
    compute(s, s.depth_resolve_pipeline.Get(), constants, depth.image->GetGPUVirtualAddress(),
            target->GetGPUVirtualAddress(), width * s.output_scale, height * s.output_scale);
    transition(s, depth, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
}
void buffer_barrier(ID3D12GraphicsCommandList *list, ID3D12Resource *resource, D3D12_RESOURCE_STATES before,
                    D3D12_RESOURCE_STATES after) {
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {resource, D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES, before, after};
    list->ResourceBarrier(1, &barrier);
}
// Called only after the slot's present fence completed, so Map never waits.
void collect_post_timings(State &s, State::PresentFrame &frame) {
    if (!frame.timed_post) return;
    void *mapped{};
    D3D12_RANGE range{0, 4 * sizeof(UINT64)};
    check(frame.post_timing->Map(0, &range, &mapped), "read completed post timestamps");
    const auto *timestamps = static_cast<const UINT64 *>(mapped);
    UINT64 total = 0;
    for (UINT i = 0; i < 3; ++i) {
        const auto ns = static_cast<UINT64>((timestamps[i+1] - timestamps[i]) * (1.0e9 / s.post_frequency));
        report.post_gpu_ns[i] += ns;
        total += ns;
    }
    ++report.post_gpu_frames;
    report.post_gpu_max_ns = std::max(report.post_gpu_max_ns, total);
    D3D12_RANGE none{};
    frame.post_timing->Unmap(0, &none);
    frame.timed_post = false;
}
// Each snapshot owns its allocator and scratch. GPU-side fences connect GE,
// async compute and presentation; runtime post processing never waits on CPU.
UINT64 enqueue_post(State &s, State::PresentFrame &frame, D3D12_GPU_VIRTUAL_ADDRESS constants) {
    const UINT width = frame.width * s.output_scale, height = frame.height * s.output_scale;
    // Slot recycling guarantees any prior presentation has finished.
    prepare_post_buffers(s, frame, frame.width, frame.height);
    check(frame.post_allocator->Reset(), "reset async post allocator");
    check(frame.post_list->Reset(frame.post_allocator.Get(), s.post_resolve_pipeline.Get()), "reset async post list");
    auto *list = frame.post_list.Get();
    const auto timestamp = [&](UINT index) {
        if (frame.post_queries) list->EndQuery(frame.post_queries.Get(), D3D12_QUERY_TYPE_TIMESTAMP, index);
    };
    const bool deband = s.post.extended_color;
    list->SetComputeRootSignature(s.root.Get());
    list->SetComputeRootConstantBufferView(0, constants);
    if (frame.has_depth)
        list->SetComputeRootShaderResourceView(8, frame.depth_image->GetGPUVirtualAddress());
    list->SetPipelineState(s.post_resolve_pipeline.Get());
    list->SetComputeRootShaderResourceView(4, frame.image->GetGPUVirtualAddress());
    list->SetComputeRootUnorderedAccessView(6, frame.post_buffers[0]->GetGPUVirtualAddress());
    timestamp(0);
    list->Dispatch((width + 7) / 8, (height + 7) / 8, 1);
    buffer_barrier(list, frame.post_buffers[0].Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                   D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    timestamp(1);
    ID3D12Resource *source = frame.post_buffers[0].Get();
    if (deband) {
        list->SetPipelineState(s.deband_pipeline.Get());
        list->SetComputeRootShaderResourceView(4, source->GetGPUVirtualAddress());
        list->SetComputeRootUnorderedAccessView(6, frame.post_buffers[1]->GetGPUVirtualAddress());
        list->Dispatch((width + 7) / 8, (height + 7) / 8, 1);
        source = frame.post_buffers[1].Get();
        buffer_barrier(list, source, D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                       D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    }
    timestamp(2);
    buffer_barrier(list, frame.post_color.Get(), D3D12_RESOURCE_STATE_COMMON, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    list->SetPipelineState(s.post_color_pipeline.Get());
    list->SetComputeRootShaderResourceView(4, source->GetGPUVirtualAddress());
    list->SetComputeRootUnorderedAccessView(6, frame.post_color->GetGPUVirtualAddress());
    list->Dispatch((width + 7) / 8, (height + 7) / 8, 1);
    buffer_barrier(list, frame.post_color.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COMMON);
    timestamp(3);
    buffer_barrier(list, frame.post_buffers[0].Get(), D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE,
                   D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    if (deband)
        buffer_barrier(list, frame.post_buffers[1].Get(), D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE,
                       D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    if (frame.post_queries)
        list->ResolveQueryData(frame.post_queries.Get(), D3D12_QUERY_TYPE_TIMESTAMP, 0, 4, frame.post_timing.Get(), 0);
    check(list->Close(), "close async post list");
    check(s.post_queue->Wait(s.fence.Get(), frame.copy_fence), "async post waits for GE snapshot");
    ID3D12CommandList *lists[]{list};
    s.post_queue->ExecuteCommandLists(1, lists);
    const UINT64 value = ++s.post_fence_value;
    check(s.post_queue->Signal(s.post_fence.Get(), value), "signal async post fence");
    frame.timed_post = frame.post_queries != nullptr;
    return value;
}
void present_snapshot(State &s, State::PresentFrame &frame) {
    check(frame.allocator->Reset(), "reset present allocator");
    check(frame.list->Reset(frame.allocator.Get(), s.present_pipeline.Get()), "reset present list");
    auto *list = frame.list.Get();
    list->SetGraphicsRootSignature(s.root.Get());
    ID3D12DescriptorHeap *heaps[]{s.srv.Get()};
    list->SetDescriptorHeaps(1, heaps);
    Constants constants{};
    constants.surface = {frame.width, frame.height, raster_extent(frame.stride, s.raster_half), 0};
    constants.mode[0] = frame.format;
    constants.render = {s.raster_half, s.output_scale, s.antialiasing, 0};
    const float fade = s.post.active() ? update_post_fade(s, frame.racing) : 0.0f;
    const bool post = fade > 0.0f;
    if (post)
        set_post_constants(s.post, constants, fade, s.output_scale, ++s.post_frames, frame.has_depth);
    std::memcpy(frame.mapped, &constants, sizeof(constants));
    const auto constant_address = frame.constants->GetGPUVirtualAddress();
    const UINT64 post_done = post ? enqueue_post(s, frame, constant_address) : 0u;
    list->SetPipelineState(post ? s.post_present_pipeline.Get() : s.present_pipeline.Get());
    list->SetGraphicsRootConstantBufferView(0, constant_address);
    list->SetGraphicsRootShaderResourceView(4, post ? frame.post_color->GetGPUVirtualAddress()
                                                    : frame.image->GetGPUVirtualAddress());
    const UINT index = s.swapchain->GetCurrentBackBufferIndex();
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {s.backbuffers[index].Get(), 0, D3D12_RESOURCE_STATE_PRESENT,
                          D3D12_RESOURCE_STATE_RENDER_TARGET};
    list->ResourceBarrier(1, &barrier);
    auto rtv = s.rtv->GetCPUDescriptorHandleForHeapStart();
    rtv.ptr += index * s.rtv_size;
    list->OMSetRenderTargets(1, &rtv, FALSE, nullptr);
    constexpr float black[]{0, 0, 0, 1};
    list->ClearRenderTargetView(rtv, black, 0, nullptr);
    const auto fitted = fit_game_presentation(s.present_width, s.present_height, frame.width, frame.height,
                                             frame.aspect_scale);
    D3D12_VIEWPORT viewport{static_cast<float>(fitted.left), static_cast<float>(fitted.top),
        static_cast<float>(fitted.width), static_cast<float>(fitted.height), 0, 1};
    D3D12_RECT rect{static_cast<LONG>(fitted.left), static_cast<LONG>(fitted.top),
        static_cast<LONG>(fitted.left + fitted.width), static_cast<LONG>(fitted.top + fitted.height)};
    list->RSSetViewports(1, &viewport);
    list->RSSetScissorRects(1, &rect);
    list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    list->DrawInstanced(3, 1, 0, 0);
    std::swap(barrier.Transition.StateBefore, barrier.Transition.StateAfter);
    list->ResourceBarrier(1, &barrier);
    check(list->Close(), "close presentation list");
    // GPU-side wait for the snapshot copy on the GE queue.
    check(s.present_queue->Wait(post ? s.post_fence.Get() : s.fence.Get(), post ? post_done : frame.copy_fence),
          "present queue waits for completed image");
    ID3D12CommandList *present_lists[]{list};
    s.present_queue->ExecuteCommandLists(1, present_lists);
    const bool tear = !s.vsync && s.tearing && !s.exclusive_active;
    const HRESULT result = s.swapchain->Present(s.vsync ? 1u : 0u, tear ? DXGI_PRESENT_ALLOW_TEARING : 0u);
    // A fullscreen transition the presenter has not caught up with yet: drop
    // this frame and resize the buffers before the next one.
    if (result == DXGI_ERROR_INVALID_CALL) {
        s.present_width = s.present_height = 0;
        log_line("GE", "present rejected after a display-mode change; resizing the swapchain");
        return;
    }
    if (FAILED(result) && result != DXGI_ERROR_WAS_STILL_DRAWING)
        check(result, "present");
}
// Presents the newest published snapshot whenever the display has room.
// Emulation never waits for it: a newer snapshot replaces an unshown one.
void presenter_main(State &s) {
    std::unique_lock lock(s.present_mutex);
    for (;;) {
        s.present_cv.wait(lock, [&] { return s.ready_frame >= 0 || s.presenter_stop; });
        if (s.presenter_stop)
            break;
        lock.unlock();
        // The latency object is a semaphore: keep a token taken while no frame
        // was ready so the next frame does not wait for a present that never came.
        if (!s.latency_token && s.frame_latency)
            WaitForSingleObject(s.frame_latency, 100);
        s.latency_token = true;
        HRESULT failure = S_OK;
        try {
            update_present_target(s);
        } catch (const std::exception &error) {
            log_line("GE", std::string("presenter: ") + error.what());
            failure = E_FAIL;
        }
        lock.lock();
        const int index = s.ready_frame;
        if (index < 0 || FAILED(failure)) {
            if (FAILED(failure))
                s.present_result = failure;
            continue;
        }
        s.ready_frame = -1;
        auto &frame = s.present_frames[index];
        frame.state = State::FrameState::Presenting;
        lock.unlock();
        try {
            present_snapshot(s, frame);
            s.latency_token = false;
        } catch (const std::exception &error) {
            log_line("GE", std::string("presenter: ") + error.what());
            failure = E_FAIL;
        }
        UINT64 value = 0;
        try {
            value = ++s.present_fence_value;
            check(s.present_queue->Signal(s.present_fence.Get(), value), "signal present fence");
        } catch (const std::exception &error) {
            log_line("GE", std::string("presenter: ") + error.what());
            failure = E_FAIL;
        }
        lock.lock();
        frame.fence = value;
        frame.state = State::FrameState::Free;
        if (FAILED(failure))
            s.present_result = failure;
        ++s.displayed;
        s.present_cv.notify_all();
    }
    lock.unlock();
    if (s.swapchain && s.exclusive_active) {
        s.swapchain->SetFullscreenState(FALSE, nullptr);
        s.exclusive_active = false;
    }
}
void release_swapchain(State &s) {
    s.stop_presenter();
    drain_present_queue(s);
    for (auto &back : s.backbuffers)
        back.Reset();
    s.swapchain.Reset();
    s.rtv.Reset();
    if (s.frame_latency) {
        CloseHandle(s.frame_latency);
        s.frame_latency = nullptr;
    }
    for (auto &frame : s.present_frames)
        frame.state = State::FrameState::Free;
    s.ready_frame = -1;
}
} // namespace
#endif
bool gpu_widescreen_enabled() noexcept {
#if defined(_WIN32)
    return state && state->widescreen;
#else
    return false;
#endif
}
void gpu_output_size(std::uint32_t &width, std::uint32_t &height) noexcept {
    const auto size = output_size.load(std::memory_order_relaxed);
    width = static_cast<std::uint32_t>(size >> 32);
    height = static_cast<std::uint32_t>(size);
}
void gpu_set_output_size(std::uint32_t width, std::uint32_t height) noexcept {
    if (width && height)
        output_size.store((static_cast<std::uint64_t>(width) << 32) | height, std::memory_order_relaxed);
}
void gpu_set_guest_widescreen(bool active) noexcept { guest_widescreen.store(active, std::memory_order_relaxed); }
GpuImage gpu_debug_post(const GpuImage &input, const PostSettings &settings, float fade, bool reference,
                        const std::vector<std::uint32_t> *depth_words) {
    GpuImage result;
#if defined(_WIN32)
    if (!input.width || !input.height || input.rgba.size() != static_cast<std::size_t>(input.width) * input.height * 4)
        throw std::runtime_error("invalid post diagnostic image");
    if (depth_words && depth_words->size() != static_cast<std::size_t>(input.width) * input.height)
        throw std::runtime_error("post diagnostic depth words must be one per pixel");
    if (!settings.active()) return input;
    if (!gpu_initialize()) throw std::runtime_error("post diagnostics require the D3D12 renderer");
    auto &s = *state;
    if (s.recording) throw std::runtime_error("post diagnostic requires a completed GE list");
    const UINT width = input.width, height = input.height;
    const UINT64 bytes = input.rgba.size();
    auto source = buffer(s, bytes, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
    void *mapped{};
    check(source->Map(0, nullptr, &mapped), "map post diagnostic input");
    std::memcpy(mapped, input.rgba.data(), input.rgba.size());
    source->Unmap(0, nullptr);
    auto resolved = buffer(s, bytes * 2, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    auto debanded = buffer(s, bytes * 2, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    auto output = buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    auto readback = buffer(s, bytes, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
    ComPtr<ID3D12Resource> depth_buffer;
    if (depth_words) {
        depth_buffer = buffer(s, depth_words->size() * 4, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
        check(depth_buffer->Map(0, nullptr, &mapped), "map post diagnostic depth");
        std::memcpy(mapped, depth_words->data(), depth_words->size() * 4);
        depth_buffer->Unmap(0, nullptr);
    }
    begin(s);
    Constants constants{};
    constants.surface = {width, height, width, 0};
    constants.mode[0] = 3;
    constants.render = {2, 1, 0, 0};
    set_post_constants(settings, constants, std::clamp(fade, 0.0f, 1.0f), 1, 1, depth_words != nullptr);
    if (depth_buffer) {
        s.list->SetComputeRootSignature(s.root.Get());
        s.list->SetComputeRootShaderResourceView(8, depth_buffer->GetGPUVirtualAddress());
    }
    compute(s, s.post_resolve_pipeline.Get(), constants, source->GetGPUVirtualAddress(),
            resolved->GetGPUVirtualAddress(), width, height);
    buffer_barrier(s.list.Get(), resolved.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                   D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    ID3D12Resource *post_source = resolved.Get();
    if (settings.extended_color) {
        compute(s, s.deband_pipeline.Get(), constants, resolved->GetGPUVirtualAddress(),
                debanded->GetGPUVirtualAddress(), width, height);
        buffer_barrier(s.list.Get(), debanded.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                       D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
        post_source = debanded.Get();
    }
    ComPtr<ID3D12Resource> post_color;
    if (!reference) {
        post_color = buffer(s, bytes * 3, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
        compute(s, s.post_color_pipeline.Get(), constants, post_source->GetGPUVirtualAddress(),
                post_color->GetGPUVirtualAddress(), width, height);
        buffer_barrier(s.list.Get(), post_color.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                       D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
        post_source = post_color.Get();
    }
    compute(s, reference ? s.post_capture_pipeline.Get() : s.post_color_capture_pipeline.Get(), constants, post_source->GetGPUVirtualAddress(),
            output->GetGPUVirtualAddress(), width, height);
    buffer_barrier(s.list.Get(), output.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE);
    s.list->CopyBufferRegion(readback.Get(), 0, output.Get(), 0, bytes);
    check(s.list->Close(), "close post diagnostic list");
    s.recording = false;
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, lists);
    ++s.executions;
    wait(s);
    check(readback->Map(0, nullptr, &mapped), "map post diagnostic output");
    result = {width, height, std::vector<std::uint8_t>(input.rgba.size())};
    std::memcpy(result.rgba.data(), mapped, result.rgba.size());
    D3D12_RANGE none{};
    readback->Unmap(0, &none);
#endif
    return result;
}
std::vector<std::uint32_t> gpu_debug_depth_words(psprecomp::GuestMemory &memory, std::uint32_t framebuffer,
                                                 std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                                                 std::uint32_t height) {
    std::vector<std::uint32_t> words;
#if defined(_WIN32)
    if (!state || state->recording || !width || !height)
        return words;
    auto &s = *state;
    publish_readbacks(s, memory);
    Surface *color = nullptr;
    for (const auto &target : s.surfaces)
        if (target->address == physical(framebuffer) && target->stride == stride &&
            target->bpp == (format == 3 ? 4u : 2u) && target->height >= height) {
            color = target.get();
            break;
        }
    Surface *depth = color ? find_depth_surface(s, *color) : nullptr;
    if (!depth)
        return words;
    const UINT64 count = static_cast<UINT64>(width) * s.output_scale * height * s.output_scale;
    auto output = buffer(s, count * 4, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, true);
    auto readback = buffer(s, count * 4, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
    begin(s);
    record_depth_resolve(s, *depth, output.Get(), width, height);
    buffer_barrier(s.list.Get(), output.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE);
    s.list->CopyBufferRegion(readback.Get(), 0, output.Get(), 0, count * 4);
    check(s.list->Close(), "close depth diagnostic list");
    s.recording = false;
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, lists);
    ++s.executions;
    wait(s);
    void *mapped{};
    check(readback->Map(0, nullptr, &mapped), "map depth diagnostic output");
    words.resize(static_cast<std::size_t>(count));
    std::memcpy(words.data(), mapped, count * 4);
    D3D12_RANGE none{};
    readback->Unmap(0, &none);
#endif
    return words;
}
// Debug capture of the race post chain: PSPRECOMP_MOTORSTORM_POST_CAPTURE_DIR
// names a folder and PSPRECOMP_MOTORSTORM_POST_CAPTURE_AT lists race frame
// numbers (counted per presented race frame, default 300). Each listed frame
// is written twice, <n>_base.png (the resolved game image) and <n>_post.png
// (the same frame through the [enhancements] chain), so effects compare on
// identical frames. The chain is re-run synchronously with the shared shaders.
void capture_post_frame(State &s, psprecomp::GuestMemory &memory, std::uint32_t framebuffer, std::uint32_t stride,
                        std::uint32_t format, std::uint32_t width, std::uint32_t height, bool has_depth) {
    static const char *directory = std::getenv("PSPRECOMP_MOTORSTORM_POST_CAPTURE_DIR");
    if (!directory || !*directory)
        return;
    static const std::vector<unsigned> frames = [] {
        std::vector<unsigned> list;
        if (const char *text = std::getenv("PSPRECOMP_MOTORSTORM_POST_CAPTURE_AT"))
            for (const char *p = text; *p;) {
                char *end = nullptr;
                const unsigned long value = std::strtoul(p, &end, 10);
                if (end == p) break;
                list.push_back(static_cast<unsigned>(value));
                p = *end == ',' ? end + 1 : end;
            }
        if (list.empty())
            list.push_back(300u);
        return list;
    }();
    static unsigned race_frames = 0;
    if (std::find(frames.begin(), frames.end(), ++race_frames) == frames.end())
        return;
    auto base = gpu_capture(memory, framebuffer, stride, format, width, height);
    if (base.rgba.empty())
        return;
    std::vector<std::uint32_t> depth;
    if (has_depth)
        depth = gpu_debug_depth_words(memory, framebuffer, stride, format, width, height);
    const auto post = gpu_debug_post(base, s.post, 1.0f, false, depth.empty() ? nullptr : &depth);
    std::filesystem::create_directories(directory);
    const auto save = [&](const GpuImage &image, const char *suffix) {
        std::vector<std::uint32_t> pixels(image.rgba.size() / 4);
        std::memcpy(pixels.data(), image.rgba.data(), image.rgba.size());
        const auto file = std::filesystem::path(directory) / (std::to_string(race_frames) + "_" + suffix + ".png");
        if (!textures::save_png(file, image.width, image.height, pixels))
            log_line("GE", "post capture could not write " + file.string());
    };
    save(base, "base");
    save(post, "post");
    if (!depth.empty()) {
        // The depth snapshot as a picture: grey = depth word, red = HUD tag.
        GpuImage picture{base.width, base.height, std::vector<std::uint8_t>(depth.size() * 4)};
        std::uint32_t lowest = 65535u, highest = 0u;
        for (const auto word : depth) {
            lowest = std::min(lowest, word & 0xFFFFu);
            highest = std::max(highest, word & 0xFFFFu);
        }
        for (std::size_t i = 0; i < depth.size(); ++i) {
            const auto z = depth[i] & 0xFFFFu;
            const auto grey = static_cast<std::uint8_t>(z * 255u / 65535u);
            picture.rgba[i * 4] = (depth[i] >> 16) & 1u ? 255 : grey;
            picture.rgba[i * 4 + 1] = (depth[i] >> 16) & 1u ? 0 : grey;
            picture.rgba[i * 4 + 2] = (depth[i] >> 16) & 1u ? 0 : grey;
            picture.rgba[i * 4 + 3] = 255;
        }
        save(picture, "depth");
        std::size_t tagged = 0, zeros = 0;
        for (const auto word : depth) { tagged += (word >> 16) & 1u; zeros += (word & 0xFFFFu) == 0u; }
        std::string samples;
        for (const std::size_t i : {std::size_t{0}, depth.size() / 4, depth.size() / 2, depth.size() * 3 / 4})
            samples += " " + std::to_string(depth[i]);
        log_line("GE", "post capture depth range " + std::to_string(lowest) + " .. " + std::to_string(highest) +
                           " tagged=" + std::to_string(tagged) + " of " + std::to_string(depth.size()) +
                           " zero=" + std::to_string(zeros) + " samples:" + samples);
    }
    log_line("GE", "post capture: race frame " + std::to_string(race_frames) + " written to " + directory +
                       " (depth=" + std::to_string(has_depth) + ")");
}
bool gpu_present(psprecomp::GuestMemory &memory, void *window, std::uint32_t framebuffer,
                 std::uint32_t stride, std::uint32_t format, std::uint32_t width, std::uint32_t height) {
#if defined(_WIN32)
    if (!state || !window || !width || !height)
        return false;
    perf::Scope present_profile(perf::kPresent);
    auto &s = *state;
    Surface *color = nullptr;
    for (const auto &candidate : s.surfaces)
        if (candidate->address == physical(framebuffer) && candidate->stride == stride &&
            candidate->bpp == (format == 3 ? 4u : 2u) && candidate->height >= height) {
            color = candidate.get();
            break;
        }
    if (!color)
        return false;
    // Called after DrawSync. CPU-only movie transfers use the existing presenter
    // until the first GPU draw initializes this framebuffer.
    if (s.recording)
        return false;
    // A pending deferred readback means nothing has touched VRAM since the
    // list ended (any access publishes it through the VRAM hook), so the GPU
    // image is the current frame: present it without waiting.
    const bool current_on_gpu = color->readback_pending;
    if (s.swapchain && s.window != window)
        release_swapchain(s);
    if (!s.swapchain)
        create_swapchain(s, static_cast<HWND>(window), width, height);
    if (!s.presenter.joinable()) {
        s.presenter_stop = false;
        s.presenter = std::thread([&s] { presenter_main(s); });
    }
    // Pick a snapshot slot: one the display is done with, else the unshown
    // published one (superseded by this newer frame). Never wait for vblank.
    int index = -1;
    {
        std::lock_guard lock(s.present_mutex);
        check(s.present_result, "present");
        const UINT64 completed = s.present_fence->GetCompletedValue();
        for (UINT i = 0; i < State::kPresentFrames; ++i) {
            const auto &frame = s.present_frames[i];
            if (frame.state == State::FrameState::Free && completed >= frame.fence &&
                static_cast<int>(i) != s.ready_frame) {
                index = static_cast<int>(i);
                break;
            }
        }
        if (index < 0 && s.ready_frame >= 0) {
            index = s.ready_frame;
            s.ready_frame = -1;
            ++report.superseded_presents;
        }
        if (index < 0) {
            ++report.skipped_presents;  // every snapshot is still in flight to the display
            return true;
        }
        collect_post_timings(s, s.present_frames[index]);
        s.present_frames[index].state = State::FrameState::Writing;
    }
    State::PresentFrame &frame = s.present_frames[index];
    begin(s, kPresentSlot);
    // Movies and CPU writes may update a displayed buffer without any GE draw.
    // Reload the synchronized guest bytes before direct presentation.
    if (!current_on_gpu)
        load_surface(s, *color, memory);
    // Snapshot the displayed target on the GE queue. Buffers decay to COMMON
    // after each submission, so the present queue reads it without barriers.
    const UINT64 bytes = color->bytes();
    if (!frame.image || frame.bytes < bytes) {
        frame.image = buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COMMON);
        frame.bytes = bytes;
    }
    transition(s, *color, D3D12_RESOURCE_STATE_COPY_SOURCE);
    s.list->CopyBufferRegion(frame.image.Get(), 0, color->image.Get(), 0, bytes);
    transition(s, *color, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    // Depth words (with the HUD tags) for the post chain, taken now because the
    // next frame's depth clear follows this list on the same queue.
    frame.has_depth = false;
    if (s.racing && s.post.needs_depth())
        if (Surface *depth = find_depth_surface(s, *color)) {
            const UINT64 depth_bytes = static_cast<UINT64>(width) * s.output_scale * height * s.output_scale * 4;
            if (!frame.depth_image || frame.depth_bytes < depth_bytes) {
                frame.depth_image = buffer(s, depth_bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COMMON, true);
                frame.depth_bytes = depth_bytes;
            }
            buffer_barrier(s.list.Get(), frame.depth_image.Get(), D3D12_RESOURCE_STATE_COMMON,
                           D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
            record_depth_resolve(s, *depth, frame.depth_image.Get(), width, height);
            buffer_barrier(s.list.Get(), frame.depth_image.Get(), D3D12_RESOURCE_STATE_UNORDERED_ACCESS,
                           D3D12_RESOURCE_STATE_COMMON);
            frame.has_depth = true;
        }
    check(s.list->Close(), "close presentation copy");
    s.recording = false;
    ID3D12CommandList *copy_lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, copy_lists);
    ++s.executions;
    CommandSlot &slot = s.slots[s.slot_index];
    slot.fence_value = signal_fence(s);
    slot.pending = true;
    s.arena_fence = slot.fence_value;
    color->loaded = false;
    frame.copy_fence = slot.fence_value;
    frame.width = width;
    frame.height = height;
    frame.stride = stride;
    frame.format = format;
    frame.racing = s.racing;
    frame.aspect_scale = color->aspect_scale;
    {
        std::lock_guard lock(s.present_mutex);
        if (s.ready_frame >= 0 && s.ready_frame != index) {
            s.present_frames[s.ready_frame].state = State::FrameState::Free;
            ++report.superseded_presents;
        }
        s.ready_frame = index;
        frame.state = State::FrameState::Ready;
    }
    s.present_cv.notify_all();
    ++report.presents;
    if (s.racing && s.post.active())
        capture_post_frame(s, memory, framebuffer, stride, format, width, height, frame.has_depth);
    return true;
#else
    return false;
#endif
}
} // namespace motorstorm
