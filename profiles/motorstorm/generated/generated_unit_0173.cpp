#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0173[1022] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0,
    33, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48,
    0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64,
    0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 80, 0, 0, 81, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 88, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96,
    0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 128, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 147,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 168, 0,
    169, 0, 170, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 176, 0, 177, 0, 0, 0, 178, 179, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197,
    198, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 224, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
};
void recomp_unit_0173_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B1004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0173[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B1004;
    case 2u: goto L_088B100C;
    case 3u: goto L_088B1014;
    case 4u: goto L_088B101C;
    case 5u: goto L_088B1024;
    case 6u: goto L_088B102C;
    case 7u: goto L_088B1034;
    case 8u: goto L_088B103C;
    case 9u: goto L_088B1044;
    case 10u: goto L_088B104C;
    case 11u: goto L_088B1054;
    case 12u: goto L_088B105C;
    case 13u: goto L_088B1064;
    case 14u: goto L_088B106C;
    case 15u: goto L_088B1074;
    case 16u: goto L_088B107C;
    case 17u: goto L_088B1084;
    case 18u: goto L_088B108C;
    case 19u: goto L_088B1094;
    case 20u: goto L_088B109C;
    case 21u: goto L_088B10A4;
    case 22u: goto L_088B10AC;
    case 23u: goto L_088B10B4;
    case 24u: goto L_088B10BC;
    case 25u: goto L_088B10C4;
    case 26u: goto L_088B10CC;
    case 27u: goto L_088B10D4;
    case 28u: goto L_088B10DC;
    case 29u: goto L_088B10E4;
    case 30u: goto L_088B10EC;
    case 31u: goto L_088B10F4;
    case 32u: goto L_088B10FC;
    case 33u: goto L_088B1104;
    case 34u: goto L_088B110C;
    case 35u: goto L_088B1114;
    case 36u: goto L_088B1120;
    case 37u: goto L_088B1128;
    case 38u: goto L_088B1130;
    case 39u: goto L_088B1138;
    case 40u: goto L_088B1140;
    case 41u: goto L_088B1148;
    case 42u: goto L_088B1150;
    case 43u: goto L_088B1158;
    case 44u: goto L_088B1160;
    case 45u: goto L_088B1168;
    case 46u: goto L_088B1170;
    case 47u: goto L_088B1178;
    case 48u: goto L_088B1180;
    case 49u: goto L_088B1188;
    case 50u: goto L_088B1190;
    case 51u: goto L_088B1198;
    case 52u: goto L_088B11A0;
    case 53u: goto L_088B11A8;
    case 54u: goto L_088B11B0;
    case 55u: goto L_088B11B8;
    case 56u: goto L_088B11C0;
    case 57u: goto L_088B11C8;
    case 58u: goto L_088B11D0;
    case 59u: goto L_088B11D8;
    case 60u: goto L_088B11E0;
    case 61u: goto L_088B11E8;
    case 62u: goto L_088B11F0;
    case 63u: goto L_088B11F8;
    case 64u: goto L_088B1200;
    case 65u: goto L_088B1208;
    case 66u: goto L_088B1210;
    case 67u: goto L_088B1218;
    case 68u: goto L_088B1220;
    case 69u: goto L_088B1228;
    case 70u: goto L_088B1230;
    case 71u: goto L_088B1238;
    case 72u: goto L_088B123C;
    case 73u: goto L_088B1258;
    case 74u: goto L_088B1268;
    case 75u: goto L_088B127C;
    case 76u: goto L_088B1298;
    case 77u: goto L_088B12A4;
    case 78u: goto L_088B12E0;
    case 79u: goto L_088B12E8;
    case 80u: goto L_088B12EC;
    case 81u: goto L_088B12F8;
    case 82u: goto L_088B1310;
    case 83u: goto L_088B131C;
    case 84u: goto L_088B1324;
    case 85u: goto L_088B1330;
    case 86u: goto L_088B134C;
    case 87u: goto L_088B1368;
    case 88u: goto L_088B136C;
    case 89u: goto L_088B1370;
    case 90u: goto L_088B1398;
    case 91u: goto L_088B13A8;
    case 92u: goto L_088B13C0;
    case 93u: goto L_088B13DC;
    case 94u: goto L_088B13E8;
    case 95u: goto L_088B13F0;
    case 96u: goto L_088B1400;
    case 97u: goto L_088B1408;
    case 98u: goto L_088B1418;
    case 99u: goto L_088B1424;
    case 100u: goto L_088B1454;
    case 101u: goto L_088B1474;
    case 102u: goto L_088B1488;
    case 103u: goto L_088B14A8;
    case 104u: goto L_088B14C4;
    case 105u: goto L_088B14DC;
    case 106u: goto L_088B14E8;
    case 107u: goto L_088B1508;
    case 108u: goto L_088B151C;
    case 109u: goto L_088B152C;
    case 110u: goto L_088B1538;
    case 111u: goto L_088B1590;
    case 112u: goto L_088B15A4;
    case 113u: goto L_088B15BC;
    case 114u: goto L_088B15C8;
    case 115u: goto L_088B15D8;
    case 116u: goto L_088B15E8;
    case 117u: goto L_088B1630;
    case 118u: goto L_088B1638;
    case 119u: goto L_088B164C;
    case 120u: goto L_088B1668;
    case 121u: goto L_088B1678;
    case 122u: goto L_088B1688;
    case 123u: goto L_088B1698;
    case 124u: goto L_088B16D8;
    case 125u: goto L_088B1708;
    case 126u: goto L_088B1740;
    case 127u: goto L_088B174C;
    case 128u: goto L_088B1750;
    case 129u: goto L_088B1754;
    case 130u: goto L_088B175C;
    case 131u: goto L_088B1768;
    case 132u: goto L_088B17A0;
    case 133u: goto L_088B17CC;
    case 134u: goto L_088B17F8;
    case 135u: goto L_088B1808;
    case 136u: goto L_088B1820;
    case 137u: goto L_088B183C;
    case 138u: goto L_088B1854;
    case 139u: goto L_088B186C;
    case 140u: goto L_088B1888;
    case 141u: goto L_088B189C;
    case 142u: goto L_088B18AC;
    case 143u: goto L_088B18B8;
    case 144u: goto L_088B18DC;
    case 145u: goto L_088B18EC;
    case 146u: goto L_088B18F4;
    case 147u: goto L_088B1900;
    case 148u: goto L_088B1908;
    case 149u: goto L_088B1958;
    case 150u: goto L_088B19A4;
    case 151u: goto L_088B19A8;
    case 152u: goto L_088B1A10;
    case 153u: goto L_088B1A7C;
    case 154u: goto L_088B1AA8;
    case 155u: goto L_088B1ABC;
    case 156u: goto L_088B1AC4;
    case 157u: goto L_088B1AE8;
    case 158u: goto L_088B1B14;
    case 159u: goto L_088B1B20;
    case 160u: goto L_088B1B30;
    case 161u: goto L_088B1B38;
    case 162u: goto L_088B1B48;
    case 163u: goto L_088B1B50;
    case 164u: goto L_088B1B5C;
    case 165u: goto L_088B1B64;
    case 166u: goto L_088B1B6C;
    case 167u: goto L_088B1B78;
    case 168u: goto L_088B1B7C;
    case 169u: goto L_088B1B84;
    case 170u: goto L_088B1B8C;
    case 171u: goto L_088B1B90;
    case 172u: goto L_088B1B98;
    case 173u: goto L_088B1BB8;
    case 174u: goto L_088B1BD4;
    case 175u: goto L_088B1BDC;
    case 176u: goto L_088B1BE0;
    case 177u: goto L_088B1BE8;
    case 178u: goto L_088B1BF8;
    case 179u: goto L_088B1BFC;
    case 180u: goto L_088B1C04;
    case 181u: goto L_088B1C24;
    case 182u: goto L_088B1C40;
    case 183u: goto L_088B1C48;
    case 184u: goto L_088B1C54;
    case 185u: goto L_088B1C6C;
    case 186u: goto L_088B1C8C;
    case 187u: goto L_088B1CA4;
    case 188u: goto L_088B1CC8;
    case 189u: goto L_088B1CE4;
    case 190u: goto L_088B1CFC;
    case 191u: goto L_088B1D08;
    case 192u: goto L_088B1D28;
    case 193u: goto L_088B1D3C;
    case 194u: goto L_088B1D4C;
    case 195u: goto L_088B1D58;
    case 196u: goto L_088B1D74;
    case 197u: goto L_088B1D80;
    case 198u: goto L_088B1D84;
    case 199u: goto L_088B1D88;
    case 200u: goto L_088B1D90;
    case 201u: goto L_088B1DBC;
    case 202u: goto L_088B1DF0;
    case 203u: goto L_088B1E1C;
    case 204u: goto L_088B1E2C;
    case 205u: goto L_088B1E3C;
    case 206u: goto L_088B1E48;
    case 207u: goto L_088B1E5C;
    case 208u: goto L_088B1E7C;
    case 209u: goto L_088B1E88;
    case 210u: goto L_088B1E94;
    case 211u: goto L_088B1EA0;
    case 212u: goto L_088B1EC0;
    case 213u: goto L_088B1ED8;
    case 214u: goto L_088B1EFC;
    case 215u: goto L_088B1F18;
    case 216u: goto L_088B1F30;
    case 217u: goto L_088B1F3C;
    case 218u: goto L_088B1F5C;
    case 219u: goto L_088B1F70;
    case 220u: goto L_088B1F80;
    case 221u: goto L_088B1F8C;
    case 222u: goto L_088B1FB0;
    case 223u: goto L_088B1FBC;
    case 224u: goto L_088B1FC0;
    case 225u: goto L_088B1FC4;
    case 226u: goto L_088B1FCC;
    case 227u: goto L_088B1FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B1004:
    aot_gpr[31] = (0x088B100Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B100Cu) goto L_088B100C;
    return;
L_088B100C:
    aot_gpr[31] = (0x088B1014u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1014u) goto L_088B1014;
    return;
L_088B1014:
    aot_gpr[31] = (0x088B101Cu);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B101Cu) goto L_088B101C;
    return;
