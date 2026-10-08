# ZeroFG

> Frame generation for mobile GPUs, built on Vulkan. **Version 1.0.**

ZeroFG takes two frames a game rendered and creates the one halfway between
them. Shown in between, those frames double the frame rate: 60 fps becomes
120, 30 becomes 60.

This repository has everything we built to make that work on a phone:

- **the engine** (`include/`, `src/`, `shaders/`): records the GPU work that
  generates a frame into a command buffer you give it. It owns no queue and no
  timing, so it fits into any Vulkan host;
- **the presenter** (`host/xenia-android/`): the part that turns the engine
  into frame generation on a real device. It captures the game's frames,
  paces generation, keeps real frames in order and presents on the screen
  without ever slowing the game. This is where most of the work went;
- **the integration notes** ([INTEGRATION.md](INTEGRATION.md)): how to bring
  ZeroFG into your own host, step by step.

ZeroFG was born inside [XenDroid-ZeroFG](https://github.com/hy300leosquizz-ctrl/XenDroid-ZeroFG),
an Xbox 360 emulator for Android, where it runs in play at 120 frames per
second. It was built there, not for there: the engine has no idea it is inside
an emulator.

## Two modes

| Mode | What it is | GPU time per frame, 1280 x 720 |
| --- | --- | --- |
| `Mode::kZero` | The full engine: the best image | Adreno 840: 2.2 ms · Adreno 650: 7.2 ms |
| `Mode::kReallyZero` | The same engine with half the fine passes, for weaker GPUs | Adreno 840: 1.7 ms · Adreno 650: 5.4 ms |

The times are laboratory measurements of the generation alone, on a fixed
workload. ReallyZero stays within about 0.2 dB of Zero on our real-content
measurement streams (fast synthetic motion loses more).

## How the engine works

For every pair of frames A and B, ZeroFG:

1. works out the exposure change between them (gain, bias, correlation), so
   fades and flashes are not mistaken for motion;
2. estimates motion on a 20-pixel cell grid, coarse to fine, and tests a few
   global camera hypotheses;
3. verifies every cell at full resolution with four propagation passes (two in
   ReallyZero), starting from the previous pair's motion;
4. guards continuity: a vector that would tear the scene apart, or that the
   evidence does not support, falls back to a safe blend;
5. resolves the midpoint frame, warping both sources by how much it trusts
   them and rebuilding the final colour with a sharp kernel.

HUDs, text and static overlays stay where they belong instead of smearing with
the world behind them.

## Requirements

- A Vulkan 1.3 device with `synchronization2` and
  `shaderStorageImageExtendedFormats` enabled.
- `R8_UNORM` storage images, `A2B10G10R10_UNORM_PACK32` storage images that can
  be blitted from, and an input format that can be sampled with linear filtering.
- A picture size the 64-cell grid divides exactly (1280 x 720 and 1920 x 1080
  both work). Other sizes are refused, never run in a weaker mode.

Optional features the device has enabled make it faster (half-precision
colour, 64-wide subgroups, cubic filtering). Every backend gives the same
logical result.

## Building the engine

```sh
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

This builds the static library `zerofg` (alias `zerofg::zerofg`). You need
Python 3, plus `glslangValidator` and `spirv-opt` from the Vulkan SDK (set
`VULKAN_SDK`, or put both on `PATH`). The Vulkan headers come from
`find_package(Vulkan)`, or from `-DZEROFG_VULKAN_HEADERS_DIR=<dir>`; with the
Android NDK toolchain, the NDK's own headers are used. The library never links
a Vulkan loader: every entry point comes from the `vkGetInstanceProcAddr` you
pass in.

```cmake
add_subdirectory(third_party/ZeroFG)
target_link_libraries(my_host PRIVATE zerofg::zerofg)
```

Or let CMake fetch it:

```cmake
include(FetchContent)
FetchContent_Declare(zerofg
  GIT_REPOSITORY https://github.com/hy300leosquizz-ctrl/ZeroFG.git
  GIT_TAG v1.0.0)
FetchContent_MakeAvailable(zerofg)
target_link_libraries(my_host PRIVATE zerofg::zerofg)
```

Built and checked on Windows (clang, llvm-mingw) and Android (NDK r29,
arm64-v8a). The presenter in `host/` is a reference: it builds inside
XenDroid-ZeroFG, and its README lists what it needs from there.

ZeroFG has been runtime-validated in games on one device (Adreno 840); the
Adreno 650 is additionally qualified in the laboratory.

## By the numbers

Two months, August to October 2026: 736 commits, more than 137,000 lines
written and 64,000 rewritten away, about 64,000 lines of original code (the
engines from RC1 to Zero, the presenter, and a laboratory that tests the engine
against ground truth) and 34,000 lines of engineering notes.

## From V1 to 1.0

V1 (August 2026) was the first engine that worked: block motion, a confidence
value and a blend. It produced real frames and strong ghosting, and it had no
presenter at all. It stays in this repository's history. 1.0 replaces all of
it: a new motion estimator verified at full resolution, a temporal prior, an
exposure model, a continuity guard, a new resolve, and the presenter, measured
against ground truth in the laboratory and in play.

## Contact

Questions, integration help and collaboration: **fgzerofg@gmail.com**.

## Development and credits

ZeroFG is developed through human–AI collaboration.

- **hy300leosquizz** ([`hy300leosquizz-ctrl`](https://github.com/hy300leosquizz-ctrl)) — creator and maintainer. Lawyer by trade, Formula 1 podcast presenter by passion, and software architect by sheer determination and curiosity, developing latent talents after asking himself whether he could modify a few features in emulators and falling down the rabbit hole for months: he drew the architecture, set the direction, had an instinct trust rate of 98%, became an expert in Vulkan and in frame generation features and capabilities, made every final call, and ran every test on his own phones, usually a hot one.
- **Zeromeia** — the project name for an AI development collaborator powered by ChatGPT by OpenAI: architecture, runtime and log analysis, experiment design, code review, documentation and release preparation.
- **Zé Raio** — the project name for an AI development collaborator powered by Claude by Anthropic: implementation, the measurement laboratory, log analysis, documentation and release preparation.

AI-generated analysis, designs, code and documentation are engineering inputs. Final decisions, device testing, validation and publication stay with the human maintainer. The names Zeromeia and Zé Raio describe the project's use of ChatGPT and Claude and do not imply sponsorship or endorsement by OpenAI or Anthropic.

## License

Licensed under the **Apache License, Version 2.0** (`Apache-2.0`). See
[`LICENSE`](LICENSE).

Two reference files in `host/xenia-android/` come from Xenia and keep its BSD
3-Clause license ([`LICENSE-Xenia`](host/xenia-android/LICENSE-Xenia)):
`vulkan_presenter_zerofg_device_context.inc` (adapted from Xenia's presenter)
and `xendroid_glue/vulkan_presenter_zerofg_glue.cc` (an excerpt of it). A
provenance check found no code shared with Xenia or XenDroid in any other file.
