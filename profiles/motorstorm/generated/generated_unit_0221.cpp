#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0221[1010] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 14, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0,
    0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 58, 0, 59, 0, 60, 61, 0, 0,
    62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 71, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0,
    0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0,
    167, 0, 168, 169, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0,
    0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183,
    0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192,
    193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199,
};
void recomp_unit_0221_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E1004u;
        entry_id = (entry_delta < 4040u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0221[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E1004;
    case 2u: goto L_088E1010;
    case 3u: goto L_088E1030;
    case 4u: goto L_088E1048;
    case 5u: goto L_088E1054;
    case 6u: goto L_088E1064;
    case 7u: goto L_088E1070;
    case 8u: goto L_088E1088;
    case 9u: goto L_088E1098;
    case 10u: goto L_088E10BC;
    case 11u: goto L_088E10C8;
    case 12u: goto L_088E10D4;
    case 13u: goto L_088E10E4;
    case 14u: goto L_088E10E8;
    case 15u: goto L_088E10F8;
    case 16u: goto L_088E1104;
    case 17u: goto L_088E1120;
    case 18u: goto L_088E1138;
    case 19u: goto L_088E113C;
    case 20u: goto L_088E114C;
    case 21u: goto L_088E1164;
    case 22u: goto L_088E116C;
    case 23u: goto L_088E118C;
    case 24u: goto L_088E119C;
    case 25u: goto L_088E11E4;
    case 26u: goto L_088E11F4;
    case 27u: goto L_088E11FC;
    case 28u: goto L_088E1204;
    case 29u: goto L_088E1224;
    case 30u: goto L_088E1234;
    case 31u: goto L_088E1240;
    case 32u: goto L_088E1248;
    case 33u: goto L_088E1258;
    case 34u: goto L_088E1260;
    case 35u: goto L_088E1268;
    case 36u: goto L_088E1290;
    case 37u: goto L_088E12A0;
    case 38u: goto L_088E12B4;
    case 39u: goto L_088E12DC;
    case 40u: goto L_088E12E8;
    case 41u: goto L_088E12F8;
    case 42u: goto L_088E1308;
    case 43u: goto L_088E1314;
    case 44u: goto L_088E1324;
    case 45u: goto L_088E1338;
    case 46u: goto L_088E1348;
    case 47u: goto L_088E135C;
    case 48u: goto L_088E1370;
    case 49u: goto L_088E137C;
    case 50u: goto L_088E1388;
    case 51u: goto L_088E139C;
    case 52u: goto L_088E13B0;
    case 53u: goto L_088E13BC;
    case 54u: goto L_088E13C8;
    case 55u: goto L_088E13D0;
    case 56u: goto L_088E13D8;
    case 57u: goto L_088E13E0;
    case 58u: goto L_088E13E4;
    case 59u: goto L_088E13EC;
    case 60u: goto L_088E13F4;
    case 61u: goto L_088E13F8;
    case 62u: goto L_088E1404;
    case 63u: goto L_088E1418;
    case 64u: goto L_088E1428;
    case 65u: goto L_088E1444;
    case 66u: goto L_088E1454;
    case 67u: goto L_088E1460;
    case 68u: goto L_088E1474;
    case 69u: goto L_088E1484;
    case 70u: goto L_088E1494;
    case 71u: goto L_088E149C;
    case 72u: goto L_088E14A0;
    case 73u: goto L_088E14BC;
    case 74u: goto L_088E14D0;
    case 75u: goto L_088E1538;
    case 76u: goto L_088E1544;
    case 77u: goto L_088E1558;
    case 78u: goto L_088E156C;
    case 79u: goto L_088E1588;
    case 80u: goto L_088E158C;
    case 81u: goto L_088E15B4;
    case 82u: goto L_088E15BC;
    case 83u: goto L_088E15CC;
    case 84u: goto L_088E15D4;
    case 85u: goto L_088E15E4;
    case 86u: goto L_088E15EC;
    case 87u: goto L_088E15FC;
    case 88u: goto L_088E1604;
    case 89u: goto L_088E1638;
    case 90u: goto L_088E1650;
    case 91u: goto L_088E1668;
    case 92u: goto L_088E16E8;
    case 93u: goto L_088E1700;
    case 94u: goto L_088E1714;
    case 95u: goto L_088E1720;
    case 96u: goto L_088E1734;
    case 97u: goto L_088E1740;
    case 98u: goto L_088E1754;
    case 99u: goto L_088E1764;
    case 100u: goto L_088E1784;
    case 101u: goto L_088E180C;
    case 102u: goto L_088E1820;
    case 103u: goto L_088E183C;
    case 104u: goto L_088E1860;
    case 105u: goto L_088E1870;
    case 106u: goto L_088E1884;
    case 107u: goto L_088E189C;
    case 108u: goto L_088E18B8;
    case 109u: goto L_088E18C8;
    case 110u: goto L_088E18FC;
    case 111u: goto L_088E1910;
    case 112u: goto L_088E1928;
    case 113u: goto L_088E1940;
    case 114u: goto L_088E1950;
    case 115u: goto L_088E1960;
    case 116u: goto L_088E196C;
    case 117u: goto L_088E1980;
    case 118u: goto L_088E1998;
    case 119u: goto L_088E19A8;
    case 120u: goto L_088E19C0;
    case 121u: goto L_088E19F4;
    case 122u: goto L_088E19F8;
    case 123u: goto L_088E1A28;
    case 124u: goto L_088E1A34;
    case 125u: goto L_088E1A44;
    case 126u: goto L_088E1A5C;
    case 127u: goto L_088E1A90;
    case 128u: goto L_088E1A9C;
    case 129u: goto L_088E1AC8;
    case 130u: goto L_088E1AD4;
    case 131u: goto L_088E1AE0;
    case 132u: goto L_088E1AE8;
    case 133u: goto L_088E1B04;
    case 134u: goto L_088E1B14;
    case 135u: goto L_088E1B28;
    case 136u: goto L_088E1B30;
    case 137u: goto L_088E1B58;
    case 138u: goto L_088E1B6C;
    case 139u: goto L_088E1B78;
    case 140u: goto L_088E1B8C;
    case 141u: goto L_088E1B98;
    case 142u: goto L_088E1BA0;
    case 143u: goto L_088E1BA8;
    case 144u: goto L_088E1BB0;
    case 145u: goto L_088E1BC4;
    case 146u: goto L_088E1BD0;
    case 147u: goto L_088E1BD8;
    case 148u: goto L_088E1BDC;
    case 149u: goto L_088E1BE8;
    case 150u: goto L_088E1BF8;
    case 151u: goto L_088E1C04;
    case 152u: goto L_088E1C18;
    case 153u: goto L_088E1C20;
    case 154u: goto L_088E1C48;
    case 155u: goto L_088E1C94;
    case 156u: goto L_088E1C9C;
    case 157u: goto L_088E1CA4;
    case 158u: goto L_088E1CC0;
    case 159u: goto L_088E1CF8;
    case 160u: goto L_088E1D00;
    case 161u: goto L_088E1D20;
    case 162u: goto L_088E1D30;
    case 163u: goto L_088E1D4C;
    case 164u: goto L_088E1D54;
    case 165u: goto L_088E1D68;
    case 166u: goto L_088E1D70;
    case 167u: goto L_088E1D84;
    case 168u: goto L_088E1D8C;
    case 169u: goto L_088E1D90;
    case 170u: goto L_088E1DA8;
    case 171u: goto L_088E1DAC;
    case 172u: goto L_088E1DC0;
    case 173u: goto L_088E1DDC;
    case 174u: goto L_088E1DF0;
    case 175u: goto L_088E1DF8;
    case 176u: goto L_088E1E08;
    case 177u: goto L_088E1E10;
    case 178u: goto L_088E1E34;
    case 179u: goto L_088E1E3C;
    case 180u: goto L_088E1E58;
    case 181u: goto L_088E1E64;
    case 182u: goto L_088E1E78;
    case 183u: goto L_088E1E80;
    case 184u: goto L_088E1E94;
    case 185u: goto L_088E1E9C;
    case 186u: goto L_088E1EB0;
    case 187u: goto L_088E1EB8;
    case 188u: goto L_088E1EC0;
    case 189u: goto L_088E1ED4;
    case 190u: goto L_088E1EDC;
    case 191u: goto L_088E1EE8;
    case 192u: goto L_088E1F00;
    case 193u: goto L_088E1F04;
    case 194u: goto L_088E1F18;
    case 195u: goto L_088E1F34;
    case 196u: goto L_088E1F48;
    case 197u: goto L_088E1F60;
    case 198u: goto L_088E1FA8;
    case 199u: goto L_088E1FC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E1004:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_088E1010;
L_088E1010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 188u, 0x088E0F98u>(ctx, &aot_mem); return;
      }
      goto L_088E1030;
    }