L_088B101C:
    aot_gpr[31] = (0x088B1024u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1024u) goto L_088B1024;
    return;
L_088B1024:
    aot_gpr[31] = (0x088B102Cu);
    aot_gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B102Cu) goto L_088B102C;
    return;
L_088B102C:
    aot_gpr[31] = (0x088B1034u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1034u) goto L_088B1034;
    return;
L_088B1034:
    aot_gpr[31] = (0x088B103Cu);
    aot_gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B103Cu) goto L_088B103C;
    return;
L_088B103C:
    aot_gpr[31] = (0x088B1044u);
    aot_gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1044u) goto L_088B1044;
    return;
L_088B1044:
    aot_gpr[31] = (0x088B104Cu);
    aot_gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B104Cu) goto L_088B104C;
    return;
L_088B104C:
    aot_gpr[31] = (0x088B1054u);
    aot_gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1054u) goto L_088B1054;
    return;
L_088B1054:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088B110C;
      }
      goto L_088B105C;
    }
L_088B105C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B10C4;
      }
      goto L_088B1064;
    }
L_088B1064:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B110C;
      }
      goto L_088B106C;
    }
L_088B106C:
    aot_gpr[31] = (0x088B1074u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1074u) goto L_088B1074;
    return;
L_088B1074:
    aot_gpr[31] = (0x088B107Cu);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B107Cu) goto L_088B107C;
    return;
