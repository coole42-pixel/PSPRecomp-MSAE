# Integrating ZeroFG

This page is for anyone putting ZeroFG into a Vulkan host. The whole public API
is [`include/zerofg/zerofg.h`](include/zerofg/zerofg.h) and
[`include/zerofg/backend_capabilities.h`](include/zerofg/backend_capabilities.h).
Everything below runs for real in the presenter in [`host/xenia-android/`](host/xenia-android/),
the one that ships in [XenDroid-ZeroFG](https://github.com/hy300leosquizz-ctrl/XenDroid-ZeroFG).
When a step here says what to do, that code shows how we did it.

## The contract in one paragraph

You own the device, the queue, the images, the command buffers, the
synchronization and the presentation. ZeroFG owns its pipelines, its working
memory and the commands it records into the command buffer you pass it. It
never submits, never waits and never presents.

## 0. Add it to your build

```cmake
include(FetchContent)
FetchContent_Declare(zerofg
  GIT_REPOSITORY https://github.com/hy300leosquizz-ctrl/ZeroFG.git
  GIT_TAG v1.0.0)
FetchContent_MakeAvailable(zerofg)
target_link_libraries(my_host PRIVATE zerofg::zerofg)
```

(or `add_subdirectory` on a copy). You need Python 3 and the Vulkan SDK's
`glslangValidator` and `spirv-opt` at build time; see the README.

## 1. Create

```cpp
#include "zerofg/zerofg.h"

zerofg::CreateInfo info;
info.vulkan.instance = instance;
info.vulkan.physical_device = physical_device;
info.vulkan.device = device;
info.vulkan.get_instance_proc_addr = vkGetInstanceProcAddr;  // your loader's
info.mode = zerofg::Mode::kZero;          // or kReallyZero on a weaker GPU
info.backend = zerofg::Backend::kAuto;    // the fast paths the device has
info.frame_context_count = 3;             // 1..8, see section 4
info.capabilities = capabilities;         // see section 2

zerofg::Status status;
std::unique_ptr<zerofg::Interpolator> zerofg =
    zerofg::Interpolator::Create(info, &status);
if (!zerofg) {
  // kUnsupported: this device cannot run ZeroFG. Keep your normal path.
}
```

If creation or `Resize` fails with `Backend::kAuto`, create it once more with
`Backend::kCompat`: the portable form uses no optional feature. Both produce the
same logical result.

## 2. Describe what you enabled

`Capabilities` tells ZeroFG what is **enabled on your logical device**, not
what the hardware could do. Fill in what you actually enabled:

| Field | Required | Source |
| --- | --- | --- |
| `effective_api_version` | ≥ `VK_API_VERSION_1_3` | the device's API version (bounded by your instance's) |
| `synchronization2_enabled` | yes | `VkPhysicalDeviceVulkan13Features::synchronization2` you enabled |
| `shader_storage_image_extended_formats_enabled` | yes | `VkPhysicalDeviceFeatures` you enabled |
| `shader_float16_enabled` | optional: half-precision resolve | `VkPhysicalDeviceVulkan12Features::shaderFloat16` you enabled |
| `subgroup_size`, `subgroup_min_size`, `subgroup_max_size`, `subgroup_supported_operations`, `subgroup_supported_stages` | optional: the subgroup fine pass (64-wide subgroups with arithmetic, ballot and shuffle in compute) | `VkPhysicalDeviceSubgroupProperties`, `VkPhysicalDeviceSubgroupSizeControlProperties` |
| `filter_cubic_enabled` | optional: hardware cubic colour | `VK_EXT_filter_cubic` / `VK_IMG_filter_cubic` you enabled |

Leave everything else at its default.

## 3. Size it

```cpp
status = zerofg->Resize(width, height, input_format, output_format);
```

Call it outside the hot path, and again whenever the picture size or a format
changes. It allocates the working resources and builds the pipelines, so call
it before the frames that need it, never in the middle of one.

- **Size.** ZeroFG lays a grid of cells over the picture, 64 cells on the long
  side. The grid must divide the picture exactly: 1280 x 720 and 1920 x 1080
  work. Other sizes return `kUnsupported`.
- **Input format.** Any format your device can sample with linear filtering.
  If your real frames sit inside a larger image (padding, letterbox), pass an
  `active_rect`. Off-origin or larger-than-picture inputs need
  `A2B10G10R10_UNORM_PACK32`.
- **Output format.** `A2B10G10R10_UNORM_PACK32` with `STORAGE` usage is written
  directly. Any other format, or no `STORAGE` usage, is written through an
  internal image and blitted, so it needs `BLIT_DST` support and
  `TRANSFER_DST` usage.