L_088E1030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1516)));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[25] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 184u, 0x088E0F5Cu>(ctx, &aot_mem); return;
      }
      goto L_088E1048;
    }
L_088E1048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_088E1054;
L_088E1054:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088E1064u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1064u) goto L_088E1064;
    return;
L_088E1064:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1520)));
    goto L_088E1070;
L_088E1070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 96u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(864));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x088E1088u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1088u) goto L_088E1088;
    return;
L_088E1088:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088E1070;
      }
      goto L_088E1098;
    }
L_088E1098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[6] = (0u | 192u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(672));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088E10BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E10BCu) goto L_088E10BC;
    return;
L_088E10BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088E1C94;
      }
      goto L_088E10C8;
    }
L_088E10C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1564)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088E116C;
      }
      goto L_088E10D4;
    }
L_088E10D4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E1164;
      }
      goto L_088E10E4;
    }
L_088E10E4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    goto L_088E10E8;
L_088E10E8:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E114C;
      }
      goto L_088E10F8;
    }
L_088E10F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1492)));
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    goto L_088E1104;
L_088E1104:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(244)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 168 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E113C;
      }
      goto L_088E1120;
    }
L_088E1120:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[11]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E113C;
      }
      goto L_088E1138;
    }
L_088E1138:
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_088E113C;
L_088E113C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E1104;
      }
      goto L_088E114C;
    }
