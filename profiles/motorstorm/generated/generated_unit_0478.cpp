#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0478[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 6, 0, 0, 0, 7, 0,
    0, 0, 0, 8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 15, 0, 16, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 0, 0, 32, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 76, 0,
    77, 0, 78, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0,
    96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 118, 0, 119, 0, 0, 120, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 163, 0, 0, 164,
    0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 173, 0, 174, 175, 176, 0, 177, 0, 0, 0, 178, 0, 0, 179, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0,
    185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0,
    0, 195, 0, 196, 0, 0, 197, 198, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 216,
    0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 223, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 226, 0, 0, 0, 0, 0, 227, 228, 0, 0, 229, 0, 230, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0,
    0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 239, 240, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0,
    247, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254,
};
void recomp_unit_0478_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E2000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0478[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E2000;
    case 2u: goto L_089E2008;
    case 3u: goto L_089E2050;
    case 4u: goto L_089E2058;
    case 5u: goto L_089E2064;
    case 6u: goto L_089E2068;
    case 7u: goto L_089E2078;
    case 8u: goto L_089E208C;
    case 9u: goto L_089E2090;
    case 10u: goto L_089E2094;
    case 11u: goto L_089E20C0;
    case 12u: goto L_089E20D8;
    case 13u: goto L_089E20E8;
    case 14u: goto L_089E20F8;
    case 15u: goto L_089E2110;
    case 16u: goto L_089E2118;
    case 17u: goto L_089E211C;
    case 18u: goto L_089E2120;
    case 19u: goto L_089E214C;
    case 20u: goto L_089E215C;
    case 21u: goto L_089E2164;
    case 22u: goto L_089E2178;
    case 23u: goto L_089E2190;
    case 24u: goto L_089E21A4;
    case 25u: goto L_089E21B4;
    case 26u: goto L_089E21C0;
    case 27u: goto L_089E21D0;
    case 28u: goto L_089E21E0;
    case 29u: goto L_089E21E8;
    case 30u: goto L_089E21F8;
    case 31u: goto L_089E2208;
    case 32u: goto L_089E2218;
    case 33u: goto L_089E221C;
    case 34u: goto L_089E2224;
    case 35u: goto L_089E2234;
    case 36u: goto L_089E2244;
    case 37u: goto L_089E224C;
    case 38u: goto L_089E2260;
    case 39u: goto L_089E2264;
    case 40u: goto L_089E226C;
    case 41u: goto L_089E227C;
    case 42u: goto L_089E228C;
    case 43u: goto L_089E2294;
    case 44u: goto L_089E22A8;
    case 45u: goto L_089E22B8;
    case 46u: goto L_089E22C4;
    case 47u: goto L_089E22D0;
    case 48u: goto L_089E22E8;
    case 49u: goto L_089E2324;
    case 50u: goto L_089E2328;
    case 51u: goto L_089E2334;
    case 52u: goto L_089E233C;
    case 53u: goto L_089E2344;
    case 54u: goto L_089E2364;
    case 55u: goto L_089E236C;
    case 56u: goto L_089E237C;
    case 57u: goto L_089E23A8;
    case 58u: goto L_089E23C4;
    case 59u: goto L_089E23D4;
    case 60u: goto L_089E23DC;
    case 61u: goto L_089E23EC;
    case 62u: goto L_089E23F4;
    case 63u: goto L_089E2404;
    case 64u: goto L_089E2420;
    case 65u: goto L_089E2430;
    case 66u: goto L_089E2438;
    case 67u: goto L_089E2448;
    case 68u: goto L_089E2458;
    case 69u: goto L_089E2460;
    case 70u: goto L_089E2474;
    case 71u: goto L_089E2484;
    case 72u: goto L_089E2494;
    case 73u: goto L_089E24AC;
    case 74u: goto L_089E24E8;
    case 75u: goto L_089E24EC;
    case 76u: goto L_089E24F8;
    case 77u: goto L_089E2500;
    case 78u: goto L_089E2508;
    case 79u: goto L_089E250C;
    case 80u: goto L_089E2518;
    case 81u: goto L_089E2524;
    case 82u: goto L_089E2538;
    case 83u: goto L_089E2548;
    case 84u: goto L_089E2554;
    case 85u: goto L_089E256C;
    case 86u: goto L_089E2574;
    case 87u: goto L_089E2584;
    case 88u: goto L_089E2594;
    case 89u: goto L_089E259C;
    case 90u: goto L_089E25AC;
    case 91u: goto L_089E25BC;
    case 92u: goto L_089E25C4;
    case 93u: goto L_089E25D8;
    case 94u: goto L_089E25E8;
    case 95u: goto L_089E25F4;
    case 96u: goto L_089E2600;
    case 97u: goto L_089E2614;
    case 98u: goto L_089E262C;
    case 99u: goto L_089E2678;
    case 100u: goto L_089E267C;
    case 101u: goto L_089E268C;
    case 102u: goto L_089E26A8;
    case 103u: goto L_089E26B0;
    case 104u: goto L_089E26B8;
    case 105u: goto L_089E26C0;
    case 106u: goto L_089E26C8;
    case 107u: goto L_089E26D8;
    case 108u: goto L_089E26E0;
    case 109u: goto L_089E26E8;
    case 110u: goto L_089E26F8;
    case 111u: goto L_089E2714;
    case 112u: goto L_089E2724;
    case 113u: goto L_089E2730;
    case 114u: goto L_089E273C;
    case 115u: goto L_089E2748;
    case 116u: goto L_089E2754;
    case 117u: goto L_089E275C;
    case 118u: goto L_089E2760;
    case 119u: goto L_089E2768;
    case 120u: goto L_089E2774;
    case 121u: goto L_089E2780;
    case 122u: goto L_089E279C;
    case 123u: goto L_089E27AC;
    case 124u: goto L_089E27B8;
    case 125u: goto L_089E27BC;
    case 126u: goto L_089E27CC;
    case 127u: goto L_089E27D4;
    case 128u: goto L_089E27DC;
    case 129u: goto L_089E2824;
    case 130u: goto L_089E2830;
    case 131u: goto L_089E2840;
    case 132u: goto L_089E2880;
    case 133u: goto L_089E289C;
    case 134u: goto L_089E28A4;
    case 135u: goto L_089E28A8;
    case 136u: goto L_089E28B8;
    case 137u: goto L_089E28C4;
    case 138u: goto L_089E28D4;
    case 139u: goto L_089E28E4;
    case 140u: goto L_089E28EC;
    case 141u: goto L_089E2900;
    case 142u: goto L_089E2910;
    case 143u: goto L_089E291C;
    case 144u: goto L_089E2928;
    case 145u: goto L_089E2940;
    case 146u: goto L_089E298C;
    case 147u: goto L_089E2990;
    case 148u: goto L_089E299C;
    case 149u: goto L_089E29B8;
    case 150u: goto L_089E29C4;
    case 151u: goto L_089E29E4;
    case 152u: goto L_089E29EC;
    case 153u: goto L_089E29FC;
    case 154u: goto L_089E2A18;
    case 155u: goto L_089E2A28;
    case 156u: goto L_089E2A30;
    case 157u: goto L_089E2A44;
    case 158u: goto L_089E2A4C;
    case 159u: goto L_089E2A54;
    case 160u: goto L_089E2A5C;
    case 161u: goto L_089E2A64;
    case 162u: goto L_089E2A6C;
    case 163u: goto L_089E2A70;
    case 164u: goto L_089E2A7C;
    case 165u: goto L_089E2A84;
    case 166u: goto L_089E2A8C;
    case 167u: goto L_089E2A98;
    case 168u: goto L_089E2AA0;
    case 169u: goto L_089E2AA8;
    case 170u: goto L_089E2AAC;
    case 171u: goto L_089E2AB4;
    case 172u: goto L_089E2B04;
    case 173u: goto L_089E2B0C;
    case 174u: goto L_089E2B14;
    case 175u: goto L_089E2B18;
    case 176u: goto L_089E2B1C;
    case 177u: goto L_089E2B24;
    case 178u: goto L_089E2B34;
    case 179u: goto L_089E2B40;
    case 180u: goto L_089E2B44;
    case 181u: goto L_089E2B4C;
    case 182u: goto L_089E2B5C;
    case 183u: goto L_089E2B70;
    case 184u: goto L_089E2B78;
    case 185u: goto L_089E2B80;
    case 186u: goto L_089E2B98;
    case 187u: goto L_089E2BA0;
    case 188u: goto L_089E2BB0;
    case 189u: goto L_089E2BB8;
    case 190u: goto L_089E2BC0;
    case 191u: goto L_089E2BC8;
    case 192u: goto L_089E2BE8;
    case 193u: goto L_089E2BF0;
    case 194u: goto L_089E2BF8;
    case 195u: goto L_089E2C04;
    case 196u: goto L_089E2C0C;
    case 197u: goto L_089E2C18;
    case 198u: goto L_089E2C1C;
    case 199u: goto L_089E2C20;
    case 200u: goto L_089E2C2C;
    case 201u: goto L_089E2C34;
    case 202u: goto L_089E2C40;
    case 203u: goto L_089E2C48;
    case 204u: goto L_089E2C58;
    case 205u: goto L_089E2C60;
    case 206u: goto L_089E2C80;
    case 207u: goto L_089E2C8C;
    case 208u: goto L_089E2C9C;
    case 209u: goto L_089E2CAC;
    case 210u: goto L_089E2CB4;
    case 211u: goto L_089E2CC4;
    case 212u: goto L_089E2CCC;
    case 213u: goto L_089E2CDC;
    case 214u: goto L_089E2CE8;
    case 215u: goto L_089E2CF4;
    case 216u: goto L_089E2CFC;
    case 217u: goto L_089E2D08;
    case 218u: goto L_089E2D10;
    case 219u: goto L_089E2D18;
    case 220u: goto L_089E2D24;
    case 221u: goto L_089E2D38;
    case 222u: goto L_089E2DD8;
    case 223u: goto L_089E2DDC;
    case 224u: goto L_089E2DF4;
    case 225u: goto L_089E2E98;
    case 226u: goto L_089E2E9C;
    case 227u: goto L_089E2EB4;
    case 228u: goto L_089E2EB8;
    case 229u: goto L_089E2EC4;
    case 230u: goto L_089E2ECC;
    case 231u: goto L_089E2ED0;
    case 232u: goto L_089E2EE0;
    case 233u: goto L_089E2EE8;
    case 234u: goto L_089E2EF8;
    case 235u: goto L_089E2F04;
    case 236u: goto L_089E2F10;
    case 237u: goto L_089E2F1C;
    case 238u: goto L_089E2F28;
    case 239u: goto L_089E2F2C;
    case 240u: goto L_089E2F30;
    case 241u: goto L_089E2F38;
    case 242u: goto L_089E2F4C;
    case 243u: goto L_089E2F54;
    case 244u: goto L_089E2F5C;
    case 245u: goto L_089E2F64;
    case 246u: goto L_089E2F70;
    case 247u: goto L_089E2F80;
    case 248u: goto L_089E2F84;
    case 249u: goto L_089E2F94;
    case 250u: goto L_089E2FAC;
    case 251u: goto L_089E2FBC;
    case 252u: goto L_089E2FE0;
    case 253u: goto L_089E2FEC;
    case 254u: goto L_089E2FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E2000:
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[3]));
    (void)rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 182u, 0x089E1F8Cu>(ctx, &aot_mem); return;
