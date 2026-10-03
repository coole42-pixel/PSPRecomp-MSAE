#include "motorstorm_gpu.hpp"
#include "motorstorm_presentation.hpp"
#include "motorstorm_perf.hpp"

#include <algorithm>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <unordered_map>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <d3d12.h>
#include <d3dcompiler.h>
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
#if defined(_WIN32)
using Microsoft::WRL::ComPtr;
#include "motorstorm_gpu_shader.inc"
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
struct Surface {
    std::uint32_t address{}, stride{}, height{}, bpp{};
    std::uint32_t raster_scale{1}, format{4};
    ComPtr<ID3D12Resource> image, native, readback;
    D3D12_RESOURCE_STATES native_state{D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
    UINT64 native_version{~0ull};
    std::vector<std::uint8_t> guest_shadow;
    D3D12_RESOURCE_STATES state{D3D12_RESOURCE_STATE_COPY_DEST};
    bool loaded{}, dirty{}, readback_pending{};
    UINT64 version{}, snapshot_version{~0ull};
    UINT64 snapshot_bytes{};
    UINT64 snapshot_guest_epoch{~0ull};
    ComPtr<ID3D12Resource> snapshot;
    UINT64 bytes() const { return static_cast<UINT64>(stride) * height * 4 * raster_scale * raster_scale; }
    UINT64 native_bytes() const { return static_cast<UINT64>(stride) * height * 4; }
    UINT64 guest_bytes() const { return static_cast<UINT64>(stride) * height * bpp; }
};
struct Texture {
    ComPtr<ID3D12Resource> image;
    UINT descriptor{};
    UINT64 bytes{}, last_used{};
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
    UINT64 fence_value{};
    bool pending{};
};
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
    ComPtr<ID3D12PipelineState> pipeline, line_pipeline, point_pipeline, present_pipeline, expand_pipeline,
        resolve_pipeline, capture_pipeline;
    UINT raster_scale{1}, output_scale{1}, antialiasing{};
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
    std::unordered_map<std::uint64_t, Texture> textures;
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
    bool present_requested{}, present_busy{}, presenter_stop{};
    HRESULT present_result{S_OK};
    // Presentation runs on its own queue, which owns the swap chain. A flip
    // present waits on its queue for a free back buffer at vblank; on the GE
    // queue that wait stalled every GE chunk behind it and capped emulation at
    // the display refresh. The GE queue only copies the displayed target into
    // a snapshot ring; the present queue scales/filters from the snapshot.
    struct PresentFrame {
        ComPtr<ID3D12CommandAllocator> allocator;
        ComPtr<ID3D12GraphicsCommandList> list;
        ComPtr<ID3D12Resource> image, constants;
        UINT64 bytes{}, fence{};
        void *mapped{};
    };
    static constexpr UINT kPresentFrames = 3;
    ComPtr<ID3D12CommandQueue> present_queue;
    ComPtr<ID3D12Fence> present_fence;
    HANDLE present_event{};
    UINT64 present_fence_value{};
    PresentFrame present_frames[kPresentFrames];
    UINT present_frame{};
    void wait_presenter_idle() {
        std::unique_lock lock(present_mutex);
        present_cv.wait(lock, [&] { return !present_busy; });
    }
    void stop_presenter() {
        if (!presenter.joinable())
            return;
        {
            std::lock_guard lock(present_mutex);
            presenter_stop = true;
        }
        present_cv.notify_all();
        presenter.join();
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
struct Constants {
    std::array<std::uint32_t, 256> commands;
    std::array<float, 16> clip;
    std::array<float, 4> view_z, scale, center;
    std::array<std::uint32_t, 4> surface, mode;
    std::array<std::uint32_t, 4> feedback{};
    std::array<std::uint32_t, 4> render{1, 1, 0, 0};
};
static_assert(sizeof(Constants) == 1200);
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
    if (s.arena_fence == 0u || s.fence->GetCompletedValue() >= s.arena_fence)
        s.used = 0;
    s.frame_fence = 0;
    open_chunk(s, slot);
}
// Close and execute the recording chunk without waiting for it.
void submit_chunk(State &s) {
    check(s.list->Close(), "close GE chunk");
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, lists);
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
ComPtr<ID3DBlob> compile(const char *entry, const char *profile) {
    static std::unordered_map<std::string, ComPtr<ID3DBlob>> cache;
    if (auto found = cache.find(entry); found != cache.end())
        return found->second;
    ComPtr<ID3DBlob> code, errors;
    const auto hr =
        D3DCompile(kGeShader, sizeof(kGeShader) - 1, "motorstorm_ge.hlsl", nullptr, nullptr, entry, profile,
                   D3DCOMPILE_OPTIMIZATION_LEVEL3 | D3DCOMPILE_ENABLE_STRICTNESS, 0, &code, &errors);
    if (FAILED(hr) && errors)
        throw std::runtime_error(
            std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize()));
    check(hr, "compile shader");
    cache.emplace(entry, code);
    return code;
}
void create_pipeline(State &s) {
    D3D12_DESCRIPTOR_RANGE range{};
    range.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV;
    range.NumDescriptors = 1;
    range.BaseShaderRegister = 0;
    D3D12_ROOT_PARAMETER params[7]{};
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
    D3D12_ROOT_SIGNATURE_DESC desc{};
    desc.NumParameters = 7;
    desc.pParameters = params;
    D3D12_STATIC_SAMPLER_DESC samplers[4]{};
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
    desc.NumStaticSamplers = 4u;
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
}
void compute(State &s, ID3D12PipelineState *pipeline, const Constants &constants,
             D3D12_GPU_VIRTUAL_ADDRESS source, D3D12_GPU_VIRTUAL_ADDRESS destination, UINT width,
             UINT height) {
    const auto offset = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + offset, &constants, sizeof(constants));
    s.list->SetComputeRootSignature(s.root.Get());
    s.list->SetPipelineState(pipeline);
    s.list->SetComputeRootConstantBufferView(0, s.upload->GetGPUVirtualAddress() + offset);
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
    if (surface.raster_scale == 1)
        return surface.image.Get();
    if (surface.native_version != surface.version) {
        transition(s, surface, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
        native_transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
        Constants constants{};
        constants.surface = {surface.stride, surface.height, surface.stride * surface.raster_scale, 0};
        constants.mode[0] = surface.format;
        constants.render[0] = surface.raster_scale;
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
    if (surface.raster_scale == 1) {
        transition(s, surface, D3D12_RESOURCE_STATE_COPY_DEST);
        s.list->CopyBufferRegion(surface.image.Get(), 0, s.upload.Get(), offset, surface.bytes());
        transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    } else {
        transition(s, surface, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
        Constants constants{};
        constants.surface = {surface.stride, surface.height, surface.stride * surface.raster_scale, 0};
        constants.render[0] = surface.raster_scale;
        compute(s, s.expand_pipeline.Get(), constants, s.upload->GetGPUVirtualAddress() + offset,
                surface.image->GetGPUVirtualAddress(), surface.stride * surface.raster_scale,
                surface.height * surface.raster_scale);
    }
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
    target->raster_scale = s.raster_scale;
    target->format = format;
    target->image = buffer(s, target->bytes(), D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST, true);
    target->readback =
        buffer(s, target->native_bytes(), D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST);
    if (s.raster_scale > 1)
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
Texture &get_texture(State &s, const GpuTexture &texture) {
    if (auto found = s.textures.find(texture.key); found != s.textures.end()) {
        found->second.last_used = s.fence_value;
        return found->second;
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
    desc.MipLevels = static_cast<UINT16>(texture.levels.size());
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    check(s.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc,
                                            D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                            IID_PPV_ARGS(&target.image)),
          "create texture");
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
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition = {target.image.Get(), D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                          D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE};
    s.list->ResourceBarrier(1, &barrier);
    D3D12_SHADER_RESOURCE_VIEW_DESC view{};
    view.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    view.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    view.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    view.Texture2D.MipLevels = desc.MipLevels;
    auto handle = s.srv->GetCPUDescriptorHandleForHeapStart();
    handle.ptr += static_cast<SIZE_T>(target.descriptor) * s.descriptor_size;
    s.device->CreateShaderResourceView(target.image.Get(), &view, handle);
    ++report.texture_uploads;
    s.texture_bytes += target.bytes;
    return s.textures.emplace(texture.key, std::move(target)).first->second;
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
    const UINT scale = source ? source->raster_scale : 1;
    UINT64 bytes = std::max(source ? source->native_bytes() : 0ull,
                            (first + static_cast<UINT64>(texture.feedback_stride) * texture.height) * 4);
    if (scale > 1)
        bytes = ((bytes + texture.feedback_stride * 4 - 1) / (texture.feedback_stride * 4)) *
                texture.feedback_stride * 4 * scale * scale;
    auto initialize_tail = [&](ID3D12Resource *destination, UINT64 from) {
        if (from >= bytes)
            return;
        const auto native_from = from / (scale * scale), native_bytes = (bytes - from) / (scale * scale);
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
        if (scale == 1)
            s.list->CopyBufferRegion(destination, from, s.upload.Get(), offset, native_bytes);
        else {
            D3D12_RESOURCE_BARRIER barrier{};
            barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
            barrier.Transition = {destination, D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
                                  D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_UNORDERED_ACCESS};
            s.list->ResourceBarrier(1, &barrier);
            Constants constants{};
            constants.surface = {source->stride, static_cast<UINT>(native_bytes / 4 / source->stride),
                                 source->stride * scale, 0};
            constants.render[0] = scale;
            compute(s, s.expand_pipeline.Get(), constants, s.upload->GetGPUVirtualAddress() + offset,
                    destination->GetGPUVirtualAddress() + from, source->stride * scale,
                    constants.surface[1] * scale);
            std::swap(barrier.Transition.StateBefore, barrier.Transition.StateAfter);
            s.list->ResourceBarrier(1, &barrier);
        }
    };
    constants = {1, static_cast<UINT>(first), texture.feedback_stride, texture.feedback_format};
    if (scale > 1)
        constants = {2,
                     static_cast<UINT>((first / source->stride) * scale * source->stride * scale +
                                       (first % source->stride) * scale),
                     source->stride * scale, texture.feedback_format};
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
            buffer(s, bytes, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST, scale > 1);
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
            else
                throw std::runtime_error("MotorStorm antialiasing must be none, fxaa or ssaa4x");
        }
        s.raster_scale = s.output_scale * (s.antialiasing == 2 ? 2 : 1);
        report.resolution_scale = s.output_scale;
        report.raster_scale = s.raster_scale;
        report.antialiasing = s.antialiasing;
        UINT flags = 0;
        if (std::getenv("PSPRECOMP_MOTORSTORM_D3D12_DEBUG")) {
            ComPtr<ID3D12Debug> debug;
            check(D3D12GetDebugInterface(IID_PPV_ARGS(&debug)), "enable debug layer");
            debug->EnableDebugLayer();
            flags = DXGI_CREATE_FACTORY_DEBUG;
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
        D3D12_RANGE none{};
        check(s.upload->Map(0, &none, reinterpret_cast<void **>(&s.mapped)), "map upload arena");
        create_pipeline(s);
        state = std::move(native);
        report.active = true;
        std::cerr << "[D3D12] hardware GE adapter=" << report.adapter
                  << " ROV=1 GPU_transform=1 output=" << s.output_scale * 480 << 'x' << s.output_scale * 272
                  << " raster=" << s.raster_scale * 480 << 'x' << s.raster_scale * 272
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
void gpu_submit(psprecomp::GuestMemory &memory, const GpuDraw &draw, std::span<const GpuVertex> vertices,
                const GpuTexture *texture) {
#if defined(_WIN32)
    if (!state || vertices.empty() || draw.framebuffer == 0 || draw.stride == 0 || draw.stride > 1024 ||
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
    if (!s.recording && s.readback_fence != 0u)
        publish_readbacks(s, memory);
    // Keep enough arena space for the maximum texture chain and target reloads.
    if (s.recording && s.used > kUploadBytes - 20 * 1024 * 1024)
        gpu_sync(memory);
    begin(s);
    // Acquire depth first: alias handling may retire overlapping target objects.
    if (valid_depth)
        get_surface(s, memory, draw.depthbuffer, draw.depth_stride, height, 2);
    auto &color = get_surface(s, memory, draw.framebuffer, draw.stride, height, bpp, draw.format);
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
    }
    ID3D12Resource *feedback = nullptr;
    Texture *image = nullptr;
    UINT cb_offset = 0;
    UINT vertex_offset = 0;
    UINT vertex_bytes = 0;
    {
        perf::Scope prepare_profile(perf::kGpuPrepare);
        vertex_bytes = static_cast<UINT>(vertices.size_bytes());
        vertex_offset = static_cast<UINT>(allocate(s, vertex_bytes, 4));
        std::memcpy(s.mapped + vertex_offset, vertices.data(), vertex_bytes);
        Constants constants{draw.commands,
                            draw.model_to_clip,
                            draw.model_to_view_z,
                            draw.scale,
                            draw.center,
                            {draw.stride * s.raster_scale, height * s.raster_scale, draw.stride * s.raster_scale,
                             (valid_depth ? draw.depth_stride : draw.stride) * s.raster_scale},
                            {draw.format, draw.hardware_transform ? 1u : 0u,
                             (draw.depth_clip ? 1u : 0u) | (draw.primitive == 0 ? 2u : 0u),
                             valid_depth ? 1u : 0u}};
        constants.render = {s.raster_scale, s.output_scale, s.antialiasing, 0};
        if (texture && texture->feedback_address) {
            feedback = feedback_snapshot(s, memory, *texture, constants.feedback);
            ++report.feedback_draws;
        }
        cb_offset = static_cast<UINT>(allocate(s, sizeof(constants), 256));
        std::memcpy(s.mapped + cb_offset, &constants, sizeof(constants));
        static const GpuTexture white{0, 1, 1, {{0xFFFFFFFFu}}};
        image = &get_texture(s, texture && !feedback ? *texture : white);
    }
    {
    perf::Scope record_profile(perf::kGpuRecord);
    ID3D12PipelineState *pipeline = draw.primitive == 0   ? s.point_pipeline.Get()
                                    : draw.primitive == 1 ? s.line_pipeline.Get()
                                                          : s.pipeline.Get();
    const auto topology = draw.primitive == 0   ? D3D_PRIMITIVE_TOPOLOGY_POINTLIST
                          : draw.primitive == 1 ? D3D_PRIMITIVE_TOPOLOGY_LINELIST
                                                : D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
    s.list->SetPipelineState(pipeline);
    // Root signature and descriptor heaps are bound once per command list.
    s.list->SetGraphicsRootConstantBufferView(0, s.upload->GetGPUVirtualAddress() + cb_offset);
    s.list->SetGraphicsRootUnorderedAccessView(1, color.image->GetGPUVirtualAddress());
    s.list->SetGraphicsRootUnorderedAccessView(2, depth->image->GetGPUVirtualAddress());
    s.list->SetGraphicsRootDescriptorTable(3, srv_handle(s, image->descriptor));
    s.list->SetGraphicsRootShaderResourceView(5, feedback ? feedback->GetGPUVirtualAddress()
                                                          : s.upload->GetGPUVirtualAddress());
    D3D12_VIEWPORT viewport{
        0, 0, static_cast<float>(draw.stride * s.raster_scale), static_cast<float>(height * s.raster_scale),
        0, 1};
    s.list->RSSetViewports(1, &viewport);
    D3D12_RECT scissor{std::clamp(draw.left, 0, static_cast<int>(draw.stride)) * static_cast<int>(s.raster_scale),
                       std::clamp(draw.top, 0, static_cast<int>(height)) * static_cast<int>(s.raster_scale),
                       std::clamp(draw.right, 0, static_cast<int>(draw.stride)) * static_cast<int>(s.raster_scale),
                       std::clamp(draw.bottom, 0, static_cast<int>(height)) * static_cast<int>(s.raster_scale)};
    s.list->RSSetScissorRects(1, &scissor);
    s.list->IASetPrimitiveTopology(topology);
    D3D12_VERTEX_BUFFER_VIEW view{s.upload->GetGPUVirtualAddress() + vertex_offset,
                                  static_cast<UINT>(vertex_bytes), sizeof(GpuVertex)};
    s.list->IASetVertexBuffers(0, 1, &view);
    s.list->DrawInstanced(static_cast<UINT>(vertices.size()), 1, 0, 0);
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
    report.vertices += vertices.size();
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
            if (surface->raster_scale == 1)
                transition(s, *surface, D3D12_RESOURCE_STATE_COPY_SOURCE);
            else
                native_transition(s, *surface, D3D12_RESOURCE_STATE_COPY_SOURCE);
            s.list->CopyBufferRegion(surface->readback.Get(), 0, resolved, 0, surface->native_bytes());
            if (surface->raster_scale == 1)
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
        wait_value(s, s.readback_fence);
    }
    s.readback_fence = 0u;
    ++gpu_publish_epoch;
    perf::Scope readback_profile(perf::kGpuReadback);
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
    publish_readbacks(*state, memory);
    finish_list(*state);
    // The game's CPU code reads and writes the framebuffer between lists.
    // Publish the moment anything touches VRAM so it never sees stale pixels.
    memory.set_vram_access_hook([](void *context) {
        if (state)
            publish_readbacks(*state, *static_cast<psprecomp::GuestMemory *>(context));
    }, &memory);
    memory.arm_vram_hook(state->readback_fence != 0u);
#endif
}
void gpu_settle(psprecomp::GuestMemory &memory) {
#if defined(_WIN32)
    if (state)
        publish_readbacks(*state, memory);
#endif
}
void gpu_set_deferred_readback(bool enabled) noexcept { deferred_readback = enabled; }
void gpu_sync_texture(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t bytes) {
#if defined(_WIN32)
    if (!state)
        return;
    address = physical(address);
    for (const auto &target : state->surfaces)
        if (target->dirty && address < static_cast<UINT64>(target->address) + target->guest_bytes() &&
            target->address < static_cast<UINT64>(address) + bytes) {
            ++report.feedback_syncs;
            gpu_sync(memory);
            return;
        }
#endif
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
    constants.surface = {width, height, stride * s.raster_scale, 0};
    constants.mode[0] = format;
    constants.render = {s.raster_scale, s.output_scale, s.antialiasing, 0};
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
void create_present_queue(State &s) {
    if (s.present_queue)
        return;
    D3D12_COMMAND_QUEUE_DESC desc{};
    desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    check(s.device->CreateCommandQueue(&desc, IID_PPV_ARGS(&s.present_queue)), "create present queue");
    check(s.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&s.present_fence)), "create present fence");
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
        frame.constants = buffer(s, 4096, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
        check(frame.constants->Map(0, nullptr, &frame.mapped), "map present constants");
    }
}
// Wait until the present queue has finished everything submitted to it.
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
} // namespace
#endif
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
    RECT client{};
    GetClientRect(static_cast<HWND>(window), &client);
    const UINT w = std::max<LONG>(1, client.right), h = std::max<LONG>(1, client.bottom);
    if (s.swapchain && (s.window != window || s.present_width != w || s.present_height != h)) {
        s.wait_presenter_idle();
        wait(s);
        drain_present_queue(s);
        for (auto &back : s.backbuffers)
            back.Reset();
        s.swapchain.Reset();
        s.rtv.Reset();
        if (s.frame_latency) {
            CloseHandle(s.frame_latency);
            s.frame_latency = nullptr;
        }
    }
    if (!s.swapchain) {
        DXGI_SWAP_CHAIN_DESC1 desc{};
        desc.Width = w;
        desc.Height = h;
        desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        desc.SampleDesc.Count = 1;
        desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        desc.BufferCount = State::kBackBuffers;
        desc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        desc.Flags = DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT;
        ComPtr<IDXGISwapChain1> chain;
        create_present_queue(s);
        check(s.factory->CreateSwapChainForHwnd(s.present_queue.Get(), static_cast<HWND>(window), &desc, nullptr,
                                                nullptr, &chain),
              "create swapchain");
        check(chain.As(&s.swapchain), "query swapchain");
        // Two queued frames; beyond that the display cannot show more and
        // presenting would block the guest (see the skip below).
        check(s.swapchain->SetMaximumFrameLatency(2), "set frame latency");
        s.frame_latency = s.swapchain->GetFrameLatencyWaitableObject();
        s.factory->MakeWindowAssociation(static_cast<HWND>(window), DXGI_MWA_NO_ALT_ENTER);
        D3D12_DESCRIPTOR_HEAP_DESC heap{};
        heap.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        heap.NumDescriptors = State::kBackBuffers;
        check(s.device->CreateDescriptorHeap(&heap, IID_PPV_ARGS(&s.rtv)), "create RTV heap");
        s.rtv_size = s.device->GetDescriptorHandleIncrementSize(heap.Type);
        for (UINT i = 0; i < State::kBackBuffers; ++i) {
            check(s.swapchain->GetBuffer(i, IID_PPV_ARGS(&s.backbuffers[i])), "get swapchain buffer");
            auto handle = s.rtv->GetCPUDescriptorHandleForHeapStart();
            handle.ptr += i * s.rtv_size;
            s.device->CreateRenderTargetView(s.backbuffers[i].Get(), nullptr, handle);
        }
        s.window = static_cast<HWND>(window);
        s.present_width = w;
        s.present_height = h;
    }
    // When the presenter is still inside the previous Present, or the display
    // has two frames queued, drop this presentation instead of stalling
    // emulation; a newer frame follows shortly.
    {
        // Present usually returns within a few milliseconds of the request; a
        // short bounded wait avoids dropping a frame at a vblank boundary.
        std::unique_lock lock(s.present_mutex);
        check(s.present_result, "present");
        if (!s.present_cv.wait_for(lock, std::chrono::milliseconds(3), [&] { return !s.present_busy; })) {
            ++report.skipped_presents;
            return true;
        }
    }
    if (s.frame_latency && WaitForSingleObject(s.frame_latency, 0) == WAIT_TIMEOUT) {
        ++report.skipped_presents;
        return true;
    }
    if (!s.presenter.joinable()) {
        s.presenter = std::thread([&s] {
            std::unique_lock lock(s.present_mutex);
            for (;;) {
                s.present_cv.wait(lock, [&] { return s.present_requested || s.presenter_stop; });
                if (s.presenter_stop)
                    return;
                s.present_requested = false;
                lock.unlock();
                const HRESULT result = s.swapchain->Present(0, 0);
                lock.lock();
                if (FAILED(result))
                    s.present_result = result;
                s.present_busy = false;
                s.present_cv.notify_all();
            }
        });
    }
    State::PresentFrame &frame = s.present_frames[s.present_frame];
    if (frame.fence != 0u && s.present_fence->GetCompletedValue() < frame.fence) {
        ++report.skipped_presents;  // every snapshot is still queued for display
        return true;
    }
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
    check(s.list->Close(), "close presentation copy");
    s.recording = false;
    ID3D12CommandList *copy_lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1, copy_lists);
    CommandSlot &slot = s.slots[s.slot_index];
    slot.fence_value = signal_fence(s);
    slot.pending = true;
    s.arena_fence = slot.fence_value;
    color->loaded = false;

    check(frame.allocator->Reset(), "reset present allocator");
    check(frame.list->Reset(frame.allocator.Get(), s.present_pipeline.Get()), "reset present list");
    auto *list = frame.list.Get();
    list->SetGraphicsRootSignature(s.root.Get());
    ID3D12DescriptorHeap *heaps[]{s.srv.Get()};
    list->SetDescriptorHeaps(1, heaps);
    Constants constants{};
    constants.surface = {width, height, stride * s.raster_scale, 0};
    constants.mode[0] = format;
    constants.render = {s.raster_scale, s.output_scale, s.antialiasing, 0};
    std::memcpy(frame.mapped, &constants, sizeof(constants));
    list->SetGraphicsRootConstantBufferView(0, frame.constants->GetGPUVirtualAddress());
    list->SetGraphicsRootShaderResourceView(4, frame.image->GetGPUVirtualAddress());
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
    const auto fitted = fit_presentation(w, h, width, height);
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
    // GPU-side wait for the snapshot copy; the CPU never blocks here.
    check(s.present_queue->Wait(s.fence.Get(), slot.fence_value), "present queue wait");
    ID3D12CommandList *present_lists[]{list};
    s.present_queue->ExecuteCommandLists(1, present_lists);
    frame.fence = ++s.present_fence_value;
    check(s.present_queue->Signal(s.present_fence.Get(), frame.fence), "signal present fence");
    s.present_frame = (s.present_frame + 1u) % State::kPresentFrames;
    {
        std::lock_guard lock(s.present_mutex);
        s.present_busy = true;
        s.present_requested = true;
    }
    s.present_cv.notify_all();
    ++report.presents;
    return true;
#else
    return false;
#endif
}
} // namespace motorstorm
