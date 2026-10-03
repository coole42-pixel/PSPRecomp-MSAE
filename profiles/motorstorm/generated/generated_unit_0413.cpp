#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0413[1022] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0,
    11, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 29, 0, 30, 31, 0, 32, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 46, 47, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0,
    57, 0, 58, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79,
    0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 94, 0, 95, 96, 0, 97, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0,
    0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 130, 0, 131, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 142, 0, 143, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0,
    150, 0, 0, 0, 151, 0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0,
    209, 0, 0, 0, 210, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0,
    0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 231, 0, 232, 233, 0, 234, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 240, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 245,
};
void recomp_unit_0413_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A1004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0413[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A1004;
    case 2u: goto L_089A1010;
    case 3u: goto L_089A101C;
    case 4u: goto L_089A1024;
    case 5u: goto L_089A1028;
    case 6u: goto L_089A103C;
    case 7u: goto L_089A1044;
    case 8u: goto L_089A104C;
    case 9u: goto L_089A1068;
    case 10u: goto L_089A1070;
    case 11u: goto L_089A1084;
    case 12u: goto L_089A108C;
    case 13u: goto L_089A10A0;
    case 14u: goto L_089A10A8;
    case 15u: goto L_089A10C8;
    case 16u: goto L_089A10CC;
    case 17u: goto L_089A10D4;
    case 18u: goto L_089A10EC;
    case 19u: goto L_089A1108;
    case 20u: goto L_089A1110;
    case 21u: goto L_089A1124;
    case 22u: goto L_089A112C;
    case 23u: goto L_089A1138;
    case 24u: goto L_089A1144;
    case 25u: goto L_089A1148;
    case 26u: goto L_089A1150;
    case 27u: goto L_089A1168;
    case 28u: goto L_089A1184;
    case 29u: goto L_089A1190;
    case 30u: goto L_089A1198;
    case 31u: goto L_089A119C;
    case 32u: goto L_089A11A4;
    case 33u: goto L_089A11A8;
    case 34u: goto L_089A11BC;
    case 35u: goto L_089A11C4;
    case 36u: goto L_089A11DC;
    case 37u: goto L_089A11F4;
    case 38u: goto L_089A11FC;
    case 39u: goto L_089A121C;
    case 40u: goto L_089A1224;
    case 41u: goto L_089A123C;
    case 42u: goto L_089A1244;
    case 43u: goto L_089A124C;
    case 44u: goto L_089A1254;
    case 45u: goto L_089A1260;
    case 46u: goto L_089A1268;
    case 47u: goto L_089A126C;
    case 48u: goto L_089A1274;
    case 49u: goto L_089A1290;
    case 50u: goto L_089A12A4;
    case 51u: goto L_089A12AC;
    case 52u: goto L_089A12C8;
    case 53u: goto L_089A12D0;
    case 54u: goto L_089A12E4;
    case 55u: goto L_089A12EC;
    case 56u: goto L_089A12F4;
    case 57u: goto L_089A1304;
    case 58u: goto L_089A130C;
    case 59u: goto L_089A1310;
    case 60u: goto L_089A1324;
    case 61u: goto L_089A133C;
    case 62u: goto L_089A1344;
    case 63u: goto L_089A1378;
    case 64u: goto L_089A1380;
    case 65u: goto L_089A13A0;
    case 66u: goto L_089A13A8;
    case 67u: goto L_089A13C4;
    case 68u: goto L_089A13D0;
    case 69u: goto L_089A13D4;
    case 70u: goto L_089A13DC;
    case 71u: goto L_089A1400;
    case 72u: goto L_089A1430;
    case 73u: goto L_089A1438;
    case 74u: goto L_089A1440;
    case 75u: goto L_089A144C;
    case 76u: goto L_089A1454;
    case 77u: goto L_089A1470;
    case 78u: goto L_089A1478;
    case 79u: goto L_089A1480;
    case 80u: goto L_089A1498;
    case 81u: goto L_089A14A4;
    case 82u: goto L_089A14B4;
    case 83u: goto L_089A14BC;
    case 84u: goto L_089A14C0;
    case 85u: goto L_089A14E0;
    case 86u: goto L_089A14F8;
    case 87u: goto L_089A1500;
    case 88u: goto L_089A153C;
    case 89u: goto L_089A1544;
    case 90u: goto L_089A154C;
    case 91u: goto L_089A1558;
    case 92u: goto L_089A1560;
    case 93u: goto L_089A1580;
    case 94u: goto L_089A1590;
    case 95u: goto L_089A1598;
    case 96u: goto L_089A159C;
    case 97u: goto L_089A15A4;
    case 98u: goto L_089A15A8;
    case 99u: goto L_089A15C4;
    case 100u: goto L_089A15CC;
    case 101u: goto L_089A15D4;
    case 102u: goto L_089A15EC;
    case 103u: goto L_089A15F4;
    case 104u: goto L_089A1614;
    case 105u: goto L_089A161C;
    case 106u: goto L_089A164C;
    case 107u: goto L_089A1654;
    case 108u: goto L_089A165C;
    case 109u: goto L_089A1668;
    case 110u: goto L_089A1670;
    case 111u: goto L_089A168C;
    case 112u: goto L_089A1694;
    case 113u: goto L_089A169C;
    case 114u: goto L_089A16B4;
    case 115u: goto L_089A16C0;
    case 116u: goto L_089A16D0;
    case 117u: goto L_089A16D8;
    case 118u: goto L_089A16DC;
    case 119u: goto L_089A16FC;
    case 120u: goto L_089A1714;
    case 121u: goto L_089A171C;
    case 122u: goto L_089A1758;
    case 123u: goto L_089A1760;
    case 124u: goto L_089A1768;
    case 125u: goto L_089A1774;
    case 126u: goto L_089A177C;
    case 127u: goto L_089A179C;
    case 128u: goto L_089A17AC;
    case 129u: goto L_089A17B4;
    case 130u: goto L_089A17B8;
    case 131u: goto L_089A17C0;
    case 132u: goto L_089A17C4;
    case 133u: goto L_089A17E0;
    case 134u: goto L_089A17E8;
    case 135u: goto L_089A17F0;
    case 136u: goto L_089A1808;
    case 137u: goto L_089A1810;
    case 138u: goto L_089A1830;
    case 139u: goto L_089A1838;
    case 140u: goto L_089A1880;
    case 141u: goto L_089A1890;
    case 142u: goto L_089A1898;
    case 143u: goto L_089A18A0;
    case 144u: goto L_089A18A4;
    case 145u: goto L_089A18A8;
    case 146u: goto L_089A18D0;
    case 147u: goto L_089A18D8;
    case 148u: goto L_089A18E0;
    case 149u: goto L_089A18F8;
    case 150u: goto L_089A1904;
    case 151u: goto L_089A1914;
    case 152u: goto L_089A191C;
    case 153u: goto L_089A1920;
    case 154u: goto L_089A194C;
    case 155u: goto L_089A195C;
    case 156u: goto L_089A1978;
    case 157u: goto L_089A1980;
    case 158u: goto L_089A1990;
    case 159u: goto L_089A19CC;
    case 160u: goto L_089A1A00;
    case 161u: goto L_089A1A04;
    case 162u: goto L_089A1A24;
    case 163u: goto L_089A1A6C;
    case 164u: goto L_089A1A74;
    case 165u: goto L_089A1A80;
    case 166u: goto L_089A1A88;
    case 167u: goto L_089A1AAC;
    case 168u: goto L_089A1AC0;
    case 169u: goto L_089A1AC8;
    case 170u: goto L_089A1AD4;
    case 171u: goto L_089A1B1C;
    case 172u: goto L_089A1B2C;
    case 173u: goto L_089A1B34;
    case 174u: goto L_089A1B3C;
    case 175u: goto L_089A1B40;
    case 176u: goto L_089A1B44;
    case 177u: goto L_089A1B6C;
    case 178u: goto L_089A1B74;
    case 179u: goto L_089A1B7C;
    case 180u: goto L_089A1B94;
    case 181u: goto L_089A1BA0;
    case 182u: goto L_089A1BB0;
    case 183u: goto L_089A1BB8;
    case 184u: goto L_089A1BBC;
    case 185u: goto L_089A1BE8;
    case 186u: goto L_089A1BF8;
    case 187u: goto L_089A1C14;
    case 188u: goto L_089A1C1C;
    case 189u: goto L_089A1C2C;
    case 190u: goto L_089A1C68;
    case 191u: goto L_089A1C9C;
    case 192u: goto L_089A1CA0;
    case 193u: goto L_089A1CC0;
    case 194u: goto L_089A1D08;
    case 195u: goto L_089A1D10;
    case 196u: goto L_089A1D1C;
    case 197u: goto L_089A1D24;
    case 198u: goto L_089A1D48;
    case 199u: goto L_089A1D5C;
    case 200u: goto L_089A1D64;
    case 201u: goto L_089A1D70;
    case 202u: goto L_089A1DA8;
    case 203u: goto L_089A1DB8;
    case 204u: goto L_089A1DC0;
    case 205u: goto L_089A1DE0;
    case 206u: goto L_089A1DE8;
    case 207u: goto L_089A1DF0;
    case 208u: goto L_089A1DF8;
    case 209u: goto L_089A1E04;
    case 210u: goto L_089A1E14;
    case 211u: goto L_089A1E1C;
    case 212u: goto L_089A1E20;
    case 213u: goto L_089A1E44;
    case 214u: goto L_089A1E54;
    case 215u: goto L_089A1E64;
    case 216u: goto L_089A1E74;
    case 217u: goto L_089A1E7C;
    case 218u: goto L_089A1E90;
    case 219u: goto L_089A1EA0;
    case 220u: goto L_089A1EA8;
    case 221u: goto L_089A1EB0;
    case 222u: goto L_089A1ED4;
    case 223u: goto L_089A1EE8;
    case 224u: goto L_089A1EF0;
    case 225u: goto L_089A1EFC;
    case 226u: goto L_089A1F1C;
    case 227u: goto L_089A1F24;
    case 228u: goto L_089A1F3C;
    case 229u: goto L_089A1F44;
    case 230u: goto L_089A1F4C;
    case 231u: goto L_089A1F5C;
    case 232u: goto L_089A1F64;
    case 233u: goto L_089A1F68;
    case 234u: goto L_089A1F70;
    case 235u: goto L_089A1F8C;
    case 236u: goto L_089A1FA0;
    case 237u: goto L_089A1FA8;
    case 238u: goto L_089A1FB4;
    case 239u: goto L_089A1FBC;
    case 240u: goto L_089A1FC0;
    case 241u: goto L_089A1FD4;
    case 242u: goto L_089A1FDC;
    case 243u: goto L_089A1FE4;
    case 244u: goto L_089A1FF0;
    case 245u: goto L_089A1FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A1004:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A103C;
      }
      goto L_089A1010;
    }