L_088B107C:
    aot_gpr[31] = (0x088B1084u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1084u) goto L_088B1084;
    return;
L_088B1084:
    aot_gpr[31] = (0x088B108Cu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B108Cu) goto L_088B108C;
    return;
L_088B108C:
    aot_gpr[31] = (0x088B1094u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1094u) goto L_088B1094;
    return;
L_088B1094:
    aot_gpr[31] = (0x088B109Cu);
    aot_gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B109Cu) goto L_088B109C;
    return;
L_088B109C:
    aot_gpr[31] = (0x088B10A4u);
    aot_gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10A4u) goto L_088B10A4;
    return;
L_088B10A4:
    aot_gpr[31] = (0x088B10ACu);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10ACu) goto L_088B10AC;
    return;
L_088B10AC:
    aot_gpr[31] = (0x088B10B4u);
    aot_gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10B4u) goto L_088B10B4;
    return;
L_088B10B4:
    aot_gpr[31] = (0x088B10BCu);
    aot_gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10BCu) goto L_088B10BC;
    return;
L_088B10BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088B110C;
      }
      goto L_088B10C4;
    }
L_088B10C4:
    aot_gpr[31] = (0x088B10CCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10CCu) goto L_088B10CC;
    return;
L_088B10CC:
    aot_gpr[31] = (0x088B10D4u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10D4u) goto L_088B10D4;
    return;
