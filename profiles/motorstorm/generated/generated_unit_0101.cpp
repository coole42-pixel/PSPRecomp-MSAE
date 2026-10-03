#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0101[1021] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    10, 0, 0, 0, 11, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 31, 0, 32, 33, 0, 34, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 40, 0, 0, 0, 0, 41, 42, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 51, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66,
    0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 132, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 138, 139, 0, 0, 0, 0, 0, 0, 140, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0,
    0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 150, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0,
    0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174,
    0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0,
    182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197,
};
void recomp_unit_0101_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08869000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0101[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08869000;
    case 2u: goto L_08869004;
    case 3u: goto L_08869008;
    case 4u: goto L_08869028;
    case 5u: goto L_08869030;
    case 6u: goto L_0886903C;
    case 7u: goto L_0886904C;
    case 8u: goto L_08869054;
    case 9u: goto L_08869078;
    case 10u: goto L_08869080;
    case 11u: goto L_08869090;
    case 12u: goto L_08869094;
    case 13u: goto L_0886909C;
    case 14u: goto L_088690A4;
    case 15u: goto L_088690C4;
    case 16u: goto L_088690CC;
    case 17u: goto L_088690D4;
    case 18u: goto L_088690D8;
    case 19u: goto L_088690E4;
    case 20u: goto L_088690F4;
    case 21u: goto L_088690FC;
    case 22u: goto L_08869108;
    case 23u: goto L_08869128;
    case 24u: goto L_08869130;
    case 25u: goto L_08869138;
    case 26u: goto L_0886913C;
    case 27u: goto L_08869148;
    case 28u: goto L_08869150;
    case 29u: goto L_08869160;
    case 30u: goto L_08869180;
    case 31u: goto L_08869188;
    case 32u: goto L_08869190;
    case 33u: goto L_08869194;
    case 34u: goto L_0886919C;
    case 35u: goto L_088691A0;
    case 36u: goto L_088691AC;
    case 37u: goto L_088691C0;
    case 38u: goto L_088691C8;
    case 39u: goto L_088691F8;
    case 40u: goto L_08869204;
    case 41u: goto L_08869218;
    case 42u: goto L_0886921C;
    case 43u: goto L_08869220;
    case 44u: goto L_0886923C;
    case 45u: goto L_08869244;
    case 46u: goto L_08869250;
    case 47u: goto L_08869274;
    case 48u: goto L_088692A0;
    case 49u: goto L_088692AC;
    case 50u: goto L_088692C0;
    case 51u: goto L_088692C4;
    case 52u: goto L_088692C8;
    case 53u: goto L_088692E8;
    case 54u: goto L_088692FC;
    case 55u: goto L_08869304;
    case 56u: goto L_08869334;
    case 57u: goto L_08869354;
    case 58u: goto L_08869364;
    case 59u: goto L_08869394;
    case 60u: goto L_088693C8;
    case 61u: goto L_088693D8;
    case 62u: goto L_08869488;
    case 63u: goto L_088694BC;
    case 64u: goto L_088694DC;
    case 65u: goto L_088694F0;
    case 66u: goto L_088694FC;
    case 67u: goto L_08869508;
    case 68u: goto L_08869518;
    case 69u: goto L_08869520;
    case 70u: goto L_08869534;
    case 71u: goto L_0886953C;
    case 72u: goto L_08869554;
    case 73u: goto L_0886956C;
    case 74u: goto L_08869584;
    case 75u: goto L_0886959C;
    case 76u: goto L_088695B0;
    case 77u: goto L_088695D8;
    case 78u: goto L_088695E4;
    case 79u: goto L_08869610;
    case 80u: goto L_08869620;
    case 81u: goto L_08869638;
    case 82u: goto L_08869654;
    case 83u: goto L_0886965C;
    case 84u: goto L_08869668;
    case 85u: goto L_08869684;
    case 86u: goto L_0886968C;
    case 87u: goto L_08869694;
    case 88u: goto L_088696A4;
    case 89u: goto L_088696F8;
    case 90u: goto L_08869714;
    case 91u: goto L_08869748;
    case 92u: goto L_08869768;
    case 93u: goto L_0886977C;
    case 94u: goto L_0886978C;
    case 95u: goto L_0886979C;
    case 96u: goto L_088697A8;
    case 97u: goto L_088697B0;
    case 98u: goto L_088697B8;
    case 99u: goto L_088697C0;
    case 100u: goto L_088697CC;
    case 101u: goto L_088697D4;
    case 102u: goto L_088697DC;
    case 103u: goto L_088697E4;
    case 104u: goto L_088697F0;
    case 105u: goto L_088697F8;
    case 106u: goto L_08869804;
    case 107u: goto L_08869840;
    case 108u: goto L_0886985C;
    case 109u: goto L_08869890;
    case 110u: goto L_0886989C;
    case 111u: goto L_088698A4;
    case 112u: goto L_088698AC;
    case 113u: goto L_088698B8;
    case 114u: goto L_088698C0;
    case 115u: goto L_088698C8;
    case 116u: goto L_088698D0;
    case 117u: goto L_088698D8;
    case 118u: goto L_088698F0;
    case 119u: goto L_088698FC;
    case 120u: goto L_08869914;
    case 121u: goto L_0886991C;
    case 122u: goto L_0886992C;
    case 123u: goto L_08869934;
    case 124u: goto L_08869948;
    case 125u: goto L_08869958;
    case 126u: goto L_08869960;
    case 127u: goto L_08869968;
    case 128u: goto L_08869978;
    case 129u: goto L_088699AC;
    case 130u: goto L_088699E0;
    case 131u: goto L_08869A08;
    case 132u: goto L_08869A14;
    case 133u: goto L_08869A18;
    case 134u: goto L_08869A34;
    case 135u: goto L_08869A54;
    case 136u: goto L_08869A60;
    case 137u: goto L_08869A7C;
    case 138u: goto L_08869A84;
    case 139u: goto L_08869A88;
    case 140u: goto L_08869AA4;
    case 141u: goto L_08869AA8;
    case 142u: goto L_08869AB4;
    case 143u: goto L_08869ACC;
    case 144u: goto L_08869AE4;
    case 145u: goto L_08869AF4;
    case 146u: goto L_08869B04;
    case 147u: goto L_08869B18;
    case 148u: goto L_08869B2C;
    case 149u: goto L_08869B4C;
    case 150u: goto L_08869B50;
    case 151u: goto L_08869B54;
    case 152u: goto L_08869B74;
    case 153u: goto L_08869B7C;
    case 154u: goto L_08869B84;
    case 155u: goto L_08869B9C;
    case 156u: goto L_08869BD4;
    case 157u: goto L_08869BEC;
    case 158u: goto L_08869C04;
    case 159u: goto L_08869C0C;
    case 160u: goto L_08869C6C;
    case 161u: goto L_08869C9C;
    case 162u: goto L_08869CB0;
    case 163u: goto L_08869CC4;
    case 164u: goto L_08869CCC;
    case 165u: goto L_08869CE8;
    case 166u: goto L_08869CF0;
    case 167u: goto L_08869CF8;
    case 168u: goto L_08869D04;
    case 169u: goto L_08869D0C;
    case 170u: goto L_08869D38;
    case 171u: goto L_08869DA8;
    case 172u: goto L_08869DC0;
    case 173u: goto L_08869DE8;
    case 174u: goto L_08869DFC;
    case 175u: goto L_08869E04;
    case 176u: goto L_08869E0C;
    case 177u: goto L_08869E1C;
    case 178u: goto L_08869E9C;
    case 179u: goto L_08869EAC;
    case 180u: goto L_08869EE0;
    case 181u: goto L_08869EE8;
    case 182u: goto L_08869F00;
    case 183u: goto L_08869F08;
    case 184u: goto L_08869F14;
    case 185u: goto L_08869F20;
    case 186u: goto L_08869F34;
    case 187u: goto L_08869F40;
    case 188u: goto L_08869F4C;
    case 189u: goto L_08869F68;
    case 190u: goto L_08869F84;
    case 191u: goto L_08869F90;
    case 192u: goto L_08869F98;
    case 193u: goto L_08869FA0;
    case 194u: goto L_08869FA8;
    case 195u: goto L_08869FB8;
    case 196u: goto L_08869FD4;
    case 197u: goto L_08869FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08869000:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08869004;
L_08869004:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08869008;
L_08869008:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08869030;
      }
      goto L_08869028;
    }
