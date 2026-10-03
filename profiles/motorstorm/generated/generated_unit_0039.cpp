#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0039[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 44, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107,
    108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124,
};
void recomp_unit_0039_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    static_assert(std::endian::native == std::endian::little);
    std::uint32_t *const aot_gpr = ctx.gpr.data();
    float *const aot_fpr = ctx.fpr.data();
    const GuestMemory::AotFastView::Raw aot_raw = aot_mem.raw();
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0882B000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0039[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882B000;
    case 2u: goto L_0882B008;
    case 3u: goto L_0882B02C;
    case 4u: goto L_0882B034;
    case 5u: goto L_0882B088;
    case 6u: goto L_0882B0AC;
    case 7u: goto L_0882B0B4;
    case 8u: goto L_0882B108;
    case 9u: goto L_0882B12C;
    case 10u: goto L_0882B134;
    case 11u: goto L_0882B188;
    case 12u: goto L_0882B1AC;
    case 13u: goto L_0882B1B4;
    case 14u: goto L_0882B1FC;
    case 15u: goto L_0882B214;
    case 16u: goto L_0882B224;
    case 17u: goto L_0882B22C;
    case 18u: goto L_0882B238;
    case 19u: goto L_0882B248;
    case 20u: goto L_0882B2E4;
    case 21u: goto L_0882B338;
    case 22u: goto L_0882B360;
    case 23u: goto L_0882B368;
    case 24u: goto L_0882B3B0;
    case 25u: goto L_0882B3C8;
    case 26u: goto L_0882B3D8;
    case 27u: goto L_0882B3E0;
    case 28u: goto L_0882B3F0;
    case 29u: goto L_0882B400;
    case 30u: goto L_0882B40C;
    case 31u: goto L_0882B424;
    case 32u: goto L_0882B5A8;
    case 33u: goto L_0882B5FC;
    case 34u: goto L_0882B624;
    case 35u: goto L_0882B62C;
    case 36u: goto L_0882B680;
    case 37u: goto L_0882B6A4;
    case 38u: goto L_0882B6AC;
    case 39u: goto L_0882B700;
    case 40u: goto L_0882B724;
    case 41u: goto L_0882B72C;
    case 42u: goto L_0882B774;
    case 43u: goto L_0882B78C;
    case 44u: goto L_0882B79C;
    case 45u: goto L_0882B7A0;
    case 46u: goto L_0882B7B0;
    case 47u: goto L_0882B888;
    case 48u: goto L_0882B894;
    case 49u: goto L_0882B8A0;
    case 50u: goto L_0882B8A8;
    case 51u: goto L_0882B8EC;
    case 52u: goto L_0882B934;
    case 53u: goto L_0882B954;
    case 54u: goto L_0882B9AC;
    case 55u: goto L_0882B9BC;
    case 56u: goto L_0882B9C4;
    case 57u: goto L_0882B9C8;
    case 58u: goto L_0882BA50;
    case 59u: goto L_0882BA74;
    case 60u: goto L_0882BA80;
    case 61u: goto L_0882BA88;
    case 62u: goto L_0882BA90;
    case 63u: goto L_0882BB00;
    case 64u: goto L_0882BB2C;
    case 65u: goto L_0882BB38;
    case 66u: goto L_0882BB40;
    case 67u: goto L_0882BB44;
    case 68u: goto L_0882BB54;
    case 69u: goto L_0882BB5C;
    case 70u: goto L_0882BB8C;
    case 71u: goto L_0882BBA4;
    case 72u: goto L_0882BBB8;
    case 73u: goto L_0882BBD4;
    case 74u: goto L_0882BBDC;
    case 75u: goto L_0882BBE8;
    case 76u: goto L_0882BC04;
    case 77u: goto L_0882BC18;
    case 78u: goto L_0882BC28;
    case 79u: goto L_0882BC40;
    case 80u: goto L_0882BCA8;
    case 81u: goto L_0882BCB4;
    case 82u: goto L_0882BCC4;
    case 83u: goto L_0882BCD0;
    case 84u: goto L_0882BCE0;
    case 85u: goto L_0882BCF0;
    case 86u: goto L_0882BCF8;
    case 87u: goto L_0882BD04;
    case 88u: goto L_0882BD14;
    case 89u: goto L_0882BD20;
    case 90u: goto L_0882BD30;
    case 91u: goto L_0882BD3C;
    case 92u: goto L_0882BD54;
    case 93u: goto L_0882BD5C;
    case 94u: goto L_0882BD68;
    case 95u: goto L_0882BD80;
    case 96u: goto L_0882BD88;
    case 97u: goto L_0882BD94;
    case 98u: goto L_0882BDAC;
    case 99u: goto L_0882BDB4;
    case 100u: goto L_0882BDC0;
    case 101u: goto L_0882BDD8;
    case 102u: goto L_0882BE0C;
    case 103u: goto L_0882BE2C;
    case 104u: goto L_0882BE44;
    case 105u: goto L_0882BE64;
    case 106u: goto L_0882BE74;
    case 107u: goto L_0882BE7C;
    case 108u: goto L_0882BE80;
    case 109u: goto L_0882BE88;
    case 110u: goto L_0882BEAC;
    case 111u: goto L_0882BEE0;
    case 112u: goto L_0882BF00;
    case 113u: goto L_0882BF1C;
    case 114u: goto L_0882BF3C;
    case 115u: goto L_0882BF48;
    case 116u: goto L_0882BF64;
    case 117u: goto L_0882BF8C;
    case 118u: goto L_0882BF94;
    case 119u: goto L_0882BF9C;
    case 120u: goto L_0882BFA8;
    case 121u: goto L_0882BFB0;
    case 122u: goto L_0882BFCC;
    case 123u: goto L_0882BFE4;
    case 124u: goto L_0882BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882B000:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0882B02C;
      }
      goto L_0882B008;
    }