L_088B10D4:
    aot_gpr[31] = (0x088B10DCu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10DCu) goto L_088B10DC;
    return;
L_088B10DC:
    aot_gpr[31] = (0x088B10E4u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10E4u) goto L_088B10E4;
    return;
L_088B10E4:
    aot_gpr[31] = (0x088B10ECu);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10ECu) goto L_088B10EC;
    return;
L_088B10EC:
    aot_gpr[31] = (0x088B10F4u);
    aot_gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10F4u) goto L_088B10F4;
    return;
L_088B10F4:
    aot_gpr[31] = (0x088B10FCu);
    aot_gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B10FCu) goto L_088B10FC;
    return;
L_088B10FC:
    aot_gpr[31] = (0x088B1104u);
    aot_gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1104u) goto L_088B1104;
    return;
L_088B1104:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088B110C;
      }
      goto L_088B110C;
    }
L_088B110C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B123C;
      }
      goto L_088B1114;
    }
L_088B1114:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088B1190;
      }
      goto L_088B1120;
    }
L_088B1120:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B11F0;
      }
      goto L_088B1128;
    }
L_088B1128:
    aot_gpr[31] = (0x088B1130u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1130u) goto L_088B1130;
    return;
L_088B1130:
    aot_gpr[31] = (0x088B1138u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1138u) goto L_088B1138;
    return;
L_088B1138:
    aot_gpr[31] = (0x088B1140u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1140u) goto L_088B1140;
    return;
L_088B1140:
    aot_gpr[31] = (0x088B1148u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1148u) goto L_088B1148;
    return;
L_088B1148:
    aot_gpr[31] = (0x088B1150u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1150u) goto L_088B1150;
    return;
L_088B1150:
    aot_gpr[31] = (0x088B1158u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1158u) goto L_088B1158;
    return;
L_088B1158:
    aot_gpr[31] = (0x088B1160u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1160u) goto L_088B1160;
    return;
L_088B1160:
    aot_gpr[31] = (0x088B1168u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1168u) goto L_088B1168;
    return;
L_088B1168:
    aot_gpr[31] = (0x088B1170u);
    aot_gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1170u) goto L_088B1170;
    return;
L_088B1170:
    aot_gpr[31] = (0x088B1178u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1178u) goto L_088B1178;
    return;
L_088B1178:
    aot_gpr[31] = (0x088B1180u);
    aot_gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1180u) goto L_088B1180;
    return;
L_088B1180:
    aot_gpr[31] = (0x088B1188u);
    aot_gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1188u) goto L_088B1188;
    return;
L_088B1188:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088B11F0;
      }
      goto L_088B1190;
    }
L_088B1190:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B11F0;
      }
      goto L_088B1198;
    }
L_088B1198:
    aot_gpr[31] = (0x088B11A0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11A0u) goto L_088B11A0;
    return;
L_088B11A0:
    aot_gpr[31] = (0x088B11A8u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11A8u) goto L_088B11A8;
    return;
L_088B11A8:
    aot_gpr[31] = (0x088B11B0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11B0u) goto L_088B11B0;
    return;
L_088B11B0:
    aot_gpr[31] = (0x088B11B8u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11B8u) goto L_088B11B8;
    return;
L_088B11B8:
    aot_gpr[31] = (0x088B11C0u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11C0u) goto L_088B11C0;
    return;
L_088B11C0:
    aot_gpr[31] = (0x088B11C8u);
    aot_gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11C8u) goto L_088B11C8;
    return;
L_088B11C8:
    aot_gpr[31] = (0x088B11D0u);
    aot_gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11D0u) goto L_088B11D0;
    return;
L_088B11D0:
    aot_gpr[31] = (0x088B11D8u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11D8u) goto L_088B11D8;
    return;
L_088B11D8:
    aot_gpr[31] = (0x088B11E0u);
    aot_gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11E0u) goto L_088B11E0;
    return;
L_088B11E0:
    aot_gpr[31] = (0x088B11E8u);
    aot_gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B11E8u) goto L_088B11E8;
    return;
