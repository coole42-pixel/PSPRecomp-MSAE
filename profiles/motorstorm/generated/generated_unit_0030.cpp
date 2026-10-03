#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0030[1022] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 21, 0, 0, 0, 0, 22, 0, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 83, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0,
    92, 0, 93, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 99, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 109, 0,
    0, 0, 0, 0, 110, 111, 0, 112, 0, 0, 0, 0, 113, 114, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0,
    126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 145, 0, 0,
    0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174,
    0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0,
    187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211,
};
void recomp_unit_0030_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08822004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0030[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08822004;
    case 2u: goto L_08822010;
    case 3u: goto L_08822020;
    case 4u: goto L_08822038;
    case 5u: goto L_08822048;
    case 6u: goto L_0882204C;
    case 7u: goto L_08822078;
    case 8u: goto L_0882207C;
    case 9u: goto L_088220A0;
    case 10u: goto L_088220DC;
    case 11u: goto L_088220E8;
    case 12u: goto L_08822114;
    case 13u: goto L_08822120;
    case 14u: goto L_08822128;
    case 15u: goto L_08822134;
    case 16u: goto L_08822138;
    case 17u: goto L_08822140;
    case 18u: goto L_0882214C;
    case 19u: goto L_08822154;
    case 20u: goto L_08822160;
    case 21u: goto L_08822164;
    case 22u: goto L_08822178;
    case 23u: goto L_08822188;
    case 24u: goto L_08822194;
    case 25u: goto L_088221A8;
    case 26u: goto L_088221B4;
    case 27u: goto L_088221C4;
    case 28u: goto L_088221DC;
    case 29u: goto L_088221EC;
    case 30u: goto L_088221F0;
    case 31u: goto L_0882221C;
    case 32u: goto L_08822220;
    case 33u: goto L_08822244;
    case 34u: goto L_08822274;
    case 35u: goto L_08822280;
    case 36u: goto L_088222A8;
    case 37u: goto L_088222B8;
    case 38u: goto L_088222D0;
    case 39u: goto L_088222E0;
    case 40u: goto L_088222EC;
    case 41u: goto L_08822300;
    case 42u: goto L_0882230C;
    case 43u: goto L_0882231C;
    case 44u: goto L_08822350;
    case 45u: goto L_0882236C;
    case 46u: goto L_088223A4;
    case 47u: goto L_088223B0;
    case 48u: goto L_088223DC;
    case 49u: goto L_088223EC;
    case 50u: goto L_08822404;
    case 51u: goto L_08822414;
    case 52u: goto L_08822420;
    case 53u: goto L_08822434;
    case 54u: goto L_08822440;
    case 55u: goto L_08822450;
    case 56u: goto L_08822468;
    case 57u: goto L_08822478;
    case 58u: goto L_0882247C;
    case 59u: goto L_088224A8;
    case 60u: goto L_088224AC;
    case 61u: goto L_088224D0;
    case 62u: goto L_088224EC;
    case 63u: goto L_08822504;
    case 64u: goto L_08822514;
    case 65u: goto L_0882252C;
    case 66u: goto L_08822534;
    case 67u: goto L_08822540;
    case 68u: goto L_08822550;
    case 69u: goto L_08822558;
    case 70u: goto L_08822574;
    case 71u: goto L_08822588;
    case 72u: goto L_0882259C;
    case 73u: goto L_088225A4;
    case 74u: goto L_088225B8;
    case 75u: goto L_088225C0;
    case 76u: goto L_088225E0;
    case 77u: goto L_08822604;
    case 78u: goto L_08822614;
    case 79u: goto L_08822620;
    case 80u: goto L_0882263C;
    case 81u: goto L_08822650;
    case 82u: goto L_08822660;
    case 83u: goto L_08822664;
    case 84u: goto L_0882266C;
    case 85u: goto L_088227BC;
    case 86u: goto L_088227C4;
    case 87u: goto L_088227D4;
    case 88u: goto L_08822808;
    case 89u: goto L_08822828;
    case 90u: goto L_08822864;
    case 91u: goto L_0882287C;
    case 92u: goto L_08822884;
    case 93u: goto L_0882288C;
    case 94u: goto L_08822890;
    case 95u: goto L_088228A8;
    case 96u: goto L_088228BC;
    case 97u: goto L_088228C8;
    case 98u: goto L_088228D0;
    case 99u: goto L_088228D4;
    case 100u: goto L_088228DC;
    case 101u: goto L_088228F0;
    case 102u: goto L_088228F8;
    case 103u: goto L_08822910;
    case 104u: goto L_08822920;
    case 105u: goto L_08822934;
    case 106u: goto L_08822940;
    case 107u: goto L_0882295C;
    case 108u: goto L_08822978;
    case 109u: goto L_0882297C;
    case 110u: goto L_08822994;
    case 111u: goto L_08822998;
    case 112u: goto L_088229A0;
    case 113u: goto L_088229B4;
    case 114u: goto L_088229B8;
    case 115u: goto L_088229C8;
    case 116u: goto L_088229CC;
    case 117u: goto L_088229EC;
    case 118u: goto L_08822A0C;
    case 119u: goto L_08822A20;
    case 120u: goto L_08822A28;
    case 121u: goto L_08822A34;
    case 122u: goto L_08822A3C;
    case 123u: goto L_08822A64;
    case 124u: goto L_08822A70;
    case 125u: goto L_08822A7C;
    case 126u: goto L_08822A84;
    case 127u: goto L_08822A8C;
    case 128u: goto L_08822A9C;
    case 129u: goto L_08822AA4;
    case 130u: goto L_08822AB4;
    case 131u: goto L_08822ABC;
    case 132u: goto L_08822AC0;
    case 133u: goto L_08822ADC;
    case 134u: goto L_08822B14;
    case 135u: goto L_08822B1C;
    case 136u: goto L_08822B24;
    case 137u: goto L_08822B2C;
    case 138u: goto L_08822B34;
    case 139u: goto L_08822B40;
    case 140u: goto L_08822B48;
    case 141u: goto L_08822B54;
    case 142u: goto L_08822B60;
    case 143u: goto L_08822B6C;
    case 144u: goto L_08822B74;
    case 145u: goto L_08822B78;
    case 146u: goto L_08822B8C;
    case 147u: goto L_08822B94;
    case 148u: goto L_08822B98;
    case 149u: goto L_08822C04;
    case 150u: goto L_08822C24;
    case 151u: goto L_08822C34;
    case 152u: goto L_08822C4C;
    case 153u: goto L_08822C54;
    case 154u: goto L_08822C60;
    case 155u: goto L_08822C70;
    case 156u: goto L_08822C78;
    case 157u: goto L_08822C94;
    case 158u: goto L_08822CA8;
    case 159u: goto L_08822CBC;
    case 160u: goto L_08822CC4;
    case 161u: goto L_08822CEC;
    case 162u: goto L_08822CFC;
    case 163u: goto L_08822D0C;
    case 164u: goto L_08822D1C;
    case 165u: goto L_08822D2C;
    case 166u: goto L_08822D34;
    case 167u: goto L_08822D3C;
    case 168u: goto L_08822D48;
    case 169u: goto L_08822D50;
    case 170u: goto L_08822D58;
    case 171u: goto L_08822D60;
    case 172u: goto L_08822D6C;
    case 173u: goto L_08822D74;
    case 174u: goto L_08822D80;
    case 175u: goto L_08822D88;
    case 176u: goto L_08822D94;
    case 177u: goto L_08822DA0;
    case 178u: goto L_08822DA8;
    case 179u: goto L_08822DB4;
    case 180u: goto L_08822DBC;
    case 181u: goto L_08822DC8;
    case 182u: goto L_08822DD0;
    case 183u: goto L_08822DDC;
    case 184u: goto L_08822DE8;
    case 185u: goto L_08822DF0;
    case 186u: goto L_08822DFC;
    case 187u: goto L_08822E04;
    case 188u: goto L_08822E10;
    case 189u: goto L_08822E18;
    case 190u: goto L_08822E24;
    case 191u: goto L_08822E30;
    case 192u: goto L_08822E4C;
    case 193u: goto L_08822E64;
    case 194u: goto L_08822E78;
    case 195u: goto L_08822EC0;
    case 196u: goto L_08822EDC;
    case 197u: goto L_08822EF0;
    case 198u: goto L_08822F0C;
    case 199u: goto L_08822F1C;
    case 200u: goto L_08822F24;
    case 201u: goto L_08822F40;
    case 202u: goto L_08822F50;
    case 203u: goto L_08822F58;
    case 204u: goto L_08822F74;
    case 205u: goto L_08822F88;
    case 206u: goto L_08822FA0;
    case 207u: goto L_08822FB0;
    case 208u: goto L_08822FC4;
    case 209u: goto L_08822FC8;
    case 210u: goto L_08822FE8;
    case 211u: goto L_08822FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08822004:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08822020;
      }
      goto L_08822010;
    }