L_0882B008:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0882B02C;
L_0882B02C:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
        goto L_0882B088;
    }
    goto L_0882B034;
L_0882B034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0882B0AC;
      }
      goto L_0882B088;
    }
L_0882B088:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(112));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0882B0AC;
L_0882B0AC:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
        goto L_0882B108;
    }
    goto L_0882B0B4;
L_0882B0B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0882B12C;
      }
      goto L_0882B108;
    }
L_0882B108:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(128));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0882B12C;
L_0882B12C:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
        goto L_0882B188;
    }
    goto L_0882B134;
L_0882B134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0882B1AC;
      }
      goto L_0882B188;
    }
L_0882B188:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0882B1AC;
L_0882B1AC:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
        goto L_0882B1FC;
    }
    goto L_0882B1B4;
L_0882B1B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0882B214;
      }
      goto L_0882B1FC;
    }
L_0882B1FC:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0882B214;
L_0882B214:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882B224u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 43u, 0x0892F434u>(ctx, &aot_mem) && ctx.pc == 0x0882B224u) goto L_0882B224;
    return;
L_0882B224:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(23084)));
      if (branch_taken) {
          goto L_0882B7A0;
      }
      goto L_0882B22C;
    }
L_0882B22C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B3E0;
      }
      goto L_0882B238;
    }
L_0882B238:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0882B248u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x0882B248u) goto L_0882B248;
    return;
L_0882B248:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[24];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[22];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[15] + aot_fpr[24];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr[13] = aot_fpr[16] + aot_fpr[22];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882B338;
      }
      goto L_0882B2E4;
    }
L_0882B2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0882B360;
      }
      goto L_0882B338;
    }
L_0882B338:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    goto L_0882B360;
L_0882B360:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
        goto L_0882B3B0;
    }
    goto L_0882B368;
L_0882B368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0882B3C8;
      }
      goto L_0882B3B0;
    }
L_0882B3B0:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_0882B3C8;
L_0882B3C8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882B3D8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x0882B3D8u) goto L_0882B3D8;
    return;
L_0882B3D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(23084)));
      if (branch_taken) {
          goto L_0882B7A0;
      }
      goto L_0882B3E0;
    }
L_0882B3E0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0882B3F0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 214u, 0x08A4BF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B3F0u) goto L_0882B3F0;
    return;
L_0882B3F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (aot_gpr[4] == 0u) {
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_0882B400;
    }
    goto L_0882B400;
L_0882B400:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x0882B40Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0882B40Cu) goto L_0882B40C;
    return;
L_0882B40C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0882B424u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0882B424u) goto L_0882B424;
    return;
L_0882B424:
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) ^ 0x80000000u);
    aot_fpr[19] = aot_fpr[16] - aot_fpr[18];
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[2] = aot_fpr[17] - aot_fpr[13];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[1]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[18] = aot_fpr[12] - aot_fpr[18];
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[17] = aot_fpr[13] + aot_fpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[3] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[3]));
    aot_fpr[16] = aot_fpr[16] - aot_fpr[15];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[18];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[17];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[1]));
    aot_fpr[4] = aot_fpr[14] - aot_fpr[13];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[19] = aot_fpr[19] + aot_fpr[16];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[17] + aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[13] = aot_fpr[18] + aot_fpr[13];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_0882B5FC;
      }
      goto L_0882B5A8;
    }
L_0882B5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0882B624;
      }
      goto L_0882B5FC;
    }
L_0882B5FC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    goto L_0882B624;
L_0882B624:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
        goto L_0882B680;
    }
    goto L_0882B62C;
L_0882B62C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0882B6A4;
      }
      goto L_0882B680;
    }