L_089A1010:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A101Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A101Cu) goto L_089A101C;
    return;
L_089A101C:
    aot_gpr[31] = (0x089A1024u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1024u) goto L_089A1024;
    return;
L_089A1024:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1028;
L_089A1028:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A103C:
    aot_gpr[31] = (0x089A1044u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1044u) goto L_089A1044;
    return;
L_089A1044:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1028;
L_089A104C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089A1068u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1068u) goto L_089A1068;
    return;
L_089A1068:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A1084;
      }
      goto L_089A1070;
    }
L_089A1070:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1084:
    aot_gpr[31] = (0x089A108Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A108Cu) goto L_089A108C;
    return;
L_089A108C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A10CC;
      }
      goto L_089A10A0;
    }
L_089A10A0:
    aot_gpr[31] = (0x089A10A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A10A8u) goto L_089A10A8;
    return;
L_089A10A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(14));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A10C8u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A10C8u) goto L_089A10C8;
    return;
L_089A10C8:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089A10CC;
L_089A10CC:
    aot_gpr[31] = (0x089A10D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A10D4u) goto L_089A10D4;
    return;
L_089A10D4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A10EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089A1108u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1108u) goto L_089A1108;
    return;
L_089A1108:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A1124;
      }
      goto L_089A1110;
    }
