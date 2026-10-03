#pragma once

#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <limits>

namespace psprecomp {

#if defined(_MSC_VER)
#define PSPRECOMP_CONTEXT_FORCEINLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define PSPRECOMP_CONTEXT_FORCEINLINE inline __attribute__((always_inline))
#else
#define PSPRECOMP_CONTEXT_FORCEINLINE inline
#endif

struct alignas(16) AllegrexContext {
    std::array<std::uint32_t, 32> gpr{};
    std::uint32_t hi{};
    std::uint32_t lo{};
    std::uint32_t pc{};
    std::array<float, 32> fpr{};
    std::uint32_t fcr31{};

    // Address most recently reserved by ll (load-linked) plus the id of the
    // reservation, consumed by sc (store-conditional).  The recompiler's
    // cooperative scheduler never switches guest threads between the two
    // instructions, so a matching address is always still reserved.
    std::uint32_t ll_address{};
    bool ll_reserved{};

    // VFPU is represented as 128 scalar lanes for now. The physical PSP
    // register views overlap; the final lowering layer will provide S/V/M views.
    std::array<float, 128> vfpu{};
    std::array<std::uint32_t, 16> vfpu_ctrl{};


    [[nodiscard]] PSPRECOMP_CONTEXT_FORCEINLINE std::uint32_t fpr_bits(std::uint32_t index) const noexcept {
        return index < fpr.size() ? std::bit_cast<std::uint32_t>(fpr[index]) : 0u;
    }

    PSPRECOMP_CONTEXT_FORCEINLINE void set_fpr_bits(std::uint32_t index, std::uint32_t value) noexcept {
        if (index < fpr.size()) {
            fpr[index] = std::bit_cast<float>(value);
        }
    }

    [[nodiscard]] PSPRECOMP_CONTEXT_FORCEINLINE bool fpu_condition() const noexcept {
        return (fcr31 & (1u << 23u)) != 0u;
    }

    PSPRECOMP_CONTEXT_FORCEINLINE void set_fpu_condition(bool value) noexcept {
        if (value) fcr31 |= (1u << 23u);
        else fcr31 &= ~(1u << 23u);
    }

    static std::int32_t clamp_fpu_word(double value) noexcept {
        constexpr double min_value = static_cast<double>(std::numeric_limits<std::int32_t>::min());
        constexpr double max_value = static_cast<double>(std::numeric_limits<std::int32_t>::max());
        if (value <= min_value) return std::numeric_limits<std::int32_t>::min();
        if (value >= max_value) return std::numeric_limits<std::int32_t>::max();
        return static_cast<std::int32_t>(value);
    }

    static double round_ties_to_even(double value) noexcept {
        const double lower = std::floor(value);
        const double fraction = value - lower;
        if (fraction < 0.5) return lower;
        if (fraction > 0.5) return lower + 1.0;
        const auto integral = static_cast<std::int64_t>(lower);
        return (integral & 1LL) == 0LL ? lower : lower + 1.0;
    }

    [[nodiscard]] std::uint32_t fpu_float_to_word(float value, std::uint32_t mode) const noexcept {
        if (!std::isfinite(value)) {
            const std::int32_t result = std::isinf(value) && std::signbit(value)
                ? std::numeric_limits<std::int32_t>::min()
                : std::numeric_limits<std::int32_t>::max();
            return static_cast<std::uint32_t>(result);
        }

        double converted{};
        switch (mode) {
        case 0u: converted = std::floor(static_cast<double>(value) + 0.5); break; // ROUND.W.S
        case 1u: converted = std::trunc(static_cast<double>(value)); break;       // TRUNC.W.S
        case 2u: converted = std::ceil(static_cast<double>(value)); break;        // CEIL.W.S
        case 3u: converted = std::floor(static_cast<double>(value)); break;       // FLOOR.W.S
        default:
            switch (fcr31 & 3u) {
            case 0u: converted = round_ties_to_even(static_cast<double>(value)); break;
            case 1u: converted = std::trunc(static_cast<double>(value)); break;
            case 2u: converted = std::ceil(static_cast<double>(value)); break;
            default: converted = std::floor(static_cast<double>(value)); break;
            }
            break;
        }
        return static_cast<std::uint32_t>(clamp_fpu_word(converted));
    }


