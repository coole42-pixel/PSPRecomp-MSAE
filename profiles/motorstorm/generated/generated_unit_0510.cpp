#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0510[1024] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0,
    47, 48, 0, 49, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67,
    0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0,
    89, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 95,
    0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 133, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0,
    0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181,
    0, 182, 0, 0, 183, 0, 184, 0, 185, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 191,
    0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222,
};
void recomp_unit_0510_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A02000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0510[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A02000;
    case 2u: goto L_08A02010;
    case 3u: goto L_08A02018;
    case 4u: goto L_08A02020;
    case 5u: goto L_08A0204C;
    case 6u: goto L_08A02088;
    case 7u: goto L_08A02094;
    case 8u: goto L_08A0209C;
    case 9u: goto L_08A020A8;
    case 10u: goto L_08A020B0;
    case 11u: goto L_08A020B8;
    case 12u: goto L_08A020C0;
    case 13u: goto L_08A020C8;
    case 14u: goto L_08A020D8;
    case 15u: goto L_08A020F0;
    case 16u: goto L_08A02128;
    case 17u: goto L_08A02138;
    case 18u: goto L_08A02144;
    case 19u: goto L_08A0215C;
    case 20u: goto L_08A0216C;
    case 21u: goto L_08A02178;
    case 22u: goto L_08A02188;
    case 23u: goto L_08A021A0;
    case 24u: goto L_08A021D8;
    case 25u: goto L_08A021E8;
    case 26u: goto L_08A021F4;
    case 27u: goto L_08A0220C;
    case 28u: goto L_08A0221C;
    case 29u: goto L_08A02228;
    case 30u: goto L_08A0223C;
    case 31u: goto L_08A0227C;
    case 32u: goto L_08A0228C;
    case 33u: goto L_08A02298;
    case 34u: goto L_08A022A0;
    case 35u: goto L_08A022AC;
    case 36u: goto L_08A022C4;
    case 37u: goto L_08A02304;
    case 38u: goto L_08A02314;
    case 39u: goto L_08A02320;
    case 40u: goto L_08A02328;
    case 41u: goto L_08A02330;
    case 42u: goto L_08A02338;
    case 43u: goto L_08A02340;
    case 44u: goto L_08A02358;
    case 45u: goto L_08A02360;
    case 46u: goto L_08A02378;
    case 47u: goto L_08A02380;
    case 48u: goto L_08A02384;
    case 49u: goto L_08A0238C;
    case 50u: goto L_08A02390;
    case 51u: goto L_08A023A0;
    case 52u: goto L_08A023E4;
    case 53u: goto L_08A02404;
    case 54u: goto L_08A02424;
    case 55u: goto L_08A0242C;
    case 56u: goto L_08A02450;
    case 57u: goto L_08A02478;
    case 58u: goto L_08A02494;
    case 59u: goto L_08A024A8;
    case 60u: goto L_08A024EC;
    case 61u: goto L_08A02508;
    case 62u: goto L_08A02528;
    case 63u: goto L_08A02534;
    case 64u: goto L_08A0253C;
    case 65u: goto L_08A02550;
    case 66u: goto L_08A02574;
    case 67u: goto L_08A0257C;
    case 68u: goto L_08A02588;
    case 69u: goto L_08A02590;
    case 70u: goto L_08A02598;
    case 71u: goto L_08A025B4;
    case 72u: goto L_08A025BC;
    case 73u: goto L_08A025D0;
    case 74u: goto L_08A025D8;
    case 75u: goto L_08A025F4;
    case 76u: goto L_08A02604;
    case 77u: goto L_08A02618;
    case 78u: goto L_08A02620;
    case 79u: goto L_08A0262C;
    case 80u: goto L_08A0263C;
    case 81u: goto L_08A02650;
    case 82u: goto L_08A02670;
    case 83u: goto L_08A02684;
    case 84u: goto L_08A02690;
    case 85u: goto L_08A026A0;
    case 86u: goto L_08A026B4;
    case 87u: goto L_08A026E8;
    case 88u: goto L_08A026F4;
    case 89u: goto L_08A02700;
    case 90u: goto L_08A02704;
    case 91u: goto L_08A02728;
    case 92u: goto L_08A02758;
    case 93u: goto L_08A0276C;
    case 94u: goto L_08A02778;
    case 95u: goto L_08A0277C;
    case 96u: goto L_08A02784;
    case 97u: goto L_08A02790;
    case 98u: goto L_08A02798;
    case 99u: goto L_08A027A4;
    case 100u: goto L_08A027A8;
    case 101u: goto L_08A027B4;
    case 102u: goto L_08A027C0;
    case 103u: goto L_08A027E0;
    case 104u: goto L_08A027E8;
    case 105u: goto L_08A02804;
    case 106u: goto L_08A02820;
    case 107u: goto L_08A02840;
    case 108u: goto L_08A0284C;
    case 109u: goto L_08A02854;
    case 110u: goto L_08A02868;
    case 111u: goto L_08A0288C;
    case 112u: goto L_08A02894;
    case 113u: goto L_08A028A0;
    case 114u: goto L_08A028A8;
    case 115u: goto L_08A028B0;
    case 116u: goto L_08A028CC;
    case 117u: goto L_08A028D4;
    case 118u: goto L_08A028E8;
    case 119u: goto L_08A028F0;
    case 120u: goto L_08A0290C;
    case 121u: goto L_08A0291C;
    case 122u: goto L_08A02930;
    case 123u: goto L_08A02938;
    case 124u: goto L_08A02944;
    case 125u: goto L_08A02954;
    case 126u: goto L_08A02968;
    case 127u: goto L_08A02988;
    case 128u: goto L_08A0299C;
    case 129u: goto L_08A029A8;
    case 130u: goto L_08A029B8;
    case 131u: goto L_08A029CC;
    case 132u: goto L_08A029F8;
    case 133u: goto L_08A02A04;
    case 134u: goto L_08A02A0C;
    case 135u: goto L_08A02A10;
    case 136u: goto L_08A02A30;
    case 137u: goto L_08A02A5C;
    case 138u: goto L_08A02A6C;
    case 139u: goto L_08A02A74;
    case 140u: goto L_08A02A7C;
    case 141u: goto L_08A02A90;
    case 142u: goto L_08A02AD0;
    case 143u: goto L_08A02AE4;
    case 144u: goto L_08A02AEC;
    case 145u: goto L_08A02AFC;
    case 146u: goto L_08A02B10;
    case 147u: goto L_08A02B18;
    case 148u: goto L_08A02B20;
    case 149u: goto L_08A02B30;
    case 150u: goto L_08A02B3C;
    case 151u: goto L_08A02B4C;
    case 152u: goto L_08A02B58;
    case 153u: goto L_08A02B60;
    case 154u: goto L_08A02B94;
    case 155u: goto L_08A02B9C;
    case 156u: goto L_08A02BAC;
    case 157u: goto L_08A02BB4;
    case 158u: goto L_08A02BBC;
    case 159u: goto L_08A02BE8;
    case 160u: goto L_08A02C08;
    case 161u: goto L_08A02C10;
    case 162u: goto L_08A02C18;
    case 163u: goto L_08A02C34;
    case 164u: goto L_08A02C40;
    case 165u: goto L_08A02C58;
    case 166u: goto L_08A02C60;
    case 167u: goto L_08A02C78;
    case 168u: goto L_08A02C84;
    case 169u: goto L_08A02C90;
    case 170u: goto L_08A02C9C;
    case 171u: goto L_08A02CE8;
    case 172u: goto L_08A02D04;
    case 173u: goto L_08A02D18;
    case 174u: goto L_08A02D20;
    case 175u: goto L_08A02D34;
    case 176u: goto L_08A02D3C;
    case 177u: goto L_08A02D50;
    case 178u: goto L_08A02D5C;
    case 179u: goto L_08A02D64;
    case 180u: goto L_08A02D70;
    case 181u: goto L_08A02D7C;
    case 182u: goto L_08A02D84;
    case 183u: goto L_08A02D90;
    case 184u: goto L_08A02D98;
    case 185u: goto L_08A02DA0;
    case 186u: goto L_08A02DA4;
    case 187u: goto L_08A02DAC;
    case 188u: goto L_08A02DD8;
    case 189u: goto L_08A02DEC;
    case 190u: goto L_08A02DF4;
    case 191u: goto L_08A02DFC;
    case 192u: goto L_08A02E08;
    case 193u: goto L_08A02E10;
    case 194u: goto L_08A02E24;
    case 195u: goto L_08A02E30;
    case 196u: goto L_08A02E38;
    case 197u: goto L_08A02E40;
    case 198u: goto L_08A02E4C;
    case 199u: goto L_08A02E50;
    case 200u: goto L_08A02E84;
    case 201u: goto L_08A02EA0;
    case 202u: goto L_08A02EC0;
    case 203u: goto L_08A02ECC;
    case 204u: goto L_08A02ED4;
    case 205u: goto L_08A02EE8;
    case 206u: goto L_08A02F0C;
    case 207u: goto L_08A02F14;
    case 208u: goto L_08A02F20;
    case 209u: goto L_08A02F28;
    case 210u: goto L_08A02F30;
    case 211u: goto L_08A02F4C;
    case 212u: goto L_08A02F54;
    case 213u: goto L_08A02F68;
    case 214u: goto L_08A02F70;
    case 215u: goto L_08A02F8C;
    case 216u: goto L_08A02F9C;
    case 217u: goto L_08A02FB0;
    case 218u: goto L_08A02FB8;
    case 219u: goto L_08A02FC4;
    case 220u: goto L_08A02FD4;
    case 221u: goto L_08A02FE8;
    case 222u: goto L_08A02FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A02000:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02010u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02010u) goto L_08A02010;
    return;