## 4. Generate a frame

```cpp
zerofg::Image previous = Wrap(real_frame_a);   // the earlier real frame
zerofg::Image current  = Wrap(real_frame_b);   // the later real frame
zerofg::Image output   = Wrap(generated_slot);

previous.sequence = id_of_a;   // see "Sequence" below
current.sequence  = id_of_b;

status = zerofg->Interpolate(command_buffer, frame_context_index,
                             previous, current, 0.5f, output);
```

Each `Image` carries the handle, the view, the **layout it is in when the
recorded work runs**, the format, the size and the usage flags. ZeroFG reads the
inputs in the layout you declare (`SHADER_READ_ONLY_OPTIMAL` or `GENERAL`).
It moves the output to its own working layout and back, so the output ends in
the layout you declared.

- **Phase.** Only `0.5` (the midpoint) is supported.
- **Frame contexts.** `frame_context_index` picks one of the
  `frame_context_count` independent sets of working resources. Do not reuse an
  index until the submission that last used it has completed on the GPU. With
  three contexts you can have three generations in flight.
- **One queue, in order.** The contexts share the temporal history (the
  previous pair's motion). Submit every ZeroFG command buffer to the same
  queue, in the order you recorded them.
- **Sequence.** `Image::sequence` identifies the real frame: any strictly
  increasing number, `0` for unknown. ZeroFG reuses the previous pair's motion
  only when the new pair starts on the frame the previous pair ended on, with
  the same distance between them. After a gap, a seek, a pause or a resolution
  change, it simply starts fresh. Feeding consecutive pairs (A→B, B→C, C→D)
  gives the best result.

## 5. Synchronize

Your job, around the command buffer ZeroFG recorded into:

- the inputs must be written and visible before the recorded work runs (a
  semaphore wait from the queue that rendered them, or a barrier on the same
  queue);
- the output must not be in use (by your compositor, by a previous
  presentation) while ZeroFG writes it;
- before you sample or present the output, wait for the generation's
  completion (a semaphore or a fence on your submission).

ZeroFG records its internal barriers with synchronization2, and an opening
barrier so that earlier ZeroFG submissions on the same queue are visible to the
new one.

## 6. Pace

ZeroFG makes frames; the host decides when they appear. What worked in
XenDroid-ZeroFG:

- **Show R, S, R, S**: each generated frame S between the two real frames it
  came from, at the midpoint of their times. A 60 fps game becomes one output
  every 8.3 ms.
- **Expect one frame of latency.** S needs the next real frame, so every real
  frame is shown about one game frame later than it would be without frame
  generation.
- **Never drop or reorder a real frame for a generated one.** If S is late,
  skip it and show the real frame on time.
- **Don't let the display slow the game.** If presentation blocks (a busy
  compositor, a system frame cap), show fewer generated frames rather than
  making the game wait.
- **One output per display refresh.** Assign each output its own refresh, in
  order. Otherwise two outputs can land on the same refresh and one is lost.
- **Give ZeroFG's work GPU priority.** When the game saturates the GPU, frame
  generation that waits behind the game's frames completes in clumps, and no
  pacing can make clumps smooth. Run ZeroFG on its own queue or device at a
  higher priority than the game's (`VK_KHR_global_priority` where the driver
  honours it). On Adreno with Turnip's KGSL backend the driver ignores it, but
  the kernel does not: [host/xenia-android/adrenotools](host/xenia-android/adrenotools/)
  sets the priority of the contexts the driver creates. In XenDroid-ZeroFG
  this took a saturated Arkham City from frames in bursts (a copy of 8 ms
  waiting 40 to 170 ms) to every generated frame on screen, evenly. Under GPU
  saturation, this may trade some game throughput for much lower
  frame-generation latency. Treat it as part of the integration, not as a
  tuning option: without it, two devices or contexts are not isolated in time
  under saturation, and ZeroFG's own device cannot do its job.

## 7. Threading and teardown

An `Interpolator` is not thread-safe: record from one thread at a time. Before
destroying it, make sure no submission that used it is still running (for
example `vkQueueWaitIdle` on the ZeroFG queue). Destroying it frees every
resource it created.

## Status codes

| Status | Meaning |
| --- | --- |
| `kSuccess` | recorded |
| `kInvalidArgument` | a handle, size, format, layout or usage does not match what `Resize` was called with |
| `kUnsupported` | this device, size, format or phase cannot run ZeroFG: keep the normal path |
| `kOutOfMemory`, `kVulkanError` | a Vulkan call failed; with `kAuto`, retrying on `kCompat` is worth one try |
