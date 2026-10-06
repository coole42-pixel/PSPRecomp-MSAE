// Vulkan GE renderer. It mirrors the D3D12 renderer in motorstorm_gpu.cpp
// operation for operation and shares its shaders (motorstorm_gpu.hlsl,
// compiled to SPIR-V by DXC at build time), so both produce the same packed
// PSP pixels. The structural differences:
//   - D3D12 root views and tables are push descriptors (set 0); the eight
//     static samplers are immutable samplers (set 1).
//   - Fences are one timeline semaphore per queue.
//   - Consecutive GE draws share one attachment-less dynamic rendering pass.
//     D3D12 separates every draw with a UAV barrier; here pixel-ordered
//     fragment-shader interlock plus coherent target buffers order the packed
//     read-modify-writes across draws, and only non-draw work (copies,
//     compute, texture uploads) ends the pass and inserts a barrier.
//     PSPRECOMP_MOTORSTORM_VK_DRAW_BARRIERS=1 restores a barrier per draw.
//   - Every other GPU operation is serialized by a full memory barrier when
//     the previous one wrote memory (the D3D12 resource-state transitions).
#include "motorstorm_gpu_vulkan.hpp"
#include "motorstorm_mobile.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_perf.hpp"
#include "motorstorm_post.hpp"
#include "motorstorm_presentation.hpp"
#include "motorstorm_textures.hpp"
#include "motorstorm_vulkan_api.hpp"
#include "vk_mem_alloc.h"

#include <algorithm>
#include <atomic>
#include <bit>
#include <climits>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <iostream>
#include <memory>
#include <mutex>
#include <sstream>
#include <stdexcept>
#include <string_view>
#include <thread>
#include <unordered_map>
#if defined(__ANDROID__)
#include <SDL3/SDL.h>
#include <adrenotools/driver.h>
#include <dlfcn.h>
using HMODULE = void *;
using HWND = SDL_Window *;
using LONG = int;
struct RECT { int left{}, top{}, right{}, bottom{}; };
static void GetClientRect(SDL_Window *window, RECT *rect) {
    SDL_GetWindowSizeInPixels(window, &rect->right, &rect->bottom);
}
static void FreeLibrary(void *library) { dlclose(library); }
#endif

namespace motorstorm::vulkan {
using namespace api;
namespace {
using motorstorm::PixelPath;
using motorstorm::PixelFeatures;
using motorstorm::select_pixel_path;
using motorstorm::classify_ge_draw;
using motorstorm::GeDrawFacts;
using motorstorm::DrawPixelRoute;
using motorstorm::ScaleMode;
using motorstorm::ScaleSettings;
using motorstorm::step_render_scale;
using motorstorm::select_upscaler;
using motorstorm::Upscaler;
using motorstorm::DriverRequest;
using motorstorm::resolve_driver;
using motorstorm::present_frame_rate_hz;
using motorstorm::point_expansion_requires_geometry_shader;
using UINT = std::uint32_t;
using UINT64 = std::uint64_t;
GpuReport stats{"Vulkan"};
bool attempted{};
// See motorstorm_gpu.cpp: advances once per published GE list.
std::uint64_t gpu_publish_epoch{};
bool deferred_readback{};
bool emulation_racing{};
std::atomic<bool> guest_widescreen{};
void (*publish_guard)() = nullptr;
std::atomic<std::uint64_t> output_size{(480ull << 32) | 272u};

// SPIR-V compiled at build time by DXC from motorstorm_gpu.hlsl.
#include "motorstorm_spirv_VS.h"
#include "motorstorm_spirv_VSPoint.h"
#include "motorstorm_spirv_PS.h"
#include "motorstorm_spirv_PointGS.h"
#if defined(__ANDROID__)
#include "motorstorm_spirv_PointVS.h"
#include "motorstorm_spirv_PSLock.h"
#include "motorstorm_spirv_PSNoRead.h"
#include "motorstorm_spirv_PSTrivial.h"
#include "motorstorm_spirv_PSNoShade.h"
#include "motorstorm_spirv_PresentConvertCS.h"
#include "motorstorm_spirv_VertexBatchCS.h"
#include "motorstorm_spirv_VSFast.h"
#include "motorstorm_spirv_PointVSFast.h"
#include "motorstorm_spirv_PSFast.h"
#include "motorstorm_spirv_PSFastAlpha.h"
#include "motorstorm_spirv_PSFastAlphaEarly.h"
#include "motorstorm_spirv_PSFastFeedback.h"
#include "motorstorm_spirv_PSFastAlphaFeedback.h"
#include "motorstorm_spirv_PSLoad.h"
#include "motorstorm_spirv_PackColorCS.h"
#include "motorstorm_spirv_PackDepthCS.h"
#include <android/native_window.h>
#include <dlfcn.h>
#endif
#include "motorstorm_spirv_PresentVS.h"
#include "motorstorm_spirv_PresentPS.h"
#include "motorstorm_spirv_ExpandCS.h"
#include "motorstorm_spirv_ResolveCS.h"
#include "motorstorm_spirv_CaptureCS.h"
#include "motorstorm_spirv_DecodeCS.h"
#include "motorstorm_spirv_MipCS.h"
#include "motorstorm_spirv_VertexCS.h"
#include "motorstorm_spirv_DecodeTargetCS.h"
#include "motorstorm_spirv_PostResolveCS.h"
#include "motorstorm_spirv_DebandCS.h"
#include "motorstorm_spirv_PostPS.h"
#include "motorstorm_spirv_PostCaptureCS.h"
#include "motorstorm_spirv_PostColorCS.h"
#include "motorstorm_spirv_PostPresentPS.h"
#include "motorstorm_spirv_PostColorCaptureCS.h"
#include "motorstorm_spirv_DepthResolveCS.h"

constexpr UINT64 kUploadBytes = 64ull * 1024 * 1024;
constexpr UINT64 kVertexArenaBytes = 128ull * 1024 * 1024;
void check(VkResult result, const char *operation) {
    if (result < 0)
        throw std::runtime_error(std::string("MotorStorm Vulkan ") + operation + " failed: " + std::to_string(result));
}
std::uint32_t physical(std::uint32_t address) {
    address = psprecomp::GuestMemory::canonical(address);
    if (address >= 0x04000000u && address < 0x04800000u)
        address = 0x04000000u | (address & 0x1FFFFFu);
    return address;
}
// Lazy readback publication; see the D3D12 copy in motorstorm_gpu.cpp.
// PSPRECOMP_MOTORSTORM_GPU_LAZY_PUBLISH=0 (or "false") restores the eager
// list-start publication for A/B checks.
bool lazy_publish_enabled() {
    static const bool value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_GPU_LAZY_PUBLISH");
        if (text == nullptr || *text == '\0') return true;
        return std::strcmp(text, "0") != 0 && std::strcmp(text, "false") != 0;
    }();
    return value;
}
// Raster scales in half units; see motorstorm_gpu.cpp.
constexpr UINT raster_extent(UINT native, UINT half) { return native * half / 2u; }
constexpr UINT native_row_of_boundary(UINT raster, UINT half) { return (2u * raster + half - 1u) / half; }

// ---------------------------------------------------------------------------
// Memory: buffers and images allocated through VMA. Destruction is explicit
// and happens only once the GPU no longer uses a resource (the same points at
// which the D3D12 renderer releases its ComPtrs).
VmaAllocator g_allocator{};
VkDevice g_device{};
constexpr VkBufferUsageFlags kBufferUsage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT |
                                            VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT |
                                            VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
enum class Memory { Device, Upload, Readback };
struct Buffer {
    VkBuffer buffer{};
    VmaAllocation allocation{};
    VkDeviceSize size{};
    std::uint8_t *mapped{};
    bool coherent{true};
    Buffer() = default;
    Buffer(const Buffer &) = delete;
    Buffer &operator=(const Buffer &) = delete;
    Buffer(Buffer &&other) noexcept { *this = std::move(other); }
    Buffer &operator=(Buffer &&other) noexcept {
        if (this != &other) {
            reset();
            buffer = std::exchange(other.buffer, VK_NULL_HANDLE);
            allocation = std::exchange(other.allocation, nullptr);
            size = std::exchange(other.size, 0);
            mapped = std::exchange(other.mapped, nullptr);
            coherent = other.coherent;
        }
        return *this;
    }
    ~Buffer() { reset(); }
    void reset() noexcept {
        if (buffer && g_allocator)
            vmaDestroyBuffer(g_allocator, buffer, allocation);
        buffer = VK_NULL_HANDLE;
        allocation = nullptr;
        size = 0;
        mapped = nullptr;
    }
    explicit operator bool() const noexcept { return buffer != VK_NULL_HANDLE; }
    // Host reads of GPU-written memory (readback heaps).
    void invalidate() const {
        if (!coherent)
            vmaInvalidateAllocation(g_allocator, allocation, 0, VK_WHOLE_SIZE);
    }
    void flush(VkDeviceSize bytes) const {
        if (!coherent && bytes)
            vmaFlushAllocation(g_allocator, allocation, 0, bytes);
    }
};
Buffer make_buffer(VkDeviceSize bytes, Memory memory) {
    VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    info.size = std::max<VkDeviceSize>(bytes, 4);
    info.usage = kBufferUsage;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    VmaAllocationCreateInfo allocation{};
    allocation.usage = VMA_MEMORY_USAGE_AUTO;
    if (memory == Memory::Upload)
        allocation.flags = VMA_ALLOCATION_CREATE_HOST_ACCESS_SEQUENTIAL_WRITE_BIT | VMA_ALLOCATION_CREATE_MAPPED_BIT;
    else if (memory == Memory::Readback) {
        allocation.usage = VMA_MEMORY_USAGE_AUTO_PREFER_HOST;
        allocation.flags = VMA_ALLOCATION_CREATE_HOST_ACCESS_RANDOM_BIT | VMA_ALLOCATION_CREATE_MAPPED_BIT;
    } else
        allocation.usage = VMA_MEMORY_USAGE_AUTO_PREFER_DEVICE;
    Buffer result;
    VmaAllocationInfo details{};
    check(vmaCreateBuffer(g_allocator, &info, &allocation, &result.buffer, &result.allocation, &details),
          "create buffer");
    result.size = info.size;
    result.mapped = static_cast<std::uint8_t *>(details.pMappedData);
    VkMemoryPropertyFlags flags{};
    vmaGetAllocationMemoryProperties(g_allocator, result.allocation, &flags);
    result.coherent = (flags & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT) != 0;
    return result;
}
struct Image {
    VkImage image{};
    VmaAllocation allocation{};
    VkImageView view{};
    UINT mips{1};
    Image() = default;
    Image(const Image &) = delete;
    Image &operator=(const Image &) = delete;
    Image(Image &&other) noexcept { *this = std::move(other); }
    Image &operator=(Image &&other) noexcept {
        if (this != &other) {
            reset();
            image = std::exchange(other.image, VK_NULL_HANDLE);
            allocation = std::exchange(other.allocation, nullptr);
            view = std::exchange(other.view, VK_NULL_HANDLE);
            mips = other.mips;
        }
        return *this;
    }
    ~Image() { reset(); }
    void reset() noexcept {
        if (view && g_device)
            vkDestroyImageView(g_device, view, nullptr);
        if (image && g_allocator)
            vmaDestroyImage(g_allocator, image, allocation);
        view = VK_NULL_HANDLE;
        image = VK_NULL_HANDLE;
        allocation = nullptr;
    }
    explicit operator bool() const noexcept { return image != VK_NULL_HANDLE; }
};
Image make_image(UINT width, UINT height, UINT mips, VkFormat format, VkImageUsageFlags extra_usage = 0) {
    VkImageCreateInfo info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    info.imageType = VK_IMAGE_TYPE_2D;
    info.format = format;
    info.extent = {width, height, 1};
    info.mipLevels = mips;
    info.arrayLayers = 1;
    info.samples = VK_SAMPLE_COUNT_1_BIT;
    info.tiling = VK_IMAGE_TILING_OPTIMAL;
    info.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT | extra_usage;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VmaAllocationCreateInfo allocation{};
    allocation.usage = VMA_MEMORY_USAGE_AUTO_PREFER_DEVICE;
    Image result;
    check(vmaCreateImage(g_allocator, &info, &allocation, &result.image, &result.allocation, nullptr),
          "create texture");
    result.mips = mips;
    VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view.image = result.image;
    view.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view.format = format;
    view.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, mips, 0, 1};
    check(vkCreateImageView(g_device, &view, nullptr, &result.view), "create texture view");
    return result;
}
Image make_depth_image(UINT width, UINT height) {
    VkImageCreateInfo info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    info.imageType = VK_IMAGE_TYPE_2D;
    info.format = VK_FORMAT_D16_UNORM;
    info.extent = {width, height, 1};
    info.mipLevels = 1;
    info.arrayLayers = 1;
    info.samples = VK_SAMPLE_COUNT_1_BIT;
    info.tiling = VK_IMAGE_TILING_OPTIMAL;
    info.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                 VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VmaAllocationCreateInfo allocation{};
    allocation.usage = VMA_MEMORY_USAGE_AUTO_PREFER_DEVICE;
    Image result;
    check(vmaCreateImage(g_allocator, &info, &allocation, &result.image, &result.allocation, nullptr),
          "create depth image");
    VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view.image = result.image;
    view.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view.format = VK_FORMAT_D16_UNORM;
    view.subresourceRange = {VK_IMAGE_ASPECT_DEPTH_BIT, 0, 1, 0, 1};
    check(vkCreateImageView(g_device, &view, nullptr, &result.view), "create depth view");
    return result;
}

// ---------------------------------------------------------------------------
struct Surface {
    std::uint32_t address{}, stride{}, height{}, bpp{};
    std::uint32_t raster_half{2}, format{4};
    Buffer image, native, readback;
#if defined(__ANDROID__)
    Image attachment;
    Buffer locks;
    bool locks_ready{};
    // Ordered-attachment path: which copy holds the newest pixels. Draws
    // write the attachment image; everything else reads/writes the packed
    // buffer. Copies happen only when the other side is actually used.
    bool image_newer{};   // attachment written since the buffer was synced
    bool buffer_newer{};  // buffer written since the attachment was loaded
    // Fixed-function path: compact color and real depth. hw_matches means those
    // images agree with the newest of the packed buffer and the R32 attachment.
    // hw_dirty means a hardware draw has not been packed back yet.
    Image hw_color, hw_depth;
    VkImageLayout hw_color_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    VkImageLayout hw_depth_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    bool hw_dirty{}, hw_matches{};
    // Copy used when a draw both samples and writes this color image.
    Image hw_sample;
    VkImageLayout hw_sample_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    UINT hw_sample_width{}, hw_sample_height{};
    UINT64 hw_sample_version{~0ull};
    UINT64 hw_sample_list{};
#endif
    UINT64 native_version{~0ull};
    std::vector<std::uint8_t> guest_shadow;
    bool loaded{}, dirty{}, readback_pending{};
    float aspect_scale{1.0f};
    std::uint32_t depth_address{}, depth_stride{};
    UINT64 version{}, snapshot_version{~0ull};
    UINT64 snapshot_bytes{};
    UINT64 snapshot_guest_epoch{~0ull};
    Buffer snapshot;
    // Native-pixel rectangles written since the snapshot was taken. A draw
    // that samples only clean pixels of its own render target can keep using
    // the snapshot instead of ending the draw pass for a new copy. Too many
    // rectangles collapse to "everything dirty".
    struct Rect { int left, top, right, bottom; };
    static constexpr std::size_t kSnapshotRects = 32;
    std::vector<Rect> snapshot_dirty{Rect{0, 0, 1 << 20, 1 << 20}};
    std::vector<Rect> hw_sample_dirty{Rect{0, 0, 1 << 20, 1 << 20}};
    static void note_dirty(std::vector<Rect> &list, Rect rect) {
        if (rect.left >= rect.right || rect.top >= rect.bottom)
            return;
        if (list.size() == 1 && list[0].right >= (1 << 20))
            return;
        if (list.size() >= kSnapshotRects)
            list.assign(1, Rect{0, 0, 1 << 20, 1 << 20});
        else
            list.push_back(rect);
    }
    static bool rects_clean(const std::vector<Rect> &list, Rect rect) {
        for (const auto &dirty : list)
            if (dirty.left < rect.right && rect.left < dirty.right && dirty.top < rect.bottom && rect.top < dirty.bottom)
                return false;
        return true;
    }
    bool snapshot_all_dirty() const {
        return snapshot_dirty.size() == 1 && snapshot_dirty[0].right >= (1 << 20);
    }
    void touch_rect(Rect rect) {
        note_dirty(snapshot_dirty, rect);
        note_dirty(hw_sample_dirty, rect);
    }
    void touch_all() {
        const Rect all{0, 0, 1 << 20, 1 << 20};
        snapshot_dirty.assign(1, all);
        hw_sample_dirty.assign(1, all);
    }
    bool snapshot_clean(Rect rect) const { return rects_clean(snapshot_dirty, rect); }
    bool hw_sample_clean(Rect rect) const { return rects_clean(hw_sample_dirty, rect); }
    UINT raster_stride() const { return raster_extent(stride, raster_half); }
    UINT raster_height() const { return raster_extent(height, raster_half); }
    UINT64 bytes() const { return static_cast<UINT64>(raster_stride()) * raster_height() * 4; }
    UINT64 native_bytes() const { return static_cast<UINT64>(stride) * height * 4; }
    UINT64 guest_bytes() const { return static_cast<UINT64>(stride) * height * bpp; }
};
struct Texture {
    Image image;
    UINT64 bytes{}, last_used{};
    UINT width{}, height{}, mips{};
    std::uint64_t generation{};
};
// Chunked submission: see motorstorm_gpu.cpp (same defaults and overrides).
// Opening a slot waits for its previous submission, so the slot count bounds
// how far the guest thread can run ahead of the GPU. Android shares one queue
// with presentation and ends a tiled render pass at every submission, so it
// uses more slots and larger chunks: with 3 x 128 the guest blocked on a slot
// fence at every submission (about 9 a race frame).
constexpr UINT kCommandSlotCapacity = 16u;
#if defined(__ANDROID__)
constexpr UINT kDefaultCommandSlots = 8u;
constexpr UINT64 kDefaultChunkDraws = 512u;
#else
constexpr UINT kDefaultCommandSlots = 3u;
constexpr UINT64 kDefaultChunkDraws = 128u;
#endif
#if defined(__ANDROID__)
// Short side of the Android swapchain (see create_swapchain); 0 = panel size.
UINT present_height_limit() {
    static const UINT value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_PRESENT_HEIGHT");
        return text ? static_cast<UINT>(std::strtoul(text, nullptr, 0)) : 0u;
    }();
    return value >= 272u ? value : 0u;
}
// A display size reduced to the swapchain the present pass renders.
void limit_to_present(UINT &width, UINT &height) {
    const UINT limit = present_height_limit(), shorter = std::min(width, height);
    if (!limit || shorter <= limit)
        return;
    const auto scaled = [&](UINT side) {
        return std::max<UINT>(2u, static_cast<UINT>(static_cast<UINT64>(side) * limit / shorter) & ~1u);
    };
    width = scaled(width);
    height = scaled(height);
}
#endif
// PSPRECOMP_MOTORSTORM_VERTEX_BATCH=0 dispatches VertexCS once per draw (as
// before) instead of once per submission. Android only.
[[maybe_unused]] bool vertex_batching() {
    static const bool value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_VERTEX_BATCH");
        return !(text && std::strcmp(text, "0") == 0);
    }();
    return value;
}
UINT command_slot_count() {
    static const UINT value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_GPU_COMMAND_SLOTS");
        const unsigned long parsed = text != nullptr ? std::strtoul(text, nullptr, 0) : 0ul;
        if (parsed < 2ul) return kDefaultCommandSlots;
        return static_cast<UINT>(std::min<unsigned long>(parsed, kCommandSlotCapacity));
    }();
    return value;
}
UINT64 chunk_draws_limit() {
    static const UINT64 value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS");
        const unsigned long long parsed = text != nullptr ? std::strtoull(text, nullptr, 0) : 0ull;
        return parsed != 0ull ? static_cast<UINT64>(parsed) : kDefaultChunkDraws;
    }();
    return value;
}
// PSPRECOMP_MOTORSTORM_LAZY_ATTACHMENTS=0 reloads the attachments from the
// packed buffers at every pass start (the original, copy-heavy behavior).
bool pass_stats_enabled() {
    static const bool value = std::getenv("PSPRECOMP_MOTORSTORM_PASS_STATS") != nullptr;
    return value;
}
// PSPRECOMP_MOTORSTORM_SNAPSHOT_ROWS=0 snapshots render-target textures
// after every draw to their surface, as before.
bool row_tracking_enabled() {
    static const bool value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_SNAPSHOT_ROWS");
#if defined(__ANDROID__)
        return !(text && std::strcmp(text, "0") == 0);
#else
        return text && std::strcmp(text, "1") == 0;
#endif
    }();
    return value;
}
std::uint64_t snapshot_reuses{}, snapshot_copies{};
bool lazy_attachments_disabled() {
    static const bool value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_LAZY_ATTACHMENTS");
        return text && std::strcmp(text, "0") == 0;
    }();
    return value;
}
bool draw_barriers() {
    static const bool value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_VK_DRAW_BARRIERS");
        return text && *text && std::strcmp(text, "0") != 0;
    }();
    return value;
}
struct CommandSlot {
    VkCommandPool pool{};
    VkCommandBuffer cmd{};
    // VertexCS dispatches of the chunk, submitted just before `cmd`.
    VkCommandBuffer pre{};
    UINT64 fence_value{};
    bool pending{};
    VkQueryPool queries{};
    bool timed{};
    bool pre_timed{};
};
constexpr UINT kConstantsStride = 1280;
constexpr UINT kPresentConstantBytes = kConstantsStride;
struct Constants {
    std::array<std::uint32_t, 256> commands;
    std::array<float, 16> clip;
    std::array<float, 4> view_z, scale, center;
    std::array<std::uint32_t, 4> surface, mode;
    std::array<std::uint32_t, 4> feedback{};
    std::array<std::uint32_t, 4> render{1, 1, 0, 0};
    std::array<std::uint32_t, 4> replace{};
    std::array<float, 4> uv_range{};
    std::array<float, 4> wide{1.0f, 240.0f, 0.0f, 0.0f};
};
static_assert(sizeof(Constants) == 1248);
static_assert(sizeof(GpuVertex) == 36);
// A storage/uniform buffer range bound to a shader (D3D12 root view).
struct View {
    VkBuffer buffer{};
    VkDeviceSize offset{};
};

// Instance, device and allocator. Declared first in State so it is destroyed
// last, after every buffer and image.
struct Context {
    HMODULE library{};
    VkInstance instance{};
    VkDebugUtilsMessengerEXT messenger{};
    VkPhysicalDevice physical{};
    VkDevice device{};
    VmaAllocator allocator{};
    VkPhysicalDeviceProperties properties{};
    UINT queue_family{};
    bool line_rasterization{}, depth_clamp{}, anisotropy{}, bc{}, host_query_reset{};
    bool hw_dynamic_depth{}, hw_dynamic_blend{};
    ~Context() {
        if (device)
            vkDeviceWaitIdle(device);
        if (allocator)
            vmaDestroyAllocator(allocator);
        g_allocator = nullptr;
        if (device)
            vkDestroyDevice(device, nullptr);
        g_device = nullptr;
        if (messenger && vkDestroyDebugUtilsMessengerEXT)
            vkDestroyDebugUtilsMessengerEXT(instance, messenger, nullptr);
        if (instance)
            vkDestroyInstance(instance, nullptr);
        if (library)
            FreeLibrary(library);
    }
};