L_08A02010:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A02018;
    }
L_08A02018:
    aot_gpr[31] = (0x08A02020u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 221u, 0x08A00E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02020u) goto L_08A02020;
    return;
L_08A02020:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 2u));
    aot_gpr[9] = (aot_gpr[9] >> 30u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 2u));
    goto L_08A0204C;
L_08A0204C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 5 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A0204C;
      }
      goto L_08A02088;
    }
L_08A02088:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A020B0;
      }
      goto L_08A02094;
    }
L_08A02094:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A0209C;
    }
L_08A0209C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A020C8;
      }
      goto L_08A020A8;
    }
L_08A020A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02178;
      }
      goto L_08A020B0;
    }
L_08A020B0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A022AC;
      }
      goto L_08A020B8;
    }
L_08A020B8:
    if (aot_gpr[4] != 0u) {
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A02228;
    }
    goto L_08A020C0;
L_08A020C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A020C8;
    }
L_08A020C8:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A020D8;
    }
L_08A020D8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[17] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (aot_gpr[29] | 0u);
    goto L_08A020F0;
L_08A020F0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[10] = (0u | 2u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x08A02128u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 89u, 0x08A015A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02128u) goto L_08A02128;
    return;
L_08A02128:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08A02138u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 119u, 0x08A01780u>(ctx, &aot_mem) && ctx.pc == 0x08A02138u) goto L_08A02138;
    return;
