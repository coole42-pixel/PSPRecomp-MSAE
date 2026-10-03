#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0477[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3,
    0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 16, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0,
    0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35,
    36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0,
    78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 109, 110, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169,
    0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188,
};
void recomp_unit_0477_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E1000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0477[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E1000;
    case 2u: goto L_089E1078;
    case 3u: goto L_089E107C;
    case 4u: goto L_089E1094;
    case 5u: goto L_089E109C;
    case 6u: goto L_089E1140;
    case 7u: goto L_089E1144;
    case 8u: goto L_089E115C;
    case 9u: goto L_089E120C;
    case 10u: goto L_089E1210;
    case 11u: goto L_089E1224;
    case 12u: goto L_089E1230;
    case 13u: goto L_089E12A8;
    case 14u: goto L_089E12B4;
    case 15u: goto L_089E12C4;
    case 16u: goto L_089E12CC;
    case 17u: goto L_089E12D0;
    case 18u: goto L_089E12E0;
    case 19u: goto L_089E1310;
    case 20u: goto L_089E132C;
    case 21u: goto L_089E1334;
    case 22u: goto L_089E1348;
    case 23u: goto L_089E1350;
    case 24u: goto L_089E1358;
    case 25u: goto L_089E1364;
    case 26u: goto L_089E136C;
    case 27u: goto L_089E1378;
    case 28u: goto L_089E1388;
    case 29u: goto L_089E1390;
    case 30u: goto L_089E13A0;
    case 31u: goto L_089E13AC;
    case 32u: goto L_089E13B8;
    case 33u: goto L_089E13E4;
    case 34u: goto L_089E13F0;
    case 35u: goto L_089E13FC;
    case 36u: goto L_089E1400;
    case 37u: goto L_089E1408;
    case 38u: goto L_089E141C;
    case 39u: goto L_089E1424;
    case 40u: goto L_089E1438;
    case 41u: goto L_089E1440;
    case 42u: goto L_089E1460;
    case 43u: goto L_089E1468;
    case 44u: goto L_089E1470;
    case 45u: goto L_089E1478;
    case 46u: goto L_089E1498;
    case 47u: goto L_089E14A8;
    case 48u: goto L_089E14D0;
    case 49u: goto L_089E14F4;
    case 50u: goto L_089E1500;
    case 51u: goto L_089E150C;
    case 52u: goto L_089E1520;
    case 53u: goto L_089E1528;
    case 54u: goto L_089E1530;
    case 55u: goto L_089E153C;
    case 56u: goto L_089E1540;
    case 57u: goto L_089E1554;
    case 58u: goto L_089E155C;
    case 59u: goto L_089E1568;
    case 60u: goto L_089E1570;
    case 61u: goto L_089E157C;
    case 62u: goto L_089E1584;
    case 63u: goto L_089E15D8;
    case 64u: goto L_089E1608;
    case 65u: goto L_089E1610;
    case 66u: goto L_089E1618;
    case 67u: goto L_089E1628;
    case 68u: goto L_089E1638;
    case 69u: goto L_089E163C;
    case 70u: goto L_089E1644;
    case 71u: goto L_089E1674;
    case 72u: goto L_089E1680;
    case 73u: goto L_089E169C;
    case 74u: goto L_089E16AC;
    case 75u: goto L_089E16C0;
    case 76u: goto L_089E16DC;
    case 77u: goto L_089E16F8;
    case 78u: goto L_089E1700;
    case 79u: goto L_089E170C;
    case 80u: goto L_089E1738;
    case 81u: goto L_089E1744;
    case 82u: goto L_089E1754;
    case 83u: goto L_089E1790;
    case 84u: goto L_089E17AC;
    case 85u: goto L_089E17B4;
    case 86u: goto L_089E17CC;
    case 87u: goto L_089E17D4;
    case 88u: goto L_089E17F0;
    case 89u: goto L_089E1800;
    case 90u: goto L_089E1814;
    case 91u: goto L_089E181C;
    case 92u: goto L_089E182C;
    case 93u: goto L_089E183C;
    case 94u: goto L_089E1844;
    case 95u: goto L_089E184C;
    case 96u: goto L_089E1864;
    case 97u: goto L_089E1878;
    case 98u: goto L_089E1880;
    case 99u: goto L_089E18B0;
    case 100u: goto L_089E18BC;
    case 101u: goto L_089E18CC;
    case 102u: goto L_089E1908;
    case 103u: goto L_089E1924;
    case 104u: goto L_089E192C;
    case 105u: goto L_089E1944;
    case 106u: goto L_089E1950;
    case 107u: goto L_089E1964;
    case 108u: goto L_089E1988;
    case 109u: goto L_089E1998;
    case 110u: goto L_089E199C;
    case 111u: goto L_089E19A0;
    case 112u: goto L_089E19BC;
    case 113u: goto L_089E19C8;
    case 114u: goto L_089E19D4;
    case 115u: goto L_089E19EC;
    case 116u: goto L_089E19F0;
    case 117u: goto L_089E1A0C;
    case 118u: goto L_089E1A20;
    case 119u: goto L_089E1A38;
    case 120u: goto L_089E1A84;
    case 121u: goto L_089E1A88;
    case 122u: goto L_089E1A94;
    case 123u: goto L_089E1AA0;
    case 124u: goto L_089E1AAC;
    case 125u: goto L_089E1ABC;
    case 126u: goto L_089E1AE8;
    case 127u: goto L_089E1AF0;
    case 128u: goto L_089E1B24;
    case 129u: goto L_089E1B28;
    case 130u: goto L_089E1B4C;
    case 131u: goto L_089E1B54;
    case 132u: goto L_089E1B84;
    case 133u: goto L_089E1BB0;
    case 134u: goto L_089E1BBC;
    case 135u: goto L_089E1BCC;
    case 136u: goto L_089E1BF4;
    case 137u: goto L_089E1BFC;
    case 138u: goto L_089E1C0C;
    case 139u: goto L_089E1C24;
    case 140u: goto L_089E1C30;
    case 141u: goto L_089E1C38;
    case 142u: goto L_089E1C3C;
    case 143u: goto L_089E1C58;
    case 144u: goto L_089E1C60;
    case 145u: goto L_089E1CBC;
    case 146u: goto L_089E1CC4;
    case 147u: goto L_089E1CCC;
    case 148u: goto L_089E1CF0;
    case 149u: goto L_089E1CFC;
    case 150u: goto L_089E1D0C;
    case 151u: goto L_089E1D48;
    case 152u: goto L_089E1D68;
    case 153u: goto L_089E1D70;
    case 154u: goto L_089E1D90;
    case 155u: goto L_089E1D98;
    case 156u: goto L_089E1DA0;
    case 157u: goto L_089E1DA8;
    case 158u: goto L_089E1DB0;
    case 159u: goto L_089E1DD8;
    case 160u: goto L_089E1DDC;
    case 161u: goto L_089E1DF8;
    case 162u: goto L_089E1E08;
    case 163u: goto L_089E1E14;
    case 164u: goto L_089E1E38;
    case 165u: goto L_089E1E50;
    case 166u: goto L_089E1E5C;
    case 167u: goto L_089E1E64;
    case 168u: goto L_089E1E74;
    case 169u: goto L_089E1E7C;
    case 170u: goto L_089E1E84;
    case 171u: goto L_089E1E8C;
    case 172u: goto L_089E1E94;
    case 173u: goto L_089E1EC4;
    case 174u: goto L_089E1ED0;
    case 175u: goto L_089E1EEC;
    case 176u: goto L_089E1EF4;
    case 177u: goto L_089E1EFC;
    case 178u: goto L_089E1F08;
    case 179u: goto L_089E1F28;
    case 180u: goto L_089E1F30;
    case 181u: goto L_089E1F50;
    case 182u: goto L_089E1F8C;
    case 183u: goto L_089E1FA4;
    case 184u: goto L_089E1FC0;
    case 185u: goto L_089E1FD0;
    case 186u: goto L_089E1FD8;
    case 187u: goto L_089E1FF0;
    case 188u: goto L_089E1FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E1000:
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(9)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(13)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(17)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089E107C;
      }
      goto L_089E1078;
    }
