#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0166[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 75, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 86, 0, 0, 87, 0,
    88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107,
    108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114,
};
void recomp_unit_0166_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088AA000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0166[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AA000;
    case 2u: goto L_088AA020;
    case 3u: goto L_088AA028;
    case 4u: goto L_088AA03C;
    case 5u: goto L_088AA068;
    case 6u: goto L_088AA078;
    case 7u: goto L_088AA0A8;
    case 8u: goto L_088AA0F4;
    case 9u: goto L_088AA10C;
    case 10u: goto L_088AA144;
    case 11u: goto L_088AA190;
    case 12u: goto L_088AA1A8;
    case 13u: goto L_088AA1F8;
    case 14u: goto L_088AA244;
    case 15u: goto L_088AA25C;
    case 16u: goto L_088AA2B4;
    case 17u: goto L_088AA300;
    case 18u: goto L_088AA318;
    case 19u: goto L_088AA348;
    case 20u: goto L_088AA354;
    case 21u: goto L_088AA3D0;
    case 22u: goto L_088AA4C0;
    case 23u: goto L_088AA4C8;
    case 24u: goto L_088AA514;
    case 25u: goto L_088AA528;
    case 26u: goto L_088AA550;
    case 27u: goto L_088AA59C;
    case 28u: goto L_088AA5B4;
    case 29u: goto L_088AA5E4;
    case 30u: goto L_088AA630;
    case 31u: goto L_088AA648;
    case 32u: goto L_088AA670;
    case 33u: goto L_088AA6BC;
    case 34u: goto L_088AA6D4;
    case 35u: goto L_088AA6EC;
    case 36u: goto L_088AA718;
    case 37u: goto L_088AA764;
    case 38u: goto L_088AA77C;
    case 39u: goto L_088AA7D4;
    case 40u: goto L_088AA820;
    case 41u: goto L_088AA838;
    case 42u: goto L_088AA88C;
    case 43u: goto L_088AA8D8;
    case 44u: goto L_088AA8F0;
    case 45u: goto L_088AA93C;
    case 46u: goto L_088AA988;
    case 47u: goto L_088AA9A0;
    case 48u: goto L_088AA9D8;
    case 49u: goto L_088AA9EC;
    case 50u: goto L_088AA9F8;
    case 51u: goto L_088AAA58;
    case 52u: goto L_088AAA64;
    case 53u: goto L_088AAA7C;
    case 54u: goto L_088AAAA8;
    case 55u: goto L_088AAAB8;
    case 56u: goto L_088AAB14;
    case 57u: goto L_088AAB2C;
    case 58u: goto L_088AAB3C;
    case 59u: goto L_088AAB50;
    case 60u: goto L_088AAB64;
    case 61u: goto L_088AAB78;
    case 62u: goto L_088AAB9C;
    case 63u: goto L_088AABA4;
    case 64u: goto L_088AABB4;
    case 65u: goto L_088AABC8;
    case 66u: goto L_088AABD8;
    case 67u: goto L_088AABE0;
    case 68u: goto L_088AAC04;
    case 69u: goto L_088AAC14;
    case 70u: goto L_088AAC1C;
    case 71u: goto L_088AAC28;
    case 72u: goto L_088AAC30;
    case 73u: goto L_088AAC68;
    case 74u: goto L_088AAC98;
    case 75u: goto L_088AACA0;
    case 76u: goto L_088AACA4;
    case 77u: goto L_088AACAC;
    case 78u: goto L_088AACD0;
    case 79u: goto L_088AAD28;
    case 80u: goto L_088AAD38;
    case 81u: goto L_088AAD78;
    case 82u: goto L_088AAD9C;
    case 83u: goto L_088AADAC;
    case 84u: goto L_088AADB8;
    case 85u: goto L_088AADE8;
    case 86u: goto L_088AADEC;
    case 87u: goto L_088AADF8;
    case 88u: goto L_088AAE00;
    case 89u: goto L_088AAE10;
    case 90u: goto L_088AAE18;
    case 91u: goto L_088AAE20;
    case 92u: goto L_088AAE2C;
    case 93u: goto L_088AAE38;
    case 94u: goto L_088AAE48;
    case 95u: goto L_088AAE5C;
    case 96u: goto L_088AAEA0;
    case 97u: goto L_088AAEC4;
    case 98u: goto L_088AAED0;
    case 99u: goto L_088AAED8;
    case 100u: goto L_088AAEF4;
    case 101u: goto L_088AAF08;
    case 102u: goto L_088AAF1C;
    case 103u: goto L_088AAF38;
    case 104u: goto L_088AAF40;
    case 105u: goto L_088AAF68;
    case 106u: goto L_088AAF74;
    case 107u: goto L_088AAF7C;
    case 108u: goto L_088AAF80;
    case 109u: goto L_088AAF90;
    case 110u: goto L_088AAFA0;
    case 111u: goto L_088AAFAC;
    case 112u: goto L_088AAFB0;
    case 113u: goto L_088AAFD8;
    case 114u: goto L_088AAFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AA000:
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45))))));
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088AA020u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088AA020u) goto L_088AA020;
    return;