L_08A02138:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A0215C;
      }
      goto L_08A02144;
    }
L_08A02144:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[20] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08A0215C;
L_08A0215C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A020F0;
      }
      goto L_08A0216C;
    }
L_08A0216C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A02178;
    }
L_08A02178:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A02188;
    }
L_08A02188:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[17] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (aot_gpr[29] | 0u);
    goto L_08A021A0;
L_08A021A0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[10] = (0u | 2u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x08A021D8u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 89u, 0x08A015A0u>(ctx, &aot_mem) && ctx.pc == 0x08A021D8u) goto L_08A021D8;
    return;
L_08A021D8:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08A021E8u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 119u, 0x08A01780u>(ctx, &aot_mem) && ctx.pc == 0x08A021E8u) goto L_08A021E8;
    return;
L_08A021E8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A0220C;
      }
      goto L_08A021F4;
    }
L_08A021F4:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[20] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08A0220C;
L_08A0220C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A021A0;
      }
      goto L_08A0221C;
    }
L_08A0221C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A02228;
    }
L_08A02228:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A0223C;
    }
L_08A0223C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[26]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[10] = (0u | 5u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A0227Cu);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 89u, 0x08A015A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0227Cu) goto L_08A0227C;
    return;
L_08A0227C:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08A0228Cu);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 119u, 0x08A01780u>(ctx, &aot_mem) && ctx.pc == 0x08A0228Cu) goto L_08A0228C;
    return;