L_089E1078:
    rt.unsupported(0x089E1078u, 0x000001CDu, "special? not lowered yet"); return;
L_089E107C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089E1094u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 163u, 0x089DF9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E1094u) goto L_089E1094;
    return;
L_089E1094:
    aot_gpr[31] = (0x089E109Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089E109Cu) goto L_089E109C;
    return;
L_089E109C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(9)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(13)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(17)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089E1144;
      }
      goto L_089E1140;
    }
L_089E1140:
    rt.unsupported(0x089E1140u, 0x000001CDu, "special? not lowered yet"); return;
L_089E1144:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089E115Cu);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 165u, 0x089DFA10u>(ctx, &aot_mem) && ctx.pc == 0x089E115Cu) goto L_089E115C;
    return;
L_089E115C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(9)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(13)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[3] << 5u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(17)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[4] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089E1210;
      }
      goto L_089E120C;
    }
L_089E120C:
    rt.unsupported(0x089E120Cu, 0x000001CDu, "special? not lowered yet"); return;
L_089E1210:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089E1224u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 163u, 0x089DF9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E1224u) goto L_089E1224;
    return;
L_089E1224:
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[31] = (0x089E1230u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 167u, 0x089DAA24u>(ctx, &aot_mem) && ctx.pc == 0x089E1230u) goto L_089E1230;
    return;
