#pragma once

// Decisions shared by the Android renderer, the launcher, and the host tests.
// Vulkan, libadrenotools, and the Android surface stay outside this header.

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <string_view>

namespace motorstorm {

inline constexpr std::string_view kAcceptedEbootSha256 =
    "bfb677677c939aa6cf99fc97120d7345c9361b77125115338ed479fd1d7c4c16";

enum class ExecutableReject { Ok, WrongHash, Encrypted };

// Encrypted images are rejected before any decrypt step. This function does not
// decrypt, and it accepts only the one decrypted MotorStorm executable.
[[nodiscard]] inline ExecutableReject accept_decrypted_eboot(std::string_view sha256, bool encrypted_image) {
    if (encrypted_image)
        return ExecutableReject::Encrypted;
    if (sha256 != kAcceptedEbootSha256)
        return ExecutableReject::WrongHash;
    return ExecutableReject::Ok;
}

// PSP encrypted EBOOT / PRX images start with "~PSP". A matching ELF does not.
[[nodiscard]] inline bool eboot_image_is_encrypted(std::string_view header) {
    return header.size() >= 4 && header[0] == '~' && header[1] == 'P' && header[2] == 'S' && header[3] == 'P';
}

enum class PixelPath { Interlock, OrderedAttachment, FixedFunctionProgrammable, Unsupported };

struct PixelFeatures {
    bool fragment_shader_interlock{};
    bool ordered_color_attachment{};
};

// No interlock plus ordered colour attachments selects the ordered path.
// If neither is available, rendering is unsupported: a storage-buffer spinlock
// cannot preserve rasterization order or guarantee fragment invocation progress.
// Interlock (the Windows desktop feature) stays on the interlock path.
[[nodiscard]] inline PixelPath select_pixel_path(PixelFeatures features) {
    if (!features.fragment_shader_interlock && features.ordered_color_attachment)
        return PixelPath::OrderedAttachment;
    if (features.fragment_shader_interlock)
        return PixelPath::Interlock;
    return PixelPath::Unsupported;
}

// Points are expanded in the vertex shader. A geometry shader is never required.
[[nodiscard]] inline bool point_expansion_requires_geometry_shader(PixelPath) { return false; }

// Per-draw pixel route for the Android ordered-attachment device.
//
// The device-wide PixelPath above picks interlock, ordered attachments, or the
// programmable lock. It does not describe one draw. On the ordered-attachment
// device, draws whose GE pixel state is ordinary Vulkan fixed-function state
// take a hardware route: real depth test/write, fixed-function blend, an
// R8G8B8A8 color attachment, and a fragment shader that does not call
// pixelUpdate(). Integer texture/color math and output format quantization are
// done in that shader. Blends besides the common source-alpha case and the
// destination-dependent GE tests stay on the ordered attachment shader.
//
// Hardware (Vulkan depth + blend + R8G8B8A8, fragment PSFast or PSFastAlpha):
// - Opaque (blend disabled), including clears. Depth test and depth write follow
//   the GE: test on command 0x23 bit 0, write when 0xE7 is 0, compare from 0xDE.
//   Clears use ALWAYS and write depth when 0xD3 bit 10 is set.
// - 8888 blends with factors Vulkan has: source/destination color and alpha,
//   their complements, and FIX colors as ONE, ZERO or the blend constant.
//   Equations ADD, SUBTRACT, REVERSE_SUBTRACT, MIN and MAX. The attachment
//   result can differ from the PSP's two truncated integer products by one
//   channel value. PSP alpha is copied from the source (ONE/ZERO/ADD).
// - Color test (0x27): it compares the fragment's own color, so the discard
//   entry runs it on the exact integer color (exact_pixel).
// - Alpha test (0x22). ALWAYS stays on PSFast so opaque early-Z is intact.
//   Any other function is PSFastAlpha, which discards. The discard is not in
//   the opaque shader.
// - Whole-channel color masks (each byte of 0xE8/0xE9 is 0x00 or 0xFF).
// - 16-bit targets are quantized with packFrame/unpackFrame before the compact
//   attachment write. D16 depth conversion still has a one-unit rounding gap.
//
// Ordered attachment (packed R32, pixelUpdate):
// - Destination-read blends the blend unit cannot express: doubled source or
//   dest alpha (factors 6-9, the clamped 2*alpha product) and the absolute
//   difference equation (5). Those read the destination color in the shader.
// - Blends on 16-bit targets.
// - Stencil test (0x24). Stencil lives in framebuffer alpha.
// - A keep-mask that is neither all-keep nor all-write inside a channel.
// - Two different fixed blend colors that are not inverses of each other.
// - Live framebuffer reads without a valid snapshot, soft-particle depth fade,
//   HUD depth tags, and 32-bit color stored in a 16-bit target stay ordered.
//   A copied feedback image is sampled with the PSP's integer texel filter.
//
// Command 0xE6 (logic op) is stored and ignored by both the CPU rasterizer and
// pixelUpdate(). It does not select the fallback; doing so would push ordinary
// draws off the hardware path without matching the ordered result.
//
// Numeric fields match the Vulkan 1.0 enums (blend factor, blend op, compare
// op, cull mode, color write mask) so the renderer can cast them. This header
// does not include vulkan.h.

enum class CompactColorFormat : std::uint8_t { PackedR32Uint, Rgba8Unorm };

struct GeDrawFacts {
    std::uint32_t format{3}; // 0 = 565, 1 = 5551, 2 = 4444, 3 = 8888
    bool valid_depth{true};
    bool feedback{};
    bool feedback_snapshot{};
    bool soft_particles{};
    bool hud_tag{};
    bool extended_color{};
    bool enhanced_filtering{};
    bool texture_replacement{};
    bool simple_texture_filter{true};
    std::uint32_t primitive{3}; // 0 points, 1 lines, 3 triangles (see the GE submit)
    std::uint32_t raster_half{2}; // 2 = native 1x
    // Every 8888 blend Vulkan can express takes the hardware route, not only
    // source-alpha/one-minus-source-alpha (PSPRECOMP_MOTORSTORM_HW_BLENDS=0).
    bool wide_blends{true};
    // Color-tested draws take the hardware route (PSPRECOMP_MOTORSTORM_HW_COLOR_TEST=0).
    bool hardware_color_test{true};
    // Experimental native stencil requires an explicit renderer capability.
    bool hardware_stencil{};
    // Ordered reads of the compact RGBA attachment; stencil remains its alpha.
    bool recovery_input_attachment{};
};

struct HardwarePixelState {
    bool depth_test{};
    bool depth_write{};
    std::uint8_t depth_compare{7}; // VkCompareOp, default ALWAYS
    bool blend{};
    std::uint8_t blend_op{}; // VkBlendOp
    std::uint8_t src_factor{1}; // VkBlendFactor, default ONE
    std::uint8_t dst_factor{};  // default ZERO
    std::uint8_t src_alpha_factor{1};
    std::uint8_t dst_alpha_factor{};
    std::uint8_t alpha_blend_op{};
    std::uint8_t color_write_mask{0x0F}; // R|G|B|A
    std::uint8_t cull_mode{};            // VkCullModeFlags
    bool use_blend_constant{};
    std::uint8_t constant_r{};
    std::uint8_t constant_g{};
    std::uint8_t constant_b{};
    bool alpha_discard{};
    bool stencil_test{};
    std::uint8_t stencil_compare{7}; // VkCompareOp, default ALWAYS
    std::uint8_t stencil_fail_op{};   // VkStencilOp
    std::uint8_t stencil_depth_fail_op{}; // VkStencilOp
    std::uint8_t stencil_pass_op{};   // VkStencilOp
    std::uint8_t stencil_reference{};
    std::uint8_t stencil_compare_mask{0xFF};
    std::uint8_t stencil_write_mask{0xFF};
};

enum class GeRejectReason : std::uint8_t {
    None = 0,
    RasterHalfZero,
    Feedback,
    SoftParticles,
    HudTag,
    ExtendedColor,
    Stencil,
    ColorTest,
    WriteMask,
    Blend16Bit,
    BlendNarrow,
    BlendEquation,
    BlendDoubleAlpha,
    BlendFactorUnknown,
    BlendFixConflict,
    TargetSizeMismatch,
    Other
};

[[nodiscard]] inline const char *ge_reject_reason_name(GeRejectReason reason) {
    switch (reason) {
        case GeRejectReason::None: return "None";
        case GeRejectReason::RasterHalfZero: return "RasterHalfZero";
        case GeRejectReason::Feedback: return "Feedback";
        case GeRejectReason::SoftParticles: return "SoftParticles";
        case GeRejectReason::HudTag: return "HudTag";
        case GeRejectReason::ExtendedColor: return "ExtendedColor";
        case GeRejectReason::Stencil: return "Stencil";
        case GeRejectReason::ColorTest: return "ColorTest";
        case GeRejectReason::WriteMask: return "WriteMask";
        case GeRejectReason::Blend16Bit: return "Blend16Bit";
        case GeRejectReason::BlendNarrow: return "BlendNarrow";
        case GeRejectReason::BlendEquation: return "BlendEquation";
        case GeRejectReason::BlendDoubleAlpha: return "BlendDoubleAlpha";
        case GeRejectReason::BlendFactorUnknown: return "BlendFactorUnknown";
        case GeRejectReason::BlendFixConflict: return "BlendFixConflict";
        case GeRejectReason::TargetSizeMismatch: return "TargetSizeMismatch";
        default: return "Other";
    }
}

struct DrawPixelRoute {
    bool hardware{};
    bool exact_pixel{};
    bool framebuffer_alpha_stencil{};
    bool recovery_input_attachment{};
    bool color_only{}; // Backend attachment choice; not a PSP pixel operation.
    HardwarePixelState state{};
    const char *fragment_entry{"PS"};
    bool runs_pixel_update{true};
    CompactColorFormat color_format{CompactColorFormat::PackedR32Uint};
    GeRejectReason reject_reason{GeRejectReason::None};
};

[[nodiscard]] inline const char *compact_color_format_name(CompactColorFormat format) {
    return format == CompactColorFormat::Rgba8Unorm ? "R8G8B8A8_UNORM" : "R32_UINT";
}

// Conservatively track every shader write to the ordered depth attachment.
// HUD tags modify its high bits even with ordinary depth writes masked.
[[nodiscard]] inline bool ge_depth_attachment_changes(const std::uint32_t commands[256], bool valid_depth,
                                                      bool hud_tag, bool hardware_transform) {
    if (!valid_depth || !commands) return false;
    if (commands[0xD3] & 1u) return (commands[0xD3] & 0x400u) != 0u;
    return ((commands[0x23] & 1u) && commands[0xE7] == 0u) || (hud_tag && !hardware_transform);
}

// An ordered stencil/color draw with depth testing disabled and no depth/HUD
// write does not consume depth. Its unchanged attachment output may stay stale
// while the native depth image remains authoritative.
[[nodiscard]] inline bool ge_ordered_needs_depth(const std::uint32_t commands[256], bool valid_depth,
                                                 bool hud_tag, bool hardware_transform) {
    if (!valid_depth || !commands) return false;
    return ge_depth_attachment_changes(commands, valid_depth, hud_tag, hardware_transform) ||
           (!(commands[0xD3] & 1u) && (commands[0x23] & 1u));
}

// Scope native-depth reuse to the observed MotorStorm recovery screen pass.
// This pass tests framebuffer-alpha stencil but never consumes depth.
[[nodiscard]] inline bool ge_recovery_depth_independent(const std::uint32_t c[256], bool valid_depth) {
    return c && valid_depth && c[0x24] == 1u && c[0xDC] == 0xFF8002u && c[0xDD] == 0x020000u &&
           c[0x21] == 1u && c[0xDF] == 0x1Au && c[0xE0] == 0xFFFFFFu &&
           !ge_ordered_needs_depth(c, valid_depth, false, true);
}

[[nodiscard]] inline DrawPixelRoute classify_ge_draw(const std::uint32_t commands[256], GeDrawFacts facts) {
    DrawPixelRoute ordered;
    if (!commands) {
        ordered.reject_reason = GeRejectReason::Other;
        return ordered;
    }
    const auto command = [&](std::uint32_t index) { return commands[index]; };
    const bool clearing = (command(0xD3) & 1u) != 0u;
    const auto reject = [&](GeRejectReason reason) {
        ordered.reject_reason = reason;
        return ordered;
    };
    // Keep blended, feedback, and stateful pixel operations on the packed
    // ordered path. The hardware shader implements integer texture math and
    // quantizes its output to the target format.
    if (facts.raster_half == 0u)
        return reject(GeRejectReason::RasterHalfZero);
    if (facts.feedback)
        return reject(GeRejectReason::Feedback);
    if (facts.soft_particles)
        return reject(GeRejectReason::SoftParticles);
    if (facts.hud_tag)
        return reject(GeRejectReason::HudTag);
    if (facts.extended_color)
        return reject(GeRejectReason::ExtendedColor);
    const bool stencil_enabled = !clearing && (command(0x24) & 1u) != 0u;
    const bool recovery = facts.recovery_input_attachment && !facts.hardware_stencil && facts.format == 3u &&
        !clearing && ge_recovery_depth_independent(commands, facts.valid_depth);
    // Simple unconditional stencil writes can use the COLOR alpha attachment
    // directly. This keeps PSP stencil/alpha together across path transitions.
    // A failed depth test may not require an alpha write, and replacing output
    // alpha is only safe when RGB blending does not consume source alpha.
    const std::uint32_t stencil_ops = command(0xDD);
    const std::uint32_t stencil_pass = (stencil_ops >> 16u) & 7u;
    const bool depth_can_fail = facts.valid_depth && (command(0x23) & 1u) != 0u &&
                                (command(0xDE) & 7u) != 1u;
    const std::uint32_t blend_src = command(0xDF) & 15u, blend_dst = (command(0xDF) >> 4u) & 15u;
    const auto uses_source_alpha = [](std::uint32_t factor) {
        return factor == 2u || factor == 3u || factor == 6u || factor == 7u;
    };
    const bool alpha_stencil = stencil_enabled && facts.format == 3u &&
        (command(0xDC) & 7u) == 1u && stencil_pass <= 2u &&
        (!depth_can_fail || ((stencil_ops >> 8u) & 7u) == 0u) &&
        (stencil_pass == 0u || (command(0x21) & 1u) == 0u ||
         (!uses_source_alpha(blend_src) && !uses_source_alpha(blend_dst)));
    if (stencil_enabled) {
        if (!alpha_stencil && !facts.hardware_stencil && !recovery)
            return reject(GeRejectReason::Stencil);
        const std::uint32_t op = command(0xDD);
        if ((op & 7u) > 5u || ((op >> 8u) & 7u) > 5u || ((op >> 16u) & 7u) > 5u)
            return reject(GeRejectReason::Stencil);
    }
    // The color test reads only the fragment's own color: the discard shader
    // runs it on the exact integer color, like the ordered shader.
    const bool color_test = !clearing && (command(0x27) & 1u) != 0u;
    if (color_test && !facts.hardware_color_test)
        return reject(GeRejectReason::ColorTest);

    const bool write_color = !clearing || (command(0xD3) & 0x100u) != 0u;
    // PSP framebuffer alpha stores stencil. Source alpha participates in RGB
    // blending/testing, but never overwrites stencil on ordinary color draws.
    const bool write_alpha = facts.format != 0u &&
                             (clearing ? (command(0xD3) & 0x200u) != 0u : stencil_enabled);
    std::uint8_t write_mask = 0;
    const auto channel = [&](std::uint32_t keep, int bit, bool enabled) {
        if (!enabled || keep == 0xFFu)
            return true;
        if (keep == 0u) {
            write_mask = static_cast<std::uint8_t>(write_mask | bit);
            return true;
        }
        return false;
    };
    const std::uint32_t rgb_keep = command(0xE8) & 0xFFFFFFu;
    if (!channel(rgb_keep & 0xFFu, 0x1, write_color) || !channel((rgb_keep >> 8) & 0xFFu, 0x2, write_color) ||
        !channel((rgb_keep >> 16) & 0xFFu, 0x4, write_color) ||
        !channel(command(0xE9) & 0xFFu, 0x8, write_alpha))
        return reject(GeRejectReason::WriteMask);

    // PSP compare order is not VkCompareOp order.
    static constexpr std::uint8_t kCompare[]{0, 7, 2, 5, 1, 3, 4, 6};
    HardwarePixelState hw;
    hw.color_write_mask = write_mask;
    if (alpha_stencil && stencil_pass == 0u)
        hw.color_write_mask = static_cast<std::uint8_t>(hw.color_write_mask & ~0x8u);
    hw.src_alpha_factor = 1; // ONE: framebuffer alpha becomes the source alpha
    hw.dst_alpha_factor = 0; // ZERO
    if (stencil_enabled && !alpha_stencil && !recovery) {
        // PSP stencil op order: 0: KEEP, 1: ZERO, 2: REPLACE, 3: INVERT (5), 4: INCR (3), 5: DECR (4)
        static constexpr std::uint8_t kStencilOp[]{0, 1, 2, 5, 3, 4, 0, 0};
        const std::uint32_t test = command(0xDC);
        const std::uint32_t op = command(0xDD);
        hw.stencil_test = true;
        hw.stencil_compare = kCompare[test & 7u];
        hw.stencil_reference = static_cast<std::uint8_t>((test >> 8u) & 0xFFu);
        hw.stencil_compare_mask = static_cast<std::uint8_t>((test >> 16u) & 0xFFu);
        hw.stencil_fail_op = kStencilOp[op & 7u];
        hw.stencil_depth_fail_op = kStencilOp[(op >> 8u) & 7u];
        hw.stencil_pass_op = kStencilOp[(op >> 16u) & 7u];
        // In PSP GE, alpha write mask command 0xE9 controls alpha/stencil channel write mask.
        // bit=0: write, bit=1: keep/masked.
        hw.stencil_write_mask = static_cast<std::uint8_t>(~(command(0xE9) & 0xFFu));
    }
    if (facts.valid_depth && clearing) {
        hw.depth_test = true;
        hw.depth_compare = 7; // ALWAYS
        hw.depth_write = (command(0xD3) & 0x400u) != 0u;
    } else if (facts.valid_depth && (command(0x23) & 1u) != 0u) {
        hw.depth_test = true;
        hw.depth_compare = kCompare[command(0xDE) & 7u];
        hw.depth_write = command(0xE7) == 0u;
    }

    if (!clearing && !recovery && (command(0x21) & 1u) != 0u) {
        const std::uint32_t src = command(0xDF) & 0xFu;
        const std::uint32_t dst = (command(0xDF) >> 4) & 0xFu;
        const std::uint32_t equation = (command(0xDF) >> 8) & 7u;
        // 8888 blends the Vulkan blend unit can express use it. Its final
        // UNORM rounding can differ from PSP integer truncation by one byte.
        // Doubled alpha factors (6-9) and the absolute difference stay ordered
        // and exact. Without wide_blends only source-alpha/one-minus is taken.
        if (facts.format != 3u)
            return reject(GeRejectReason::Blend16Bit);
        if (!facts.wide_blends) {
            if (src != 2u || dst != 3u || equation != 0u)
                return reject(GeRejectReason::BlendNarrow);
            hw.blend = true;
            hw.src_factor = 6; // SRC_ALPHA
            hw.dst_factor = 7; // ONE_MINUS_SRC_ALPHA
            hw.blend_op = 0;   // ADD
        } else {
            if (equation > 4u)
                return reject(GeRejectReason::BlendEquation);
            // GE factor -> VkBlendFactor. 0/1 name the other side's color.
            // 10 (FIX) is resolved below; 0xFF marks a factor Vulkan lacks.
            static constexpr std::uint8_t kSource[]{4, 5, 6, 7, 8, 9, 0xFF, 0xFF, 0xFF, 0xFF, 10};
            static constexpr std::uint8_t kDestination[]{2, 3, 6, 7, 8, 9, 0xFF, 0xFF, 0xFF, 0xFF, 10};
            if (src > 10u || dst > 10u)
                return reject(GeRejectReason::BlendFactorUnknown);
            std::uint8_t src_factor = kSource[src], dst_factor = kDestination[dst];
            if (src_factor == 0xFF || dst_factor == 0xFF)
                return reject(GeRejectReason::BlendDoubleAlpha);
            const std::uint32_t fix_src = command(0xE0) & 0xFFFFFFu, fix_dst = command(0xE1) & 0xFFFFFFu;
            // A fixed color of white or black is ONE or ZERO. Vulkan has one
            // blend constant: both sides may use it only when they share it
            // or the destination's is the source's complement.
            bool constant = false;
            std::uint32_t constant_rgb = 0;
            if (src == 10u) {
                if (fix_src == 0xFFFFFFu) src_factor = 1;
                else if (fix_src == 0u) src_factor = 0;
                else { constant = true; constant_rgb = fix_src; }
            }
            if (dst == 10u) {
                if (fix_dst == 0xFFFFFFu) dst_factor = 1;
                else if (fix_dst == 0u) dst_factor = 0;
                else if (!constant) { constant = true; constant_rgb = fix_dst; }
                else if (fix_dst == fix_src) dst_factor = 10;
                else if ((fix_src ^ fix_dst) == 0xFFFFFFu) dst_factor = 11; // ONE_MINUS_CONSTANT_COLOR
                else return reject(GeRejectReason::BlendFixConflict);
            }
            hw.blend = true;
            hw.src_factor = src_factor;
            hw.dst_factor = dst_factor;
            hw.blend_op = static_cast<std::uint8_t>(equation); // ADD, SUBTRACT, REVERSE_SUBTRACT, MIN, MAX
            if (constant) {
                hw.use_blend_constant = true;
                hw.constant_r = static_cast<std::uint8_t>(constant_rgb & 0xFFu);
                hw.constant_g = static_cast<std::uint8_t>((constant_rgb >> 8) & 0xFFu);
                hw.constant_b = static_cast<std::uint8_t>((constant_rgb >> 16) & 0xFFu);
            }
        }
    }

    const bool cull_primitive = facts.primitive >= 3u;
    if (!clearing && !recovery && cull_primitive && (command(0x1D) & 1u) != 0u)
        hw.cull_mode = (command(0x9B) & 1u) != 0u ? 0x02 : 0x01; // back : front
    const std::uint32_t alpha_func = command(0xDB) & 7u;
    hw.alpha_discard = (!clearing && (command(0x22) & 1u) != 0u && alpha_func != 1u) || color_test;

    DrawPixelRoute route;
    route.hardware = true;
    route.framebuffer_alpha_stencil = alpha_stencil;
    route.recovery_input_attachment = recovery;
    route.exact_pixel = recovery || alpha_stencil || color_test || facts.format != 3u || facts.feedback_snapshot || facts.enhanced_filtering ||
                        facts.texture_replacement ||
                        (!clearing && (command(0x1E) & 1u) != 0u && !facts.simple_texture_filter);
    route.state = hw;
    route.fragment_entry = recovery ? "PSRecovery" : hw.alpha_discard ? "PSFastAlpha" : "PSFast";
    route.runs_pixel_update = recovery;
    route.color_format = CompactColorFormat::Rgba8Unorm;
    route.reject_reason = GeRejectReason::None;
    return route;
}

enum class ScaleMode { Off, Fixed, Dynamic };
enum class Upscaler { None, Sgsr1Spatial };

struct ScaleSettings {
    ScaleMode mode{ScaleMode::Off};
    float fixed_scale{1.0f};
    float min_scale{0.2f};
    float max_scale{1.0f};
    float sharpness{2.0f}; // SGSR 1 EdgeSharpness, upstream default 2, range 1..2
    int target_fps{30};
};

struct ScaleStep {
    float scale{1.0f};
    bool changed{};
};

// 30 fps budget is 33.3 ms. 60 fps budget is 16.7 ms. These are not the
// 34 ms race pass bar.
[[nodiscard]] inline double frame_budget_ms(int target_fps) {
    return target_fps >= 60 ? 16.7 : 33.3;
}

// Present and ANativeWindow frame rate. Never 120. Original pacing (0) is 30.
[[nodiscard]] inline int present_frame_rate_hz(int requested) {
    if (requested >= 60)
        return 60;
    return 30;
}

// Android thermal status: 0 none, 1 light, 2 moderate, 3 severe, 4+ critical.
// A raised status lowers the dynamic-resolution ceiling before throttling.
[[nodiscard]] inline float thermal_scale_ceiling(float max_scale, int thermal_status) {
    float ceiling = max_scale;
    if (thermal_status >= 4)
        ceiling = std::min(ceiling, 0.50f);
    else if (thermal_status >= 3)
        ceiling = std::min(ceiling, 0.70f);
    else if (thermal_status >= 2)
        ceiling = std::min(ceiling, 0.85f);
    return ceiling;
}

// gpu_ms is a timestamp-query result. Small noise inside the hysteresis band
// does not move the scale. Results clamp to [min, thermal ceiling].
[[nodiscard]] inline ScaleStep step_render_scale(float current, double gpu_ms, const ScaleSettings &settings,
                                                 int thermal_status) {
    const float ceiling = thermal_scale_ceiling(settings.max_scale, thermal_status);
    const float hi = std::max(settings.min_scale, ceiling);
    const float lo = std::min(settings.min_scale, hi);
    if (settings.mode == ScaleMode::Off)
        return ScaleStep{1.0f, current != 1.0f};
    if (settings.mode == ScaleMode::Fixed) {
        const float scale = std::clamp(settings.fixed_scale, lo, hi);
        return ScaleStep{scale, scale != current};
    }
    const double budget = frame_budget_ms(settings.target_fps);
    float next = std::clamp(current, lo, hi);
    // 10% over budget steps down. Under 80% of budget steps up.
    // The band between those ratios is the hysteresis.
    if (gpu_ms > budget * 1.10)
        next = std::max(lo, next - 0.05f);
    else if (gpu_ms < budget * 0.80)
        next = std::min(hi, next + 0.05f);
    next = std::clamp(next, lo, hi);
    return ScaleStep{next, next != current};
}

// "Full" resolution on a phone or tablet: the PSP output multiple whose 480x272
// image best fills the landscape display after aspect fitting. A 2560x1600
// tablet fits 2560x1446 and gets 5x (2400x1360). The cap bounds memory use.
[[nodiscard]] inline std::uint32_t display_output_scale(std::uint32_t width, std::uint32_t height,
                                                        std::uint32_t cap = 8u) {
    const double longer = std::max(width, height), shorter = std::min(width, height);
    if (longer <= 0.0 || shorter <= 0.0)
        return 1u;
    const double fitted = std::min(shorter, longer * 272.0 / 480.0);
    const auto scale = static_cast<std::uint32_t>(std::lround(fitted / 272.0));
    return std::clamp<std::uint32_t>(scale, 1u, std::max(1u, cap));
}

// The renderer rasterizes in whole half-pixel steps (raster_half 2 = 1x).
[[nodiscard]] inline std::uint32_t raster_half_for_scale(std::uint32_t base_half, float scale) {
    const auto half = static_cast<long>(std::lround(static_cast<double>(base_half) * scale));
    return static_cast<std::uint32_t>(std::clamp<long>(half, 1, static_cast<long>(std::max(1u, base_half))));
}

// Dynamic resolution for the Android renderer.
//
// Menus, pause screens and movies always render at the full raster: only
// gameplay (the race scene) is allowed to drop resolution. In a race the GPU
// time is averaged over a window and the raster moves one half-pixel step at
// a time, so a surface reallocation (and its guest-memory round trip) happens
// at most once per window instead of every frame.
class DynamicResolution {
public:
    static constexpr int kWindowFrames = 30;
    static constexpr int kUpCooldownWindows = 3;