    // Generated ROUND/TRUNC/CEIL/FLOOR instructions carry a literal conversion
    // mode. Make it a template parameter so the hot AOT path has no mode switch;
    // TRUNC (a common generated-code case) also avoids a redundant std::trunc.
    template <std::uint32_t Mode>
    [[nodiscard]] PSPRECOMP_CONTEXT_FORCEINLINE std::uint32_t fpu_float_to_word_ct(float value) const noexcept {
        static_assert(Mode <= 3u);
        if (!std::isfinite(value)) {
            const std::int32_t result = std::isinf(value) && std::signbit(value)
                ? std::numeric_limits<std::int32_t>::min()
                : std::numeric_limits<std::int32_t>::max();
            return static_cast<std::uint32_t>(result);
        }
        const double input = static_cast<double>(value);
        if constexpr (Mode == 1u) {
            constexpr double min_value = static_cast<double>(std::numeric_limits<std::int32_t>::min());
            constexpr double max_value = static_cast<double>(std::numeric_limits<std::int32_t>::max());
            if (input <= min_value) return static_cast<std::uint32_t>(std::numeric_limits<std::int32_t>::min());
            if (input >= max_value) return static_cast<std::uint32_t>(std::numeric_limits<std::int32_t>::max());
            return static_cast<std::uint32_t>(static_cast<std::int32_t>(input));
        } else if constexpr (Mode == 0u) {
            return static_cast<std::uint32_t>(clamp_fpu_word(std::floor(input + 0.5)));
        } else if constexpr (Mode == 2u) {
            return static_cast<std::uint32_t>(clamp_fpu_word(std::ceil(input)));
        } else {
            return static_cast<std::uint32_t>(clamp_fpu_word(std::floor(input)));
        }
    }

    static constexpr std::size_t vfpu_scalar_index(std::uint32_t scalar_register) noexcept {
        // PSP scalar register encoding is 0YYMMMXX.  The storage below uses
        // contiguous 4x4 matrices: matrix * 16 + Y * 4 + X.
        const std::uint32_t matrix = (scalar_register >> 2u) & 7u;
        const std::uint32_t x = (scalar_register >> 5u) & 3u;
        const std::uint32_t y = scalar_register & 3u;
        return static_cast<std::size_t>(matrix * 16u + y * 4u + x);
    }

    PSPRECOMP_CONTEXT_FORCEINLINE void set_vfpu_scalar_bits(std::uint32_t scalar_register, std::uint32_t value) noexcept {
        if (scalar_register < 128u) {
            vfpu[vfpu_scalar_index(scalar_register)] = std::bit_cast<float>(value);
        } else if (scalar_register < 144u) {
            vfpu_ctrl[scalar_register - 128u] = value;
        }
    }

    [[nodiscard]] PSPRECOMP_CONTEXT_FORCEINLINE std::uint32_t vfpu_scalar_bits(std::uint32_t scalar_register) const noexcept {
        if (scalar_register < 128u) {
            return std::bit_cast<std::uint32_t>(vfpu[vfpu_scalar_index(scalar_register)]);
        }
        if (scalar_register < 144u) {
            return vfpu_ctrl[scalar_register - 128u];
        }
        return 0u;
    }

    // Generated MTV/MFV/LVS/SVS always carry a literal encoded scalar register.
    // Make that fact visible to the host compiler so both the register-class
    // branch and the PSP VFPU lane shuffle disappear from the AOT hot path.
    template <std::uint32_t ScalarRegister>
    PSPRECOMP_CONTEXT_FORCEINLINE void set_vfpu_scalar_bits_ct(std::uint32_t value) noexcept {
        static_assert(ScalarRegister < 144u);
        if constexpr (ScalarRegister < 128u) {
            constexpr std::size_t index = vfpu_scalar_index(ScalarRegister);
            vfpu[index] = std::bit_cast<float>(value);
        } else {
            vfpu_ctrl[ScalarRegister - 128u] = value;
        }
    }

    template <std::uint32_t ScalarRegister>
    [[nodiscard]] PSPRECOMP_CONTEXT_FORCEINLINE std::uint32_t vfpu_scalar_bits_ct() const noexcept {
        static_assert(ScalarRegister < 144u);
        if constexpr (ScalarRegister < 128u) {
            constexpr std::size_t index = vfpu_scalar_index(ScalarRegister);
            return std::bit_cast<std::uint32_t>(vfpu[index]);
        } else {
            return vfpu_ctrl[ScalarRegister - 128u];
        }
    }

