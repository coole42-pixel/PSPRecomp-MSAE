#include "psprecomp/allegrex_context.hpp"

// Out-of-line VFPU/FPU helpers. Generated AOT units are compiled at /Ob0,
// so helpers defined in the class body were emitted there without any
// inlining (every std::array subscript became a call) and the linker could
// keep those copies. Defining them here gives one /Ob3-optimized body.

namespace psprecomp {

void AllegrexContext::read_vfpu_vector(float *destination, std::uint32_t vector_register, std::uint32_t length) const noexcept {
    if (length == 1u) {
        destination[0] = vfpu[vfpu_scalar_index(vector_register & 0x7Fu)];
        return;
    }
    const std::uint32_t row = length == 3u ? ((vector_register >> 6u) & 1u)
                                           : ((vector_register >> 5u) & 2u);
    const bool transpose = ((vector_register >> 5u) & 1u) != 0u;
    const std::uint32_t matrix_base = ((vector_register << 2u) & 0x70u);
    const std::uint32_t column = vector_register & 3u;
    if (transpose) {
        const std::uint32_t base = matrix_base + column;
        for (std::uint32_t i = 0; i < length; ++i) {
            destination[i] = vfpu[base + ((row + i) & 3u) * 4u];
        }
    } else {
        const std::uint32_t base = matrix_base + column * 4u;
        for (std::uint32_t i = 0; i < length; ++i) {
            destination[i] = vfpu[base + ((row + i) & 3u)];
        }
    }
}

void AllegrexContext::apply_vfpu_source_prefix(float *value, std::uint32_t length, std::uint32_t control_index) const noexcept {
    if (control_index >= 2u || length == 0u) return;
    const std::uint32_t prefix = vfpu_ctrl[control_index];
    if (prefix == 0xE4u) return;

    float original[4]{};
    for (std::uint32_t i = 0; i < length && i < 4u; ++i) original[i] = value[i];
    static constexpr float constants[8] = {
        0.0f, 1.0f, 2.0f, 0.5f, 3.0f, 1.0f / 3.0f, 0.25f, 1.0f / 6.0f,
    };
    for (std::uint32_t i = 0; i < length && i < 4u; ++i) {
        const std::uint32_t lane = (prefix >> (i * 2u)) & 3u;
        const bool absolute = ((prefix >> (8u + i)) & 1u) != 0u;
        const bool use_constant = ((prefix >> (12u + i)) & 1u) != 0u;
        const bool negate = ((prefix >> (16u + i)) & 1u) != 0u;
        if (use_constant) {
            value[i] = constants[lane + (absolute ? 4u : 0u)];
        } else {
            value[i] = lane < length ? original[lane] : 0.0f;
            if (absolute) value[i] = std::fabs(value[i]);
        }
        if (negate) {
            value[i] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(value[i]) ^ 0x80000000u);
        }
    }
}

void AllegrexContext::write_vfpu_vector(const float *source, std::uint32_t vector_register, std::uint32_t length) noexcept {
    if (length == 1u) {
        vfpu[vfpu_scalar_index(vector_register & 0x7Fu)] = source[0];
        return;
    }
    const std::uint32_t row = length == 3u ? ((vector_register >> 6u) & 1u)
                                           : ((vector_register >> 5u) & 2u);
    const bool transpose = ((vector_register >> 5u) & 1u) != 0u;
    const std::uint32_t matrix_base = ((vector_register << 2u) & 0x70u);
    const std::uint32_t column = vector_register & 3u;
    if (transpose) {
        const std::uint32_t base = matrix_base + column;
        for (std::uint32_t i = 0; i < length; ++i) {
            vfpu[base + ((row + i) & 3u) * 4u] = source[i];
        }
    } else {
        const std::uint32_t base = matrix_base + column * 4u;
        for (std::uint32_t i = 0; i < length; ++i) {
            vfpu[base + ((row + i) & 3u)] = source[i];
        }
    }
}

void AllegrexContext::write_vfpu_vector_with_destination_prefix(const float *source, std::uint32_t vector_register,
                                               std::uint32_t length) noexcept {
    float value[4]{};
    const std::uint32_t destination_prefix = vfpu_ctrl[2];
    for (std::uint32_t i = 0; i < length && i < 4u; ++i) {
        value[i] = source[i];
        const std::uint32_t saturation = (destination_prefix >> (i * 2u)) & 3u;
        if (saturation == 1u) {
            value[i] = std::fmin(1.0f, std::fmax(0.0f, value[i]));
        } else if (saturation == 3u) {
            value[i] = std::fmin(1.0f, std::fmax(-1.0f, value[i]));
        }
    }

    const std::uint32_t row = length == 3u ? ((vector_register >> 6u) & 1u)
                                           : ((vector_register >> 5u) & 2u);
    const bool transpose = ((vector_register >> 5u) & 1u) != 0u;
    const std::uint32_t matrix_base = ((vector_register << 2u) & 0x70u);
    const std::uint32_t column = vector_register & 3u;
    for (std::uint32_t i = 0; i < length && i < 4u; ++i) {
        // Destination-prefix mask bit 1 preserves the old lane.
        if (((destination_prefix >> (8u + i)) & 1u) != 0u) {
            continue;
        }
        const std::size_t index = length == 1u
            ? vfpu_scalar_index(vector_register & 0x7Fu)
            : (transpose
                ? static_cast<std::size_t>(matrix_base + column + ((row + i) & 3u) * 4u)
                : static_cast<std::size_t>(matrix_base + column * 4u + ((row + i) & 3u)));
        vfpu[index] = value[i];
    }
    eat_vfpu_prefixes();
}