L_088E114C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1516)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E10E8;
      }
      goto L_088E1164;
    }
L_088E1164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1F60;
      }
      goto L_088E116C;
    }
L_088E116C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[18] = (aot_gpr[20] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E118Cu);
    aot_gpr[6] = (0u | 672u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E118Cu) goto L_088E118C;
    return;
L_088E118C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E119Cu);
    aot_gpr[6] = (0u | 672u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E119Cu) goto L_088E119C;
    return;
L_088E119C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1360), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1364), 0u);
    aot_gpr[5] = (20224u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (17192u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (20352u << 16u);
    aot_gpr[8] = (0u | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(512));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[9] = (0u | 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1536), aot_gpr[18]);
    aot_gpr[13] = (32768u << 16u);
    goto L_088E11E4;
L_088E11E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E1224;
      }
      goto L_088E11F4;
    }
L_088E11F4:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E1224;
      }
      goto L_088E11FC;
    }
L_088E11FC:
    { const bool branch_taken = aot_gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1224;
      }
      goto L_088E1204;
    }
L_088E1204:
    aot_gpr[8] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-128));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1432), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E1240;
      }
      goto L_088E1224;
    }
L_088E1224:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[11] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E11E4;
      }
      goto L_088E1234;
    }
L_088E1234:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-128));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1432), aot_gpr[4]);
    goto L_088E1240;
L_088E1240:
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(768));
    aot_gpr[10] = (0u | 0u);
    goto L_088E1248;
L_088E1248:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E1290;
      }
      goto L_088E1258;
    }
L_088E1258:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E1290;
      }
      goto L_088E1260;
    }
L_088E1260:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1290;
      }
      goto L_088E1268;
    }
L_088E1268:
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[8]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-64));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1424), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E12B4;
      }
      goto L_088E1290;
    }
L_088E1290:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[10] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E1248;
      }
      goto L_088E12A0;
    }
L_088E12A0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-64));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1424), aot_gpr[4]);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    goto L_088E12B4;
L_088E12B4:
    aot_fpr[16] = aot_fpr[13] / aot_fpr[12];
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(320), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1520)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_088E12E8;
      }
      goto L_088E12DC;
    }