    // Returns the raster_half to use for the next frame.
    // frame_ms is the wall time since the previous present (negative when
    // unknown). GPU timestamps alone overstate the load on some drivers, so a
    // window only steps down when its frames are also arriving late.
    [[nodiscard]] std::uint32_t update(std::uint32_t base_half, std::uint32_t current_half, bool gameplay,
                                       double gpu_ms, const ScaleSettings &settings, int thermal_status,
                                       double frame_ms = -1.0) {
        const float ceiling = thermal_scale_ceiling(settings.max_scale, thermal_status);
        // Dynamic scaling never goes below native 1x (raster_half 2) when the
        // selected output is above it: sub-native rasters look far worse than
        // the PSP image. At 1x output the configured floor still applies.
        const std::uint32_t bottom =
            std::max(raster_half_for_scale(base_half, std::min(settings.min_scale, ceiling)),
                     std::min(base_half, 2u));
        const std::uint32_t top =
            std::max(bottom, raster_half_for_scale(base_half, std::max(settings.min_scale, ceiling)));
        if (settings.mode == ScaleMode::Off) {
            reset();
            return base_half;
        }
        if (settings.mode == ScaleMode::Fixed) {
            reset();
            return raster_half_for_scale(base_half, std::clamp(settings.fixed_scale,
                                                                std::min(settings.min_scale, ceiling), ceiling));
        }
        if (!gameplay) {
            reset();
            return base_half;
        }
        if (gpu_ms >= 0.0) {
            sum_ms_ += gpu_ms;
            ++frames_;
            if (frame_ms >= 0.0) {
                ++timed_;
                if (frame_ms > frame_budget_ms(settings.target_fps) * 1.10)
                    ++late_;
            }
        }
        if (frames_ < kWindowFrames)
            return std::clamp(current_half, bottom, top);
        const double average = sum_ms_ / frames_;
        // Without frame times every window counts as late (GPU time alone).
        const bool late = timed_ == 0 || late_ * 5 >= timed_;
        sum_ms_ = 0.0;
        frames_ = 0;
        timed_ = late_ = 0;
        if (cooldown_ > 0)
            --cooldown_;
        const double budget = frame_budget_ms(settings.target_fps);
        std::uint32_t next = std::clamp(current_half, bottom, top);
        if (average > budget * 0.90 && late) {
            if (next > bottom)
                --next;
            cooldown_ = kUpCooldownWindows;
        } else if (average < budget * 0.65 && next < top && cooldown_ == 0) {
            ++next;
        }
        return next;
    }
    void reset() noexcept {
        sum_ms_ = 0.0;
        frames_ = 0;
        timed_ = late_ = 0;
        cooldown_ = 0;
    }

private:
    double sum_ms_{};
    int frames_{};
    int timed_{}, late_{};  // frames with a wall time, and of those, late ones
    int cooldown_{};
};

// SGSR 1 is the spatial single-pass upscaler. It runs only when a scale mode
// is rendering below the swapchain. Off leaves the image unsharpened.
[[nodiscard]] inline Upscaler select_upscaler(const ScaleSettings &settings) {
    if (settings.mode == ScaleMode::Off)
        return Upscaler::None;
    return Upscaler::Sgsr1Spatial;
}

[[nodiscard]] inline std::string_view upscaler_name(Upscaler upscaler) {
    return upscaler == Upscaler::Sgsr1Spatial ? "sgsr1-spatial-single-pass" : "none";
}

// World image, then SGSR 1, then the HUD. HUD and text stay at output resolution.
enum class CompositeStage { World, Sgsr1Upscale, Hud };

[[nodiscard]] inline bool hud_composited_after_upscale() { return true; }

// Windows post effects default off (NativeConfig::post). Android uses the same
// default. This is the comparison the host test calls.
[[nodiscard]] inline bool effects_default_off_on_windows_and_android(bool windows_post_default) {
    constexpr bool android_post_default = false;
    return !windows_post_default && !android_post_default;
}

enum class DriverRequest { System, Imported };

struct DriverResolution {
    DriverRequest active{DriverRequest::System};
    bool show_fallback_message{};
    std::string_view message{};
};

[[nodiscard]] inline DriverRequest default_driver_request() { return DriverRequest::System; }

// A failed library load or a failed VkDevice creation selects System and a
// user-visible message. A successful load stays on the imported driver.
[[nodiscard]] inline DriverResolution resolve_driver(DriverRequest requested, bool library_loaded, bool device_created) {
    if (requested == DriverRequest::System || (library_loaded && device_created))
        return DriverResolution{requested == DriverRequest::System ? DriverRequest::System : DriverRequest::Imported,
                                false, {}};
    if (!library_loaded)
        return DriverResolution{DriverRequest::System, true, "Imported driver failed to load; using System"};
    return DriverResolution{DriverRequest::System, true,
                            "Imported driver failed to create a Vulkan device; using System"};
}

struct TouchSample {
    std::uint32_t buttons{};
    int axis_x{-1};
    int axis_y{-1};
};

// Normalized finger position. The left nub is analog steering. Pedals and face
// buttons are separate regions so two fingers steer and accelerate together.
[[nodiscard]] inline TouchSample touch_sample(float x, float y) {
    TouchSample sample;
    const float dx = x - 0.16f;
    const float dy = y - 0.74f;
    if (dx * dx + dy * dy <= 0.13f * 0.13f) {
        sample.axis_x = static_cast<int>(std::clamp(128.0f + dx / 0.13f * 127.0f, 0.0f, 255.0f));
        sample.axis_y = static_cast<int>(std::clamp(128.0f + dy / 0.13f * 127.0f, 0.0f, 255.0f));
        return sample;
    }
    // D-pad sits above the nub so the two sprites do not overlap.
    if (x >= 0.02f && x <= 0.14f && y >= 0.36f && y <= 0.60f) {
        const float cx = 0.08f, cy = 0.48f;
        if (std::fabs(y - cy) > std::fabs(x - cx))
            sample.buttons |= y < cy ? 0x0010u : 0x0040u; // up / down
        else
            sample.buttons |= x < cx ? 0x0080u : 0x0020u; // left / right
        return sample;
    }
    if (x >= 0.08f && x <= 0.22f && y < 0.20f)
        sample.buttons |= 0x0100u; // L, brake
    else if (x >= 0.78f && x <= 0.94f && y < 0.20f)
        sample.buttons |= 0x0200u; // R, accelerate
    else if (x >= 0.40f && x <= 0.48f && y < 0.18f)
        sample.buttons |= 0x0001u; // Select
    else if (x >= 0.52f && x <= 0.60f && y < 0.18f)
        sample.buttons |= 0x0008u; // Start
    else if (x >= 0.78f && x <= 0.90f && y >= 0.48f && y <= 0.60f)
        sample.buttons |= 0x1000u; // Triangle
    else if (x >= 0.90f && y >= 0.60f && y <= 0.74f)
        sample.buttons |= 0x2000u; // Circle
    else if (x >= 0.78f && x <= 0.90f && y >= 0.74f && y <= 0.88f)
        sample.buttons |= 0x4000u; // Cross, boost
    else if (x >= 0.66f && x <= 0.78f && y >= 0.60f && y <= 0.74f)
        sample.buttons |= 0x8000u; // Square
    return sample;
}

[[nodiscard]] inline const char *executable_reject_text(ExecutableReject reject) {
    switch (reject) {
    case ExecutableReject::Ok:
        return "";
    case ExecutableReject::Encrypted:
        return "The EBOOT is encrypted. Choose the decrypted executable. This build does not decrypt.";
    case ExecutableReject::WrongHash:
        return "The decrypted EBOOT does not match this MotorStorm build";
    }
    return "The decrypted EBOOT does not match this MotorStorm build";
}

} // namespace motorstorm