void AllegrexContext::execute_vfpu_vf2h(std::uint32_t destination_register,
                        std::uint32_t source_register,
                        std::uint32_t source_length) noexcept {
    if (source_length == 0u || source_length > 4u) return;

    // VF2H applies S through a four-lane view, allowing prefix constants
    // to supply lanes that are not present in a short encoded vector.
    float source[4]{};
    read_vfpu_vector(source, source_register, source_length);
    apply_vfpu_source_prefix(source, 4u, 0u);

    std::uint32_t packed[2]{};
    packed[0] = static_cast<std::uint32_t>(vfpu_shrink_to_half_bits(source[0])) |
                (static_cast<std::uint32_t>(vfpu_shrink_to_half_bits(source[1])) << 16u);
    const std::uint32_t destination_length = source_length <= 2u ? 1u : 2u;
    if (destination_length == 2u) {
        packed[1] = static_cast<std::uint32_t>(vfpu_shrink_to_half_bits(source[2])) |
                    (static_cast<std::uint32_t>(vfpu_shrink_to_half_bits(source[3])) << 16u);
    }

    float result[2]{
        std::bit_cast<float>(packed[0]),
        std::bit_cast<float>(packed[1]),
    };
    write_vfpu_vector_with_destination_prefix(result, destination_register, destination_length);
}

void AllegrexContext::execute_vfpu_vh2f(std::uint32_t destination_register,
                        std::uint32_t source_register,
                        std::uint32_t source_length) noexcept {
    if (source_length == 0u || source_length > 4u) return;

    float source[4]{};
    read_vfpu_vector(source, source_register, source_length);
    apply_vfpu_source_prefix(source, source_length, 0u);

    const std::uint32_t first_word = std::bit_cast<std::uint32_t>(source[0]);
    float result[4]{
        std::bit_cast<float>(vfpu_expand_half_bits(static_cast<std::uint16_t>(first_word))),
        std::bit_cast<float>(vfpu_expand_half_bits(static_cast<std::uint16_t>(first_word >> 16u))),
        0.0f,
        0.0f,
    };

    const std::uint32_t destination_length = source_length == 1u ? 2u : 4u;
    if (destination_length == 4u) {
        const std::uint32_t second_word = std::bit_cast<std::uint32_t>(source[1]);
        result[2] = std::bit_cast<float>(
            vfpu_expand_half_bits(static_cast<std::uint16_t>(second_word)));
        result[3] = std::bit_cast<float>(
            vfpu_expand_half_bits(static_cast<std::uint16_t>(second_word >> 16u)));
    }

    write_vfpu_vector_with_destination_prefix(result, destination_register, destination_length);
}

void AllegrexContext::execute_vfpu_vx2i(std::uint32_t destination_register,
                        std::uint32_t source_register,
                        std::uint32_t source_length,
                        std::uint32_t operation) noexcept {
    if (source_length == 0u || source_length > 4u || operation > 3u) return;

    float source[4]{};
    read_vfpu_vector(source, source_register, source_length);
    apply_vfpu_source_prefix(source, source_length, 0u);

    std::uint32_t result_bits[4]{};
    std::uint32_t destination_length = 4u;
    if (operation == 0u) { // VUC2I
        std::uint32_t value = std::bit_cast<std::uint32_t>(source[0]);
        for (std::uint32_t lane = 0u; lane < 4u; ++lane) {
            result_bits[lane] = ((value & 0xFFu) * 0x01010101u) >> 1u;
            value >>= 8u;
        }
    } else if (operation == 1u) { // VC2I
        const std::uint32_t value = std::bit_cast<std::uint32_t>(source[0]);
        result_bits[0] = (value & 0x000000FFu) << 24u;
        result_bits[1] = (value & 0x0000FF00u) << 16u;
        result_bits[2] = (value & 0x00FF0000u) << 8u;
        result_bits[3] = value & 0xFF000000u;
    } else { // VUS2I / VS2I
        const std::uint32_t input_count = std::min(source_length, 2u);
        destination_length = source_length == 1u ? 2u : 4u;
        for (std::uint32_t lane = 0u; lane < input_count; ++lane) {
            const std::uint32_t value = std::bit_cast<std::uint32_t>(source[lane]);
            if (operation == 2u) {
                result_bits[lane * 2u] = (value & 0x0000FFFFu) << 15u;
                result_bits[lane * 2u + 1u] = (value & 0xFFFF0000u) >> 1u;
            } else {
                result_bits[lane * 2u] = (value & 0x0000FFFFu) << 16u;
                result_bits[lane * 2u + 1u] = value & 0xFFFF0000u;
            }
        }
    }

    float result[4]{};
    for (std::uint32_t lane = 0u; lane < destination_length; ++lane)
        result[lane] = std::bit_cast<float>(result_bits[lane]);
    write_vfpu_vector_with_destination_prefix(result, destination_register, destination_length);
}

void AllegrexContext::execute_vfpu_vdot(std::uint32_t destination_scalar_register,
                        std::uint32_t source_register, std::uint32_t target_register,
                        std::uint32_t length) noexcept {
    if (length == 0u || length > 4u) return;

    // VDOT initializes the lanes beyond the encoded vector size to zero,
    // then applies both source prefixes through a four-lane view.  This is
    // important because prefix constants may legally introduce values in
    // those otherwise-unused lanes.
    float source[4]{};
    float target[4]{};
    read_vfpu_vector(source, source_register, length);
    read_vfpu_vector(target, target_register, length);
    apply_vfpu_source_prefix(source, 4u, 0u);
    apply_vfpu_source_prefix(target, 4u, 1u);

    float result[1]{0.0f};
    for (std::uint32_t lane = 0u; lane < 4u; ++lane) {
        result[0] += source[lane] * target[lane];
    }
    write_vfpu_vector_with_destination_prefix(result, destination_scalar_register, 1u);
}

