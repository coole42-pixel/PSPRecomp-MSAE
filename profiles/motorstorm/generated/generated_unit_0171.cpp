#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0171[1014] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16,
    0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 40, 41, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 90, 0, 91, 0, 0, 92, 93, 0, 94, 0, 0, 95, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0,
    0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 142, 143, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169,
};
void recomp_unit_0171_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088AF000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0171[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AF000;
    case 2u: goto L_088AF010;
    case 3u: goto L_088AF034;
    case 4u: goto L_088AF054;
    case 5u: goto L_088AF06C;
    case 6u: goto L_088AF090;
    case 7u: goto L_088AF0BC;
    case 8u: goto L_088AF0E0;
    case 9u: goto L_088AF0F8;
    case 10u: goto L_088AF10C;
    case 11u: goto L_088AF124;
    case 12u: goto L_088AF134;
    case 13u: goto L_088AF144;
    case 14u: goto L_088AF150;
    case 15u: goto L_088AF174;
    case 16u: goto L_088AF17C;
    case 17u: goto L_088AF188;
    case 18u: goto L_088AF194;
    case 19u: goto L_088AF1B8;
    case 20u: goto L_088AF1D4;
    case 21u: goto L_088AF1F8;
    case 22u: goto L_088AF218;
    case 23u: goto L_088AF230;
    case 24u: goto L_088AF254;
    case 25u: goto L_088AF270;
    case 26u: goto L_088AF288;
    case 27u: goto L_088AF294;
    case 28u: goto L_088AF2B4;
    case 29u: goto L_088AF2C8;
    case 30u: goto L_088AF2DC;
    case 31u: goto L_088AF2E4;
    case 32u: goto L_088AF2F4;
    case 33u: goto L_088AF310;
    case 34u: goto L_088AF328;
    case 35u: goto L_088AF334;
    case 36u: goto L_088AF34C;
    case 37u: goto L_088AF350;
    case 38u: goto L_088AF360;
    case 39u: goto L_088AF390;
    case 40u: goto L_088AF39C;
    case 41u: goto L_088AF3A0;
    case 42u: goto L_088AF3A4;
    case 43u: goto L_088AF3AC;
    case 44u: goto L_088AF3C8;
    case 45u: goto L_088AF3D4;
    case 46u: goto L_088AF3F8;
    case 47u: goto L_088AF404;
    case 48u: goto L_088AF414;
    case 49u: goto L_088AF420;
    case 50u: goto L_088AF42C;
    case 51u: goto L_088AF440;
    case 52u: goto L_088AF478;
    case 53u: goto L_088AF488;
    case 54u: goto L_088AF490;
    case 55u: goto L_088AF4A4;
    case 56u: goto L_088AF4B0;
    case 57u: goto L_088AF4E0;
    case 58u: goto L_088AF4F8;
    case 59u: goto L_088AF50C;
    case 60u: goto L_088AF520;
    case 61u: goto L_088AF528;
    case 62u: goto L_088AF53C;
    case 63u: goto L_088AF548;
    case 64u: goto L_088AF578;
    case 65u: goto L_088AF5A0;
    case 66u: goto L_088AF5B4;
    case 67u: goto L_088AF5D4;
    case 68u: goto L_088AF5F4;
    case 69u: goto L_088AF634;
    case 70u: goto L_088AF63C;
    case 71u: goto L_088AF640;
    case 72u: goto L_088AF648;
    case 73u: goto L_088AF654;
    case 74u: goto L_088AF66C;
    case 75u: goto L_088AF678;
    case 76u: goto L_088AF68C;
    case 77u: goto L_088AF690;
    case 78u: goto L_088AF6C4;
    case 79u: goto L_088AF6EC;
    case 80u: goto L_088AF704;
    case 81u: goto L_088AF710;
    case 82u: goto L_088AF740;
    case 83u: goto L_088AF748;
    case 84u: goto L_088AF750;
    case 85u: goto L_088AF754;
    case 86u: goto L_088AF75C;
    case 87u: goto L_088AF77C;
    case 88u: goto L_088AF79C;
    case 89u: goto L_088AF7A4;
    case 90u: goto L_088AF7A8;
    case 91u: goto L_088AF7B0;
    case 92u: goto L_088AF7BC;
    case 93u: goto L_088AF7C0;
    case 94u: goto L_088AF7C8;
    case 95u: goto L_088AF7D4;
    case 96u: goto L_088AF7D8;
    case 97u: goto L_088AF7E8;
    case 98u: goto L_088AF808;
    case 99u: goto L_088AF820;
    case 100u: goto L_088AF840;
    case 101u: goto L_088AF85C;
    case 102u: goto L_088AF874;
    case 103u: goto L_088AF880;
    case 104u: goto L_088AF8A0;
    case 105u: goto L_088AF8B4;
    case 106u: goto L_088AF8C8;
    case 107u: goto L_088AF8E0;
    case 108u: goto L_088AF8EC;
    case 109u: goto L_088AF8FC;
    case 110u: goto L_088AF900;
    case 111u: goto L_088AF910;
    case 112u: goto L_088AF930;
    case 113u: goto L_088AF994;
    case 114u: goto L_088AF9A8;
    case 115u: goto L_088AF9CC;
    case 116u: goto L_088AF9E4;
    case 117u: goto L_088AF9F8;
    case 118u: goto L_088AFA14;
    case 119u: goto L_088AFA28;
    case 120u: goto L_088AFA54;
    case 121u: goto L_088AFA64;
    case 122u: goto L_088AFA84;
    case 123u: goto L_088AFAB8;
    case 124u: goto L_088AFB70;
    case 125u: goto L_088AFB84;
    case 126u: goto L_088AFB90;
    case 127u: goto L_088AFB9C;
    case 128u: goto L_088AFBAC;
    case 129u: goto L_088AFBB8;
    case 130u: goto L_088AFBC4;
    case 131u: goto L_088AFBDC;
    case 132u: goto L_088AFC00;
    case 133u: goto L_088AFC1C;
    case 134u: goto L_088AFC34;
    case 135u: goto L_088AFC40;
    case 136u: goto L_088AFC60;
    case 137u: goto L_088AFC74;
    case 138u: goto L_088AFC84;
    case 139u: goto L_088AFC90;
    case 140u: goto L_088AFCD0;
    case 141u: goto L_088AFCDC;
    case 142u: goto L_088AFCE0;
    case 143u: goto L_088AFCE4;
    case 144u: goto L_088AFCEC;
    case 145u: goto L_088AFD18;
    case 146u: goto L_088AFD58;
    case 147u: goto L_088AFD60;
    case 148u: goto L_088AFD8C;
    case 149u: goto L_088AFD9C;
    case 150u: goto L_088AFDD8;
    case 151u: goto L_088AFDE4;
    case 152u: goto L_088AFDFC;
    case 153u: goto L_088AFE20;
    case 154u: goto L_088AFE24;
    case 155u: goto L_088AFE48;
    case 156u: goto L_088AFE58;
    case 157u: goto L_088AFE78;
    case 158u: goto L_088AFE80;
    case 159u: goto L_088AFEA4;
    case 160u: goto L_088AFED4;
    case 161u: goto L_088AFF08;
    case 162u: goto L_088AFF1C;
    case 163u: goto L_088AFF30;
    case 164u: goto L_088AFF50;
    case 165u: goto L_088AFF7C;
    case 166u: goto L_088AFF80;
    case 167u: goto L_088AFF9C;
    case 168u: goto L_088AFFB0;
    case 169u: goto L_088AFFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AF000:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF0E0;
      }
      goto L_088AF010;
    }