L_088E12DC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088E12F8;
      }
      goto L_088E12E8;
    }
L_088E12E8:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[13]);
    goto L_088E12F8;
L_088E12F8:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[10] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E1314;
      }
      goto L_088E1308;
    }
L_088E1308:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088E1324;
      }
      goto L_088E1314;
    }
L_088E1314:
    aot_fpr[12] = aot_fpr[14] - aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[13]);
    goto L_088E1324;
L_088E1324:
    aot_gpr[11] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(169) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_088E13D0;
      }
      goto L_088E1338;
    }
L_088E1338:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_088E1348;
    }
    goto L_088E1348;
L_088E1348:
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[11]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_088E135C;
    }
    goto L_088E135C;
L_088E135C:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_088E137C;
    }
    goto L_088E1370;
L_088E1370:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088E1388;
      }
      goto L_088E137C;
    }
L_088E137C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[13]);
    goto L_088E1388;
L_088E1388:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[10]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_088E139C;
    }
    goto L_088E139C;
L_088E139C:
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[20];
        goto L_088E13BC;
    }
    goto L_088E13B0;
L_088E13B0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088E13C8;
      }
      goto L_088E13BC;
    }
L_088E13BC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[13]);
    goto L_088E13C8;
L_088E13C8:
    aot_gpr[10] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    goto L_088E13D0;
L_088E13D0:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[5] = (aot_gpr[10] < static_cast<std::uint32_t>(24) ? 1u : 0u);
      if (branch_taken) {
          goto L_088E13E4;
      }
      goto L_088E13D8;
    }
L_088E13D8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E13E4;
      }
      goto L_088E13E0;
    }
L_088E13E0:
    aot_gpr[10] = (0u | 24u);
    goto L_088E13E4;
L_088E13E4:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (aot_gpr[11] < static_cast<std::uint32_t>(24) ? 1u : 0u);
      if (branch_taken) {
          goto L_088E13F8;
      }
      goto L_088E13EC;
    }
L_088E13EC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E13F8;
      }
      goto L_088E13F4;
    }
L_088E13F4:
    aot_gpr[11] = (0u | 24u);
    goto L_088E13F8;
L_088E13F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1524), aot_gpr[11]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1428), aot_gpr[10]);
      if (branch_taken) {
          goto L_088E1428;
      }
      goto L_088E1404;
    }
L_088E1404:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1524), aot_gpr[11]);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(169) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1428), aot_gpr[10]);
      if (branch_taken) {
          goto L_088E1428;
      }
      goto L_088E1418;
    }
L_088E1418:
    aot_gpr[5] = (0u - aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1428), aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(168));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1524), aot_gpr[5]);
    goto L_088E1428;
L_088E1428:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1400), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1396), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1404), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1420), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1532)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1476), aot_gpr[21]);
      if (branch_taken) {
          goto L_088E1460;
      }
      goto L_088E1444;
    }
L_088E1444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1516)));
    aot_gpr[5] = (0u | 128u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1460;
      }
      goto L_088E1454;
    }
L_088E1454:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1476), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
    goto L_088E1460;
L_088E1460:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1528), aot_gpr[17]);
    aot_gpr[5] = (0u | 255u);
    aot_gpr[31] = (0x088E1474u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1474u) goto L_088E1474;
    return;
L_088E1474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (0x088E1484u);
    aot_gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1484u) goto L_088E1484;
    return;
L_088E1484:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1540)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_088E149C;
      }
      goto L_088E1494;
    }
L_088E1494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088E14A0;
      }
      goto L_088E149C;
    }
L_088E149C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    goto L_088E14A0;
L_088E14A0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1448), aot_gpr[23]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[23]);
    aot_fpr[22] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[22])));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088E1668;
      }
      goto L_088E14BC;
    }
L_088E14BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (0x088E14D0u);
    aot_gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E14D0u) goto L_088E14D0;
    return;
L_088E14D0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[23]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[17] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[18] = (aot_gpr[4] << 24u);
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[18]) >> 24u));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_fpr[28] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[28])));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 24u));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1576), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[30] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[30])));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1552)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088E1538u);
    aot_fpr[12] = aot_fpr[28] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088E1538u) goto L_088E1538;
    return;
