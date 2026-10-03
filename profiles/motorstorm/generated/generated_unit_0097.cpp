#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0097[1024] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 40, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0,
    0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0,
    81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0,
    105, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0,
    0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0,
    135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 148, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0,
    166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 171, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 180, 0, 181, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 193, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0,
    0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218,
};
void recomp_unit_0097_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08865000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0097[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08865000;
    case 2u: goto L_0886500C;
    case 3u: goto L_08865020;
    case 4u: goto L_0886503C;
    case 5u: goto L_08865040;
    case 6u: goto L_08865050;
    case 7u: goto L_08865058;
    case 8u: goto L_08865060;
    case 9u: goto L_0886506C;
    case 10u: goto L_08865074;
    case 11u: goto L_08865080;
    case 12u: goto L_088650A4;
    case 13u: goto L_088650D0;
    case 14u: goto L_088650E4;
    case 15u: goto L_088650F8;
    case 16u: goto L_08865110;
    case 17u: goto L_0886513C;
    case 18u: goto L_08865150;
    case 19u: goto L_08865164;
    case 20u: goto L_0886517C;
    case 21u: goto L_088651A4;
    case 22u: goto L_088651C4;
    case 23u: goto L_08865220;
    case 24u: goto L_0886522C;
    case 25u: goto L_08865238;
    case 26u: goto L_08865244;
    case 27u: goto L_0886524C;
    case 28u: goto L_08865254;
    case 29u: goto L_0886527C;
    case 30u: goto L_08865294;
    case 31u: goto L_088652A4;
    case 32u: goto L_088652B0;
    case 33u: goto L_088652C4;
    case 34u: goto L_088652D0;
    case 35u: goto L_088652E8;
    case 36u: goto L_088652EC;
    case 37u: goto L_08865300;
    case 38u: goto L_08865324;
    case 39u: goto L_08865338;
    case 40u: goto L_0886533C;
    case 41u: goto L_0886534C;
    case 42u: goto L_08865354;
    case 43u: goto L_08865360;
    case 44u: goto L_08865368;
    case 45u: goto L_08865374;
    case 46u: goto L_08865384;
    case 47u: goto L_0886538C;
    case 48u: goto L_08865410;
    case 49u: goto L_08865434;
    case 50u: goto L_0886543C;
    case 51u: goto L_08865460;
    case 52u: goto L_08865490;
    case 53u: goto L_088654CC;
    case 54u: goto L_088654E0;
    case 55u: goto L_088654EC;
    case 56u: goto L_08865508;
    case 57u: goto L_0886554C;
    case 58u: goto L_08865554;
    case 59u: goto L_08865560;
    case 60u: goto L_08865574;
    case 61u: goto L_0886557C;
    case 62u: goto L_08865590;
    case 63u: goto L_0886559C;
    case 64u: goto L_088655A4;
    case 65u: goto L_088655B0;
    case 66u: goto L_088655BC;
    case 67u: goto L_088655C4;
    case 68u: goto L_088655D8;
    case 69u: goto L_088655E0;
    case 70u: goto L_088655F8;
    case 71u: goto L_08865618;
    case 72u: goto L_08865638;
    case 73u: goto L_08865658;
    case 74u: goto L_08865660;
    case 75u: goto L_08865670;
    case 76u: goto L_088656A4;
    case 77u: goto L_088656C8;
    case 78u: goto L_088656D0;
    case 79u: goto L_088656F4;
    case 80u: goto L_088656F8;
    case 81u: goto L_08865700;
    case 82u: goto L_08865708;
    case 83u: goto L_08865710;
    case 84u: goto L_08865718;
    case 85u: goto L_08865720;
    case 86u: goto L_08865728;
    case 87u: goto L_08865758;
    case 88u: goto L_0886577C;
    case 89u: goto L_08865784;
    case 90u: goto L_088657AC;
    case 91u: goto L_088657B0;
    case 92u: goto L_088657B8;
    case 93u: goto L_088657C0;
    case 94u: goto L_088657D4;
    case 95u: goto L_088657E4;
    case 96u: goto L_0886580C;
    case 97u: goto L_08865830;
    case 98u: goto L_08865838;
    case 99u: goto L_0886585C;
    case 100u: goto L_0886588C;
    case 101u: goto L_088658AC;
    case 102u: goto L_088658C0;
    case 103u: goto L_088658DC;
    case 104u: goto L_088658EC;
    case 105u: goto L_08865900;
    case 106u: goto L_08865904;
    case 107u: goto L_08865910;
    case 108u: goto L_08865928;
    case 109u: goto L_08865930;
    case 110u: goto L_0886594C;
    case 111u: goto L_08865954;
    case 112u: goto L_0886595C;
    case 113u: goto L_0886596C;
    case 114u: goto L_0886597C;
    case 115u: goto L_08865998;
    case 116u: goto L_0886599C;
    case 117u: goto L_088659AC;
    case 118u: goto L_088659B4;
    case 119u: goto L_088659D4;
    case 120u: goto L_088659F0;
    case 121u: goto L_088659F8;
    case 122u: goto L_08865A04;
    case 123u: goto L_08865A0C;
    case 124u: goto L_08865A2C;
    case 125u: goto L_08865A40;
    case 126u: goto L_08865A50;
    case 127u: goto L_08865A6C;
    case 128u: goto L_08865A74;
    case 129u: goto L_08865A90;
    case 130u: goto L_08865A98;
    case 131u: goto L_08865ACC;
    case 132u: goto L_08865ADC;
    case 133u: goto L_08865AE8;
    case 134u: goto L_08865AF8;
    case 135u: goto L_08865B00;
    case 136u: goto L_08865B08;
    case 137u: goto L_08865B18;
    case 138u: goto L_08865B34;
    case 139u: goto L_08865B3C;
    case 140u: goto L_08865B48;
    case 141u: goto L_08865B54;
    case 142u: goto L_08865B5C;
    case 143u: goto L_08865B68;
    case 144u: goto L_08865B78;
    case 145u: goto L_08865B80;
    case 146u: goto L_08865B88;
    case 147u: goto L_08865B90;
    case 148u: goto L_08865B98;
    case 149u: goto L_08865B9C;
    case 150u: goto L_08865BAC;
    case 151u: goto L_08865BB4;
    case 152u: goto L_08865BBC;
    case 153u: goto L_08865BC4;
    case 154u: goto L_08865BCC;
    case 155u: goto L_08865BD4;
    case 156u: goto L_08865BE8;
    case 157u: goto L_08865BF0;
    case 158u: goto L_08865C00;
    case 159u: goto L_08865C28;
    case 160u: goto L_08865C34;
    case 161u: goto L_08865C44;
    case 162u: goto L_08865C4C;
    case 163u: goto L_08865C54;
    case 164u: goto L_08865C68;
    case 165u: goto L_08865C70;
    case 166u: goto L_08865C80;
    case 167u: goto L_08865C88;
    case 168u: goto L_08865CA0;
    case 169u: goto L_08865CA8;
    case 170u: goto L_08865CB8;
    case 171u: goto L_08865CC4;
    case 172u: goto L_08865CC8;
    case 173u: goto L_08865CD0;
    case 174u: goto L_08865CDC;
    case 175u: goto L_08865D00;
    case 176u: goto L_08865D0C;
    case 177u: goto L_08865D5C;
    case 178u: goto L_08865D68;
    case 179u: goto L_08865D84;
    case 180u: goto L_08865D98;
    case 181u: goto L_08865DA0;
    case 182u: goto L_08865DA4;
    case 183u: goto L_08865DAC;
    case 184u: goto L_08865DD8;
    case 185u: goto L_08865DE0;
    case 186u: goto L_08865E04;
    case 187u: goto L_08865E0C;
    case 188u: goto L_08865E24;
    case 189u: goto L_08865E30;
    case 190u: goto L_08865E44;
    case 191u: goto L_08865E68;
    case 192u: goto L_08865E6C;
    case 193u: goto L_08865E74;
    case 194u: goto L_08865E84;
    case 195u: goto L_08865EB0;
    case 196u: goto L_08865EB8;
    case 197u: goto L_08865EC0;
    case 198u: goto L_08865EE4;
    case 199u: goto L_08865EEC;
    case 200u: goto L_08865EF4;
    case 201u: goto L_08865F04;
    case 202u: goto L_08865F10;
    case 203u: goto L_08865F18;
    case 204u: goto L_08865F20;
    case 205u: goto L_08865F38;
    case 206u: goto L_08865F54;
    case 207u: goto L_08865F5C;
    case 208u: goto L_08865F64;
    case 209u: goto L_08865F6C;
    case 210u: goto L_08865F78;
    case 211u: goto L_08865F8C;
    case 212u: goto L_08865F94;
    case 213u: goto L_08865F9C;
    case 214u: goto L_08865FA4;
    case 215u: goto L_08865FB0;
    case 216u: goto L_08865FC0;
    case 217u: goto L_08865FD8;
    case 218u: goto L_08865FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08865000:
    aot_gpr[7] = (aot_gpr[18] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08865040;
      }
      goto L_0886500C;
    }