L_08A0228C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A022A0;
      }
      goto L_08A02298;
    }
L_08A02298:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_08A022A0;
L_08A022A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A022AC;
    }
L_08A022AC:
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02330;
      }
      goto L_08A022C4;
    }
L_08A022C4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[26]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[10] = (0u | 5u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A02304u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 89u, 0x08A015A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02304u) goto L_08A02304;
    return;
L_08A02304:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08A02314u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 119u, 0x08A01780u>(ctx, &aot_mem) && ctx.pc == 0x08A02314u) goto L_08A02314;
    return;
L_08A02314:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A02328;
      }
      goto L_08A02320;
    }
L_08A02320:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_08A02328;
L_08A02328:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08A02330;
L_08A02330:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 234u, 0x08A01FB0u>(ctx, &aot_mem); return;
      }
      goto L_08A02338;
    }
L_08A02338:
    if (aot_gpr[20] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
        goto L_08A02384;
    }
    goto L_08A02340;
L_08A02340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02358u);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02358u) goto L_08A02358;
    return;
L_08A02358:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A023A0;
      }
      goto L_08A02360;
    }
L_08A02360:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x08A02378u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 122u, 0x08A017BCu>(ctx, &aot_mem) && ctx.pc == 0x08A02378u) goto L_08A02378;
    return;
L_08A02378:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08A02390;
      }
      goto L_08A02380;
    }
L_08A02380:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    goto L_08A02384;
L_08A02384:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A023E4;
      }
      goto L_08A0238C;
    }
L_08A0238C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08A02390;
L_08A02390:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 207u, 0x08A01D4Cu>(ctx, &aot_mem); return;
      }
      goto L_08A023A0;
    }
L_08A023A0:
    aot_gpr[2] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A023E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02404u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02404u) goto L_08A02404;
    return;
L_08A02404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02424u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02424u) goto L_08A02424;
    return;
L_08A02424:
    aot_gpr[31] = (0x08A0242Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0242Cu) goto L_08A0242C;
    return;
L_08A0242C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5944));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02450u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02450u) goto L_08A02450;
    return;
L_08A02450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(208));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A02478u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02478u) goto L_08A02478;
    return;
L_08A02478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02494u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02494u) goto L_08A02494;
    return;
L_08A02494:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A024A8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A024A8u) goto L_08A024A8;
    return;
L_08A024A8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A024EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0253C;
      }
      goto L_08A02508;
    }
L_08A02508:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18400), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A02528u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02528u) goto L_08A02528;
    return;
L_08A02528:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0253C;
      }
      goto L_08A02534;
    }
L_08A02534:
    aot_gpr[31] = (0x08A0253Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A02604;
L_08A0253C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18400)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02598;
      }
      goto L_08A02574;
    }
L_08A02574:
    aot_gpr[31] = (0x08A0257Cu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A025BC;
L_08A0257C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18400), aot_gpr[17]);
        goto L_08A02598;
    }
    goto L_08A02588;
L_08A02588:
    aot_gpr[31] = (0x08A02590u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0263C;
L_08A02590:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18400), aot_gpr[17]);
    goto L_08A02598;