L_088AF010:
    aot_gpr[4] = (16960u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29180)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_088AF054;
      }
      goto L_088AF034;
    }
L_088AF034:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AF090;
      }
      goto L_088AF054;
    }
L_088AF054:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29176)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_088AF090;
      }
      goto L_088AF06C;
    }
L_088AF06C:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088AF090;
L_088AF090:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (128u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8320));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AF0BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29184));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AF0BCu) goto L_088AF0BC;
    return;
L_088AF0BC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088AF0E0u);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AF0E0u) goto L_088AF0E0;
    return;
L_088AF0E0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF0F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF10Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF10Cu) goto L_088AF10C;
    return;
L_088AF10C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088AF124u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 105u, 0x088AEC18u>(ctx, &aot_mem) && ctx.pc == 0x088AF124u) goto L_088AF124;
    return;
L_088AF124:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF134:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088AF144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 105u, 0x088AEC18u>(ctx, &aot_mem) && ctx.pc == 0x088AF144u) goto L_088AF144;
    return;
L_088AF144:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF188;
      }
      goto L_088AF174;
    }
L_088AF174:
    aot_gpr[31] = (0x088AF17Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 105u, 0x088AEC18u>(ctx, &aot_mem) && ctx.pc == 0x088AF17Cu) goto L_088AF17C;
    return;