L_0886500C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[31] = (0x08865020u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 186u, 0x0892CD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08865020u) goto L_08865020;
    return;
L_08865020:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0886500C;
      }
      goto L_0886503C;
    }
L_0886503C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08865040;
L_08865040:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 171u, 0x08864FF4u>(ctx, &aot_mem); return;
      }
      goto L_08865050;
    }
L_08865050:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865074;
      }
      goto L_08865058;
    }
L_08865058:
    aot_gpr[31] = (0x08865060u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 141u, 0x08942B24u>(ctx, &aot_mem) && ctx.pc == 0x08865060u) goto L_08865060;
    return;
L_08865060:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0886506Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x0886506Cu) goto L_0886506C;
    return;
L_0886506C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865080;
      }
      goto L_08865074;
    }
L_08865074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08865080u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x08865080u) goto L_08865080;
    return;
L_08865080:
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
L_088650A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088650F8;
      }
      goto L_088650D0;
    }
L_088650D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088650E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 89u, 0x088635F0u>(ctx, &aot_mem) && ctx.pc == 0x088650E4u) goto L_088650E4;
    return;
L_088650E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088650D0;
      }
      goto L_088650F8;
    }
L_088650F8:
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
L_08865110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08865164;
      }
      goto L_0886513C;
    }
L_0886513C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08865150u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 89u, 0x088635F0u>(ctx, &aot_mem) && ctx.pc == 0x08865150u) goto L_08865150;
    return;