L_08A02598:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18400)));
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
L_08A025B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A025BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A025D0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A025D0u) goto L_08A025D0;
    return;
L_08A025D0:
    aot_gpr[31] = (0x08A025D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A025D8u) goto L_08A025D8;
    return;
L_08A025D8:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 15u);
    aot_gpr[31] = (0x08A025F4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5928));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A025F4u) goto L_08A025F4;
    return;
L_08A025F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02618u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02618u) goto L_08A02618;
    return;
L_08A02618:
    aot_gpr[31] = (0x08A02620u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02620u) goto L_08A02620;
    return;
L_08A02620:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0262Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0262Cu) goto L_08A0262C;
    return;
L_08A0262C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0263C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02650u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A02650u) goto L_08A02650;
    return;
L_08A02650:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02684u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02684u) goto L_08A02684;
    return;
L_08A02684:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A02690u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02690u) goto L_08A02690;
    return;
L_08A02690:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A026A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5896));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A026A0u) goto L_08A026A0;
    return;
L_08A026A0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A026B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A026E8u);
    aot_gpr[4] = (0u | 332u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A026E8u) goto L_08A026E8;
    return;
L_08A026E8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A02704;
      }
      goto L_08A026F4;
    }
L_08A026F4:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A02700u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 181u, 0x08A0A914u>(ctx, &aot_mem) && ctx.pc == 0x08A02700u) goto L_08A02700;
    return;
L_08A02700:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A02704;
L_08A02704:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02728:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02758u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02758u) goto L_08A02758;
    return;
L_08A02758:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A0276Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A0276Cu) goto L_08A0276C;
    return;
L_08A0276C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A027C0;
      }
      goto L_08A02778;
    }
L_08A02778:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-5888));
    goto L_08A0277C;
L_08A0277C:
    aot_gpr[31] = (0x08A02784u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A02784u) goto L_08A02784;
    return;
L_08A02784:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A02790u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02790u) goto L_08A02790;
    return;
L_08A02790:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A027A8;
    }
    goto L_08A02798;
L_08A02798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A027E0;
      }
      goto L_08A027A4;
    }
L_08A027A4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A027A8;
L_08A027A8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A027B4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A027B4u) goto L_08A027B4;
    return;
L_08A027B4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0277C;
      }
      goto L_08A027C0;
    }
L_08A027C0:
    aot_gpr[2] = (0u | 0u);
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
L_08A027E0:
    aot_gpr[31] = (0x08A027E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 195u, 0x08A0AA20u>(ctx, &aot_mem) && ctx.pc == 0x08A027E8u) goto L_08A027E8;
    return;
L_08A027E8:
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
L_08A02804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A02854;
      }
      goto L_08A02820;
    }
L_08A02820:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11632));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18392), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A02840u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02840u) goto L_08A02840;
    return;
L_08A02840:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02854;
      }
      goto L_08A0284C;
    }
L_08A0284C:
    aot_gpr[31] = (0x08A02854u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0291C;
L_08A02854:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02868:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A028B0;
      }
      goto L_08A0288C;
    }
L_08A0288C:
    aot_gpr[31] = (0x08A02894u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A028D4;
L_08A02894:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18392), aot_gpr[17]);
        goto L_08A028B0;
    }
    goto L_08A028A0;
L_08A028A0:
    aot_gpr[31] = (0x08A028A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A02954;
L_08A028A8:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18392), aot_gpr[17]);
    goto L_08A028B0;
L_08A028B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18392)));
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
L_08A028CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A028D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A028E8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A028E8u) goto L_08A028E8;
    return;
L_08A028E8:
    aot_gpr[31] = (0x08A028F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A028F0u) goto L_08A028F0;
    return;
L_08A028F0:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 17u);
    aot_gpr[31] = (0x08A0290Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5872));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0290Cu) goto L_08A0290C;
    return;
L_08A0290C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0291C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02930u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02930u) goto L_08A02930;
    return;
L_08A02930:
    aot_gpr[31] = (0x08A02938u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02938u) goto L_08A02938;
    return;