L_088AF17C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088AF188;
L_088AF188:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088AF1B8u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088AF1B8u) goto L_088AF1B8;
    return;
L_088AF1B8:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x088AF1D4u);
    aot_gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088AF1D4u) goto L_088AF1D4;
    return;
L_088AF1D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(152), aot_gpr[16]);
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF1F8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27352), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF230u);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF230u) goto L_088AF230;
    return;
L_088AF230:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4336));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AF2B4;
      }
      goto L_088AF270;
    }
L_088AF270:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4336));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AF288u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF288u) goto L_088AF288;
    return;
L_088AF288:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088AF2B4;
      }
      goto L_088AF294;
    }
L_088AF294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088AF2B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AF2B4u) goto L_088AF2B4;
    return;
L_088AF2B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF2C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF2DCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088AF2DCu) goto L_088AF2DC;
    return;
L_088AF2DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF34C;
      }
      goto L_088AF2E4;
    }
L_088AF2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AF34C;
      }
      goto L_088AF2F4;
    }
L_088AF2F4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088AF350;
      }
      goto L_088AF310;
    }
L_088AF310:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088AF334;
      }
      goto L_088AF328;
    }
L_088AF328:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088AF334;
L_088AF334:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088AF350;
      }
      goto L_088AF34C;
    }
L_088AF34C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    goto L_088AF350;
L_088AF350:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF360:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088AF3A0;
      }
      goto L_088AF390;
    }
L_088AF390:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088AF3A4;
      }
      goto L_088AF39C;
    }
L_088AF39C:
    aot_gpr[5] = (0u | 1u);
    goto L_088AF3A0;
L_088AF3A0:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_088AF3A4;
L_088AF3A4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF578;
      }
      goto L_088AF3AC;
    }
L_088AF3AC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6408));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088AF3D4;
      }
      goto L_088AF3C8;
    }
L_088AF3C8:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088AF3D4;
L_088AF3D4:
    aot_gpr[6] = (14979u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
      if (branch_taken) {
          goto L_088AF404;
      }
      goto L_088AF3F8;
    }
L_088AF3F8:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_088AF404;
L_088AF404:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF578;
      }
      goto L_088AF414;
    }
L_088AF414:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_088AF42C;
      }
      goto L_088AF420;
    }
L_088AF420:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_088AF42C;
L_088AF42C:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) <= 0;
    aot_gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_088AF578;
      }
      goto L_088AF440;
    }
L_088AF440:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (17254u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[4] = (17036u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(29192));
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_088AF4F8;
      }
      goto L_088AF478;
    }
L_088AF478:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088AF488u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AF488u) goto L_088AF488;
    return;