L_089E1230:
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (7u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 41248u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(aot_gpr[16]));
    aot_gpr[5] = (0u | 65534u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(116), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(264), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(260), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(92), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(100), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(252), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(256), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
        goto L_089E1310;
    }
    goto L_089E12A8;
L_089E12A8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E12B4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 81u, 0x089DA524u>(ctx, &aot_mem) && ctx.pc == 0x089E12B4u) goto L_089E12B4;
    return;
L_089E12B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089E12C4u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089E12C4u) goto L_089E12C4;
    return;
L_089E12C4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
        goto L_089E1358;
    }
    goto L_089E12CC;
L_089E12CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    goto L_089E12D0;
L_089E12D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E12E0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E12E0u) goto L_089E12E0;
    return;
L_089E12E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u | 54007u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1310:
    aot_gpr[3] = (49152u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(208), 0u);
    goto L_089E12A8;
L_089E132C:
    aot_gpr[3] = (0u | 54005u);
    (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 220u, 0x089E0FA0u>(ctx, &aot_mem); return;
L_089E1334:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E1348u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E1348u) goto L_089E1348;
    return;
L_089E1348:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 220u, 0x089E0FA0u>(ctx, &aot_mem); return;
      }
      goto L_089E1350;
    }
L_089E1350:
    aot_gpr[3] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 220u, 0x089E0FA0u>(ctx, &aot_mem); return;
L_089E1358:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (0x089E1364u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089E1364u) goto L_089E1364;
    return;
L_089E1364:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089E12D0;
      }
      goto L_089E136C;
    }
L_089E136C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(280));
    aot_gpr[31] = (0x089E1378u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1026));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E1378u) goto L_089E1378;
    return;
L_089E1378:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089E13FC;
      }
      goto L_089E1388;
    }
L_089E1388:
    if (aot_gpr[3] != 0u) {
    aot_gpr[3] = (0u | 54007u);
        goto L_089E1400;
    }
    goto L_089E1390;
L_089E1390:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          goto L_089E1334;
      }
      goto L_089E13A0;
    }
L_089E13A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089E1460;
      }
      goto L_089E13AC;
    }