L_08865150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886513C;
      }
      goto L_08865164;
    }
L_08865164:
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
L_0886517C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088651A4u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088651A4u) goto L_088651A4;
    return;
L_088651A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(160), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(166), static_cast<std::uint16_t>(aot_gpr[16]));
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
L_088651C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[23]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (32768u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[30]);
    aot_gpr[17] = (aot_gpr[6] & aot_gpr[20]);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (32768u << 16u);
      if (branch_taken) {
          goto L_08865238;
      }
      goto L_08865220;
    }
L_08865220:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x0886522Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x0886522Cu) goto L_0886522C;
    return;
L_0886522C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0886524C;
      }
      goto L_08865238;
    }
L_08865238:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08865244u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x08865244u) goto L_08865244;
    return;
L_08865244:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0886524C;
L_0886524C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886527C;
      }
      goto L_08865254;
    }
L_08865254:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8804)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865294;
      }
      goto L_0886527C;
    }
L_0886527C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5416)));
    aot_gpr[6] = (2218u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5412)));
    aot_gpr[5] = (ctx.lo);
    goto L_08865294;
L_08865294:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[31] = (0x088652A4u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088652A4u) goto L_088652A4;
    return;
L_088652A4:
    aot_gpr[4] = (aot_gpr[19] & aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886538C;
      }
      goto L_088652B0;
    }
L_088652B0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0886534C;
      }
      goto L_088652C4;
    }
L_088652C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[11] = (2218u << 16u);
    goto L_088652D0;
L_088652D0:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886533C;
      }
      goto L_088652E8;
    }
L_088652E8:
    aot_gpr[9] = (0u | 0u);
    goto L_088652EC;
L_088652EC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_08865324;
      }
      goto L_08865300;
    }