void AllegrexContext::execute_vfpu_vhdp(std::uint32_t destination_scalar_register,
                       std::uint32_t source_register, std::uint32_t target_register,
                       std::uint32_t length) noexcept {
    if (length == 0u || length > 4u) return;

    // VHDP is a four-lane dot product in which the final encoded source
    // lane is forced to constant ONE.  The VFPU rewrites only that lane's
    // swizzle/constant controls: its original absolute and negate bits are
    // deliberately retained.  Short vectors still use a four-lane prefix
    // view, so constants may populate lanes outside the nominal length.
    float source[4]{};
    float target[4]{};
    read_vfpu_vector(source, source_register, length);
    read_vfpu_vector(target, target_register, length);

    const std::uint32_t forced_lane = length - 1u;
    const std::uint32_t swizzle_shift = forced_lane * 2u;
    const std::uint32_t rewritten_source_prefix =
        (vfpu_ctrl[0] & ~(3u << swizzle_shift)) |
        (1u << swizzle_shift) |
        (1u << (12u + forced_lane));

    const std::uint32_t original_source_prefix = vfpu_ctrl[0];
    vfpu_ctrl[0] = rewritten_source_prefix;
    apply_vfpu_source_prefix(source, 4u, 0u);
    vfpu_ctrl[0] = original_source_prefix;
    apply_vfpu_source_prefix(target, 4u, 1u);

    float sum = 0.0f;
    for (std::uint32_t lane = 0u; lane < 4u; ++lane) {
        sum += source[lane] * target[lane];
    }
    if (std::isnan(sum)) sum = std::fabs(sum);

    const float result[1]{sum};
    write_vfpu_vector_with_destination_prefix(result, destination_scalar_register, 1u);
}

void AllegrexContext::execute_vfpu_horizontal(std::uint32_t destination_scalar_register,
                             std::uint32_t source_register,
                             std::uint32_t source_length,
                             bool average) noexcept {
    if (source_length == 0u || source_length > 4u) return;

    // The horizontal instructions use a four-lane view even for shorter
    // encoded vectors.  Prefix constants can therefore populate lanes
    // beyond the nominal source size.
    float source[4]{};
    read_vfpu_vector(source, source_register, source_length);
    apply_vfpu_source_prefix(source, 4u, 0u);

    const std::uint32_t original_target_prefix = vfpu_ctrl[1];
    float weights[4]{};
    if (!average) {
        // VFAD forces every T lane to constant ONE, but deliberately
        // retains the original T absolute and negate controls.  On the
        // VFPU, an absolute bit changes forced ONE into constant 1/3.
        vfpu_ctrl[1] = (original_target_prefix & ~0x000000FFu) | 0x0000F055u;
    } else {
        // VAVG forces 0, 1/2, 1/3, or 1/4 according to the encoded vector
        // size.  It discards T swizzle/absolute controls but retains T
        // negate flags, matching the hardware prefix rewrite.
        static constexpr std::uint32_t average_prefix[4]{
            0x0000F000u, // scalar: 0
            0x0000F0FFu, // pair:   1/2
            0x0000FF55u, // triple: 1/3
            0x0000FFAAu, // quad:   1/4
        };
        vfpu_ctrl[1] = (original_target_prefix & ~0x00000FFFu) |
                       average_prefix[source_length - 1u];
    }
    apply_vfpu_source_prefix(weights, 4u, 1u);
    vfpu_ctrl[1] = original_target_prefix;

    float result[1]{0.0f};
    for (std::uint32_t lane = 0u; lane < 4u; ++lane) {
        result[0] += source[lane] * weights[lane];
    }
    write_vfpu_vector_with_destination_prefix(result, destination_scalar_register, 1u);
}

void AllegrexContext::execute_vfpu_cross_quat(std::uint32_t destination_register,
                             std::uint32_t source_register, std::uint32_t target_register,
                             std::uint32_t length) noexcept {
    if (length == 0u || length > 4u) return;

    float source[4]{};
    float target[4]{};
    float result[4]{};
    read_vfpu_vector(source, source_register, length);
    read_vfpu_vector(target, target_register, length);

    constexpr std::uint32_t kSwizzleAndNegateMask = 0x000F00FFu;
    if (length == 3u) { // VCRSP.T
        // X/Y are produced directly from the unprefixed inputs.  The PSP
        // applies rewritten S/T prefixes only to the final dot-product lane.
        result[0] = source[1] * target[2] - source[2] * target[1];
        result[1] = source[2] * target[0] - source[0] * target[2];

        // Forced T view: [T.y, -T.x, T.w, T.z], while retaining the
        // original constant/absolute controls.
        vfpu_ctrl[1] = (vfpu_ctrl[1] & ~kSwizzleAndNegateMask) | 0x000200B1u;
        apply_vfpu_source_prefix(target, 4u, 1u);
        apply_vfpu_source_prefix(source, 4u, 0u);
        result[2] = source[0] * target[0] + source[1] * target[1] +
                    source[2] * target[2] + source[3] * target[3];
    } else if (length == 4u) { // VQMUL.Q
        result[0] = source[0] * target[3] + source[1] * target[2] -
                    source[2] * target[1] + source[3] * target[0];
        result[1] = -source[0] * target[2] + source[1] * target[3] +
                     source[2] * target[0] + source[3] * target[1];
        result[2] = source[0] * target[1] - source[1] * target[0] +
                    source[2] * target[3] + source[3] * target[2];

        // Forced T view: [-T.x, -T.y, -T.z, T.w], retaining constants/abs.
        vfpu_ctrl[1] = (vfpu_ctrl[1] & ~kSwizzleAndNegateMask) | 0x000700E4u;
        apply_vfpu_source_prefix(target, 4u, 1u);
        apply_vfpu_source_prefix(source, 4u, 0u);
        result[3] = source[0] * target[0] + source[1] * target[1] +
                    source[2] * target[2] + source[3] * target[3];
    } else if (length == 2u) {
        result[0] = 0.0f;
        // Pair form can source lane 2 through S-prefix swizzling.
        vfpu_ctrl[1] = (vfpu_ctrl[1] & ~kSwizzleAndNegateMask);
        apply_vfpu_source_prefix(target, 4u, 1u);
        apply_vfpu_source_prefix(source, 4u, 0u);
        result[1] = source[2] * target[2];
    } else {
        result[0] = 0.0f;
    }

    // Hardware applies the original D-prefix lane-0 controls to the last
    // result lane only.  All earlier lanes are written unmasked/unsaturated.
    if (length == 1u) {
        vfpu_ctrl[2] = 0u;
    } else {
        const std::uint32_t destination_prefix = vfpu_ctrl[2];
        const std::uint32_t last_lane = length - 1u;
        const std::uint32_t last_mask = ((destination_prefix >> 8u) & 1u) << (8u + last_lane);
        const std::uint32_t last_saturation = (destination_prefix & 3u) << (last_lane * 2u);
        vfpu_ctrl[2] = last_mask | last_saturation;
    }
    write_vfpu_vector_with_destination_prefix(result, destination_register, length);
}

