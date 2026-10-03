#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0031[1018] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 53,
    0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0,
    0, 87, 0, 0, 88, 0, 0, 89, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 110, 0, 111, 0, 0, 0, 0, 112, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116,
    117, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147,
};
void recomp_unit_0031_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08823000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0031[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08823000;
    case 2u: goto L_0882300C;
    case 3u: goto L_08823010;
    case 4u: goto L_08823028;
    case 5u: goto L_08823038;
    case 6u: goto L_08823040;
    case 7u: goto L_08823048;
    case 8u: goto L_08823058;
    case 9u: goto L_08823060;
    case 10u: goto L_08823078;
    case 11u: goto L_088230A4;
    case 12u: goto L_088230EC;
    case 13u: goto L_08823120;
    case 14u: goto L_08823260;
    case 15u: goto L_08823274;
    case 16u: goto L_08823300;
    case 17u: goto L_08823334;
    case 18u: goto L_08823350;
    case 19u: goto L_08823364;
    case 20u: goto L_0882340C;
    case 21u: goto L_0882341C;
    case 22u: goto L_088234B4;
    case 23u: goto L_0882354C;
    case 24u: goto L_08823588;
    case 25u: goto L_088235A8;
    case 26u: goto L_088235FC;
    case 27u: goto L_0882362C;
    case 28u: goto L_0882363C;
    case 29u: goto L_08823644;
    case 30u: goto L_08823658;
    case 31u: goto L_08823664;
    case 32u: goto L_0882366C;
    case 33u: goto L_08823680;
    case 34u: goto L_088236F8;
    case 35u: goto L_08823750;
    case 36u: goto L_0882375C;
    case 37u: goto L_08823778;
    case 38u: goto L_08823790;
    case 39u: goto L_088237A0;
    case 40u: goto L_088237CC;
    case 41u: goto L_088237D8;
    case 42u: goto L_088237F4;
    case 43u: goto L_0882380C;
    case 44u: goto L_08823820;
    case 45u: goto L_08823834;
    case 46u: goto L_08823838;
    case 47u: goto L_08823850;
    case 48u: goto L_088238A0;
    case 49u: goto L_088238C0;
    case 50u: goto L_088238E0;
    case 51u: goto L_088238E8;
    case 52u: goto L_088238EC;
    case 53u: goto L_088238FC;
    case 54u: goto L_08823908;
    case 55u: goto L_08823918;
    case 56u: goto L_0882393C;
    case 57u: goto L_08823954;
    case 58u: goto L_08823970;
    case 59u: goto L_08823994;
    case 60u: goto L_088239A0;
    case 61u: goto L_088239B8;
    case 62u: goto L_088239C4;
    case 63u: goto L_088239F4;
    case 64u: goto L_08823A38;
    case 65u: goto L_08823A48;
    case 66u: goto L_08823A54;
    case 67u: goto L_08823A84;
    case 68u: goto L_08823AAC;
    case 69u: goto L_08823AB8;
    case 70u: goto L_08823AD0;
    case 71u: goto L_08823ADC;
    case 72u: goto L_08823AEC;
    case 73u: goto L_08823B00;
    case 74u: goto L_08823B20;
    case 75u: goto L_08823B30;
    case 76u: goto L_08823B58;
    case 77u: goto L_08823B60;
    case 78u: goto L_08823B70;
    case 79u: goto L_08823B80;
    case 80u: goto L_08823B90;
    case 81u: goto L_08823B98;
    case 82u: goto L_08823BAC;
    case 83u: goto L_08823BC0;
    case 84u: goto L_08823BD4;
    case 85u: goto L_08823BE8;
    case 86u: goto L_08823BF0;
    case 87u: goto L_08823C04;
    case 88u: goto L_08823C10;
    case 89u: goto L_08823C1C;
    case 90u: goto L_08823C20;
    case 91u: goto L_08823C28;
    case 92u: goto L_08823C5C;
    case 93u: goto L_08823CA8;
    case 94u: goto L_08823CB0;
    case 95u: goto L_08823CB4;
    case 96u: goto L_08823CD8;
    case 97u: goto L_08823CE8;
    case 98u: goto L_08823CF0;
    case 99u: goto L_08823CFC;
    case 100u: goto L_08823D30;
    case 101u: goto L_08823D3C;
    case 102u: goto L_08823D4C;
    case 103u: goto L_08823D58;
    case 104u: goto L_08823D64;
    case 105u: goto L_08823D6C;
    case 106u: goto L_08823D7C;
    case 107u: goto L_08823D8C;
    case 108u: goto L_08823DA4;
    case 109u: goto L_08823DAC;
    case 110u: goto L_08823DB0;
    case 111u: goto L_08823DB8;
    case 112u: goto L_08823DCC;
    case 113u: goto L_08823DD0;
    case 114u: goto L_08823DE4;
    case 115u: goto L_08823DEC;
    case 116u: goto L_08823DFC;
    case 117u: goto L_08823E00;
    case 118u: goto L_08823E08;
    case 119u: goto L_08823E1C;
    case 120u: goto L_08823E20;
    case 121u: goto L_08823E30;
    case 122u: goto L_08823E38;
    case 123u: goto L_08823E48;
    case 124u: goto L_08823E4C;
    case 125u: goto L_08823E54;
    case 126u: goto L_08823E64;
    case 127u: goto L_08823E6C;
    case 128u: goto L_08823E78;
    case 129u: goto L_08823EA4;
    case 130u: goto L_08823EB8;
    case 131u: goto L_08823ECC;
    case 132u: goto L_08823ED4;
    case 133u: goto L_08823EDC;
    case 134u: goto L_08823EF4;
    case 135u: goto L_08823F04;
    case 136u: goto L_08823F10;
    case 137u: goto L_08823F30;
    case 138u: goto L_08823F44;
    case 139u: goto L_08823F58;
    case 140u: goto L_08823F6C;
    case 141u: goto L_08823F78;
    case 142u: goto L_08823F94;
    case 143u: goto L_08823FAC;
    case 144u: goto L_08823FBC;
    case 145u: goto L_08823FC8;
    case 146u: goto L_08823FD8;
    case 147u: goto L_08823FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08823000:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0882300Cu);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 171u, 0x08825BC4u>(ctx, &aot_mem) && ctx.pc == 0x0882300Cu) goto L_0882300C;
    return;