L_089E2008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(468), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(472), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(464), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(456), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(480), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(476), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[16]);
    aot_gpr[31] = (0x089E2050u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089E2050u) goto L_089E2050;
    return;
L_089E2050:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E211C;
      }
      goto L_089E2058;
    }
L_089E2058:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089E20D8;
      }
      goto L_089E2064;
    }
L_089E2064:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089E2068;
L_089E2068:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E20C0;
      }
      goto L_089E2078;
    }
L_089E2078:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E208Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E208Cu) goto L_089E208C;
    return;
L_089E208C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089E2090;
L_089E2090:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089E2094;
L_089E2094:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E20C0:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12232));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E20D8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E20E8u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 123u, 0x089DA7A8u>(ctx, &aot_mem) && ctx.pc == 0x089E20E8u) goto L_089E20E8;
    return;
L_089E20E8:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E214C;
      }
      goto L_089E20F8;
    }
L_089E20F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[3] = (aot_gpr[2] ^ 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089E2110u);
    if (aot_gpr[3] != 0u) aot_gpr[16] = (aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2110u) goto L_089E2110;
    return;
L_089E2110:
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089E2068;
    }
    goto L_089E2118;
L_089E2118:
    aot_gpr[17] = (0u + 0u);
    goto L_089E211C;
L_089E211C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089E2120;
L_089E2120:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E214C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E215Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E215Cu) goto L_089E215C;
    return;