L_088AA020:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088AA028;
L_088AA028:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] << 24u);
    goto L_088AA03C;
L_088AA03C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] << 24u);
      if (branch_taken) {
          goto L_088AA03C;
      }
      goto L_088AA068;
    }
L_088AA068:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA078:
    aot_gpr[9] = (aot_gpr[5] << 2u);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088AA0F4;
      }
      goto L_088AA0A8;
    }
L_088AA0A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[2] = (16128u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[2]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_088AA10C;
      }
      goto L_088AA0F4;
    }
L_088AA0F4:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[11]));
    goto L_088AA10C;
L_088AA10C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
      if (branch_taken) {
          goto L_088AA190;
      }
      goto L_088AA144;
    }
L_088AA144:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[2] = (16128u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[2]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_088AA1A8;
      }
      goto L_088AA190;
    }
L_088AA190:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[11]));
    goto L_088AA1A8;
L_088AA1A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
      if (branch_taken) {
          goto L_088AA244;
      }
      goto L_088AA1F8;
    }
L_088AA1F8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[11] = (16128u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[11]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[10]));
      if (branch_taken) {
          goto L_088AA25C;
      }
      goto L_088AA244;
    }
L_088AA244:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[10]));
    goto L_088AA25C;
L_088AA25C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
      if (branch_taken) {
          goto L_088AA300;
      }
      goto L_088AA2B4;
    }
L_088AA2B4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[10] = (16128u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[10]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(26)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_088AA318;
      }
      goto L_088AA300;
    }
L_088AA300:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[9]));
    goto L_088AA318;
L_088AA318:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA348:
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088AA3D0;
      }
      goto L_088AA354;
    }
L_088AA354:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[16] = aot_fpr[12] + aot_fpr[16];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[17];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA4C0;
      }
      goto L_088AA3D0;
    }
L_088AA3D0:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (16128u << 16u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[9]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[17] = aot_fpr[13] - aot_fpr[17];
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[17] = aot_fpr[13] - aot_fpr[17];
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[17] = aot_fpr[13] + aot_fpr[17];
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_088AA4C0;
L_088AA4C0:
    if (aot_gpr[5] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
        goto L_088AA514;
    }
    goto L_088AA4C8;
L_088AA4C8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[9] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_088AA528;
      }
      goto L_088AA514;
    }
L_088AA514:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[9]));
    goto L_088AA528;
L_088AA528:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA59C;
      }
      goto L_088AA550;
    }
L_088AA550:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[9] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_088AA5B4;
      }
      goto L_088AA59C;
    }
L_088AA59C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[9]));
    goto L_088AA5B4;
L_088AA5B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[13] = aot_fpr[14] + aot_fpr[15];
      if (branch_taken) {
          goto L_088AA630;
      }
      goto L_088AA5E4;
    }
L_088AA5E4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[9] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_088AA648;
      }
      goto L_088AA630;
    }
L_088AA630:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[9]));
    goto L_088AA648;
L_088AA648:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
      if (branch_taken) {
          goto L_088AA6BC;
      }
      goto L_088AA670;
    }
L_088AA670:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[7] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088AA6D4;
      }
      goto L_088AA6BC;
    }
L_088AA6BC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088AA6D4;
L_088AA6D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA6EC:
    aot_gpr[9] = (aot_gpr[5] << 2u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088AA764;
      }
      goto L_088AA718;
    }