L_08A02938:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A02944u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A02944u) goto L_08A02944;
    return;
L_08A02944:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02954:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02968u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A02968u) goto L_08A02968;
    return;
L_08A02968:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11632));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02988:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0299Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0299Cu) goto L_08A0299C;
    return;
L_08A0299C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A029A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A029A8u) goto L_08A029A8;
    return;
L_08A029A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A029B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5840));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A029B8u) goto L_08A029B8;
    return;
L_08A029B8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A029F8u);
    aot_gpr[4] = (0u | 304u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A029F8u) goto L_08A029F8;
    return;
L_08A029F8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A02A10;
      }
      goto L_08A02A04;
    }
L_08A02A04:
    aot_gpr[31] = (0x08A02A0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 31u, 0x08A0B204u>(ctx, &aot_mem) && ctx.pc == 0x08A02A0Cu) goto L_08A02A0C;
    return;
L_08A02A0C:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A02A10;
L_08A02A10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A02A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A02A5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5832));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 47u, 0x08A0B2FCu>(ctx, &aot_mem) && ctx.pc == 0x08A02A5Cu) goto L_08A02A5C;
    return;
L_08A02A5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02A7C;
      }
      goto L_08A02A6C;
    }
L_08A02A6C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A02A7C;
      }
      goto L_08A02A74;
    }
L_08A02A74:
    aot_gpr[31] = (0x08A02A7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A02A90;
L_08A02A7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02A90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    aot_gpr[31] = (0x08A02AD0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-5820));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02AD0u) goto L_08A02AD0;
    return;
L_08A02AD0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02AE4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02AE4u) goto L_08A02AE4;
    return;
L_08A02AE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A02B60;
      }
      goto L_08A02AEC;
    }
L_08A02AEC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08A02AFCu);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-5812));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02AFCu) goto L_08A02AFC;
    return;
L_08A02AFC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02B10u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02B10u) goto L_08A02B10;
    return;
L_08A02B10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02B60;
      }
      goto L_08A02B18;
    }
L_08A02B18:
    aot_gpr[31] = (0x08A02B20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A02B20u) goto L_08A02B20;
    return;
L_08A02B20:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A02B30u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02B30u) goto L_08A02B30;
    return;
L_08A02B30:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A02B3Cu);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-5804));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02B3Cu) goto L_08A02B3C;
    return;
L_08A02B3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02B4Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02B4Cu) goto L_08A02B4C;
    return;
L_08A02B4C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A02B94;
      }
      goto L_08A02B58;
    }
L_08A02B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E08;
      }
      goto L_08A02B60;
    }
L_08A02B60:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02B94:
    aot_gpr[31] = (0x08A02B9Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-5788));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02B9Cu) goto L_08A02B9C;
    return;
L_08A02B9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A02BACu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02BACu) goto L_08A02BAC;
    return;
L_08A02BAC:
    aot_gpr[31] = (0x08A02BB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02BB4u) goto L_08A02BB4;
    return;
L_08A02BB4:
    aot_gpr[31] = (0x08A02BBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02BBCu) goto L_08A02BBC;
    return;
L_08A02BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(-5872));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 82u);
    aot_gpr[31] = (0x08A02BE8u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A02BE8u) goto L_08A02BE8;
    return;
L_08A02BE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A02C08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02C08u) goto L_08A02C08;
    return;
L_08A02C08:
    aot_gpr[31] = (0x08A02C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02C10u) goto L_08A02C10;
    return;
L_08A02C10:
    aot_gpr[31] = (0x08A02C18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02C18u) goto L_08A02C18;
    return;
L_08A02C18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 89u);
    aot_gpr[31] = (0x08A02C34u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A02C34u) goto L_08A02C34;
    return;
L_08A02C34:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E08;
      }
      goto L_08A02C40;
    }
L_08A02C40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A02C58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02C58u) goto L_08A02C58;
    return;
L_08A02C58:
    aot_gpr[31] = (0x08A02C60u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02C60u) goto L_08A02C60;
    return;