L_08865300:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(5376)));
    aot_gpr[8] = (aot_gpr[10] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
    goto L_08865324;
L_08865324:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088652EC;
      }
      goto L_08865338;
    }
L_08865338:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0886533C;
L_0886533C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088652D0;
      }
      goto L_0886534C;
    }
L_0886534C:
    aot_gpr[31] = (0x08865354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 156u, 0x0892CB34u>(ctx, &aot_mem) && ctx.pc == 0x08865354u) goto L_08865354;
    return;
L_08865354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865368;
      }
      goto L_08865360;
    }
L_08865360:
    aot_gpr[31] = (0x08865368u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x08865368u) goto L_08865368;
    return;
L_08865368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865460;
      }
      goto L_08865374;
    }
L_08865374:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[31] = (0x08865384u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8804)));
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 27u, 0x08930304u>(ctx, &aot_mem) && ctx.pc == 0x08865384u) goto L_08865384;
    return;
L_08865384:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08865460;
      }
      goto L_0886538C;
    }
L_0886538C:
    aot_gpr[4] = (aot_gpr[19] & aot_gpr[20]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[5] - aot_gpr[11]);
    aot_gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[7] ^ aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[2] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[10] & aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[6] | aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[3] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (2182u << 16u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20932));
      if (branch_taken) {
          goto L_0886543C;
      }
      goto L_08865410;
    }
L_08865410:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08865434u);
    aot_gpr[11] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x08865434u) goto L_08865434;
    return;
L_08865434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865460;
      }
      goto L_0886543C;
    }
L_0886543C:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[11] = (aot_gpr[19] | aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08865460u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x08865460u) goto L_08865460;
    return;
L_08865460:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865490:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(644), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(640), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(648), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(652), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(656), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(660), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(664), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088655E0;
      }
      goto L_088654CC;
    }
L_088654CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088655D8;
      }
      goto L_088654E0;
    }
L_088654E0:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[20] = (2218u << 16u);
    goto L_088654EC;
L_088654EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886554C;
      }
      goto L_08865508;
    }
L_08865508:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5376)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08865508;
      }
      goto L_0886554C;
    }
L_0886554C:
    aot_gpr[31] = (0x08865554u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 20u, 0x089343A0u>(ctx, &aot_mem) && ctx.pc == 0x08865554u) goto L_08865554;
    return;
L_08865554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865590;
      }
      goto L_08865560;
    }
L_08865560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8804)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865590;
      }
      goto L_08865574;
    }
L_08865574:
    aot_gpr[31] = (0x0886557Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 27u, 0x08930304u>(ctx, &aot_mem) && ctx.pc == 0x0886557Cu) goto L_0886557C;
    return;
L_0886557C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8804)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865574;
      }
      goto L_08865590;
    }
L_08865590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088655C4;
      }
      goto L_0886559C;
    }
L_0886559C:
    aot_gpr[31] = (0x088655A4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x088655A4u) goto L_088655A4;
    return;
L_088655A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(166)));
    aot_gpr[31] = (0x088655B0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 71u, 0x0893467Cu>(ctx, &aot_mem) && ctx.pc == 0x088655B0u) goto L_088655B0;
    return;
L_088655B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088655C4;
      }
      goto L_088655BC;
    }
L_088655BC:
    aot_gpr[31] = (0x088655C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x088655C4u) goto L_088655C4;
    return;
L_088655C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088654EC;
      }
      goto L_088655D8;
    }
L_088655D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886585C;
      }
      goto L_088655E0;
    }
L_088655E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3492)));
    aot_gpr[22] = (2182u << 16u);
    aot_gpr[23] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(20932));
      if (branch_taken) {
          goto L_08865638;
      }
      goto L_088655F8;
    }
L_088655F8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[31] = (0x08865618u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8804)));
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 24u, 0x089302DCu>(ctx, &aot_mem) && ctx.pc == 0x08865618u) goto L_08865618;
    return;
L_08865618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8804)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08865658;
      }
      goto L_08865638;
    }
L_08865638:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5416)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5412)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr[20] = (aot_gpr[18] | 0u);
    aot_gpr[21] = (0u | 0u);
    goto L_08865658;