L_088E1538:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x088E1544u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088E1544u) goto L_088E1544;
    return;
L_088E1544:
    aot_gpr[6] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1576)));
      if (branch_taken) {
          goto L_088E1668;
      }
      goto L_088E1558;
    }
L_088E1558:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]) ^ 0x80000000u);
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]) ^ 0x80000000u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1448)));
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[18]);
    goto L_088E156C;
L_088E156C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_088E1650;
      }
      goto L_088E1588;
    }
L_088E1588:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[17]);
    goto L_088E158C;
L_088E158C:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[15] = aot_fpr[16] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[30] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[16] = aot_fpr[19] + aot_fpr[14];
      if (branch_taken) {
          goto L_088E15BC;
      }
      goto L_088E15B4;
    }
L_088E15B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E1638;
      }
      goto L_088E15BC;
    }
L_088E15BC:
    ctx.set_fpu_condition((aot_fpr[28] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E15D4;
      }
      goto L_088E15CC;
    }
L_088E15CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E1638;
      }
      goto L_088E15D4;
    }
L_088E15D4:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E15EC;
      }
      goto L_088E15E4;
    }
L_088E15E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E1638;
      }
      goto L_088E15EC;
    }
L_088E15EC:
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
        goto L_088E1604;
    }
    goto L_088E15FC;
L_088E15FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E1638;
      }
      goto L_088E1604;
    }
L_088E1604:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(180)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[18]);
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[10] = (ctx.lo);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[17]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088E1638;
L_088E1638:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[17]);
      if (branch_taken) {
          goto L_088E158C;
      }
      goto L_088E1650;
    }
L_088E1650:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 16u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[18]);
      if (branch_taken) {
          goto L_088E156C;
      }
      goto L_088E1668;
    }
L_088E1668:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1484), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1556)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1548)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1560)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1488), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1516)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1500), aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1472), aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[7] >> 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1504), aot_gpr[7]);
    aot_fpr[19] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1512), aot_gpr[8]);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1508), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1416), aot_gpr[4]);
    aot_gpr[4] = (16768u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17056u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088E16E8;
L_088E16E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1488)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1500)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1504)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1508)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1512)));
      if (branch_taken) {
          goto L_088E1714;
      }
      goto L_088E1700;
    }
L_088E1700:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E1764;
      }
      goto L_088E1714;
    }
L_088E1714:
    aot_gpr[9] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E1734;
      }
      goto L_088E1720;
    }
L_088E1720:
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E1764;
      }
      goto L_088E1734;
    }
L_088E1734:
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E1754;
      }
      goto L_088E1740;
    }
L_088E1740:
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088E1764;
      }
      goto L_088E1754;
    }
L_088E1754:
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[30] = (aot_gpr[9] | 0u);
    goto L_088E1764;
L_088E1764:
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1460), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1472)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1440), aot_gpr[6]);
      if (branch_taken) {
          goto L_088E1B58;
      }
      goto L_088E1784;
    }
L_088E1784:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1476)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1420)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1408), aot_gpr[4]);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[30]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1516)));
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1496)));
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1468), aot_gpr[7]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (0u | 0u);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_gpr[7] = (ctx.lo);
    aot_fpr[14] = aot_fpr[12] + aot_fpr[24];
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1464), aot_gpr[7]);
    aot_gpr[30] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1444), aot_gpr[6]);
    aot_gpr[4] = (ctx.lo);
    aot_fpr[2] = aot_fpr[0] + aot_fpr[24];
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1452), aot_gpr[4]);
    aot_gpr[21] = (ctx.lo);
    goto L_088E180C;
L_088E180C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1468)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1448)));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088E1820;
    }
    goto L_088E1820;
L_088E1820:
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[17] = aot_fpr[17] + aot_fpr[24];
        goto L_088E183C;
    }
    goto L_088E183C;
L_088E183C:
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1496)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[6] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1480)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[17];
    ctx.set_fpu_condition((aot_fpr[6] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1B14;
      }
      goto L_088E1860;
    }
L_088E1860:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1B14;
      }
      goto L_088E1870;
    }
L_088E1870:
    aot_gpr[4] = (0u | 1u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088E189C;
      }
      goto L_088E1884;
    }