L_089E215C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089E2090;
L_089E2164:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E2178u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2178u) goto L_089E2178;
    return;
L_089E2178:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[21]);
    aot_gpr[31] = (0x089E2190u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E2190u) goto L_089E2190;
    return;
L_089E2190:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2118;
      }
      goto L_089E21A4;
    }
L_089E21A4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E21B4u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E21B4u) goto L_089E21B4;
    return;
L_089E21B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E2430;
      }
      goto L_089E21C0;
    }
L_089E21C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[22] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E21E8;
      }
      goto L_089E21D0;
    }
L_089E21D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(372));
    aot_gpr[31] = (0x089E21E0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E21E0u) goto L_089E21E0;
    return;
L_089E21E0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_089E21E8;
L_089E21E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x089E21F8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E21F8u) goto L_089E21F8;
    return;
L_089E21F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[2] = (aot_gpr[4] & 512u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E2BF8;
      }
      goto L_089E2208;
    }
L_089E2208:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[2] = (2217u << 16u);
        goto L_089E2A8C;
    }
    goto L_089E2218;
L_089E2218:
    aot_gpr[17] = (0u + 0u);
    goto L_089E221C;
L_089E221C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E2090;
L_089E2224:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089E2218;
      }
      goto L_089E2234;
    }
L_089E2234:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E2244;
    }