L_089A1110:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1124:
    aot_gpr[31] = (0x089A112Cu);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A112Cu) goto L_089A112C;
    return;
L_089A112C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A1148;
      }
      goto L_089A1138;
    }
L_089A1138:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1144u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1144u) goto L_089A1144;
    return;
L_089A1144:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A1148;
L_089A1148:
    aot_gpr[31] = (0x089A1150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1150u) goto L_089A1150;
    return;
L_089A1150:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1168:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089A1184u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1184u) goto L_089A1184;
    return;
L_089A1184:
    aot_gpr[3] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = ((aot_gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
      if (branch_taken) {
          goto L_089A11A8;
      }
      goto L_089A1190;
    }
L_089A1190:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A11BC;
      }
      goto L_089A1198;
    }
L_089A1198:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A119C;
L_089A119C:
    aot_gpr[31] = (0x089A11A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A11A4u) goto L_089A11A4;
    return;
L_089A11A4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A11A8;
L_089A11A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A11BC:
    aot_gpr[31] = (0x089A11C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A11C4u) goto L_089A11C4;
    return;
L_089A11C4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089A1198;
      }
      goto L_089A11DC;
    }
L_089A11DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A11F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A11F4u) goto L_089A11F4;
    return;
L_089A11F4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A119C;
L_089A11FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089A121Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A121Cu) goto L_089A121C;
    return;