L_088B11E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088B11F0;
      }
      goto L_088B11F0;
    }
L_088B11F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B123C;
      }
      goto L_088B11F8;
    }
L_088B11F8:
    aot_gpr[31] = (0x088B1200u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1200u) goto L_088B1200;
    return;
L_088B1200:
    aot_gpr[31] = (0x088B1208u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1208u) goto L_088B1208;
    return;
L_088B1208:
    aot_gpr[31] = (0x088B1210u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1210u) goto L_088B1210;
    return;
L_088B1210:
    aot_gpr[31] = (0x088B1218u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1218u) goto L_088B1218;
    return;
L_088B1218:
    aot_gpr[31] = (0x088B1220u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1220u) goto L_088B1220;
    return;
L_088B1220:
    aot_gpr[31] = (0x088B1228u);
    aot_gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1228u) goto L_088B1228;
    return;
L_088B1228:
    aot_gpr[31] = (0x088B1230u);
    aot_gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1230u) goto L_088B1230;
    return;
L_088B1230:
    aot_gpr[31] = (0x088B1238u);
    aot_gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x088B043Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1238u) goto L_088B1238;
    return;
L_088B1238:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    goto L_088B123C;
L_088B123C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] ^ 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] ^ 6u);
      if (branch_taken) {
          goto L_088B1268;
      }
      goto L_088B1258;
    }
L_088B1258:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1298;
      }
      goto L_088B1268;
    }
L_088B1268:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1298;
      }
      goto L_088B127C;
    }
L_088B127C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B127C;
      }
      goto L_088B1298;
    }
L_088B1298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(27416)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088B12EC;
      }
      goto L_088B12A4;
    }
L_088B12A4:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(27416)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28044)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(27416)));
      if (branch_taken) {
          goto L_088B12E8;
      }
      goto L_088B12E0;
    }
L_088B12E0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B12EC;
      }
      goto L_088B12E8;
    }
L_088B12E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_088B12EC;
L_088B12EC:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(27424)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1324;
      }
      goto L_088B12F8;
    }
L_088B12F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B131C;
      }
      goto L_088B1310;
    }
L_088B1310:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(148), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B1324;
      }
      goto L_088B131C;
    }
L_088B131C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    goto L_088B1324;
L_088B1324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(27420)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B13DC;
      }
      goto L_088B1330;
    }
L_088B1330:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[8] = (0u | 3u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4444)));
      if (branch_taken) {
          goto L_088B136C;
      }
      goto L_088B134C;
    }
L_088B134C:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2416)));
    aot_gpr[7] = (aot_gpr[7] ^ 3u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(152)));
        goto L_088B1370;
    }
    goto L_088B1368;
L_088B1368:
    aot_gpr[5] = (0u | 0u);
    goto L_088B136C;
L_088B136C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(152)));
    goto L_088B1370;
L_088B1370:
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(27420)));
      if (branch_taken) {
          goto L_088B13C0;
      }
      goto L_088B1398;
    }
L_088B1398:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088B13A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 214u, 0x088A2E74u>(ctx, &aot_mem) && ctx.pc == 0x088B13A8u) goto L_088B13A8;
    return;
L_088B13A8:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088B13DC;
      }
      goto L_088B13C0;
    }
L_088B13C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088B13DC;
L_088B13DC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(27428)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B13F0;
      }
      goto L_088B13E8;
    }
L_088B13E8:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088B13F0;
L_088B13F0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27436)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1408;
      }
      goto L_088B1400;
    }
L_088B1400:
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    goto L_088B1408;
L_088B1408:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27488)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1424;
      }
      goto L_088B1418;
    }
L_088B1418:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2276)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    goto L_088B1424;
L_088B1424:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1454:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27400), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B1488u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B1488u) goto L_088B1488;
    return;
L_088B1488:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4192));
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
L_088B14A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B1508;
      }
      goto L_088B14C4;
    }
L_088B14C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4192));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B14DCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B14DCu) goto L_088B14DC;
    return;
L_088B14DC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B1508;
      }
      goto L_088B14E8;
    }
L_088B14E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B1508u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B1508u) goto L_088B1508;
    return;
L_088B1508:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B151C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B152Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B152Cu) goto L_088B152C;
    return;