    // AOT compile-time VFPU lane access. Generated code always
    // knows the encoded vector register and vector length.  The old generic
    // helpers recomputed row/column/transpose and ran tiny loops at runtime;
    // on giant generated units MSVC/Clang often kept the prefix helpers as
    // real calls.  These templates turn the lane mapping into constants and
    // fully unroll 1..4 lanes at the call site.
    template <std::uint32_t VectorRegister, std::uint32_t Length>
    PSPRECOMP_CONTEXT_FORCEINLINE void read_vfpu_vector_ct(float *destination) const noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        if constexpr (Length == 1u) {
            constexpr std::size_t index = vfpu_scalar_index(VectorRegister & 0x7Fu);
            destination[0] = vfpu[index];
        } else {
            constexpr std::uint32_t row = Length == 3u ? ((VectorRegister >> 6u) & 1u)
                                                        : ((VectorRegister >> 5u) & 2u);
            constexpr bool transpose = ((VectorRegister >> 5u) & 1u) != 0u;
            constexpr std::uint32_t matrix_base = ((VectorRegister << 2u) & 0x70u);
            constexpr std::uint32_t column = VectorRegister & 3u;
            if constexpr (transpose) {
                constexpr std::uint32_t base = matrix_base + column;
                destination[0] = vfpu[base + ((row + 0u) & 3u) * 4u];
                if constexpr (Length >= 2u) destination[1] = vfpu[base + ((row + 1u) & 3u) * 4u];
                if constexpr (Length >= 3u) destination[2] = vfpu[base + ((row + 2u) & 3u) * 4u];
                if constexpr (Length >= 4u) destination[3] = vfpu[base + ((row + 3u) & 3u) * 4u];
            } else {
                constexpr std::uint32_t base = matrix_base + column * 4u;
                destination[0] = vfpu[base + ((row + 0u) & 3u)];
                if constexpr (Length >= 2u) destination[1] = vfpu[base + ((row + 1u) & 3u)];
                if constexpr (Length >= 3u) destination[2] = vfpu[base + ((row + 2u) & 3u)];
                if constexpr (Length >= 4u) destination[3] = vfpu[base + ((row + 3u) & 3u)];
            }
        }
    }