L_089A121C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089A123C;
      }
      goto L_089A1224;
    }
L_089A1224:
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
L_089A123C:
    aot_gpr[31] = (0x089A1244u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A1244u) goto L_089A1244;
    return;
L_089A1244:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A126C;
      }
      goto L_089A124C;
    }
L_089A124C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_089A1290;
      }
      goto L_089A1254;
    }
L_089A1254:
    aot_gpr[2] = (aot_gpr[5] & 1u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (aot_gpr[5] | 1u);
        goto L_089A1260;
    }
    goto L_089A1260;
L_089A1260:
    aot_gpr[31] = (0x089A1268u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089A1168;
L_089A1268:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A126C;
L_089A126C:
    aot_gpr[31] = (0x089A1274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1274u) goto L_089A1274;
    return;
L_089A1274:
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089A1290:
    aot_gpr[3] = (aot_gpr[5] & 1u);
    aot_gpr[2] = (aot_gpr[5] & 254u);
    if (aot_gpr[3] != 0u) aot_gpr[5] = (aot_gpr[2]);
    aot_gpr[31] = (0x089A12A4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089A1168;
L_089A12A4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A126C;
L_089A12AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089A12C8u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A12C8u) goto L_089A12C8;
    return;
L_089A12C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A12E4;
      }
      goto L_089A12D0;
    }
L_089A12D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A12E4:
    aot_gpr[31] = (0x089A12ECu);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A12ECu) goto L_089A12EC;
    return;
L_089A12EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A1304;
      }
      goto L_089A12F4;
    }
L_089A12F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A1324;
      }
      goto L_089A1304;
    }
L_089A1304:
    aot_gpr[31] = (0x089A130Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A130Cu) goto L_089A130C;
    return;
L_089A130C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1310;
L_089A1310:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1324:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089A133Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A133Cu) goto L_089A133C;
    return;
L_089A133C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1310;
L_089A1344:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089A1378u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1378u) goto L_089A1378;
    return;
L_089A1378:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A13A0;
      }
      goto L_089A1380;
    }
L_089A1380:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A13A0:
    aot_gpr[31] = (0x089A13A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A13A8u) goto L_089A13A8;
    return;
L_089A13A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A13D4;
      }
      goto L_089A13C4;
    }
L_089A13C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A13D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A13D0u) goto L_089A13D0;
    return;
L_089A13D0:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A13D4;
L_089A13D4:
    aot_gpr[31] = (0x089A13DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A13DCu) goto L_089A13DC;
    return;
L_089A13DC:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
      if (branch_taken) {
          goto L_089A144C;
      }
      goto L_089A1430;
    }
L_089A1430:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A144C;
      }
      goto L_089A1438;
    }
L_089A1438:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089A144C;
      }
      goto L_089A1440;
    }
L_089A1440:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1470;
      }
      goto L_089A144C;
    }
L_089A144C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_089A1454;
L_089A1454:
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
L_089A1470:
    aot_gpr[31] = (0x089A1478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1478u) goto L_089A1478;
    return;