L_088AA718:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[3] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[3]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_088AA77C;
      }
      goto L_088AA764;
    }
L_088AA764:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_088AA77C;
L_088AA77C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[11] | 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA820;
      }
      goto L_088AA7D4;
    }
L_088AA7D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[3] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[3]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_088AA838;
      }
      goto L_088AA820;
    }
L_088AA820:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_088AA838;
L_088AA838:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA8D8;
      }
      goto L_088AA88C;
    }
L_088AA88C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[2] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[2]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_088AA8F0;
      }
      goto L_088AA8D8;
    }
L_088AA8D8:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[11]));
    goto L_088AA8F0;
L_088AA8F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA988;
      }
      goto L_088AA93C;
    }
L_088AA93C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088AA9A0;
      }
      goto L_088AA988;
    }
L_088AA988:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088AA9A0;
L_088AA9A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA9D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088AA9ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 67u, 0x0892F6E8u>(ctx, &aot_mem) && ctx.pc == 0x088AA9ECu) goto L_088AA9EC;
    return;
L_088AA9EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA9F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[10] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[10] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088AAA58u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088AAA58u) goto L_088AAA58;
    return;
L_088AAA58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAA64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAA7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088AAAA8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x088AAAA8u) goto L_088AAAA8;
    return;
L_088AAAA8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AAAB8u);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    goto L_088AAA64;
L_088AAAB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[3] << 4u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(14))))));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[9] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088AAB14u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088AA078;
L_088AAB14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088AAB2Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088AAB2Cu) goto L_088AAB2C;
    return;
L_088AAB2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AAB3Cu);
    aot_gpr[6] = (0u | 1u);
    goto L_088AA9D8;
L_088AAB3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAB50:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(112))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_088AAC14;
      }
      goto L_088AAB64;
    }
L_088AAB64:
    aot_gpr[9] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(27280));
    aot_gpr[8] = (32768u << 16u);
    aot_gpr[7] = (65280u << 16u);
    goto L_088AAB78;
L_088AAB78:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(108))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(110))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[12] = (aot_gpr[11] << 2u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (aot_gpr[12] + aot_gpr[3]);
      if (branch_taken) {
          goto L_088AABE0;
      }
      goto L_088AAB9C;
    }
L_088AAB9C:
    aot_gpr[3] = (aot_gpr[11] + static_cast<std::uint32_t>(8));
    aot_gpr[11] = (0u | 0u);
    goto L_088AABA4;
L_088AABA4:
    aot_gpr[12] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_088AABC8;
      }
      goto L_088AABB4;
    }
L_088AABB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    goto L_088AABC8;
L_088AABC8:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[11] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AABA4;
      }
      goto L_088AABD8;
    }
L_088AABD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(112))))));
      if (branch_taken) {
          goto L_088AAC04;
      }
      goto L_088AABE0;
    }
L_088AABE0:
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[10] << 3u);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(112))))));
    goto L_088AAC04;
L_088AAC04:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AAB78;
      }
      goto L_088AAC14;
    }
L_088AAC14:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAC28;
      }
      goto L_088AAC1C;
    }
L_088AAC1C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(110))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088AAC28;
L_088AAC28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAC30:
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[7] | 8u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(115))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u - aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(aot_gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAC68:
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088AACA0;
      }
      goto L_088AAC98;
    }
L_088AAC98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | 256u);
      if (branch_taken) {
          goto L_088AACA4;
      }
      goto L_088AACA0;
    }
L_088AACA0:
    aot_gpr[5] = (aot_gpr[5] | 64u);
    goto L_088AACA4;
L_088AACA4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AACAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(38))))));
    aot_gpr[6] = (aot_gpr[6] | 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(40))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AACD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4720));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[31]);
    aot_gpr[31] = (0x088AAD28u);
    aot_gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAD28u) goto L_088AAD28;
    return;
L_088AAD28:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AAD38u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 79u, 0x088AF6ECu>(ctx, &aot_mem) && ctx.pc == 0x088AAD38u) goto L_088AAD38;
    return;
L_088AAD38:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 17u, 0x088AB220u>(ctx, &aot_mem); return;
      }
      goto L_088AAD78;
    }