L_08869028:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0886903C;
      }
      goto L_08869030;
    }
L_08869030:
    aot_fpr[13] = aot_fpr[15] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    goto L_0886903C;
L_0886903C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_0886904C;
L_0886904C:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08869054;
L_08869054:
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(156));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869080;
      }
      goto L_08869078;
    }
L_08869078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08869094;
      }
      goto L_08869080;
    }
L_08869080:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08869054;
      }
      goto L_08869090;
    }
L_08869090:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    goto L_08869094;
L_08869094:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088690FC;
      }
      goto L_0886909C;
    }
L_0886909C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088690CC;
      }
      goto L_088690A4;
    }
L_088690A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088690C4u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088690C4u) goto L_088690C4;
    return;
L_088690C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088690D8;
      }
      goto L_088690CC;
    }
L_088690CC:
    aot_gpr[31] = (0x088690D4u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088690D4u) goto L_088690D4;
    return;
L_088690D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088690D8;
L_088690D8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088690F4;
      }
      goto L_088690E4;
    }
L_088690E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_088690F4;
L_088690F4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[17]);
      if (branch_taken) {
          goto L_08869304;
      }
      goto L_088690FC;
    }
L_088690FC:
    aot_gpr[20] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08869130;
      }
      goto L_08869108;
    }