L_088B152C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1538:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (0u | 10u);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B1638;
      }
      goto L_088B1590;
    }
L_088B1590:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088B15A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29368));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B15A4u) goto L_088B15A4;
    return;
L_088B15A4:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-25408)));
      if (branch_taken) {
          goto L_088B15C8;
      }
      goto L_088B15BC;
    }
L_088B15BC:
    aot_gpr[5] = (0u | 64u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088B15C8;
L_088B15C8:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (ctx.hi);
    if (aot_gpr[5] != aot_gpr[21]) {
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
        goto L_088B15E8;
    }
    goto L_088B15D8;
L_088B15D8:
    aot_gpr[5] = (0u | 64u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_088B15E8;
L_088B15E8:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[16] = aot_fpr[13] + aot_fpr[16];
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (0u | 4u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B1630u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B1630u) goto L_088B1630;
    return;
L_088B1630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B16D8;
      }
      goto L_088B1638;
    }
L_088B1638:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B164Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29372));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B164Cu) goto L_088B164C;
    return;
L_088B164C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-25408)));
      if (branch_taken) {
          goto L_088B1678;
      }
      goto L_088B1668;
    }
L_088B1668:
    aot_gpr[6] = (0u | 64u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088B1678;
L_088B1678:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.hi);
    if (aot_gpr[4] != aot_gpr[21]) {
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_088B1698;
    }
    goto L_088B1688;
L_088B1688:
    aot_gpr[4] = (0u | 64u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_088B1698;
L_088B1698:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B16D8u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B16D8u) goto L_088B16D8;
    return;
L_088B16D8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1708:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1750;
      }
      goto L_088B1740;
    }
L_088B1740:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B1754;
      }
      goto L_088B174C;
    }
L_088B174C:
    aot_gpr[4] = (0u | 1u);
    goto L_088B1750;
L_088B1750:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B1754;
L_088B1754:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1A7C;
      }
      goto L_088B175C;
    }
L_088B175C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B1768u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 53u, 0x088AAA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1768u) goto L_088B1768;
    return;
L_088B1768:
    aot_gpr[7] = (16736u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (16768u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (16544u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (16752u << 16u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_088B17CC;
      }
      goto L_088B17A0;
    }
L_088B17A0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[14] = aot_fpr[14] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088B17F8;
      }
      goto L_088B17CC;
    }
L_088B17CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(34))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(36))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[14] = aot_fpr[14] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088B17F8;
L_088B17F8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(150))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1854;
      }
      goto L_088B1808;
    }
L_088B1808:
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088B1820u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29352));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B1820u) goto L_088B1820;
    return;
L_088B1820:
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B183Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29356));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B183Cu) goto L_088B183C;
    return;
L_088B183C:
    aot_fpr[26] = aot_fpr[24] + aot_fpr[0];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = aot_fpr[26] - aot_fpr[30];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_088B189C;
      }
      goto L_088B1854;
    }
L_088B1854:
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088B186Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29360));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B186Cu) goto L_088B186C;
    return;
L_088B186C:
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B1888u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29364));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B1888u) goto L_088B1888;
    return;
L_088B1888:
    aot_fpr[26] = aot_fpr[24] + aot_fpr[0];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = aot_fpr[26] - aot_fpr[30];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    goto L_088B189C;
L_088B189C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32))))));
    aot_gpr[31] = (0x088B18ACu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B18ACu) goto L_088B18AC;
    return;
L_088B18AC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B18B8u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B18B8u) goto L_088B18B8;
    return;
L_088B18B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B18DCu);
    aot_gpr[10] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B18DCu) goto L_088B18DC;
    return;
L_088B18DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] & 4u);
      if (branch_taken) {
          goto L_088B18F4;
      }
      goto L_088B18EC;
    }
L_088B18EC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
        goto L_088B19A8;
    }
    goto L_088B18F4;
L_088B18F4:
    aot_gpr[4] = (aot_gpr[4] & 8u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
        goto L_088B19A8;
    }
    goto L_088B1900;
L_088B1900:
    aot_gpr[31] = (0x088B1908u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B1908u) goto L_088B1908;
    return;