L_089E2244:
    aot_gpr[31] = (0x089E224Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E224Cu) goto L_089E224C;
    return;
L_089E224C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2B24;
      }
      goto L_089E2260;
    }
L_089E2260:
    aot_gpr[17] = (0u + 0u);
    goto L_089E2264;
L_089E2264:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089E2090;
L_089E226C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089E2218;
      }
      goto L_089E227C;
    }
L_089E227C:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E228C;
    }
L_089E228C:
    aot_gpr[31] = (0x089E2294u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E2294u) goto L_089E2294;
    return;
L_089E2294:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E22A8;
    }
L_089E22A8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E22B8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E22B8u) goto L_089E22B8;
    return;
L_089E22B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2B44;
      }
      goto L_089E22C4;
    }
L_089E22C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (aot_gpr[3] != aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_089E2090;
    }
    goto L_089E22D0;
L_089E22D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(184));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 39u, 0x089E3330u>(ctx, &aot_mem); return;
      }
      goto L_089E22E8;
    }
L_089E22E8:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E22E8;
      }
      goto L_089E2324;
    }
L_089E2324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E2328;
L_089E2328:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E2334u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E2334u) goto L_089E2334;
    return;
L_089E2334:
    aot_gpr[31] = (0x089E233Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E233Cu) goto L_089E233C;
    return;
L_089E233C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u + 0u);
        goto L_089E2B18;
    }
    goto L_089E2344;
L_089E2344:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E2364u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2364u) goto L_089E2364;
    return;
L_089E2364:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u + 0u);
        goto L_089E2B18;
    }
    goto L_089E236C;
L_089E236C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(248));
    goto L_089E237C;
L_089E237C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E237C;
      }
      goto L_089E23A8;
    }
L_089E23A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E23C4u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E23C4u) goto L_089E23C4;
    return;
L_089E23C4:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E23D4u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E23D4u) goto L_089E23D4;
    return;
L_089E23D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E23DC;
    }
L_089E23DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089E23ECu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E23ECu) goto L_089E23EC;
    return;
L_089E23EC:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E2090;
L_089E23F4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E2404u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E2404u) goto L_089E2404;
    return;
L_089E2404:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = ((aot_gpr[2] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    aot_gpr[31] = (0x089E2420u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E2420u) goto L_089E2420;
    return;
L_089E2420:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
        goto L_089E2A5C;
    }
    goto L_089E2430;
L_089E2430:
    aot_gpr[17] = (0u | 54005u);
    goto L_089E2090;
L_089E2438:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089E2218;
      }
      goto L_089E2448;
    }
L_089E2448:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E2458;
    }
L_089E2458:
    aot_gpr[31] = (0x089E2460u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E2460u) goto L_089E2460;
    return;
L_089E2460:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E2474;
    }
L_089E2474:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E2484u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E2484u) goto L_089E2484;
    return;
L_089E2484:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2B44;
      }
      goto L_089E2494;
    }
L_089E2494:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(184));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 41u, 0x089E3364u>(ctx, &aot_mem); return;
      }
      goto L_089E24AC;
    }
L_089E24AC:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E24AC;
      }
      goto L_089E24E8;
    }
L_089E24E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089E24EC;
L_089E24EC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E24F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E24F8u) goto L_089E24F8;
    return;
L_089E24F8:
    aot_gpr[31] = (0x089E2500u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E2500u) goto L_089E2500;
    return;
L_089E2500:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 43u, 0x089E3398u>(ctx, &aot_mem); return;
      }
      goto L_089E2508;
    }
L_089E2508:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E250C;
L_089E250C:
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E2090;
L_089E2518:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E2524u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E2524u) goto L_089E2524;
    return;
L_089E2524:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2CCC;
      }
      goto L_089E2538;
    }
L_089E2538:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E2548u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E2548u) goto L_089E2548;
    return;
L_089E2548:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2554;
    }
L_089E2554:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089E256Cu);
    aot_gpr[9] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 89u, 0x089E076Cu>(ctx, &aot_mem) && ctx.pc == 0x089E256Cu) goto L_089E256C;
    return;
L_089E256C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2574;
    }
L_089E2574:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E2CDC;
      }
      goto L_089E2584;
    }
L_089E2584:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2594u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E2594u) goto L_089E2594;
    return;