L_089A1478:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089A1454;
      }
      goto L_089A1480;
    }
L_089A1480:
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] >> 3u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089A1498u);
    aot_gpr[20] = (aot_gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A1498u) goto L_089A1498;
    return;
L_089A1498:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A14B4;
      }
      goto L_089A14A4;
    }
L_089A14A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A14E0;
      }
      goto L_089A14B4;
    }
L_089A14B4:
    aot_gpr[31] = (0x089A14BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A14BCu) goto L_089A14BC;
    return;
L_089A14BC:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A14C0;
L_089A14C0:
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
L_089A14E0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    if (aot_gpr[17] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x089A14F8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A14F8u) goto L_089A14F8;
    return;
L_089A14F8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A154C;
      }
      goto L_089A1500;
    }
L_089A1500:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(58));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A153Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A153Cu) goto L_089A153C;
    return;
L_089A153C:
    aot_gpr[31] = (0x089A1544u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1544u) goto L_089A1544;
    return;
L_089A1544:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A14C0;
L_089A154C:
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089A1558u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A1558u) goto L_089A1558;
    return;
L_089A1558:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A1500;
L_089A1560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089A1580u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1580u) goto L_089A1580;
    return;
L_089A1580:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A15A8;
      }
      goto L_089A1590;
    }
L_089A1590:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A15C4;
      }
      goto L_089A1598;
    }
L_089A1598:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A159C;
L_089A159C:
    aot_gpr[31] = (0x089A15A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A15A4u) goto L_089A15A4;
    return;
L_089A15A4:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    goto L_089A15A8;
L_089A15A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A15C4:
    aot_gpr[31] = (0x089A15CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A15CCu) goto L_089A15CC;
    return;
L_089A15CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A1598;
      }
      goto L_089A15D4;
    }
L_089A15D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A159C;
      }
      goto L_089A15EC;
    }
L_089A15EC:
    aot_gpr[31] = (0x089A15F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A15F4u) goto L_089A15F4;
    return;
L_089A15F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1614u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1614u) goto L_089A1614;
    return;
L_089A1614:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A159C;
L_089A161C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
      if (branch_taken) {
          goto L_089A1668;
      }
      goto L_089A164C;
    }
L_089A164C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A1668;
      }
      goto L_089A1654;
    }
L_089A1654:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089A1668;
      }
      goto L_089A165C;
    }
L_089A165C:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A168C;
      }
      goto L_089A1668;
    }
L_089A1668:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_089A1670;
L_089A1670:
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
L_089A168C:
    aot_gpr[31] = (0x089A1694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1694u) goto L_089A1694;
    return;
L_089A1694:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089A1670;
      }
      goto L_089A169C;
    }
L_089A169C:
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] >> 3u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089A16B4u);
    aot_gpr[20] = (aot_gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A16B4u) goto L_089A16B4;
    return;
L_089A16B4:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A16D0;
      }
      goto L_089A16C0;
    }
L_089A16C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A16FC;
      }
      goto L_089A16D0;
    }
L_089A16D0:
    aot_gpr[31] = (0x089A16D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A16D8u) goto L_089A16D8;
    return;
L_089A16D8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A16DC;
L_089A16DC:
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
L_089A16FC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    if (aot_gpr[17] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x089A1714u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A1714u) goto L_089A1714;
    return;
L_089A1714:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A1768;
      }
      goto L_089A171C;
    }
L_089A171C:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(57));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1758u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1758u) goto L_089A1758;
    return;
L_089A1758:
    aot_gpr[31] = (0x089A1760u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1760u) goto L_089A1760;
    return;
L_089A1760:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A16DC;
L_089A1768:
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089A1774u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A1774u) goto L_089A1774;
    return;
L_089A1774:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A171C;
L_089A177C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089A179Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A179Cu) goto L_089A179C;
    return;
L_089A179C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A17C4;
      }
      goto L_089A17AC;
    }
L_089A17AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A17E0;
      }
      goto L_089A17B4;
    }
L_089A17B4:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A17B8;
L_089A17B8:
    aot_gpr[31] = (0x089A17C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A17C0u) goto L_089A17C0;
    return;