L_089E13AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
        goto L_089E1440;
    }
    goto L_089E13B8;
L_089E13B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(284), aot_gpr[2]);
    goto L_089E13E4;
L_089E13E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089E1408;
      }
      goto L_089E13F0;
    }
L_089E13F0:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 220u, 0x089E0FA0u>(ctx, &aot_mem); return;
L_089E13FC:
    aot_gpr[3] = (0u | 54007u);
    goto L_089E1400;
L_089E1400:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 220u, 0x089E0FA0u>(ctx, &aot_mem); return;
L_089E1408:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E141Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 156u, 0x089E0AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E141Cu) goto L_089E141C;
    return;
L_089E141C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1350;
      }
      goto L_089E1424;
    }
L_089E1424:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E1438u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E1438u) goto L_089E1438;
    return;
L_089E1438:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 220u, 0x089E0FA0u>(ctx, &aot_mem); return;
L_089E1440:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(268), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(284), aot_gpr[3]);
    goto L_089E13E4;
L_089E1460:
    aot_gpr[31] = (0x089E1468u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 148u, 0x089E3B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1468u) goto L_089E1468;
    return;
L_089E1468:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E13AC;
      }
      goto L_089E1470;
    }
L_089E1470:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    (void)rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 221u, 0x089E0FA4u>(ctx, &aot_mem); return;
L_089E1478:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089E14A8;
      }
      goto L_089E1498;
    }
L_089E1498:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E14F4;
      }
      goto L_089E14A8;
    }
L_089E14A8:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(152));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(185));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x089E14D0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E14D0u) goto L_089E14D0;
    return;
L_089E14D0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(169));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem); return;
L_089E14F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_089E14A8;
      }
      goto L_089E1500;
    }
L_089E1500:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E150Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(17));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E150Cu) goto L_089E150C;
    return;
L_089E150C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E1554;
      }
      goto L_089E1520;
    }
L_089E1520:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(16));
    goto L_089E1528;
L_089E1528:
    aot_gpr[31] = (0x089E1530u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1530u) goto L_089E1530;
    return;
L_089E1530:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[18];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E1528;
      }
      goto L_089E153C;
    }
L_089E153C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E1540;
L_089E1540:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1554:
    aot_gpr[31] = (0x089E155Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089E155Cu) goto L_089E155C;
    return;
L_089E155C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[18];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E153C;
      }
      goto L_089E1568;
    }
L_089E1568:
    aot_gpr[31] = (0x089E1570u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1570u) goto L_089E1570;
    return;
L_089E1570:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[18];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E1554;
      }
      goto L_089E157C;
    }
L_089E157C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E1540;
L_089E1584:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[3] ^ 65535u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] != 0u) aot_gpr[6] = (aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089E1608;
      }
      goto L_089E15D8;
    }
L_089E15D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1608:
    aot_gpr[31] = (0x089E1610u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 176u, 0x089DAA88u>(ctx, &aot_mem) && ctx.pc == 0x089E1610u) goto L_089E1610;
    return;
L_089E1610:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E15D8;
      }
      goto L_089E1618;
    }
L_089E1618:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(156)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_089E1674;
    }
    goto L_089E1628;
L_089E1628:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(18));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E1638;
L_089E1638:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_089E163C;
L_089E163C:
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E1644;
L_089E1644:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1674:
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E17D4;
      }
      goto L_089E1680;
    }
L_089E1680:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[16];
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E1638;
      }
      goto L_089E169C;
    }
L_089E169C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x089E16ACu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089E16ACu) goto L_089E16AC;
    return;
L_089E16AC:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089E16C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 25u, 0x089902D4u>(ctx, &aot_mem) && ctx.pc == 0x089E16C0u) goto L_089E16C0;
    return;
L_089E16C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E16DCu);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E16DCu) goto L_089E16DC;
    return;
L_089E16DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E16F8u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E16F8u) goto L_089E16F8;
    return;