L_088E1884:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[23] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18B8;
      }
      goto L_088E189C;
    }
L_088E189C:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[23] = (ctx.lo);
    goto L_088E18B8;
L_088E18B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1464)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088E18C8;
    }
    goto L_088E18C8;
L_088E18C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1484)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[1];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1392), aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[3];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1416)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088E1B04;
      }
      goto L_088E18FC;
    }
L_088E18FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1492)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_088E1910;
L_088E1910:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1408)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    if (static_cast<std::int32_t>(aot_gpr[19]) < 0) {
    aot_fpr[17] = aot_fpr[17] + aot_fpr[24];
        goto L_088E1928;
    }
    goto L_088E1928;
L_088E1928:
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[17] = aot_fpr[13] + aot_fpr[17];
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1AD4;
      }
      goto L_088E1940;
    }
L_088E1940:
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1AD4;
      }
      goto L_088E1950;
    }
L_088E1950:
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088E196C;
      }
      goto L_088E1960;
    }
L_088E1960:
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_088E1980;
      }
      goto L_088E196C;
    }
L_088E196C:
    aot_fpr[17] = aot_fpr[17] - aot_fpr[20];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_088E1980;
L_088E1980:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1392)));
    aot_gpr[25] = (aot_gpr[25] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < -128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1A28;
      }
      goto L_088E1998;
    }
L_088E1998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1432)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1A28;
      }
      goto L_088E19A8;
    }
L_088E19A8:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E19F8;
      }
      goto L_088E19C0;
    }
L_088E19C0:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1404)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1396)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(1360));
    aot_gpr[3] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[25] | 0u);
    aot_gpr[10] = (aot_gpr[24] | 0u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088E19F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 113u, 0x088DF82Cu>(ctx, &aot_mem) && ctx.pc == 0x088E19F4u) goto L_088E19F4;
    return;
L_088E19F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_088E19F8;
L_088E19F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(244)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(228)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088E1AC8;
      }
      goto L_088E1A28;
    }
L_088E1A28:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < -64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1AC8;
      }
      goto L_088E1A34;
    }
L_088E1A34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1424)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1AC8;
      }
      goto L_088E1A44;
    }
L_088E1A44:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E1A9C;
      }
      goto L_088E1A5C;
    }
L_088E1A5C:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1404)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1396)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(1364));
    aot_gpr[3] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[25] | 0u);
    aot_gpr[10] = (aot_gpr[24] | 0u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    aot_gpr[31] = (0x088E1A90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 113u, 0x088DF82Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1A90u) goto L_088E1A90;
    return;
L_088E1A90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1428)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088E1A9C;
L_088E1A9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(244)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(228)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088E1AC8;
L_088E1AC8:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[30]);
      if (branch_taken) {
          goto L_088E1AE8;
      }
      goto L_088E1AD4;
    }
L_088E1AD4:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[30]);
      if (branch_taken) {
          goto L_088E1AE8;
      }
      goto L_088E1AE0;
    }
L_088E1AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1B04;
      }
      goto L_088E1AE8;
    }
L_088E1AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1420)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1416)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1910;
      }
      goto L_088E1B04;
    }
L_088E1B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1452)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1460)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
      if (branch_taken) {
          goto L_088E1B30;
      }
      goto L_088E1B14;
    }
L_088E1B14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1452)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1460)));
      if (branch_taken) {
          goto L_088E1B30;
      }
      goto L_088E1B28;
    }
L_088E1B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1B58;
      }
      goto L_088E1B30;
    }
L_088E1B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1476)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1472)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1440), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1444), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E180C;
      }
      goto L_088E1B58;
    }
L_088E1B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1488)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1488), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E16E8;
      }
      goto L_088E1B6C;
    }
L_088E1B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_088E1BA8;
      }
      goto L_088E1B78;
    }
L_088E1B78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1428)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1368), aot_gpr[6]);
      if (branch_taken) {
          goto L_088E1B98;
      }
      goto L_088E1B8C;
    }
L_088E1B8C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1360));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E1BA0;
      }
      goto L_088E1B98;
    }