L_088B1908:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(34))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[26];
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(36))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[28];
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088B1958u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088B1538;
L_088B1958:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(34))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(149))))));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[26];
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[7] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(36))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (0u | 1u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088B19A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088B1538;
L_088B19A4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_088B19A8;
L_088B19A8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[26];
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[28];
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[31] = (0x088B1A10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088B1538;
L_088B1A10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[26];
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[20];
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (0u | 1u);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[31] = (0x088B1A7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088B1538;
L_088B1A7C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1AA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B1ABCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1ABCu) goto L_088B1ABC;
    return;
L_088B1ABC:
    aot_gpr[31] = (0x088B1AC4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B1AC4u) goto L_088B1AC4;
    return;
L_088B1AC4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(151))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1AE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[18]) >> 24u));
    aot_gpr[17] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B1B64;
      }
      goto L_088B1B14;
    }
L_088B1B14:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B1B5C;
      }
      goto L_088B1B20;
    }
L_088B1B20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] & 64u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 8u);
      if (branch_taken) {
          goto L_088B1B50;
      }
      goto L_088B1B30;
    }
L_088B1B30:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B50;
      }
      goto L_088B1B38;
    }
L_088B1B38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1B6C;
      }
      goto L_088B1B48;
    }
L_088B1B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B7C;
      }
      goto L_088B1B50;
    }
L_088B1B50:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_088B1C54;
      }
      goto L_088B1B5C;
    }
L_088B1B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1C54;
      }
      goto L_088B1B64;
    }
L_088B1B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1C54;
      }
      goto L_088B1B6C;
    }
L_088B1B6C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B7C;
      }
      goto L_088B1B78;
    }
L_088B1B78:
    aot_gpr[6] = (0u | 1u);
    goto L_088B1B7C;
L_088B1B7C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B1B90;
      }
      goto L_088B1B84;
    }
L_088B1B84:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B90;
      }
      goto L_088B1B8C;
    }
L_088B1B8C:
    aot_gpr[6] = (0u | 1u);
    goto L_088B1B90;
L_088B1B90:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1BE0;
      }
      goto L_088B1B98;
    }
L_088B1B98:
    aot_gpr[4] = (16307u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B1BB8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 201u, 0x088A9F90u>(ctx, &aot_mem) && ctx.pc == 0x088B1BB8u) goto L_088B1BB8;
    return;
L_088B1BB8:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088B1BD4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 73u, 0x088AAC68u>(ctx, &aot_mem) && ctx.pc == 0x088B1BD4u) goto L_088B1BD4;
    return;
L_088B1BD4:
    aot_gpr[31] = (0x088B1BDCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 77u, 0x088AACACu>(ctx, &aot_mem) && ctx.pc == 0x088B1BDCu) goto L_088B1BDC;
    return;
L_088B1BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088B1BE0;
L_088B1BE0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1BFC;
      }
      goto L_088B1BE8;
    }
L_088B1BE8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1BFC;
      }
      goto L_088B1BF8;
    }
L_088B1BF8:
    aot_gpr[6] = (0u | 1u);
    goto L_088B1BFC;
L_088B1BFC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1C48;
      }
      goto L_088B1C04;
    }
L_088B1C04:
    aot_gpr[4] = (16307u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B1C24u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 201u, 0x088A9F90u>(ctx, &aot_mem) && ctx.pc == 0x088B1C24u) goto L_088B1C24;
    return;
L_088B1C24:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088B1C40u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 73u, 0x088AAC68u>(ctx, &aot_mem) && ctx.pc == 0x088B1C40u) goto L_088B1C40;
    return;
L_088B1C40:
    aot_gpr[31] = (0x088B1C48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 77u, 0x088AACACu>(ctx, &aot_mem) && ctx.pc == 0x088B1C48u) goto L_088B1C48;
    return;
L_088B1C48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088B1C54;
L_088B1C54:
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
L_088B1C6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1C8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B1CA4u);
    aot_gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B1CA4u) goto L_088B1CA4;
    return;
L_088B1CA4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4144));
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
L_088B1CC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B1D28;
      }
      goto L_088B1CE4;
    }
L_088B1CE4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4144));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B1CFCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1CFCu) goto L_088B1CFC;
    return;
L_088B1CFC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B1D28;
      }
      goto L_088B1D08;
    }
L_088B1D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B1D28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B1D28u) goto L_088B1D28;
    return;
L_088B1D28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1D3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B1D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B1D4Cu) goto L_088B1D4C;
    return;