L_089E2594:
    aot_gpr[17] = (0u | 54023u);
    goto L_089E2090;
L_089E259C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E221C;
      }
      goto L_089E25AC;
    }
L_089E25AC:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E2264;
      }
      goto L_089E25BC;
    }
L_089E25BC:
    aot_gpr[31] = (0x089E25C4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E25C4u) goto L_089E25C4;
    return;
L_089E25C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E25D8;
    }
L_089E25D8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E25E8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E25E8u) goto L_089E25E8;
    return;
L_089E25E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2B44;
      }
      goto L_089E25F4;
    }
L_089E25F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (aot_gpr[3] != aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_089E2090;
    }
    goto L_089E2600;
L_089E2600:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), 0u);
    aot_gpr[31] = (0x089E2614u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2614u) goto L_089E2614;
    return;
L_089E2614:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(268));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 49u, 0x089E3400u>(ctx, &aot_mem); return;
      }
      goto L_089E262C;
    }
L_089E262C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E262C;
      }
      goto L_089E2678;
    }
L_089E2678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E267C;
L_089E267C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(332));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(248));
    aot_gpr[31] = (0x089E268Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E268Cu) goto L_089E268C;
    return;
L_089E268C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(212)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E26A8u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E26A8u) goto L_089E26A8;
    return;
L_089E26A8:
    aot_gpr[31] = (0x089E26B0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E26B0u) goto L_089E26B0;
    return;
L_089E26B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E26B8;
    }
L_089E26B8:
    aot_gpr[31] = (0x089E26C0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 17u, 0x089E0120u>(ctx, &aot_mem) && ctx.pc == 0x089E26C0u) goto L_089E26C0;
    return;
L_089E26C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E26C8;
    }
L_089E26C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E2B1C;
      }
      goto L_089E26D8;
    }
L_089E26D8:
    aot_gpr[31] = (0x089E26E0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 181u, 0x089E1F50u>(ctx, &aot_mem) && ctx.pc == 0x089E26E0u) goto L_089E26E0;
    return;
L_089E26E0:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089E2090;
L_089E26E8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E26F8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E26F8u) goto L_089E26F8;
    return;
L_089E26F8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = ((aot_gpr[2] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    aot_gpr[31] = (0x089E2714u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E2714u) goto L_089E2714;
    return;
L_089E2714:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2724;
    }
L_089E2724:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E2CB4;
      }
      goto L_089E2730;
    }
L_089E2730:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(128), 0u);
        goto L_089E273C;
    }
    goto L_089E273C;
L_089E273C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(128)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), 0u);
        goto L_089E2C60;
    }
    goto L_089E2748;
L_089E2748:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2754u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 27u, 0x089E01E8u>(ctx, &aot_mem) && ctx.pc == 0x089E2754u) goto L_089E2754;
    return;
L_089E2754:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E275C;
    }
L_089E275C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    goto L_089E2760;
L_089E2760:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E2A6C;
L_089E2768:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089E27B8;
      }
      goto L_089E2774;
    }
L_089E2774:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E2780u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E2780u) goto L_089E2780;
    return;
L_089E2780:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[2] = ((aot_gpr[2] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E279Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E279Cu) goto L_089E279C;
    return;
L_089E279C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E27AC;
    }
L_089E27AC:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E2AB4;
      }
      goto L_089E27B8;
    }
L_089E27B8:
    aot_gpr[16] = (0u + 0u);
    goto L_089E27BC;
L_089E27BC:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E27CCu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E27CCu) goto L_089E27CC;
    return;
L_089E27CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E27D4;
    }
L_089E27D4:
    aot_gpr[31] = (0x089E27DCu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E27DCu) goto L_089E27DC;
    return;
L_089E27DC:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(29));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20480));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[3]);
    aot_gpr[31] = (0x089E2824u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E2824u) goto L_089E2824;
    return;
L_089E2824:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E2830u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E2830u) goto L_089E2830;
    return;
L_089E2830:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089E2880;
      }
      goto L_089E2840;
    }
L_089E2840:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(340), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(344), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089E2880;
L_089E2880:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E289Cu);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E289Cu) goto L_089E289C;
    return;
L_089E289C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2118;
      }
      goto L_089E28A4;
    }
L_089E28A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(118)));
    goto L_089E28A8;
L_089E28A8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E28B8;
    }
L_089E28B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E2090;
L_089E28C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089E2218;
      }
      goto L_089E28D4;
    }
L_089E28D4:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089E2AA8;
      }
      goto L_089E28E4;
    }
L_089E28E4:
    aot_gpr[31] = (0x089E28ECu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E28ECu) goto L_089E28EC;
    return;
L_089E28EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2260;
      }
      goto L_089E2900;
    }