L_0882300C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_08823010;
L_08823010:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3740), aot_gpr[4]);
    aot_gpr[13] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08823028u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 149u, 0x08822C04u>(ctx, &aot_mem) && ctx.pc == 0x08823028u) goto L_08823028;
    return;
L_08823028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08823038u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 149u, 0x08822C04u>(ctx, &aot_mem) && ctx.pc == 0x08823038u) goto L_08823038;
    return;
L_08823038:
    aot_gpr[31] = (0x08823040u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 160u, 0x08822CC4u>(ctx, &aot_mem) && ctx.pc == 0x08823040u) goto L_08823040;
    return;
L_08823040:
    aot_gpr[31] = (0x08823048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 192u, 0x08822E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08823048u) goto L_08823048;
    return;
L_08823048:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3736)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823060;
      }
      goto L_08823058;
    }
L_08823058:
    aot_gpr[31] = (0x08823060u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x08823060u) goto L_08823060;
    return;
L_08823060:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3732), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08823078u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 79u, 0x08928870u>(ctx, &aot_mem) && ctx.pc == 0x08823078u) goto L_08823078;
    return;
L_08823078:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088230A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[30]);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-3752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[23]);
    { const bool branch_taken = aot_gpr[31] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882354C;
      }
      goto L_088230EC;
    }
L_088230EC:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (49024u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[31] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08823120u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08823120u) goto L_08823120;
    return;
L_08823120:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3748)));
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[16]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3748)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3744)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[16]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3744)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[17] = (2216u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[18] = (2216u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[5] = (aot_gpr[4] & 1u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    aot_gpr[21] = (0u | 85u);
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[23] = (0u | 255u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[16] = (64u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[22] = (0u | 2u);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28808), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[20] = (32u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08823260u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08823260u) goto L_08823260;
    return;
L_08823260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-3752)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08823274u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08823274u) goto L_08823274;
    return;
L_08823274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-28808), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08823300u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08823300u) goto L_08823300;
    return;
L_08823300:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (0u | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x08823334u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08823334u) goto L_08823334;
    return;
L_08823334:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x08823350u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x08823350u) goto L_08823350;
    return;
L_08823350:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08823364u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 86u, 0x08A4B4CCu>(ctx, &aot_mem) && ctx.pc == 0x08823364u) goto L_08823364;
    return;
L_08823364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (65312u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8224));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (49184u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (32800u << 16u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(8224));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x0882340Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 98u, 0x0892FA04u>(ctx, &aot_mem) && ctx.pc == 0x0882340Cu) goto L_0882340C;
    return;
L_0882340C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0882341Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 86u, 0x08A4B4CCu>(ctx, &aot_mem) && ctx.pc == 0x0882341Cu) goto L_0882341C;
    return;
L_0882341C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088234B4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 98u, 0x0892FA04u>(ctx, &aot_mem) && ctx.pc == 0x088234B4u) goto L_088234B4;
    return;