L_088B1D4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1D58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1D84;
      }
      goto L_088B1D74;
    }
L_088B1D74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B1D88;
      }
      goto L_088B1D80;
    }
L_088B1D80:
    aot_gpr[4] = (0u | 1u);
    goto L_088B1D84;
L_088B1D84:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B1D88;
L_088B1D88:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E1C;
      }
      goto L_088B1D90;
    }
L_088B1D90:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (0u | 2u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B1DBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 57u, 0x088287E4u>(ctx, &aot_mem) && ctx.pc == 0x088B1DBCu) goto L_088B1DBC;
    return;
L_088B1DBC:
    aot_gpr[4] = (16924u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16704u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[4] = (0u | 81u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B1DF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B1DF0u) goto L_088B1DF0;
    return;
L_088B1DF0:
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (65409u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088B1E1Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-32640));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B1E1Cu) goto L_088B1E1C;
    return;
L_088B1E1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B1E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1E3Cu) goto L_088B1E3C;
    return;
L_088B1E3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B1E5Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1E5Cu) goto L_088B1E5C;
    return;
L_088B1E5C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1EA0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1EC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B1ED8u);
    aot_gpr[6] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B1ED8u) goto L_088B1ED8;
    return;
L_088B1ED8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4096));
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
L_088B1EFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B1F5C;
      }
      goto L_088B1F18;
    }
L_088B1F18:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4096));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B1F30u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1F30u) goto L_088B1F30;
    return;
L_088B1F30:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B1F5C;
      }
      goto L_088B1F3C;
    }
L_088B1F3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B1F5Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B1F5Cu) goto L_088B1F5C;
    return;
L_088B1F5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1F70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B1F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B1F80u) goto L_088B1F80;
    return;
L_088B1F80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1F8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1FC0;
      }
      goto L_088B1FB0;
    }
L_088B1FB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B1FC4;
      }
      goto L_088B1FBC;
    }
L_088B1FBC:
    aot_gpr[4] = (0u | 1u);
    goto L_088B1FC0;
L_088B1FC0:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B1FC4;
L_088B1FC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 10u, 0x088B20E4u>(ctx, &aot_mem); return;
      }
      goto L_088B1FCC;
    }
L_088B1FCC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (0u | 9u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B1FF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B1FF8u) goto L_088B1FF8;
    return;
L_088B1FF8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2004u);
    aot_gpr[4] = (0u | 2u);
    (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0173(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0173_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_173(Runtime &runtime) {
    runtime.register_generated_unit(173u, 0x088B1000u, 4096u, &recomp_unit_0173, &recomp_unit_0173_entry);
    runtime.register_function(0x088B1004u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B100Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1014u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B101Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1024u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B102Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1034u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B103Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1044u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B104Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1054u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B105Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1064u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B106Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1074u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B107Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1084u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B108Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1094u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B109Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B10FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B110Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1114u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1120u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1128u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1130u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1138u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1140u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1148u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1150u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1158u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1160u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1168u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1170u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1178u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1180u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1188u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1190u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1198u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B11F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1200u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1208u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1210u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1218u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1220u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1228u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1230u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1238u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B123Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1258u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1268u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B127Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1298u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B12A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B12E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B12E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B12ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B12F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1310u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B131Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1324u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1330u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B134Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1368u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B136Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1370u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1398u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B13A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B13C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B13DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B13E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B13F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1400u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1408u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1418u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1424u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1454u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1474u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1488u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B14A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B14C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B14DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B14E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1508u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B151Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B152Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1538u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1590u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B15A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B15BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B15C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B15D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B15E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1630u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1638u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B164Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1668u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1678u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1688u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1698u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B16D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1708u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1740u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B174Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1750u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1754u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B175Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1768u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B17A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B17CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B17F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1808u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1820u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B183Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1854u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B186Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1888u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B189Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B18ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B18B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B18DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B18ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B18F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1900u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1908u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1958u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B19A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B19A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1A10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1A7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1AA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1ABCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1AC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1AE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1B98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1BFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1C8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1CA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1CC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1CE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1CFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1D90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1DBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1DF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1E94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1EA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1EC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1ED8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1EFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1F8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1FB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1FBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1FC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1FC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1FCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x088B1FF8u, &recomp_unit_0173, "recomp_unit_0173");
}
} // namespace psprecomp