L_089E16F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E184C;
      }
      goto L_089E1700;
    }
L_089E1700:
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[23];
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E184C;
      }
      goto L_089E170C;
    }
L_089E170C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (0u | 53248u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    aot_gpr[31] = (0x089E1738u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E1738u) goto L_089E1738;
    return;
L_089E1738:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E1744u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E1744u) goto L_089E1744;
    return;
L_089E1744:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E1790;
      }
      goto L_089E1754;
    }
L_089E1754:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(136), aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089E1790;
L_089E1790:
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(136));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E17ACu);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E17ACu) goto L_089E17AC;
    return;
L_089E17AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1950;
      }
      goto L_089E17B4;
    }
L_089E17B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(118)));
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089E15D8;
      }
      goto L_089E17CC;
    }
L_089E17CC:
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_089E15D8;
L_089E17D4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[16];
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E1638;
      }
      goto L_089E17F0;
    }
L_089E17F0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_089E163C;
    }
    goto L_089E1800;
L_089E1800:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E1814u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1814u) goto L_089E1814;
    return;
L_089E1814:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u | 50500u);
      if (branch_taken) {
          goto L_089E15D8;
      }
      goto L_089E181C;
    }
L_089E181C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E182Cu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089E182Cu) goto L_089E182C;
    return;
L_089E182C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E183Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 25u, 0x089902D4u>(ctx, &aot_mem) && ctx.pc == 0x089E183Cu) goto L_089E183C;
    return;
L_089E183C:
    aot_gpr[31] = (0x089E1844u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E1844u) goto L_089E1844;
    return;
L_089E1844:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089E1864;
    }
    goto L_089E184C;
L_089E184C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E1644;
L_089E1864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(208)));
    aot_gpr[6] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E1878u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1878u) goto L_089E1878;
    return;
L_089E1878:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E184C;
      }
      goto L_089E1880;
    }
L_089E1880:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (0u | 53248u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[21]);
    aot_gpr[31] = (0x089E18B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E18B0u) goto L_089E18B0;
    return;
L_089E18B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E18BCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E18BCu) goto L_089E18BC;
    return;
L_089E18BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E1908;
      }
      goto L_089E18CC;
    }
L_089E18CC:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(136), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089E1908;
L_089E1908:
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(136));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E1924u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E1924u) goto L_089E1924;
    return;
L_089E1924:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1950;
      }
      goto L_089E192C;
    }
L_089E192C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(118)));
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089E15D8;
      }
      goto L_089E1944;
    }
L_089E1944:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E15D8;
L_089E1950:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E1644;
L_089E1964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E1998;
      }
      goto L_089E1988;
    }
L_089E1988:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E19BC;
      }
      goto L_089E1998;
    }
L_089E1998:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_089E199C;
L_089E199C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E19A0;
L_089E19A0:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E19BC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E199C;
      }
      goto L_089E19C8;
    }
L_089E19C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E19EC;
      }
      goto L_089E19D4;
    }
L_089E19D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (49152u << 16u);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E1A0C;
      }
      goto L_089E19EC;
    }
L_089E19EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E19F0;
L_089E19F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1A0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(84));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E1A20u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1A20u) goto L_089E1A20;
    return;
L_089E1A20:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(212));
    aot_gpr[2] = (aot_gpr[16] | aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_089E1ABC;
      }
      goto L_089E1A38;
    }
L_089E1A38:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E1A38;
      }
      goto L_089E1A84;
    }
L_089E1A84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E1A88;
L_089E1A88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E199C;
      }
      goto L_089E1A94;
    }
L_089E1A94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(208)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
        goto L_089E19A0;
    }
    goto L_089E1AA0;
L_089E1AA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E1AACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1AACu) goto L_089E1AAC;
    return;
L_089E1AAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(280), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E19F0;
L_089E1ABC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E1ABC;
      }
      goto L_089E1AE8;
    }