L_08869108:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08869128u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869128u) goto L_08869128;
    return;
L_08869128:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886913C;
      }
      goto L_08869130;
    }
L_08869130:
    aot_gpr[31] = (0x08869138u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08869138u) goto L_08869138;
    return;
L_08869138:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_0886913C;
L_0886913C:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088691AC;
      }
      goto L_08869148;
    }
L_08869148:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[18]);
      if (branch_taken) {
          goto L_0886919C;
      }
      goto L_08869150;
    }
L_08869150:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_08869188;
      }
      goto L_08869160;
    }
L_08869160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08869180u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869180u) goto L_08869180;
    return;
L_08869180:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08869194;
      }
      goto L_08869188;
    }
L_08869188:
    aot_gpr[31] = (0x08869190u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08869190u) goto L_08869190;
    return;
L_08869190:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08869194;
L_08869194:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[17]);
      if (branch_taken) {
          goto L_088691A0;
      }
      goto L_0886919C;
    }
L_0886919C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), 0u);
    goto L_088691A0;
L_088691A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[20] = (aot_gpr[21] | 0u);
    goto L_088691AC;
L_088691AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08869274;
      }
      goto L_088691C0;
    }
L_088691C0:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_088691C8;
L_088691C8:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(156));
    aot_gpr[10] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(156));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08869204;
      }
      goto L_088691F8;
    }
L_088691F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886921C;
      }
      goto L_08869204;
    }
L_08869204:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_08869220;
    }
    goto L_08869218;
L_08869218:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886921C;
L_0886921C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_08869220;
L_08869220:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08869244;
      }
      goto L_0886923C;
    }
L_0886923C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08869250;
      }
      goto L_08869244;
    }
L_08869244:
    aot_fpr[13] = aot_fpr[15] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    goto L_08869250;
L_08869250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088691C8;
      }
      goto L_08869274;
    }
L_08869274:
    aot_gpr[5] = (aot_gpr[19] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(156));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[19]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_088692AC;
      }
      goto L_088692A0;
    }
L_088692A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088692C4;
      }
      goto L_088692AC;
    }
L_088692AC:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088692C8;
    }
    goto L_088692C0;
L_088692C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088692C4;
L_088692C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_088692C8;
L_088692C8:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088692FC;
      }
      goto L_088692E8;
    }
L_088692E8:
    aot_fpr[20] = aot_fpr[15] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[20] = aot_fpr[20] / aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088692FC;
      }
      goto L_088692FC;
    }
L_088692FC:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08869304;
L_08869304:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869334:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869354:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(aot_gpr[9]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08869394u);
    aot_gpr[6] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08869394u) goto L_08869394;
    return;
L_08869394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088693C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088693D8:
    aot_gpr[5] = (15564u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15651u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15477u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] | 49807u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15412u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 14680u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (15379u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 29884u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16253u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 28836u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[19] = aot_fpr[18] / aot_fpr[14];
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[13] = aot_fpr[18] / aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[14] = aot_fpr[18] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = aot_fpr[18] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = aot_fpr[18] / aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869488:
    aot_gpr[5] = (15564u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (15395u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u | 3u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088694BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088695D8;
      }
      goto L_088694DC;
    }
L_088694DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
      if (branch_taken) {
          goto L_08869508;
      }
      goto L_088694F0;
    }