L_088234B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (64u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28808), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (32u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0882354Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882354Cu) goto L_0882354C;
    return;
L_0882354C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882366C;
      }
      goto L_088235A8;
    }
L_088235A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[5] = (aot_gpr[4] & 1u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[9] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088235FCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088235FCu) goto L_088235FC;
    return;
L_088235FC:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3748)));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3748)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x0882362Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3752)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882362Cu) goto L_0882362C;
    return;
L_0882362C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-3773)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823644;
      }
      goto L_0882363C;
    }
L_0882363C:
    aot_gpr[31] = (0x08823644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 47u, 0x08935484u>(ctx, &aot_mem) && ctx.pc == 0x08823644u) goto L_08823644;
    return;
L_08823644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3752)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08823658u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08823658u) goto L_08823658;
    return;
L_08823658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-3773)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882366C;
      }
      goto L_08823664;
    }
L_08823664:
    aot_gpr[31] = (0x0882366Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 55u, 0x0893559Cu>(ctx, &aot_mem) && ctx.pc == 0x0882366Cu) goto L_0882366C;
    return;
L_0882366C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(22556));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-3720));
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3772), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3768), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3764), 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2u << 16u);
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x088236F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7168));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088236F8u) goto L_088236F8;
    return;
L_088236F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-3760), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3752), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3748), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3740), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3736), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3732), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3724), 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7268)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08823750;
L_08823750:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0882375Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 92u, 0x08928934u>(ctx, &aot_mem) && ctx.pc == 0x0882375Cu) goto L_0882375C;
    return;
L_0882375C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08823778u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 100u, 0x089289CCu>(ctx, &aot_mem) && ctx.pc == 0x08823778u) goto L_08823778;
    return;
L_08823778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823750;
      }
      goto L_08823790;
    }
L_08823790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x088237A0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088237A0u) goto L_088237A0;
    return;
L_088237A0:
    aot_gpr[23] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-3756), aot_gpr[2]);
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-3808), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-3808));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_088237CC;
L_088237CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088237D8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 92u, 0x08928934u>(ctx, &aot_mem) && ctx.pc == 0x088237D8u) goto L_088237D8;
    return;
L_088237D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088237F4u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 100u, 0x089289CCu>(ctx, &aot_mem) && ctx.pc == 0x088237F4u) goto L_088237F4;
    return;
L_088237F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-3756)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882380Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0882380Cu) goto L_0882380C;
    return;
L_0882380C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08823838;
      }
      goto L_08823820;
    }
L_08823820:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08823834u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 10u, 0x08913304u>(ctx, &aot_mem) && ctx.pc == 0x08823834u) goto L_08823834;
    return;
L_08823834:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08823838;
L_08823838:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088237CC;
      }
      goto L_08823850;
    }
L_08823850:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3760)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3840), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-3840));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088238A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088238C0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 133u, 0x08822ADCu>(ctx, &aot_mem) && ctx.pc == 0x088238C0u) goto L_088238C0;
    return;
L_088238C0:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-3808));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-3720));
      if (branch_taken) {
          goto L_088238E8;
      }
      goto L_088238E0;
    }
L_088238E0:
    aot_gpr[31] = (0x088238E8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 59u, 0x08927620u>(ctx, &aot_mem) && ctx.pc == 0x088238E8u) goto L_088238E8;
    return;
L_088238E8:
    aot_gpr[17] = (0u | 0u);
    goto L_088238EC;
L_088238EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823908;
      }
      goto L_088238FC;
    }
L_088238FC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08823908u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 82u, 0x089277D8u>(ctx, &aot_mem) && ctx.pc == 0x08823908u) goto L_08823908;
    return;
L_08823908:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088238EC;
      }
      goto L_08823918;
    }
L_08823918:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3840), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3840));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0882393Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3760));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0882393Cu) goto L_0882393C;
    return;
L_0882393C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-3808), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08823954u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3756));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08823954u) goto L_08823954;
    return;
L_08823954:
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
L_08823970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-3773), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3772)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088239B8;
      }
      goto L_08823994;
    }
L_08823994:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3768)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088239B8;
      }
      goto L_088239A0;
    }
L_088239A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3768), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3764), aot_gpr[4]);
    aot_gpr[31] = (0x088239B8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 133u, 0x08822ADCu>(ctx, &aot_mem) && ctx.pc == 0x088239B8u) goto L_088239B8;
    return;
L_088239B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088239C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08823B60;
      }
      goto L_088239F4;
    }