L_08822010:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08822020;
L_08822020:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0882204C;
      }
      goto L_08822038;
    }
L_08822038:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882204C;
      }
      goto L_08822048;
    }
L_08822048:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0882204C;
L_0882204C:
    aot_gpr[6] = (15923u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 13107u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x08822078u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08822078u) goto L_08822078;
    return;
L_08822078:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1104), aot_gpr[17]);
    goto L_0882207C;
L_0882207C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088220A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088220DCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088220DCu) goto L_088220DC;
    return;
L_088220DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822220;
      }
      goto L_088220E8;
    }
L_088220E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (20224u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1112)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[11] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08822128;
      }
      goto L_08822114;
    }
L_08822114:
    aot_gpr[18] = (0u | 23u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[18] = (0u | 19u);
        goto L_08822120;
    }
    goto L_08822120;
L_08822120:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[11] & 255u);
      if (branch_taken) {
          goto L_08822138;
      }
      goto L_08822128;
    }
L_08822128:
    aot_gpr[18] = (0u | 29u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[18] = (0u | 21u);
        goto L_08822134;
    }
    goto L_08822134;
L_08822134:
    aot_gpr[5] = (aot_gpr[11] & 255u);
    goto L_08822138;
L_08822138:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08822154;
      }
      goto L_08822140;
    }