void AllegrexContext::execute_vfpu_vminmax(std::uint32_t destination_register,
                          std::uint32_t source_register, std::uint32_t target_register,
                          std::uint32_t length, bool maximum) noexcept {
    if (length == 0u || length > 4u) return;

    float source[4]{};
    float target[4]{};
    float result[4]{};
    read_vfpu_vector(source, source_register, length);
    read_vfpu_vector(target, target_register, length);
    apply_vfpu_source_prefix(source, length, 0u);
    apply_vfpu_source_prefix(target, length, 1u);

    const std::uint32_t source_prefix = vfpu_ctrl[0];
    const std::uint32_t target_prefix = vfpu_ctrl[1];
    for (std::uint32_t lane = 0u; lane < length; ++lane) {
        const std::uint32_t source_swizzle = (source_prefix >> (lane * 2u)) & 3u;
        const std::uint32_t target_swizzle = (target_prefix >> (lane * 2u)) & 3u;
        const bool source_constant = ((source_prefix >> (12u + lane)) & 1u) != 0u;
        const bool target_constant = ((target_prefix >> (12u + lane)) & 1u) != 0u;
        if ((!source_constant && source_swizzle >= length) ||
            (!target_constant && target_swizzle >= length)) {
            // VFPU min/max wires an invalid swizzle to an exact +0 result.
            result[lane] = 0.0f;
            continue;
        }
        const std::uint32_t selected = vfpu_minmax_bits(
            std::bit_cast<std::uint32_t>(source[lane]),
            std::bit_cast<std::uint32_t>(target[lane]), maximum);
        result[lane] = std::bit_cast<float>(selected);
    }
    write_vfpu_vector_with_destination_prefix(result, destination_register, length);
}

void AllegrexContext::execute_vfpu_compare3(std::uint32_t destination_register,
                           std::uint32_t source_register, std::uint32_t target_register,
                           std::uint32_t length, std::uint32_t operation) noexcept {
    if (length == 0u || length > 4u || operation < 5u || operation > 7u) return;

    float source[4]{};
    float target[4]{};
    float result[4]{};
    read_vfpu_vector(source, source_register, length);
    read_vfpu_vector(target, target_register, length);
    apply_vfpu_source_prefix(source, length, 0u);
    apply_vfpu_source_prefix(target, length, 1u);

    const std::uint32_t source_prefix = vfpu_ctrl[0];
    const std::uint32_t target_prefix = vfpu_ctrl[1];
    for (std::uint32_t lane = 0u; lane < length; ++lane) {
        const std::uint32_t source_swizzle = (source_prefix >> (lane * 2u)) & 3u;
        const std::uint32_t target_swizzle = (target_prefix >> (lane * 2u)) & 3u;
        const bool source_constant = ((source_prefix >> (12u + lane)) & 1u) != 0u;
        const bool target_constant = ((target_prefix >> (12u + lane)) & 1u) != 0u;
        if ((!source_constant && source_swizzle >= length) ||
            (!target_constant && target_swizzle >= length)) {
            result[lane] = 0.0f;
            continue;
        }

        if (operation == 5u) { // VSCMP
            const float difference = source[lane] - target[lane];
            if (std::isnan(difference)) {
                const std::uint32_t source_bits = std::bit_cast<std::uint32_t>(source[lane]);
                const std::uint32_t target_bits = std::bit_cast<std::uint32_t>(target[lane]);
                const std::int64_t source_magnitude = static_cast<std::int64_t>(source_bits & 0x7FFFFFFFu);
                const std::int64_t target_magnitude = static_cast<std::int64_t>(target_bits & 0x7FFFFFFFu);
                const std::int64_t ordered_source = (source_bits & 0x80000000u) != 0u
                    ? -source_magnitude : source_magnitude;
                const std::int64_t ordered_target = (target_bits & 0x80000000u) != 0u
                    ? -target_magnitude : target_magnitude;
                result[lane] = ordered_source > ordered_target ? 1.0f
                             : ordered_source < ordered_target ? -1.0f : 0.0f;
            } else {
                result[lane] = difference > 0.0f ? 1.0f
                             : difference < 0.0f ? -1.0f : 0.0f;
            }
        } else if (operation == 6u) { // VSGE
            result[lane] = (!std::isnan(source[lane]) && !std::isnan(target[lane]) &&
                            source[lane] >= target[lane]) ? 1.0f : 0.0f;
        } else { // VSLT
            result[lane] = (!std::isnan(source[lane]) && !std::isnan(target[lane]) &&
                            source[lane] < target[lane]) ? 1.0f : 0.0f;
        }
    }
    write_vfpu_vector_with_destination_prefix(result, destination_register, length);
}