L_088AF488:
    aot_gpr[31] = (0x088AF490u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF490u) goto L_088AF490;
    return;
L_088AF490:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 2u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[31] = (0x088AF4A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x088AF4A4u) goto L_088AF4A4;
    return;
L_088AF4A4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088AF4B0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088AF4B0u) goto L_088AF4B0;
    return;
L_088AF4B0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 2u);
    aot_gpr[31] = (0x088AF4E0u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088AF4E0u) goto L_088AF4E0;
    return;
L_088AF4E0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (16832u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088AF50C;
      }
      goto L_088AF4F8;
    }
L_088AF4F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (16704u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088AF50C;
L_088AF50C:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (ctx.hi);
    aot_gpr[31] = (0x088AF520u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AF520u) goto L_088AF520;
    return;
L_088AF520:
    aot_gpr[31] = (0x088AF528u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF528u) goto L_088AF528;
    return;
L_088AF528:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 2u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[31] = (0x088AF53Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x088AF53Cu) goto L_088AF53C;
    return;
L_088AF53C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088AF548u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088AF548u) goto L_088AF548;
    return;
L_088AF548:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 2u);
    aot_gpr[31] = (0x088AF578u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088AF578u) goto L_088AF578;
    return;
L_088AF578:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF5A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF5B4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF5B4u) goto L_088AF5B4;
    return;
L_088AF5B4:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF5D4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27360), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF5F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088AF640;
      }
      goto L_088AF634;
    }
L_088AF634:
    aot_gpr[31] = (0x088AF63Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 157u, 0x08A4DAF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF63Cu) goto L_088AF63C;
    return;
L_088AF63C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_088AF640;
L_088AF640:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF6C4;
      }
      goto L_088AF648;
    }
L_088AF648:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088AF654u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 63u, 0x08A4F458u>(ctx, &aot_mem) && ctx.pc == 0x088AF654u) goto L_088AF654;
    return;
L_088AF654:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088AF6C4;
      }
      goto L_088AF66C;
    }
L_088AF66C:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AF690;
      }
      goto L_088AF678;
    }
L_088AF678:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088AF68Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_088AF77C;
L_088AF68C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088AF690;
L_088AF690:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_088AF66C;
      }
      goto L_088AF6C4;
    }
L_088AF6C4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF6EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF750;
      }
      goto L_088AF704;
    }
L_088AF704:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AF748;
      }
      goto L_088AF710;
    }
L_088AF710:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(28))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] << 2u);
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_088AF704;
      }
      goto L_088AF740;
    }
L_088AF740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF750;
      }
      goto L_088AF748;
    }
L_088AF748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF754;
      }
      goto L_088AF750;
    }
L_088AF750:
    aot_gpr[2] = (0u | 0u);
    goto L_088AF754;
L_088AF754:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF75C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27368), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF77C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088AF7A8;
      }
      goto L_088AF79C;
    }
L_088AF79C:
    aot_gpr[31] = (0x088AF7A4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 64u, 0x08A4F460u>(ctx, &aot_mem) && ctx.pc == 0x088AF7A4u) goto L_088AF7A4;
    return;
L_088AF7A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088AF7A8;
L_088AF7A8:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF7C0;
      }
      goto L_088AF7B0;
    }
L_088AF7B0:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088AF7BCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x088AF7BCu) goto L_088AF7BC;
    return;
L_088AF7BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_088AF7C0;
L_088AF7C0:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF7D8;
      }
      goto L_088AF7C8;
    }
L_088AF7C8:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088AF7D4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 157u, 0x08A4DAF0u>(ctx, &aot_mem) && ctx.pc == 0x088AF7D4u) goto L_088AF7D4;
    return;
L_088AF7D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_088AF7D8;
L_088AF7D8:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF7E8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF820u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF820u) goto L_088AF820;
    return;
L_088AF820:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4288));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AF8A0;
      }
      goto L_088AF85C;
    }