L_08822140:
    aot_gpr[19] = (0u | 24u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[19] = (0u | 19u);
        goto L_0882214C;
    }
    goto L_0882214C;
L_0882214C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08822164;
      }
      goto L_08822154;
    }
L_08822154:
    aot_gpr[19] = (0u | 30u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[19] = (0u | 21u);
        goto L_08822160;
    }
    goto L_08822160;
L_08822160:
    aot_gpr[4] = (2218u << 16u);
    goto L_08822164;
L_08822164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[20] = (aot_gpr[19] - aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08822178u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08822178u) goto L_08822178;
    return;
L_08822178:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08822194;
      }
      goto L_08822188;
    }
L_08822188:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08822194;
L_08822194:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_088221B4;
    }
    goto L_088221A8;
L_088221A8:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088221C4;
      }
      goto L_088221B4;
    }
L_088221B4:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_088221C4;
L_088221C4:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088221F0;
      }
      goto L_088221DC;
    }
L_088221DC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088221F0;
      }
      goto L_088221EC;
    }
L_088221EC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088221F0;
L_088221F0:
    aot_gpr[6] = (15923u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 13107u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x0882221Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x0882221Cu) goto L_0882221C;
    return;
L_0882221C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1112), aot_gpr[17]);
    goto L_08822220;
L_08822220:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08822274u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08822274u) goto L_08822274;
    return;
L_08822274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822350;
      }
      goto L_08822280;
    }
L_08822280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (20224u << 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[4] & 255u);
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[17] = (0u | 33u);
    aot_gpr[4] = (aot_gpr[18] & 255u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (0u | 22u);
        goto L_088222A8;
    }
    goto L_088222A8;
L_088222A8:
    aot_gpr[4] = (aot_gpr[18] & 255u);
    aot_gpr[18] = (0u | 34u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[18] = (0u | 22u);
        goto L_088222B8;
    }
    goto L_088222B8;
L_088222B8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x088222D0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088222D0u) goto L_088222D0;
    return;
L_088222D0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088222EC;
      }
      goto L_088222E0;
    }
L_088222E0:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_088222EC;
L_088222EC:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_0882230C;
    }
    goto L_08822300;
L_08822300:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0882231C;
      }
      goto L_0882230C;
    }
L_0882230C:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0882231C;
L_0882231C:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (15923u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (ctx.hi);
    aot_gpr[31] = (0x08822350u);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08822350u) goto L_08822350;
    return;
L_08822350:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882236C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 19u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x088223A4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x088223A4u) goto L_088223A4;
    return;
L_088223A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088224AC;
      }
      goto L_088223B0;
    }