L_08865658:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088657C0;
      }
      goto L_08865660;
    }
L_08865660:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08865670u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x08865670u) goto L_08865670;
    return;
L_08865670:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[21] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[23] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088656D0;
      }
      goto L_088656A4;
    }
L_088656A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088656C8u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x088656C8u) goto L_088656C8;
    return;
L_088656C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088656F8;
      }
      goto L_088656D0;
    }
L_088656D0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088656F4u);
    aot_gpr[11] = (32768u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x088656F4u) goto L_088656F4;
    return;
L_088656F4:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    goto L_088656F8;
L_088656F8:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[30] = (15u << 16u);
      if (branch_taken) {
          goto L_088657B8;
      }
      goto L_08865700;
    }
L_08865700:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(16960));
    aot_gpr[23] = (32768u << 16u);
    goto L_08865708;
L_08865708:
    aot_gpr[31] = (0x08865710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x08865710u) goto L_08865710;
    return;
L_08865710:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08865728;
    }
    goto L_08865718;
L_08865718:
    aot_gpr[31] = (0x08865720u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x08865720u) goto L_08865720;
    return;
L_08865720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865708;
      }
      goto L_08865728;
    }
L_08865728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[21] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[7] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08865784;
      }
      goto L_08865758;
    }
L_08865758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886577Cu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x0886577Cu) goto L_0886577C;
    return;
L_0886577C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088657B0;
      }
      goto L_08865784;
    }
L_08865784:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088657ACu);
    aot_gpr[11] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x088657ACu) goto L_088657AC;
    return;
L_088657AC:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_088657B0;
L_088657B0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865708;
      }
      goto L_088657B8;
    }
L_088657B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886585C;
      }
      goto L_088657C0;
    }
L_088657C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(166)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088657D4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x088657D4u) goto L_088657D4;
    return;
L_088657D4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x088657E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x088657E4u) goto L_088657E4;
    return;
L_088657E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (aot_gpr[21] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865838;
      }
      goto L_0886580C;
    }
L_0886580C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08865830u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x08865830u) goto L_08865830;
    return;
L_08865830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886585C;
      }
      goto L_08865838;
    }
L_08865838:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886585Cu);
    aot_gpr[11] = (32768u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x0886585Cu) goto L_0886585C;
    return;
L_0886585C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(664)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886588C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24896), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088658AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_088659AC;
      }
      goto L_088658C0;
    }
L_088658C0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 2u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5424));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5488));
    goto L_088658DC;
L_088658DC:
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[10]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0886599C;
      }
      goto L_088658EC;
    }
L_088658EC:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[13] = (aot_gpr[8] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886599C;
      }
      goto L_08865900;
    }
L_08865900:
    aot_gpr[2] = (0u | 0u);
    goto L_08865904;
L_08865904:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[2]);
    goto L_08865910;
L_08865910:
    aot_gpr[15] = (aot_gpr[3] + aot_gpr[12]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (aot_gpr[14] << 24u);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> 24u));
    { const bool branch_taken = aot_gpr[13] == aot_gpr[7];
    aot_gpr[24] = (static_cast<std::int32_t>(aot_gpr[13]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886594C;
      }
      goto L_08865928;
    }
L_08865928:
    { const bool branch_taken = aot_gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886594C;
      }
      goto L_08865930;
    }
L_08865930:
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(2))))));
    aot_gpr[14] = (aot_gpr[14] << 2u);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (aot_gpr[14] << 24u);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> 24u));
    goto L_0886594C;
L_0886594C:
    { const bool branch_taken = aot_gpr[13] == aot_gpr[7];
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[13]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886596C;
      }
      goto L_08865954;
    }
L_08865954:
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886596C;
      }
      goto L_0886595C;
    }
L_0886595C:
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(2))))));
    aot_gpr[14] = (aot_gpr[14] << 2u);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(-400), aot_gpr[13]);
    goto L_0886596C;
L_0886596C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865910;
      }
      goto L_0886597C;
    }
L_0886597C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[10]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[13] = (aot_gpr[8] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08865904;
      }
      goto L_08865998;
    }