L_089E1AE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E1A88;
L_089E1AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
        goto L_089E1B4C;
    }
    goto L_089E1B24;
L_089E1B24:
    aot_gpr[6] = (0u + 0u);
    goto L_089E1B28;
L_089E1B28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1B4C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089E1B84;
    }
    goto L_089E1B54;
L_089E1B54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1B84:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(148));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (0u | 53248u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[31] = (0x089E1BB0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E1BB0u) goto L_089E1BB0;
    return;
L_089E1BB0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E1BBCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E1BBCu) goto L_089E1BBC;
    return;
L_089E1BBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089E1C60;
      }
      goto L_089E1BCC;
    }
L_089E1BCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E1BF4u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E1BF4u) goto L_089E1BF4;
    return;
L_089E1BF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1C38;
      }
      goto L_089E1BFC;
    }
L_089E1BFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (0u + 0u);
        goto L_089E1B28;
    }
    goto L_089E1C0C;
L_089E1C0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (49152u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[6] = (0u + 0u);
        goto L_089E1B28;
    }
    goto L_089E1C24;
L_089E1C24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(212));
      if (branch_taken) {
          goto L_089E1CCC;
      }
      goto L_089E1C30;
    }
L_089E1C30:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089E1B28;
L_089E1C38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E1C3C;
L_089E1C3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(118)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(118)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E1B28;
      }
      goto L_089E1C58;
    }
L_089E1C58:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E1B28;
L_089E1C60:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    aot_gpr[31] = (0x089E1CBCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E1CBCu) goto L_089E1CBC;
    return;
L_089E1CBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1BFC;
      }
      goto L_089E1CC4;
    }
L_089E1CC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E1C3C;
L_089E1CCC:
    aot_gpr[6] = (0u | 53248u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[31] = (0x089E1CF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E1CF0u) goto L_089E1CF0;
    return;
L_089E1CF0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E1CFCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E1CFCu) goto L_089E1CFC;
    return;
L_089E1CFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089E1D48;
    }
    goto L_089E1D0C;
L_089E1D0C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E1D48;
L_089E1D48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E1D68u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E1D68u) goto L_089E1D68;
    return;
L_089E1D68:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089E1D98;
    }
    goto L_089E1D70;
L_089E1D70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(118)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(118)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E1D98;
      }
      goto L_089E1D90;
    }
L_089E1D90:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E1D98;
L_089E1D98:
    aot_gpr[31] = (0x089E1DA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 27u, 0x089E01E8u>(ctx, &aot_mem) && ctx.pc == 0x089E1DA0u) goto L_089E1DA0;
    return;
L_089E1DA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1B28;
      }
      goto L_089E1DA8;
    }
L_089E1DA8:
    aot_gpr[6] = (0u + 0u);
    goto L_089E1B28;
L_089E1DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[3];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E1DF8;
      }
      goto L_089E1DD8;
    }
L_089E1DD8:
    aot_gpr[5] = (0u + 0u);
    goto L_089E1DDC;
L_089E1DDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1DF8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089E1DD8;
      }
      goto L_089E1E08;
    }
L_089E1E08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089E1E38;
      }
      goto L_089E1E14;
    }
L_089E1E14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1E38:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E1E50u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(212)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1E50u) goto L_089E1E50;
    return;
L_089E1E50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E1E5Cu);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E1964;
L_089E1E5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1DDC;
      }
      goto L_089E1E64;
    }
L_089E1E64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E1E7C;
      }
      goto L_089E1E74;
    }
L_089E1E74:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089E1DDC;
L_089E1E7C:
    aot_gpr[31] = (0x089E1E84u);
    // nop
    goto L_089E1AF0;
L_089E1E84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1DDC;
      }
      goto L_089E1E8C;
    }
L_089E1E8C:
    aot_gpr[5] = (0u + 0u);
    goto L_089E1DDC;
L_089E1E94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x089E1EC4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E1EC4u) goto L_089E1EC4;
    return;