L_088223B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (20224u << 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] & 255u);
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1108)));
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[18] = (0u | 18u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[18] = (0u | 15u);
        goto L_088223DC;
    }
    goto L_088223DC;
L_088223DC:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[17] = (0u | 20u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (0u | 17u);
        goto L_088223EC;
    }
    goto L_088223EC;
L_088223EC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[20] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08822404u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08822404u) goto L_08822404;
    return;
L_08822404:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08822420;
      }
      goto L_08822414;
    }
L_08822414:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08822420;
L_08822420:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_08822440;
    }
    goto L_08822434;
L_08822434:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08822450;
      }
      goto L_08822440;
    }
L_08822440:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08822450;
L_08822450:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0882247C;
      }
      goto L_08822468;
    }
L_08822468:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882247C;
      }
      goto L_08822478;
    }
L_08822478:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0882247C;
L_0882247C:
    aot_gpr[6] = (15923u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 13107u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 19u);
    aot_gpr[31] = (0x088224A8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x088224A8u) goto L_088224A8;
    return;
L_088224A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1108), aot_gpr[17]);
    goto L_088224AC;
L_088224AC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088224D0:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882259C;
      }
      goto L_088224EC;
    }
L_088224EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[10] = (2u << 16u);
      if (branch_taken) {
          goto L_0882259C;
      }
      goto L_08822504;
    }
L_08822504:
    aot_gpr[9] = (0u | 10u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(8));
    goto L_08822514;
L_08822514:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08822588;
      }
      goto L_0882252C;
    }
L_0882252C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(72), aot_gpr[7]);
      if (branch_taken) {
          goto L_08822540;
      }
      goto L_08822534;
    }
L_08822534:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    aot_gpr[11] = (aot_gpr[11] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(88), aot_gpr[11]);
    goto L_08822540;
L_08822540:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(35)));
    aot_gpr[12] = (aot_gpr[11] & 32u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[11] = (aot_gpr[11] & 64u);
      if (branch_taken) {
          goto L_08822558;
      }
      goto L_08822550;
    }
L_08822550:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822588;
      }
      goto L_08822558;
    }
L_08822558:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(35)));
    aot_gpr[11] = (aot_gpr[11] & 32u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822588;
      }
      goto L_08822574;
    }
L_08822574:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(48), 0u);
    goto L_08822588;
L_08822588:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08822514;
      }
      goto L_0882259C;
    }
L_0882259C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088225A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(488), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[13] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08822614;
      }
      goto L_088225B8;
    }
L_088225B8:
    aot_gpr[15] = (0u | 0u);
    aot_gpr[14] = (0u | 0u);
    goto L_088225C0;
L_088225C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(488)));
    aot_gpr[24] = (aot_gpr[15] & 255u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[13] | 0u);
    aot_gpr[5] = (aot_gpr[24] | 0u);
    aot_gpr[31] = (0x088225E0u);
    aot_gpr[6] = (0u | 1u);
    goto L_088224D0;
L_088225E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(488)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[13] | 0u);
    aot_gpr[31] = (0x08822604u);
    aot_gpr[5] = (aot_gpr[24] | 0u);
    goto L_088224D0;
L_08822604:
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[15]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088225C0;
      }
      goto L_08822614;
    }
L_08822614:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822620:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882263C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(492)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3936));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08822660;
      }
      goto L_08822650;
    }
L_08822650:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3888));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08822664;
      }
      goto L_08822660;
    }
L_08822660:
    aot_gpr[5] = (0u | 1u);
    goto L_08822664;
L_08822664:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882266C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(481))))));
    aot_gpr[10] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] << 6u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(216)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(160)));
    aot_gpr[11] = (aot_gpr[10] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(160)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[8] == aot_gpr[6];
    aot_gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_088227C4;
      }
      goto L_088227BC;
    }
L_088227BC:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088227D4;
      }
      goto L_088227C4;
    }
L_088227C4:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    goto L_088227D4;
L_088227D4:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822808:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[9] & 255u);
      if (branch_taken) {
          goto L_088229CC;
      }
      goto L_08822864;
    }
L_08822864:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] & 16u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088228D0;
      }
      goto L_0882287C;
    }
L_0882287C:
    if (aot_gpr[7] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0882288C;
    }
    goto L_08822884;
L_08822884:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08822890;
      }
      goto L_0882288C;
    }
L_0882288C:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    goto L_08822890;
L_08822890:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088228D4;
      }
      goto L_088228A8;
    }