void AllegrexContext::execute_vfpu_vcmp(std::uint32_t source_register, std::uint32_t target_register,
                        std::uint32_t length, std::uint32_t condition) noexcept {
    if (length == 0u || length > 4u) return;

    float source[4]{};
    float target[4]{};
    read_vfpu_vector_with_source_prefix(source, source_register, length, 0u);
    read_vfpu_vector_with_source_prefix(target, target_register, length, 1u);

    std::uint32_t lane_bits = 0u;
    bool any = false;
    bool all = true;
    for (std::uint32_t lane = 0u; lane < length; ++lane) {
        const float s = source[lane];
        const float t = target[lane];
        bool result = false;
        switch (condition & 15u) {
        case 0u: result = false; break;                         // FL
        case 1u: result = s == t; break;                        // EQ
        case 2u: result = s < t; break;                         // LT
        case 3u: result = s <= t; break;                        // LE
        case 4u: result = true; break;                          // TR
        case 5u: result = s != t; break;                        // NE
        case 6u: result = s >= t; break;                        // GE
        case 7u: result = s > t; break;                         // GT
        case 8u: result = s == 0.0f; break;                     // EZ
        case 9u: result = std::isnan(s); break;                 // EN
        case 10u: result = std::isinf(s); break;                // EI
        case 11u: result = std::isnan(s) || std::isinf(s); break; // ES
        case 12u: result = s != 0.0f; break;                    // NZ
        case 13u: result = !std::isnan(s); break;               // NN
        case 14u: result = !std::isinf(s); break;               // NI
        default: result = !(std::isnan(s) || std::isinf(s)); break; // NS
        }
        if (result) lane_bits |= 1u << lane;
        any = any || result;
        all = all && result;
    }

    // CC lanes x/y/z/w occupy bits 0..3; bit 4 is ANY and bit 5
    // is ALL.  A narrower comparison preserves untouched lane bits.
    const std::uint32_t affected = ((1u << length) - 1u) | (1u << 4u) | (1u << 5u);
    const std::uint32_t update = lane_bits | (static_cast<std::uint32_t>(any) << 4u) |
        (static_cast<std::uint32_t>(all) << 5u);
    vfpu_ctrl[3] = (vfpu_ctrl[3] & ~affected) | (update & affected);
    eat_vfpu_prefixes();
}

void AllegrexContext::execute_vfpu_vcmov(std::uint32_t destination_register, std::uint32_t source_register,
                         std::uint32_t length, std::uint32_t condition_index,
                         bool move_if_false) noexcept {
    if (length == 0u || length > 4u) return;

    float source[4]{};
    float destination[4]{};
    read_vfpu_vector_with_source_prefix(source, source_register, length, 0u);

    // VCMOV unusually treats the old destination as its T input, so the
    // guest T prefix is applied even when no source lane is selected.
    read_vfpu_vector(destination, destination_register, length);
    apply_vfpu_source_prefix(destination, length, 1u);

    const std::uint32_t condition_code = vfpu_ctrl[3];
    if (condition_index < 6u) {
        const bool cc = ((condition_code >> condition_index) & 1u) != 0u;
        if (cc == !move_if_false) {
            for (std::uint32_t lane = 0u; lane < length; ++lane) destination[lane] = source[lane];
        }
    } else if (condition_index == 6u) {
        for (std::uint32_t lane = 0u; lane < length; ++lane) {
            const bool cc = ((condition_code >> lane) & 1u) != 0u;
            if (cc == !move_if_false) destination[lane] = source[lane];
        }
    }
    // condition_index 7 is invalid on hardware; preserving the T-prefixed
    // destination is deterministic and leaves error reporting to callers.

    write_vfpu_vector_with_destination_prefix(destination, destination_register, length);
}

void AllegrexContext::execute_vfpu_vscl(std::uint32_t destination_register, std::uint32_t source_register,
                        std::uint32_t target_scalar_register, std::uint32_t length) noexcept {
    if (length == 0u || length > 4u) return;

    float source[4]{};
    read_vfpu_vector_with_source_prefix(source, source_register, length, 0u);

    // VSCL reads VT as a scalar, but the T prefix still operates on a
    // vector view.  Materialize the scalar in lane 0 and broadcast from
    // there, while preserving the guest prefix's abs, constant and negate
    // flags (those flags are indexed by output lane).
    //
    // Do not place the scalar in its encoded physical lane.  The source
    // prefix helper only populates `length` lanes; for VSCL.T a scalar in
    // physical lane w would therefore be outside the populated 3-lane
    // range and the broadcast would become exactly zero.  That produced
    // null normalized vectors, breaking both collision normals and world
    // vertex/lighting transforms.
    float target[4]{};
    target[0] = std::bit_cast<float>(vfpu_scalar_bits(target_scalar_register & 0x7Fu));
    const std::uint32_t original_target_prefix = vfpu_ctrl[1];
    vfpu_ctrl[1] = original_target_prefix & ~0xFFu;  // every output lane selects lane 0
    apply_vfpu_source_prefix(target, length, 1u);
    vfpu_ctrl[1] = original_target_prefix;

    float result[4]{};
    for (std::uint32_t lane = 0u; lane < length; ++lane) {
        result[lane] = source[lane] * target[lane];
    }
    write_vfpu_vector_with_destination_prefix(result, destination_register, length);
}