L_089E2900:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E2910u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E2910u) goto L_089E2910;
    return;
L_089E2910:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          goto L_089E2B44;
      }
      goto L_089E291C;
    }
L_089E291C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (aot_gpr[3] != aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_089E2090;
    }
    goto L_089E2928;
L_089E2928:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(184));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 51u, 0x089E3434u>(ctx, &aot_mem); return;
      }
      goto L_089E2940;
    }
L_089E2940:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E2940;
      }
      goto L_089E298C;
    }
L_089E298C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E2990;
L_089E2990:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E299Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E299Cu) goto L_089E299C;
    return;
L_089E299C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E29B8u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E29B8u) goto L_089E29B8;
    return;
L_089E29B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 53u, 0x089E3468u>(ctx, &aot_mem); return;
      }
      goto L_089E29C4;
    }
L_089E29C4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E29E4u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E29E4u) goto L_089E29E4;
    return;
L_089E29E4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u + 0u);
        goto L_089E2B18;
    }
    goto L_089E29EC;
L_089E29EC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E29FCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 28u, 0x08990324u>(ctx, &aot_mem) && ctx.pc == 0x089E29FCu) goto L_089E29FC;
    return;
L_089E29FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E2A18u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2A18u) goto L_089E2A18;
    return;
L_089E2A18:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E2A28u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E2A28u) goto L_089E2A28;
    return;
L_089E2A28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2A30;
    }
L_089E2A30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2A44u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 172u, 0x089E1E94u>(ctx, &aot_mem) && ctx.pc == 0x089E2A44u) goto L_089E2A44;
    return;
L_089E2A44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2A4C;
    }
L_089E2A4C:
    aot_gpr[31] = (0x089E2A54u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2A54u) goto L_089E2A54;
    return;
L_089E2A54:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E2090;
L_089E2A5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_089E2A6C;
      }
      goto L_089E2A64;
    }
L_089E2A64:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E211C;
      }
      goto L_089E2A6C;
    }
L_089E2A6C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089E2A70;
L_089E2A70:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E2A7Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E2A7Cu) goto L_089E2A7C;
    return;
L_089E2A7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2A84;
    }
L_089E2A84:
    // nop
    goto L_089E2A4C;
L_089E2A8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2788)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_089E2AA8;
      }
      goto L_089E2A98;
    }
L_089E2A98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] & 1025u);
      if (branch_taken) {
          goto L_089E2AA8;
      }
      goto L_089E2AA0;
    }
L_089E2AA0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_089E2B4C;
    }
    goto L_089E2AA8;
L_089E2AA8:
    aot_gpr[17] = (0u + 0u);
    goto L_089E2AAC;
L_089E2AAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089E2090;
L_089E2AB4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    aot_gpr[31] = (0x089E2B04u);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E2B04u) goto L_089E2B04;
    return;
L_089E2B04:
    aot_gpr[31] = (0x089E2B0Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E2B0Cu) goto L_089E2B0C;
    return;
L_089E2B0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E2BC8;
      }
      goto L_089E2B14;
    }
L_089E2B14:
    aot_gpr[17] = (0u + 0u);
    goto L_089E2B18;
L_089E2B18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E2B1C;
L_089E2B1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E2090;
L_089E2B24:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E2B34u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E2B34u) goto L_089E2B34;
    return;
L_089E2B34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 6u, 0x089E303Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2B40;
    }
L_089E2B40:
    aot_gpr[17] = (0u | 54005u);
    goto L_089E2B44;
L_089E2B44:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089E2090;
L_089E2B4C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(364));
    aot_gpr[21] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E2B5Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E2B5Cu) goto L_089E2B5C;
    return;
L_089E2B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E2AAC;
      }
      goto L_089E2B70;
    }
L_089E2B70:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_089E2090;
    }
    goto L_089E2B78;
L_089E2B78:
    aot_gpr[31] = (0x089E2B80u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2B80u) goto L_089E2B80;
    return;
L_089E2B80:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(440), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[31] = (0x089E2B98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 255u, 0x089DFFECu>(ctx, &aot_mem) && ctx.pc == 0x089E2B98u) goto L_089E2B98;
    return;
L_089E2B98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2BA0;
    }
L_089E2BA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    if (aot_gpr[3] != aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_089E2090;
    }
    goto L_089E2BB0;
L_089E2BB0:
    aot_gpr[31] = (0x089E2BB8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 62u, 0x089E1584u>(ctx, &aot_mem) && ctx.pc == 0x089E2BB8u) goto L_089E2BB8;
    return;
L_089E2BB8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2BC0;
    }
L_089E2BC0:
    aot_gpr[17] = (0u + 0u);
    goto L_089E211C;