L_088694F0:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[31] = (0x088694FCu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08869488;
L_088694FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08869520;
      }
      goto L_08869508;
    }
L_08869508:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08869518u);
    aot_gpr[5] = (0u | 0u);
    goto L_088693D8;
L_08869518:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08869520;
L_08869520:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088695B0;
      }
      goto L_08869534;
    }
L_08869534:
    aot_gpr[9] = (4u << 16u);
    aot_gpr[8] = (8u << 16u);
    goto L_0886953C;
L_0886953C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[9]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886956C;
      }
      goto L_08869554;
    }
L_08869554:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(164))))));
    aot_gpr[11] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    goto L_0886956C;
L_0886956C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886959C;
      }
      goto L_08869584;
    }
L_08869584:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(165))))));
    aot_gpr[11] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    goto L_0886959C;
L_0886959C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(824));
      if (branch_taken) {
          goto L_0886953C;
      }
      goto L_088695B0;
    }
L_088695B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(200)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088695D8;
L_088695D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088695E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (4u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08869620;
      }
      goto L_08869610;
    }
L_08869610:
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(164))))));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(156));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886968C;
      }
      goto L_08869620;
    }
L_08869620:
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(165))))));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    aot_gpr[31] = (0x08869638u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08869638u) goto L_08869638;
    return;
L_08869638:
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886965C;
      }
      goto L_08869654;
    }
L_08869654:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0886965C;
L_0886965C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08869668u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08869668u) goto L_08869668;
    return;
L_08869668:
    aot_gpr[4] = (16140u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886968C;
      }
      goto L_08869684;
    }
L_08869684:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0886968C;
L_0886968C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869748;
      }
      goto L_08869694;
    }
L_08869694:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x088696A4u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088696A4u) goto L_088696A4;
    return;
L_088696A4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_gpr[4] = (16253u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[4] | 28836u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08869748;
      }
      goto L_088696F8;
    }
L_088696F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(148));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08869714u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08869714u) goto L_08869714;
    return;
L_08869714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(148));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (15820u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08869748u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 93u, 0x08868678u>(ctx, &aot_mem) && ctx.pc == 0x08869748u) goto L_08869748;
    return;
L_08869748:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(186)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088697B0;
      }
      goto L_0886977C;
    }
L_0886977C:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(148))))));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0886979C;
      }
      goto L_0886978C;
    }
L_0886978C:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(149))))));
    aot_gpr[8] = (0u | 3u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088697B0;
      }
      goto L_0886979C;
    }
L_0886979C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(150))))));
      if (branch_taken) {
          goto L_088697B8;
      }
      goto L_088697A8;
    }
L_088697A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088697DC;
      }
      goto L_088697B0;
    }
L_088697B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088697F8;
      }
      goto L_088697B8;
    }
L_088697B8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088697F8;
      }
      goto L_088697C0;
    }
L_088697C0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(151))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088697F8;
      }
      goto L_088697CC;
    }
L_088697CC:
    aot_gpr[31] = (0x088697D4u);
    aot_gpr[5] = (4u << 16u);
    goto L_088695E4;
L_088697D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088697F8;
      }
      goto L_088697DC;
    }
L_088697DC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088697F8;
      }
      goto L_088697E4;
    }
L_088697E4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(151))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088697F8;
      }
      goto L_088697F0;
    }
L_088697F0:
    aot_gpr[31] = (0x088697F8u);
    aot_gpr[5] = (8u << 16u);
    goto L_088695E4;
L_088697F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(186)));
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(87))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
      if (branch_taken) {
          goto L_0886985C;
      }
      goto L_08869840;
    }
L_08869840:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (16102u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[8] = (aot_gpr[8] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(780)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_0886985C;
L_0886985C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(84))))));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(85))))));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
      if (branch_taken) {
          goto L_0886989C;
      }
      goto L_08869890;
    }
L_08869890:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] << 24u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    goto L_0886989C;
L_0886989C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_088698B8;
      }
      goto L_088698A4;
    }
L_088698A4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088698B8;
      }
      goto L_088698AC;
    }
L_088698AC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
    goto L_088698B8;
L_088698B8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088698D0;
      }
      goto L_088698C0;
    }
L_088698C0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088698D0;
      }
      goto L_088698C8;
    }
L_088698C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
    goto L_088698D0;
L_088698D0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088698FC;
      }
      goto L_088698D8;
    }