L_088239F4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[17] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3728)));
    aot_gpr[18] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-3724)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-3720));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-3728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08823B20;
      }
      goto L_08823A38;
    }
L_08823A38:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-3728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08823A54;
      }
      goto L_08823A48;
    }
L_08823A48:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08823B00;
      }
      goto L_08823A54;
    }
L_08823A54:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3774)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3775)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08823A84u);
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08823A84u) goto L_08823A84;
    return;
L_08823A84:
    aot_gpr[4] = (16255u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] | 63858u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3728)));
    aot_gpr[4] = (20224u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) >= 0;
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08823AB8;
      }
      goto L_08823AAC;
    }
L_08823AAC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    goto L_08823AB8;
L_08823AB8:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[20] = aot_fpr[20] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[20] - aot_fpr[15];
        goto L_08823ADC;
    }
    goto L_08823AD0;
L_08823AD0:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08823AEC;
      }
      goto L_08823ADC;
    }
L_08823ADC:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    goto L_08823AEC;
L_08823AEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-3724), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08823B20;
      }
      goto L_08823B00;
    }
L_08823B00:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3776)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3728)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-3724), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08823B20;
L_08823B20:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08823B30u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x08823B30u) goto L_08823B30;
    return;
L_08823B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-3724)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3752)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (0x08823B58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 14u, 0x0891F128u>(ctx, &aot_mem) && ctx.pc == 0x08823B58u) goto L_08823B58;
    return;
L_08823B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823CB4;
      }
      goto L_08823B60;
    }
L_08823B60:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3732)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_08823CB4;
      }
      goto L_08823B70;
    }
L_08823B70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3768)));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08823CB4;
      }
      goto L_08823B80;
    }
L_08823B80:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3764)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823B98;
      }
      goto L_08823B90;
    }
L_08823B90:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3764), aot_gpr[6]);
    goto L_08823B98;
L_08823B98:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3773)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823CB4;
      }
      goto L_08823BAC;
    }
L_08823BAC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08823BC0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14152));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08823BC0u) goto L_08823BC0;
    return;
L_08823BC0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3736), aot_gpr[4]);
      if (branch_taken) {
          goto L_08823BF0;
      }
      goto L_08823BD4;
    }
L_08823BD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-3732), aot_gpr[5]);
    aot_gpr[31] = (0x08823BE8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x08823BE8u) goto L_08823BE8;
    return;
L_08823BE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3732)));
      if (branch_taken) {
          goto L_08823C20;
      }
      goto L_08823BF0;
    }
L_08823BF0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08823C04u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x08823C04u) goto L_08823C04;
    return;
L_08823C04:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-3732), aot_gpr[2]);
      if (branch_taken) {
          goto L_08823C20;
      }
      goto L_08823C10;
    }
L_08823C10:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08823C1Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x08823C1Cu) goto L_08823C1C;
    return;
L_08823C1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3732)));
    goto L_08823C20;
L_08823C20:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08823CB0;
      }
      goto L_08823C28;
    }
L_08823C28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14100)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14104)));
    aot_gpr[7] = (aot_gpr[9] ^ aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[10]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823CB0;
      }
      goto L_08823C5C;
    }
L_08823C5C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3768)));
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-3772), aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-3768), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3760)));
    aot_gpr[8] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[9] = (2178u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[10] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08823CA8u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(11896));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 233u, 0x08933F88u>(ctx, &aot_mem) && ctx.pc == 0x08823CA8u) goto L_08823CA8;
    return;
L_08823CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823CB4;
      }
      goto L_08823CB0;
    }
L_08823CB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-3732), aot_gpr[18]);
    goto L_08823CB4;
L_08823CB4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823CE8u);
    // nop
    goto L_088230A4;
L_08823CE8:
    aot_gpr[31] = (0x08823CF0u);
    // nop
    goto L_08823588;
L_08823CF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823CFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3840));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823D30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(22552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 50u, 0x089274DCu>(ctx, &aot_mem) && ctx.pc == 0x08823D30u) goto L_08823D30;
    return;
L_08823D30:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08823D3Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22612));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08823D3Cu) goto L_08823D3C;
    return;
L_08823D3C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08823D4Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3808));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 50u, 0x089274DCu>(ctx, &aot_mem) && ctx.pc == 0x08823D4Cu) goto L_08823D4C;
    return;
L_08823D4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08823D58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22624));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08823D58u) goto L_08823D58;
    return;
L_08823D58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823D64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823D6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08823D7Cu) goto L_08823D7C;
    return;
L_08823D7C:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823D8C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1320)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1320)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08823DAC;
      }
      goto L_08823DA4;
    }
L_08823DA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08823DB0;
      }
      goto L_08823DAC;
    }