L_089E2BC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E2BE8u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2BE8u) goto L_089E2BE8;
    return;
L_089E2BE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E27BC;
      }
      goto L_089E2BF0;
    }
L_089E2BF0:
    aot_gpr[16] = (0u + 0u);
    goto L_089E27BC;
L_089E2BF8:
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000200u) | ((0u & 0x00000001u) << 9u));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E2B18;
      }
      goto L_089E2C04;
    }
L_089E2C04:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E211C;
      }
      goto L_089E2C0C;
    }
L_089E2C0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E2120;
      }
      goto L_089E2C18;
    }
L_089E2C18:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(212), 0u);
    goto L_089E2C1C;
L_089E2C1C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089E2C20;
L_089E2C20:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E2C2Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E2C2Cu) goto L_089E2C2C;
    return;
L_089E2C2C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2C34;
    }
L_089E2C34:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2C40u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 27u, 0x089E01E8u>(ctx, &aot_mem) && ctx.pc == 0x089E2C40u) goto L_089E2C40;
    return;
L_089E2C40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2C48;
    }
L_089E2C48:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089E2C58u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2C58u) goto L_089E2C58;
    return;
L_089E2C58:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E2090;
L_089E2C60:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(204), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E2C80u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2C80u) goto L_089E2C80;
    return;
L_089E2C80:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2C8Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 37u, 0x089E02F8u>(ctx, &aot_mem) && ctx.pc == 0x089E2C8Cu) goto L_089E2C8C;
    return;
L_089E2C8C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089E2A6C;
      }
      goto L_089E2C9C;
    }
L_089E2C9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2CACu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E2CACu) goto L_089E2CAC;
    return;
L_089E2CAC:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089E2094;
L_089E2CB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089E2CC4u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089E2CC4u) goto L_089E2CC4;
    return;
L_089E2CC4:
    aot_gpr[17] = (0u + 0u);
    goto L_089E2090;
L_089E2CCC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E2090;
L_089E2CDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(110)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2CF4;
      }
      goto L_089E2CE8;
    }
L_089E2CE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_089E2EB8;
      }
      goto L_089E2CF4;
    }
L_089E2CF4:
    aot_gpr[31] = (0x089E2CFCu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2CFCu) goto L_089E2CFC;
    return;
L_089E2CFC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (0u | 65535u);
      if (branch_taken) {
          goto L_089E2D18;
      }
      goto L_089E2D08;
    }
L_089E2D08:
    aot_gpr[31] = (0x089E2D10u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E2D10u) goto L_089E2D10;
    return;
L_089E2D10:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[2] & 65535u);
    goto L_089E2D18;
L_089E2D18:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x089E2D24u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089E2D24u) goto L_089E2D24;
    return;
L_089E2D24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[4];
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089E2EB4;
      }
      goto L_089E2D38;
    }
L_089E2D38:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(11)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(9)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(13)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(17)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089E2DDC;
      }
      goto L_089E2DD8;
    }
L_089E2DD8:
    rt.unsupported(0x089E2DD8u, 0x000001CDu, "special? not lowered yet"); return;
L_089E2DDC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089E2DF4u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 165u, 0x089DFA10u>(ctx, &aot_mem) && ctx.pc == 0x089E2DF4u) goto L_089E2DF4;
    return;
L_089E2DF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(11)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(9)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(13)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[22]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(17)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089E2E9C;
      }
      goto L_089E2E98;
    }
L_089E2E98:
    rt.unsupported(0x089E2E98u, 0x000001CDu, "special? not lowered yet"); return;
L_089E2E9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089E2EB4u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 163u, 0x089DF9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E2EB4u) goto L_089E2EB4;
    return;
L_089E2EB4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(38)));
    goto L_089E2EB8;
L_089E2EB8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E2F70;
      }
      goto L_089E2EC4;
    }
L_089E2EC4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089E2F84;
      }
      goto L_089E2ECC;
    }
L_089E2ECC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089E2ED0;
L_089E2ED0:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-11));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 3u, 0x089E3014u>(ctx, &aot_mem); return;
      }
      goto L_089E2EE0;
    }
L_089E2EE0:
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[21] + 0u);
        goto L_089E2A70;
    }
    goto L_089E2EE8;
L_089E2EE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(39)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[23] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E2F28;
      }
      goto L_089E2EF8;
    }
L_089E2EF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), 0u);
        goto L_089E2F2C;
    }
    goto L_089E2F04;
L_089E2F04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_089E2F28;
      }
      goto L_089E2F10;
    }
L_089E2F10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E2F1Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(17));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2F1Cu) goto L_089E2F1C;
    return;
L_089E2F1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 19u, 0x089E313Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2F28;
    }