void AllegrexContext::execute_vfpu_vrot(std::uint32_t destination_register, std::uint32_t source_register,
                       std::uint32_t length, std::uint32_t immediate) noexcept {
    float source[4]{};
    read_vfpu_vector_with_source_prefix(source, source_register, 1u, 0u);
    const float original_source =
        std::bit_cast<float>(vfpu_scalar_bits(source_register & 0x7Fu));
    constexpr float half_pi = 1.57079632679489661923f;
    float sine = std::sin(source[0] * half_pi);
    const float original_cosine = std::cos(original_source * half_pi);
    if ((immediate & 0x10u) != 0u)
        sine = std::bit_cast<float>(std::bit_cast<std::uint32_t>(sine) ^ 0x80000000u);

    const std::uint32_t sine_lane = (immediate >> 2u) & 3u;
    const std::uint32_t cosine_lane = immediate & 3u;
    float value[4]{};
    if (sine_lane == cosine_lane) {
        for (std::uint32_t lane = 0u; lane < length && lane < 4u; ++lane) value[lane] = sine;
    } else if (sine_lane < length) {
        value[sine_lane] = sine;
    }

    float cosine = original_cosine;
    if (((destination_register >> 2u) & 7u) == ((source_register >> 2u) & 7u)) {
        const std::size_t source_index = vfpu_scalar_index(source_register & 0x7Fu);
        for (std::uint32_t lane = 0u; lane < length && lane < 4u; ++lane) {
            if (vfpu_vector_lane_index(destination_register, length, lane) == source_index) {
                cosine = std::cos(value[lane] * half_pi);
                break;
            }
        }
    }
    if (cosine_lane < length) value[cosine_lane] = cosine;

    // VROT consumes all prefixes, but the cosine lane ignores destination
    // saturation and write masking on the hardware.
    if (cosine_lane < 4u) {
        vfpu_ctrl[2] &= ~((3u << (cosine_lane * 2u)) | (1u << (8u + cosine_lane)));
    }
    write_vfpu_vector_with_destination_prefix(value, destination_register, length);
}

void AllegrexContext::execute_vfpu_vocp(std::uint32_t destination_register, std::uint32_t source_register,
                       std::uint32_t length) noexcept {
    if (length == 0u || length > 4u) return;

    const std::uint32_t source_prefix = vfpu_ctrl[0];
    const std::uint32_t target_prefix = vfpu_ctrl[1];

    // VOCP forces the S-prefix negate flags on, preserving its swizzle,
    // abs, and constant controls.  Therefore the common no-prefix case
    // reads the source as -S.
    float source[4]{};
    read_vfpu_vector(source, source_register, length);
    vfpu_ctrl[0] = source_prefix | 0x000F0000u;
    apply_vfpu_source_prefix(source, length, 0u);
    vfpu_ctrl[0] = source_prefix;

    // VOCP forces every T lane to constant ONE while preserving the
    // original abs and negate flags.  In VFPU prefix encoding, ONE in all
    // four lanes is swizzle 1 plus all constant bits: 0x0000F055.
    float target[4]{};
    vfpu_ctrl[1] = (target_prefix & ~0x000000FFu) | 0x0000F055u;
    apply_vfpu_source_prefix(target, length, 1u);
    vfpu_ctrl[1] = target_prefix;

    float result[4]{};
    for (std::uint32_t lane = 0u; lane < length; ++lane) {
        // Hardware produces a positive NaN for a NaN source instead of
        // adding the forced T constant.
        result[lane] = std::isnan(source[lane]) ? std::fabs(source[lane])
                                                 : target[lane] + source[lane];

        // Invalid swizzles are retained as zero based on the original
        // prefixes, even though VOCP rewrites T to constants internally.
        const std::uint32_t source_swizzle = (source_prefix >> (lane * 2u)) & 3u;
        const std::uint32_t target_swizzle = (target_prefix >> (lane * 2u)) & 3u;
        const bool source_constant = ((source_prefix >> (12u + lane)) & 1u) != 0u;
        const bool target_constant = ((target_prefix >> (12u + lane)) & 1u) != 0u;
        if ((source_swizzle >= length && !source_constant) ||
            (target_swizzle >= length && !target_constant)) {
            result[lane] = 0.0f;
        }
    }

    write_vfpu_vector_with_destination_prefix(result, destination_register, length);
}

void AllegrexContext::execute_vfpu_vi2x(std::uint32_t destination_register, std::uint32_t source_register,
                       std::uint32_t length, std::uint32_t operation) noexcept {
    if (length == 0u || length > 4u) return;

    std::uint32_t source[4]{};
    read_vfpu_vector(reinterpret_cast<float *>(source), source_register, length);
    apply_vfpu_source_prefix(reinterpret_cast<float *>(source), length, 0u);

    std::uint32_t packed[4]{};
    std::uint32_t output_length = 1u;
    if (operation <= 1u) {
        std::uint32_t word = 0u;
        for (std::uint32_t lane = 0u; lane < 4u; ++lane) {
            std::uint32_t value = source[lane];
            if (operation == 0u) {
                if (static_cast<std::int32_t>(value) < 0) value = 0u;
                value >>= 23u;
            } else {
                value >>= 24u;
            }
            word |= (value & 0xFFu) << (lane * 8u);
        }
        packed[0] = word;
    } else {
        output_length = length > 2u ? 2u : 1u;
        for (std::uint32_t index = 0u; index < output_length; ++index) {
            std::uint32_t low = source[index * 2u];
            std::uint32_t high = source[index * 2u + 1u];
            if (operation == 2u) {
                if (static_cast<std::int32_t>(low) < 0) low = 0u;
                if (static_cast<std::int32_t>(high) < 0) high = 0u;
                low >>= 15u;
                high >>= 15u;
            } else {
                low >>= 16u;
                high >>= 16u;
            }
            packed[index] = (low & 0xFFFFu) | ((high & 0xFFFFu) << 16u);
        }
    }

    write_vfpu_vector_with_destination_prefix(reinterpret_cast<float *>(packed),
                                              destination_register, output_length);
}