L_08865998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_0886599C;
L_0886599C:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088658DC;
      }
      goto L_088659AC;
    }
L_088659AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088659B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5424));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5488));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088659D4;
L_088659D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088659D4;
      }
      goto L_088659F0;
    }
L_088659F0:
    aot_gpr[31] = (0x088659F8u);
    // nop
    goto L_088658AC;
L_088659F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865A04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865A0C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24904), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865A2C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2268), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24916), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865A40:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24916)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08865A6C;
      }
      goto L_08865A50;
    }
L_08865A50:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24916), aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24928), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2268), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5564), static_cast<std::uint8_t>(0u));
    goto L_08865A6C;
L_08865A6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865A74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2268)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B08;
      }
      goto L_08865A90;
    }
L_08865A90:
    aot_gpr[31] = (0x08865A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 37u, 0x0886327Cu>(ctx, &aot_mem) && ctx.pc == 0x08865A98u) goto L_08865A98;
    return;
L_08865A98:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5552)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5556)));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5560)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = aot_fpr[0] - aot_fpr[14];
      if (branch_taken) {
          goto L_08865AE8;
      }
      goto L_08865ACC;
    }
L_08865ACC:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865B00;
      }
      goto L_08865ADC;
    }
L_08865ADC:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2268), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08865B00;
      }
      goto L_08865AE8;
    }
L_08865AE8:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865B00;
      }
      goto L_08865AF8;
    }
L_08865AF8:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2268), static_cast<std::uint8_t>(0u));
    goto L_08865B00;
L_08865B00:
    aot_gpr[31] = (0x08865B08u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x0886325Cu>(ctx, &aot_mem) && ctx.pc == 0x08865B08u) goto L_08865B08;
    return;
L_08865B08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[31]);
    aot_gpr[31] = (0x08865B34u);
    // nop
    goto L_08865A74;
L_08865B34:
    aot_gpr[31] = (0x08865B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x08865B3Cu) goto L_08865B3C;
    return;
L_08865B3C:
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_08865B68;
      }
      goto L_08865B48;
    }
L_08865B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(24932)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865B9C;
      }
      goto L_08865B54;
    }
L_08865B54:
    aot_gpr[31] = (0x08865B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 126u, 0x0886D8CCu>(ctx, &aot_mem) && ctx.pc == 0x08865B5Cu) goto L_08865B5C;
    return;
L_08865B5C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(24932), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08865B9C;
      }
      goto L_08865B68;
    }
L_08865B68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25971)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B90;
      }
      goto L_08865B78;
    }
L_08865B78:
    aot_gpr[31] = (0x08865B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 117u, 0x0886D790u>(ctx, &aot_mem) && ctx.pc == 0x08865B80u) goto L_08865B80;
    return;
L_08865B80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B90;
      }
      goto L_08865B88;
    }
L_08865B88:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
    goto L_08865B90;
L_08865B90:
    aot_gpr[31] = (0x08865B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 188u, 0x0886CD18u>(ctx, &aot_mem) && ctx.pc == 0x08865B98u) goto L_08865B98;
    return;
L_08865B98:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(24932), static_cast<std::uint8_t>(0u));
    goto L_08865B9C;
L_08865B9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865BAC;
    }
L_08865BAC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08865E74;
      }
      goto L_08865BB4;
    }
L_08865BB4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08865BF0;
      }
      goto L_08865BBC;
    }
L_08865BBC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08865C34;
      }
      goto L_08865BC4;
    }
L_08865BC4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08865C70;
      }
      goto L_08865BCC;
    }
L_08865BCC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08865DAC;
      }
      goto L_08865BD4;
    }
L_08865BD4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24920)));
    aot_gpr[4] = (0u | 4u);
    if (static_cast<std::int32_t>(aot_gpr[5]) >= 0) {
    aot_gpr[4] = (0u | 2u);
        goto L_08865BE8;
    }
    goto L_08865BE8;
L_08865BE8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865BF0;
    }
L_08865BF0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24920)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08865C28;
      }
      goto L_08865C00;
    }