L_088698D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088698F0u);
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    goto L_08869768;
L_088698F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
      if (branch_taken) {
          goto L_0886991C;
      }
      goto L_088698FC;
    }
L_088698FC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08869914u);
    aot_fpr[20] = aot_fpr[20] - aot_fpr[12];
    goto L_08869768;
L_08869914:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
    goto L_0886991C;
L_0886991C:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08869934;
    }
    goto L_0886992C;
L_0886992C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08869948;
      }
      goto L_08869934;
    }
L_08869934:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08869948;
    }
    goto L_08869948;
L_08869948:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x08869958u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 81u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08869958u) goto L_08869958;
    return;
L_08869958:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08869968;
      }
      goto L_08869960;
    }
L_08869960:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08869978;
      }
      goto L_08869968;
    }
L_08869968:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08869978;
L_08869978:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(2080));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (0u | 1u);
        goto L_088699AC;
    }
    goto L_088699AC;
L_088699AC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7456));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08869A18;
      }
      goto L_088699E0;
    }
L_088699E0:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6928));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[7] = (aot_gpr[6] ^ aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869A18;
      }
      goto L_08869A08;
    }
L_08869A08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(81)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869A18;
      }
      goto L_08869A14;
    }
L_08869A14:
    aot_gpr[5] = (0u | 1u);
    goto L_08869A18;
L_08869A18:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (0u | 1u);
        goto L_08869A34;
    }
    goto L_08869A34;
L_08869A34:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(187), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(186)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 32768u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(186), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08869AB4;
      }
      goto L_08869A54;
    }
L_08869A54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869AB4;
      }
      goto L_08869A60;
    }
L_08869A60:
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_08869A88;
      }
      goto L_08869A7C;
    }
L_08869A7C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08869AA8;
      }
      goto L_08869A84;
    }
L_08869A84:
    aot_gpr[5] = (15820u << 16u);
    goto L_08869A88;
L_08869A88:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08869AA4;
    }
    goto L_08869AA4;
L_08869AA4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08869AA8;
L_08869AA8:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08869AB4;
L_08869AB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(183)));
        goto L_08869AE4;
    }
    goto L_08869ACC;
L_08869ACC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 768u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08869AE4;
      }
      goto L_08869AE4;
    }
L_08869AE4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B7C;
      }
      goto L_08869AF4;
    }
L_08869AF4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_08869B50;
      }
      goto L_08869B04;
    }
L_08869B04:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (2218u << 16u);
        goto L_08869B54;
    }
    goto L_08869B18;
L_08869B18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_gpr[4] = (2218u << 16u);
        goto L_08869B54;
    }
    goto L_08869B2C;
L_08869B2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(408)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08869B4Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 138u, 0x088DCB88u>(ctx, &aot_mem) && ctx.pc == 0x08869B4Cu) goto L_08869B4C;
    return;
L_08869B4C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    goto L_08869B50;
L_08869B50:
    aot_gpr[4] = (2218u << 16u);
    goto L_08869B54;
L_08869B54:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (16288u << 16u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08869B84;
      }
      goto L_08869B74;
    }
L_08869B74:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08869B84;
      }
      goto L_08869B7C;
    }
L_08869B7C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08869B84;
L_08869B84:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869B9C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 0u);
    goto L_08869BD4;
L_08869BD4:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869BD4;
      }
      goto L_08869BEC;
    }
L_08869BEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(149))))));
    aot_gpr[6] = (0u | 3u);
    if (aot_gpr[5] == aot_gpr[6]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08869C0C;
    }
    goto L_08869C04;
L_08869C04:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08869C0C;
L_08869C0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(187), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(186), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08869CC4;
      }
      goto L_08869C9C;
    }
L_08869C9C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08869CCC;
      }
      goto L_08869CB0;
    }
L_08869CB0:
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08869CF0;
      }
      goto L_08869CC4;
    }
L_08869CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869DA8;
      }
      goto L_08869CCC;
    }
L_08869CCC:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08869CF0;
      }
      goto L_08869CE8;
    }
L_08869CE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (0u | 1u);
    goto L_08869CF0;
L_08869CF0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869DA8;
      }
      goto L_08869CF8;
    }
L_08869CF8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    if (static_cast<std::int32_t>(aot_gpr[4]) >= 0) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08869D0C;
    }
    goto L_08869D04;