L_089A17C0:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    goto L_089A17C4;
L_089A17C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A17E0:
    aot_gpr[31] = (0x089A17E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A17E8u) goto L_089A17E8;
    return;
L_089A17E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A17B4;
      }
      goto L_089A17F0;
    }
L_089A17F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A17B8;
      }
      goto L_089A1808;
    }
L_089A1808:
    aot_gpr[31] = (0x089A1810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A1810u) goto L_089A1810;
    return;
L_089A1810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(55));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1830u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1830u) goto L_089A1830;
    return;
L_089A1830:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A17B8;
L_089A1838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
      if (branch_taken) {
          goto L_089A18A0;
      }
      goto L_089A1880;
    }
L_089A1880:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A18A4;
      }
      goto L_089A1890;
    }
L_089A1890:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A18A0;
      }
      goto L_089A1898;
    }
L_089A1898:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A18D0;
      }
      goto L_089A18A0;
    }
L_089A18A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A18A4;
L_089A18A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089A18A8;
L_089A18A8:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A18D0:
    aot_gpr[31] = (0x089A18D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A18D8u) goto L_089A18D8;
    return;
L_089A18D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089A18A8;
      }
      goto L_089A18E0;
    }
L_089A18E0:
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[2] >> 3u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A18F8u);
    aot_gpr[23] = (aot_gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A18F8u) goto L_089A18F8;
    return;
L_089A18F8:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A1914;
      }
      goto L_089A1904;
    }
L_089A1904:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A194C;
      }
      goto L_089A1914;
    }
L_089A1914:
    aot_gpr[31] = (0x089A191Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A191Cu) goto L_089A191C;
    return;
L_089A191C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1920;
L_089A1920:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A194C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A195Cu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A195Cu) goto L_089A195C;
    return;
L_089A195C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    if (aot_gpr[18] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A1978u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A1978u) goto L_089A1978;
    return;
L_089A1978:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A1A74;
      }
      goto L_089A1980;
    }
L_089A1980:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
        goto L_089A1A04;
    }
    goto L_089A1990;
L_089A1990:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[23] + aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A1A00;
      }
      goto L_089A19CC;
    }
L_089A19CC:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089A1A00;
L_089A1A00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
    goto L_089A1A04;
L_089A1A04:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(53));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(54));
    if (aot_gpr[21] == 0u) aot_gpr[5] = (aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (0u | 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1A24u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1A24u) goto L_089A1A24;
    return;
L_089A1A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x089A1A6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1A6Cu) goto L_089A1A6C;
    return;
L_089A1A6C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1920;
L_089A1A74:
    aot_gpr[5] = (aot_gpr[18] & 65535u);
    aot_gpr[31] = (0x089A1A80u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A1A80u) goto L_089A1A80;
    return;
L_089A1A80:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A1980;
L_089A1A88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[2] = (aot_gpr[9] + 0u);
    aot_gpr[3] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_089A1AC0;
      }
      goto L_089A1AAC;
    }
L_089A1AAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089A1AC0;
L_089A1AC0:
    aot_gpr[31] = (0x089A1AC8u);
    // nop
    goto L_089A1838;
L_089A1AC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1AD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
      if (branch_taken) {
          goto L_089A1B3C;
      }
      goto L_089A1B1C;
    }
L_089A1B1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A1B40;
      }
      goto L_089A1B2C;
    }
L_089A1B2C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A1B3C;
      }
      goto L_089A1B34;
    }
L_089A1B34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B6C;
      }
      goto L_089A1B3C;
    }
L_089A1B3C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A1B40;
L_089A1B40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089A1B44;
L_089A1B44:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1B6C:
    aot_gpr[31] = (0x089A1B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1B74u) goto L_089A1B74;
    return;
L_089A1B74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089A1B44;
      }
      goto L_089A1B7C;
    }
L_089A1B7C:
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[2] >> 3u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A1B94u);
    aot_gpr[23] = (aot_gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A1B94u) goto L_089A1B94;
    return;
L_089A1B94:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A1BB0;
      }
      goto L_089A1BA0;
    }
L_089A1BA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A1BE8;
      }
      goto L_089A1BB0;
    }
L_089A1BB0:
    aot_gpr[31] = (0x089A1BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1BB8u) goto L_089A1BB8;
    return;