L_08865C00:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5568)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08865C28u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 165u, 0x08929C50u>(ctx, &aot_mem) && ctx.pc == 0x08865C28u) goto L_08865C28;
    return;
L_08865C28:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865C34;
    }
L_08865C34:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24920)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08865C54;
      }
      goto L_08865C44;
    }
L_08865C44:
    aot_gpr[31] = (0x08865C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 19u, 0x0892D0ECu>(ctx, &aot_mem) && ctx.pc == 0x08865C4Cu) goto L_08865C4C;
    return;
L_08865C4C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24920), aot_gpr[4]);
    goto L_08865C54;
L_08865C54:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5564)));
    aot_gpr[4] = (0u | 4u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 0u);
        goto L_08865C68;
    }
    goto L_08865C68;
L_08865C68:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865C70;
    }
L_08865C70:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5564)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865C88;
      }
      goto L_08865C80;
    }
L_08865C80:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), 0u);
      if (branch_taken) {
          goto L_08865DA4;
      }
      goto L_08865C88;
    }
L_08865C88:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24928)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08865CB8;
      }
      goto L_08865CA0;
    }
L_08865CA0:
    aot_gpr[31] = (0x08865CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 79u, 0x0886D4F8u>(ctx, &aot_mem) && ctx.pc == 0x08865CA8u) goto L_08865CA8;
    return;
L_08865CA8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24928), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_08865CC8;
      }
      goto L_08865CB8;
    }
L_08865CB8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08865CC4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 85u, 0x0886D5B8u>(ctx, &aot_mem) && ctx.pc == 0x08865CC4u) goto L_08865CC4;
    return;
L_08865CC4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    goto L_08865CC8;
L_08865CC8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DA0;
      }
      goto L_08865CD0;
    }
L_08865CD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (24948u << 16u);
      if (branch_taken) {
          goto L_08865D0C;
      }
      goto L_08865CDC;
    }
L_08865CDC:
    aot_gpr[4] = (18771u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21837));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 23619u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08865D00u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08865D00u) goto L_08865D00;
    return;
L_08865D00:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08865D68;
      }
      goto L_08865D0C;
    }
L_08865D0C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (25717u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16732));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (19804u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28521));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (25449u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29557));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[5] = (0u | 92u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08865D5Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08865D5Cu) goto L_08865D5C;
    return;
L_08865D5C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    aot_gpr[5] = (0u | 2u);
    goto L_08865D68;
L_08865D68:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x08865D84u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 194u, 0x0892CDF8u>(ctx, &aot_mem) && ctx.pc == 0x08865D84u) goto L_08865D84;
    return;
L_08865D84:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24924), aot_gpr[2]);
    aot_gpr[4] = (0u | 0u);
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    aot_gpr[4] = (0u | 5u);
        goto L_08865D98;
    }
    goto L_08865D98;
L_08865D98:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
      if (branch_taken) {
          goto L_08865DA4;
      }
      goto L_08865DA0;
    }
L_08865DA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), 0u);
    goto L_08865DA4;
L_08865DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865DAC;
    }
L_08865DAC:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24924)));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[31] = (0x08865DD8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 184u, 0x08929D64u>(ctx, &aot_mem) && ctx.pc == 0x08865DD8u) goto L_08865DD8;
    return;
L_08865DD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08865E6C;
      }
      goto L_08865DE0;
    }
L_08865DE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24924)));
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24920), aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24924), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5564)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865E0C;
      }
      goto L_08865E04;
    }
L_08865E04:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), 0u);
      if (branch_taken) {
          goto L_08865E6C;
      }
      goto L_08865E0C;
    }
L_08865E0C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08865E30;
      }
      goto L_08865E24;
    }
L_08865E24:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08865E30;
L_08865E30:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08865E44u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x0886325Cu>(ctx, &aot_mem) && ctx.pc == 0x08865E44u) goto L_08865E44;
    return;
L_08865E44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24920)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5568)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[31] = (0x08865E68u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 158u, 0x08929BC4u>(ctx, &aot_mem) && ctx.pc == 0x08865E68u) goto L_08865E68;
    return;
L_08865E68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), 0u);
    goto L_08865E6C;
L_08865E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865E74;
    }