L_088E1B98:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1368));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E1BA0;
L_088E1BA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1360), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1360)));
    goto L_088E1BA8;
L_088E1BA8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1428)));
      if (branch_taken) {
          goto L_088E1BDC;
      }
      goto L_088E1BB0;
    }
L_088E1BB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1524)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1372), aot_gpr[6]);
      if (branch_taken) {
          goto L_088E1BD0;
      }
      goto L_088E1BC4;
    }
L_088E1BC4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1364));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E1BD8;
      }
      goto L_088E1BD0;
    }
L_088E1BD0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1372));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088E1BD8;
L_088E1BD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1364), aot_gpr[5]);
    goto L_088E1BDC;
L_088E1BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1520)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088E1BF8;
      }
      goto L_088E1BE8;
    }
L_088E1BE8:
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088E1BF8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1BF8u) goto L_088E1BF8;
    return;
L_088E1BF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1364)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
        goto L_088E1C20;
    }
    goto L_088E1C04;
L_088E1C04:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[31] = (0x088E1C18u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1C18u) goto L_088E1C18;
    return;
L_088E1C18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    goto L_088E1C20;
L_088E1C20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1536)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x088E1C48u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1C48u) goto L_088E1C48;
    return;
L_088E1C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1364)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1528)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1544)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[7] = (aot_gpr[7] << 8u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088E1C94;
L_088E1C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1F60;
      }
      goto L_088E1C9C;
    }
L_088E1C9C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1F60;
      }
      goto L_088E1CA4;
    }
L_088E1CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (0x088E1CC0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1CC0u) goto L_088E1CC0;
    return;
L_088E1CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1380), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(1376));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1384), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(38)));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(1384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1388), aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(1380));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(1388));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E1CF8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 31u, 0x088DF1A4u>(ctx, &aot_mem) && ctx.pc == 0x088E1CF8u) goto L_088E1CF8;
    return;
L_088E1CF8:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1E08;
      }
      goto L_088E1D00;
    }
L_088E1D00:
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(260)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1380)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1388)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E1DC0;
      }
      goto L_088E1D20;
    }
L_088E1D20:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1384)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    goto L_088E1D30;
L_088E1D30:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1376)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (ctx.lo);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[8]);
      if (branch_taken) {
          goto L_088E1DAC;
      }
      goto L_088E1D4C;
    }
L_088E1D4C:
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[17] + aot_gpr[8]);
    goto L_088E1D54;
L_088E1D54:
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 168 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < 216 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1D90;
      }
      goto L_088E1D68;
    }
L_088E1D68:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D90;
      }
      goto L_088E1D70;
    }
L_088E1D70:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[10]) < 176 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1D90;
      }
      goto L_088E1D84;
    }
L_088E1D84:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D90;
      }
      goto L_088E1D8C;
    }
L_088E1D8C:
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    goto L_088E1D90;
L_088E1D90:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1384)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E1D54;
      }
      goto L_088E1DA8;
    }
L_088E1DA8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1388)));
    goto L_088E1DAC;
L_088E1DAC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_088E1D30;
      }
      goto L_088E1DC0;
    }
L_088E1DC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(688));
      if (branch_taken) {
          goto L_088E1DF8;
      }
      goto L_088E1DDC;
    }
L_088E1DDC:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(688));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088E1DF0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1DF0u) goto L_088E1DF0;
    return;
L_088E1DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1E08;
      }
      goto L_088E1DF8;
    }
L_088E1DF8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x088E1E08u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1E08u) goto L_088E1E08;
    return;
L_088E1E08:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1F60;
      }
      goto L_088E1E10;
    }
L_088E1E10:
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[7] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(228)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1380)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1388)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E1F18;
      }
      goto L_088E1E34;
    }
L_088E1E34:
    aot_gpr[12] = (aot_gpr[16] << 5u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1384)));
    goto L_088E1E3C;
L_088E1E3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1376)));
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[11] = (ctx.lo);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1F04;
      }
      goto L_088E1E58;
    }
L_088E1E58:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[8] << 2u);
    aot_gpr[11] = (aot_gpr[17] + aot_gpr[11]);
    goto L_088E1E64;
L_088E1E64:
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[9]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1EB0;
      }
      goto L_088E1E78;
    }