L_088AAD78:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088AAF08;
      }
      goto L_088AAD9C;
    }
L_088AAD9C:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[29] | 0u);
    aot_gpr[20] = (2218u << 16u);
    goto L_088AADAC;
L_088AADAC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAEF4;
      }
      goto L_088AADB8;
    }
L_088AADB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088AAE10;
      }
      goto L_088AADE8;
    }
L_088AADE8:
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_088AADEC;
L_088AADEC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AAE00;
      }
      goto L_088AADF8;
    }
L_088AADF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088AAE10;
      }
      goto L_088AAE00;
    }
L_088AAE00:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AADEC;
      }
      goto L_088AAE10;
    }
L_088AAE10:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAEF4;
      }
      goto L_088AAE18;
    }
L_088AAE18:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAEF4;
      }
      goto L_088AAE20;
    }
L_088AAE20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[31] = (0x088AAE2Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088AAE2Cu) goto L_088AAE2C;
    return;
L_088AAE2C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAED8;
      }
      goto L_088AAE38;
    }
L_088AAE38:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x088AAE48u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088AAE48u) goto L_088AAE48;
    return;
L_088AAE48:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088AAE5Cu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAE5Cu) goto L_088AAE5C;
    return;
L_088AAE5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    aot_gpr[6] = (20563u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20575));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088AAEA0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AAEA0u) goto L_088AAEA0;
    return;
L_088AAEA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088AAEC4u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AAEC4u) goto L_088AAEC4;
    return;
L_088AAEC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (0x088AAED0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088AAED0u) goto L_088AAED0;
    return;
L_088AAED0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    goto L_088AAED8;
L_088AAED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[17] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    goto L_088AAEF4;
L_088AAEF4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088AADAC;
      }
      goto L_088AAF08;
    }
L_088AAF08:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(46))))));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088AAF1Cu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088AAF1Cu) goto L_088AAF1C;
    return;
L_088AAF1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(46))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088AAFD8;
      }
      goto L_088AAF38;
    }
L_088AAF38:
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[22] = (2216u << 16u);
    goto L_088AAF40;
L_088AAF40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088AAF68u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AAF68u) goto L_088AAF68;
    return;
L_088AAF68:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAF80;
      }
      goto L_088AAF74;
    }
L_088AAF74:
    aot_gpr[31] = (0x088AAF7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x088AAF7Cu) goto L_088AAF7C;
    return;
L_088AAF7C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088AAF80;
L_088AAF80:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088AAFB0;
    }
    goto L_088AAF90;
L_088AAF90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_088AAFAC;
      }
      goto L_088AAFA0;
    }
L_088AAFA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_088AAFAC;
L_088AAFAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088AAFB0;
L_088AAFB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(46))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AAF40;
      }
      goto L_088AAFD8;
    }
L_088AAFD8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[31] = (0x088AAFF8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088AAFF8u) goto L_088AAFF8;
    return;
L_088AAFF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    ctx.pc = 0x088AB000u; return;
}

void recomp_unit_0166(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0166_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_166(Runtime &runtime) {
    runtime.register_generated_unit(166u, 0x088AA000u, 4096u, &recomp_unit_0166, &recomp_unit_0166_entry);
    runtime.register_function(0x088AA000u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA020u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA028u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA03Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA068u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA078u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA0A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA0F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA10Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA144u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA190u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA1A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA1F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA244u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA25Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA2B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA300u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA318u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA348u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA354u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA3D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA4C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA4C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA514u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA550u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA59Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA5B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA5E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA630u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA648u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA670u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA6BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA6D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA6ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA718u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA764u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA7D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA820u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA838u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA88Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA8D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA8F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA93Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA988u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA9A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA9ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AA9F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAA58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAA64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAA7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAAA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAAB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAB9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AABA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AABB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AABC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AABD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AABE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAC98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AACA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AACA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AACACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AACD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAD28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAD38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAD78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAD9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AADACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AADB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AADE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AADECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AADF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAE5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAEA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAEC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAED0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAED8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAEF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAF90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAFA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAFACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAFB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAFD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x088AAFF8u, &recomp_unit_0166, "recomp_unit_0166");
}
} // namespace psprecomp