L_08A02C60:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A02C78u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02C78u) goto L_08A02C78;
    return;
L_08A02C78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A02DEC;
      }
      goto L_08A02C84;
    }
L_08A02C84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02DEC;
      }
      goto L_08A02C90;
    }
L_08A02C90:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A02DEC;
      }
      goto L_08A02C9C;
    }
L_08A02C9C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5780));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5760));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5740));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-5732));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-5720));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-5712));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-5704));
    goto L_08A02CE8;
L_08A02CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x08A02D04u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02D04u) goto L_08A02D04;
    return;
L_08A02D04:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02D18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02D18u) goto L_08A02D18;
    return;
L_08A02D18:
    aot_gpr[31] = (0x08A02D20u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02D20u) goto L_08A02D20;
    return;
L_08A02D20:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02D34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02D34u) goto L_08A02D34;
    return;
L_08A02D34:
    aot_gpr[31] = (0x08A02D3Cu);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A02D3Cu) goto L_08A02D3C;
    return;
L_08A02D3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A02D50u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02D50u) goto L_08A02D50;
    return;
L_08A02D50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08A02D5Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02D5Cu) goto L_08A02D5C;
    return;
L_08A02D5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08A02D70;
      }
      goto L_08A02D64;
    }
L_08A02D64:
    aot_gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A02DA4;
      }
      goto L_08A02D70;
    }
L_08A02D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08A02D7Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02D7Cu) goto L_08A02D7C;
    return;
L_08A02D7C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A02D90;
    }
    goto L_08A02D84;
L_08A02D84:
    aot_gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A02DA4;
      }
      goto L_08A02D90;
    }
L_08A02D90:
    aot_gpr[31] = (0x08A02D98u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02D98u) goto L_08A02D98;
    return;
L_08A02D98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A02DA4;
      }
      goto L_08A02DA0;
    }
L_08A02DA0:
    aot_gpr[16] = (0u | 2u);
    goto L_08A02DA4;
L_08A02DA4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_08A02DD8;
    }
    goto L_08A02DAC;
L_08A02DAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A02DD8;
L_08A02DD8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A02CE8;
      }
      goto L_08A02DEC;
    }
L_08A02DEC:
    aot_gpr[31] = (0x08A02DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02DF4u) goto L_08A02DF4;
    return;
L_08A02DF4:
    aot_gpr[31] = (0x08A02DFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02DFCu) goto L_08A02DFC;
    return;
L_08A02DFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08A02E08u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A02E08u) goto L_08A02E08;
    return;
L_08A02E08:
    aot_gpr[31] = (0x08A02E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x08A02E10u) goto L_08A02E10;
    return;
L_08A02E10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A02E24u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 65u, 0x089F342Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02E24u) goto L_08A02E24;
    return;
L_08A02E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E50;
      }
      goto L_08A02E30;
    }
L_08A02E30:
    aot_gpr[31] = (0x08A02E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02E38u) goto L_08A02E38;
    return;
L_08A02E38:
    aot_gpr[31] = (0x08A02E40u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02E40u) goto L_08A02E40;
    return;
L_08A02E40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08A02E4Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A02E4Cu) goto L_08A02E4C;
    return;
L_08A02E4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A02E50;
L_08A02E50:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02E84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A02ED4;
      }
      goto L_08A02EA0;
    }
L_08A02EA0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11696));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18384), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A02EC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02EC0u) goto L_08A02EC0;
    return;
L_08A02EC0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02ED4;
      }
      goto L_08A02ECC;
    }
L_08A02ECC:
    aot_gpr[31] = (0x08A02ED4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A02F9C;
L_08A02ED4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02EE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02F30;
      }
      goto L_08A02F0C;
    }
L_08A02F0C:
    aot_gpr[31] = (0x08A02F14u);
    aot_gpr[4] = (0u | 12u);
    goto L_08A02F54;
L_08A02F14:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18384), aot_gpr[17]);
        goto L_08A02F30;
    }
    goto L_08A02F20;