L_088E1E78:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1EB0;
      }
      goto L_088E1E80;
    }
L_088E1E80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) < 172 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1EB0;
      }
      goto L_088E1E94;
    }
L_088E1E94:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1EB0;
      }
      goto L_088E1E9C;
    }
L_088E1E9C:
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[12]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 192 ? 1u : 0u);
    goto L_088E1EB0;
L_088E1EB0:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[9]) < 240 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1EE8;
      }
      goto L_088E1EB8;
    }
L_088E1EB8:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1EE8;
      }
      goto L_088E1EC0;
    }
L_088E1EC0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[10]) < 172 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1EE8;
      }
      goto L_088E1ED4;
    }
L_088E1ED4:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1EE8;
      }
      goto L_088E1EDC;
    }
L_088E1EDC:
    aot_gpr[9] = (aot_gpr[12] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    goto L_088E1EE8;
L_088E1EE8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1384)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E1E64;
      }
      goto L_088E1F00;
    }
L_088E1F00:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1388)));
    goto L_088E1F04;
L_088E1F04:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_088E1E3C;
      }
      goto L_088E1F18;
    }
L_088E1F18:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[16] << 7u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x088E1F34u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1F34u) goto L_088E1F34;
    return;
L_088E1F34:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(768));
    aot_gpr[31] = (0x088E1F48u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1F48u) goto L_088E1F48;
    return;
L_088E1F48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088E1F60u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E1F60u) goto L_088E1F60;
    return;
L_088E1F60:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1580)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1584)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1588)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1592)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1596)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1600)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1604)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1608)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1FA8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32752), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1FC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1200));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(972), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    ctx.pc = 0x088E2000u; return;
}

void recomp_unit_0221(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0221_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_221(Runtime &runtime) {
    runtime.register_generated_unit(221u, 0x088E1000u, 4096u, &recomp_unit_0221, &recomp_unit_0221_entry);
    runtime.register_function(0x088E1004u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1010u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1030u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1048u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1054u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1064u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1070u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1088u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1098u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E10BCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E10C8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E10D4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E10E4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E10E8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E10F8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1104u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1120u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1138u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E113Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E114Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1164u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E116Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E118Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E119Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E11E4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E11F4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E11FCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1204u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1224u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1234u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1240u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1248u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1258u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1260u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1268u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1290u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E12A0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E12B4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E12DCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E12E8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E12F8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1308u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1314u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1324u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1338u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1348u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E135Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1370u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E137Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1388u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E139Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13B0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13BCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13C8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13D0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13D8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13E0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13E4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13ECu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13F4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E13F8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1404u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1418u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1428u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1444u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1454u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1460u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1474u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1484u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1494u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E149Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E14A0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E14BCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E14D0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1538u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1544u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1558u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E156Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1588u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E158Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15B4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15BCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15CCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15D4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15E4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15ECu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E15FCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1604u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1638u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1650u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1668u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E16E8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1700u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1714u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1720u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1734u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1740u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1754u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1764u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1784u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E180Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1820u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E183Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1860u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1870u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1884u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E189Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E18B8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E18C8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E18FCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1910u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1928u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1940u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1950u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1960u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E196Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1980u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1998u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E19A8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E19C0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E19F4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E19F8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1A28u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1A34u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1A44u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1A5Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1A90u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1A9Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1AC8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1AD4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1AE0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1AE8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B04u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B14u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B28u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B30u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B58u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B6Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B78u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B8Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1B98u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BA0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BA8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BB0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BC4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BD0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BD8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BDCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BE8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1BF8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1C04u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1C18u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1C20u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1C48u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1C94u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1C9Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1CA4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1CC0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1CF8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D00u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D20u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D30u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D4Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D54u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D68u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D70u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D84u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D8Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1D90u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1DA8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1DACu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1DC0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1DDCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1DF0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1DF8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E08u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E10u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E34u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E3Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E58u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E64u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E78u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E80u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E94u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1E9Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1EB0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1EB8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1EC0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1ED4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1EDCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1EE8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1F00u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1F04u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1F18u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1F34u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1F48u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1F60u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1FA8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x088E1FC8u, &recomp_unit_0221, "recomp_unit_0221");
}
} // namespace psprecomp