L_08869D04:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08869D0C;
L_08869D0C:
    aot_gpr[17] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08869D38u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08869D38u) goto L_08869D38;
    return;
L_08869D38:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(296)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[5]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08869DA8;
L_08869DA8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869DC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08869E04;
      }
      goto L_08869DE8;
    }
L_08869DE8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869E0C;
      }
      goto L_08869DFC;
    }
L_08869DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869E9C;
      }
      goto L_08869E04;
    }
L_08869E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869E9C;
      }
      goto L_08869E0C;
    }
L_08869E0C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08869E1Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08869E1Cu) goto L_08869E1C;
    return;
L_08869E1C:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(268)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[5]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08869E9C;
L_08869E9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869EAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(149))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(33)));
      if (branch_taken) {
          goto L_08869F14;
      }
      goto L_08869EE0;
    }
L_08869EE0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869F08;
      }
      goto L_08869EE8;
    }
L_08869EE8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869F20;
      }
      goto L_08869F00;
    }
L_08869F00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 17u, 0x0886A10Cu>(ctx, &aot_mem); return;
      }
      goto L_08869F08;
    }
L_08869F08:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 18u, 0x0886A118u>(ctx, &aot_mem); return;
      }
      goto L_08869F14;
    }
L_08869F14:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 18u, 0x0886A118u>(ctx, &aot_mem); return;
      }
      goto L_08869F20;
    }
L_08869F20:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869F40;
      }
      goto L_08869F34;
    }
L_08869F34:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    goto L_08869F40;
L_08869F40:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869F84;
      }
      goto L_08869F4C;
    }
L_08869F4C:
    aot_gpr[4] = (16250u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 57672u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08869F84;
      }
      goto L_08869F68;
    }
L_08869F68:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08869F98;
      }
      goto L_08869F84;
    }
L_08869F84:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_08869FA8;
      }
      goto L_08869F90;
    }
L_08869F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 7u, 0x0886A02Cu>(ctx, &aot_mem); return;
      }
      goto L_08869F98;
    }
L_08869F98:
    aot_gpr[31] = (0x08869FA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08869C6C;
L_08869FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 18u, 0x0886A118u>(ctx, &aot_mem); return;
      }
      goto L_08869FA8;
    }
L_08869FA8:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16025u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 7u, 0x0886A02Cu>(ctx, &aot_mem); return;
      }
      goto L_08869FB8;
    }
L_08869FB8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 7u, 0x0886A02Cu>(ctx, &aot_mem); return;
      }
      goto L_08869FD4;
    }
L_08869FD4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 3u, 0x0886A014u>(ctx, &aot_mem); return;
      }
      goto L_08869FF0;
    }
L_08869FF0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    ctx.pc = 0x0886A000u; return;
}

void recomp_unit_0101(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0101_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_101(Runtime &runtime) {
    runtime.register_generated_unit(101u, 0x08869000u, 4096u, &recomp_unit_0101, &recomp_unit_0101_entry);
    runtime.register_function(0x08869000u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869004u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869008u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869028u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869030u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886903Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886904Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869054u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869078u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869080u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869090u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869094u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886909Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088690FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869108u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869128u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869130u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869138u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886913Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869148u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869150u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869160u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869180u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869188u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869190u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869194u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886919Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088691A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088691ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088691C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088691C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088691F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869204u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869218u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886921Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869220u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886923Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869244u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869250u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869274u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088692FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869304u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869334u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869354u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869364u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869394u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088693C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088693D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869488u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088694BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088694DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088694F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088694FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869508u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869518u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869520u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869534u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886953Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869554u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886956Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869584u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886959Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088695B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088695D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088695E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869610u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869620u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869638u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869654u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886965Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869668u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869684u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886968Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869694u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088696A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088696F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869714u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869748u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869768u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886977Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886978Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886979Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088697F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869804u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869840u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886985Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869890u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886989Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088698FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869914u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886991Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0886992Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869934u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869948u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869958u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869960u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869968u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869978u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088699ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x088699E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869A88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869AA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869AA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869AB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869ACCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869AE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869AF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869B9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869BD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869BECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869C04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869C0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869C6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869C9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869CB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869CC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869CCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869CE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869CF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869CF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869D04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869D0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869D38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869DA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869DC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869DE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869DFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869E04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869E0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869E1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869E9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869EACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869EE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869EE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869F98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869FA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869FA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869FB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869FD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08869FF0u, &recomp_unit_0101, "recomp_unit_0101");
}
} // namespace psprecomp