L_08A02F20:
    aot_gpr[31] = (0x08A02F28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A02FD4;
L_08A02F28:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18384), aot_gpr[17]);
    goto L_08A02F30;
L_08A02F30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18384)));
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
L_08A02F4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02F54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02F68u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02F68u) goto L_08A02F68;
    return;
L_08A02F68:
    aot_gpr[31] = (0x08A02F70u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02F70u) goto L_08A02F70;
    return;
L_08A02F70:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08A02F8Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5696));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A02F8Cu) goto L_08A02F8C;
    return;
L_08A02F8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02F9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02FB0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A02FB0u) goto L_08A02FB0;
    return;
L_08A02FB0:
    aot_gpr[31] = (0x08A02FB8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02FB8u) goto L_08A02FB8;
    return;
L_08A02FB8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A02FC4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A02FC4u) goto L_08A02FC4;
    return;
L_08A02FC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02FD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A02FE8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A02FE8u) goto L_08A02FE8;
    return;
L_08A02FE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11696));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A02FFCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 292u, 0x089FDF94u>(ctx, &aot_mem) && ctx.pc == 0x08A02FFCu) goto L_08A02FFC;
    return;
L_08A02FFC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A03000u; return;
}

void recomp_unit_0510(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0510_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_510(Runtime &runtime) {
    runtime.register_generated_unit(510u, 0x08A02000u, 4096u, &recomp_unit_0510, &recomp_unit_0510_entry);
    runtime.register_function(0x08A02000u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02010u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02018u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02020u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0204Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02088u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02094u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0209Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020A8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020B0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020B8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020C0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020C8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020D8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A020F0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02128u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02138u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02144u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0215Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0216Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02178u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02188u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A021A0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A021D8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A021E8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A021F4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0220Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0221Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02228u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0223Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0227Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0228Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02298u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A022A0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A022ACu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A022C4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02304u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02314u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02320u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02328u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02330u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02338u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02340u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02358u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02360u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02378u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02380u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02384u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0238Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02390u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A023A0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A023E4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02404u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02424u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0242Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02450u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02478u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02494u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A024A8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A024ECu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02508u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02528u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02534u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0253Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02550u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02574u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0257Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02588u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02590u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02598u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A025B4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A025BCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A025D0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A025D8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A025F4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02604u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02618u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02620u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0262Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0263Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02650u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02670u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02684u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02690u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A026A0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A026B4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A026E8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A026F4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02700u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02704u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02728u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02758u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0276Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02778u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0277Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02784u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02790u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02798u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A027A4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A027A8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A027B4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A027C0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A027E0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A027E8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02804u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02820u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02840u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0284Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02854u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02868u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0288Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02894u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028A0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028A8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028B0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028CCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028D4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028E8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A028F0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0290Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0291Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02930u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02938u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02944u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02954u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02968u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02988u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A0299Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A029A8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A029B8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A029CCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A029F8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A04u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A0Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A10u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A30u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A5Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A6Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A74u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A7Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02A90u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02AD0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02AE4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02AECu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02AFCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B10u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B18u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B20u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B30u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B3Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B4Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B58u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B60u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B94u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02B9Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02BACu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02BB4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02BBCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02BE8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C08u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C10u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C18u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C34u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C40u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C58u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C60u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C78u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C84u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C90u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02C9Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02CE8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D04u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D18u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D20u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D34u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D3Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D50u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D5Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D64u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D70u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D7Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D84u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D90u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02D98u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DA0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DA4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DACu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DD8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DECu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DF4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02DFCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E08u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E10u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E24u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E30u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E38u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E40u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E4Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E50u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02E84u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02EA0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02EC0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02ECCu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02ED4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02EE8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F0Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F14u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F20u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F28u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F30u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F4Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F54u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F68u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F70u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F8Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02F9Cu, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02FB0u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02FB8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02FC4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02FD4u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02FE8u, &recomp_unit_0510, "recomp_unit_0510");
    runtime.register_function(0x08A02FFCu, &recomp_unit_0510, "recomp_unit_0510");
}
} // namespace psprecomp