void AllegrexContext::execute_vfpu_vsgn(std::uint32_t destination_register, std::uint32_t source_register,
                       std::uint32_t length) noexcept {
    if (length == 0u || length > 4u) return;

    const std::uint32_t source_prefix = vfpu_ctrl[0];
    float source[4]{};
    read_vfpu_vector(source, source_register, length);
    apply_vfpu_source_prefix(source, length, 0u);

    float result[4]{};
    for (std::uint32_t lane = 0u; lane < length; ++lane) {
        std::uint32_t bits = 0u;
        std::memcpy(&bits, &source[lane], sizeof(bits));
        if ((bits & 0x7F800000u) == 0u)
            result[lane] = 0.0f;
        else
            result[lane] = (bits >> 31u) == 0u ? 1.0f : -1.0f;

        const std::uint32_t source_swizzle = (source_prefix >> (lane * 2u)) & 3u;
        const bool source_constant = ((source_prefix >> (12u + lane)) & 1u) != 0u;
        if (source_swizzle >= length && !source_constant) result[lane] = 0.0f;
    }

    write_vfpu_vector_with_destination_prefix(result, destination_register, length);
}

void AllegrexContext::read_vfpu_matrix(float *destination, std::uint32_t matrix_register, std::uint32_t side) const noexcept {
    const std::uint32_t matrix = (matrix_register >> 2u) & 7u;
    const std::uint32_t column = matrix_register & 3u;
    bool transpose = ((matrix_register >> 5u) & 1u) != 0u;
    std::uint32_t row = 0u;
    if (side == 1u) { transpose = false; row = (matrix_register >> 5u) & 3u; }
    else if (side == 2u || side == 4u) row = (matrix_register >> 5u) & 2u;
    else if (side == 3u) row = (matrix_register >> 6u) & 1u;
    const std::size_t base = static_cast<std::size_t>(matrix * 16u);
    for (std::uint32_t j = 0; j < side; ++j) {
        for (std::uint32_t i = 0; i < side; ++i) {
            const std::size_t index = transpose
                ? base + static_cast<std::size_t>(((row + i) & 3u) * 4u + ((column + j) & 3u))
                : base + static_cast<std::size_t>(((column + j) & 3u) * 4u + ((row + i) & 3u));
            destination[j * 4u + i] = vfpu[index];
        }
    }
}

void AllegrexContext::write_vfpu_matrix(const float *source, std::uint32_t matrix_register, std::uint32_t side) noexcept {
    const std::uint32_t matrix = (matrix_register >> 2u) & 7u;
    const std::uint32_t column = matrix_register & 3u;
    bool transpose = ((matrix_register >> 5u) & 1u) != 0u;
    std::uint32_t row = 0u;
    if (side == 1u) { transpose = false; row = (matrix_register >> 5u) & 3u; }
    else if (side == 2u || side == 4u) row = (matrix_register >> 5u) & 2u;
    else if (side == 3u) row = (matrix_register >> 6u) & 1u;
    const std::size_t base = static_cast<std::size_t>(matrix * 16u);
    for (std::uint32_t j = 0; j < side; ++j) {
        for (std::uint32_t i = 0; i < side; ++i) {
            const std::size_t index = transpose
                ? base + static_cast<std::size_t>(((row + i) & 3u) * 4u + ((column + j) & 3u))
                : base + static_cast<std::size_t>(((column + j) & 3u) * 4u + ((row + i) & 3u));
            vfpu[index] = source[j * 4u + i];
        }
    }
}

void AllegrexContext::execute_vfpu_vmscl(std::uint32_t destination_matrix_register,
                        std::uint32_t source_matrix_register,
                        std::uint32_t target_scalar_register,
                        std::uint32_t side) noexcept {
    if (side == 0u || side > 4u) return;

    float source[16]{};
    float target[4]{};
    float result[16]{};
    float previous_destination[16]{};
    read_vfpu_matrix(source, source_matrix_register, side);
    read_vfpu_matrix(previous_destination, destination_matrix_register, side);
    read_vfpu_vector(target, target_scalar_register, 1u);

    const float scalar = target[0];
    for (std::uint32_t row = 0u; row + 1u < side; ++row) {
        for (std::uint32_t column = 0u; column < side; ++column) {
            result[row * 4u + column] = source[row * 4u + column] * scalar;
        }
    }

    // Hardware applies S/T prefixes only to the final matrix row.  T is
    // internally rewritten so every output lane selects the scalar's
    // physical VFPU lane, while retaining constant/absolute/negate bits.
    const std::uint32_t last_row = side - 1u;
    apply_vfpu_source_prefix(source + last_row * 4u, 4u, 0u);

    const std::uint32_t target_lane = (target_scalar_register >> 5u) & 3u;
    target[target_lane] = scalar;
    const std::uint32_t original_target_prefix = vfpu_ctrl[1];
    const std::uint32_t replicated_swizzle = target_lane * 0x55u;
    vfpu_ctrl[1] = (original_target_prefix & ~0xFFu) | replicated_swizzle;
    apply_vfpu_source_prefix(target, 4u, 1u);
    vfpu_ctrl[1] = original_target_prefix;

    for (std::uint32_t column = 0u; column < side; ++column) {
        result[last_row * 4u + column] = source[last_row * 4u + column] * target[column];
    }

    // D prefix saturation and mask apply only to the final row.
    const std::uint32_t destination_prefix = vfpu_ctrl[2];
    for (std::uint32_t column = 0u; column < side; ++column) {
        if (((destination_prefix >> (8u + column)) & 1u) != 0u) {
            result[last_row * 4u + column] = previous_destination[last_row * 4u + column];
            continue;
        }
        const std::uint32_t saturation = (destination_prefix >> (column * 2u)) & 3u;
        float &value = result[last_row * 4u + column];
        if (saturation == 1u) value = std::fmin(1.0f, std::fmax(0.0f, value));
        else if (saturation == 3u) value = std::fmin(1.0f, std::fmax(-1.0f, value));
    }

    write_vfpu_matrix(result, destination_matrix_register, side);
    eat_vfpu_prefixes();
}