    template <std::uint32_t Length, std::uint32_t ControlIndex>
    PSPRECOMP_CONTEXT_FORCEINLINE void apply_vfpu_source_prefix_ct(float *value) const noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        static_assert(ControlIndex < 2u);
        const std::uint32_t prefix = vfpu_ctrl[ControlIndex];
        if (prefix == 0xE4u) return;
        const float o0 = value[0];
        const float o1 = Length >= 2u ? value[1] : 0.0f;
        const float o2 = Length >= 3u ? value[2] : 0.0f;
        const float o3 = Length >= 4u ? value[3] : 0.0f;
        const float original[4]{o0, o1, o2, o3};
        static constexpr float constants[8] = {
            0.0f, 1.0f, 2.0f, 0.5f, 3.0f, 1.0f / 3.0f, 0.25f, 1.0f / 6.0f,
        };
        auto lane_value = [&](std::uint32_t i) {
            const std::uint32_t lane = (prefix >> (i * 2u)) & 3u;
            const bool absolute = ((prefix >> (8u + i)) & 1u) != 0u;
            const bool use_constant = ((prefix >> (12u + i)) & 1u) != 0u;
            const bool negate = ((prefix >> (16u + i)) & 1u) != 0u;
            float out = use_constant ? constants[lane + (absolute ? 4u : 0u)]
                                     : (lane < Length ? original[lane] : 0.0f);
            if (!use_constant && absolute) out = std::fabs(out);
            if (negate) out = std::bit_cast<float>(std::bit_cast<std::uint32_t>(out) ^ 0x80000000u);
            return out;
        };
        value[0] = lane_value(0u);
        if constexpr (Length >= 2u) value[1] = lane_value(1u);
        if constexpr (Length >= 3u) value[2] = lane_value(2u);
        if constexpr (Length >= 4u) value[3] = lane_value(3u);
    }

    template <std::uint32_t VectorRegister, std::uint32_t Length, std::uint32_t ControlIndex>
    PSPRECOMP_CONTEXT_FORCEINLINE void read_vfpu_vector_with_source_prefix_ct(float *destination) const noexcept {
        read_vfpu_vector_ct<VectorRegister, Length>(destination);
        apply_vfpu_source_prefix_ct<Length, ControlIndex>(destination);
    }

    template <std::uint32_t VectorRegister, std::uint32_t Length>
    PSPRECOMP_CONTEXT_FORCEINLINE void write_vfpu_vector_ct(const float *source) noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        if constexpr (Length == 1u) {
            constexpr std::size_t index = vfpu_scalar_index(VectorRegister & 0x7Fu);
            vfpu[index] = source[0];
        } else {
            constexpr std::uint32_t row = Length == 3u ? ((VectorRegister >> 6u) & 1u)
                                                        : ((VectorRegister >> 5u) & 2u);
            constexpr bool transpose = ((VectorRegister >> 5u) & 1u) != 0u;
            constexpr std::uint32_t matrix_base = ((VectorRegister << 2u) & 0x70u);
            constexpr std::uint32_t column = VectorRegister & 3u;
            if constexpr (transpose) {
                constexpr std::uint32_t base = matrix_base + column;
                vfpu[base + ((row + 0u) & 3u) * 4u] = source[0];
                if constexpr (Length >= 2u) vfpu[base + ((row + 1u) & 3u) * 4u] = source[1];
                if constexpr (Length >= 3u) vfpu[base + ((row + 2u) & 3u) * 4u] = source[2];
                if constexpr (Length >= 4u) vfpu[base + ((row + 3u) & 3u) * 4u] = source[3];
            } else {
                constexpr std::uint32_t base = matrix_base + column * 4u;
                vfpu[base + ((row + 0u) & 3u)] = source[0];
                if constexpr (Length >= 2u) vfpu[base + ((row + 1u) & 3u)] = source[1];
                if constexpr (Length >= 3u) vfpu[base + ((row + 2u) & 3u)] = source[2];
                if constexpr (Length >= 4u) vfpu[base + ((row + 3u) & 3u)] = source[3];
            }
        }
    }

    template <std::uint32_t VectorRegister, std::uint32_t Length>
    PSPRECOMP_CONTEXT_FORCEINLINE void write_vfpu_vector_with_destination_prefix_ct(const float *source) noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        const std::uint32_t destination_prefix = vfpu_ctrl[2];
        float value[4]{source[0], Length >= 2u ? source[1] : 0.0f,
                       Length >= 3u ? source[2] : 0.0f, Length >= 4u ? source[3] : 0.0f};
        auto saturate_lane = [&](std::uint32_t i) {
            const std::uint32_t saturation = (destination_prefix >> (i * 2u)) & 3u;
            if (saturation == 1u) value[i] = std::fmin(1.0f, std::fmax(0.0f, value[i]));
            else if (saturation == 3u) value[i] = std::fmin(1.0f, std::fmax(-1.0f, value[i]));
        };
        saturate_lane(0u);
        if constexpr (Length >= 2u) saturate_lane(1u);
        if constexpr (Length >= 3u) saturate_lane(2u);
        if constexpr (Length >= 4u) saturate_lane(3u);

        if ((destination_prefix & (1u << 8u)) == 0u) {
            constexpr std::size_t i0 = vfpu_vector_lane_index(VectorRegister, Length, 0u);
            vfpu[i0] = value[0];
        }
        if constexpr (Length >= 2u) if ((destination_prefix & (1u << 9u)) == 0u) {
            constexpr std::size_t i1 = vfpu_vector_lane_index(VectorRegister, Length, 1u);
            vfpu[i1] = value[1];
        }
        if constexpr (Length >= 3u) if ((destination_prefix & (1u << 10u)) == 0u) {
            constexpr std::size_t i2 = vfpu_vector_lane_index(VectorRegister, Length, 2u);
            vfpu[i2] = value[2];
        }
        if constexpr (Length >= 4u) if ((destination_prefix & (1u << 11u)) == 0u) {
            constexpr std::size_t i3 = vfpu_vector_lane_index(VectorRegister, Length, 3u);
            vfpu[i3] = value[3];
        }
        eat_vfpu_prefixes();
    }

    void read_vfpu_vector(float *destination, std::uint32_t vector_register, std::uint32_t length) const noexcept;

    void apply_vfpu_source_prefix(float *value, std::uint32_t length, std::uint32_t control_index) const noexcept;

    void read_vfpu_vector_with_source_prefix(float *destination, std::uint32_t vector_register,
                                             std::uint32_t length, std::uint32_t control_index) const noexcept {
        read_vfpu_vector(destination, vector_register, length);
        apply_vfpu_source_prefix(destination, length, control_index);
    }

    void write_vfpu_vector(const float *source, std::uint32_t vector_register, std::uint32_t length) noexcept;

    void write_vfpu_vector_with_destination_prefix(const float *source, std::uint32_t vector_register,
                                                   std::uint32_t length) noexcept;

    [[nodiscard]] static constexpr std::size_t vfpu_vector_lane_index(
        std::uint32_t vector_register, std::uint32_t length, std::uint32_t lane) noexcept {
        if (length == 1u) return vfpu_scalar_index(vector_register & 0x7Fu);
        const std::uint32_t row = length == 3u ? ((vector_register >> 6u) & 1u)
                                               : ((vector_register >> 5u) & 2u);
        const bool transpose = ((vector_register >> 5u) & 1u) != 0u;
        const std::uint32_t matrix_base = ((vector_register << 2u) & 0x70u);
        const std::uint32_t column = vector_register & 3u;
        return transpose
            ? static_cast<std::size_t>(matrix_base + column + ((row + lane) & 3u) * 4u)
            : static_cast<std::size_t>(matrix_base + column * 4u + ((row + lane) & 3u));
    }

    [[nodiscard]] static constexpr std::uint32_t vfpu_expand_half_bits(std::uint16_t half) noexcept {
        const std::uint32_t sign = static_cast<std::uint32_t>(half & 0x8000u) << 16u;
        const std::uint32_t exponent = (half >> 10u) & 0x1Fu;
        std::uint32_t mantissa = half & 0x03FFu;

        if (exponent == 0u) {
            if (mantissa == 0u) return sign;

            // Normalize a binary16 subnormal into binary32.  Exponent 113 is
            // the binary32 exponent corresponding to the smallest normal
            // binary16 value; each normalization shift decreases it by one.
            std::uint32_t float_exponent = 113u;
            while ((mantissa & 0x0400u) == 0u) {
                mantissa <<= 1u;
                --float_exponent;
            }
            mantissa &= 0x03FFu;
            return sign | (float_exponent << 23u) | (mantissa << 13u);
        }

        if (exponent == 31u) {
            // The PSP VFPU preserves the binary16 NaN payload in the low ten
            // binary32 mantissa bits for this conversion.
            return sign | 0x7F800000u | mantissa;
        }

        return sign | ((exponent + 112u) << 23u) | (mantissa << 13u);
    }

    [[nodiscard]] static std::uint16_t vfpu_shrink_to_half_bits(float value) noexcept {
        // Integer-only binary32 -> binary16 conversion.  The VFPU rounds a
        // discarded exact half-way bit upward, so the rounding step is kept
        // explicit instead of depending on host floating-point state.
        const std::uint32_t bits = std::bit_cast<std::uint32_t>(value);
        const std::uint16_t sign = static_cast<std::uint16_t>((bits >> 16u) & 0x8000u);
        const std::uint32_t exponent = (bits >> 23u) & 0xFFu;
        const std::uint32_t fraction = bits & 0x007FFFFFu;

        if (exponent == 0xFFu) {
            if (fraction == 0u) return static_cast<std::uint16_t>(sign | 0x7C00u);
            // Preserve the low ten payload bits and force a quiet half NaN.
            return static_cast<std::uint16_t>(sign | 0x7E00u | (bits & 0x03FFu));
        }

        // Every binary32 subnormal is too small to survive as binary16.
        if (exponent == 0u) return sign;

        const std::int32_t unbiased = static_cast<std::int32_t>(exponent) - 127;
        if (unbiased > 15) return static_cast<std::uint16_t>(sign | 0x7C00u);

        const auto round_half_up = [](std::uint32_t value_bits, std::uint32_t shift) noexcept {
            if (shift == 0u) return value_bits;
            const std::uint32_t quotient = value_bits >> shift;
            const std::uint32_t remainder_mask = (std::uint32_t{1} << shift) - 1u;
            const std::uint32_t remainder = value_bits & remainder_mask;
            const std::uint32_t halfway = std::uint32_t{1} << (shift - 1u);
            return quotient + (remainder >= halfway ? 1u : 0u);
        };

        if (unbiased >= -14) {
            std::uint32_t half_exponent = static_cast<std::uint32_t>(unbiased + 15);
            std::uint32_t half_fraction = round_half_up(fraction, 13u);
            if (half_fraction == 0x0400u) {
                half_fraction = 0u;
                ++half_exponent;
                if (half_exponent >= 31u)
                    return static_cast<std::uint16_t>(sign | 0x7C00u);
            }
            return static_cast<std::uint16_t>(
                sign | (half_exponent << 10u) | half_fraction);
        }

        if (unbiased < -25) return sign;
        const std::uint32_t significand = 0x00800000u | fraction;
        const std::uint32_t shift = static_cast<std::uint32_t>(13 + (-14 - unbiased));
        const std::uint32_t half_fraction = round_half_up(significand, shift);
        if (half_fraction >= 0x0400u)
            return static_cast<std::uint16_t>(sign | 0x0400u);
        return static_cast<std::uint16_t>(sign | half_fraction);
    }

    void execute_vfpu_vf2h(std::uint32_t destination_register,
                            std::uint32_t source_register,
                            std::uint32_t source_length) noexcept;

    void execute_vfpu_vh2f(std::uint32_t destination_register,
                            std::uint32_t source_register,
                            std::uint32_t source_length) noexcept;

    void execute_vfpu_vx2i(std::uint32_t destination_register,
                            std::uint32_t source_register,
                            std::uint32_t source_length,
                            std::uint32_t operation) noexcept;

    template <std::uint32_t DestinationScalarRegister, std::uint32_t SourceRegister,
              std::uint32_t TargetRegister, std::uint32_t Length>
    PSPRECOMP_CONTEXT_FORCEINLINE void execute_vfpu_vdot_ct() noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        float source[4]{};
        float target[4]{};
        read_vfpu_vector_ct<SourceRegister, Length>(source);
        read_vfpu_vector_ct<TargetRegister, Length>(target);
        // VDOT prefix semantics use a four-lane view even for a shorter encoded vector.
        apply_vfpu_source_prefix_ct<4u, 0u>(source);
        apply_vfpu_source_prefix_ct<4u, 1u>(target);
        const float result[1]{
            source[0] * target[0] + source[1] * target[1] +
            source[2] * target[2] + source[3] * target[3]
        };
        write_vfpu_vector_with_destination_prefix_ct<DestinationScalarRegister, 1u>(result);
    }

    void execute_vfpu_vdot(std::uint32_t destination_scalar_register,
                            std::uint32_t source_register, std::uint32_t target_register,
                            std::uint32_t length) noexcept;

    void execute_vfpu_vhdp(std::uint32_t destination_scalar_register,
                           std::uint32_t source_register, std::uint32_t target_register,
                           std::uint32_t length) noexcept;

    void execute_vfpu_horizontal(std::uint32_t destination_scalar_register,
                                 std::uint32_t source_register,
                                 std::uint32_t source_length,
                                 bool average) noexcept;

    [[nodiscard]] static constexpr bool vfpu_is_nan_or_inf_bits(std::uint32_t bits) noexcept {
        return (bits & 0x7F800000u) == 0x7F800000u;
    }

    [[nodiscard]] static std::uint32_t vfpu_minmax_bits(std::uint32_t source_bits,
                                                        std::uint32_t target_bits,
                                                        bool maximum) noexcept {
        const float source = std::bit_cast<float>(source_bits);
        const float target = std::bit_cast<float>(target_bits);
        if (vfpu_is_nan_or_inf_bits(source_bits) || vfpu_is_nan_or_inf_bits(target_bits)) {
            const auto source_signed = static_cast<std::int32_t>(source_bits);
            const auto target_signed = static_cast<std::int32_t>(target_bits);
            const bool both_negative = source_signed < 0 && target_signed < 0;
            const std::int32_t selected = maximum
                ? (both_negative ? std::min(target_signed, source_signed)
                                 : std::max(target_signed, source_signed))
                : (both_negative ? std::max(target_signed, source_signed)
                                 : std::min(target_signed, source_signed));
            return static_cast<std::uint32_t>(selected);
        }

        // The PSP chooses T when values compare equal, preserving T's sign for
        // +0/-0.  The operand order below deliberately matches std::min(T, S)
        // and std::max(T, S) in the reference interpreter.
        const float selected = maximum ? std::max(target, source) : std::min(target, source);
        return std::bit_cast<std::uint32_t>(selected);
    }

    void execute_vfpu_cross_quat(std::uint32_t destination_register,
                                 std::uint32_t source_register, std::uint32_t target_register,
                                 std::uint32_t length) noexcept;

    void execute_vfpu_vminmax(std::uint32_t destination_register,
                              std::uint32_t source_register, std::uint32_t target_register,
                              std::uint32_t length, bool maximum) noexcept;

    void execute_vfpu_compare3(std::uint32_t destination_register,
                               std::uint32_t source_register, std::uint32_t target_register,
                               std::uint32_t length, std::uint32_t operation) noexcept;

    template <std::uint32_t SourceRegister, std::uint32_t TargetRegister,
              std::uint32_t Length, std::uint32_t Condition>
    PSPRECOMP_CONTEXT_FORCEINLINE void execute_vfpu_vcmp_ct() noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        static_assert(Condition < 16u);
        float source[4]{};
        float target[4]{};
        read_vfpu_vector_with_source_prefix_ct<SourceRegister, Length, 0u>(source);
        read_vfpu_vector_with_source_prefix_ct<TargetRegister, Length, 1u>(target);

        auto compare_lane = [](float sv, float tv) -> bool {
            if constexpr (Condition == 0u) return false;
            else if constexpr (Condition == 1u) return sv == tv;
            else if constexpr (Condition == 2u) return sv < tv;
            else if constexpr (Condition == 3u) return sv <= tv;
            else if constexpr (Condition == 4u) return true;
            else if constexpr (Condition == 5u) return sv != tv;
            else if constexpr (Condition == 6u) return sv >= tv;
            else if constexpr (Condition == 7u) return sv > tv;
            else if constexpr (Condition == 8u) return sv == 0.0f;
            else if constexpr (Condition == 9u) return std::isnan(sv);
            else if constexpr (Condition == 10u) return std::isinf(sv);
            else if constexpr (Condition == 11u) return std::isnan(sv) || std::isinf(sv);
            else if constexpr (Condition == 12u) return sv != 0.0f;
            else if constexpr (Condition == 13u) return !std::isnan(sv);
            else if constexpr (Condition == 14u) return !std::isinf(sv);
            else return !(std::isnan(sv) || std::isinf(sv));
        };

        const bool r0 = compare_lane(source[0], target[0]);
        const bool r1 = Length >= 2u ? compare_lane(source[1], target[1]) : false;
        const bool r2 = Length >= 3u ? compare_lane(source[2], target[2]) : false;
        const bool r3 = Length >= 4u ? compare_lane(source[3], target[3]) : false;
        std::uint32_t lane_bits = static_cast<std::uint32_t>(r0);
        if constexpr (Length >= 2u) lane_bits |= static_cast<std::uint32_t>(r1) << 1u;
        if constexpr (Length >= 3u) lane_bits |= static_cast<std::uint32_t>(r2) << 2u;
        if constexpr (Length >= 4u) lane_bits |= static_cast<std::uint32_t>(r3) << 3u;
        bool any = r0;
        bool all = r0;
        if constexpr (Length >= 2u) { any = any || r1; all = all && r1; }
        if constexpr (Length >= 3u) { any = any || r2; all = all && r2; }
        if constexpr (Length >= 4u) { any = any || r3; all = all && r3; }

        constexpr std::uint32_t affected = ((1u << Length) - 1u) | (1u << 4u) | (1u << 5u);
        const std::uint32_t update = lane_bits | (static_cast<std::uint32_t>(any) << 4u) |
            (static_cast<std::uint32_t>(all) << 5u);
        vfpu_ctrl[3] = (vfpu_ctrl[3] & ~affected) | (update & affected);
        eat_vfpu_prefixes();
    }

    void execute_vfpu_vcmp(std::uint32_t source_register, std::uint32_t target_register,
                            std::uint32_t length, std::uint32_t condition) noexcept;

    template <std::uint32_t DestinationRegister, std::uint32_t SourceRegister,
              std::uint32_t Length, std::uint32_t ConditionIndex, bool MoveIfFalse>
    PSPRECOMP_CONTEXT_FORCEINLINE void execute_vfpu_vcmov_ct() noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        static_assert(ConditionIndex < 8u);
        float source[4]{};
        float destination[4]{};
        read_vfpu_vector_with_source_prefix_ct<SourceRegister, Length, 0u>(source);
        read_vfpu_vector_ct<DestinationRegister, Length>(destination);
        apply_vfpu_source_prefix_ct<Length, 1u>(destination);

        const std::uint32_t condition_code = vfpu_ctrl[3];
        if constexpr (ConditionIndex < 6u) {
            const bool cc = ((condition_code >> ConditionIndex) & 1u) != 0u;
            if (cc == !MoveIfFalse) {
                destination[0] = source[0];
                if constexpr (Length >= 2u) destination[1] = source[1];
                if constexpr (Length >= 3u) destination[2] = source[2];
                if constexpr (Length >= 4u) destination[3] = source[3];
            }
        } else if constexpr (ConditionIndex == 6u) {
            const bool want = !MoveIfFalse;
            if ((((condition_code >> 0u) & 1u) != 0u) == want) destination[0] = source[0];
            if constexpr (Length >= 2u)
                if ((((condition_code >> 1u) & 1u) != 0u) == want) destination[1] = source[1];
            if constexpr (Length >= 3u)
                if ((((condition_code >> 2u) & 1u) != 0u) == want) destination[2] = source[2];
            if constexpr (Length >= 4u)
                if ((((condition_code >> 3u) & 1u) != 0u) == want) destination[3] = source[3];
        }
        write_vfpu_vector_with_destination_prefix_ct<DestinationRegister, Length>(destination);
    }

    void execute_vfpu_vcmov(std::uint32_t destination_register, std::uint32_t source_register,
                             std::uint32_t length, std::uint32_t condition_index,
                             bool move_if_false) noexcept;

    template <std::uint32_t DestinationRegister, std::uint32_t SourceRegister,
              std::uint32_t TargetScalarRegister, std::uint32_t Length>
    PSPRECOMP_CONTEXT_FORCEINLINE void execute_vfpu_vscl_ct() noexcept {
        static_assert(Length >= 1u && Length <= 4u);
        float source[4]{};
        read_vfpu_vector_with_source_prefix_ct<SourceRegister, Length, 0u>(source);

        float target[4]{};
        target[0] = std::bit_cast<float>(vfpu_scalar_bits_ct<(TargetScalarRegister & 0x7Fu)>());
        const std::uint32_t original_target_prefix = vfpu_ctrl[1];
        vfpu_ctrl[1] = original_target_prefix & ~0xFFu;
        apply_vfpu_source_prefix_ct<Length, 1u>(target);
        vfpu_ctrl[1] = original_target_prefix;

        float result[4]{};
        result[0] = source[0] * target[0];
        if constexpr (Length >= 2u) result[1] = source[1] * target[1];
        if constexpr (Length >= 3u) result[2] = source[2] * target[2];
        if constexpr (Length >= 4u) result[3] = source[3] * target[3];
        write_vfpu_vector_with_destination_prefix_ct<DestinationRegister, Length>(result);
    }

    void execute_vfpu_vscl(std::uint32_t destination_register, std::uint32_t source_register,
                            std::uint32_t target_scalar_register, std::uint32_t length) noexcept;

    void execute_vfpu_vrot(std::uint32_t destination_register, std::uint32_t source_register,
                           std::uint32_t length, std::uint32_t immediate) noexcept;

    void execute_vfpu_vocp(std::uint32_t destination_register, std::uint32_t source_register,
                           std::uint32_t length) noexcept;

    // VI2x family (vi2uc/vi2c/vi2us/vi2s): repacks integer-valued float lanes
    // into packed byte (single word) or halfword (pair) outputs.  Lanes are
    // read as raw 32-bit patterns under the source swizzle, matching the
    // hardware's integer interpretation; the destination size shrinks to a
    // single word for the byte forms and to a pair for the halfword forms.
    void execute_vfpu_vi2x(std::uint32_t destination_register, std::uint32_t source_register,
                           std::uint32_t length, std::uint32_t operation) noexcept;

    // VSGN: per lane, writes the sign of the (swizzled) source as 1.0, -1.0
    // or 0.0.  The T operand is forced to the zero constant by the hardware,
    // so a no-prefix VSGN is just the sign of S.  A zero or denormal source
    // yields +0.0 and the sign comes from the raw result bits, matching the
    // hardware's handling of NaN inputs.
    void execute_vfpu_vsgn(std::uint32_t destination_register, std::uint32_t source_register,
                           std::uint32_t length) noexcept;

    void read_vfpu_matrix(float *destination, std::uint32_t matrix_register, std::uint32_t side) const noexcept;

    void write_vfpu_matrix(const float *source, std::uint32_t matrix_register, std::uint32_t side) noexcept;

    void execute_vfpu_vmscl(std::uint32_t destination_matrix_register,
                            std::uint32_t source_matrix_register,
                            std::uint32_t target_scalar_register,
                            std::uint32_t side) noexcept;

    void execute_vfpu_vmmov(std::uint32_t destination_matrix_register,
                            std::uint32_t source_matrix_register,
                            std::uint32_t side) noexcept;

    void execute_vfpu_matrix_init(std::uint32_t destination_matrix_register,
                                  std::uint32_t side,
                                  std::uint32_t operation) noexcept;

    void write_vfpu_identity_matrix(std::uint32_t matrix_register, std::uint32_t side) noexcept;

    PSPRECOMP_CONTEXT_FORCEINLINE void eat_vfpu_prefixes() noexcept {
        vfpu_ctrl[0] = 0xE4u;
        vfpu_ctrl[1] = 0xE4u;
        vfpu_ctrl[2] = 0u;
    }

    [[nodiscard]] bool execute_signed_add(std::uint32_t destination, std::uint32_t source_a,
                                          std::uint32_t source_b) noexcept {
        const std::int64_t result = static_cast<std::int64_t>(static_cast<std::int32_t>(gpr[source_a & 31u])) +
                                    static_cast<std::int64_t>(static_cast<std::int32_t>(gpr[source_b & 31u]));
        if (result < std::numeric_limits<std::int32_t>::min() ||
            result > std::numeric_limits<std::int32_t>::max()) {
            return false;
        }
        set_gpr(destination, static_cast<std::uint32_t>(static_cast<std::int32_t>(result)));
        return true;
    }

    [[nodiscard]] bool execute_signed_sub(std::uint32_t destination, std::uint32_t source_a,
                                          std::uint32_t source_b) noexcept {
        const std::int64_t result = static_cast<std::int64_t>(static_cast<std::int32_t>(gpr[source_a & 31u])) -
                                    static_cast<std::int64_t>(static_cast<std::int32_t>(gpr[source_b & 31u]));
        if (result < std::numeric_limits<std::int32_t>::min() ||
            result > std::numeric_limits<std::int32_t>::max()) {
            return false;
        }
        set_gpr(destination, static_cast<std::uint32_t>(static_cast<std::int32_t>(result)));
        return true;
    }

    void set_gpr(std::uint32_t index, std::uint32_t value) noexcept {
        // Allegrex $zero is initialized to zero and no supported path writes a
        // non-zero value into gpr[0].  Generated AOT emits set_gpr() for every
        // architectural register write (over half a million static call sites
        // in generated AOT corpora), so redundantly storing gpr[0] after *every* write
        // creates a hot dependency/store stream for no semantic benefit.
        // Writes whose destination is register zero are simply discarded, as
        // the hardware does. Runtime dispatch boundaries still assert gpr[0]
        // explicitly as a defensive invariant.
        if (index != 0u && index < gpr.size()) {
            gpr[index] = value;
        }
    }
};

} // namespace psprecomp