L_0882B680:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    goto L_0882B6A4;
L_0882B6A4:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
        goto L_0882B700;
    }
    goto L_0882B6AC;
L_0882B6AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0882B724;
      }
      goto L_0882B700;
    }
L_0882B700:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    goto L_0882B724;
L_0882B724:
    if (aot_gpr[16] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
        goto L_0882B774;
    }
    goto L_0882B72C;
L_0882B72C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_0882B78C;
      }
      goto L_0882B774;
    }
L_0882B774:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0882B78C;
L_0882B78C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882B79Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 27u, 0x0892F26Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B79Cu) goto L_0882B79C;
    return;
L_0882B79C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(23084)));
    goto L_0882B7A0;
L_0882B7A0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 47u, 0x0882A82Cu>(ctx, &aot_mem); return;
      }
      goto L_0882B7B0;
    }
L_0882B7B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0882B888;
L_0882B888:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
        goto L_0882B8A8;
    }
    goto L_0882B894;
L_0882B894:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x0882B8A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0882B8A0u) goto L_0882B8A0;
    return;
L_0882B8A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    goto L_0882B8A8;
L_0882B8A8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[8] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882B8ECu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882B8ECu) goto L_0882B8EC;
    return;
L_0882B8EC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B934:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23056), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B954:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882B9ACu);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882B9ACu) goto L_0882B9AC;
    return;
L_0882B9AC:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(23124));
      if (branch_taken) {
          goto L_0882B9C8;
      }
      goto L_0882B9BC;
    }
L_0882B9BC:
    aot_gpr[31] = (0x0882B9C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0882B9C4u) goto L_0882B9C4;
    return;
L_0882B9C4:
    aot_gpr[30] = (aot_gpr[17] | 0u);
    goto L_0882B9C8;
L_0882B9C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (65505u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23116), aot_gpr[30]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7968));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[30] = (65280u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[6] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[23] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (0u | 10u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-30480)));
    goto L_0882BA50;
L_0882BA50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882BA74u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882BA74u) goto L_0882BA74;
    return;
L_0882BA74:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (aot_gpr[17] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_0882BA90;
    }
    goto L_0882BA80;
L_0882BA80:
    aot_gpr[31] = (0x0882BA88u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0882BA88u) goto L_0882BA88;
    return;
L_0882BA88:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_0882BA90;
L_0882BA90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (65505u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7968));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_0882BA50;
      }
      goto L_0882BB00;
    }
L_0882BB00:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(23120), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882BB2Cu);
    aot_gpr[6] = (0u | 288u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882BB2Cu) goto L_0882BB2C;
    return;
L_0882BB2C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BB44;
      }
      goto L_0882BB38;
    }
L_0882BB38:
    aot_gpr[31] = (0x0882BB40u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 113u, 0x08828EE0u>(ctx, &aot_mem) && ctx.pc == 0x0882BB40u) goto L_0882BB40;
    return;
L_0882BB40:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    goto L_0882BB44;
L_0882BB44:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23120), aot_gpr[16]);
    aot_gpr[31] = (0x0882BB54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 124u, 0x08828FD8u>(ctx, &aot_mem) && ctx.pc == 0x0882BB54u) goto L_0882BB54;
    return;
L_0882BB54:
    aot_gpr[31] = (0x0882BB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 56u, 0x0882961Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BB5Cu) goto L_0882BB5C;
    return;
L_0882BB5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BB8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0882BBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 82u, 0x08829ABCu>(ctx, &aot_mem) && ctx.pc == 0x0882BBA4u) goto L_0882BBA4;
    return;
L_0882BBA4:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23116)));
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(23124));
      if (branch_taken) {
          goto L_0882BBD4;
      }
      goto L_0882BBB8;
    }
L_0882BBB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0882BBD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882BBD4u) goto L_0882BBD4;
    return;
L_0882BBD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(23116), 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_0882BBDC;
L_0882BBDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BC04;
      }
      goto L_0882BBE8;
    }
L_0882BBE8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0882BC04u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882BC04u) goto L_0882BC04;
    return;
L_0882BC04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882BBDC;
      }
      goto L_0882BC18;
    }
L_0882BC18:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23120)));
    aot_gpr[31] = (0x0882BC28u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 117u, 0x08828F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BC28u) goto L_0882BC28;
    return;
L_0882BC28:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23120), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BC40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (0u | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 4000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 4001u);
    aot_gpr[7] = (16403u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    aot_gpr[4] = (0u | 4002u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[7] = (17008u << 16u);
    aot_gpr[4] = (0u | 4003u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[7] = (17136u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0882BCA8u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 103u, 0x08882994u>(ctx, &aot_mem) && ctx.pc == 0x0882BCA8u) goto L_0882BCA8;
    return;
L_0882BCA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BCB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882BCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x08882D20u>(ctx, &aot_mem) && ctx.pc == 0x0882BCC4u) goto L_0882BCC4;
    return;
L_0882BCC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BCD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882BCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0882BCE0u) goto L_0882BCE0;
    return;
L_0882BCE0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23120)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BCF8;
      }
      goto L_0882BCF0;
    }