L_088AF85C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4288));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AF874u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF874u) goto L_088AF874;
    return;
L_088AF874:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088AF8A0;
      }
      goto L_088AF880;
    }
L_088AF880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088AF8A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AF8A0u) goto L_088AF8A0;
    return;
L_088AF8A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF8B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF8C8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088AF8C8u) goto L_088AF8C8;
    return;
L_088AF8C8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088AF8EC;
      }
      goto L_088AF8E0;
    }
L_088AF8E0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088AF8EC;
L_088AF8EC:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF900;
      }
      goto L_088AF8FC;
    }
L_088AF8FC:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    goto L_088AF900;
L_088AF900:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF910:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088AF930u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 53u, 0x088AAA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF930u) goto L_088AF930;
    return;
L_088AF930:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_gpr[6] = (16704u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_gpr[4] = (16768u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[13] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 32u);
    aot_gpr[5] = (0u | 4u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[17];
    aot_gpr[31] = (0x088AF994u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AF994u) goto L_088AF994;
    return;
L_088AF994:
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x088AF9A8u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088AF9A8u) goto L_088AF9A8;
    return;
L_088AF9A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088AF9CCu);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AF9CCu) goto L_088AF9CC;
    return;
L_088AF9CC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF9E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AF9F8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF9F8u) goto L_088AF9F8;
    return;
L_088AF9F8:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFA14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AFA28u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFA28u) goto L_088AFA28;
    return;
L_088AFA28:
    aot_gpr[4] = (16320u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AFA54u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 201u, 0x088A9F90u>(ctx, &aot_mem) && ctx.pc == 0x088AFA54u) goto L_088AFA54;
    return;
L_088AFA54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFA64:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFA84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x088AFAB8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088AFAB8u) goto L_088AFAB8;
    return;
L_088AFAB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 39u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088AFB70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x088AFB70u) goto L_088AFB70;
    return;
L_088AFB70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AFB90;
      }
      goto L_088AFB84;
    }
L_088AFB84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    goto L_088AFB90;
L_088AFB90:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AFB9Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088AFB9Cu) goto L_088AFB9C;
    return;
L_088AFB9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AFBACu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088AFBACu) goto L_088AFBAC;
    return;
L_088AFBAC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AFBB8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x088AFBB8u) goto L_088AFBB8;
    return;
L_088AFBB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFBC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AFBDCu);
    aot_gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088AFBDCu) goto L_088AFBDC;
    return;
L_088AFBDC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4240));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFC00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AFC60;
      }
      goto L_088AFC1C;
    }
L_088AFC1C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4240));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AFC34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFC34u) goto L_088AFC34;
    return;
L_088AFC34:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088AFC60;
      }
      goto L_088AFC40;
    }
L_088AFC40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088AFC60u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AFC60u) goto L_088AFC60;
    return;
L_088AFC60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFC74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088AFC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088AFC84u) goto L_088AFC84;
    return;
L_088AFC84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFC90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AFCE0;
      }
      goto L_088AFCD0;
    }
L_088AFCD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AFCE4;
      }
      goto L_088AFCDC;
    }
L_088AFCDC:
    aot_gpr[4] = (0u | 1u);
    goto L_088AFCE0;
L_088AFCE0:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088AFCE4;
L_088AFCE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFED4;
      }
      goto L_088AFCEC;
    }
L_088AFCEC:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (16864u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (0u | 60u);
    aot_gpr[21] = (0u | 1000u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088AFE24;
      }
      goto L_088AFD18;
    }
L_088AFD18:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (16896u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[18] = (65389u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(24637));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088AFD60;
      }
      goto L_088AFD58;
    }
L_088AFD58:
    aot_gpr[18] = (65408u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(128));
    goto L_088AFD60;
L_088AFD60:
    aot_gpr[4] = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr[19]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088AFD9C;
      }
      goto L_088AFD8C;
    }