L_088228A8:
    aot_gpr[7] = (aot_gpr[8] & 2u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] == 0u) {
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
        goto L_088228C8;
    }
    goto L_088228BC;
L_088228BC:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = aot_fpr[12] - aot_fpr[22];
      if (branch_taken) {
          goto L_088228C8;
      }
      goto L_088228C8;
    }
L_088228C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088228D4;
      }
      goto L_088228D0;
    }
L_088228D0:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088228D4;
L_088228D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088228F8;
      }
      goto L_088228DC;
    }
L_088228DC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088228F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x088228F0u) goto L_088228F0;
    return;
L_088228F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08822998;
      }
      goto L_088228F8;
    }
L_088228F8:
    aot_gpr[4] = (aot_gpr[8] & 4u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08822920;
      }
      goto L_08822910;
    }
L_08822910:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0882297C;
      }
      goto L_08822920;
    }
L_08822920:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
        goto L_08822940;
    }
    goto L_08822934;
L_08822934:
    aot_fpr[13] = aot_fpr[22] / aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0882297C;
      }
      goto L_08822940;
    }
L_08822940:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[15] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08822978;
      }
      goto L_0882295C;
    }
L_0882295C:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[14];
    aot_fpr[15] = aot_fpr[22] - aot_fpr[15];
    aot_fpr[14] = aot_fpr[15] / aot_fpr[14];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0882297C;
      }
      goto L_08822978;
    }
L_08822978:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_0882297C;
L_0882297C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08822994u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 13u, 0x08918194u>(ctx, &aot_mem) && ctx.pc == 0x08822994u) goto L_08822994;
    return;
L_08822994:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08822998;
L_08822998:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088229B8;
      }
      goto L_088229A0;
    }
L_088229A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088229B4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 14u, 0x0891F128u>(ctx, &aot_mem) && ctx.pc == 0x088229B4u) goto L_088229B4;
    return;
L_088229B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088229B8;
L_088229B8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088229C8u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 16u, 0x08918224u>(ctx, &aot_mem) && ctx.pc == 0x088229C8u) goto L_088229C8;
    return;
L_088229C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088229CC;
L_088229CC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088229EC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822A0C:
    aot_gpr[2] = (aot_gpr[4] << 24u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_08822A34;
      }
      goto L_08822A20;
    }
L_08822A20:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822A34;
      }
      goto L_08822A28;
    }
L_08822A28:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[4] << 24u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
    goto L_08822A34;
L_08822A34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822A3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08822A64u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08822A64u) goto L_08822A64;
    return;
L_08822A64:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08822A70u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08822A0C;
L_08822A70:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08822AB4;
      }
      goto L_08822A7C;
    }
L_08822A7C:
    aot_gpr[31] = (0x08822A84u);
    // nop
    goto L_08822A0C;
L_08822A84:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08822AA4;
      }
      goto L_08822A8C;
    }
L_08822A8C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08822A9Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 223u, 0x08A3AB88u>(ctx, &aot_mem) && ctx.pc == 0x08822A9Cu) goto L_08822A9C;
    return;
L_08822A9C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822ABC;
      }
      goto L_08822AA4;
    }
L_08822AA4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822A7C;
      }
      goto L_08822AB4;
    }
L_08822AB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08822AC0;
      }
      goto L_08822ABC;
    }
L_08822ABC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_08822AC0;
L_08822AC0:
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
L_08822ADC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-3732)));
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-3840));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[18] = (2218u << 16u);
      if (branch_taken) {
          goto L_08822B78;
      }
      goto L_08822B14;
    }
L_08822B14:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B48;
      }
      goto L_08822B1C;
    }
L_08822B1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08822B78;
      }
      goto L_08822B24;
    }
L_08822B24:
    aot_gpr[31] = (0x08822B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x08822B2Cu) goto L_08822B2C;
    return;
L_08822B2C:
    aot_gpr[31] = (0x08822B34u);
    aot_gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x08822B34u) goto L_08822B34;
    return;
L_08822B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-3732)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08822B24;
      }
      goto L_08822B40;
    }
L_08822B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B78;
      }
      goto L_08822B48;
    }
L_08822B48:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08822B54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3760)));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 20u, 0x089343A0u>(ctx, &aot_mem) && ctx.pc == 0x08822B54u) goto L_08822B54;
    return;