L_089A1BB8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1BBC;
L_089A1BBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1BE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1BF8u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1BF8u) goto L_089A1BF8;
    return;
L_089A1BF8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    if (aot_gpr[18] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A1C14u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A1C14u) goto L_089A1C14;
    return;
L_089A1C14:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A1D10;
      }
      goto L_089A1C1C;
    }
L_089A1C1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
        goto L_089A1CA0;
    }
    goto L_089A1C2C;
L_089A1C2C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[23] + aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A1C9C;
      }
      goto L_089A1C68;
    }
L_089A1C68:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089A1C9C;
L_089A1C9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
    goto L_089A1CA0;
L_089A1CA0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(52));
    if (aot_gpr[21] == 0u) aot_gpr[5] = (aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (0u | 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1CC0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1CC0u) goto L_089A1CC0;
    return;
L_089A1CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x089A1D08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1D08u) goto L_089A1D08;
    return;
L_089A1D08:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A1BBC;
L_089A1D10:
    aot_gpr[5] = (aot_gpr[18] & 65535u);
    aot_gpr[31] = (0x089A1D1Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A1D1Cu) goto L_089A1D1C;
    return;
L_089A1D1C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A1C1C;
L_089A1D24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[2] = (aot_gpr[9] + 0u);
    aot_gpr[3] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_089A1D5C;
      }
      goto L_089A1D48;
    }
L_089A1D48:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089A1D5C;
L_089A1D5C:
    aot_gpr[31] = (0x089A1D64u);
    // nop
    goto L_089A1AD4;
L_089A1D64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1D70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089A1DB8;
      }
      goto L_089A1DA8;
    }
L_089A1DA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1DE0;
      }
      goto L_089A1DB8;
    }
L_089A1DB8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089A1DC0;
L_089A1DC0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1DE0:
    aot_gpr[31] = (0x089A1DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1DE8u) goto L_089A1DE8;
    return;
L_089A1DE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089A1DC0;
      }
      goto L_089A1DF0;
    }
L_089A1DF0:
    aot_gpr[31] = (0x089A1DF8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A1DF8u) goto L_089A1DF8;
    return;
L_089A1DF8:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A1E14;
      }
      goto L_089A1E04;
    }
L_089A1E04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A1E44;
      }
      goto L_089A1E14;
    }
L_089A1E14:
    aot_gpr[31] = (0x089A1E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1E1Cu) goto L_089A1E1C;
    return;
L_089A1E1C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089A1E20;
L_089A1E20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1E44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1E54u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1E54u) goto L_089A1E54;
    return;
L_089A1E54:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65534u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A1E74;
      }
      goto L_089A1E64;
    }
L_089A1E64:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[3] = (aot_gpr[19] ^ 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    if (aot_gpr[3] != 0u) aot_gpr[5] = (aot_gpr[2]);
    goto L_089A1E74;
L_089A1E74:
    if (aot_gpr[20] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
        goto L_089A1E90;
    }
    goto L_089A1E7C;
L_089A1E7C:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    goto L_089A1E90;
L_089A1E90:
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1EA0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1EA0u) goto L_089A1EA0;
    return;
L_089A1EA0:
    aot_gpr[31] = (0x089A1EA8u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1EA8u) goto L_089A1EA8;
    return;
L_089A1EA8:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089A1E20;
L_089A1EB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_089A1EE8;
      }
      goto L_089A1ED4;
    }
L_089A1ED4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089A1EE8;
L_089A1EE8:
    aot_gpr[31] = (0x089A1EF0u);
    // nop
    goto L_089A1D70;
L_089A1EF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1EFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089A1F1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1F1Cu) goto L_089A1F1C;
    return;
L_089A1F1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A1F3C;
      }
      goto L_089A1F24;
    }
L_089A1F24:
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
L_089A1F3C:
    aot_gpr[31] = (0x089A1F44u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A1F44u) goto L_089A1F44;
    return;
L_089A1F44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A1F68;
      }
      goto L_089A1F4C;
    }
L_089A1F4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A1F68;
      }
      goto L_089A1F5C;
    }
L_089A1F5C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1F64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1F64u) goto L_089A1F64;
    return;