L_089E2F28:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), 0u);
    goto L_089E2F2C;
L_089E2F2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    goto L_089E2F30;
L_089E2F30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089E2F54;
      }
      goto L_089E2F38;
    }
L_089E2F38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E2F4Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2F4Cu) goto L_089E2F4C;
    return;
L_089E2F4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089E2FF4;
      }
      goto L_089E2F54;
    }
L_089E2F54:
    aot_gpr[31] = (0x089E2F5Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 37u, 0x089E02F8u>(ctx, &aot_mem) && ctx.pc == 0x089E2F5Cu) goto L_089E2F5C;
    return;
L_089E2F5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E2090;
      }
      goto L_089E2F64;
    }
L_089E2F64:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E2A6C;
L_089E2F70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(39)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089E2ED0;
    }
    goto L_089E2F80;
L_089E2F80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089E2F84;
L_089E2F84:
    aot_gpr[3] = (258u << 16u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_089E2760;
      }
      goto L_089E2F94;
    }
L_089E2F94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_089E2FBC;
      }
      goto L_089E2FAC;
    }
L_089E2FAC:
    aot_gpr[3] = ((aot_gpr[3] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(140)));
    goto L_089E2FBC;
L_089E2FBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(-11));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(208), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 3u, 0x089E3014u>(ctx, &aot_mem); return;
      }
      goto L_089E2FE0;
    }
L_089E2FE0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089E2A70;
      }
      goto L_089E2FEC;
    }
L_089E2FEC:
    // nop
    goto L_089E2F54;
L_089E2FF4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089E3004u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 172u, 0x089E1E94u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0478(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0478_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_478(Runtime &runtime) {
    runtime.register_generated_unit(478u, 0x089E2000u, 4096u, &recomp_unit_0478, &recomp_unit_0478_entry);
    runtime.register_function(0x089E2000u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2008u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2050u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2058u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2064u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2068u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2078u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E208Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2090u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2094u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E20C0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E20D8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E20E8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E20F8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2110u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2118u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E211Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2120u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E214Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E215Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2164u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2178u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2190u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21A4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21B4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21C0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21D0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21E0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21E8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E21F8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2208u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2218u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E221Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2224u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2234u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2244u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E224Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2260u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2264u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E226Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E227Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E228Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2294u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E22A8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E22B8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E22C4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E22D0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E22E8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2324u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2328u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2334u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E233Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2344u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2364u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E236Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E237Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E23A8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E23C4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E23D4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E23DCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E23ECu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E23F4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2404u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2420u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2430u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2438u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2448u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2458u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2460u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2474u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2484u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2494u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E24ACu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E24E8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E24ECu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E24F8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2500u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2508u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E250Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2518u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2524u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2538u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2548u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2554u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E256Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2574u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2584u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2594u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E259Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E25ACu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E25BCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E25C4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E25D8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E25E8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E25F4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2600u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2614u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E262Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2678u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E267Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E268Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26A8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26B0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26B8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26C0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26C8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26D8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26E0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26E8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E26F8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2714u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2724u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2730u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E273Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2748u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2754u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E275Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2760u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2768u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2774u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2780u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E279Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E27ACu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E27B8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E27BCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E27CCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E27D4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E27DCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2824u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2830u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2840u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2880u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E289Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28A4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28A8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28B8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28C4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28D4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28E4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E28ECu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2900u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2910u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E291Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2928u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2940u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E298Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2990u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E299Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E29B8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E29C4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E29E4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E29ECu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E29FCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A18u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A28u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A30u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A44u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A4Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A54u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A5Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A64u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A6Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A70u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A7Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A84u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A8Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2A98u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2AA0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2AA8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2AACu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2AB4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B04u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B0Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B14u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B18u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B1Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B24u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B34u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B40u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B44u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B4Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B5Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B70u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B78u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B80u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2B98u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BA0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BB0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BB8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BC0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BC8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BE8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BF0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2BF8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C04u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C0Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C18u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C1Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C20u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C2Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C34u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C40u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C48u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C58u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C60u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C80u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C8Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2C9Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CACu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CB4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CC4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CCCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CDCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CE8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CF4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2CFCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2D08u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2D10u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2D18u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2D24u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2D38u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2DD8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2DDCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2DF4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2E98u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2E9Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2EB4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2EB8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2EC4u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2ECCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2ED0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2EE0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2EE8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2EF8u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F04u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F10u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F1Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F28u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F2Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F30u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F38u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F4Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F54u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F5Cu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F64u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F70u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F80u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F84u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2F94u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2FACu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2FBCu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2FE0u, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2FECu, &recomp_unit_0478, "recomp_unit_0478");
    runtime.register_function(0x089E2FF4u, &recomp_unit_0478, "recomp_unit_0478");
}
} // namespace psprecomp