L_08822B54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-3736)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822B74;
      }
      goto L_08822B60;
    }
L_08822B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-3732)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08822B74;
      }
      goto L_08822B6C;
    }
L_08822B6C:
    aot_gpr[31] = (0x08822B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x08822B74u) goto L_08822B74;
    return;
L_08822B74:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-3732), aot_gpr[17]);
    goto L_08822B78;
L_08822B78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822B8C;
    }
L_08822B8C:
    aot_gpr[31] = (0x08822B94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 59u, 0x08927620u>(ctx, &aot_mem) && ctx.pc == 0x08822B94u) goto L_08822B94;
    return;
L_08822B94:
    aot_gpr[4] = (0u | 1u);
    goto L_08822B98;
L_08822B98:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3776), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3773), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3772), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3752), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3748), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3740), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-3736), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-3732), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3724), 0u);
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
L_08822C04:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-3752)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (2u << 16u);
      if (branch_taken) {
          goto L_08822CBC;
      }
      goto L_08822C24;
    }
L_08822C24:
    aot_gpr[7] = (0u | 10u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    goto L_08822C34;
L_08822C34:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08822CA8;
      }
      goto L_08822C4C;
    }
L_08822C4C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_08822C60;
      }
      goto L_08822C54;
    }
L_08822C54:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(88)));
    aot_gpr[9] = (aot_gpr[9] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(88), aot_gpr[9]);
    goto L_08822C60;
L_08822C60:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(35)));
    aot_gpr[12] = (aot_gpr[9] & 32u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[9] = (aot_gpr[9] & 64u);
      if (branch_taken) {
          goto L_08822C78;
      }
      goto L_08822C70;
    }
L_08822C70:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822CA8;
      }
      goto L_08822C78;
    }
L_08822C78:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(35)));
    aot_gpr[9] = (aot_gpr[9] & 32u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822CA8;
      }
      goto L_08822C94;
    }
L_08822C94:
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(48), 0u);
    goto L_08822CA8;
L_08822CA8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[2] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08822C34;
      }
      goto L_08822CBC;
    }
L_08822CBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08822E30;
      }
      goto L_08822CEC;
    }
L_08822CEC:
    aot_gpr[19] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08822CFCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x08822CFCu) goto L_08822CFC;
    return;
L_08822CFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3752)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08822D0Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x08822D0Cu) goto L_08822D0C;
    return;
L_08822D0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3752)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08822D1Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x08822D1Cu) goto L_08822D1C;
    return;
L_08822D1C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08822D3C;
      }
      goto L_08822D2C;
    }
L_08822D2C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08822E30;
      }
      goto L_08822D34;
    }
L_08822D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822D58;
      }
      goto L_08822D3C;
    }
L_08822D3C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08822DA0;
      }
      goto L_08822D48;
    }
L_08822D48:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822DE8;
      }
      goto L_08822D50;
    }
L_08822D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822E30;
      }
      goto L_08822D58;
    }
L_08822D58:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822D6C;
      }
      goto L_08822D60;
    }
L_08822D60:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08822D6Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822D6Cu) goto L_08822D6C;
    return;
L_08822D6C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822D80;
      }
      goto L_08822D74;
    }
L_08822D74:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08822D80u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822D80u) goto L_08822D80;
    return;
L_08822D80:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822D94;
      }
      goto L_08822D88;
    }
L_08822D88:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08822D94u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822D94u) goto L_08822D94;
    return;
L_08822D94:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3744), aot_gpr[18]);
      if (branch_taken) {
          goto L_08822E30;
      }
      goto L_08822DA0;
    }
L_08822DA0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822DB4;
      }
      goto L_08822DA8;
    }
L_08822DA8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08822DB4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822DB4u) goto L_08822DB4;
    return;
L_08822DB4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822DC8;
      }
      goto L_08822DBC;
    }
L_08822DBC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08822DC8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822DC8u) goto L_08822DC8;
    return;
L_08822DC8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822DDC;
      }
      goto L_08822DD0;
    }
L_08822DD0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08822DDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822DDCu) goto L_08822DDC;
    return;
L_08822DDC:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3744), aot_gpr[17]);
      if (branch_taken) {
          goto L_08822E30;
      }
      goto L_08822DE8;
    }
L_08822DE8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822DFC;
      }
      goto L_08822DF0;
    }
L_08822DF0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08822DFCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822DFCu) goto L_08822DFC;
    return;