L_08865E74:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24920)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08865F18;
      }
      goto L_08865E84;
    }
L_08865E84:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865EEC;
      }
      goto L_08865EB0;
    }
L_08865EB0:
    aot_gpr[31] = (0x08865EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 190u, 0x08929DACu>(ctx, &aot_mem) && ctx.pc == 0x08865EB8u) goto L_08865EB8;
    return;
L_08865EB8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865EEC;
      }
      goto L_08865EC0;
    }
L_08865EC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24920)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5568)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[31] = (0x08865EE4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 189u, 0x08929D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08865EE4u) goto L_08865EE4;
    return;
L_08865EE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865EF4;
      }
      goto L_08865EEC;
    }
L_08865EEC:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
    goto L_08865EF4;
L_08865EF4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5564)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08865F18;
      }
      goto L_08865F04;
    }
L_08865F04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2268)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865F18;
      }
      goto L_08865F10;
    }
L_08865F10:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
    goto L_08865F18;
L_08865F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F20;
      }
      goto L_08865F20;
    }
L_08865F20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865F38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F78;
      }
      goto L_08865F54;
    }
L_08865F54:
    aot_gpr[31] = (0x08865F5Cu);
    // nop
    goto L_08865B18;
L_08865F5C:
    aot_gpr[31] = (0x08865F64u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x08865F64u) goto L_08865F64;
    return;
L_08865F64:
    aot_gpr[31] = (0x08865F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x08865F6Cu) goto L_08865F6C;
    return;
L_08865F6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865F54;
      }
      goto L_08865F78;
    }
L_08865F78:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24916), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5564), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08865F8C;
L_08865F8C:
    aot_gpr[31] = (0x08865F94u);
    // nop
    goto L_08865B18;
L_08865F94:
    aot_gpr[31] = (0x08865F9Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x08865F9Cu) goto L_08865F9C;
    return;
L_08865F9C:
    aot_gpr[31] = (0x08865FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x08865FA4u) goto L_08865FA4;
    return;
L_08865FA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865F8C;
      }
      goto L_08865FB0;
    }
L_08865FB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865FC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24920)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08865FFC;
      }
      goto L_08865FD8;
    }
L_08865FD8:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[31] = (0x08865FFCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 175u, 0x08929CD8u>(ctx, &aot_mem) && ctx.pc == 0x08865FFCu) goto L_08865FFC;
    return;
L_08865FFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08866000u; return;
}

void recomp_unit_0097(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0097_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_97(Runtime &runtime) {
    runtime.register_generated_unit(97u, 0x08865000u, 4096u, &recomp_unit_0097, &recomp_unit_0097_entry);
    runtime.register_function(0x08865000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886500Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865020u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886503Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865040u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865050u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865058u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865060u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886506Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865074u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865080u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088650A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088650D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088650E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088650F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865110u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886513Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865150u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865164u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886517Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088651A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088651C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865220u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886522Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865238u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865244u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886524Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865254u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886527Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088652A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088652B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088652C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088652D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088652E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088652ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865300u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865324u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865338u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886533Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886534Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865354u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865360u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865368u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865374u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865384u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886538Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865410u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865434u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886543Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088654CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088654E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088654ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865508u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886554Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865554u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865560u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865574u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886557Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865590u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886559Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088655F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865618u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865638u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865658u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865660u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865670u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088656A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088656C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088656D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088656F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088656F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865700u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865708u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865710u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865718u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865728u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865758u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886577Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865784u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088657ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088657B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088657B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088657C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088657D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088657E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886580Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865830u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865838u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886585Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886588Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088658ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088658C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088658DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088658ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865904u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865910u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865928u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865930u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886594Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865954u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886595Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886596Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886597Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0886599Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088659ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088659B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088659D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088659F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x088659F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865A98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865ACCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865ADCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865AE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865AF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865B9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865BF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865C88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865CDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865D00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865D0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865D5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865D68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865D84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865D98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865DA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865DA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865DACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865DD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865DE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865E84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865EB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865EB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865EC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865EE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865EECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865EF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865F9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865FA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865FB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865FC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865FD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08865FFCu, &recomp_unit_0097, "recomp_unit_0097");
}
} // namespace psprecomp