struct State {
    Context ctx;
    VkDevice device{};
    VkQueue queue{}, present_queue{};
    // A family with a single queue shares it between the GE and presenter threads.
    bool shared_queue{};
    std::mutex queue_mutex;
    CommandSlot slots[kCommandSlotCapacity + 1];
    VkCommandBuffer cmd{};
    UINT slot_index{};
    UINT ge_slot{};  // last GE chunk slot; lists continue the rotation from it
    // VertexBatchCS workgroups of the recording chunk: {job word, output word,
    // vertex count, first vertex} each; dispatched once in submit_chunk.
    std::vector<std::uint32_t> vertex_groups;
    UINT64 frame_fence{}, chunk_draws{};
    UINT64 readback_fence{}, arena_fence{};
    // The upload and vertex arenas alternate between two halves (see begin()).
    UINT arena_half{};
    UINT64 arena_base{}, vertex_base{}, half_fence[2]{};
    VkDescriptorSetLayout push_layout{}, sampler_layout{};
    VkPipelineLayout layout{};
    VkDescriptorPool descriptor_pool{};
    VkDescriptorSet sampler_set{};
    VkSampler samplers[8]{};
    VkPipeline list_pipeline{}, strip_pipeline{}, line_pipeline{}, point_pipeline{};
#if defined(__ANDROID__)
    VkRenderPass attachment_pass{};
    struct HwFramebuffer {
        VkImageView color{}, depth{};
        VkFramebuffer framebuffer{};
    };
    std::vector<VkFramebuffer> attachment_framebuffers;
    std::vector<HwFramebuffer> ordered_framebuffers;
    std::vector<HwFramebuffer> hw_framebuffers;
    Surface *attachment_color{}, *attachment_depth{};
    Surface attachment_dummy_depth;
    VkRenderPass hw_pass_load{}, hw_pass_clear{};
    struct HwPipeKey {
    std::uint8_t topology{}, depth_test{}, depth_write{}, depth_compare{};
        std::uint8_t blend{}, blend_op{}, src{}, dst{}, mask{}, cull{}, alpha{}, feedback{};
        bool operator==(const HwPipeKey &other) const {
            return std::memcmp(this, &other, sizeof(HwPipeKey)) == 0;
        }
    };
    struct HwPipeHash {
        std::size_t operator()(const HwPipeKey &key) const {
            std::size_t hash = 0;
            const auto *bytes = reinterpret_cast<const unsigned char *>(&key);
            for (std::size_t index = 0; index < sizeof(key); ++index)
                hash = hash * 131u + bytes[index];
            return hash;
        }
    };
    std::unordered_map<HwPipeKey, VkPipeline, HwPipeHash> hw_pipelines;
    std::vector<HwPipeKey> hw_pipe_order;  // creation order, saved for prewarming
    std::size_t hw_keys_saved{};
    bool prewarming{};
    VkPipeline hw_load_pipeline{}, pack_color_pipeline{}, pack_depth_pipeline{};
    Buffer hw_depth_staging;
    bool hw_depth_ok{};
    bool rendering_hardware{};
    Surface *hw_pass_color{}, *hw_pass_depth{};
#endif
    VkPipeline expand_pipeline{}, resolve_pipeline{}, capture_pipeline{}, decode_pipeline{}, mip_pipeline{},
        vertex_pipeline{}, vertex_batch_pipeline{}, decode_target_pipeline{}, post_resolve_pipeline{}, deband_pipeline{},
        post_capture_pipeline{}, post_color_pipeline{}, post_color_capture_pipeline{}, depth_resolve_pipeline{},
        present_convert_pipeline{};
    // Swapchain pipelines, created for the swapchain's format.
    VkPipeline present_pipeline{}, post_present_pipeline{};
    VkFormat pipelines_format{VK_FORMAT_UNDEFINED};
    std::vector<VkShaderModule> modules;
    Buffer vertex_arena;
    UINT64 vertex_used{};
    bool pre_open{};
    Buffer decode_scratch[2];
    bool enhanced_filtering{};
    struct IdentifyCopy {
        std::uint64_t key{};
        UINT width{}, height{}, pitch{};
        UINT64 start{}, end{};
        UINT64 execution{}, fence{};
    };
    Buffer identify_ring;
    UINT64 identify_head{}, identify_tail{};
    std::deque<IdentifyCopy> identify_copies;
    std::vector<std::uint64_t> identify_failed;
    UINT64 executions{};
    UINT64 list_serial{1};
    UINT raster_half{2}, output_scale{1}, antialiasing{};
    UINT storage_alignment{16};
    Buffer upload;
    std::uint8_t *mapped{};
    VkSemaphore timeline{};
    UINT64 fence_value{}, used{};
    UINT64 texture_bytes{};
    std::vector<Buffer> transient;
    std::vector<Image> transient_images;
    bool recording{}, has_commands{};
    // Command-buffer recording state.
    bool rendering{}, unflushed{};
    VkPipeline bound_graphics{}, bound_compute{};
    VkExtent2D render_area{};
    std::vector<std::unique_ptr<Surface>> surfaces;
    struct PendingTransfer {
        UINT64 offset{};
        std::uint32_t destination{}, destination_stride{}, x{}, y{}, width{}, height{}, bpp{};
        std::uint32_t start() const { return destination + (y * destination_stride + x) * bpp; }
        std::uint32_t bytes() const { return ((height - 1u) * destination_stride + width) * bpp; }
    };
    static constexpr UINT64 kTransferRingBytes = 1u << 20;
    Buffer transfer_ring;
    UINT64 transfer_used{};
    std::vector<PendingTransfer> pending_transfers;
    static constexpr UINT kClutConstantSlots = 64, kClutConstantStride = 1280;
    Buffer clut_constants;
    UINT clut_constant_slot{};
    std::unordered_map<std::uint64_t, Texture> textures;
    struct Replacement {
        Image image;
        UINT64 bytes{}, last_used{};
        bool no_alpha{};
        bool rejected{};
    };
    std::unordered_map<std::uint64_t, Replacement> replacements;
    std::unordered_map<std::uint64_t, std::unique_ptr<textures::Image>> pending_replacements;
    UINT64 replacement_bytes{}, replacement_uploaded_in_list{};
    UINT replacement_count_in_list{};
    // Presentation (see motorstorm_gpu.cpp): the GE queue snapshots the
    // displayed target; the presenter thread scales it into the swapchain on
    // the present queue whenever the display has room.
    VkSurfaceKHR surface{};
    VkSwapchainKHR swapchain{};
    VkFormat swap_format{VK_FORMAT_UNDEFINED};
    VkExtent2D swap_extent{};
    // Persistent pipeline cache (see open_pipeline_cache); null when disabled.
    VkPipelineCache pipeline_cache{};
    std::filesystem::path pipeline_cache_file;
    bool pipeline_cache_dirty{};
    std::uint64_t pipeline_cache_saved_presents{};
#if defined(__ANDROID__)
    VkSurfaceTransformFlagBitsKHR presentation_transform{VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR};
    PixelPath pixel_path{PixelPath::Unsupported};
    bool dynamic_rendering{true};
    VkRenderPass programmable_pass{};
    VkRenderPass swapchain_pass{};
    Image programmable_target;
    VkFramebuffer programmable_framebuffer{};
    UINT programmable_width{}, programmable_height{};
    std::vector<VkFramebuffer> swap_framebuffers;
    float render_scale{1.0f};
    UINT base_raster_half{2};
    double gpu_accum{};
    int gpu_samples{};
    ScaleSettings scale_settings{};
    motorstorm::DynamicResolution dynamic_resolution;
    double completed_gpu_ms{-1.0};
    int thermal_status{};
    std::uint64_t thermal_frames{};
    std::string driver_fallback;
    // The ANativeWindow the Vulkan surface was created for. SDL replaces it
    // (or clears it) whenever Android destroys and recreates the surface.
    void *native_window{};
    std::atomic<bool> surface_lost{};
#endif
    std::vector<VkImage> swap_images;
    std::vector<VkImageView> swap_views;
    std::vector<VkSemaphore> render_done;
    static constexpr UINT kAcquireSlots = 4;
    VkSemaphore acquire[kAcquireSlots]{};
    UINT64 acquire_value[kAcquireSlots]{};
    UINT acquire_index{};
    VkSemaphore present_timeline{};
    UINT64 present_value{};
    VkPresentModeKHR present_mode{VK_PRESENT_MODE_FIFO_KHR};
    HWND window{};
    UINT present_width{}, present_height{};
    std::thread presenter;
    std::mutex present_mutex;
    std::condition_variable present_cv;
    bool presenter_stop{};
    bool present_failed{};
    std::string present_error;
    bool vsync{true}, immediate{}, exclusive_logged{};
    UINT64 displayed{};
    enum class FrameState { Free, Writing, Ready, Presenting };
    struct PresentFrame {
        VkCommandPool pool{};
        VkCommandBuffer cmd{};
        Buffer image, constants;
        Buffer depth_image;
        UINT64 depth_bytes{};
        bool has_depth{};
        Buffer post_buffers[2], post_color;
        UINT64 post_bytes{};
        VkQueryPool queries{};
        bool timed_post{};
        bool timed_present{};
        UINT64 bytes{}, fence{}, copy_fence{};
        FrameState state{FrameState::Free};
        std::uint32_t width{}, height{}, stride{}, format{};
        bool racing{};
        float aspect_scale{1.0f};
        // Raster scale of the snapshot; the GE side may have moved on.
        UINT raster_half{2};
        // Android: the snapshot as an RGBA8 texture for the present pass.
        Buffer rgba_words;
        Image rgba;
        UINT rgba_width{}, rgba_height{};
    };
    int ready_frame{-1};
    static constexpr UINT kPresentFrames = 3;
    PresentFrame present_frames[kPresentFrames];
    double timestamp_period{1.0};
    PostSettings post;
    bool widescreen{true};
    bool racing{};
    float post_fade{};
    std::chrono::steady_clock::time_point post_clock{};
    std::uint32_t post_frames{};
    // Writes the driver's pipeline cache through a temporary file, so a
    // process killed mid-write leaves the previous cache intact.
    void save_pipeline_cache() noexcept {
        if (!pipeline_cache || pipeline_cache_file.empty() || !pipeline_cache_dirty)
            return;
        std::size_t size = 0;
        if (vkGetPipelineCacheData(device, pipeline_cache, &size, nullptr) != VK_SUCCESS || size == 0)
            return;
        std::vector<char> data(size);
        if (vkGetPipelineCacheData(device, pipeline_cache, &size, data.data()) != VK_SUCCESS)
            return;
        auto temporary = pipeline_cache_file;
        temporary += ".tmp";
        std::FILE *file = std::fopen(temporary.string().c_str(), "wb");
        if (!file)
            return;
        const bool written = std::fwrite(data.data(), 1, size, file) == size;
        if (std::fclose(file) != 0 || !written)
            return;
        std::error_code error;
        std::filesystem::rename(temporary, pipeline_cache_file, error);
        if (!error)
            pipeline_cache_dirty = false;
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
        presenter_stop = false;
    }
    void destroy_swapchain() noexcept {
        for (auto view : swap_views)
            vkDestroyImageView(device, view, nullptr);
#if defined(__ANDROID__)
        for (auto framebuffer : swap_framebuffers)
            vkDestroyFramebuffer(device, framebuffer, nullptr);
        swap_framebuffers.clear();
#endif
        swap_views.clear();
        swap_images.clear();
        for (auto semaphore : render_done)
            vkDestroySemaphore(device, semaphore, nullptr);
        render_done.clear();
        if (swapchain)
            vkDestroySwapchainKHR(device, swapchain, nullptr);
        swapchain = VK_NULL_HANDLE;
    }
    ~State() {
        stop_presenter();
        if (!device)
            return;
        vkDeviceWaitIdle(device);
#if defined(__ANDROID__)
        for (auto framebuffer : attachment_framebuffers) vkDestroyFramebuffer(device, framebuffer, nullptr);
        for (const auto &framebuffer : hw_framebuffers)
            vkDestroyFramebuffer(device, framebuffer.framebuffer, nullptr);
        if (programmable_framebuffer) vkDestroyFramebuffer(device, programmable_framebuffer, nullptr);
        if (attachment_pass) vkDestroyRenderPass(device, attachment_pass, nullptr);
        if (hw_pass_load) vkDestroyRenderPass(device, hw_pass_load, nullptr);
        if (hw_pass_clear) vkDestroyRenderPass(device, hw_pass_clear, nullptr);
        if (programmable_pass) vkDestroyRenderPass(device, programmable_pass, nullptr);
        if (swapchain_pass) vkDestroyRenderPass(device, swapchain_pass, nullptr);
        if (hw_load_pipeline) vkDestroyPipeline(device, hw_load_pipeline, nullptr);
        if (pack_color_pipeline) vkDestroyPipeline(device, pack_color_pipeline, nullptr);
        if (pack_depth_pipeline) vkDestroyPipeline(device, pack_depth_pipeline, nullptr);
        for (const auto &pipeline : hw_pipelines)
            vkDestroyPipeline(device, pipeline.second, nullptr);
        hw_pipelines.clear();
#endif
        destroy_swapchain();
        if (surface)
            vkDestroySurfaceKHR(ctx.instance, surface, nullptr);
        for (auto semaphore : acquire)
            if (semaphore)
                vkDestroySemaphore(device, semaphore, nullptr);
        if (present_timeline)
            vkDestroySemaphore(device, present_timeline, nullptr);
        for (auto &frame : present_frames) {
            if (frame.pool)
                vkDestroyCommandPool(device, frame.pool, nullptr);
            if (frame.queries)
                vkDestroyQueryPool(device, frame.queries, nullptr);
        }
        for (auto &slot : slots) {
            if (slot.queries)
                vkDestroyQueryPool(device, slot.queries, nullptr);
            if (slot.pool)
                vkDestroyCommandPool(device, slot.pool, nullptr);
        }
        for (VkPipeline pipeline : {list_pipeline, strip_pipeline, line_pipeline, point_pipeline, expand_pipeline,
                                    resolve_pipeline, capture_pipeline, decode_pipeline, mip_pipeline, vertex_pipeline,
                                    vertex_batch_pipeline,
                                    decode_target_pipeline, post_resolve_pipeline, deband_pipeline,
                                    post_capture_pipeline, post_color_pipeline, post_color_capture_pipeline,
                                    depth_resolve_pipeline, present_pipeline, post_present_pipeline})
            if (pipeline)
                vkDestroyPipeline(device, pipeline, nullptr);
        for (auto module : modules)
            vkDestroyShaderModule(device, module, nullptr);
        if (layout)
            vkDestroyPipelineLayout(device, layout, nullptr);
        if (descriptor_pool)
            vkDestroyDescriptorPool(device, descriptor_pool, nullptr);
        if (push_layout)
            vkDestroyDescriptorSetLayout(device, push_layout, nullptr);
        if (sampler_layout)
            vkDestroyDescriptorSetLayout(device, sampler_layout, nullptr);
        for (auto sampler : samplers)
            if (sampler)
                vkDestroySampler(device, sampler, nullptr);
        if (timeline)
            vkDestroySemaphore(device, timeline, nullptr);
        if (pipeline_cache) {
            save_pipeline_cache();
            vkDestroyPipelineCache(device, pipeline_cache, nullptr);
        }
        // Buffers and images are released by their members, before ctx.
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

// ---------------------------------------------------------------------------
// Synchronization.
std::unique_lock<std::mutex> queue_lock(State &s) {
    return s.shared_queue ? std::unique_lock(s.queue_mutex) : std::unique_lock<std::mutex>();
}
UINT64 completed_value(State &s) {
    UINT64 value{};
    check(vkGetSemaphoreCounterValue(s.device, s.timeline, &value), "read GE timeline");
    return value;
}
void wait_semaphore(VkDevice device, VkSemaphore semaphore, UINT64 value, const char *what) {
    VkSemaphoreWaitInfo info{VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO};
    info.semaphoreCount = 1;
    info.pSemaphores = &semaphore;
    info.pValues = &value;
    const VkResult result = vkWaitSemaphores(device, &info, 30ull * 1000 * 1000 * 1000);
    if (result == VK_TIMEOUT)
        throw std::runtime_error(std::string("MotorStorm Vulkan ") + what + " timeout");
    check(result, what);
}
// GE-thread GPU waits by call site (diagnostics; logged with the frame stats).
enum WaitSite { kWaitSlot, kWaitArena, kWaitSync, kWaitVertex, kWaitPublish, kWaitOther, kWaitSites };
std::uint64_t wait_ns[kWaitSites]{}, wait_count[kWaitSites]{};
std::uint64_t pass_begins{}, attachment_loads{}, buffer_syncs{}, draw_calls{};
std::unordered_map<std::uint32_t, std::uint64_t> rejected_blends;
double prepass_gpu_ms{};
// Diagnostics only (wrong output): isolate GPU cost of the draws themselves
// and of rasterization-order attachment access.
bool diag_flag(const char *name) {
    const char *text = std::getenv(name);
    return text && std::strcmp(text, "1") == 0;
}
void wait_value(State &s, UINT64 value, WaitSite site = kWaitOther) {
    const auto start = perf::now_ns();
    wait_semaphore(s.device, s.timeline, value, "GPU fence wait");
    wait_ns[site] += perf::now_ns() - start;
    ++wait_count[site];
}
// Submits command buffers to the GE queue and signals the next timeline value.
UINT64 submit_queue(State &s, const VkCommandBuffer *buffers, UINT count) {
    const UINT64 value = ++s.fence_value;
    VkTimelineSemaphoreSubmitInfo timeline{VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO};
    timeline.signalSemaphoreValueCount = 1;
    timeline.pSignalSemaphoreValues = &value;
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.pNext = &timeline;
    submit.commandBufferCount = count;
    submit.pCommandBuffers = buffers;
    submit.signalSemaphoreCount = 1;
    submit.pSignalSemaphores = &s.timeline;
    {
        auto lock = queue_lock(s);
        check(vkQueueSubmit(s.queue, 1, &submit, VK_NULL_HANDLE), "submit GE commands");
    }
    for (auto &copy : s.identify_copies)
        if (copy.fence == 0u && copy.execution < s.executions)
            copy.fence = value;
    return value;
}
UINT64 signal_fence(State &s) { return submit_queue(s, nullptr, 0); }
void wait(State &s, WaitSite site = kWaitOther) { wait_value(s, signal_fence(s), site); }
void memory_barrier(VkCommandBuffer cmd, VkPipelineStageFlags source = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                    VkPipelineStageFlags destination = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                    VkAccessFlags destination_access = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT) {
    VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
    barrier.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
    barrier.dstAccessMask = destination_access;
    vkCmdPipelineBarrier(cmd, source, destination, 0, 1, &barrier, 0, nullptr, 0, nullptr);
}
void sync_buffer(State &s, Surface &surface);
void transition_image(State &s, VkImage image, VkImageLayout &current, VkImageLayout next, VkImageAspectFlags aspect);
// Diagnostics: where draw passes are ended (return addresses, symbolized offline).
std::unordered_map<std::uintptr_t, std::uint64_t> pass_end_sites;
std::unordered_map<std::uintptr_t, std::pair<std::uintptr_t, std::uintptr_t>> pass_end_pair_map;
std::unordered_map<std::uintptr_t, std::pair<std::uintptr_t, std::uintptr_t>> *pass_end_pairs = &pass_end_pair_map;
#if defined(_MSC_VER)
#define MOTORSTORM_NOINLINE __declspec(noinline)
#define MOTORSTORM_CALLER(level) reinterpret_cast<std::uintptr_t>(nullptr)
#else
#define MOTORSTORM_NOINLINE __attribute__((noinline))
#define MOTORSTORM_CALLER(level) reinterpret_cast<std::uintptr_t>(__builtin_return_address(level))
#endif
MOTORSTORM_NOINLINE void note_pass_end(std::uintptr_t a, std::uintptr_t b) {
    ++pass_end_sites[a ^ (b << 1)];
    pass_end_pair_map[a ^ (b << 1)] = {a, b};
}
MOTORSTORM_NOINLINE void end_rendering(State &s) {
    if (s.rendering && pass_stats_enabled())
        note_pass_end(MOTORSTORM_CALLER(0), MOTORSTORM_CALLER(1));
    if (s.rendering) {
#if defined(__ANDROID__)
        vkCmdEndRenderPass(s.cmd);
        if (s.pixel_path == PixelPath::FixedFunctionProgrammable) {
            s.rendering = false;
            s.unflushed = true;
            return;
        }
        s.rendering = false;
        if (s.rendering_hardware) {
            // Compact attachments hold the newest pixels. Pack them when a
            // later ordered draw or a guest readback needs the R32 buffers.
            Surface *targets[]{s.hw_pass_color, s.hw_pass_depth};
            for (auto target : targets) {
                if (!target || target->address == 0)
                    continue;
                target->hw_dirty = true;
                target->hw_matches = true;
                target->image_newer = false;
                target->buffer_newer = false;
            }
            s.rendering_hardware = false;
            s.hw_pass_color = s.hw_pass_depth = nullptr;
            s.unflushed = true;
            return;
        }
        // The attachments now hold the newest pixels; their packed buffers are
        // brought up to date only when something reads them (sync_buffer).
        Surface *targets[]{s.attachment_color, s.attachment_depth};
        for (auto target : targets) {
            target->image_newer = true;
            target->hw_matches = false;
            target->hw_dirty = false;
        }
        s.attachment_color = s.attachment_depth = nullptr;
        s.unflushed = true;
        if (lazy_attachments_disabled())
            for (auto target : targets)
                sync_buffer(s, *target);
#else
        vkCmdEndRendering(s.cmd);
        s.rendering = false;
#endif
    }
}
// Before any non-draw command: leave the draw pass and make earlier writes
// visible (the D3D12 renderer's resource-state transitions).
void outside(State &s) {
    end_rendering(s);
    if (s.unflushed) {
        memory_barrier(s.cmd);
        s.unflushed = false;
    }
}
void wrote(State &s) {
    s.unflushed = true;
    s.has_commands = true;
}
// Before the packed buffer of a surface is read: copy the newer attachment
// image into it (ordered-attachment path only; a no-op elsewhere).
void pack_hardware(State &s, Surface &surface);
void sync_buffer(State &s, Surface &surface) {
#if defined(__ANDROID__)
    end_rendering(s);
    pack_hardware(s, surface);
    if (!surface.image_newer || !surface.attachment)
        return;
    VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
    barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
    barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT | VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(s.cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
    VkBufferImageCopy region{};
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    region.imageExtent = {surface.raster_stride(), surface.raster_height(), 1};
    vkCmdCopyImageToBuffer(s.cmd, surface.attachment.image, VK_IMAGE_LAYOUT_GENERAL, surface.image.buffer, 1, &region);
    surface.image_newer = false;
    ++buffer_syncs;
    wrote(s);
#else
    (void)s;
    (void)surface;
#endif
}
// After the packed buffer of a surface was (re)written outside a draw pass.
void buffer_written(Surface &surface) {
#if defined(__ANDROID__)
    surface.buffer_newer = true;
    surface.image_newer = false;
    surface.hw_matches = false;
    surface.hw_dirty = false;
#else
    (void)surface;
#endif
}
// Layout transition of every mip of a texture (also a full memory barrier).
void image_layout(State &s, VkImage image, UINT mips, VkImageLayout from, VkImageLayout to) {
    end_rendering(s);
    VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    barrier.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
    barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
    barrier.oldLayout = from;
    barrier.newLayout = to;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = image;
    barrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, mips, 0, 1};
    VkMemoryBarrier memory{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
    memory.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
    memory.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
    vkCmdPipelineBarrier(s.cmd, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0,
                         s.unflushed ? 1u : 0u, &memory, 0, nullptr, 1, &barrier);
    s.unflushed = false;
    s.has_commands = true;
}
void copy_buffer(State &s, VkBuffer destination, VkDeviceSize destination_offset, VkBuffer source,
                 VkDeviceSize source_offset, VkDeviceSize bytes) {
    if (!bytes)
        return;
    VkBufferCopy region{source_offset, destination_offset, bytes};
    vkCmdCopyBuffer(s.cmd, source, destination, 1, &region);
}
void bind_sets(State &s, VkCommandBuffer cmd) {
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 1, 1, &s.sampler_set, 0, nullptr);
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.layout, 1, 1, &s.sampler_set, 0, nullptr);
}
// Start recording into a slot, waiting only when that slot is still executing.
void open_chunk(State &s, UINT index) {
    CommandSlot &slot = s.slots[index];
    if (slot.pending) {
        wait_value(s, slot.fence_value, kWaitSlot);
        if (slot.timed && slot.queries) {
            UINT64 stamps[2]{};
            if (vkGetQueryPoolResults(s.device, slot.queries, 0, 2, sizeof(stamps), stamps, sizeof(UINT64),
                                      VK_QUERY_RESULT_64_BIT) == VK_SUCCESS &&
                stamps[1] > stamps[0]) {
#if defined(__ANDROID__)
                {
                    // Calibration: raw GPU ticks against host time over ~10 s.
                    static UINT64 first_tick{}, first_ns{};
                    static bool reported{};
                    const auto now = perf::now_ns();
                    if (!first_tick) {
                        first_tick = stamps[1];
                        first_ns = now;
                    } else if (!reported && now - first_ns > 10'000'000'000ull && stamps[1] > first_tick) {
                        reported = true;
                        const double tick_ns = static_cast<double>(now - first_ns) / static_cast<double>(stamps[1] - first_tick);
                        log_line("GE", "timestamp calibration: measured " + std::to_string(tick_ns) +
                                           " ns/tick, driver reports " + std::to_string(s.timestamp_period));
                    }
                }
                s.gpu_accum += static_cast<double>(stamps[1] - stamps[0]) * s.timestamp_period / 1.0e6;
                ++s.gpu_samples;
#else
                stats.last_gpu_ms = static_cast<double>(stamps[1] - stamps[0]) * s.timestamp_period / 1.0e6;
#endif
            }
            slot.timed = false;
        }
        if (slot.pre_timed && slot.queries) {
            UINT64 stamps[2]{};
            if (vkGetQueryPoolResults(s.device, slot.queries, 2, 2, sizeof(stamps), stamps, sizeof(UINT64),
                                      VK_QUERY_RESULT_64_BIT) == VK_SUCCESS && stamps[1] > stamps[0]) {
                const double milliseconds = static_cast<double>(stamps[1] - stamps[0]) * s.timestamp_period / 1.0e6;
                prepass_gpu_ms += milliseconds;
#if defined(__ANDROID__)
                s.gpu_accum += milliseconds;
#endif
            }
            slot.pre_timed = false;
        }
        slot.pending = false;
    }
    check(vkResetCommandPool(s.device, slot.pool, 0), "reset command pool");
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    check(vkBeginCommandBuffer(slot.cmd, &begin), "begin GE chunk");
    s.slot_index = index;
    if (index != kCommandSlotCapacity)
        s.ge_slot = index;
    s.cmd = slot.cmd;
    s.recording = true;
    s.has_commands = false;
    s.chunk_draws = 0;
    s.rendering = false;
    // Earlier submissions may have written anything this chunk reads.
    s.unflushed = true;
    s.bound_graphics = s.bound_compute = VK_NULL_HANDLE;
    s.pre_open = false;
    bind_sets(s, s.cmd);
    if (slot.queries) {
        if (s.ctx.host_query_reset && vkResetQueryPool)
            vkResetQueryPool(s.device, slot.queries, 0, 4);
        else if (vkCmdResetQueryPool)
            vkCmdResetQueryPool(slot.cmd, slot.queries, 0, 4);
        else
            throw std::runtime_error("Vulkan device cannot reset timestamp queries");
        vkCmdWriteTimestamp(slot.cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, slot.queries, 0);
        slot.timed = true;
    }
}
constexpr UINT kPresentSlot = kCommandSlotCapacity;
void begin(State &s, UINT slot = UINT_MAX) {
    if (s.recording)
        return;
    // The upload and vertex arenas are each split into two halves. Lists fill
    // one half; once it is a quarter used, the next list moves to the other
    // half, waiting only for the GPU to finish the last chunk that used it.
    // Restarting only when the GPU was completely idle (as before) drained the
    // whole queue every time the arena filled, which a deep queue never avoids.
    if (s.arena_fence == 0u || completed_value(s) >= s.arena_fence) {
        s.used = s.arena_base;
        s.vertex_used = s.vertex_base;
    } else if (s.used - s.arena_base > kUploadBytes / 8u || s.vertex_used - s.vertex_base > kVertexArenaBytes / 8u) {
        const UINT other = s.arena_half ^ 1u;
        if (s.half_fence[other] != 0u && completed_value(s) < s.half_fence[other])
            wait_value(s, s.half_fence[other], kWaitArena);
        s.half_fence[s.arena_half] = s.arena_fence;
        s.arena_half = other;
        s.arena_base = other * (kUploadBytes / 2u);
        s.vertex_base = other * (kVertexArenaBytes / 2u);
        s.used = s.arena_base;
        s.vertex_used = s.vertex_base;
    }
    s.frame_fence = 0;
    // A new list continues the slot rotation. Always reopening slot 0 made
    // every list wait for the first chunk of the previous one.
    if (slot == UINT_MAX)
        slot = (s.ge_slot + 1u) % command_slot_count();
    open_chunk(s, slot);
}
// Close and submit the recording chunk without waiting for it.
UINT64 allocate(State &s, UINT64 bytes, UINT64 alignment);
void push_compute(State &s, VkCommandBuffer cmd, View constants, View source, View destination, View depth = {});
void submit_chunk(State &s) {
    end_rendering(s);
    CommandSlot &chunk = s.slots[s.slot_index];
    if (s.pre_open && !s.vertex_groups.empty()) {
        // One VertexBatchCS dispatch for every job of the chunk, in pieces
        // within the dispatch size limit (and storage offset alignment).
        constexpr std::size_t kGroupsPerDispatch = 32768u;
        const std::size_t groups = s.vertex_groups.size() / 4u;
        const auto table = allocate(s, s.vertex_groups.size() * 4u, 256);
        std::memcpy(s.mapped + table, s.vertex_groups.data(), s.vertex_groups.size() * 4u);
        vkCmdBindPipeline(chunk.pre, VK_PIPELINE_BIND_POINT_COMPUTE, s.vertex_batch_pipeline);
        for (std::size_t first = 0; first < groups; first += kGroupsPerDispatch) {
            push_compute(s, chunk.pre, {}, {s.upload.buffer, 0}, {s.vertex_arena.buffer, 0},
                         {s.upload.buffer, table + first * 16u});
            vkCmdDispatch(chunk.pre, static_cast<UINT>(std::min(kGroupsPerDispatch, groups - first)), 1, 1);
        }
        s.vertex_groups.clear();
    }
    // Readback copies become host-visible, and the next submission on this
    // queue observes everything written here.
    memory_barrier(s.cmd, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                   VK_PIPELINE_STAGE_ALL_COMMANDS_BIT | VK_PIPELINE_STAGE_HOST_BIT,
                   VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT | VK_ACCESS_HOST_READ_BIT);
    if (chunk.timed && chunk.queries)
        vkCmdWriteTimestamp(s.cmd, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, chunk.queries, 1);
    check(vkEndCommandBuffer(s.cmd), "close GE chunk");
    s.upload.flush(s.used);
    if (s.pre_open) {
        // The decoded vertices become the chunk's vertex buffers.
        VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
        barrier.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT;
        vkCmdPipelineBarrier(chunk.pre, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, VK_PIPELINE_STAGE_VERTEX_INPUT_BIT, 0, 1,
                             &barrier, 0, nullptr, 0, nullptr);
        if (chunk.pre_timed)
            vkCmdWriteTimestamp(chunk.pre, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, chunk.queries, 3);
        check(vkEndCommandBuffer(chunk.pre), "close vertex commands");
        const VkCommandBuffer buffers[]{chunk.pre, s.cmd};
        chunk.fence_value = submit_queue(s, buffers, 2);
        s.pre_open = false;
    } else {
        chunk.fence_value = submit_queue(s, &s.cmd, 1);
    }
    ++s.executions;
    ++stats.submissions;
    chunk.pending = true;
    s.frame_fence = chunk.fence_value;
    s.arena_fence = chunk.fence_value;
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
// Submit the recording chunk and wait for it (diagnostics and captures).
void submit_and_wait(State &s) {
    submit_chunk(s);
    wait_value(s, s.slots[s.slot_index].fence_value, kWaitSync);
    s.slots[s.slot_index].pending = false;
}
UINT64 allocate(State &s, UINT64 bytes, UINT64 alignment) {
    alignment = std::max<UINT64>(alignment, s.storage_alignment);
    s.used = (s.used + alignment - 1) & ~(alignment - 1);
    if (bytes > s.arena_base + kUploadBytes / 2u - s.used)
        throw std::runtime_error("MotorStorm Vulkan upload arena exhausted");
    const auto offset = s.used;
    s.used += bytes;
    return offset;
}

// ---------------------------------------------------------------------------
// Descriptors and dispatch.
VkWriteDescriptorSet buffer_write(UINT binding, VkDescriptorType type, const VkDescriptorBufferInfo *info) {
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstBinding = binding;
    write.descriptorCount = 1;
    write.descriptorType = type;
    write.pBufferInfo = info;
    return write;
}
VkWriteDescriptorSet image_write(UINT binding, const VkDescriptorImageInfo *info) {
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstBinding = binding;
    write.descriptorCount = 1;
    write.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
    write.pImageInfo = info;
    return write;
}
// Compute bindings: constants (b0), source (t1), destination (u2), depth snapshot (t5).
void push_compute(State &s, VkCommandBuffer cmd, View constants, View source, View destination, View depth) {
    const VkDescriptorBufferInfo infos[]{
        {constants.buffer ? constants.buffer : s.upload.buffer, constants.offset, sizeof(Constants)},
        {source.buffer ? source.buffer : s.upload.buffer, source.offset, VK_WHOLE_SIZE},
        {destination.buffer ? destination.buffer : s.decode_scratch[1].buffer, destination.offset, VK_WHOLE_SIZE},
        {depth.buffer ? depth.buffer : s.upload.buffer, depth.offset, VK_WHOLE_SIZE}};
    const VkWriteDescriptorSet writes[]{buffer_write(0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, &infos[0]),
                                        buffer_write(4, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &infos[1]),
                                        buffer_write(6, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &infos[2]),
                                        buffer_write(8, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &infos[3])};
    vkCmdPushDescriptorSetKHR(cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.layout, 0, 4, writes);
}
void compute_with(State &s, VkPipeline pipeline, View constants, View source, View destination, UINT width,
                  UINT height) {
    outside(s);
    if (s.bound_compute != pipeline) {
        vkCmdBindPipeline(s.cmd, VK_PIPELINE_BIND_POINT_COMPUTE, pipeline);
        s.bound_compute = pipeline;
    }
    push_compute(s, s.cmd, constants, source, destination);
    vkCmdDispatch(s.cmd, (width + 7) / 8, (height + 7) / 8, 1);
    wrote(s);
}
View upload_view(State &s, UINT64 offset) { return {s.upload.buffer, offset}; }
void compute(State &s, VkPipeline pipeline, const Constants &constants, View source, View destination, UINT width,
             UINT height) {
    const auto offset = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + offset, &constants, sizeof(constants));
    compute_with(s, pipeline, upload_view(s, offset), source, destination, width, height);
}

// ---------------------------------------------------------------------------
// Render targets.
bool hud_tag_enabled(const State &s, const Surface &color, std::uint32_t stride) {
    const bool separate_hud = (s.post.active() && s.post.hud_ungraded) ||
                              (select_upscaler(s.scale_settings) == Upscaler::Sgsr1Spatial && s.antialiasing != 1);
    return s.racing && separate_hud && (stride == 480u || stride == 512u) &&
           color.address >= 0x04000000u && color.address < 0x04200000u;
}
VkBuffer resolve_surface(State &s, Surface &surface) {
    sync_buffer(s, surface);
    if (surface.raster_half == 2)
        return surface.image.buffer;
    if (surface.native_version != surface.version) {
        Constants constants{};
        constants.surface = {surface.stride, surface.height, surface.raster_stride(), 0};
        constants.mode[0] = surface.format;
        constants.render[0] = surface.raster_half;
        compute(s, s.resolve_pipeline, constants, {surface.image.buffer, 0}, {surface.native.buffer, 0},
                surface.stride, surface.height);
        surface.native_version = surface.version;
    }
    return surface.native.buffer;
}
void load_surface(State &s, Surface &surface, const psprecomp::GuestMemory &memory) {
    if (surface.loaded)
        return;
    std::vector<std::uint8_t> guest(static_cast<std::size_t>(surface.guest_bytes()));
    if (surface.readback_pending && !lazy_publish_enabled()) {
        memory.copy_out(surface.address, guest);
    } else {
        const bool armed = memory.vram_hook_armed();
        memory.arm_vram_hook(false);
        memory.copy_out(surface.address, guest);
        memory.arm_vram_hook(armed);
    }
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
    buffer_written(surface);
    if (surface.raster_half == 2) {
        outside(s);
        copy_buffer(s, surface.image.buffer, 0, s.upload.buffer, offset, surface.bytes());
        wrote(s);
    } else {
        Constants constants{};
        constants.surface = {surface.stride, surface.height, surface.raster_stride(), 0};
        constants.render[0] = surface.raster_half;
        compute(s, s.expand_pipeline, constants, upload_view(s, offset), {surface.image.buffer, 0},
                surface.raster_stride(), surface.raster_height());
    }
    surface.aspect_scale = 1.0f;
    surface.loaded = true;
    ++surface.version;
    surface.touch_all();
    s.has_commands = true;
}
void gpu_sync_impl(psprecomp::GuestMemory &memory);
Surface &get_surface(State &s, psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t stride,
                     std::uint32_t height, std::uint32_t bpp, std::uint32_t format = 4) {
    address = physical(address);
    for (const auto &candidate : s.surfaces)
        if (candidate->address == address && candidate->stride == stride && candidate->bpp == bpp &&
            candidate->height >= height && candidate->raster_half == s.raster_half) {
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
            gpu_sync_impl(memory);
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
    target->image = make_buffer(target->bytes(), Memory::Device);
#if defined(__ANDROID__)
    if (s.pixel_path == PixelPath::FixedFunctionProgrammable)
        target->locks = make_buffer(std::max<UINT64>(target->bytes(), 4), Memory::Device);
#endif
    target->readback = make_buffer(target->native_bytes(), Memory::Readback);
    if (s.raster_half != 2)
        target->native = make_buffer(target->native_bytes(), Memory::Device);
    s.surfaces.push_back(std::move(target));
    load_surface(s, *s.surfaces.back(), memory);
    return *s.surfaces.back();
}

// ---------------------------------------------------------------------------
// Textures.
constexpr UINT64 kDecodeScratchBytes = 4ull * 1024 * 1024 + 64 * 1024;
UINT decode_pitch(UINT width) { return ((width * 4u + 255u) & ~255u) / 4u; }
void copy_scratch_to_mip(State &s, UINT index, VkImage image, UINT mip, UINT width, UINT height) {
    outside(s);
    VkBufferImageCopy region{};
    region.bufferRowLength = decode_pitch(width);
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, mip, 0, 1};
    region.imageExtent = {width, height, 1};
    vkCmdCopyBufferToImage(s.cmd, s.decode_scratch[index].buffer, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1,
                           &region);
    wrote(s);
}
constexpr UINT64 kIdentifyRingBytes = 48ull * 1024 * 1024;
void queue_identify_copy(State &s, std::uint64_t key, UINT width, UINT height) {
    const UINT pitch = decode_pitch(width);
    const UINT64 bytes = static_cast<UINT64>(pitch) * 4u * height;
    if (!s.identify_ring)
        s.identify_ring = make_buffer(kIdentifyRingBytes, Memory::Readback);
    UINT64 start = s.identify_head;
    if (start % kIdentifyRingBytes + bytes > kIdentifyRingBytes)
        start += kIdentifyRingBytes - start % kIdentifyRingBytes;
    if (bytes > kIdentifyRingBytes || start + bytes - s.identify_tail > kIdentifyRingBytes) {
        s.identify_failed.push_back(key);
        return;
    }
    outside(s);
    copy_buffer(s, s.identify_ring.buffer, start % kIdentifyRingBytes, s.decode_scratch[0].buffer, 0, bytes);
    wrote(s);
    s.identify_copies.push_back({key, width, height, pitch, start, start + bytes, s.executions, 0});
    s.identify_head = start + bytes;
}
Surface *drawn_target(State &s, std::uint32_t address, std::uint32_t bytes, bool palette) {
    address = physical(address);
    for (const auto &surface : s.surfaces)
        if (surface->dirty && (!palette || surface->bpp == 4u) && address >= surface->address &&
            static_cast<UINT64>(address) + bytes <= surface->address + surface->guest_bytes() &&
            (!palette || (address - surface->address) % 4u == 0u))
            return surface.get();
    return nullptr;
}
// Decode constants whose palette bytes (commands[]) are copied from the
// target that rendered them. Empty: the palette target is gone.
View gpu_clut_constants(State &s, const Constants &constants, const GpuTexture &texture) {
    Surface *target = drawn_target(s, texture.gpu_clut_address, texture.gpu_clut_bytes, true);
    if (!target)
        return {};
    if (!s.clut_constants)
        s.clut_constants = make_buffer(UINT64{State::kClutConstantSlots} * State::kClutConstantStride, Memory::Device);
    const UINT64 slot = UINT64{s.clut_constant_slot++ % State::kClutConstantSlots} * State::kClutConstantStride;
    const auto offset = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + offset, &constants, sizeof(constants));
    const VkBuffer resolved = resolve_surface(s, *target);
    outside(s);
    copy_buffer(s, s.clut_constants.buffer, slot, s.upload.buffer, offset, sizeof(constants));
    // The palette overwrites the start of commands[]: order the two copies.
    memory_barrier(s.cmd, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    // 32-bit target pixels are the palette's bytes, one word per pixel.
    copy_buffer(s, s.clut_constants.buffer, slot, resolved, physical(texture.gpu_clut_address) - target->address,
                texture.gpu_clut_bytes);
    wrote(s);
    return {s.clut_constants.buffer, slot};
}
void decode_level(State &s, const GpuTexture &texture, UINT level, UINT index) {
    const auto &raw = texture.raw[level];
    Constants constants{};
    std::copy(texture.clut.begin(), texture.clut.end(), constants.commands.begin());
    constants.surface = {raw.width, raw.height, decode_pitch(raw.width), raw.stride};
    constants.mode = {texture.format, (texture.texture_mode & 1u) != 0u ? 1u : 0u, texture.clut_mode, level};
    constants.feedback = {texture.texture_mode, 0, 0, 0};
    View source{};
    Surface *source_target = nullptr;
    if (texture.gpu_source) {
        source_target = drawn_target(s, texture.gpu_source_address, 1u, false);
        if (!source_target)
            throw std::runtime_error("MotorStorm GPU texture source target vanished");
        source = {resolve_surface(s, *source_target), 0};
        constants.replace = {1u, source_target->bpp, physical(texture.gpu_source_address) - source_target->address,
                             0u};
    } else {
        const auto padded = (raw.bytes.size() + 3u) & ~std::size_t{3};
        const auto offset = allocate(s, padded + 4u, 4);
        std::memcpy(s.mapped + offset, raw.bytes.data(), raw.bytes.size());
        std::memset(s.mapped + offset + raw.bytes.size(), 0, padded + 4u - raw.bytes.size());
        source = upload_view(s, offset);
        if (texture.gpu_overlay && level == 0u) {
            // Guest bytes first, then the drawn parts from each overlapping
            // 32-bit target (its resolved words are the guest bytes).
            Buffer composed = make_buffer(padded + 4u, Memory::Device);
            outside(s);
            copy_buffer(s, composed.buffer, 0, s.upload.buffer, offset, padded + 4u);
            wrote(s);
            const UINT64 begin_address = physical(texture.gpu_source_address), end = begin_address + raw.bytes.size();
            for (const auto &surface : s.surfaces) {
                const UINT64 first = std::max<UINT64>(begin_address, surface->address);
                const UINT64 last = std::min<UINT64>(end, surface->address + surface->guest_bytes());
                if (!surface->dirty || first >= last)
                    continue;
                const VkBuffer resolved = resolve_surface(s, *surface);
                outside(s);
                copy_buffer(s, composed.buffer, first - begin_address, resolved, first - surface->address,
                            last - first);
                wrote(s);
            }
            source = {composed.buffer, 0};
            s.transient.push_back(std::move(composed));
        }
    }
    View palette{};
    if (texture.gpu_clut)
        palette = gpu_clut_constants(s, constants, texture);
    const VkPipeline pipeline = source_target ? s.decode_target_pipeline : s.decode_pipeline;
    const View destination{s.decode_scratch[index].buffer, 0};
    if (palette.buffer)
        compute_with(s, pipeline, palette, source, destination, raw.width, raw.height);
    else
        compute(s, pipeline, constants, source, destination, raw.width, raw.height);
}
void decode_into(State &s, const GpuTexture &texture, VkImage image, UINT mips) {
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
            compute(s, s.mip_pipeline, constants, {s.decode_scratch[current].buffer, 0},
                    {s.decode_scratch[target].buffer, 0}, next_width, next_height);
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
    if (!s.enhanced_filtering || texture.raw.size() > 1u || texture.streaming)
        return static_cast<UINT>(texture.raw.size());
    UINT count = 1, size = std::max(texture.width, texture.height);
    while (size > 1u) {
        size /= 2u;
        ++count;
    }
    return count;
}
Texture &get_texture(State &s, const GpuTexture &texture) {
    if (auto found = s.textures.find(texture.key); found != s.textures.end()) {
        auto &cached = found->second;
        cached.last_used = s.fence_value;
        if (texture.streaming && cached.generation != texture.generation && !texture.raw.empty() &&
            cached.width == texture.width && cached.height == texture.height &&
            cached.mips == mip_count_for(s, texture)) {
            image_layout(s, cached.image.image, cached.mips, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                         VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
            decode_into(s, texture, cached.image.image, cached.mips);
            image_layout(s, cached.image.image, cached.mips, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
            cached.generation = texture.generation;
            ++stats.streamed_texture_updates;
            return cached;
        }
        if (!texture.streaming || cached.generation == texture.generation)
            return cached;
        s.texture_bytes -= cached.bytes;
        s.transient_images.push_back(std::move(cached.image));
        s.textures.erase(found);
    }
    Texture target;
    target.last_used = s.fence_value;
    const UINT mips = mip_count_for(s, texture);
    target.image = make_image(texture.width, texture.height, mips, VK_FORMAT_R8G8B8A8_UNORM);
    target.width = texture.width;
    target.height = texture.height;
    target.mips = mips;
    target.generation = texture.generation;
    image_layout(s, target.image.image, mips, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
    if (!texture.raw.empty()) {
        decode_into(s, texture, target.image.image, mips);
        UINT w = texture.width, h = texture.height;
        for (UINT mip = 0; mip < mips; ++mip) {
            target.bytes += static_cast<UINT64>(w) * h * 4u;
            w = std::max(1u, w / 2u);
            h = std::max(1u, h / 2u);
        }
    } else {
        UINT w = texture.width, h = texture.height;
        std::vector<VkBufferImageCopy> regions;
        for (UINT mip = 0; mip < mips; ++mip) {
            target.bytes += texture.levels[mip].size() * 4;
            const UINT64 bytes = static_cast<UINT64>(w) * h * 4u;
            const auto offset = allocate(s, bytes, 256);
            std::memcpy(s.mapped + offset, texture.levels[mip].data(),
                        static_cast<std::size_t>(std::min<UINT64>(bytes, texture.levels[mip].size() * 4u)));
            VkBufferImageCopy region{};
            region.bufferOffset = offset;
            region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, mip, 0, 1};
            region.imageExtent = {w, h, 1};
            regions.push_back(region);
            w = std::max(1u, w / 2u);
            h = std::max(1u, h / 2u);
        }
        outside(s);
        vkCmdCopyBufferToImage(s.cmd, s.upload.buffer, target.image.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                               static_cast<UINT>(regions.size()), regions.data());
        wrote(s);
    }
    image_layout(s, target.image.image, mips, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                 VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    ++stats.texture_uploads;
    s.has_commands = true;
    s.texture_bytes += target.bytes;
    return s.textures.emplace(texture.key, std::move(target)).first->second;
}
VkFormat replacement_format(textures::Format format) {
    switch (format) {
    case textures::Format::Bc1: return VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
    case textures::Format::Bc2: return VK_FORMAT_BC2_UNORM_BLOCK;
    case textures::Format::Bc3: return VK_FORMAT_BC3_UNORM_BLOCK;
    case textures::Format::Bc7: return VK_FORMAT_BC7_UNORM_BLOCK;
    default: return VK_FORMAT_R8G8B8A8_UNORM;
    }
}
constexpr UINT64 kReplacementUploadsPerList = 16ull * 1024 * 1024;
constexpr UINT kReplacementCountPerList = 8;
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
    if ((block && ((base.width & 3u) != 0u || (base.height & 3u) != 0u)) || (block && !s.ctx.bc)) {
        log_line("TEXTURE", "replacement rejected: " + image->source.string() +
                                (block && !s.ctx.bc ? " (no BC texture support)"
                                                    : " (block-compressed size must be a multiple of 4)"));
        State::Replacement rejected;
        rejected.rejected = true;
        s.replacements.emplace(hash, std::move(rejected));
        return nullptr;
    }
    const UINT mips = static_cast<UINT>(image->levels.size());
    const UINT block_bytes = image->format == textures::Format::Bc1 ? 8u : 16u;
    // A dedicated staging buffer keeps replacements out of the shared upload arena.
    UINT64 staging_bytes = 0;
    std::vector<UINT64> offsets(mips);
    for (UINT mip = 0; mip < mips; ++mip) {
        offsets[mip] = staging_bytes;
        const auto &level = image->levels[mip];
        staging_bytes += (static_cast<UINT64>(level.row_pitch) * level.rows + 15u) & ~UINT64{15u};
    }
    State::Replacement target;
    target.image = make_image(base.width, base.height, mips, replacement_format(image->format));
    Buffer staging = make_buffer(staging_bytes, Memory::Upload);
    std::vector<VkBufferImageCopy> regions;
    for (UINT mip = 0; mip < mips; ++mip) {
        const auto &level = image->levels[mip];
        std::memcpy(staging.mapped + offsets[mip], level.data.data(),
                    std::min<std::size_t>(level.data.size(), static_cast<std::size_t>(level.row_pitch) * level.rows));
        VkBufferImageCopy region{};
        region.bufferOffset = offsets[mip];
        region.bufferRowLength = block ? level.row_pitch / block_bytes * 4u : level.row_pitch / 4u;
        region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, mip, 0, 1};
        region.imageExtent = {level.width, level.height, 1};
        regions.push_back(region);
    }
    staging.flush(staging_bytes);
    image_layout(s, target.image.image, mips, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
    vkCmdCopyBufferToImage(s.cmd, staging.buffer, target.image.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, mips,
                           regions.data());
    wrote(s);
    image_layout(s, target.image.image, mips, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                 VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    s.transient.push_back(std::move(staging));
    target.bytes = bytes;
    target.no_alpha = image->no_alpha;
    target.last_used = s.fence_value;
    s.replacement_bytes += bytes;
    s.replacement_uploaded_in_list += bytes;
    ++s.replacement_count_in_list;
    s.has_commands = true;
    ++stats.replacement_uploads;
    return &s.replacements.emplace(hash, std::move(target)).first->second;
}
// Expand native words into raster words at `destination` + `from`. Storage
// descriptors need aligned offsets; an unaligned tail goes through a scratch
// buffer and a copy.
void expand_into(State &s, View source, VkBuffer destination, UINT64 from, const Constants &constants, UINT width,
                 UINT height) {
    if (from % s.storage_alignment == 0u) {
        compute(s, s.expand_pipeline, constants, source, {destination, from}, width, height);
        return;
    }
    const UINT64 bytes = static_cast<UINT64>(constants.surface[2]) * height * 4u;
    Buffer scratch = make_buffer(bytes, Memory::Device);
    compute(s, s.expand_pipeline, constants, source, {scratch.buffer, 0}, width, height);
    outside(s);
    copy_buffer(s, destination, from, scratch.buffer, 0, bytes);
    wrote(s);
    s.transient.push_back(std::move(scratch));
}
VkBuffer feedback_snapshot(State &s, const psprecomp::GuestMemory &memory, const GpuTexture &texture,
                           std::array<std::uint32_t, 4> &constants, const Surface::Rect *sampled = nullptr,
                           VkImageView *hardware_view = nullptr, const Surface *draw_color = nullptr) {
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
    const bool scaled = half != 2u;
    UINT64 bytes = std::max<UINT64>(source ? source->native_bytes() : 0ull,
                            (first + static_cast<UINT64>(texture.feedback_stride) * texture.height) * 4);
    const UINT raster_pitch = scaled ? source->raster_stride() : 0u;
    if (scaled) {
        const auto rows = static_cast<UINT>((bytes + texture.feedback_stride * 4 - 1) / (texture.feedback_stride * 4));
        bytes = static_cast<UINT64>(raster_pitch) * raster_extent(rows, half) * 4;
    }
    auto initialize_tail = [&](VkBuffer destination, UINT64 from) {
        if (from >= bytes)
            return;
        UINT64 native_from = from, native_bytes = bytes - from;
        if (scaled) {
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
        if (!scaled) {
            outside(s);
            copy_buffer(s, destination, from, s.upload.buffer, offset, native_bytes);
            wrote(s);
        } else {
            Constants expand{};
            expand.surface = {source->stride, static_cast<UINT>(native_bytes / 4 / source->stride), raster_pitch, 0};
            expand.render[0] = half;
            expand_into(s, upload_view(s, offset), destination, from, expand, raster_pitch,
                        raster_extent(expand.surface[1], half));
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
        Buffer image = make_buffer(bytes, Memory::Device);
        initialize_tail(image.buffer, 0);
        const VkBuffer result = image.buffer;
        s.transient.push_back(std::move(image));
        return result;
    }
#if defined(__ANDROID__)
    // Sample the compact color image instead of packing it back to R32. A draw
    // that also writes the image samples a copy so the attachment stays writable.
    if (!scaled && hardware_view && source->hw_color && source->hw_matches && !source->image_newer &&
        source->raster_stride() > 0 && source->raster_height() > 0) {
        const bool writing = draw_color == source;
        const bool attached = s.rendering_hardware && (s.hw_pass_color == source || s.hw_pass_depth == source);
        if (!writing && !attached && source->hw_color_layout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
            *hardware_view = source->hw_color.view;
            constants[0] = 3;
            return source->image.buffer;
        }
        if (!writing) {
            transition_image(s, source->hw_color.image, source->hw_color_layout,
                             VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT);
            *hardware_view = source->hw_color.view;
            constants[0] = 3;
            s.unflushed = false;
            return source->image.buffer;
        }
        const UINT width = source->raster_stride(), height = source->raster_height();
        if (source->hw_sample && (source->hw_sample_width != width || source->hw_sample_height != height)) {
            source->hw_sample.reset();
            source->hw_sample_layout = VK_IMAGE_LAYOUT_UNDEFINED;
            source->hw_sample_version = ~0ull;
        }
        if (source->hw_sample && source->hw_sample_width == width && source->hw_sample_height == height &&
            source->hw_sample_layout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL &&
            source->hw_sample_list == s.list_serial) {
            *hardware_view = source->hw_sample.view;
            constants[0] = 3;
            return source->image.buffer;
        }
        if (!source->hw_sample) {
            source->hw_sample = make_image(width, height, 1, VK_FORMAT_R8G8B8A8_UNORM);
            source->hw_sample_width = width;
            source->hw_sample_height = height;
            source->hw_sample_layout = VK_IMAGE_LAYOUT_UNDEFINED;
        }
        transition_image(s, source->hw_color.image, source->hw_color_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                         VK_IMAGE_ASPECT_COLOR_BIT);
        transition_image(s, source->hw_sample.image, source->hw_sample_layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                         VK_IMAGE_ASPECT_COLOR_BIT);
        VkImageCopy region{};
        region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        region.extent = {width, height, 1};
        vkCmdCopyImage(s.cmd, source->hw_color.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, source->hw_sample.image,
                       VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
        transition_image(s, source->hw_sample.image, source->hw_sample_layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                         VK_IMAGE_ASPECT_COLOR_BIT);
        transition_image(s, source->hw_color.image, source->hw_color_layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
                         VK_IMAGE_ASPECT_COLOR_BIT);
        source->hw_sample_version = source->version;
        source->hw_sample_list = s.list_serial;
        source->hw_sample_dirty.clear();
        *hardware_view = source->hw_sample.view;
        constants[0] = 3;
        wrote(s);
        s.unflushed = false;
        return source->image.buffer;
    }
#endif
    const bool fresh = !source->snapshot || source->snapshot_bytes < bytes;
    if (fresh) {
        if (source->snapshot)
            s.transient.push_back(std::move(source->snapshot));
        source->snapshot = make_buffer(bytes, Memory::Device);
        source->snapshot_bytes = bytes;
        source->snapshot_version = ~0ull;
    }
    // Pixels this draw reads, in surface coordinates: the texels its UVs
    // cover (plus a filter margin), else the whole texture.
    const int origin_x = static_cast<int>(first % source->stride), origin_y = static_cast<int>(first / source->stride);
    Surface::Rect read{origin_x, origin_y, origin_x + static_cast<int>(texture.width),
                       origin_y + static_cast<int>(texture.height)};
    if (sampled)
        read = {origin_x + sampled->left, origin_y + sampled->top, origin_x + sampled->right,
                origin_y + sampled->bottom};
    const bool inside = read.left >= 0 && read.top >= 0 && read.right <= static_cast<int>(source->stride) &&
                        read.bottom <= static_cast<int>(source->height);
    const bool clean = row_tracking_enabled() && inside && source->snapshot_version != ~0ull &&
                       source->snapshot_clean(read);
    if (source->snapshot_version != source->version && clean) {
        ++snapshot_reuses;
    } else if (source->snapshot_version != source->version) {
        if (fresh || source->snapshot_guest_epoch != s.fence_value) {
            initialize_tail(source->snapshot.buffer, source->bytes());
            source->snapshot_guest_epoch = s.fence_value;
        }
#if defined(__ANDROID__)
        const bool was_attached = s.rendering && s.attachment_color == source;
#else
        const bool was_attached = false;
#endif
        sync_buffer(s, *source);
        outside(s);
        copy_buffer(s, source->snapshot.buffer, 0, source->image.buffer, 0, source->bytes());
        wrote(s);
        source->snapshot_version = source->version;
        if (pass_stats_enabled() && snapshot_copies < 40)
            log_line("GE", "snapshot src=" + std::to_string(source->address) + " stride=" + std::to_string(source->stride) +
                               " h=" + std::to_string(source->height) + " tex=" + std::to_string(texture.width) + "x" +
                               std::to_string(texture.height) + " read=" + std::to_string(read.left) + "," +
                               std::to_string(read.top) + "-" + std::to_string(read.right) + "," +
                               std::to_string(read.bottom) + " sampled=" + std::to_string(sampled != nullptr) +
                               " dirty_rects=" + std::to_string(source->snapshot_dirty.size()) + " attached=" +
                               std::to_string(was_attached));
        source->snapshot_dirty.clear();
        ++snapshot_copies;
    }
    return source->snapshot.buffer;
}

// ---------------------------------------------------------------------------
// Initialization.
std::vector<std::uint32_t> words(const unsigned char *bytes, std::size_t size) {
    std::vector<std::uint32_t> result((size + 3) / 4);
    std::memcpy(result.data(), bytes, size);
    return result;
}
struct Spirv {
    std::string_view name;
    const unsigned char *data;
    std::size_t size;
};
const Spirv &spirv(std::string_view name) {
#define MOTORSTORM_SPIRV(entry) Spirv{#entry, g_motorstorm_spirv_##entry, sizeof(g_motorstorm_spirv_##entry)}
    static const Spirv shaders[]{
        MOTORSTORM_SPIRV(VS),          MOTORSTORM_SPIRV(VSPoint),       MOTORSTORM_SPIRV(PS),
        MOTORSTORM_SPIRV(PointGS),     MOTORSTORM_SPIRV(PresentVS),     MOTORSTORM_SPIRV(PresentPS),
        MOTORSTORM_SPIRV(ExpandCS),    MOTORSTORM_SPIRV(ResolveCS),     MOTORSTORM_SPIRV(CaptureCS),
        MOTORSTORM_SPIRV(DecodeCS),    MOTORSTORM_SPIRV(MipCS),         MOTORSTORM_SPIRV(VertexCS),
        MOTORSTORM_SPIRV(DecodeTargetCS), MOTORSTORM_SPIRV(PostResolveCS), MOTORSTORM_SPIRV(DebandCS),
#if defined(__ANDROID__)
        MOTORSTORM_SPIRV(PointVS),
        MOTORSTORM_SPIRV(PSLock),
        MOTORSTORM_SPIRV(PSNoRead),
        MOTORSTORM_SPIRV(PSTrivial),
        MOTORSTORM_SPIRV(PSNoShade),
        MOTORSTORM_SPIRV(PresentConvertCS),
        MOTORSTORM_SPIRV(VertexBatchCS),
        MOTORSTORM_SPIRV(VSFast),
        MOTORSTORM_SPIRV(PointVSFast),
        MOTORSTORM_SPIRV(PSFast),
        MOTORSTORM_SPIRV(PSFastAlpha),
        MOTORSTORM_SPIRV(PSFastAlphaEarly),
        MOTORSTORM_SPIRV(PSFastFeedback),
        MOTORSTORM_SPIRV(PSFastAlphaFeedback),
        MOTORSTORM_SPIRV(PSLoad),
        MOTORSTORM_SPIRV(PackColorCS),
        MOTORSTORM_SPIRV(PackDepthCS),
#endif
        MOTORSTORM_SPIRV(PostPS),      MOTORSTORM_SPIRV(PostCaptureCS), MOTORSTORM_SPIRV(PostColorCS),
        MOTORSTORM_SPIRV(PostPresentPS), MOTORSTORM_SPIRV(PostColorCaptureCS), MOTORSTORM_SPIRV(DepthResolveCS)};
#undef MOTORSTORM_SPIRV
    for (const auto &shader : shaders)
        if (shader.name == name)
            return shader;
    throw std::runtime_error(std::string("MotorStorm SPIR-V not compiled: ") + std::string(name));
}
VkShaderModule shader_module(State &s, std::string_view name) {
    const auto &shader = spirv(name);
    const auto code = words(shader.data, shader.size);
    VkShaderModuleCreateInfo info{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
    info.codeSize = shader.size;
    info.pCode = code.data();
    VkShaderModule result{};
    check(vkCreateShaderModule(s.device, &info, nullptr, &result), "create shader module");
    s.modules.push_back(result);
    return result;
}
// The SPIR-V entry point of a shader (VSPoint is the VS entry compiled without -fvk-invert-y).
const char *entry_of(std::string_view name) {
    if (name == "VSPoint")
        return "VS";
    if (name == "PSNoRead" || name == "PSTrivial" || name == "PSNoShade")
        return "PS";
    return spirv(name).name.data();
}
VkPipelineShaderStageCreateInfo stage(State &s, VkShaderStageFlagBits kind, std::string_view name) {
    VkPipelineShaderStageCreateInfo info{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    info.stage = kind;
    info.module = shader_module(s, name);
    info.pName = entry_of(name);
    return info;
}
// ---------------------------------------------------------------------------
// Persistent pipeline cache. Hardware-path pipelines are built the first time
// a GE state needs one, mid-race; without a cache every launch compiles them
// again on the guest thread (a stall of tens to hundreds of milliseconds each
// on mobile drivers). Android keeps it in the app's internal files directory.
// PSPRECOMP_MOTORSTORM_PIPELINE_CACHE=<file> chooses the file (any platform);
// =0 disables it. The header is checked against this device and driver, so a
// switch between the system and an imported driver starts an empty cache.
std::filesystem::path pipeline_cache_location() {
    if (const char *path = std::getenv("PSPRECOMP_MOTORSTORM_PIPELINE_CACHE"))
        return std::strcmp(path, "0") == 0 ? std::filesystem::path{} : std::filesystem::path(path);
#if defined(__ANDROID__)
    if (const char *files = SDL_GetAndroidInternalStoragePath())
        return std::filesystem::path(files) / "vulkan-pipelines.bin";
#endif
    return {};
}
std::vector<char> read_file(const std::filesystem::path &path) {
    std::vector<char> data;
    std::FILE *file = std::fopen(path.string().c_str(), "rb");
    if (!file)
        return data;
    char buffer[65536];
    for (std::size_t got; (got = std::fread(buffer, 1, sizeof(buffer), file)) > 0;)
        data.insert(data.end(), buffer, buffer + got);
    std::fclose(file);
    return data;
}
bool pipeline_cache_matches(const State &s, const std::vector<char> &data) {
    VkPipelineCacheHeaderVersionOne header{};
    if (data.size() < sizeof(header))
        return false;
    std::memcpy(&header, data.data(), sizeof(header));
    return header.headerSize >= sizeof(header) && header.headerVersion == VK_PIPELINE_CACHE_HEADER_VERSION_ONE &&
           header.vendorID == s.ctx.properties.vendorID && header.deviceID == s.ctx.properties.deviceID &&
           std::memcmp(header.pipelineCacheUUID, s.ctx.properties.pipelineCacheUUID, VK_UUID_SIZE) == 0;
}
void open_pipeline_cache(State &s) {
    s.pipeline_cache_file = pipeline_cache_location();
    if (s.pipeline_cache_file.empty())
        return;
    std::vector<char> data = read_file(s.pipeline_cache_file);
    const bool reused = pipeline_cache_matches(s, data);
    if (!reused)
        data.clear();
    VkPipelineCacheCreateInfo info{VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO};
    info.initialDataSize = data.size();
    info.pInitialData = data.empty() ? nullptr : data.data();
    if (vkCreatePipelineCache(s.device, &info, nullptr, &s.pipeline_cache) != VK_SUCCESS) {
        info.initialDataSize = 0;
        info.pInitialData = nullptr;
        if (vkCreatePipelineCache(s.device, &info, nullptr, &s.pipeline_cache) != VK_SUCCESS)
            s.pipeline_cache = VK_NULL_HANDLE;
    }
    log_line("GE", "pipeline cache " + s.pipeline_cache_file.string() + ": " +
                       (reused ? "loaded " + std::to_string(data.size()) + " bytes" : std::string("new")));
}
// Saves the cache when new pipelines were added, at most every ~10 s of
// presents (Android often ends the process without a clean shutdown).
void maybe_save_pipeline_cache(State &s, std::uint64_t presents) {
    if (!s.pipeline_cache_dirty || presents < s.pipeline_cache_saved_presents + 300u)
        return;
    s.pipeline_cache_saved_presents = presents;
    s.save_pipeline_cache();
}
VkPipeline create_compute(State &s, std::string_view name) {
    VkComputePipelineCreateInfo info{VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO};
    info.stage = stage(s, VK_SHADER_STAGE_COMPUTE_BIT, name);
    info.layout = s.layout;
    VkPipeline pipeline{};
    check(vkCreateComputePipelines(s.device, s.pipeline_cache, 1, &info, nullptr, &pipeline),
          std::string(name).c_str());
    return pipeline;
}
// GE draw pipelines (no attachments) or swapchain pipelines (one colour attachment).
VkPipeline create_graphics(State &s, std::string_view vs, std::string_view gs, std::string_view ps,
                           VkPrimitiveTopology topology, VkFormat color_format) {
    std::vector<VkPipelineShaderStageCreateInfo> stages{stage(s, VK_SHADER_STAGE_VERTEX_BIT, vs)};
    if (!gs.empty())
        stages.push_back(stage(s, VK_SHADER_STAGE_GEOMETRY_BIT, gs));
    stages.push_back(stage(s, VK_SHADER_STAGE_FRAGMENT_BIT, ps));
    const bool ge = color_format == VK_FORMAT_UNDEFINED;
    const VkVertexInputBindingDescription binding{0, sizeof(GpuVertex),
        vs == "PointVS" ? VK_VERTEX_INPUT_RATE_INSTANCE : VK_VERTEX_INPUT_RATE_VERTEX};
    const VkVertexInputAttributeDescription attributes[]{{0, 0, VK_FORMAT_R32G32B32_SFLOAT, 0},
                                                         {1, 0, VK_FORMAT_R32_UINT, 12},
                                                         {2, 0, VK_FORMAT_R32_UINT, 16},
                                                         {3, 0, VK_FORMAT_R32G32B32_SFLOAT, 20},
                                                         {4, 0, VK_FORMAT_R32_SFLOAT, 32}};
    VkPipelineVertexInputStateCreateInfo input{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    if (ge) {
        input.vertexBindingDescriptionCount = 1;
        input.pVertexBindingDescriptions = &binding;
        input.vertexAttributeDescriptionCount = 5;
        input.pVertexAttributeDescriptions = attributes;
    }
    VkPipelineInputAssemblyStateCreateInfo assembly{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    assembly.topology = topology;
    VkPipelineViewportStateCreateInfo viewport{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport.viewportCount = 1;
    viewport.scissorCount = 1;
    VkPipelineRasterizationStateCreateInfo raster{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    raster.cullMode = VK_CULL_MODE_NONE;
    raster.frontFace = VK_FRONT_FACE_CLOCKWISE;
    raster.depthClampEnable = s.ctx.depth_clamp ? VK_TRUE : VK_FALSE;  // D3D12 DepthClipEnable = FALSE
    raster.lineWidth = 1.0f;
    // D3D12 aliased lines follow the diamond-exit rule, which is Vulkan's Bresenham mode.
    VkPipelineRasterizationLineStateCreateInfoKHR line{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR};
    line.lineRasterizationMode = VK_LINE_RASTERIZATION_MODE_BRESENHAM_KHR;
    if (topology == VK_PRIMITIVE_TOPOLOGY_LINE_LIST && s.ctx.line_rasterization)
        raster.pNext = &line;
    VkPipelineMultisampleStateCreateInfo multisample{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineColorBlendAttachmentState blend{};
    blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT |
                           VK_COLOR_COMPONENT_A_BIT;
    VkPipelineColorBlendStateCreateInfo blending{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    blending.attachmentCount = ge ? 0u : 1u;
    blending.pAttachments = &blend;
#if defined(__ANDROID__)
    VkPipelineColorBlendAttachmentState ordered_blend[2]{};
    for (auto &attachment : ordered_blend) attachment.colorWriteMask = VK_COLOR_COMPONENT_R_BIT;
    VkPipelineColorBlendAttachmentState locked_blend{};
    locked_blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT;
    if (ge && s.pixel_path == PixelPath::OrderedAttachment) {
        if (!diag_flag("PSPRECOMP_MOTORSTORM_DIAG_NO_ROAA"))
            blending.flags = VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT;
        blending.attachmentCount = 2;
        blending.pAttachments = ordered_blend;
    } else if (ge && s.pixel_path == PixelPath::FixedFunctionProgrammable) {
        blending.attachmentCount = 1;
        blending.pAttachments = &locked_blend;
    }
#endif
    VkPipelineDepthStencilStateCreateInfo depth{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    const VkDynamicState dynamic_states[]{VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo dynamic{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamic.dynamicStateCount = 2;
    dynamic.pDynamicStates = dynamic_states;
    VkPipelineRenderingCreateInfo rendering{VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO};
    rendering.colorAttachmentCount = ge ? 0u : 1u;
    rendering.pColorAttachmentFormats = &color_format;
    VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    info.pNext = &rendering;
#if defined(__ANDROID__)
    if (ge && s.pixel_path == PixelPath::OrderedAttachment) {
        info.pNext = nullptr;
        info.renderPass = s.attachment_pass;
    } else if (ge && s.pixel_path == PixelPath::FixedFunctionProgrammable) {
        info.pNext = nullptr;
        info.renderPass = s.programmable_pass;
    } else if (!ge && !s.dynamic_rendering) {
        info.pNext = nullptr;
        info.renderPass = s.swapchain_pass;
    }
#endif
    info.stageCount = static_cast<UINT>(stages.size());
    info.pStages = stages.data();
    info.pVertexInputState = &input;
    info.pInputAssemblyState = &assembly;
    info.pViewportState = &viewport;
    info.pRasterizationState = &raster;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &depth;
    info.pColorBlendState = &blending;
    info.pDynamicState = &dynamic;
    info.layout = s.layout;
    VkPipeline pipeline{};
    check(vkCreateGraphicsPipelines(s.device, s.pipeline_cache, 1, &info, nullptr, &pipeline),
          (std::string("create pipeline ") + std::string(ps)).c_str());
    return pipeline;
}
void transition_image(State &s, VkImage image, VkImageLayout &current, VkImageLayout next, VkImageAspectFlags aspect) {
    if (!image || current == next)
        return;
    // Layout-specific stages. ALL_COMMANDS barriers make Turnip flush the
    // queue, and a hardware pack used to do several of them per draw.
    end_rendering(s);
    const auto stages_of = [](VkImageLayout layout) -> VkPipelineStageFlags {
        switch (layout) {
        case VK_IMAGE_LAYOUT_UNDEFINED:
            return VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            return VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            return VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            return VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT | VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT;
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            return VK_PIPELINE_STAGE_TRANSFER_BIT;
        default:
            return VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
        }
    };
    const auto access_of = [](VkImageLayout layout) -> VkAccessFlags {
        switch (layout) {
        case VK_IMAGE_LAYOUT_UNDEFINED:
            return 0;
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            return VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            return VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            return VK_ACCESS_SHADER_READ_BIT;
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
            return VK_ACCESS_TRANSFER_READ_BIT;
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            return VK_ACCESS_TRANSFER_WRITE_BIT;
        default:
            return VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        }
    };
    VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    barrier.srcAccessMask = access_of(current);
    barrier.dstAccessMask = access_of(next);
    barrier.oldLayout = current;
    barrier.newLayout = next;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = image;
    barrier.subresourceRange = {aspect, 0, 1, 0, 1};
    vkCmdPipelineBarrier(s.cmd, stages_of(current), stages_of(next), 0, 0, nullptr, 0, nullptr, 1, &barrier);
    current = next;
    wrote(s);
}
void pack_hardware(State &s, Surface &surface) {
#if !defined(__ANDROID__)
    (void)s;
    (void)surface;
#else
    if (!surface.hw_dirty || surface.address == 0)
        return;
    const auto pack_began = perf::now_ns();
    end_rendering(s);
    const UINT width = surface.raster_stride(), height = surface.raster_height();
    Constants constants{};
    constants.surface = {width, height, width, width};
    constants.mode[0] = surface.format;
    constants.render[0] = surface.raster_half;
    const auto cb = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + cb, &constants, sizeof(constants));
    const VkDescriptorBufferInfo constant_info{s.upload.buffer, cb, sizeof(Constants)};
    if (surface.hw_color) {
        transition_image(s, surface.hw_color.image, surface.hw_color_layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                         VK_IMAGE_ASPECT_COLOR_BIT);
        if (s.bound_compute != s.pack_color_pipeline) {
            vkCmdBindPipeline(s.cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.pack_color_pipeline);
            s.bound_compute = s.pack_color_pipeline;
        }
        const VkDescriptorBufferInfo color_info{surface.image.buffer, 0, VK_WHOLE_SIZE};
        const VkDescriptorImageInfo image_info{VK_NULL_HANDLE, surface.hw_color.view,
                                               VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
        const VkWriteDescriptorSet writes[]{buffer_write(0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, &constant_info),
                                            buffer_write(1, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &color_info),
                                            image_write(3, &image_info)};
        vkCmdPushDescriptorSetKHR(s.cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.layout, 0, 3, writes);
        vkCmdDispatch(s.cmd, (width + 7) / 8, (height + 7) / 8, 1);
        transition_image(s, surface.hw_color.image, surface.hw_color_layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
                         VK_IMAGE_ASPECT_COLOR_BIT);
    }
    if (surface.hw_depth) {
        transition_image(s, surface.hw_depth.image, surface.hw_depth_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                         VK_IMAGE_ASPECT_DEPTH_BIT);
        const UINT64 bytes = static_cast<UINT64>(width) * height * 2u + 4u;
        if (!s.hw_depth_staging || s.hw_depth_staging.size < bytes) {
            if (s.hw_depth_staging)
                s.transient.push_back(std::move(s.hw_depth_staging));
            s.hw_depth_staging = make_buffer(bytes, Memory::Device);
        }
        VkBufferImageCopy region{};
        region.imageSubresource = {VK_IMAGE_ASPECT_DEPTH_BIT, 0, 0, 1};
        region.imageExtent = {width, height, 1};
        vkCmdCopyImageToBuffer(s.cmd, surface.hw_depth.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               s.hw_depth_staging.buffer, 1, &region);
        VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
        barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        vkCmdPipelineBarrier(s.cmd, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, 0, 1,
                             &barrier, 0, nullptr, 0, nullptr);
        if (s.bound_compute != s.pack_depth_pipeline) {
            vkCmdBindPipeline(s.cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.pack_depth_pipeline);
            s.bound_compute = s.pack_depth_pipeline;
        }
        const VkDescriptorBufferInfo depth_info{surface.image.buffer, 0, VK_WHOLE_SIZE};
        const VkDescriptorBufferInfo bits_info{s.hw_depth_staging.buffer, 0, VK_WHOLE_SIZE};
        const VkWriteDescriptorSet writes[]{buffer_write(0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, &constant_info),
                                            buffer_write(2, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &depth_info),
                                            buffer_write(12, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &bits_info)};
        vkCmdPushDescriptorSetKHR(s.cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.layout, 0, 3, writes);
        vkCmdDispatch(s.cmd, (width + 7) / 8, (height + 7) / 8, 1);
        transition_image(s, surface.hw_depth.image, surface.hw_depth_layout,
                         VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL, VK_IMAGE_ASPECT_DEPTH_BIT);
    }
    // The compute writes land in the packed buffers. Make them visible to the
    // snapshot copy and to the next fragment shader without a full queue flush.
    VkMemoryBarrier packed{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
    packed.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
    packed.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT | VK_ACCESS_SHADER_READ_BIT | VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(s.cmd, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT |
                             VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                         0, 1, &packed, 0, nullptr, 0, nullptr);
    surface.hw_dirty = false;
    surface.hw_matches = true;
    surface.buffer_newer = true;
    surface.image_newer = false;
    wrote(s);
    s.unflushed = false;
    ++stats.hw_packs;
    stats.hw_pack_ns += perf::now_ns() - pack_began;
#endif
}
#if defined(__ANDROID__)
VkRenderPass make_hw_pass(State &s, VkAttachmentLoadOp load) {
    VkAttachmentDescription attachments[2]{};
    attachments[0].format = VK_FORMAT_R8G8B8A8_UNORM;
    attachments[0].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[0].loadOp = load;
    attachments[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[0].initialLayout = attachments[0].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    attachments[1].format = VK_FORMAT_D16_UNORM;
    attachments[1].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[1].loadOp = load;
    attachments[1].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[1].initialLayout = attachments[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    const VkAttachmentReference color{0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    const VkAttachmentReference depth{1, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL};
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &color;
    subpass.pDepthStencilAttachment = &depth;
    VkSubpassDependency dependency{};
    dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
    dependency.dstSubpass = 0;
    dependency.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT |
                              VK_PIPELINE_STAGE_TRANSFER_BIT | VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT |
                              VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
    dependency.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT |
                              VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
    dependency.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT |
                               VK_ACCESS_TRANSFER_WRITE_BIT | VK_ACCESS_SHADER_WRITE_BIT | VK_ACCESS_SHADER_READ_BIT;
    dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT |
                               VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT |
                               VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT | VK_ACCESS_SHADER_READ_BIT;
    VkRenderPassCreateInfo info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    info.attachmentCount = 2;
    info.pAttachments = attachments;
    info.subpassCount = 1;
    info.pSubpasses = &subpass;
    info.dependencyCount = 1;
    info.pDependencies = &dependency;
    VkRenderPass pass{};
    check(vkCreateRenderPass(s.device, &info, nullptr, &pass), "create hardware render pass");
    return pass;
}
VkPipeline create_hw_pipeline(State &s, std::string_view vs, std::string_view ps, VkPrimitiveTopology topology,
                              bool depth_test, bool depth_write, std::uint8_t depth_compare, bool blend,
                              std::uint8_t blend_op, std::uint8_t src_factor, std::uint8_t dst_factor,
                              std::uint8_t write_mask, std::uint8_t cull, bool dynamic_state) {
    const VkPipelineShaderStageCreateInfo stages[]{stage(s, VK_SHADER_STAGE_VERTEX_BIT, vs),
                                                    stage(s, VK_SHADER_STAGE_FRAGMENT_BIT, ps)};
    const VkVertexInputBindingDescription binding{0, sizeof(GpuVertex),
        vs == "PointVSFast" ? VK_VERTEX_INPUT_RATE_INSTANCE : VK_VERTEX_INPUT_RATE_VERTEX};
    const VkVertexInputAttributeDescription attributes[]{{0, 0, VK_FORMAT_R32G32B32_SFLOAT, 0},
                                                         {1, 0, VK_FORMAT_R32_UINT, 12},
                                                         {2, 0, VK_FORMAT_R32_UINT, 16},
                                                         {3, 0, VK_FORMAT_R32G32B32_SFLOAT, 20},
                                                         {4, 0, VK_FORMAT_R32_SFLOAT, 32}};
    VkPipelineVertexInputStateCreateInfo input{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    input.vertexBindingDescriptionCount = 1;
    input.pVertexBindingDescriptions = &binding;
    input.vertexAttributeDescriptionCount = 5;
    input.pVertexAttributeDescriptions = attributes;
    VkPipelineInputAssemblyStateCreateInfo assembly{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    assembly.topology = topology;
    VkPipelineViewportStateCreateInfo viewport{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport.viewportCount = 1;
    viewport.scissorCount = 1;
    VkPipelineRasterizationStateCreateInfo raster{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    raster.cullMode = static_cast<VkCullModeFlags>(cull);
    raster.frontFace = VK_FRONT_FACE_CLOCKWISE;
    raster.depthClampEnable = s.ctx.depth_clamp ? VK_TRUE : VK_FALSE;
    raster.lineWidth = 1.0f;
    VkPipelineRasterizationLineStateCreateInfoKHR line{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR};
    line.lineRasterizationMode = VK_LINE_RASTERIZATION_MODE_BRESENHAM_KHR;
    if (topology == VK_PRIMITIVE_TOPOLOGY_LINE_LIST && s.ctx.line_rasterization)
        raster.pNext = &line;
    VkPipelineMultisampleStateCreateInfo multisample{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo depth{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    depth.depthTestEnable = depth_test ? VK_TRUE : VK_FALSE;
    depth.depthWriteEnable = depth_write ? VK_TRUE : VK_FALSE;
    depth.depthCompareOp = static_cast<VkCompareOp>(depth_compare);
    VkPipelineColorBlendAttachmentState attachment{};
    attachment.blendEnable = blend ? VK_TRUE : VK_FALSE;
    attachment.srcColorBlendFactor = static_cast<VkBlendFactor>(src_factor);
    attachment.dstColorBlendFactor = static_cast<VkBlendFactor>(dst_factor);
    attachment.colorBlendOp = static_cast<VkBlendOp>(blend_op);
    attachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    attachment.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    attachment.alphaBlendOp = VK_BLEND_OP_ADD;
    attachment.colorWriteMask = write_mask;
    VkPipelineColorBlendStateCreateInfo blending{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    blending.attachmentCount = 1;
    blending.pAttachments = &attachment;
    VkDynamicState dynamic_states[16]{VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR,
                                     VK_DYNAMIC_STATE_BLEND_CONSTANTS};
    UINT dynamic_count = 3;
    if (dynamic_state) {
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE;
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE;
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_DEPTH_COMPARE_OP;
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_CULL_MODE;
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_COLOR_BLEND_ENABLE_EXT;
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_COLOR_BLEND_EQUATION_EXT;
        dynamic_states[dynamic_count++] = VK_DYNAMIC_STATE_COLOR_WRITE_MASK_EXT;
    }
    VkPipelineDynamicStateCreateInfo dynamic{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamic.dynamicStateCount = dynamic_count;
    dynamic.pDynamicStates = dynamic_states;
    VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    info.stageCount = 2;
    info.pStages = stages;
    info.pVertexInputState = &input;
    info.pInputAssemblyState = &assembly;
    info.pViewportState = &viewport;
    info.pRasterizationState = &raster;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &depth;
    info.pColorBlendState = &blending;
    info.pDynamicState = &dynamic;
    info.layout = s.layout;
    info.renderPass = s.hw_pass_load;
    VkPipeline pipeline{};
    check(vkCreateGraphicsPipelines(s.device, s.pipeline_cache, 1, &info, nullptr, &pipeline),
          (std::string("create hardware pipeline ") + std::string(ps)).c_str());
    return pipeline;
}
VkPipeline hw_pipeline_for(State &s, const State::HwPipeKey &key) {
    const bool dynamic = s.ctx.hw_dynamic_depth && s.ctx.hw_dynamic_blend && vkCmdSetDepthTestEnable &&
                         vkCmdSetDepthWriteEnable && vkCmdSetDepthCompareOp && vkCmdSetCullMode &&
                         vkCmdSetColorBlendEnableEXT && vkCmdSetColorBlendEquationEXT && vkCmdSetColorWriteMaskEXT;
    State::HwPipeKey pipe = key;
    if (dynamic) {
        // depth_write selects an alpha-tested shader variant and must stay in
        // the cache key even though the depth-write state itself is dynamic.
        pipe.depth_test = pipe.depth_compare = 0;
        pipe.blend = pipe.blend_op = pipe.src = pipe.dst = pipe.mask = pipe.cull = 0;
    }
    if (const auto found = s.hw_pipelines.find(pipe); found != s.hw_pipelines.end())
        return found->second;
    const char *vs = key.topology == 0 ? "PointVSFast" : "VSFast";
    const char *ps = "PSFast";
    if (key.feedback)
        ps = key.alpha ? "PSFastAlphaFeedback" : "PSFastFeedback";
    else if (key.alpha)
        ps = key.depth_write ? "PSFastAlpha" : "PSFastAlphaEarly";
    const VkPrimitiveTopology topology = key.topology == 1   ? VK_PRIMITIVE_TOPOLOGY_LINE_LIST
                                         : key.topology == 2 ? VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP
                                                             : VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    const auto began = perf::now_ns();
    const VkPipeline pipeline = create_hw_pipeline(s, vs, ps, topology, key.depth_test, key.depth_write, key.depth_compare,
                                                   key.blend, key.blend_op, key.src, key.dst, key.mask, key.cull, dynamic);
    const auto elapsed_ns = perf::now_ns() - began;
    ++stats.pipelines_created;
    stats.pipeline_create_ns += elapsed_ns;
    s.hw_pipelines.emplace(pipe, pipeline);
    s.hw_pipe_order.push_back(pipe);
    s.pipeline_cache_dirty = true;
    if (!s.prewarming)
        log_line("GE", std::string("hardware pipeline ") + ps + " built during play in " +
                           std::to_string(elapsed_ns / 1000u) + " us (" + std::to_string(s.hw_pipelines.size()) +
                           " total)");
    return pipeline;
}
// The hardware pipelines the previous runs needed, built before the first
// frame from the warm pipeline cache: PSPRECOMP_MOTORSTORM_PIPELINE_CACHE's
// file plus ".keys". Unknown or malformed files are ignored.
constexpr std::uint32_t kHwKeysMagic = 0x4B504D53u;  // "SMPK"
constexpr std::uint32_t kHwKeysVersion = 1u;
std::filesystem::path hw_keys_file(const State &s) {
    auto path = s.pipeline_cache_file;
    path += ".keys";
    return path;
}
void prewarm_hw_pipelines(State &s) {
    if (s.pipeline_cache_file.empty() || !s.hw_pass_load)
        return;
    const std::vector<char> data = read_file(hw_keys_file(s));
    std::uint32_t header[3]{};
    if (data.size() < sizeof(header))
        return;
    std::memcpy(header, data.data(), sizeof(header));
    const std::size_t count = header[2];
    if (header[0] != kHwKeysMagic || header[1] != kHwKeysVersion ||
        data.size() != sizeof(header) + count * sizeof(State::HwPipeKey) || count > 4096u)
        return;
    const auto began = perf::now_ns();
    s.prewarming = true;
    for (std::size_t index = 0; index < count; ++index) {
        State::HwPipeKey key{};
        std::memcpy(&key, data.data() + sizeof(header) + index * sizeof(key), sizeof(key));
        if (key.topology > 3u)
            continue;
        hw_pipeline_for(s, key);
    }
    s.prewarming = false;
    s.hw_keys_saved = s.hw_pipe_order.size();
    log_line("GE", "prewarmed " + std::to_string(s.hw_pipelines.size()) + " hardware pipelines in " +
                       std::to_string((perf::now_ns() - began) / 1000000u) + " ms");
}
void save_hw_keys(State &s) {
    if (s.pipeline_cache_file.empty() || s.hw_pipe_order.size() == s.hw_keys_saved)
        return;
    const std::uint32_t header[3]{kHwKeysMagic, kHwKeysVersion, static_cast<std::uint32_t>(s.hw_pipe_order.size())};
    auto temporary = hw_keys_file(s);
    temporary += ".tmp";
    std::FILE *file = std::fopen(temporary.string().c_str(), "wb");
    if (!file)
        return;
    bool written = std::fwrite(header, sizeof(header), 1, file) == 1;
    if (!s.hw_pipe_order.empty())
        written = written && std::fwrite(s.hw_pipe_order.data(), sizeof(State::HwPipeKey), s.hw_pipe_order.size(),
                                         file) == s.hw_pipe_order.size();
    if (std::fclose(file) != 0 || !written)
        return;
    std::error_code error;
    std::filesystem::rename(temporary, hw_keys_file(s), error);
    if (!error)
        s.hw_keys_saved = s.hw_pipe_order.size();
}
void draw_hw_load(State &s, Surface &color, Surface &depth) {
    Constants constants{};
    constants.surface = {color.raster_stride(), color.raster_height(), color.raster_stride(), depth.raster_stride()};
    constants.mode[0] = color.format;
    constants.render[0] = color.raster_half;
    const auto cb = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + cb, &constants, sizeof(constants));
    GpuVertex triangle[3]{};
    triangle[1].x = static_cast<float>(color.stride) * 2.0f;
    triangle[2].y = static_cast<float>(color.height) * 2.0f;
    const auto vertices = allocate(s, sizeof(triangle), 4);
    std::memcpy(s.mapped + vertices, triangle, sizeof(triangle));
    if (s.bound_graphics != s.hw_load_pipeline) {
        vkCmdBindPipeline(s.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.hw_load_pipeline);
        s.bound_graphics = s.hw_load_pipeline;
    }
    const VkDescriptorBufferInfo buffers[]{{s.upload.buffer, cb, sizeof(Constants)},
                                           {color.image.buffer, 0, VK_WHOLE_SIZE},
                                           {depth.image.buffer, 0, VK_WHOLE_SIZE}};
    const VkWriteDescriptorSet writes[]{buffer_write(0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, &buffers[0]),
                                        buffer_write(1, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &buffers[1]),
                                        buffer_write(2, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &buffers[2])};
    vkCmdPushDescriptorSetKHR(s.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 3, writes);
    const VkViewport viewport{0, 0, static_cast<float>(color.raster_stride()), static_cast<float>(color.raster_height()),
                              0, 1};
    vkCmdSetViewport(s.cmd, 0, 1, &viewport);
    const VkRect2D scissor{{0, 0}, {color.raster_stride(), color.raster_height()}};
    vkCmdSetScissor(s.cmd, 0, 1, &scissor);
    const float blend[4]{};
    vkCmdSetBlendConstants(s.cmd, blend);
    const VkBuffer buffer = s.upload.buffer;
    const VkDeviceSize offset = vertices;
    vkCmdBindVertexBuffers(s.cmd, 0, 1, &buffer, &offset);
    vkCmdDraw(s.cmd, 3, 1, 0, 0);
    wrote(s);
}
void begin_hardware_pass(State &s, Surface &color, Surface &depth) {
    // End first. An ordered pass clears hw_matches only when it ends, and the
    // compact images have to be reloaded from that result.
    end_rendering(s);
    const bool load = !color.hw_matches || !depth.hw_matches;
    if (load) {
        if (color.image_newer)
            sync_buffer(s, color);
        if (depth.address != 0 && depth.image_newer)
            sync_buffer(s, depth);
    }
    if (!color.hw_color) {
        color.hw_color = make_image(color.raster_stride(), color.raster_height(), 1, VK_FORMAT_R8G8B8A8_UNORM,
                                    VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT);
        color.hw_color_layout = VK_IMAGE_LAYOUT_UNDEFINED;
    }
    if (!depth.hw_depth) {
        depth.hw_depth = make_depth_image(depth.raster_stride(), depth.raster_height());
        depth.hw_depth_layout = VK_IMAGE_LAYOUT_UNDEFINED;
    }
    transition_image(s, color.hw_color.image, color.hw_color_layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT);
    transition_image(s, depth.hw_depth.image, depth.hw_depth_layout, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,
                     VK_IMAGE_ASPECT_DEPTH_BIT);
    const VkImageView views[]{color.hw_color.view, depth.hw_depth.view};
    VkFramebuffer framebuffer = VK_NULL_HANDLE;
    for (const auto &cached : s.hw_framebuffers)
        if (cached.color == views[0] && cached.depth == views[1]) {
            framebuffer = cached.framebuffer;
            break;
        }
    if (!framebuffer) {
        VkFramebufferCreateInfo framebuffer_info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
        framebuffer_info.renderPass = s.hw_pass_load;
        framebuffer_info.attachmentCount = 2;
        framebuffer_info.pAttachments = views;
        framebuffer_info.width = color.raster_stride();
        framebuffer_info.height = color.raster_height();
        framebuffer_info.layers = 1;
        check(vkCreateFramebuffer(s.device, &framebuffer_info, nullptr, &framebuffer), "create hardware framebuffer");
        s.hw_framebuffers.push_back({views[0], views[1], framebuffer});
    }
    auto begin_pass = [&](VkRenderPass render_pass) {
        VkRenderPassBeginInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        pass.renderPass = render_pass;
        pass.framebuffer = framebuffer;
        pass.renderArea = {{0, 0}, {color.raster_stride(), color.raster_height()}};
        vkCmdBeginRenderPass(s.cmd, &pass, VK_SUBPASS_CONTENTS_INLINE);
        s.rendering = true;
        s.rendering_hardware = true;
        s.hw_pass_color = &color;
        s.hw_pass_depth = &depth;
        s.bound_graphics = VK_NULL_HANDLE;
    };
    if (load) {
        // PSLoad writes gl_FragDepth. On a tiler that disables early-Z for the
        // rest of the pass, so the copy gets its own pass and the scene pass
        // only loads the stored depth.
        begin_pass(s.hw_pass_clear);
        draw_hw_load(s, color, depth);
        vkCmdEndRenderPass(s.cmd);
        s.rendering = false;
        s.rendering_hardware = false;
        s.hw_pass_color = s.hw_pass_depth = nullptr;
        color.hw_matches = true;
        depth.hw_matches = true;
        color.hw_dirty = false;
        depth.hw_dirty = false;
        VkImageMemoryBarrier done[2]{};
        done[0].sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        done[0].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
        done[0].dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
        done[0].oldLayout = done[0].newLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        done[0].srcQueueFamilyIndex = done[0].dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        done[0].image = color.hw_color.image;
        done[0].subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        done[1].sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        done[1].srcAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        done[1].dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        done[1].oldLayout = done[1].newLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        done[1].srcQueueFamilyIndex = done[1].dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        done[1].image = depth.hw_depth.image;
        done[1].subresourceRange = {VK_IMAGE_ASPECT_DEPTH_BIT, 0, 1, 0, 1};
        vkCmdPipelineBarrier(s.cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
                             VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT, 0,
                             0, nullptr, 0, nullptr, 2, done);
    }
    begin_pass(s.hw_pass_load);
}
#endif
bool hardware_draws_enabled(const State &s) {
#if !defined(__ANDROID__)
    (void)s;
    return false;
#else
    // Called per draw: read the diagnostic switches once (getenv scans the
    // whole environment and showed up at ~10% of the guest thread).
    static const bool diagnostics = diag_flag("PSPRECOMP_MOTORSTORM_DIAG_NO_INPUT_READ") ||
                                    diag_flag("PSPRECOMP_MOTORSTORM_DIAG_TRIVIAL_PS") ||
                                    diag_flag("PSPRECOMP_MOTORSTORM_DIAG_NO_SHADE");
    return s.pixel_path == PixelPath::OrderedAttachment && s.hw_depth_ok && s.raster_half == 2 && !diagnostics;
#endif
}
void create_pipelines(State &s) {
#if defined(__ANDROID__)
    if (s.pixel_path == PixelPath::FixedFunctionProgrammable) {
        VkAttachmentDescription attachment{};
        attachment.format = VK_FORMAT_R8_UNORM;
        attachment.samples = VK_SAMPLE_COUNT_1_BIT;
        attachment.loadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachment.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        attachment.finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        const VkAttachmentReference reference{0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
        VkSubpassDescription subpass{};
        subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpass.colorAttachmentCount = 1;
        subpass.pColorAttachments = &reference;
        VkRenderPassCreateInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
        pass.attachmentCount = 1;
        pass.pAttachments = &attachment;
        pass.subpassCount = 1;
        pass.pSubpasses = &subpass;
        check(vkCreateRenderPass(s.device, &pass, nullptr, &s.programmable_pass), "create programmable pass");
        s.programmable_target = make_image(4096, 4096, 1, VK_FORMAT_R8_UNORM, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT);
        const VkImageView view = s.programmable_target.view;
        VkFramebufferCreateInfo framebuffer{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
        framebuffer.renderPass = s.programmable_pass;
        framebuffer.attachmentCount = 1;
        framebuffer.pAttachments = &view;
        framebuffer.width = framebuffer.height = 4096;
        framebuffer.layers = 1;
        check(vkCreateFramebuffer(s.device, &framebuffer, nullptr, &s.programmable_framebuffer),
              "create programmable framebuffer");
        s.programmable_width = s.programmable_height = 4096;
    } else {
    VkAttachmentDescription attachments[2]{};
    for (auto &attachment : attachments) {
        attachment.format = VK_FORMAT_R32_UINT;
        attachment.samples = VK_SAMPLE_COUNT_1_BIT;
        attachment.loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
        attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachment.initialLayout = attachment.finalLayout = VK_IMAGE_LAYOUT_GENERAL;
    }
    const VkAttachmentReference references[2]{{0, VK_IMAGE_LAYOUT_GENERAL}, {1, VK_IMAGE_LAYOUT_GENERAL}};
    VkSubpassDescription subpass{};
    if (!diag_flag("PSPRECOMP_MOTORSTORM_DIAG_NO_ROAA"))
        subpass.flags = VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT;
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.inputAttachmentCount = subpass.colorAttachmentCount = 2;
    subpass.pInputAttachments = subpass.pColorAttachments = references;
    VkRenderPassCreateInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    pass.attachmentCount = 2; pass.pAttachments = attachments;
    pass.subpassCount = 1; pass.pSubpasses = &subpass;
    check(vkCreateRenderPass(s.device, &pass, nullptr, &s.attachment_pass), "create ordered attachment pass");
    VkFormatProperties depth_format{};
    vkGetPhysicalDeviceFormatProperties(s.ctx.physical, VK_FORMAT_D16_UNORM, &depth_format);
    const VkFormatFeatureFlags depth_features = depth_format.optimalTilingFeatures;
    s.hw_depth_ok = (depth_features & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) != 0 &&
                    (depth_features & VK_FORMAT_FEATURE_TRANSFER_SRC_BIT) != 0 &&
                    (depth_features & VK_FORMAT_FEATURE_TRANSFER_DST_BIT) != 0;
    if (s.hw_depth_ok) {
        s.hw_pass_load = make_hw_pass(s, VK_ATTACHMENT_LOAD_OP_LOAD);
        s.hw_pass_clear = make_hw_pass(s, VK_ATTACHMENT_LOAD_OP_DONT_CARE);
    }
    }
#endif
    // Set 0: per-draw push descriptors (the D3D12 root parameters).
    const VkDescriptorType types[]{VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER,
                                   VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,
                                   VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER,
                                   VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,
                                   VK_DESCRIPTOR_TYPE_STORAGE_BUFFER
#if defined(__ANDROID__)
                                   , VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT, VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT,
                                   VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER
#endif
    };
    VkDescriptorSetLayoutBinding bindings[std::size(types)]{};
    for (UINT i = 0; i < std::size(types); ++i)
        bindings[i] = {i, types[i], 1, VK_SHADER_STAGE_ALL, nullptr};
    VkDescriptorSetLayoutCreateInfo push{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    push.flags = VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR;
    push.bindingCount = static_cast<UINT>(std::size(types));
    push.pBindings = bindings;
    check(vkCreateDescriptorSetLayout(s.device, &push, nullptr, &s.push_layout), "create push descriptor layout");
    // Set 1: s0..s3 bilinear wrap/clamp combinations, s4..s7 the same with 8x
    // anisotropic filtering (texture-pack replacements, enhanced filtering).
    for (UINT i = 0; i < 8; ++i) {
        VkSamplerCreateInfo sampler{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
        sampler.magFilter = VK_FILTER_LINEAR;
        sampler.minFilter = VK_FILTER_LINEAR;
        sampler.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
        sampler.addressModeU = (i & 1u) ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
        sampler.addressModeV = (i & 2u) ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
        sampler.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        sampler.maxLod = VK_LOD_CLAMP_NONE;
        if (i >= 4 && s.ctx.anisotropy) {
            sampler.anisotropyEnable = VK_TRUE;
            sampler.maxAnisotropy = std::min(8.0f, s.ctx.properties.limits.maxSamplerAnisotropy);
        }
        check(vkCreateSampler(s.device, &sampler, nullptr, &s.samplers[i]), "create sampler");
    }
    VkDescriptorSetLayoutBinding sampler_bindings[8]{};
    for (UINT i = 0; i < 8; ++i)
        sampler_bindings[i] = {i, VK_DESCRIPTOR_TYPE_SAMPLER, 1, VK_SHADER_STAGE_ALL, &s.samplers[i]};
    VkDescriptorSetLayoutCreateInfo fixed{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    fixed.bindingCount = 8;
    fixed.pBindings = sampler_bindings;
    check(vkCreateDescriptorSetLayout(s.device, &fixed, nullptr, &s.sampler_layout), "create sampler layout");
    const VkDescriptorPoolSize size{VK_DESCRIPTOR_TYPE_SAMPLER, 8};
    VkDescriptorPoolCreateInfo pool{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    pool.maxSets = 1;
    pool.poolSizeCount = 1;
    pool.pPoolSizes = &size;
    check(vkCreateDescriptorPool(s.device, &pool, nullptr, &s.descriptor_pool), "create descriptor pool");
    VkDescriptorSetAllocateInfo allocate_set{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    allocate_set.descriptorPool = s.descriptor_pool;
    allocate_set.descriptorSetCount = 1;
    allocate_set.pSetLayouts = &s.sampler_layout;
    check(vkAllocateDescriptorSets(s.device, &allocate_set, &s.sampler_set), "allocate sampler set");
    const VkDescriptorSetLayout sets[]{s.push_layout, s.sampler_layout};
    VkPipelineLayoutCreateInfo layout{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    layout.setLayoutCount = 2;
    layout.pSetLayouts = sets;
    check(vkCreatePipelineLayout(s.device, &layout, nullptr, &s.layout), "create pipeline layout");
#if defined(__ANDROID__)
    const char *pixel = s.pixel_path == PixelPath::FixedFunctionProgrammable ? "PSLock"
                        : diag_flag("PSPRECOMP_MOTORSTORM_DIAG_NO_INPUT_READ") ? "PSNoRead"
                        : diag_flag("PSPRECOMP_MOTORSTORM_DIAG_TRIVIAL_PS")    ? "PSTrivial"
                        : diag_flag("PSPRECOMP_MOTORSTORM_DIAG_NO_SHADE")      ? "PSNoShade"
                                                                                : "PS";
    if (point_expansion_requires_geometry_shader(s.pixel_path))
        throw std::runtime_error("point expansion requires a geometry shader");
#else
    const char *pixel = "PS";
#endif
    s.list_pipeline = create_graphics(s, "VS", {}, pixel, VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, VK_FORMAT_UNDEFINED);
    s.strip_pipeline = create_graphics(s, "VS", {}, pixel, VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP, VK_FORMAT_UNDEFINED);
    s.line_pipeline = create_graphics(s, "VS", {}, pixel, VK_PRIMITIVE_TOPOLOGY_LINE_LIST, VK_FORMAT_UNDEFINED);
    // Points: the geometry shader expands them and flips Y itself.
    s.point_pipeline =
#if defined(__ANDROID__)
        create_graphics(s, "PointVS", {}, pixel, VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, VK_FORMAT_UNDEFINED);
#else
        create_graphics(s, "VSPoint", "PointGS", "PS", VK_PRIMITIVE_TOPOLOGY_POINT_LIST, VK_FORMAT_UNDEFINED);
#endif
    s.expand_pipeline = create_compute(s, "ExpandCS");
    s.resolve_pipeline = create_compute(s, "ResolveCS");
    s.capture_pipeline = create_compute(s, "CaptureCS");
    s.decode_pipeline = create_compute(s, "DecodeCS");
    s.vertex_pipeline = create_compute(s, "VertexCS");
#if defined(__ANDROID__)
    if (vertex_batching())
        s.vertex_batch_pipeline = create_compute(s, "VertexBatchCS");
#endif
    s.decode_target_pipeline = create_compute(s, "DecodeTargetCS");
    s.mip_pipeline = create_compute(s, "MipCS");
    s.post_resolve_pipeline = create_compute(s, "PostResolveCS");
    s.deband_pipeline = create_compute(s, "DebandCS");
    s.post_capture_pipeline = create_compute(s, "PostCaptureCS");
    s.post_color_pipeline = create_compute(s, "PostColorCS");
    s.post_color_capture_pipeline = create_compute(s, "PostColorCaptureCS");
    s.depth_resolve_pipeline = create_compute(s, "DepthResolveCS");
#if defined(__ANDROID__)
    s.present_convert_pipeline = create_compute(s, "PresentConvertCS");
    if (s.hw_depth_ok && s.pixel_path == PixelPath::OrderedAttachment) {
        s.hw_load_pipeline = create_hw_pipeline(s, "VS", "PSLoad", VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, true, true, 7,
                                                false, 0, 1, 0, 0x0F, 0, false);
        s.pack_color_pipeline = create_compute(s, "PackColorCS");
        s.pack_depth_pipeline = create_compute(s, "PackDepthCS");
    }
#endif
}
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
bool has_extension(const std::vector<VkExtensionProperties> &list, const char *name) {
    return std::any_of(list.begin(), list.end(),
                       [&](const VkExtensionProperties &e) { return std::strcmp(e.extensionName, name) == 0; });
}
VKAPI_ATTR VkBool32 VKAPI_CALL debug_message(VkDebugUtilsMessageSeverityFlagBitsEXT severity,
                                             VkDebugUtilsMessageTypeFlagsEXT,
                                             const VkDebugUtilsMessengerCallbackDataEXT *data, void *) {
    if (severity >= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT && data && data->pMessage) {
        std::cerr << "[Vulkan validation] " << data->pMessage << '\n';
        log_line("VULKAN", data->pMessage);
    }
    return VK_FALSE;
}
void create_device(State &s) {
    auto &ctx = s.ctx;
#if defined(__ANDROID__)
    const char *driver_dir = std::getenv("MOTORSTORM_ANDROID_DRIVER_DIR");
    const char *driver_name = std::getenv("MOTORSTORM_ANDROID_DRIVER_NAME");
    const char *hooks = std::getenv("MOTORSTORM_ANDROID_NATIVE_LIB_DIR");
    const char *temp = std::getenv("MOTORSTORM_ANDROID_DRIVER_TEMP");
    const bool imported = driver_dir && driver_dir[0] && driver_name && driver_name[0] && hooks;
    if (imported)
        ctx.library = adrenotools_open_libvulkan(RTLD_NOW | RTLD_LOCAL, ADRENOTOOLS_DRIVER_CUSTOM,
            temp, hooks, driver_dir, driver_name, nullptr, nullptr);
    if (imported && !ctx.library) {
        const auto decision = resolve_driver(DriverRequest::Imported, false, false);
        s.driver_fallback = std::string(decision.message);
        log_line("DRIVER", s.driver_fallback);
    }
    if (!ctx.library) ctx.library = dlopen("libvulkan.so", RTLD_NOW | RTLD_LOCAL);
#else
    ctx.library = LoadLibraryW(L"vulkan-1.dll");
#endif
    if (!ctx.library)
        throw std::runtime_error("vulkan-1.dll (the Vulkan loader) is not installed");
    vkGetInstanceProcAddr =
        reinterpret_cast<PFN_vkGetInstanceProcAddr>(
#if defined(__ANDROID__)
            dlsym(ctx.library, "vkGetInstanceProcAddr"));
#else
            GetProcAddress(ctx.library, "vkGetInstanceProcAddr"));
#endif
    if (!vkGetInstanceProcAddr)
        throw std::runtime_error("vulkan-1.dll has no vkGetInstanceProcAddr");
#define MOTORSTORM_VK_LOAD_GLOBAL(name)                                                                            \
    name = reinterpret_cast<PFN_##name>(vkGetInstanceProcAddr(nullptr, #name));                                    \
    if (!name)                                                                                                     \
        throw std::runtime_error("Vulkan loader lacks " #name);
    MOTORSTORM_VK_GLOBAL(MOTORSTORM_VK_LOAD_GLOBAL)
#undef MOTORSTORM_VK_LOAD_GLOBAL
    UINT api = 0;
    vkEnumerateInstanceVersion(&api);
    if (api < VK_API_VERSION_1_1)
        throw std::runtime_error("the Vulkan loader is older than Vulkan 1.1");
    UINT count = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &count, nullptr);
    std::vector<VkExtensionProperties> instance_extensions(count);
    vkEnumerateInstanceExtensionProperties(nullptr, &count, instance_extensions.data());
    std::vector<const char *> extensions{VK_KHR_SURFACE_EXTENSION_NAME,
#if defined(__ANDROID__)
        VK_KHR_ANDROID_SURFACE_EXTENSION_NAME};
#else
        VK_KHR_WIN32_SURFACE_EXTENSION_NAME};
#endif
    std::vector<const char *> layers;
    const char *validation = std::getenv("PSPRECOMP_MOTORSTORM_VK_VALIDATION");
    const bool validate = validation && *validation && std::strcmp(validation, "0") != 0;
    if (validate) {
        vkEnumerateInstanceLayerProperties(&count, nullptr);
        std::vector<VkLayerProperties> available(count);
        vkEnumerateInstanceLayerProperties(&count, available.data());
        const bool found = std::any_of(available.begin(), available.end(), [](const VkLayerProperties &layer) {
            return std::strcmp(layer.layerName, "VK_LAYER_KHRONOS_validation") == 0;
        });
        if (found)
            layers.push_back("VK_LAYER_KHRONOS_validation");
        else
            log_line("GE", "vk_validation: VK_LAYER_KHRONOS_validation is not installed; continuing without it");
        if (found && has_extension(instance_extensions, VK_EXT_DEBUG_UTILS_EXTENSION_NAME))
            extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
    }
    VkApplicationInfo application{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    application.pApplicationName = "MotorStormNative";
    application.pEngineName = "PSPRecomp";
    application.apiVersion = api >= VK_API_VERSION_1_3 ? VK_API_VERSION_1_3 : VK_API_VERSION_1_1;
    VkInstanceCreateInfo instance{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    instance.pApplicationInfo = &application;
    instance.enabledExtensionCount = static_cast<UINT>(extensions.size());
    instance.ppEnabledExtensionNames = extensions.data();
    instance.enabledLayerCount = static_cast<UINT>(layers.size());
    instance.ppEnabledLayerNames = layers.data();
    check(vkCreateInstance(&instance, nullptr, &ctx.instance), "create instance");
#define MOTORSTORM_VK_LOAD_INSTANCE(name)                                                                          \
    name = reinterpret_cast<PFN_##name>(vkGetInstanceProcAddr(ctx.instance, #name));                               \
    if (!name)                                                                                                     \
        throw std::runtime_error("Vulkan instance lacks " #name);
    MOTORSTORM_VK_INSTANCE(MOTORSTORM_VK_LOAD_INSTANCE)
#undef MOTORSTORM_VK_LOAD_INSTANCE
#define MOTORSTORM_VK_LOAD_OPTIONAL(name) name = reinterpret_cast<PFN_##name>(vkGetInstanceProcAddr(ctx.instance, #name));
    MOTORSTORM_VK_INSTANCE_OPTIONAL(MOTORSTORM_VK_LOAD_OPTIONAL)
#undef MOTORSTORM_VK_LOAD_OPTIONAL
    if (validate && vkCreateDebugUtilsMessengerEXT) {
        VkDebugUtilsMessengerCreateInfoEXT messenger{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT};
        messenger.messageSeverity =
            VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT | VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
        messenger.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
        messenger.pfnUserCallback = debug_message;
        vkCreateDebugUtilsMessengerEXT(ctx.instance, &messenger, nullptr, &ctx.messenger);
    }
    // Hardware device with Vulkan 1.3, push descriptors and pixel-ordered
    // fragment-shader interlock (the ROV equivalent); discrete GPUs first.
    vkEnumeratePhysicalDevices(ctx.instance, &count, nullptr);
    std::vector<VkPhysicalDevice> devices(count);
    vkEnumeratePhysicalDevices(ctx.instance, &count, devices.data());
    int best_score = -1;
    std::string rejected;
    std::vector<VkExtensionProperties> chosen_extensions;
    PixelPath best_path = PixelPath::Interlock;
    for (auto device : devices) {
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(device, &properties);
        const auto reject = [&](const char *why) {
            rejected += std::string(" ") + properties.deviceName + " (" + why + ")";
        };
        if (properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_CPU) {
            reject("software");
            continue;
        }
        if (properties.apiVersion < VK_API_VERSION_1_1) {
            reject("Vulkan 1.1 required");
            continue;
        }
        UINT extension_count = 0;
        vkEnumerateDeviceExtensionProperties(device, nullptr, &extension_count, nullptr);
        std::vector<VkExtensionProperties> device_extensions(extension_count);
        vkEnumerateDeviceExtensionProperties(device, nullptr, &extension_count, device_extensions.data());
        if (!has_extension(device_extensions, VK_KHR_SWAPCHAIN_EXTENSION_NAME) ||
            !has_extension(device_extensions, VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME)) {
            reject("swapchain and push descriptors required");
            continue;
        }
        PixelPath path = PixelPath::Interlock;
        VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
#if defined(__ANDROID__)
        const bool roaa = has_extension(device_extensions, VK_EXT_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME);
        const bool timeline_ext = has_extension(device_extensions, VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME) ||
                                  properties.apiVersion >= VK_API_VERSION_1_2;
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT order{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT};
        VkPhysicalDeviceTimelineSemaphoreFeatures timeline_feature{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES};
        VkPhysicalDeviceVulkan13Features v13{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES};
        VkPhysicalDeviceVulkan12Features v12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
        const bool core13 = properties.apiVersion >= VK_API_VERSION_1_3 && roaa;
        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT dyn_query{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT};
        VkPhysicalDeviceExtendedDynamicState3FeaturesEXT dyn3_query{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT};
        dyn3_query.pNext = &dyn_query;
        if (core13) {
            order.pNext = &dyn3_query;
            v13.pNext = &order;
            v12.pNext = &v13;
            features.pNext = &v12;
        } else if (timeline_ext) {
            features.pNext = &timeline_feature;
        }
        vkGetPhysicalDeviceFeatures2(device, &features);
        const bool depth_dyn = core13 && dyn_query.extendedDynamicState == VK_TRUE;
        const bool blend_dyn = depth_dyn && dyn3_query.extendedDynamicState3ColorBlendEnable == VK_TRUE &&
                               dyn3_query.extendedDynamicState3ColorBlendEquation == VK_TRUE &&
                               dyn3_query.extendedDynamicState3ColorWriteMask == VK_TRUE &&
                               has_extension(device_extensions, VK_EXT_EXTENDED_DYNAMIC_STATE_3_EXTENSION_NAME);
        PixelFeatures pixel{};
        pixel.ordered_color_attachment = core13 && order.rasterizationOrderColorAttachmentAccess == VK_TRUE;
        path = select_pixel_path(pixel);
        const bool stores = features.features.fragmentStoresAndAtomics == VK_TRUE;
        const bool clip = features.features.shaderClipDistance == VK_TRUE;
        const bool timeline = core13 ? v12.timelineSemaphore == VK_TRUE : timeline_feature.timelineSemaphore == VK_TRUE;
        const bool dynamic = core13 && v13.dynamicRendering == VK_TRUE;
        const bool ordered_ok = path == PixelPath::OrderedAttachment && pixel.ordered_color_attachment && stores &&
                                clip && timeline && dynamic;
        if (!ordered_ok) {
            reject("ordered color attachment access is required; the unordered atomic fallback is disabled");
            continue;
        }
#else
        if (!has_extension(device_extensions, VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME)) {
            reject("fragment shader interlock required");
            continue;
        }
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT interlock{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT};
        VkPhysicalDeviceVulkan13Features v13{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES};
        v13.pNext = &interlock;
        VkPhysicalDeviceVulkan12Features v12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
        v12.pNext = &v13;
        features.pNext = &v12;
        vkGetPhysicalDeviceFeatures2(device, &features);
        if (properties.apiVersion < VK_API_VERSION_1_3 || !interlock.fragmentShaderPixelInterlock ||
            !features.features.fragmentStoresAndAtomics || !features.features.shaderClipDistance ||
            !features.features.geometryShader || !v12.timelineSemaphore || !v13.dynamicRendering ||
            select_pixel_path(PixelFeatures{true, false}) != PixelPath::Interlock) {
            reject("missing interlock, fragment stores, clip distance, geometry shader, timeline or dynamic rendering");
            continue;
        }
        path = PixelPath::Interlock;
#endif
        UINT families = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(device, &families, nullptr);
        std::vector<VkQueueFamilyProperties> family_list(families);
        vkGetPhysicalDeviceQueueFamilyProperties(device, &families, family_list.data());
        int family = -1;
        for (UINT i = 0; i < families; ++i)
            if ((family_list[i].queueFlags & (VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT)) ==
                (VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT)) {
                family = static_cast<int>(i);
                break;
            }
        if (family < 0) {
            reject("no graphics queue");
            continue;
        }
        const int score = properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU     ? 3
                          : properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU ? 2
                                                                                           : 1;
        if (score > best_score) {
            best_score = score;
            ctx.physical = device;
            ctx.properties = properties;
            ctx.queue_family = static_cast<UINT>(family);
            ctx.depth_clamp = features.features.depthClamp;
            ctx.anisotropy = features.features.samplerAnisotropy;
            ctx.bc = features.features.textureCompressionBC;
            ctx.host_query_reset =
#if defined(__ANDROID__)
                v12.hostQueryReset == VK_TRUE;
#else
                false;
#endif
            ctx.hw_dynamic_depth = depth_dyn;
            ctx.hw_dynamic_blend = blend_dyn;
            chosen_extensions = std::move(device_extensions);
            best_path = path;
        }
    }
    if (!ctx.physical) {
#if defined(__ANDROID__)
        if (imported) {
            const auto decision = resolve_driver(DriverRequest::Imported, ctx.library != nullptr, false);
            s.driver_fallback = std::string(decision.message);
            log_line("DRIVER", s.driver_fallback + rejected);
            unsetenv("MOTORSTORM_ANDROID_DRIVER_DIR");
            unsetenv("MOTORSTORM_ANDROID_DRIVER_NAME");
            if (ctx.messenger && vkDestroyDebugUtilsMessengerEXT)
                vkDestroyDebugUtilsMessengerEXT(ctx.instance, ctx.messenger, nullptr);
            ctx.messenger = VK_NULL_HANDLE;
            if (ctx.instance)
                vkDestroyInstance(ctx.instance, nullptr);
            ctx.instance = VK_NULL_HANDLE;
            ctx.physical = VK_NULL_HANDLE;
            if (ctx.library)
                dlclose(ctx.library);
            ctx.library = nullptr;
            create_device(s);
            return;
        }
#endif
        throw std::runtime_error("No usable Vulkan GPU is available:" + rejected);
    }
    stats.adapter = ctx.properties.deviceName;
#if defined(__ANDROID__)
    s.pixel_path = best_path;
    s.dynamic_rendering = best_path == PixelPath::OrderedAttachment;
    log_line("GE", std::string("pixel path=") +
                       (s.pixel_path == PixelPath::OrderedAttachment ? "ordered-attachment"
                        : s.pixel_path == PixelPath::FixedFunctionProgrammable ? "programmable-lock"
                                                                              : "interlock"));
#endif
    // Line rasterization: KHR (Vulkan 1.4 drivers) or the EXT it was promoted from.
    const char *line_extension = has_extension(chosen_extensions, VK_KHR_LINE_RASTERIZATION_EXTENSION_NAME)
                                     ? VK_KHR_LINE_RASTERIZATION_EXTENSION_NAME
                                 : has_extension(chosen_extensions, VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME)
                                     ? VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME
                                     : nullptr;
    VkPhysicalDeviceLineRasterizationFeaturesKHR line{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR};
    if (line_extension) {
        VkPhysicalDeviceFeatures2 query{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
        query.pNext = &line;
        vkGetPhysicalDeviceFeatures2(ctx.physical, &query);
        ctx.line_rasterization = line.bresenhamLines;
    }
    UINT families = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(ctx.physical, &families, nullptr);
    std::vector<VkQueueFamilyProperties> family_list(families);
    vkGetPhysicalDeviceQueueFamilyProperties(ctx.physical, &families, family_list.data());
    const UINT queue_count = std::min(2u, family_list[ctx.queue_family].queueCount);
    const float priorities[]{1.0f, 1.0f};
    VkDeviceQueueCreateInfo queue{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    queue.queueFamilyIndex = ctx.queue_family;
    queue.queueCount = queue_count;
    queue.pQueuePriorities = priorities;
#if defined(__ANDROID__)
    VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT interlock{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT};
    if (s.pixel_path == PixelPath::OrderedAttachment)
        interlock.rasterizationOrderColorAttachmentAccess = VK_TRUE;
#else
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT interlock{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT};
    interlock.fragmentShaderPixelInterlock = VK_TRUE;
#endif
    VkPhysicalDeviceVulkan13Features v13{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES};
    v13.pNext = &interlock;
    v13.dynamicRendering = VK_TRUE;
    VkPhysicalDeviceVulkan12Features v12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
    v12.pNext = &v13;
    v12.timelineSemaphore = VK_TRUE;
#if defined(__ANDROID__)
    v12.hostQueryReset = ctx.host_query_reset ? VK_TRUE : VK_FALSE;
#endif
    VkPhysicalDeviceLineRasterizationFeaturesKHR line_enable{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR};
    line_enable.bresenhamLines = VK_TRUE;
    if (ctx.line_rasterization)
        interlock.pNext = &line_enable;
#if defined(__ANDROID__)
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT dyn_enable{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT};
    dyn_enable.extendedDynamicState = VK_TRUE;
    VkPhysicalDeviceExtendedDynamicState3FeaturesEXT dyn3_enable{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT};
    dyn3_enable.extendedDynamicState3ColorBlendEnable = VK_TRUE;
    dyn3_enable.extendedDynamicState3ColorBlendEquation = VK_TRUE;
    dyn3_enable.extendedDynamicState3ColorWriteMask = VK_TRUE;
    if (ctx.hw_dynamic_depth) {
        dyn_enable.pNext = interlock.pNext;
        interlock.pNext = &dyn_enable;
        if (ctx.hw_dynamic_blend) {
            dyn3_enable.pNext = &dyn_enable;
            interlock.pNext = &dyn3_enable;
        }
    }
#endif
    VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
    features.pNext = &v12;
    features.features.fragmentStoresAndAtomics = VK_TRUE;
    features.features.shaderClipDistance = VK_TRUE;
#if !defined(__ANDROID__)
    features.features.geometryShader = VK_TRUE;
#endif
    features.features.depthClamp = ctx.depth_clamp;
    features.features.samplerAnisotropy = ctx.anisotropy;
    features.features.textureCompressionBC = ctx.bc;
    std::vector<const char *> device_extensions{VK_KHR_SWAPCHAIN_EXTENSION_NAME, VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME};
#if defined(__ANDROID__)
    if (s.pixel_path == PixelPath::OrderedAttachment)
        device_extensions.push_back(VK_EXT_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME);
    if (ctx.hw_dynamic_depth && has_extension(chosen_extensions, VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME))
        device_extensions.push_back(VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
    if (ctx.hw_dynamic_blend)
        device_extensions.push_back(VK_EXT_EXTENDED_DYNAMIC_STATE_3_EXTENSION_NAME);
    else {
        if (has_extension(chosen_extensions, VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME))
            device_extensions.push_back(VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME);
        if (has_extension(chosen_extensions, "VK_KHR_spirv_1_4"))
            device_extensions.push_back("VK_KHR_spirv_1_4");
    }
#else
    device_extensions.push_back(VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME);
#endif
    if (ctx.line_rasterization)
        device_extensions.push_back(line_extension);
    VkDeviceCreateInfo device{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    device.pNext = &features;
    device.queueCreateInfoCount = 1;
    device.pQueueCreateInfos = &queue;
    device.enabledExtensionCount = static_cast<UINT>(device_extensions.size());
    device.ppEnabledExtensionNames = device_extensions.data();
    check(vkCreateDevice(ctx.physical, &device, nullptr, &ctx.device), "create device");
    g_device = ctx.device;
    s.device = ctx.device;
#define MOTORSTORM_VK_LOAD_DEVICE(name)                                                                            \
    name = reinterpret_cast<PFN_##name>(vkGetDeviceProcAddr(ctx.device, #name));                                   \
    if (!name)                                                                                                     \
        throw std::runtime_error("Vulkan device lacks " #name);
    MOTORSTORM_VK_DEVICE(MOTORSTORM_VK_LOAD_DEVICE)
    MOTORSTORM_VK_MOBILE_DEVICE(MOTORSTORM_VK_LOAD_DEVICE)
#undef MOTORSTORM_VK_LOAD_DEVICE
#define MOTORSTORM_VK_LOAD_OPTIONAL_DEVICE(name)                                                                   \
    name = reinterpret_cast<PFN_##name>(vkGetDeviceProcAddr(ctx.device, #name));
    MOTORSTORM_VK_DEVICE_OPTIONAL(MOTORSTORM_VK_LOAD_OPTIONAL_DEVICE)
#undef MOTORSTORM_VK_LOAD_OPTIONAL_DEVICE
    if (!vkGetSemaphoreCounterValue)
        vkGetSemaphoreCounterValue = reinterpret_cast<PFN_vkGetSemaphoreCounterValue>(
            vkGetDeviceProcAddr(ctx.device, "vkGetSemaphoreCounterValueKHR"));
    if (!vkWaitSemaphores)
        vkWaitSemaphores = reinterpret_cast<PFN_vkWaitSemaphores>(vkGetDeviceProcAddr(ctx.device, "vkWaitSemaphoresKHR"));
    if (!vkGetSemaphoreCounterValue || !vkWaitSemaphores)
        throw std::runtime_error("Vulkan device lacks timeline semaphore waits");
    vkGetDeviceQueue(ctx.device, ctx.queue_family, 0, &s.queue);
    vkGetDeviceQueue(ctx.device, ctx.queue_family, queue_count - 1u, &s.present_queue);
    s.shared_queue = queue_count < 2u;
    VmaVulkanFunctions functions{};
    functions.vkGetInstanceProcAddr = vkGetInstanceProcAddr;
    functions.vkGetDeviceProcAddr = vkGetDeviceProcAddr;
    VmaAllocatorCreateInfo allocator{};
    allocator.vulkanApiVersion = ctx.properties.apiVersion >= VK_API_VERSION_1_3 ? VK_API_VERSION_1_3
                                                                                  : VK_API_VERSION_1_1;
    allocator.physicalDevice = ctx.physical;
    allocator.device = ctx.device;
    allocator.instance = ctx.instance;
    allocator.pVulkanFunctions = &functions;
    check(vmaCreateAllocator(&allocator, &ctx.allocator), "create memory allocator");
    g_allocator = ctx.allocator;
    const auto &limits = ctx.properties.limits;
    s.storage_alignment = static_cast<UINT>(std::max<VkDeviceSize>({16, limits.minStorageBufferOffsetAlignment,
                                                                    limits.minUniformBufferOffsetAlignment}));
    if (s.storage_alignment > 256)
        throw std::runtime_error("buffer offset alignment above 256 bytes is unsupported");
    s.render_area = {std::min(limits.maxFramebufferWidth, 16384u), std::min(limits.maxFramebufferHeight, 16384u)};
    s.timestamp_period = limits.timestampPeriod;
}
} // namespace

// ---------------------------------------------------------------------------
std::vector<GpuDecodedTexture> take_decoded() {
    std::vector<GpuDecodedTexture> result;
    if (!state)
        return result;
    auto &s = *state;
    for (const auto key : s.identify_failed)
        result.push_back({key, 0, 0, {}});
    s.identify_failed.clear();
    if (s.identify_copies.empty())
        return result;
    const UINT64 completed = completed_value(s);
    bool invalidated = false;
    while (!s.identify_copies.empty()) {
        const auto &copy = s.identify_copies.front();
        if (copy.fence == 0u || copy.fence > completed)
            break;
        if (!invalidated) {
            s.identify_ring.invalidate();
            invalidated = true;
        }
        GpuDecodedTexture decoded{copy.key, copy.width, copy.height, {}};
        decoded.rgba.resize(static_cast<std::size_t>(copy.width) * copy.height);
        const auto *source = s.identify_ring.mapped + copy.start % kIdentifyRingBytes;
        for (UINT y = 0; y < copy.height; ++y)
            std::memcpy(decoded.rgba.data() + static_cast<std::size_t>(y) * copy.width,
                        source + static_cast<std::size_t>(y) * copy.pitch * 4u, copy.width * 4u);
        result.push_back(std::move(decoded));
        s.identify_tail = copy.end;
        s.identify_copies.pop_front();
    }
    return result;
}
std::vector<std::uint32_t> debug_decode(const GpuTexture &texture, std::size_t level) {
    std::vector<std::uint32_t> result;
    if (!state || state->recording || level >= texture.raw.size())
        return result;
    auto &s = *state;
    const auto &raw = texture.raw[level];
    const UINT64 bytes = static_cast<UINT64>(decode_pitch(raw.width)) * 4u * raw.height;
    Buffer readback = make_buffer(bytes, Memory::Readback);
    begin(s);
    decode_level(s, texture, static_cast<UINT>(level), 0);
    outside(s);
    copy_buffer(s, readback.buffer, 0, s.decode_scratch[0].buffer, 0, bytes);
    wrote(s);
    submit_and_wait(s);
    readback.invalidate();
    result.resize(static_cast<std::size_t>(raw.width) * raw.height);
    for (UINT y = 0; y < raw.height; ++y)
        std::memcpy(result.data() + static_cast<std::size_t>(y) * raw.width,
                    readback.mapped + static_cast<std::size_t>(y) * decode_pitch(raw.width) * 4u, raw.width * 4u);
    return result;
}
void set_racing(bool racing) noexcept {
    emulation_racing = racing;
    if (state)
        state->racing = racing;
}
bool active() noexcept { return stats.active; }
bool initialize() {
    if (stats.active)
        return true;
    if (attempted)
        return false;
    attempted = true;
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
            else if (choice == "8" || choice == "8x" || choice == "3840x2176")
                s.output_scale = 8;
            else
                throw std::runtime_error("MotorStorm resolution must be 1x, 2x, 3x, 4x or 8x");
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
        s.raster_half = s.antialiasing == 2 ? s.output_scale * 4
                      : s.antialiasing == 3 ? s.output_scale * 3
                                            : s.output_scale * 2;
#if defined(__ANDROID__)
        // "auto": full resolution is the output multiple that fills the
        // display (5x on a 2560x1600 tablet). Menus always render at it;
        // dynamic resolution may only lower it during gameplay.
        if (const char *value = std::getenv("MOTORSTORM_ANDROID_RESOLUTION");
            value && std::strcmp(value, "auto") == 0 && s.antialiasing != 2 && s.antialiasing != 3) {
            std::uint32_t cap = 8u;
            if (const char *limit = std::getenv("MOTORSTORM_ANDROID_RESOLUTION_CAP"))
                cap = static_cast<std::uint32_t>(std::clamp(std::atoi(limit), 1, 8));
            int display_width = 0, display_height = 0;
            if (const SDL_DisplayMode *mode = SDL_GetDesktopDisplayMode(SDL_GetPrimaryDisplay())) {
                display_width = mode->w;
                display_height = mode->h;
            }
            UINT present_width = static_cast<UINT>(std::max(display_width, 0));
            UINT present_height = static_cast<UINT>(std::max(display_height, 0));
            limit_to_present(present_width, present_height);
            display_width = static_cast<int>(present_width);
            display_height = static_cast<int>(present_height);
            s.output_scale = motorstorm::display_output_scale(static_cast<std::uint32_t>(std::max(display_width, 0)),
                                                              static_cast<std::uint32_t>(std::max(display_height, 0)), cap);
            s.raster_half = s.output_scale * 2;
            log_line("GE", "Android full resolution: display " + std::to_string(display_width) + "x" +
                               std::to_string(display_height) + " -> " + std::to_string(s.output_scale) + "x (" +
                               std::to_string(480 * s.output_scale) + "x" + std::to_string(272 * s.output_scale) + ")");
        }
        s.base_raster_half = s.raster_half;
        s.scale_settings.target_fps = 30;
        if (const char *fps = std::getenv("PSPRECOMP_MOTORSTORM_FPS"))
            s.scale_settings.target_fps = std::strcmp(fps, "60") == 0 ? 60 : 30;
        if (const char *mode = std::getenv("PSPRECOMP_MOTORSTORM_SCALE_MODE")) {
            if (std::strcmp(mode, "fixed") == 0)
                s.scale_settings.mode = ScaleMode::Fixed;
            else if (std::strcmp(mode, "dynamic") == 0)
                s.scale_settings.mode = ScaleMode::Dynamic;
        }
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_SCALE"))
            s.scale_settings.fixed_scale = std::strtof(value, nullptr);
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_SCALE_MIN"))
            s.scale_settings.min_scale = std::strtof(value, nullptr);
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_SCALE_MAX"))
            s.scale_settings.max_scale = std::strtof(value, nullptr);
        if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_SGSR_SHARPNESS"))
            s.scale_settings.sharpness = std::strtof(value, nullptr);
        s.scale_settings.min_scale = std::clamp(s.scale_settings.min_scale, 0.2f, 1.0f);
        s.scale_settings.max_scale = std::clamp(s.scale_settings.max_scale, s.scale_settings.min_scale, 1.0f);
        s.scale_settings.fixed_scale = std::clamp(s.scale_settings.fixed_scale, 0.2f, 1.0f);
        // Start at full resolution: the first screens are menus and movies.
        s.raster_half = s.dynamic_resolution.update(s.base_raster_half, s.base_raster_half, false, -1.0,
                                                    s.scale_settings, 0);
        s.render_scale = static_cast<float>(s.raster_half) / static_cast<float>(s.base_raster_half);
        log_line("GE", std::string("Android render scale: ") +
                           (s.scale_settings.mode == ScaleMode::Dynamic ? "dynamic (gameplay only)"
                            : s.scale_settings.mode == ScaleMode::Fixed ? "fixed"
                                                                        : "off") +
                           " min=" + std::to_string(s.scale_settings.min_scale) +
                           " max=" + std::to_string(s.scale_settings.max_scale) +
                           " upscaler=" + std::string(motorstorm::upscaler_name(select_upscaler(s.scale_settings))));
#endif
        if (const char *filter = std::getenv("PSPRECOMP_MOTORSTORM_TEXTURE_FILTER"))
            s.enhanced_filtering = std::string_view(filter) == "enhanced";
        stats.resolution_scale = s.output_scale;
        stats.raster_half = s.raster_half;
        stats.antialiasing = s.antialiasing;
        create_device(s);
#if defined(__ANDROID__)
        if (!s.driver_fallback.empty())
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_WARNING, "Vulkan driver", s.driver_fallback.c_str(), nullptr);
#endif
        VkSemaphoreTypeCreateInfo type{VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO};
        type.semaphoreType = VK_SEMAPHORE_TYPE_TIMELINE;
        VkSemaphoreCreateInfo semaphore{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
        semaphore.pNext = &type;
        check(vkCreateSemaphore(s.device, &semaphore, nullptr, &s.timeline), "create GE timeline");
        for (CommandSlot &slot : s.slots) {
            VkCommandPoolCreateInfo pool{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
            pool.flags = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
            pool.queueFamilyIndex = s.ctx.queue_family;
            check(vkCreateCommandPool(s.device, &pool, nullptr, &slot.pool), "create command pool");
            VkCommandBufferAllocateInfo allocate_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
            allocate_info.commandPool = slot.pool;
            allocate_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
            allocate_info.commandBufferCount = 2;
            VkCommandBuffer buffers[2]{};
            check(vkAllocateCommandBuffers(s.device, &allocate_info, buffers), "allocate command buffers");
            slot.cmd = buffers[0];
            slot.pre = buffers[1];
            VkQueryPoolCreateInfo queries{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO};
            queries.queryType = VK_QUERY_TYPE_TIMESTAMP;
            queries.queryCount = 4;
            check(vkCreateQueryPool(s.device, &queries, nullptr, &slot.queries), "create chunk timestamps");
        }
        s.upload = make_buffer(kUploadBytes, Memory::Upload);
        s.mapped = s.upload.mapped;
        for (auto &scratch : s.decode_scratch)
            scratch = make_buffer(kDecodeScratchBytes, Memory::Device);
        open_pipeline_cache(s);
        create_pipelines(s);
#if defined(__ANDROID__)
        if (s.pixel_path == PixelPath::OrderedAttachment && hardware_draws_enabled(s))
            prewarm_hw_pipelines(s);
#endif
        setup_post(s);
        state = std::move(native);
        stats.active = true;
        std::cerr << "[Vulkan] hardware GE adapter=" << stats.adapter << " GPU_transform=1"
                  << " output=" << state->output_scale * 480 << 'x' << state->output_scale * 272
                  << " raster=" << raster_extent(480, state->raster_half) << 'x'
                  << raster_extent(272, state->raster_half) << " AA=" << state->antialiasing
                  << " draw_barriers=" << (draw_barriers() ? 1 : 0) << '\n';
        log_line("GE", std::string("Vulkan renderer: ") + stats.adapter +
                           (state->shared_queue ? " (single queue)" : " (GE + present queues)") +
                           (state->ctx.line_rasterization ? " bresenham_lines" : ""));
        return true;
    } catch (const std::exception &error) {
        std::cerr << "[Vulkan] initialization: " << error.what() << '\n';
        log_line("GE", std::string("Vulkan initialization failed: ") + error.what());
        const char *backend = std::getenv("PSPRECOMP_MOTORSTORM_RENDERER");
        if (backend && std::strcmp(backend, "vulkan") == 0) {
#if defined(__ANDROID__)
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "MotorStorm Vulkan unavailable", error.what(), nullptr);
#endif
            throw;
        }
    }
    return false;
}
void shutdown(bool reset_report) noexcept {
    if (state) {
        try {
            wait(*state);
#if defined(__ANDROID__)
            save_hw_keys(*state);
#endif
        } catch (...) {
        }
        state.reset();
    }
    if (reset_report)
        stats = GpuReport{"Vulkan"};
    else
        stats.active = false;
    attempted = false;
}
namespace {
// Uploads a VertexCS job and records its dispatch in the chunk's vertex
// pre-pass; returns the offset of the decoded vertices in vertex_arena.
UINT64 process_vertices(State &s, psprecomp::GuestMemory &memory, const GpuVertexJob &job, UINT output_bytes) {
    if (!s.vertex_arena)
        s.vertex_arena = make_buffer(kVertexArenaBytes, Memory::Device);
    if (s.vertex_used + output_bytes > s.vertex_base + kVertexArenaBytes / 2u) {
        flush_chunk(s);
        wait(s, kWaitVertex);
        s.vertex_used = s.vertex_base;
    }
    const UINT64 output = s.vertex_used;
    s.vertex_used = (s.vertex_used + output_bytes + 255u) & ~UINT64{255u};
    std::vector<std::uint32_t> header = job.header;
    const UINT64 header_bytes = header.size() * 4u;
    const UINT64 vertex_at = header_bytes + (job.vertex_address & 3u);
    const UINT64 total = vertex_at + job.vertex_bytes;
    header[10] = static_cast<std::uint32_t>(vertex_at);
    header[15] = static_cast<std::uint32_t>(total);
    const auto offset = allocate(s, (total + 7u) & ~UINT64{7u}, 256);
    std::memcpy(s.mapped + offset, header.data(), header_bytes);
    std::span<std::uint8_t> raw(s.mapped + offset + vertex_at, job.vertex_bytes);
    memory.copy_out(job.vertex_address, raw);
    CommandSlot &chunk = s.slots[s.slot_index];
    if (!s.pre_open) {
        VkCommandBufferBeginInfo begin_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
        begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        check(vkBeginCommandBuffer(chunk.pre, &begin_info), "begin vertex commands");
        if (!s.vertex_batch_pipeline)
            vkCmdBindPipeline(chunk.pre, VK_PIPELINE_BIND_POINT_COMPUTE, s.vertex_pipeline);
        s.pre_open = true;
        if (chunk.queries) {
            vkCmdWriteTimestamp(chunk.pre, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, chunk.queries, 2);
            chunk.pre_timed = true;
        }
    }
    if (s.vertex_batch_pipeline) {
        for (UINT first = 0; first < job.decode_count; first += 64u)
            s.vertex_groups.insert(s.vertex_groups.end(),
                                   {static_cast<std::uint32_t>(offset / 4u), static_cast<std::uint32_t>(output / 4u),
                                    job.decode_count, first});
    } else {
        push_compute(s, chunk.pre, {}, upload_view(s, offset), {s.vertex_arena.buffer, output});
        vkCmdDispatch(chunk.pre, (job.decode_count + 63u) / 64u, 1, 1);
    }
    s.has_commands = true;
    return output;
}
} // namespace
void submit(psprecomp::GuestMemory &memory, const GpuDraw &draw, std::span<const GpuVertex> vertices,
            const GpuTexture *texture, const GpuVertexJob *job) {
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
    if (!lazy_publish_enabled() && !s.recording && s.readback_fence != 0u) {
        PublishReason reason(0);
        publish_readbacks(s, memory);
    }
    if (s.recording && s.used - s.arena_base > kUploadBytes / 2u - 8 * 1024 * 1024)
        sync(memory);
    if (!s.recording)
        ++s.list_serial;
    begin(s);
    if (valid_depth)
        get_surface(s, memory, draw.depthbuffer, draw.depth_stride, height, 2);
    auto &color = get_surface(s, memory, draw.framebuffer, draw.stride, height, bpp, draw.format);
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
            left = std::min(left, v.x);
            right = std::max(right, v.x);
            top = std::min(top, v.y);
            bottom = std::max(bottom, v.y);
        }
        full_screen = (vertices.size() == 6 || (texture && texture->feedback_address)) && left <= 0.0f &&
                      right >= 480.0f && top <= 0.0f && bottom >= 272.0f;
    }
    if (!draw.hardware_transform && texture && texture->feedback_address) {
        if (samples_display_picture(physical(texture->feedback_address), texture->feedback_stride))
            full_screen = true;
    }
    const bool widen = aspect > 1.0f && !full_screen;
    Surface *depth = &color;
#if defined(__ANDROID__)
    if (!valid_depth) {
        auto &dummy = s.attachment_dummy_depth;
        if (!dummy.image || dummy.stride != color.stride || dummy.height != color.height || dummy.raster_half != color.raster_half) {
            if (dummy.image) { sync(memory); begin(s); }
            dummy.stride = color.stride; dummy.height = color.height; dummy.raster_half = color.raster_half;
            dummy.image = make_buffer(dummy.bytes(), Memory::Device);
            dummy.attachment.reset();
            dummy.hw_depth.reset();
            dummy.hw_depth_layout = VK_IMAGE_LAYOUT_UNDEFINED;
            dummy.hw_matches = false;
            dummy.hw_dirty = false;
            // Initialize the dummy depth from known zero bytes, never uninitialized GPU memory.
            const auto bytes = allocate(s, dummy.bytes(), 4);
            std::memset(s.mapped + bytes, 0, static_cast<std::size_t>(dummy.bytes()));
            copy_buffer(s, dummy.image.buffer, 0, s.upload.buffer, bytes, dummy.bytes());
            buffer_written(dummy);
        }
        depth = &dummy;
    }
#endif
    if (valid_depth) {
        depth = nullptr;
        for (const auto &candidate : s.surfaces)
            if (candidate->address == physical(draw.depthbuffer) && candidate->stride == draw.depth_stride &&
                candidate->bpp == 2 && candidate->height >= height) {
                depth = candidate.get();
                break;
            }
        if (!depth)
            throw std::runtime_error("MotorStorm Vulkan overlapping color/depth surfaces");
        load_surface(s, *depth, memory);
        color.depth_address = depth->address;
        color.depth_stride = depth->stride;
    }
#if defined(__ANDROID__)
    DrawPixelRoute pixel_route;
#endif
    VkBuffer feedback = VK_NULL_HANDLE;
    VkImageView feedback_view = VK_NULL_HANDLE;
    VkImageView texture_view = VK_NULL_HANDLE, replacement_view = VK_NULL_HANDLE;
    UINT64 cb_offset = 0, vertex_offset = 0, index_offset = 0;
    {
        perf::Scope prepare_profile(perf::kGpuPrepare);
        if (job) {
            const UINT vertex_bytes = job->decode_count * static_cast<UINT>(sizeof(GpuVertex));
            vertex_offset = process_vertices(s, memory, *job, vertex_bytes);
            if (!job->indices.empty()) {
                index_offset = allocate(s, job->indices.size() * 4u, 4);
                std::memcpy(s.mapped + index_offset, job->indices.data(), job->indices.size() * 4u);
            }
        } else {
            const UINT vertex_bytes = static_cast<UINT>(vertices.size_bytes());
            vertex_offset = allocate(s, vertex_bytes, 4);
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
                             (draw.depth_clip ? 1u : 0u) | (draw.primitive == 0 ? 2u : 0u), valid_depth ? 1u : 0u}};
        const bool extended_color = s.racing && s.post.active() && s.post.extended_color;
        bool tag_hud = valid_depth && hud_tag_enabled(s, color, draw.stride);
        if (tag_hud && !draw.hardware_transform) {
            float left = 1e10f, right = -1e10f, top = 1e10f, bottom = -1e10f;
            for (const auto &v : vertices) {
                left = std::min(left, v.x);
                right = std::max(right, v.x);
                top = std::min(top, v.y);
                bottom = std::max(bottom, v.y);
            }
            if (right - left >= 440.0f && bottom - top >= 250.0f)
                tag_hud = false;
            if (texture && texture->feedback_address &&
                samples_display_picture(physical(texture->feedback_address), texture->feedback_stride))
                tag_hud = false;
        }
        std::uint32_t soft_range = 0;
        if (s.racing && s.post.soft_particles_active() && valid_depth && draw.hardware_transform &&
            (draw.commands[0x21] & 1u) && (draw.commands[0x23] & 1u) && draw.commands[0xE7] != 0u &&
            (draw.commands[0xDE] & 7u) >= 4u && !vertices.empty()) {
            float lowest = 1e30f, highest = -1e30f;
            for (const auto &v : vertices) {
                const float z = draw.model_to_view_z[0] * v.x + draw.model_to_view_z[1] * v.y +
                                draw.model_to_view_z[2] * v.z + draw.model_to_view_z[3];
                lowest = std::min(lowest, z);
                highest = std::max(highest, z);
            }
            const float mean = 0.5f * (lowest + highest);
            if (highest - lowest <= 0.04f * std::max(std::fabs(mean), 1e-3f))
                soft_range = static_cast<std::uint32_t>(std::clamp(s.post.soft_particle_softness, 1.0f, 65535.0f));
        }
        constants.render = {s.raster_half, s.output_scale, s.antialiasing,
                            (s.enhanced_filtering ? 1u : 0u) | (extended_color ? 2u : 0u) | (tag_hud ? 4u : 0u) |
                                (soft_range ? 8u | (soft_range << 8) : 0u)};
        constants.wide = {1.0f / aspect, 240.0f, widen ? 1.0f : 0.0f,
                          widen && guest_widescreen.load(std::memory_order_relaxed) ? 1.0f : 0.0f};
        if (texture && texture->feedback_address) {
            Surface::Rect sampled{};
            bool have_sampled = !job && !vertices.empty() && !draw.hardware_transform;
            if (have_sampled) {
                float u0 = 1e30f, v0 = 1e30f, u1 = -1e30f, v1 = -1e30f;
                for (const auto &vertex : vertices) {
                    const float u = vertex.u, v = vertex.v;
                    u0 = std::min(u0, u); u1 = std::max(u1, u);
                    v0 = std::min(v0, v); v1 = std::max(v1, v);
                }
                // Texels the edges can touch: nearest samples pixel centres
                // inside [u0, u1); bilinear also reaches half a texel out.
                const bool linear = ((draw.commands[0xC6] >> 8) & 1u) != 0 || (draw.commands[0xC6] & 1u) != 0;
                const float pad = linear ? 0.5f : 0.0f;
                sampled = {static_cast<int>(std::floor(u0 - pad)), static_cast<int>(std::floor(v0 - pad)),
                           static_cast<int>(std::ceil(u1 + pad)), static_cast<int>(std::ceil(v1 + pad))};
                // UVs outside the texture wrap or clamp to other texels.
                have_sampled = u0 >= 0.0f && v0 >= 0.0f && u1 <= static_cast<float>(texture->width) &&
                               v1 <= static_cast<float>(texture->height) && std::isfinite(u0) && std::isfinite(v1);
                sampled.left = std::max(sampled.left, 0);
                sampled.top = std::max(sampled.top, 0);
            }
            feedback = feedback_snapshot(s, memory, *texture, constants.feedback, have_sampled ? &sampled : nullptr,
                                         &feedback_view, &color);
            ++stats.feedback_draws;
        }
        const State::Replacement *replacement = nullptr;
        if (texture && !feedback && texture->replacement_hash != 0u)
            replacement = get_replacement(s, texture->replacement_hash);
        if (replacement) {
            constants.replace = {1u, texture->replacement_width ? texture->replacement_width : texture->width,
                                 texture->replacement_rows,
                                 (replacement->no_alpha ? 1u : 0u) | (texture->opaque ? 2u : 0u)};
            replacement_view = replacement->image.view;
            ++stats.replaced_draws;
        }
        if ((!replacement || !texture->opaque) && s.enhanced_filtering && texture && !feedback &&
            (draw.commands[0x1E] & 1u) && (draw.commands[0xC6] & 0x101u)) {
            float lo_u = 3.0e38f, lo_v = 3.0e38f, hi_u = -3.0e38f, hi_v = -3.0e38f;
            if (job && job->uv_range_valid) {
                lo_u = job->uv_range[0];
                lo_v = job->uv_range[1];
                hi_u = job->uv_range[2];
                hi_v = job->uv_range[3];
            }
            for (const auto &vertex : vertices) {
                const float q = vertex.q != 0.0f ? vertex.q : 1.0f, u = vertex.u / q, v = vertex.v / q;
                lo_u = std::min(lo_u, u);
                hi_u = std::max(hi_u, u);
                lo_v = std::min(lo_v, v);
                hi_v = std::max(hi_v, v);
            }
            if (std::isfinite(lo_u) && std::isfinite(hi_u) && std::isfinite(lo_v) && std::isfinite(hi_v))
                constants.uv_range = {lo_u, lo_v, hi_u, hi_v};
        }
#if defined(__ANDROID__)
        if (hardware_draws_enabled(s)) {
            GeDrawFacts facts;
            facts.format = draw.format;
            facts.valid_depth = valid_depth;
            // A copied feedback target is sampled by shade() through its
            // packed buffer, or through the exact integer-load path for the
            // compact R8 snapshot. A live/unavailable source stays ordered.
            facts.feedback = texture && texture->feedback_address != 0u && !feedback;
            facts.feedback_snapshot = texture && texture->feedback_address != 0u && feedback;
            facts.soft_particles = soft_range != 0u;
            facts.hud_tag = tag_hud;
            facts.extended_color = extended_color;
            facts.enhanced_filtering = s.enhanced_filtering;
            facts.texture_replacement = replacement != nullptr;
            facts.simple_texture_filter = !texture ||
                (mip_count_for(s, *texture) == 1u && (draw.commands[0xC6] & 0x0Fu) == 1u &&
                 ((draw.commands[0xC6] >> 8) & 0x0Fu) == 1u);
            facts.primitive = draw.primitive;
            facts.raster_half = s.raster_half;
            static const bool wide_blends = [] {
                const char *text = std::getenv("PSPRECOMP_MOTORSTORM_HW_BLENDS");
                return !(text && std::strcmp(text, "0") == 0);
            }();
            facts.wide_blends = wide_blends;
            static const bool hardware_color_test = [] {
                const char *text = std::getenv("PSPRECOMP_MOTORSTORM_HW_COLOR_TEST");
                return !(text && std::strcmp(text, "0") == 0);
            }();
            facts.hardware_color_test = hardware_color_test;
            pixel_route = classify_ge_draw(draw.commands.data(), facts);
            if (pixel_route.hardware && (color.raster_stride() != depth->raster_stride() ||
                                         color.raster_height() != depth->raster_height()))
                pixel_route.hardware = false;
            if (pixel_route.hardware && pixel_route.exact_pixel)
                constants.render[3] |= 32u;
        }
#endif
        cb_offset = allocate(s, sizeof(constants), 256);
        std::memcpy(s.mapped + cb_offset, &constants, sizeof(constants));
        static const GpuTexture white{0, 1, 1, {{0xFFFFFFFFu}}};
        texture_view = feedback_view ? feedback_view
                                     : get_texture(s, texture && !feedback ? *texture : white).image.view;
        if (!replacement)
            replacement_view = texture_view;
    }
    {
        perf::Scope record_profile(perf::kGpuRecord);
#if defined(__ANDROID__)
        const bool hardware = pixel_route.hardware;
        if (s.pixel_path == PixelPath::OrderedAttachment) {
            if (hardware) {
                ++stats.hardware_pixel_draws;
                if (pixel_route.state.alpha_discard)
                    ++stats.hardware_alpha_draws;
            } else {
                ++stats.ordered_pixel_draws;
                if (texture && texture->feedback_address)
                    ++stats.reject_feedback;
                else if ((draw.commands[0x24] & 1u) && (draw.commands[0xD3] & 1u) == 0u)
                    ++stats.reject_stencil;
                else if ((draw.commands[0x27] & 1u) && (draw.commands[0xD3] & 1u) == 0u)
                    ++stats.reject_color;
                else if ((draw.commands[0x21] & 1u) && (draw.commands[0xD3] & 1u) == 0u) {
                    ++stats.reject_blend;
                    // Diagnostics: which blend modes stay ordered (format, then
                    // the 0xDF factors/equation; FIX colors are not part of it).
                    ++rejected_blends[(draw.format << 12) | (draw.commands[0xDF] & 0x7FFu)];
                }
                else if ((draw.commands[0xE8] & 0xFFFFFFu) != 0u || (draw.commands[0xE9] & 0xFFu) != 0u)
                    ++stats.reject_mask;
                else
                    ++stats.reject_other;
            }
            if (s.rendering && s.rendering_hardware != hardware)
                ++stats.pixel_path_switches;
        }
#else
        const bool hardware = false;
#endif
        VkPipeline pipeline = draw.primitive == 0   ? s.point_pipeline
                              : draw.primitive == 1 ? s.line_pipeline
                              : job && job->strip   ? s.strip_pipeline
                                                    : s.list_pipeline;
#if defined(__ANDROID__)
        if (hardware) {
            State::HwPipeKey key{};
            key.topology = draw.primitive == 0 ? 0 : draw.primitive == 1 ? 1 : job && job->strip ? 2 : 3;
            key.depth_test = pixel_route.state.depth_test ? 1 : 0;
            key.depth_write = pixel_route.state.depth_write ? 1 : 0;
            key.depth_compare = pixel_route.state.depth_compare;
            key.blend = pixel_route.state.blend ? 1 : 0;
            key.blend_op = pixel_route.state.blend_op;
            key.src = pixel_route.state.src_factor;
            key.dst = pixel_route.state.dst_factor;
            key.mask = pixel_route.state.color_write_mask;
            key.cull = pixel_route.state.cull_mode;
            key.alpha = pixel_route.state.alpha_discard ? 1 : 0;
            key.feedback = feedback ? 1 : 0;
            if (!s.rendering_hardware || s.hw_pass_color != &color || s.hw_pass_depth != depth)
                begin_hardware_pass(s, color, *depth);
            pipeline = hw_pipeline_for(s, key);
        }
#endif
        if (!hardware && (!s.rendering
#if defined(__ANDROID__)
            || s.rendering_hardware ||
            (s.pixel_path == PixelPath::OrderedAttachment &&
                (s.attachment_color != &color || s.attachment_depth != depth))
#endif
        )) {
            outside(s);
#if defined(__ANDROID__)
            if (s.pixel_path == PixelPath::FixedFunctionProgrammable) {
                bool filled = false;
                for (Surface *target : {&color, depth}) {
                    if (!target->locks || target->locks_ready)
                        continue;
                    vkCmdFillBuffer(s.cmd, target->locks.buffer, 0, VK_WHOLE_SIZE, 0);
                    target->locks_ready = true;
                    filled = true;
                }
                if (filled) {
                    VkMemoryBarrier lock_barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
                    lock_barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
                    lock_barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT | VK_ACCESS_SHADER_WRITE_BIT;
                    vkCmdPipelineBarrier(s.cmd, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0,
                                         1, &lock_barrier, 0, nullptr, 0, nullptr);
                }
                VkRenderPassBeginInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
                pass.renderPass = s.programmable_pass;
                pass.framebuffer = s.programmable_framebuffer;
                pass.renderArea = {{0, 0}, {s.programmable_width, s.programmable_height}};
                vkCmdBeginRenderPass(s.cmd, &pass, VK_SUBPASS_CONTENTS_INLINE);
            } else {
            pack_hardware(s, color);
            if (depth != &color)
                pack_hardware(s, *depth);
            bool loaded_attachment = false;
            for (auto target : {&color, depth}) {
                if (!target->attachment) {
                    target->attachment = make_image(target->raster_stride(), target->raster_height(), 1,
                        VK_FORMAT_R32_UINT, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT |
                        VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT);
                    image_layout(s, target->attachment.image, 1, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_GENERAL);
                    target->buffer_newer = true;
                    target->image_newer = false;
                }
                if (!target->buffer_newer && !lazy_attachments_disabled())
                    continue;
                VkBufferImageCopy copy{};
                copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
                copy.imageExtent = {target->raster_stride(), target->raster_height(), 1};
                vkCmdCopyBufferToImage(s.cmd, target->image.buffer, target->attachment.image, VK_IMAGE_LAYOUT_GENERAL, 1, &copy);
                target->buffer_newer = false;
                loaded_attachment = true;
                ++attachment_loads;
            }
            if (loaded_attachment)
                memory_barrier(s.cmd);
            ++pass_begins;
            const VkImageView views[]{color.attachment.view, depth->attachment.view};
            const UINT fb_width = std::min(color.raster_stride(), depth->raster_stride());
            const UINT fb_height = std::min(color.raster_height(), depth->raster_height());
            VkFramebuffer framebuffer = VK_NULL_HANDLE;
            for (const auto &cached : s.ordered_framebuffers)
                if (cached.color == views[0] && cached.depth == views[1]) {
                    framebuffer = cached.framebuffer;
                    break;
                }
            if (!framebuffer) {
                VkFramebufferCreateInfo fb{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
                fb.renderPass = s.attachment_pass; fb.attachmentCount = 2; fb.pAttachments = views;
                fb.width = fb_width; fb.height = fb_height; fb.layers = 1;
                check(vkCreateFramebuffer(s.device, &fb, nullptr, &framebuffer), "create ordered framebuffer");
                s.ordered_framebuffers.push_back({views[0], views[1], framebuffer});
                s.attachment_framebuffers.push_back(framebuffer);
            }
            VkRenderPassBeginInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
            pass.renderPass = s.attachment_pass; pass.framebuffer = framebuffer;
            pass.renderArea = {{0, 0}, {fb_width, fb_height}};
            vkCmdBeginRenderPass(s.cmd, &pass, VK_SUBPASS_CONTENTS_INLINE);
            s.attachment_color = &color; s.attachment_depth = depth;
            }
#else
            VkRenderingInfo rendering{VK_STRUCTURE_TYPE_RENDERING_INFO};
            rendering.renderArea = {{0, 0}, s.render_area};
            rendering.layerCount = 1;
            vkCmdBeginRendering(s.cmd, &rendering);
#endif
            s.rendering = true;
        }
        if (s.bound_graphics != pipeline) {
            vkCmdBindPipeline(s.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
            s.bound_graphics = pipeline;
        }
        const VkDescriptorBufferInfo buffers[]{{s.upload.buffer, cb_offset, sizeof(Constants)},
                                               {color.image.buffer, 0, VK_WHOLE_SIZE},
                                               {depth->image.buffer, 0, VK_WHOLE_SIZE},
                                               {feedback ? feedback : s.upload.buffer, 0, VK_WHOLE_SIZE}};
        const VkDescriptorImageInfo images[]{{VK_NULL_HANDLE, texture_view, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL},
                                             {VK_NULL_HANDLE, replacement_view,
                                              VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL}};
        const VkWriteDescriptorSet writes[]{buffer_write(0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, &buffers[0]),
                                            buffer_write(1, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &buffers[1]),
                                            buffer_write(2, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &buffers[2]),
                                            image_write(3, &images[0]),
                                            buffer_write(5, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &buffers[3]),
                                            image_write(7, &images[1])};
        vkCmdPushDescriptorSetKHR(s.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 6, writes);
#if defined(__ANDROID__)
        if (!hardware) {
        if (s.pixel_path == PixelPath::OrderedAttachment) {
            const VkDescriptorImageInfo attachment_images[]{{VK_NULL_HANDLE, color.attachment.view, VK_IMAGE_LAYOUT_GENERAL},
                {VK_NULL_HANDLE, depth->attachment.view, VK_IMAGE_LAYOUT_GENERAL}};
            VkWriteDescriptorSet attachment_writes[2]{};
            for (UINT index = 0; index < 2; ++index) {
                attachment_writes[index] = image_write(9 + index, &attachment_images[index]);
                attachment_writes[index].descriptorType = VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT;
            }
            vkCmdPushDescriptorSetKHR(s.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 2, attachment_writes);
        }
        if (s.pixel_path == PixelPath::FixedFunctionProgrammable) {
            if (!color.locks)
                color.locks = make_buffer(std::max<UINT64>(color.bytes(), 4), Memory::Device);
            const VkDescriptorBufferInfo lock_info{color.locks.buffer, 0, VK_WHOLE_SIZE};
            const VkWriteDescriptorSet lock_write = buffer_write(11, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &lock_info);
            vkCmdPushDescriptorSetKHR(s.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 1, &lock_write);
        }
        }
#endif
        const VkViewport viewport{0, 0, static_cast<float>(raster_extent(draw.stride, s.raster_half)),
                                  static_cast<float>(raster_extent(height, s.raster_half)), 0, 1};
        vkCmdSetViewport(s.cmd, 0, 1, &viewport);
        const auto raster = [&](int native, int limit) {
            return static_cast<std::int32_t>(
                raster_extent(static_cast<UINT>(std::clamp(native, 0, limit)), s.raster_half));
        };
        std::int32_t left = raster(draw.left, static_cast<int>(draw.stride)),
                     top = raster(draw.top, static_cast<int>(height)),
                     right = raster(draw.right, static_cast<int>(draw.stride)),
                     bottom = raster(draw.bottom, static_cast<int>(height));
        if (widen && (draw.left > 0 || draw.right < 480)) {
            left = static_cast<std::int32_t>(
                std::floor(widescreen_hud_x(static_cast<float>(draw.left), aspect) * s.raster_half * 0.5f));
            right = static_cast<std::int32_t>(
                std::ceil(widescreen_hud_x(static_cast<float>(draw.right), aspect) * s.raster_half * 0.5f));
        }
        left = std::max(left, 0);
        top = std::max(top, 0);
        const VkRect2D scissor{{left, top},
                               {static_cast<UINT>(std::max(right - left, 0)), static_cast<UINT>(std::max(bottom - top, 0))}};
        vkCmdSetScissor(s.cmd, 0, 1, &scissor);
#if defined(__ANDROID__)
        if (hardware) {
            const float blend_constants[4]{pixel_route.state.constant_r / 255.0f, pixel_route.state.constant_g / 255.0f,
                                           pixel_route.state.constant_b / 255.0f, 1.0f};
            vkCmdSetBlendConstants(s.cmd, blend_constants);
            if (s.ctx.hw_dynamic_depth && s.ctx.hw_dynamic_blend && vkCmdSetDepthTestEnable &&
                vkCmdSetColorBlendEnableEXT) {
                vkCmdSetDepthTestEnable(s.cmd, pixel_route.state.depth_test ? VK_TRUE : VK_FALSE);
                vkCmdSetDepthWriteEnable(s.cmd, pixel_route.state.depth_write ? VK_TRUE : VK_FALSE);
                vkCmdSetDepthCompareOp(s.cmd, static_cast<VkCompareOp>(pixel_route.state.depth_compare));
                vkCmdSetCullMode(s.cmd, static_cast<VkCullModeFlags>(pixel_route.state.cull_mode));
                const VkBool32 blend_enable = pixel_route.state.blend ? VK_TRUE : VK_FALSE;
                vkCmdSetColorBlendEnableEXT(s.cmd, 0, 1, &blend_enable);
                const VkColorBlendEquationEXT equation{static_cast<VkBlendFactor>(pixel_route.state.src_factor),
                                                       static_cast<VkBlendFactor>(pixel_route.state.dst_factor),
                                                       static_cast<VkBlendOp>(pixel_route.state.blend_op),
                                                       VK_BLEND_FACTOR_ONE, VK_BLEND_FACTOR_ZERO, VK_BLEND_OP_ADD};
                vkCmdSetColorBlendEquationEXT(s.cmd, 0, 1, &equation);
                const VkColorComponentFlags mask = pixel_route.state.color_write_mask;
                vkCmdSetColorWriteMaskEXT(s.cmd, 0, 1, &mask);
            }
        }
#endif
        const VkBuffer vertex_buffer = job ? s.vertex_arena.buffer : s.upload.buffer;
        vkCmdBindVertexBuffers(s.cmd, 0, 1, &vertex_buffer, &vertex_offset);
        static const bool skip_draws = diag_flag("PSPRECOMP_MOTORSTORM_DIAG_SKIP_DRAWS");
        ++draw_calls;
        if (skip_draws) {
        } else if (job && !job->indices.empty()) {
            vkCmdBindIndexBuffer(s.cmd, s.upload.buffer, index_offset, VK_INDEX_TYPE_UINT32);
            vkCmdDrawIndexed(s.cmd, vertex_count, 1, 0, 0, 0);
        } else {
            vkCmdDraw(s.cmd,
#if defined(__ANDROID__)
                draw.primitive == 0 ? 6 : vertex_count, draw.primitive == 0 ? vertex_count : 1,
#else
                vertex_count, 1,
#endif
                0, 0);
        }
        wrote(s);
        if (draw_barriers())
            end_rendering(s);
    }
    color.dirty = true;
    ++color.version;
    // Pixels this draw may have written: its scissor (full width when the
    // widescreen HUD remap moved it horizontally).
    Surface::Rect written{widen ? 0 : std::max(draw.left, 0), std::max(draw.top, 0),
                          widen ? static_cast<int>(draw.stride) : draw.right,
                          std::min(draw.bottom, static_cast<int>(height))};
    // 2D (through-mode) draws: their vertices bound the pixels they cover.
    if (!job && !vertices.empty() && !draw.hardware_transform && !widen) {
        float x0 = 1e30f, y0 = 1e30f, x1 = -1e30f, y1 = -1e30f;
        for (const auto &vertex : vertices) {
            x0 = std::min(x0, vertex.x); x1 = std::max(x1, vertex.x);
            y0 = std::min(y0, vertex.y); y1 = std::max(y1, vertex.y);
        }
        if (std::isfinite(x0) && std::isfinite(y1)) {
            written.left = std::max(written.left, static_cast<int>(std::floor(x0)) - 1);
            written.top = std::max(written.top, static_cast<int>(std::floor(y0)) - 1);
            written.right = std::min(written.right, static_cast<int>(std::ceil(x1)) + 1);
            written.bottom = std::min(written.bottom, static_cast<int>(std::ceil(y1)) + 1);
        }
    }
    color.touch_rect(written);
    const bool depth_write = (draw.commands[0xD3] & 1) ? (draw.commands[0xD3] & 0x400) != 0
                                                        : (draw.commands[0x23] & 1) && draw.commands[0xE7] == 0;
    if (valid_depth && depth_write) {
        depth->dirty = true;
        ++depth->version;
        depth->touch_rect(written);
    }
    ++stats.draws;
    stats.vertices += vertex_count;
    if (job)
        ++stats.gpu_vertex_draws;
    if (draw.hardware_transform)
        ++stats.hardware_transform_draws;
    if (++s.chunk_draws >= chunk_draws_limit())
        flush_chunk(s);
}
namespace {
// Record the readback of every surface drawn by this list and submit the list.
void finish_list(State &s) {
    for (const auto &surface : s.surfaces)
        if (surface->dirty)
            resolve_surface(s, *surface);
    bool copied = false;
    for (const auto &surface : s.surfaces) {
        if (surface->dirty) {
            if (!copied) {
                outside(s);
                copied = true;
            }
            if (surface->raster_half == 2)
                sync_buffer(s, *surface);
            copy_buffer(s, surface->readback.buffer, 0,
                        surface->raster_half == 2 ? surface->image.buffer : surface->native.buffer, 0,
                        surface->native_bytes());
            surface->dirty = false;
            surface->readback_pending = true;
        }
        surface->loaded = false;
    }
    if (copied)
        wrote(s);
    if (s.has_commands) {
        submit_chunk(s);
    } else {
        end_rendering(s);
        check(vkEndCommandBuffer(s.cmd), "close GE chunk");
        s.recording = false;
    }
    s.readback_fence = std::max(s.readback_fence, s.frame_fence);
    s.frame_fence = 0u;
    s.replacement_uploaded_in_list = 0u;
    s.replacement_count_in_list = 0u;
}
// Wait for submitted GE work and copy its pixels into guest memory. Bytes the
// CPU changed after the list ended keep the CPU's value.
void publish_readbacks(State &s, psprecomp::GuestMemory &memory) {
    memory.arm_vram_hook(false);
    if (s.readback_fence == 0u)
        return;
    {
        perf::Scope fence_profile(perf::kGpuFence);
        ++stats.publishes[publish_reason];
        if (completed_value(s) < s.readback_fence) {
            const auto begin_ns = perf::now_ns();
            wait_value(s, s.readback_fence, kWaitPublish);
            ++stats.publish_waits[publish_reason];
            stats.publish_wait_ns[publish_reason] += perf::now_ns() - begin_ns;
        }
    }
    s.readback_fence = 0u;
    ++gpu_publish_epoch;
    perf::Scope readback_profile(perf::kGpuReadback);
    if (!s.pending_transfers.empty() && !s.recording) {
        s.transfer_ring.invalidate();
        std::vector<std::uint8_t> row;
        for (const auto &transfer : s.pending_transfers) {
            const auto *pixels = s.transfer_ring.mapped + transfer.offset;
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
        s.pending_transfers.clear();
        s.transfer_used = 0u;
    }
    std::vector<std::uint8_t> current;
    for (const auto &surface : s.surfaces) {
        if (!surface->readback_pending)
            continue;
        surface->readback.invalidate();
        const auto *pixels = reinterpret_cast<const std::uint32_t *>(surface->readback.mapped);
        std::vector<std::uint8_t> published(static_cast<std::size_t>(surface->guest_bytes()));
        if (surface->bpp == 4) {
            std::memcpy(published.data(), pixels, published.size());
        } else {
            for (UINT64 i = 0; i < surface->native_bytes() / 4; ++i) {
                const auto value = static_cast<std::uint16_t>(pixels[i]);
                std::memcpy(published.data() + i * 2, &value, 2);
            }
        }
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
    // Presentation snapshots are submitted after the list's readback fence;
    // retired buffers go only once every submitted GE command has completed.
    if (completed_value(s) >= s.fence_value) {
        s.transient.clear();
        s.transient_images.clear();
#if defined(__ANDROID__)
        for (auto framebuffer : s.attachment_framebuffers) vkDestroyFramebuffer(s.device, framebuffer, nullptr);
        s.attachment_framebuffers.clear();
        s.ordered_framebuffers.clear();
        for (const auto &framebuffer : s.hw_framebuffers)
            vkDestroyFramebuffer(s.device, framebuffer.framebuffer, nullptr);
        s.hw_framebuffers.clear();
#endif
    }
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
            s.replacements.erase(found);
            ++stats.replacements_evicted;
        }
    }
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
            s.textures.erase(found);
        }
    }
}
void gpu_sync_impl(psprecomp::GuestMemory &memory) { sync(memory); }
} // namespace
void sync(psprecomp::GuestMemory &memory) {
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
}
void end_list(psprecomp::GuestMemory &memory) {
    if (!deferred_readback) {
        sync(memory);
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
    memory.set_vram_access_hook(
        [](void *context) {
            if (publish_guard)
                publish_guard();
            if (state) {
                PublishReason reason(3);
                publish_readbacks(*state, *static_cast<psprecomp::GuestMemory *>(context));
            }
        },
        &memory);
    memory.arm_vram_hook(state->readback_fence != 0u);
}
void settle(psprecomp::GuestMemory &memory) {
    if (state) {
        PublishReason reason(4);
        publish_readbacks(*state, memory);
    }
}
void set_deferred_readback(bool enabled) noexcept { deferred_readback = enabled; }
void set_publish_guard(void (*guard)()) noexcept { publish_guard = guard; }
bool sync_texture(psprecomp::GuestMemory &memory, std::uint32_t address, std::uint32_t bytes) {
    if (!state)
        return false;
    address = physical(address);
    for (const auto &pending : state->pending_transfers)
        if (address < static_cast<UINT64>(pending.start()) + pending.bytes() &&
            pending.start() < static_cast<UINT64>(address) + bytes) {
            ++stats.feedback_syncs;
            sync(memory);
            return true;
        }
    for (const auto &target : state->surfaces)
        if (target->dirty && address < static_cast<UINT64>(target->address) + target->guest_bytes() &&
            target->address < static_cast<UINT64>(address) + bytes) {
            ++stats.feedback_syncs;
            sync(memory);
            return true;
        }
    return false;
}
bool transfer_from_target(std::uint32_t source, std::uint32_t source_stride, std::uint32_t source_x,
                          std::uint32_t source_y, std::uint32_t destination, std::uint32_t destination_stride,
                          std::uint32_t destination_x, std::uint32_t destination_y, std::uint32_t width,
                          std::uint32_t height, std::uint32_t bpp) {
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
        s.transfer_ring = make_buffer(State::kTransferRingBytes, Memory::Readback);
    const VkBuffer resolved = resolve_surface(s, *target);
    outside(s);
    const UINT64 first_pixel = (start - target->address) / bpp;
    std::vector<VkBufferCopy> rows(height);
    for (std::uint32_t y = 0; y < height; ++y)
        rows[y] = {(first_pixel + static_cast<UINT64>(y) * source_stride) * 4u,
                   s.transfer_used + static_cast<UINT64>(y) * width * 4u, static_cast<UINT64>(width) * 4u};
    vkCmdCopyBuffer(s.cmd, resolved, s.transfer_ring.buffer, height, rows.data());
    wrote(s);
    s.pending_transfers.push_back(transfer);
    s.transfer_used += (bytes + 255u) & ~UINT64{255u};
    return true;
}
bool source_in_target(std::uint32_t address, std::uint32_t bytes, bool palette, std::uint64_t &version) noexcept {
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
}
bool overlay_targets(std::uint32_t address, std::uint32_t bytes, std::uint64_t &version) noexcept {
    if (!state || !state->recording || bytes == 0u)
        return false;
    const UINT64 begin_address = physical(address), end = begin_address + bytes;
    for (const auto &pending : state->pending_transfers)
        if (begin_address < static_cast<UINT64>(pending.start()) + pending.bytes() && pending.start() < end)
            return false;
    bool any = false;
    version = 0u;
    for (const auto &surface : state->surfaces) {
        if (!surface->dirty || begin_address >= surface->address + surface->guest_bytes() || surface->address >= end)
            continue;
        if (surface->bpp != 4u)
            return false;
        any = true;
        version = version * 1099511628211ull ^ ((static_cast<std::uint64_t>(surface->address) << 32) ^ surface->version);
    }
    return any;
}
bool touches_surface(std::uint32_t address, std::uint32_t bytes) noexcept {
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
    return false;
}
void note_software_draw() noexcept { ++stats.software_draws; }
bool feedback_available(std::uint32_t address, std::uint32_t stride, std::uint32_t format) noexcept {
    if (!state)
        return false;
    address = physical(address);
    const auto bpp = format == 3 ? 4u : 2u;
    for (const auto &target : state->surfaces)
        if (target->loaded && target->stride == stride && target->bpp == bpp && address >= target->address &&
            address < static_cast<UINT64>(target->address) + target->guest_bytes())
            return true;
    return false;
}
GpuReport report() { return stats; }
std::uint64_t memory_epoch() noexcept { return gpu_publish_epoch; }
namespace {
Surface *find_surface(State &s, std::uint32_t framebuffer, std::uint32_t stride, std::uint32_t format,
                      std::uint32_t height) {
    for (const auto &target : s.surfaces)
        if (target->address == physical(framebuffer) && target->stride == stride &&
            target->bpp == (format == 3 ? 4u : 2u) && target->height >= height)
            return target.get();
    return nullptr;
}
} // namespace
GpuImage capture(psprecomp::GuestMemory &memory, std::uint32_t framebuffer, std::uint32_t stride, std::uint32_t format,
                 std::uint32_t width, std::uint32_t height) {
    GpuImage result;
    if (!state || state->recording || !width || !height)
        return result;
    auto &s = *state;
    publish_readbacks(s, memory);
    Surface *color = find_surface(s, framebuffer, stride, format, height);
    if (!color)
        return result;
    result.width = width * s.output_scale;
    result.height = height * s.output_scale;
    const UINT64 bytes = static_cast<UINT64>(result.width) * result.height * 4;
    Buffer output = make_buffer(bytes, Memory::Device);
    Buffer readback = make_buffer(bytes, Memory::Readback);
    begin(s);
    load_surface(s, *color, memory);
    Constants constants{};
    constants.surface = {width, height, raster_extent(stride, s.raster_half), 0};
    constants.mode[0] = format;
    constants.render = {s.raster_half, s.output_scale, s.antialiasing, 0};
    sync_buffer(s, *color);
    compute(s, s.capture_pipeline, constants, {color->image.buffer, 0}, {output.buffer, 0}, result.width,
            result.height);
    outside(s);
    copy_buffer(s, readback.buffer, 0, output.buffer, 0, bytes);
    wrote(s);
    submit_and_wait(s);
    readback.invalidate();
    result.rgba.resize(static_cast<std::size_t>(bytes));
    std::memcpy(result.rgba.data(), readback.mapped, result.rgba.size());
    color->loaded = false;
    return result;
}
namespace {
// ---------------------------------------------------------------------------
// Presentation.
enum PostSlot : UINT {
    kPostFlags, kPostFade, kPostSharpness, kPostExposure, kPostContrast, kPostSaturation, kPostBalance,
    kPostDebandThreshold = kPostBalance + 3, kPostDebandRange, kPostFrame
};
enum PostFlag : std::uint32_t { kPostCas = 2, kPostGrade = 4, kPostDither = 32, kPostHud = 64 };
float update_post_fade(State &s, bool racing) {
    const auto now = std::chrono::steady_clock::now();
    const float elapsed = s.post_clock.time_since_epoch().count() == 0
                              ? 0.0f
                              : std::min(0.1f, std::chrono::duration<float>(now - s.post_clock).count());
    s.post_clock = now;
    constexpr float kFadeSeconds = 0.5f;
    s.post_fade = std::clamp(s.post_fade + (racing ? elapsed : -elapsed) / kFadeSeconds, 0.0f, 1.0f);
    if (racing && s.post_fade == 0.0f)
        s.post_fade = 1.0f / 60.0f;
    return s.post_fade;
}
void set_post_constants(const PostSettings &p, Constants &constants, float fade, UINT output_scale, UINT frame,
                        bool hud_tags = false) {
    auto &c = constants.commands;
    const auto put = [&](UINT slot, float value) { c[slot] = std::bit_cast<std::uint32_t>(value); };
    c[kPostFlags] = (p.sharpening ? kPostCas : 0u) | (p.color_correction ? kPostGrade : 0u) | kPostDither |
                    (hud_tags ? kPostHud : 0u);
    put(kPostFade, fade);
    put(kPostSharpness, p.sharpening_strength);
    put(kPostExposure, std::exp2(p.exposure));
    put(kPostContrast, p.contrast);
    put(kPostSaturation, p.saturation);
    const auto balance = white_balance(p.temperature, p.tint);
    for (UINT i = 0; i < 3; ++i)
        put(kPostBalance + i, balance[i]);
    put(kPostDebandThreshold, 2.5f / 255.0f);
    put(kPostDebandRange, 3.0f * static_cast<float>(output_scale));
    c[kPostFrame] = frame;
}
Surface *find_depth_surface(State &s, const Surface &color) {
    if (!color.depth_stride)
        return nullptr;
    for (const auto &candidate : s.surfaces)
        if (candidate->address == color.depth_address && candidate->stride == color.depth_stride &&
            candidate->bpp == 2)
            return candidate.get();
    return nullptr;
}
void record_depth_resolve(State &s, Surface &depth, VkBuffer target, UINT width, UINT height) {
    sync_buffer(s, depth);
    Constants constants{};
    constants.surface = {width, height, 0, raster_extent(depth.stride, depth.raster_half)};
    constants.render = {depth.raster_half, s.output_scale, s.antialiasing, 0};
    compute(s, s.depth_resolve_pipeline, constants, {depth.image.buffer, 0}, {target, 0}, width * s.output_scale,
            height * s.output_scale);
}
void prepare_post_buffers(State &s, State::PresentFrame &frame, UINT width, UINT height) {
    const UINT64 bytes = static_cast<UINT64>(width) * height * s.output_scale * s.output_scale * 8;
    if (frame.post_bytes >= bytes)
        return;
    for (auto &target : frame.post_buffers)
        target = make_buffer(bytes, Memory::Device);
    frame.post_color = make_buffer(bytes / 2 * 3, Memory::Device);
    frame.post_bytes = bytes;
}
void create_present_frames(State &s, UINT width, UINT height) {
    if (s.present_frames[0].pool)
        return;
    VkSemaphoreTypeCreateInfo type{VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO};
    type.semaphoreType = VK_SEMAPHORE_TYPE_TIMELINE;
    VkSemaphoreCreateInfo timeline{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    timeline.pNext = &type;
    check(vkCreateSemaphore(s.device, &timeline, nullptr, &s.present_timeline), "create present timeline");
    const VkSemaphoreCreateInfo binary{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    for (auto &semaphore : s.acquire)
        check(vkCreateSemaphore(s.device, &binary, nullptr, &semaphore), "create acquire semaphore");
    for (auto &frame : s.present_frames) {
        VkCommandPoolCreateInfo pool{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
        pool.flags = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
        pool.queueFamilyIndex = s.ctx.queue_family;
        check(vkCreateCommandPool(s.device, &pool, nullptr, &frame.pool), "create present pool");
        VkCommandBufferAllocateInfo allocate_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
        allocate_info.commandPool = frame.pool;
        allocate_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
        allocate_info.commandBufferCount = 1;
        check(vkAllocateCommandBuffers(s.device, &allocate_info, &frame.cmd), "allocate present commands");
        if (perf::enabled()) {
            VkQueryPoolCreateInfo queries{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO};
            queries.queryType = VK_QUERY_TYPE_TIMESTAMP;
            queries.queryCount = 4;
            check(vkCreateQueryPool(s.device, &queries, nullptr, &frame.queries), "create post timestamps");
        }
        frame.constants = make_buffer(kPresentConstantBytes, Memory::Upload);
        if (s.post.active())
            prepare_post_buffers(s, frame, width, height);
    }
}
void create_present_pipelines(State &s) {
    if (s.pipelines_format == s.swap_format)
        return;
    for (VkPipeline *pipeline : {&s.present_pipeline, &s.post_present_pipeline})
        if (*pipeline) {
            vkDestroyPipeline(s.device, *pipeline, nullptr);
            *pipeline = VK_NULL_HANDLE;
        }
    s.present_pipeline =
        create_graphics(s, "PresentVS", {}, "PresentPS", VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, s.swap_format);
    s.post_present_pipeline =
        create_graphics(s, "PresentVS", {}, "PostPresentPS", VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, s.swap_format);
    s.pipelines_format = s.swap_format;
}
// (Re)creates the swapchain for the window's client size. False: the window
// has no area (minimized), so nothing can be presented now.
bool create_swapchain(State &s) {
    VkSurfaceCapabilitiesKHR caps{};
    check(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.ctx.physical, s.surface, &caps), "query surface");
    RECT client{};
    GetClientRect(s.window, &client);
    VkExtent2D extent{static_cast<UINT>(std::max<LONG>(0, client.right)),
                      static_cast<UINT>(std::max<LONG>(0, client.bottom))};
    // A minimized window reports a zero maximum extent (as PPSSPP notes): no swapchain now.
    if (caps.maxImageExtent.width == 0 || caps.maxImageExtent.height == 0)
        return false;
    if (caps.currentExtent.width != 0xFFFFFFFFu)
        extent = caps.currentExtent;
#if defined(__ANDROID__)
    // PSPRECOMP_MOTORSTORM_PRESENT_HEIGHT=<lines> renders the present pass
    // (SGSR upscale, post effects) at most that tall and lets the display
    // compositor scale it to the panel. Off by default: on a Snapdragon 8
    // Gen 3 a 1080-line swapchain on a 1440-line panel raced 9% slower than
    // native, as the compositor then scales on the same GPU.
    limit_to_present(extent.width, extent.height);
#endif
    extent.width = std::clamp(extent.width, caps.minImageExtent.width, caps.maxImageExtent.width);
    extent.height = std::clamp(extent.height, caps.minImageExtent.height, caps.maxImageExtent.height);
    if (!extent.width || !extent.height)
        return false;
    UINT count = 0;
    vkGetPhysicalDeviceSurfaceFormatsKHR(s.ctx.physical, s.surface, &count, nullptr);
    std::vector<VkSurfaceFormatKHR> formats(count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(s.ctx.physical, s.surface, &count, formats.data());
    VkSurfaceFormatKHR chosen = formats.empty() ? VkSurfaceFormatKHR{VK_FORMAT_B8G8R8A8_UNORM,
                                                                     VK_COLOR_SPACE_SRGB_NONLINEAR_KHR}
                                                : formats[0];
    // UNORM like the D3D12 swapchain: the shaders output display-encoded values.
    for (const auto &format : formats)
        if ((format.format == VK_FORMAT_B8G8R8A8_UNORM || format.format == VK_FORMAT_R8G8B8A8_UNORM) &&
            format.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR) {
            chosen = format;
            break;
        }
    vkGetPhysicalDeviceSurfacePresentModesKHR(s.ctx.physical, s.surface, &count, nullptr);
    std::vector<VkPresentModeKHR> modes(count);
    vkGetPhysicalDeviceSurfacePresentModesKHR(s.ctx.physical, s.surface, &count, modes.data());
    const auto supports = [&](VkPresentModeKHR mode) { return std::find(modes.begin(), modes.end(), mode) != modes.end(); };
    s.present_mode = VK_PRESENT_MODE_FIFO_KHR;
    if (!s.vsync)
        s.present_mode = supports(VK_PRESENT_MODE_IMMEDIATE_KHR) ? VK_PRESENT_MODE_IMMEDIATE_KHR
                         : supports(VK_PRESENT_MODE_MAILBOX_KHR) ? VK_PRESENT_MODE_MAILBOX_KHR
                                                                 : VK_PRESENT_MODE_FIFO_KHR;
#if defined(__ANDROID__)
    // Android shares one queue between GE work and presentation on Adreno
    // drivers that expose a single queue. A FIFO present batch waits for the
    // display to release an image, and every GE chunk queued behind it waits
    // too, which stalled the guest about one vsync per frame. MAILBOX always
    // has a free image; the guest pacer already paces frames to 30/60 fps.
    // MOTORSTORM_ANDROID_PRESENT_MODE=fifo restores FIFO for A/B checks.
    {
        const char *requested = std::getenv("MOTORSTORM_ANDROID_PRESENT_MODE");
        const bool want_fifo = requested && std::strcmp(requested, "fifo") == 0;
        if (s.vsync && !want_fifo && supports(VK_PRESENT_MODE_MAILBOX_KHR))
            s.present_mode = VK_PRESENT_MODE_MAILBOX_KHR;
    }
#endif
    s.immediate = s.present_mode == VK_PRESENT_MODE_IMMEDIATE_KHR;
    UINT images = std::max(3u, caps.minImageCount);
#if defined(__ANDROID__)
    if (s.present_mode == VK_PRESENT_MODE_MAILBOX_KHR)
        images = std::max(images, caps.minImageCount + 1u);
#endif
    if (caps.maxImageCount)
        images = std::min(images, caps.maxImageCount);
    VkSwapchainCreateInfoKHR info{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    info.surface = s.surface;
    info.minImageCount = images;
    info.imageFormat = chosen.format;
    info.imageColorSpace = chosen.colorSpace;
    info.imageExtent = extent;
    info.imageArrayLayers = 1;
    info.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    info.preTransform = caps.currentTransform;
#if defined(__ANDROID__)
    const char *pre_rotate = std::getenv("MOTORSTORM_ANDROID_PRE_ROTATE");
    if (pre_rotate && std::strcmp(pre_rotate, "0") == 0 && (caps.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR))
        info.preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
    s.presentation_transform = info.preTransform;
    // Android capabilities report the oriented extent. Pre-rotated buffers
    // use the display's identity extent; the shader rotates the fitted image.
    if (info.preTransform == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR ||
        info.preTransform == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR) {
        std::swap(extent.width, extent.height);
        info.imageExtent = extent;
    }
    log_line("GE", "Android swapchain " + std::to_string(extent.width) + "x" + std::to_string(extent.height) +
        " pre_transform=" + std::to_string(info.preTransform));
#endif
    info.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    info.presentMode = s.present_mode;
    info.clipped = VK_TRUE;
    info.oldSwapchain = s.swapchain;
    VkSwapchainKHR swapchain{};
    check(vkCreateSwapchainKHR(s.device, &info, nullptr, &swapchain), "create swapchain");
    s.destroy_swapchain();
    s.swapchain = swapchain;
    s.swap_format = chosen.format;
    s.swap_extent = extent;
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &count, nullptr);
    s.swap_images.resize(count);
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &count, s.swap_images.data());
    const VkSemaphoreCreateInfo binary{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    for (auto image : s.swap_images) {
        VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view.image = image;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = s.swap_format;
        view.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        VkImageView created{};
        check(vkCreateImageView(s.device, &view, nullptr, &created), "create swapchain view");
        s.swap_views.push_back(created);
        VkSemaphore done{};
        check(vkCreateSemaphore(s.device, &binary, nullptr, &done), "create present semaphore");
        s.render_done.push_back(done);
    }
#if defined(__ANDROID__)
    if (!s.dynamic_rendering && s.pipelines_format != s.swap_format) {
        if (s.swapchain_pass)
            vkDestroyRenderPass(s.device, s.swapchain_pass, nullptr);
        VkAttachmentDescription attachment{};
        attachment.format = s.swap_format;
        attachment.samples = VK_SAMPLE_COUNT_1_BIT;
        attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachment.initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        attachment.finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        const VkAttachmentReference reference{0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
        VkSubpassDescription subpass{};
        subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpass.colorAttachmentCount = 1;
        subpass.pColorAttachments = &reference;
        VkRenderPassCreateInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
        pass.attachmentCount = 1;
        pass.pAttachments = &attachment;
        pass.subpassCount = 1;
        pass.pSubpasses = &subpass;
        check(vkCreateRenderPass(s.device, &pass, nullptr, &s.swapchain_pass), "create swapchain pass");
    }
    if (!s.dynamic_rendering) {
        for (auto view : s.swap_views) {
            VkFramebufferCreateInfo fb{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            fb.renderPass = s.swapchain_pass;
            fb.attachmentCount = 1;
            fb.pAttachments = &view;
            fb.width = s.swap_extent.width;
            fb.height = s.swap_extent.height;
            fb.layers = 1;
            VkFramebuffer framebuffer{};
            check(vkCreateFramebuffer(s.device, &fb, nullptr, &framebuffer), "create swapchain framebuffer");
            s.swap_framebuffers.push_back(framebuffer);
        }
    }
#endif
    create_present_pipelines(s);
    s.present_width = static_cast<UINT>(std::max<LONG>(1, client.right));
    s.present_height = static_cast<UINT>(std::max<LONG>(1, client.bottom));
    return true;
}
void wait_present_idle(State &s) {
    if (!s.present_timeline)
        return;
    if (s.present_value)
        wait_semaphore(s.device, s.present_timeline, s.present_value, "present wait");
    auto lock = queue_lock(s);
    vkQueueWaitIdle(s.present_queue);
}
void create_presentation(State &s, HWND window, UINT frame_width, UINT frame_height) {
    if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_VSYNC"))
        s.vsync = std::strcmp(value, "0") != 0 && std::strcmp(value, "off") != 0;
    if (const char *value = std::getenv("PSPRECOMP_MOTORSTORM_FULLSCREEN_MODE");
        value && std::strcmp(value, "exclusive") == 0 && !s.exclusive_logged) {
        log_line("GE", "exclusive fullscreen is not available on the Vulkan renderer; using borderless");
        s.exclusive_logged = true;
    }
    create_present_frames(s, frame_width, frame_height);
#if defined(__ANDROID__)
    VkAndroidSurfaceCreateInfoKHR info{VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR};
    info.window = static_cast<ANativeWindow *>(SDL_GetPointerProperty(SDL_GetWindowProperties(window),
        SDL_PROP_WINDOW_ANDROID_WINDOW_POINTER, nullptr));
    if (!info.window) throw std::runtime_error("SDL window has no Android surface");
    check(vkCreateAndroidSurfaceKHR(s.ctx.instance, &info, nullptr, &s.surface), "create Android surface");
    s.native_window = info.window;
    s.surface_lost = false;
    // API 30. The NDK target is 29, so resolve the symbol instead of calling it directly.
    using SetFrameRate = int (*)(ANativeWindow *, float, int);
    // With MAILBOX the newest frame wins at each refresh: a 60 Hz display shows
    // each 30 fps frame twice instead of dropping/duplicating on a 30 Hz one.
    if (auto set_rate = reinterpret_cast<SetFrameRate>(dlsym(RTLD_DEFAULT, "ANativeWindow_setFrameRate")))
        set_rate(info.window, static_cast<float>(present_frame_rate_hz(60)), 0);
#else
    VkWin32SurfaceCreateInfoKHR info{VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR};
    info.hinstance = GetModuleHandleW(nullptr);
    info.hwnd = window;
    check(vkCreateWin32SurfaceKHR(s.ctx.instance, &info, nullptr, &s.surface), "create window surface");
#endif
    VkBool32 supported = VK_FALSE;
    vkGetPhysicalDeviceSurfaceSupportKHR(s.ctx.physical, s.ctx.queue_family, s.surface, &supported);
    if (!supported)
        throw std::runtime_error("the Vulkan graphics queue cannot present to this window");
    s.window = window;
    create_swapchain(s);
    log_line("GE", std::string("presentation: vsync=") + (s.vsync ? "on" : "off") + " mode=" +
                       (s.present_mode == VK_PRESENT_MODE_IMMEDIATE_KHR ? "immediate"
                        : s.present_mode == VK_PRESENT_MODE_MAILBOX_KHR ? "mailbox"
                                                                        : "fifo") +
                       " fullscreen_mode=borderless");
}
// Presenter thread: follows the window size.
void update_present_target(State &s) {
    RECT client{};
    GetClientRect(s.window, &client);
    const UINT w = std::max<LONG>(1, client.right), h = std::max<LONG>(1, client.bottom);
    if (s.swapchain && w == s.present_width && h == s.present_height)
        return;
    wait_present_idle(s);
    create_swapchain(s);
}
std::atomic<std::uint64_t> present_gpu_ns{}, present_gpu_frames{};
std::atomic<std::uint64_t> present_scale_gpu_ns{}, present_scale_gpu_frames{};
void collect_post_timings(State &s, State::PresentFrame &frame) {
    if (frame.timed_present) {
        UINT64 stamps[2]{};
        if (vkGetQueryPoolResults(s.device, frame.queries, 0, 2, sizeof(stamps), stamps, sizeof(UINT64),
                                  VK_QUERY_RESULT_64_BIT) == VK_SUCCESS && stamps[1] > stamps[0]) {
            const auto elapsed = static_cast<UINT64>((stamps[1] - stamps[0]) * s.timestamp_period);
            present_gpu_ns += elapsed;
            ++present_gpu_frames;
            present_scale_gpu_ns += elapsed;
            ++present_scale_gpu_frames;
        }
        frame.timed_present = false;
    }
    if (!frame.timed_post)
        return;
    UINT64 timestamps[4]{};
    if (vkGetQueryPoolResults(s.device, frame.queries, 0, 4, sizeof(timestamps), timestamps, sizeof(UINT64),
                              VK_QUERY_RESULT_64_BIT) == VK_SUCCESS) {
        UINT64 total = 0;
        for (UINT i = 0; i < 3; ++i) {
            const auto ns = static_cast<UINT64>((timestamps[i + 1] - timestamps[i]) * s.timestamp_period);
            stats.post_gpu_ns[i] += ns;
            total += ns;
        }
        present_scale_gpu_ns += total;
        ++present_scale_gpu_frames;
        ++stats.post_gpu_frames;
        stats.post_gpu_max_ns = std::max(stats.post_gpu_max_ns, total);
    }
    frame.timed_post = false;
}
void dispatch_post(State &s, VkCommandBuffer cmd, VkPipeline pipeline, View constants, View source, View destination,
                   View depth, UINT width, UINT height) {
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_COMPUTE, pipeline);
    push_compute(s, cmd, constants, source, destination, depth);
    vkCmdDispatch(cmd, (width + 7) / 8, (height + 7) / 8, 1);
    memory_barrier(cmd, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                   VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
}
// The race post chain, recorded ahead of the present draw on the present queue.
void record_post(State &s, State::PresentFrame &frame, View constants) {
    const UINT width = frame.width * s.output_scale, height = frame.height * s.output_scale;
    prepare_post_buffers(s, frame, frame.width, frame.height);
    VkCommandBuffer cmd = frame.cmd;
    const auto timestamp = [&](UINT index) {
        if (frame.queries)
            vkCmdWriteTimestamp(cmd, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, frame.queries, index);
    };
    if (frame.queries)
        vkCmdResetQueryPool(cmd, frame.queries, 0, 4);
    const View depth = frame.has_depth ? View{frame.depth_image.buffer, 0} : View{};
    timestamp(0);
    dispatch_post(s, cmd, s.post_resolve_pipeline, constants, {frame.image.buffer, 0},
                  {frame.post_buffers[0].buffer, 0}, depth, width, height);
    timestamp(1);
    View source{frame.post_buffers[0].buffer, 0};
    if (s.post.extended_color) {
        dispatch_post(s, cmd, s.deband_pipeline, constants, source, {frame.post_buffers[1].buffer, 0}, depth, width,
                      height);
        source = {frame.post_buffers[1].buffer, 0};
    }
    timestamp(2);
    dispatch_post(s, cmd, s.post_color_pipeline, constants, source, {frame.post_color.buffer, 0}, depth, width, height);
    timestamp(3);
    frame.timed_post = frame.queries != VK_NULL_HANDLE;
}
// Scales the snapshot into the next swapchain image and presents it. Returns
// the present-timeline value of the submission (0: nothing was submitted).
#if defined(__ANDROID__)
// PSPRECOMP_MOTORSTORM_PRESENT_TEXTURE=0 presents straight from the packed GE
// buffer (every display pixel decodes buffer words; slow on Adreno).
bool present_texture_enabled() {
    static const bool value = [] {
        const char *text = std::getenv("PSPRECOMP_MOTORSTORM_PRESENT_TEXTURE");
        return !(text && std::strcmp(text, "0") == 0);
    }();
    return value;
}
// Converts the frame snapshot once to an RGBA8 texture (raster-sized, far
// fewer pixels than the display) for the present pass to sample.
void record_present_texture(State &s, State::PresentFrame &frame, View constants) {
    const UINT width = std::max(1u, raster_extent(frame.width, frame.raster_half));
    const UINT height = std::max(1u, raster_extent(frame.height, frame.raster_half));
    if (!frame.rgba.image || frame.rgba_width != width || frame.rgba_height != height) {
        // The frame's previous present completed before it was reused.
        frame.rgba.reset();
        frame.rgba = make_image(width, height, 1, VK_FORMAT_R8G8B8A8_UNORM);
        frame.rgba_words = make_buffer(static_cast<UINT64>(width) * height * 4, Memory::Device);
        frame.rgba_width = width;
        frame.rgba_height = height;
    }
    VkCommandBuffer cmd = frame.cmd;
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_COMPUTE, s.present_convert_pipeline);
    push_compute(s, cmd, constants, {frame.image.buffer, 0}, {frame.rgba_words.buffer, 0});
    vkCmdDispatch(cmd, (width + 7) / 8, (height + 7) / 8, 1);
    VkMemoryBarrier written{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
    written.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
    written.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    VkImageMemoryBarrier to_copy{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_copy.srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
    to_copy.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    to_copy.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    to_copy.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_copy.srcQueueFamilyIndex = to_copy.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_copy.image = frame.rgba.image;
    to_copy.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1, &written, 0, nullptr, 1, &to_copy);
    VkBufferImageCopy region{};
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    region.imageExtent = {width, height, 1};
    vkCmdCopyBufferToImage(cmd, frame.rgba_words.buffer, frame.rgba.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1,
                           &region);
    VkImageMemoryBarrier to_sample = to_copy;
    to_sample.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    to_sample.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
    to_sample.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_sample.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_sample);
}
#endif
UINT64 present_snapshot(State &s, State::PresentFrame &frame) {
    if (!s.swapchain)
        return 0;
    const UINT slot = s.acquire_index;
    s.acquire_index = (slot + 1u) % State::kAcquireSlots;
    if (s.acquire_value[slot])
        wait_semaphore(s.device, s.present_timeline, s.acquire_value[slot], "acquire semaphore reuse");
    UINT image = 0;
    VkResult result = vkAcquireNextImageKHR(s.device, s.swapchain, 1'000'000'000ull, s.acquire[slot], VK_NULL_HANDLE,
                                            &image);
    if (result == VK_ERROR_OUT_OF_DATE_KHR) {
        s.present_width = s.present_height = 0;  // recreate before the next frame
        return 0;
    }
    if (result == VK_TIMEOUT || result == VK_NOT_READY)
        return 0;
#if defined(__ANDROID__)
    // Android destroys the window surface when the app leaves the screen. The
    // GE thread rebuilds presentation for the new surface on its next frame.
    if (result == VK_ERROR_SURFACE_LOST_KHR) {
        s.surface_lost = true;
        return 0;
    }
#endif
    check(result, "acquire swapchain image");
    check(vkResetCommandPool(s.device, frame.pool, 0), "reset present pool");
    VkCommandBufferBeginInfo begin_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    check(vkBeginCommandBuffer(frame.cmd, &begin_info), "begin present commands");
    VkCommandBuffer cmd = frame.cmd;
    bind_sets(s, cmd);
    Constants constants{};
    constants.surface = {frame.width, frame.height, raster_extent(frame.stride, frame.raster_half), 0};
    constants.mode[0] = frame.format;
#if defined(__ANDROID__)
    constants.mode[1] = s.presentation_transform;
    const bool sgsr = select_upscaler(s.scale_settings) == Upscaler::Sgsr1Spatial && s.antialiasing != 1;
    constants.mode[2] = sgsr ? 1u : 0u;
    constants.mode[3] = frame.has_depth ? 1u : 0u;
    constants.uv_range = {std::clamp(s.scale_settings.sharpness, 1.0f, 2.0f), 0, 0, 0};
#endif
    constants.render = {frame.raster_half, s.output_scale, s.antialiasing, 0};
    const float fade = s.post.active() ? update_post_fade(s, frame.racing) : 0.0f;
    const bool post = fade > 0.0f;
    if (post)
        set_post_constants(s.post, constants, fade, s.output_scale, ++s.post_frames, frame.has_depth);
#if defined(__ANDROID__)
    if (!post && present_texture_enabled())
        constants.render[3] |= 16u;
#endif
    std::memcpy(frame.constants.mapped, &constants, sizeof(constants));
    frame.constants.flush(sizeof(constants));
    const View constant_view{frame.constants.buffer, 0};
    if (post)
        record_post(s, frame, constant_view);
    else if (frame.queries) {
        vkCmdResetQueryPool(cmd, frame.queries, 0, 2);
        vkCmdWriteTimestamp(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, frame.queries, 0);
    }
#if defined(__ANDROID__)
    const bool texture_present = !post && present_texture_enabled();
    if (texture_present)
        record_present_texture(s, frame, constant_view);
#endif
    VkImageMemoryBarrier to_target{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_target.srcAccessMask = 0;
    to_target.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    to_target.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    to_target.newLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    to_target.srcQueueFamilyIndex = to_target.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_target.image = s.swap_images[image];
    to_target.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                         VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, 0, 0, nullptr, 0, nullptr, 1, &to_target);
    VkRenderingAttachmentInfo attachment{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    attachment.imageView = s.swap_views[image];
    attachment.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachment.clearValue.color = {{0.0f, 0.0f, 0.0f, 1.0f}};
    VkRenderingInfo rendering{VK_STRUCTURE_TYPE_RENDERING_INFO};
    rendering.renderArea = {{0, 0}, s.swap_extent};
    rendering.layerCount = 1;
    rendering.colorAttachmentCount = 1;
    rendering.pColorAttachments = &attachment;
#if defined(__ANDROID__)
    if (!s.dynamic_rendering) {
        VkClearValue clear{};
        clear.color = {{0.0f, 0.0f, 0.0f, 1.0f}};
        VkRenderPassBeginInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        pass.renderPass = s.swapchain_pass;
        pass.framebuffer = s.swap_framebuffers[image];
        pass.renderArea = {{0, 0}, s.swap_extent};
        pass.clearValueCount = 1;
        pass.pClearValues = &clear;
        vkCmdBeginRenderPass(cmd, &pass, VK_SUBPASS_CONTENTS_INLINE);
    } else
#endif
    vkCmdBeginRendering(cmd, &rendering);
    auto fitted = fit_game_presentation(
#if defined(__ANDROID__)
        (s.presentation_transform == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR || s.presentation_transform == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR) ? s.swap_extent.height : s.swap_extent.width,
        (s.presentation_transform == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR || s.presentation_transform == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR) ? s.swap_extent.width : s.swap_extent.height,
#else
        s.swap_extent.width, s.swap_extent.height,
#endif
        frame.width, frame.height,
                                              frame.aspect_scale);
#if defined(__ANDROID__)
    if (s.presentation_transform == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR) {
        const auto left = s.swap_extent.width - fitted.top - fitted.height;
        fitted.top = fitted.left; fitted.left = left; std::swap(fitted.width, fitted.height);
    } else if (s.presentation_transform == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR) {
        const auto top = s.swap_extent.height - fitted.left - fitted.width;
        fitted.left = fitted.top; fitted.top = top; std::swap(fitted.width, fitted.height);
    }
#endif
    const VkViewport viewport{static_cast<float>(fitted.left), static_cast<float>(fitted.top),
                              static_cast<float>(std::max(1u, fitted.width)),
                              static_cast<float>(std::max(1u, fitted.height)), 0, 1};
    const VkRect2D rect{{static_cast<std::int32_t>(fitted.left), static_cast<std::int32_t>(fitted.top)},
                        {fitted.width, fitted.height}};
    vkCmdSetViewport(cmd, 0, 1, &viewport);
    vkCmdSetScissor(cmd, 0, 1, &rect);
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, post ? s.post_present_pipeline : s.present_pipeline);
    const VkDescriptorBufferInfo buffers[]{{frame.constants.buffer, 0, sizeof(Constants)},
                                           {post ? frame.post_color.buffer : frame.image.buffer, 0, VK_WHOLE_SIZE}};
    const VkWriteDescriptorSet writes[]{buffer_write(0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, &buffers[0]),
                                        buffer_write(4, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &buffers[1])};
    vkCmdPushDescriptorSetKHR(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 2, writes);
#if defined(__ANDROID__)
    if (texture_present) {
        const VkDescriptorImageInfo image_info{VK_NULL_HANDLE, frame.rgba.view, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
        const VkWriteDescriptorSet image_write_set = image_write(3, &image_info);
        vkCmdPushDescriptorSetKHR(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 1, &image_write_set);
    }
    if (!post) {
        const VkDescriptorBufferInfo depth_info{frame.has_depth ? frame.depth_image.buffer : frame.image.buffer, 0,
                                                VK_WHOLE_SIZE};
        const VkWriteDescriptorSet depth_write = buffer_write(2, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, &depth_info);
        vkCmdPushDescriptorSetKHR(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.layout, 0, 1, &depth_write);
    }
#endif
    static const bool skip_present_draw = diag_flag("PSPRECOMP_MOTORSTORM_DIAG_SKIP_PRESENT");
    if (!skip_present_draw)
        vkCmdDraw(cmd, 3, 1, 0, 0);
#if defined(__ANDROID__)
    if (!s.dynamic_rendering)
        vkCmdEndRenderPass(cmd);
    else
#endif
    vkCmdEndRendering(cmd);
    VkImageMemoryBarrier to_present = to_target;
    to_present.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    to_present.dstAccessMask = 0;
    to_present.oldLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    to_present.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0,
                         0, nullptr, 0, nullptr, 1, &to_present);
    if (!post && frame.queries) {
        vkCmdWriteTimestamp(cmd, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, frame.queries, 1);
        frame.timed_present = true;
    }
    check(vkEndCommandBuffer(cmd), "close presentation commands");
    // GPU-side waits: the swapchain image and the snapshot copy on the GE queue.
    const VkSemaphore waits[]{s.acquire[slot], s.timeline};
    const UINT64 wait_values[]{0, frame.copy_fence};
    const VkPipelineStageFlags stages[]{VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                                        VK_PIPELINE_STAGE_ALL_COMMANDS_BIT};
    const UINT64 value = ++s.present_value;
    const VkSemaphore signals[]{s.render_done[image], s.present_timeline};
    const UINT64 signal_values[]{0, value};
    VkTimelineSemaphoreSubmitInfo timeline{VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO};
    timeline.waitSemaphoreValueCount = 2;
    timeline.pWaitSemaphoreValues = wait_values;
    timeline.signalSemaphoreValueCount = 2;
    timeline.pSignalSemaphoreValues = signal_values;
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.pNext = &timeline;
    submit.waitSemaphoreCount = 2;
    submit.pWaitSemaphores = waits;
    submit.pWaitDstStageMask = stages;
    submit.commandBufferCount = 1;
    submit.pCommandBuffers = &cmd;
    submit.signalSemaphoreCount = 2;
    submit.pSignalSemaphores = signals;
    VkPresentInfoKHR present{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
    present.waitSemaphoreCount = 1;
    present.pWaitSemaphores = &s.render_done[image];
    present.swapchainCount = 1;
    present.pSwapchains = &s.swapchain;
    present.pImageIndices = &image;
    {
        auto lock = queue_lock(s);
        check(vkQueueSubmit(s.present_queue, 1, &submit, VK_NULL_HANDLE), "submit presentation");
        result = vkQueuePresentKHR(s.present_queue, &present);
    }
    s.acquire_value[slot] = value;
    if (result == VK_ERROR_OUT_OF_DATE_KHR || result == VK_SUBOPTIMAL_KHR)
        s.present_width = s.present_height = 0;
#if defined(__ANDROID__)
    else if (result == VK_ERROR_SURFACE_LOST_KHR)
        s.surface_lost = true;
#endif
    else
        check(result, "present");
    return value;
}
void presenter_main(State &s) {
    std::unique_lock lock(s.present_mutex);
    for (;;) {
        s.present_cv.wait(lock, [&] { return s.ready_frame >= 0 || s.presenter_stop; });
        if (s.presenter_stop)
            break;
        lock.unlock();
        bool failed = false;
        std::string error_text;
        try {
            update_present_target(s);
        } catch (const std::exception &error) {
            error_text = error.what();
            failed = true;
        }
        lock.lock();
        const int index = s.ready_frame;
#if defined(__ANDROID__)
        if (failed) {
            // Swapchain recreation fails when the surface went away (app
            // switch, screen off). Drop the frame; the GE thread rebuilds
            // presentation, and a failure there is still reported as fatal.
            s.surface_lost = true;
            if (index >= 0) {
                s.present_frames[index].state = State::FrameState::Free;
                s.present_frames[index].fence = 0;
                s.ready_frame = -1;
            }
            log_line("GE", "presenter: surface unavailable (" + error_text + ")");
            s.present_cv.notify_all();
            continue;
        }
#endif
        if (index < 0 || failed) {
            if (failed) {
                s.present_failed = true;
                s.present_error = error_text;
                log_line("GE", "presenter: " + error_text);
            }
            continue;
        }
        s.ready_frame = -1;
        auto &frame = s.present_frames[index];
        frame.state = State::FrameState::Presenting;
        lock.unlock();
        UINT64 value = 0;
        try {
            value = present_snapshot(s, frame);
        } catch (const std::exception &error) {
            error_text = error.what();
            failed = true;
        }
        lock.lock();
        // A frame that was not submitted is free at once (fence 0).
        frame.fence = value;
        frame.state = State::FrameState::Free;
#if defined(__ANDROID__)
        if (failed && s.surface_lost) {
            log_line("GE", "presenter: surface lost (" + error_text + ")");
            failed = false;
        }
#endif
        if (failed) {
            s.present_failed = true;
            s.present_error = error_text;
            log_line("GE", "presenter: " + error_text);
        }
        ++s.displayed;
        s.present_cv.notify_all();
    }
}
void release_presentation(State &s) {
    s.stop_presenter();
    try {
        wait_present_idle(s);
    } catch (...) {
    }
    s.destroy_swapchain();
    if (s.surface)
        vkDestroySurfaceKHR(s.ctx.instance, s.surface, nullptr);
    s.surface = VK_NULL_HANDLE;
    for (auto &frame : s.present_frames)
        frame.state = State::FrameState::Free;
    s.ready_frame = -1;
}
} // namespace
bool widescreen_enabled() noexcept { return state && state->widescreen; }
void set_output_size(std::uint32_t width, std::uint32_t height) noexcept {
    if (width && height)
        output_size.store((static_cast<std::uint64_t>(width) << 32) | height, std::memory_order_relaxed);
}
void set_guest_widescreen(bool active) noexcept { guest_widescreen.store(active, std::memory_order_relaxed); }
GpuImage debug_post(const GpuImage &input, const PostSettings &settings, float fade, bool reference,
                    const std::vector<std::uint32_t> *depth_words) {
    GpuImage result;
    if (!input.width || !input.height || input.rgba.size() != static_cast<std::size_t>(input.width) * input.height * 4)
        throw std::runtime_error("invalid post diagnostic image");
    if (depth_words && depth_words->size() != static_cast<std::size_t>(input.width) * input.height)
        throw std::runtime_error("post diagnostic depth words must be one per pixel");
    if (!settings.active())
        return input;
    if (!initialize())
        throw std::runtime_error("post diagnostics require the Vulkan renderer");
    auto &s = *state;
    if (s.recording)
        throw std::runtime_error("post diagnostic requires a completed GE list");
    const UINT width = input.width, height = input.height;
    const UINT64 bytes = input.rgba.size();
    Buffer source = make_buffer(bytes, Memory::Upload);
    std::memcpy(source.mapped, input.rgba.data(), input.rgba.size());
    source.flush(bytes);
    Buffer resolved = make_buffer(bytes * 2, Memory::Device);
    Buffer debanded = make_buffer(bytes * 2, Memory::Device);
    Buffer output = make_buffer(bytes, Memory::Device);
    Buffer readback = make_buffer(bytes, Memory::Readback);
    Buffer depth_buffer;
    if (depth_words) {
        depth_buffer = make_buffer(depth_words->size() * 4, Memory::Upload);
        std::memcpy(depth_buffer.mapped, depth_words->data(), depth_words->size() * 4);
        depth_buffer.flush(depth_words->size() * 4);
    }
    begin(s);
    Constants constants{};
    constants.surface = {width, height, width, 0};
    constants.mode[0] = 3;
    constants.render = {2, 1, 0, 0};
    set_post_constants(settings, constants, std::clamp(fade, 0.0f, 1.0f), 1, 1, depth_words != nullptr);
    const auto offset = allocate(s, sizeof(constants), 256);
    std::memcpy(s.mapped + offset, &constants, sizeof(constants));
    const View constant_view = upload_view(s, offset);
    const View depth = depth_buffer ? View{depth_buffer.buffer, 0} : View{};
    const auto run = [&](VkPipeline pipeline, View from, View to) {
        outside(s);
        vkCmdBindPipeline(s.cmd, VK_PIPELINE_BIND_POINT_COMPUTE, pipeline);
        s.bound_compute = pipeline;
        push_compute(s, s.cmd, constant_view, from, to, depth);
        vkCmdDispatch(s.cmd, (width + 7) / 8, (height + 7) / 8, 1);
        wrote(s);
    };
    run(s.post_resolve_pipeline, {source.buffer, 0}, {resolved.buffer, 0});
    View post_source{resolved.buffer, 0};
    if (settings.extended_color) {
        run(s.deband_pipeline, post_source, {debanded.buffer, 0});
        post_source = {debanded.buffer, 0};
    }
    Buffer post_color;
    if (!reference) {
        post_color = make_buffer(bytes * 3, Memory::Device);
        run(s.post_color_pipeline, post_source, {post_color.buffer, 0});
        post_source = {post_color.buffer, 0};
    }
    run(reference ? s.post_capture_pipeline : s.post_color_capture_pipeline, post_source, {output.buffer, 0});
    outside(s);
    copy_buffer(s, readback.buffer, 0, output.buffer, 0, bytes);
    wrote(s);
    submit_and_wait(s);
    readback.invalidate();
    result = {width, height, std::vector<std::uint8_t>(input.rgba.size())};
    std::memcpy(result.rgba.data(), readback.mapped, result.rgba.size());
    return result;
}
std::vector<std::uint32_t> debug_depth_words(psprecomp::GuestMemory &memory, std::uint32_t framebuffer,
                                             std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                                             std::uint32_t height) {
    std::vector<std::uint32_t> result;
    if (!state || state->recording || !width || !height)
        return result;
    auto &s = *state;
    publish_readbacks(s, memory);
    Surface *color = find_surface(s, framebuffer, stride, format, height);
    Surface *depth = color ? find_depth_surface(s, *color) : nullptr;
    if (!depth)
        return result;
    const UINT64 count = static_cast<UINT64>(width) * s.output_scale * height * s.output_scale;
    Buffer output = make_buffer(count * 4, Memory::Device);
    Buffer readback = make_buffer(count * 4, Memory::Readback);
    begin(s);
    record_depth_resolve(s, *depth, output.buffer, width, height);
    outside(s);
    copy_buffer(s, readback.buffer, 0, output.buffer, 0, count * 4);
    wrote(s);
    submit_and_wait(s);
    readback.invalidate();
    result.resize(static_cast<std::size_t>(count));
    std::memcpy(result.data(), readback.mapped, count * 4);
    return result;
}
namespace {
// Debug capture of the race post chain (see motorstorm_gpu.cpp).
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
                if (end == p)
                    break;
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
    auto base = capture(memory, framebuffer, stride, format, width, height);
    if (base.rgba.empty())
        return;
    std::vector<std::uint32_t> depth;
    if (has_depth)
        depth = debug_depth_words(memory, framebuffer, stride, format, width, height);
    const auto post = debug_post(base, s.post, 1.0f, false, depth.empty() ? nullptr : &depth);
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
    log_line("GE", "post capture: race frame " + std::to_string(race_frames) + " written to " + directory +
                       " (depth=" + std::to_string(has_depth) + ")");
}
} // namespace
bool present(psprecomp::GuestMemory &memory, void *window, std::uint32_t framebuffer, std::uint32_t stride,
             std::uint32_t format, std::uint32_t width, std::uint32_t height) {
    if (!state || !window || !width || !height)
        return false;
    perf::Scope present_profile(perf::kPresent);
    auto &s = *state;
    Surface *color = find_surface(s, framebuffer, stride, format, height);
#if defined(__ANDROID__)
    // Movies/software display frames can use a framebuffer never drawn by GE.
    // Windows has a GDI fallback; Android uploads it into the Vulkan path.
    if (!color && !s.recording && framebuffer && stride && stride <= 1024 &&
        memory.contains(framebuffer, static_cast<std::size_t>(stride) * height * (format == 3 ? 4u : 2u))) {
        begin(s);
        color = &get_surface(s, memory, framebuffer, stride, height, format == 3 ? 4u : 2u, format);
        submit_chunk(s);
    }
#endif
    if (!color)
        return false;
    if (s.recording)
        return false;
    const bool current_on_gpu = color->readback_pending;
#if defined(__ANDROID__)
    {
        void *native = SDL_GetPointerProperty(SDL_GetWindowProperties(static_cast<HWND>(window)),
                                              SDL_PROP_WINDOW_ANDROID_WINDOW_POINTER, nullptr);
        if (s.surface && (s.surface_lost || native != s.native_window)) {
            log_line("GE", std::string("Android surface ") + (native ? "replaced" : "destroyed") +
                               "; rebuilding presentation");
            release_presentation(s);
            s.native_window = nullptr;
            s.surface_lost = false;
            std::lock_guard lock(s.present_mutex);
            s.present_failed = false;
            s.present_error.clear();
        }
        if (!native)
            return true;  // backgrounded: no surface to present to
    }
#endif
    if (s.surface && s.window != static_cast<HWND>(window))
        release_presentation(s);
    if (!s.surface)
        create_presentation(s, static_cast<HWND>(window), width, height);
    if (!s.presenter.joinable()) {
        s.presenter_stop = false;
        s.presenter = std::thread([&s] { presenter_main(s); });
    }
    int index = -1;
    {
        std::lock_guard lock(s.present_mutex);
        if (s.present_failed)
            throw std::runtime_error("MotorStorm Vulkan present failed: " + s.present_error);
        UINT64 completed = 0;
        check(vkGetSemaphoreCounterValue(s.device, s.present_timeline, &completed), "read present timeline");
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
            ++stats.superseded_presents;
        }
        if (index < 0) {
            ++stats.skipped_presents;
            return true;
        }
        collect_post_timings(s, s.present_frames[index]);
        s.present_frames[index].state = State::FrameState::Writing;
    }
    State::PresentFrame &frame = s.present_frames[index];
    begin(s, kPresentSlot);
    if (!current_on_gpu)
        load_surface(s, *color, memory);
    const UINT64 bytes = color->bytes();
    if (!frame.image || frame.bytes < bytes) {
        // A superseded snapshot copy into the old buffer may still be queued:
        // retire it with the GE fence instead of destroying it now.
        if (frame.image)
            s.transient.push_back(std::move(frame.image));
        frame.image = make_buffer(bytes, Memory::Device);
        frame.bytes = bytes;
    }
    sync_buffer(s, *color);
    outside(s);
    copy_buffer(s, frame.image.buffer, 0, color->image.buffer, 0, bytes);
    wrote(s);
    frame.has_depth = false;
    const bool sgsr_needs_depth = select_upscaler(s.scale_settings) == Upscaler::Sgsr1Spatial && s.antialiasing != 1;
    if (s.racing && (s.post.needs_depth() || sgsr_needs_depth))
        if (Surface *depth = find_depth_surface(s, *color)) {
            const UINT64 depth_bytes = static_cast<UINT64>(width) * s.output_scale * height * s.output_scale * 4;
            if (!frame.depth_image || frame.depth_bytes < depth_bytes) {
                if (frame.depth_image)
                    s.transient.push_back(std::move(frame.depth_image));
                frame.depth_image = make_buffer(depth_bytes, Memory::Device);
                frame.depth_bytes = depth_bytes;
            }
            record_depth_resolve(s, *depth, frame.depth_image.buffer, width, height);
            frame.has_depth = true;
        }
    submit_chunk(s);
    color->loaded = false;
    frame.copy_fence = s.slots[s.slot_index].fence_value;
    frame.width = width;
    frame.height = height;
    frame.stride = stride;
    frame.format = format;
    frame.racing = s.racing;
    frame.aspect_scale = color->aspect_scale;
    frame.raster_half = color->raster_half;
    {
        std::lock_guard lock(s.present_mutex);
        if (s.ready_frame >= 0 && s.ready_frame != index) {
            s.present_frames[s.ready_frame].state = State::FrameState::Free;
            ++stats.superseded_presents;
        }
        s.ready_frame = index;
        frame.state = State::FrameState::Ready;
    }
    s.present_cv.notify_all();
    ++stats.presents;
    maybe_save_pipeline_cache(s, stats.presents);
#if defined(__ANDROID__)
    if (!s.pipeline_cache_dirty)
        save_hw_keys(s);
    {
        double frame_gpu_ms = -1.0;
        if (s.gpu_samples > 0) {
            frame_gpu_ms = s.gpu_accum;
            s.gpu_accum = 0;
            s.gpu_samples = 0;
        }
        const auto present_samples = present_scale_gpu_frames.exchange(0);
        const auto present_time_ns = present_scale_gpu_ns.exchange(0);
        if (present_samples != 0) {
            const double present_ms = static_cast<double>(present_time_ns) / present_samples / 1.0e6;
            frame_gpu_ms = frame_gpu_ms < 0.0 ? present_ms
                              : s.shared_queue ? frame_gpu_ms + present_ms
                                               : std::max(frame_gpu_ms, present_ms);
        }
        if (frame_gpu_ms >= 0.0) {
            s.completed_gpu_ms = frame_gpu_ms;
            stats.last_gpu_ms = frame_gpu_ms;
        }
        // Thermal status changes slowly; poll it about once a second. The
        // NDK thermal API is API 30, above minSdk, so it is resolved once.
        if (s.scale_settings.mode == ScaleMode::Dynamic && s.thermal_frames++ % 30u == 0u) {
            using AcquireThermal = void *(*)();
            using ThermalStatus = int (*)(void *);
            static const auto acquire = reinterpret_cast<AcquireThermal>(dlsym(RTLD_DEFAULT, "AThermal_acquireManager"));
            static const auto status =
                reinterpret_cast<ThermalStatus>(dlsym(RTLD_DEFAULT, "AThermal_getCurrentThermalStatus"));
            static void *manager = acquire ? acquire() : nullptr;
            if (manager && status)
                s.thermal_status = status(manager);
        }
        // Full resolution outside gameplay (menus, pause, loading, movies);
        // GPU-time driven resolution only while racing.
        const UINT next = s.dynamic_resolution.update(s.base_raster_half, s.raster_half, s.racing, frame_gpu_ms,
                                                      s.scale_settings, s.thermal_status);
        if (next != s.raster_half) {
            log_line("GE", "render scale " + std::to_string(s.raster_half) + "/" + std::to_string(s.base_raster_half) +
                               " -> " + std::to_string(next) + "/" + std::to_string(s.base_raster_half) +
                               (s.racing ? " (gameplay, gpu_ms=" + std::to_string(s.completed_gpu_ms) + ")"
                                         : " (menu: full resolution)"));
            s.raster_half = next;
            s.render_scale = static_cast<float>(next) / static_cast<float>(s.base_raster_half);
            stats.raster_half = s.raster_half;
        }
    }
    stats.render_scale = s.render_scale;
    if (std::getenv("PSPRECOMP_MOTORSTORM_WAIT_STATS") && stats.presents % 150u == 0u) {
        static std::uint64_t previous_submissions{};
        static const char *names[kWaitSites]{"slot", "arena", "sync", "vertex", "publish", "other"};
        std::string line = "waits/150f submissions=" + std::to_string(stats.submissions - previous_submissions);
        previous_submissions = stats.submissions;
        for (int i = 0; i < kWaitSites; ++i) {
            line += std::string(" ") + names[i] + "=" + std::to_string(wait_ns[i] / 1000000) + "ms/" +
                    std::to_string(wait_count[i]);
            wait_ns[i] = wait_count[i] = 0;
        }
        const auto present_frames = present_gpu_frames.exchange(0);
        const auto present_ns = present_gpu_ns.exchange(0);
        line += " passes=" + std::to_string(pass_begins) + " loads=" + std::to_string(attachment_loads) +
                " syncs=" + std::to_string(buffer_syncs) + " draws=" + std::to_string(draw_calls) +
                " snap_copy=" + std::to_string(snapshot_copies) + " snap_reuse=" + std::to_string(snapshot_reuses);
        snapshot_copies = snapshot_reuses = 0;
        pass_begins = attachment_loads = buffer_syncs = draw_calls = 0;
        line += " prepass_ms/f=" + std::to_string(prepass_gpu_ms / 150.0);
        prepass_gpu_ms = 0;
        if (!rejected_blends.empty()) {
            std::vector<std::pair<std::uint64_t, std::uint32_t>> top;
            for (const auto &[mode, count] : rejected_blends)
                top.emplace_back(count, mode);
            std::sort(top.rbegin(), top.rend());
            std::ostringstream modes;
            for (std::size_t i = 0; i < std::min<std::size_t>(top.size(), 6); ++i)
                modes << " fmt" << (top[i].second >> 12) << ":src" << (top[i].second & 0xFu) << "/dst"
                      << ((top[i].second >> 4) & 0xFu) << "/eq" << ((top[i].second >> 8) & 7u) << "=" << top[i].first;
            log_line("GE", "ordered blends/150f:" + modes.str());
            rejected_blends.clear();
        }
        if (pass_stats_enabled() && pass_end_pairs) {
            std::vector<std::pair<std::uint64_t, std::uintptr_t>> top;
            for (const auto &[key, count] : pass_end_sites)
                top.emplace_back(count, key);
            std::sort(top.rbegin(), top.rend());
            Dl_info info{};
            dladdr(reinterpret_cast<void *>(&note_pass_end), &info);
            const auto base = reinterpret_cast<std::uintptr_t>(info.dli_fbase);
            std::ostringstream sites;
            for (std::size_t i = 0; i < std::min<std::size_t>(top.size(), 8); ++i) {
                const auto &pair = (*pass_end_pairs)[top[i].second];
                sites << " " << top[i].first << "@0x" << std::hex << (pair.first - base) << "/0x" << (pair.second - base)
                      << std::dec;
            }
            log_line("GE", "pass ends:" + sites.str());
            pass_end_sites.clear();
        }
        log_line("GE", line + " gpu_ms=" + std::to_string(s.completed_gpu_ms) + " present_gpu_ms=" +
                           std::to_string(present_frames ? present_ns / 1e6 / present_frames : 0.0) +
                           " raster_half=" + std::to_string(s.raster_half));
    }
#endif
    if (s.racing && s.post.active())
        capture_post_frame(s, memory, framebuffer, stride, format, width, height, frame.has_depth);
    return true;
}
} // namespace motorstorm::vulkan