L_089A1F64:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A1F68;
L_089A1F68:
    aot_gpr[31] = (0x089A1F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1F70u) goto L_089A1F70;
    return;
L_089A1F70:
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089A1F8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x089A1FA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A1FA0u) goto L_089A1FA0;
    return;
L_089A1FA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A1FC0;
      }
      goto L_089A1FA8;
    }
L_089A1FA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16092)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089A1FD4;
      }
      goto L_089A1FB4;
    }
L_089A1FB4:
    aot_gpr[31] = (0x089A1FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A1FBCu) goto L_089A1FBC;
    return;
L_089A1FBC:
    aot_gpr[2] = (0u + 0u);
    goto L_089A1FC0;
L_089A1FC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1FD4:
    aot_gpr[31] = (0x089A1FDCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A1FDCu) goto L_089A1FDC;
    return;
L_089A1FDC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 1u, 0x089A2000u>(ctx, &aot_mem); return;
      }
      goto L_089A1FE4;
    }
L_089A1FE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089A1FF8;
      }
      goto L_089A1FF0;
    }
L_089A1FF0:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A1FF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1FF8u) goto L_089A1FF8;
    return;
L_089A1FF8:
    aot_gpr[31] = (0x089A2000u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 154u, 0x0899FC98u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0413(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0413_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_413(Runtime &runtime) {
    runtime.register_generated_unit(413u, 0x089A1000u, 4096u, &recomp_unit_0413, &recomp_unit_0413_entry);
    runtime.register_function(0x089A1004u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1010u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A101Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1024u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1028u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A103Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1044u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A104Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1068u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1070u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1084u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A108Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A10A0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A10A8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A10C8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A10CCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A10D4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A10ECu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1108u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1110u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1124u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A112Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1138u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1144u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1148u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1150u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1168u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1184u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1190u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1198u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A119Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11A4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11A8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11BCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11C4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11DCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11F4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A11FCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A121Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1224u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A123Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1244u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A124Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1254u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1260u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1268u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A126Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1274u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1290u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12A4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12ACu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12C8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12D0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12E4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12ECu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A12F4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1304u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A130Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1310u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1324u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A133Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1344u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1378u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1380u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A13A0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A13A8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A13C4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A13D0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A13D4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A13DCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1400u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1430u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1438u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1440u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A144Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1454u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1470u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1478u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1480u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1498u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A14A4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A14B4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A14BCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A14C0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A14E0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A14F8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1500u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A153Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1544u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A154Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1558u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1560u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1580u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1590u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1598u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A159Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15A4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15A8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15C4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15CCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15D4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15ECu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A15F4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1614u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A161Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A164Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1654u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A165Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1668u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1670u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A168Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1694u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A169Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A16B4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A16C0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A16D0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A16D8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A16DCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A16FCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1714u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A171Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1758u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1760u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1768u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1774u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A177Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A179Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17ACu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17B4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17B8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17C0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17C4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17E0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17E8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A17F0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1808u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1810u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1830u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1838u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1880u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1890u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1898u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18A0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18A4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18A8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18D0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18D8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18E0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A18F8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1904u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1914u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A191Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1920u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A194Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A195Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1978u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1980u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1990u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A19CCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A00u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A04u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A24u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A6Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A74u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A80u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1A88u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1AACu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1AC0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1AC8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1AD4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B1Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B2Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B34u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B3Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B40u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B44u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B6Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B74u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B7Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1B94u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1BA0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1BB0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1BB8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1BBCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1BE8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1BF8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1C14u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1C1Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1C2Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1C68u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1C9Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1CA0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1CC0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D08u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D10u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D1Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D24u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D48u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D5Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D64u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1D70u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DA8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DB8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DC0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DE0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DE8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DF0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1DF8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E04u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E14u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E1Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E20u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E44u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E54u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E64u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E74u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E7Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1E90u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1EA0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1EA8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1EB0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1ED4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1EE8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1EF0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1EFCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F1Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F24u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F3Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F44u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F4Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F5Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F64u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F68u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F70u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1F8Cu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FA0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FA8u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FB4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FBCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FC0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FD4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FDCu, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FE4u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FF0u, &recomp_unit_0413, "recomp_unit_0413");
    runtime.register_function(0x089A1FF8u, &recomp_unit_0413, "recomp_unit_0413");
}
} // namespace psprecomp