L_08823DAC:
    aot_gpr[2] = (0u | 0u);
    goto L_08823DB0;
L_08823DB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823DB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823DFC;
      }
      goto L_08823DCC;
    }
L_08823DCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08823DD0;
L_08823DD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08823DEC;
      }
      goto L_08823DE4;
    }
L_08823DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823E00;
      }
      goto L_08823DEC;
    }
L_08823DEC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823DD0;
      }
      goto L_08823DFC;
    }
L_08823DFC:
    aot_gpr[2] = (0u | 0u);
    goto L_08823E00;
L_08823E00:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823E08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823E48;
      }
      goto L_08823E1C;
    }
L_08823E1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08823E20;
L_08823E20:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08823E38;
      }
      goto L_08823E30;
    }
L_08823E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823E4C;
      }
      goto L_08823E38;
    }
L_08823E38:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823E20;
      }
      goto L_08823E48;
    }
L_08823E48:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08823E4C;
L_08823E4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823E54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x08823E64u) goto L_08823E64;
    return;
L_08823E64:
    aot_gpr[31] = (0x08823E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 164u, 0x08824D30u>(ctx, &aot_mem) && ctx.pc == 0x08823E6Cu) goto L_08823E6C;
    return;
L_08823E6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823E78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08823ECC;
      }
      goto L_08823EA4;
    }
L_08823EA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08823EB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 77u, 0x0881D508u>(ctx, &aot_mem) && ctx.pc == 0x08823EB8u) goto L_08823EB8;
    return;
L_08823EB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823EA4;
      }
      goto L_08823ECC;
    }
L_08823ECC:
    aot_gpr[31] = (0x08823ED4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x08823ED4u) goto L_08823ED4;
    return;
L_08823ED4:
    aot_gpr[31] = (0x08823EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 171u, 0x08824E14u>(ctx, &aot_mem) && ctx.pc == 0x08823EDCu) goto L_08823EDC;
    return;
L_08823EDC:
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
L_08823EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 106u, 0x088C0854u>(ctx, &aot_mem) && ctx.pc == 0x08823F04u) goto L_08823F04;
    return;
L_08823F04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823F10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08823F30u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 111u, 0x088C08D8u>(ctx, &aot_mem) && ctx.pc == 0x08823F30u) goto L_08823F30;
    return;
L_08823F30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08823F6C;
      }
      goto L_08823F44;
    }
L_08823F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08823F58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 73u, 0x0881D4C4u>(ctx, &aot_mem) && ctx.pc == 0x08823F58u) goto L_08823F58;
    return;
L_08823F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823F44;
      }
      goto L_08823F6C;
    }
L_08823F6C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08823F78;
L_08823F78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(19360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(19360), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(19440));
      if (branch_taken) {
          goto L_08823F78;
      }
      goto L_08823F94;
    }
L_08823F94:
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
L_08823FAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 116u, 0x088C095Cu>(ctx, &aot_mem) && ctx.pc == 0x08823FBCu) goto L_08823FBC;
    return;
L_08823FBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823FC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08823FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 121u, 0x088C09E0u>(ctx, &aot_mem) && ctx.pc == 0x08823FD8u) goto L_08823FD8;
    return;
L_08823FD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823FE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    ctx.pc = 0x08824000u; return;
}

void recomp_unit_0031(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0031_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_31(Runtime &runtime) {
    runtime.register_generated_unit(31u, 0x08823000u, 4096u, &recomp_unit_0031, &recomp_unit_0031_entry);
    runtime.register_function(0x08823000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882300Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823010u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823028u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823038u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823040u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823048u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823058u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823060u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823078u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088230A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088230ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823120u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823260u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823274u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823300u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823334u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823350u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823364u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882340Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882341Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088234B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882354Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823588u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088235A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088235FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882362Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882363Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823644u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823658u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823664u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882366Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823680u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088236F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823750u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882375Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823778u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823790u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088237A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088237CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088237D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088237F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882380Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823820u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823834u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823838u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823850u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088238A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088238C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088238E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088238E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088238ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088238FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823908u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823918u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0882393Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823954u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823970u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823994u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088239A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088239B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088239C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088239F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823A38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823A48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823A54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823A84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823AACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823AB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823AD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823ADCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823AECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823B98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823BACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823BE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823BF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823C04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823C10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823C1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823C20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823C28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823C5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823CFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823D8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823DFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823E78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823EA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823EB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823ECCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823ED4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823EDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823EF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823F94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823FACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823FBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823FC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08823FE4u, &recomp_unit_0031, "recomp_unit_0031");
}
} // namespace psprecomp