L_0882BCF0:
    aot_gpr[31] = (0x0882BCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 112u, 0x08828EB4u>(ctx, &aot_mem) && ctx.pc == 0x0882BCF8u) goto L_0882BCF8;
    return;
L_0882BCF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BD04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882BD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 148u, 0x08882E28u>(ctx, &aot_mem) && ctx.pc == 0x0882BD14u) goto L_0882BD14;
    return;
L_0882BD14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BD20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882BD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 158u, 0x08882F10u>(ctx, &aot_mem) && ctx.pc == 0x0882BD30u) goto L_0882BD30;
    return;
L_0882BD30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BD3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD5C;
      }
      goto L_0882BD54;
    }
L_0882BD54:
    aot_gpr[31] = (0x0882BD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 37u, 0x0882940Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BD5Cu) goto L_0882BD5C;
    return;
L_0882BD5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BD68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD88;
      }
      goto L_0882BD80;
    }
L_0882BD80:
    aot_gpr[31] = (0x0882BD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 43u, 0x08829468u>(ctx, &aot_mem) && ctx.pc == 0x0882BD88u) goto L_0882BD88;
    return;
L_0882BD88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BD94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BDB4;
      }
      goto L_0882BDAC;
    }
L_0882BDAC:
    aot_gpr[31] = (0x0882BDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 4u, 0x08829060u>(ctx, &aot_mem) && ctx.pc == 0x0882BDB4u) goto L_0882BDB4;
    return;
L_0882BDB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BDC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882BDD8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0882BDD8u) goto L_0882BDD8;
    return;
L_0882BDD8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[6] = (0u | 128u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BE0C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28760)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BE2C:
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-13040)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882BE80;
      }
      goto L_0882BE44;
    }
L_0882BE44:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0882BE74;
      }
      goto L_0882BE64;
    }
L_0882BE64:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0882BE7C;
      }
      goto L_0882BE74;
    }
L_0882BE74:
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0882BE7C;
L_0882BE7C:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_0882BE80;
L_0882BE80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(23124));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882BEACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0882BEACu) goto L_0882BEAC;
    return;
L_0882BEAC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[6] = (0u | 128u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BEE0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28760)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BF00:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(23124));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BF1C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BF3C:
    aot_gpr[4] = (2218u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2860), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BF48:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2864), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-2860), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BF64:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2864)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2860)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-2864), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0882BF9C;
      }
      goto L_0882BF8C;
    }
L_0882BF8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 5u, 0x0882C038u>(ctx, &aot_mem); return;
      }
      goto L_0882BF94;
    }
L_0882BF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BFB0;
      }
      goto L_0882BF9C;
    }
L_0882BF9C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 1u, 0x0882C000u>(ctx, &aot_mem); return;
      }
      goto L_0882BFA8;
    }
L_0882BFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 5u, 0x0882C038u>(ctx, &aot_mem); return;
      }
      goto L_0882BFB0;
    }
L_0882BFB0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2864)));
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-13032)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882BFE4;
      }
      goto L_0882BFCC;
    }
L_0882BFCC:
    aot_gpr[7] = (0u | 2u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2860), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2856), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-2864), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0882BFF8;
      }
      goto L_0882BFE4;
    }
L_0882BFE4:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2856), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0882BFF8;
L_0882BFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 5u, 0x0882C038u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 1u, 0x0882C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0039(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0039_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_39(Runtime &runtime) {
    runtime.register_generated_unit(39u, 0x0882B000u, 4096u, &recomp_unit_0039, &recomp_unit_0039_entry);
    runtime.register_function(0x0882B000u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B008u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B02Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B034u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B088u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B0ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B0B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B108u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B12Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B134u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B188u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B1ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B1B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B1FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B214u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B224u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B22Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B238u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B248u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B2E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B338u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B360u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B368u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B3B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B3C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B3D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B3E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B3F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B400u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B40Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B424u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B5A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B5FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B624u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B62Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B680u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B6A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B6ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B700u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B724u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B72Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B774u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B78Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B79Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B7A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B7B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B888u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B894u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B8A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B8A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B8ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B934u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B954u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B9ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B9BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B9C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882B9C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BA50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BA74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BA80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BA88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BA90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BB8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BBA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BBB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BBD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BBDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BBE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BC04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BC18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BC28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BC40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCC4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BCF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BD94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BDACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BDB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BDC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BDD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BE88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BEACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BEE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BF9Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BFA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BFB0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BFCCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BFE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x0882BFF8u, &recomp_unit_0039, "recomp_unit_0039");
}
} // namespace psprecomp