void AllegrexContext::execute_vfpu_vmmov(std::uint32_t destination_matrix_register,
                        std::uint32_t source_matrix_register,
                        std::uint32_t side) noexcept {
    if (side == 0u || side > 4u) return;

    float source[16]{};
    float previous_destination[16]{};
    read_vfpu_matrix(source, source_matrix_register, side);
    read_vfpu_matrix(previous_destination, destination_matrix_register, side);

    const std::uint32_t last_row = side - 1u;
    apply_vfpu_source_prefix(source + last_row * 4u, 4u, 0u);

    const std::uint32_t destination_prefix = vfpu_ctrl[2];
    for (std::uint32_t column = 0u; column < side; ++column) {
        float &value = source[last_row * 4u + column];
        if (((destination_prefix >> (8u + column)) & 1u) != 0u) {
            value = previous_destination[last_row * 4u + column];
            continue;
        }
        const std::uint32_t saturation = (destination_prefix >> (column * 2u)) & 3u;
        if (saturation == 1u) value = std::fmin(1.0f, std::fmax(0.0f, value));
        else if (saturation == 3u) value = std::fmin(1.0f, std::fmax(-1.0f, value));
    }

    write_vfpu_matrix(source, destination_matrix_register, side);
    eat_vfpu_prefixes();
}

void AllegrexContext::execute_vfpu_matrix_init(std::uint32_t destination_matrix_register,
                              std::uint32_t side,
                              std::uint32_t operation) noexcept {
    if (side == 0u || side > 4u) return;
    if (operation != 3u && operation != 6u && operation != 7u) return;

    float matrix[16]{};
    float previous_destination[16]{};
    read_vfpu_matrix(previous_destination, destination_matrix_register, side);
    for (std::uint32_t row = 0u; row < side; ++row) {
        for (std::uint32_t column = 0u; column < side; ++column) {
            matrix[row * 4u + column] = operation == 7u ? 1.0f
                : (operation == 3u && row == column ? 1.0f : 0.0f);
        }
    }

    // Matrix-init operations force the final row through source-prefix
    // constants while retaining the original absolute/negate controls.
    const std::uint32_t last_row = side - 1u;
    std::uint32_t rewritten_source_prefix = vfpu_ctrl[0] & ~0xFFu;
    for (std::uint32_t lane = 0u; lane < 4u; ++lane) {
        const bool one = operation == 7u || (operation == 3u && lane == last_row);
        rewritten_source_prefix |= (one ? 1u : 0u) << (lane * 2u);
        rewritten_source_prefix |= 1u << (12u + lane);
    }
    const std::uint32_t original_source_prefix = vfpu_ctrl[0];
    vfpu_ctrl[0] = rewritten_source_prefix;
    apply_vfpu_source_prefix(matrix + last_row * 4u, 4u, 0u);
    vfpu_ctrl[0] = original_source_prefix;

    // Matrix-init saturation is undefined on hardware; honor only the
    // architecturally useful final-row write mask.
    const std::uint32_t destination_prefix = vfpu_ctrl[2];
    for (std::uint32_t column = 0u; column < side; ++column) {
        if (((destination_prefix >> (8u + column)) & 1u) != 0u) {
            matrix[last_row * 4u + column] = previous_destination[last_row * 4u + column];
        }
    }

    write_vfpu_matrix(matrix, destination_matrix_register, side);
    eat_vfpu_prefixes();
}

void AllegrexContext::write_vfpu_identity_matrix(std::uint32_t matrix_register, std::uint32_t side) noexcept {
    const std::uint32_t matrix = (matrix_register >> 2u) & 7u;
    const std::uint32_t column = matrix_register & 3u;
    const bool transpose = ((matrix_register >> 5u) & 1u) != 0u;
    const std::uint32_t row = side == 3u ? ((matrix_register >> 6u) & 1u)
                                         : (side == 1u ? ((matrix_register >> 5u) & 3u)
                                                      : ((matrix_register >> 5u) & 2u));
    const std::size_t base = static_cast<std::size_t>(matrix * 16u);
    for (std::uint32_t j = 0; j < side; ++j) {
        for (std::uint32_t i = 0; i < side; ++i) {
            const std::size_t index = transpose
                ? base + static_cast<std::size_t>(((row + i) & 3u) * 4u + ((column + j) & 3u))
                : base + static_cast<std::size_t>(((column + j) & 3u) * 4u + ((row + i) & 3u));
            vfpu[index] = i == j ? 1.0f : 0.0f;
        }
    }
    eat_vfpu_prefixes();
}

} // namespace psprecomp