L_08822DFC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822E10;
      }
      goto L_08822E04;
    }
L_08822E04:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08822E10u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822E10u) goto L_08822E10;
    return;
L_08822E10:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822E24;
      }
      goto L_08822E18;
    }
L_08822E18:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08822E24u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x08822E24u) goto L_08822E24;
    return;
L_08822E24:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3744), aot_gpr[16]);
      if (branch_taken) {
          goto L_08822E30;
      }
      goto L_08822E30;
    }
L_08822E30:
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
L_08822E4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08822E64u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x08822E64u) goto L_08822E64;
    return;
L_08822E64:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3748), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822E78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-3840));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x08822EC0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 69u, 0x08928714u>(ctx, &aot_mem) && ctx.pc == 0x08822EC0u) goto L_08822EC0;
    return;
L_08822EC0:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-3724), aot_gpr[18]);
    aot_gpr[31] = (0x08822EDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14172));
    goto L_08822A3C;
L_08822EDC:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (2218u << 16u);
      if (branch_taken) {
          goto L_08822F0C;
      }
      goto L_08822EF0;
    }
L_08822EF0:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-3776), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-3775), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3774), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-3724), 0u);
      if (branch_taken) {
          goto L_08822F88;
      }
      goto L_08822F0C;
    }
L_08822F0C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08822F1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14164));
    goto L_08822A3C;
L_08822F1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F40;
      }
      goto L_08822F24;
    }
L_08822F24:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-3776), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-3775), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3774), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08822F88;
      }
      goto L_08822F40;
    }
L_08822F40:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08822F50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14160));
    goto L_08822A3C;
L_08822F50:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F74;
      }
      goto L_08822F58;
    }
L_08822F58:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-3776), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-3775), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3774), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08822F88;
      }
      goto L_08822F74;
    }
L_08822F74:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-3776), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-3775), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3774), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08822F88;
L_08822F88:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08822FA0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 100u, 0x089289CCu>(ctx, &aot_mem) && ctx.pc == 0x08822FA0u) goto L_08822FA0;
    return;
L_08822FA0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08822FC8;
      }
      goto L_08822FB0;
    }
L_08822FB0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08822FC4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 83u, 0x08920718u>(ctx, &aot_mem) && ctx.pc == 0x08822FC4u) goto L_08822FC4;
    return;
L_08822FC4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08822FC8;
L_08822FC8:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3752), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08822FE8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 100u, 0x089289CCu>(ctx, &aot_mem) && ctx.pc == 0x08822FE8u) goto L_08822FE8;
    return;
L_08822FE8:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 3u, 0x08823010u>(ctx, &aot_mem); return;
      }
      goto L_08822FF8;
    }
L_08822FF8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08823000u; return;
}

void recomp_unit_0030(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0030_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_30(Runtime &runtime) {
    runtime.register_generated_unit(30u, 0x08822000u, 4096u, &recomp_unit_0030, &recomp_unit_0030_entry);
    runtime.register_function(0x08822004u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822020u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822038u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822048u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882204Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822078u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882207Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088220A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088220DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088220E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822114u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822120u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822134u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822138u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822140u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882214Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822154u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822160u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822164u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822178u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822188u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822194u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088221A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088221B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088221C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088221DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088221ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088221F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882221Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822220u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822244u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822274u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822280u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088222A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088222B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088222D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088222E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088222ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822300u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882230Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882231Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822350u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882236Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088223A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088223B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088223DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088223ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822404u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822414u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822420u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822434u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822440u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822450u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822468u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882247Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088224A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088224ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088224D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088224ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822514u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882252Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822534u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822540u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822550u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822558u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822574u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882259Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088225A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088225B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088225C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088225E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822604u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822614u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822620u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882263Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822650u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822664u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882266Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088227BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088227C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088227D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822808u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822864u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882287Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822884u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882288Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822890u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088228F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822910u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822920u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822934u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822940u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882295Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822978u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0882297Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822994u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822998u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088229A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088229B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088229B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088229C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088229CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x088229ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822A9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822AA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822AB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822ABCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822AC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822ADCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822B98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822C94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822CA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822CBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822CC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822CECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822CFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822D94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822DFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822E78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822EC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822EDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822EF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822F88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822FA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822FB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822FC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822FC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822FE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x08822FF8u, &recomp_unit_0030, "recomp_unit_0030");
}
} // namespace psprecomp