L_088AFD8C:
    aot_gpr[18] = (0u | 59u);
    aot_gpr[19] = (aot_gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 99u);
      if (branch_taken) {
          goto L_088AFDD8;
      }
      goto L_088AFD9C;
    }
L_088AFD9C:
    { const std::uint32_t dividend = aot_gpr[19]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 100u);
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[19]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[19] = (ctx.hi);
    goto L_088AFDD8;
L_088AFDD8:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088AFDE4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AFDE4u) goto L_088AFDE4;
    return;
L_088AFDE4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088AFDFCu);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFDFCu) goto L_088AFDFC;
    return;
L_088AFDFC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088AFE20u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AFE20u) goto L_088AFE20;
    return;
L_088AFE20:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    goto L_088AFE24;
L_088AFE24:
    { const std::uint32_t dividend = aot_gpr[18]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 103u);
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.hi);
    aot_gpr[31] = (0x088AFE48u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AFE48u) goto L_088AFE48;
    return;
L_088AFE48:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088AFE58u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE58u) goto L_088AFE58;
    return;
L_088AFE58:
    aot_gpr[4] = (16928u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (65409u << 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-32640));
      if (branch_taken) {
          goto L_088AFE80;
      }
      goto L_088AFE78;
    }
L_088AFE78:
    aot_gpr[18] = (65280u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(28539));
    goto L_088AFE80;
L_088AFE80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088AFEA4u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AFEA4u) goto L_088AFEA4;
    return;
L_088AFEA4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (16792u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[22];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (65409u << 16u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (16832u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-32640));
    aot_gpr[31] = (0x088AFED4u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088AFA84;
L_088AFED4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFF08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AFF1Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AFF1Cu) goto L_088AFF1C;
    return;
L_088AFF1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFF30:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFF50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_088AFFB0;
      }
      goto L_088AFF7C;
    }
L_088AFF7C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-24032));
    goto L_088AFF80;
L_088AFF80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088AFF9Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AFF9Cu) goto L_088AFF9C;
    return;
L_088AFF9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AFF80;
      }
      goto L_088AFFB0;
    }
L_088AFFB0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AFFD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 2u, 0x088B0008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1u, 0x088B0000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0171(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0171_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_171(Runtime &runtime) {
    runtime.register_generated_unit(171u, 0x088AF000u, 4096u, &recomp_unit_0171, &recomp_unit_0171_entry);
    runtime.register_function(0x088AF000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF010u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF034u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF054u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF06Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF090u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF0BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF0E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF0F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF10Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF124u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF134u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF144u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF150u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF174u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF17Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF188u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF1B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF1D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF1F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF218u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF230u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF254u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF270u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF288u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF294u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF2B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF2C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF2DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF2E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF2F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF310u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF328u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF334u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF34Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF360u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF390u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF39Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF3A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF3A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF3ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF3C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF3D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF3F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF404u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF414u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF420u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF42Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF440u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF478u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF488u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF490u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF4A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF4B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF4E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF4F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF50Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF520u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF528u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF53Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF548u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF578u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF5A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF5B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF5D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF5F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF634u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF63Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF640u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF648u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF66Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF678u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF68Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF690u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF6C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF6ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF704u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF710u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF740u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF748u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF750u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF754u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF75Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF77Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF79Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF7E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF808u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF820u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF85Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF880u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF8A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF8B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF8C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF8E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF8ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF8FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF900u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF910u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF930u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF994u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF9A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF9CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF9E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AF9F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFA14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFA28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFA54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFA64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFA84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFAB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFB70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFB84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFB90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFB9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFBACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFBB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFBC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFBDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFC90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFCD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFCDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFCE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFCE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFCECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFD18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFD58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFD60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFD8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFD9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFDD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFDE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFDFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFE20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFE24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFE48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFE58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFE78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFE80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFEA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFF9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFFB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x088AFFD4u, &recomp_unit_0171, "recomp_unit_0171");
}
} // namespace psprecomp