L_089E1EC4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E1EEC;
      }
      goto L_089E1ED0;
    }
L_089E1ED0:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1EEC:
    aot_gpr[31] = (0x089E1EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 72u, 0x089E0600u>(ctx, &aot_mem) && ctx.pc == 0x089E1EF4u) goto L_089E1EF4;
    return;
L_089E1EF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E1F30;
      }
      goto L_089E1EFC;
    }
L_089E1EFC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E1F28;
      }
      goto L_089E1F08;
    }
L_089E1F08:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1F28:
    aot_gpr[31] = (0x089E1F30u);
    // nop
    goto L_089E1DB0;
L_089E1F30:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[2] ^ 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] != 0u) aot_gpr[3] = (aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E1FA4;
      }
      goto L_089E1F8C;
    }
L_089E1F8C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1FA4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E1FC0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1FC0u) goto L_089E1FC0;
    return;
L_089E1FC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089E1FD0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 176u, 0x089DAA88u>(ctx, &aot_mem) && ctx.pc == 0x089E1FD0u) goto L_089E1FD0;
    return;
L_089E1FD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E1F8C;
      }
      goto L_089E1FD8;
    }
L_089E1FD8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E1FF0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E1E94;
L_089E1FF0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (aot_gpr[2] + 0u);
        goto L_089E1F8C;
    }
    goto L_089E1FF8;
L_089E1FF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x089E2000u; return;
}

void recomp_unit_0477(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0477_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_477(Runtime &runtime) {
    runtime.register_generated_unit(477u, 0x089E1000u, 4096u, &recomp_unit_0477, &recomp_unit_0477_entry);
    runtime.register_function(0x089E1000u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1078u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E107Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1094u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E109Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1140u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1144u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E115Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E120Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1210u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1224u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1230u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E12A8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E12B4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E12C4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E12CCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E12D0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E12E0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1310u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E132Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1334u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1348u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1350u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1358u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1364u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E136Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1378u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1388u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1390u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E13A0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E13ACu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E13B8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E13E4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E13F0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E13FCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1400u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1408u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E141Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1424u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1438u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1440u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1460u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1468u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1470u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1478u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1498u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E14A8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E14D0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E14F4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1500u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E150Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1520u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1528u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1530u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E153Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1540u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1554u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E155Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1568u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1570u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E157Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1584u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E15D8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1608u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1610u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1618u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1628u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1638u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E163Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1644u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1674u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1680u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E169Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E16ACu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E16C0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E16DCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E16F8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1700u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E170Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1738u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1744u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1754u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1790u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E17ACu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E17B4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E17CCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E17D4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E17F0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1800u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1814u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E181Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E182Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E183Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1844u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E184Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1864u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1878u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1880u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E18B0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E18BCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E18CCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1908u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1924u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E192Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1944u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1950u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1964u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1988u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1998u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E199Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E19A0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E19BCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E19C8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E19D4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E19ECu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E19F0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1A0Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1A20u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1A38u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1A84u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1A88u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1A94u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1AA0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1AACu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1ABCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1AE8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1AF0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1B24u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1B28u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1B4Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1B54u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1B84u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1BB0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1BBCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1BCCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1BF4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1BFCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C0Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C24u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C30u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C38u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C3Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C58u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1C60u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1CBCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1CC4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1CCCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1CF0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1CFCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1D0Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1D48u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1D68u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1D70u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1D90u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1D98u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1DA0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1DA8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1DB0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1DD8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1DDCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1DF8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E08u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E14u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E38u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E50u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E5Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E64u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E74u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E7Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E84u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E8Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1E94u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1EC4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1ED0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1EECu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1EF4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1EFCu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1F08u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1F28u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1F30u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1F50u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1F8Cu, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1FA4u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1FC0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1FD0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1FD8u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1FF0u, &recomp_unit_0477, "recomp_unit_0477");
    runtime.register_function(0x089E1FF8u, &recomp_unit_0477, "recomp_unit_0477");
}
} // namespace psprecomp
