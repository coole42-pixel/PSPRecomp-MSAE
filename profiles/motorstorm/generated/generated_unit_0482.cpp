#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0482[1024] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 7, 0,
    8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0,
    0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 25, 26,
    0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 37, 0, 38,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0,
    46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0,
    65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 79, 80, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 132, 133, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0,
    0, 140, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0,
    0, 0, 0, 0, 159, 0, 160, 161, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 176, 0, 177, 0,
    0, 178, 0, 179, 0, 0, 0, 0, 180, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 191, 192, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0,
    0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226,
    0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245,
    0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 267, 268, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279,
};
void recomp_unit_0482_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E6000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0482[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E6000;
    case 2u: goto L_089E6010;
    case 3u: goto L_089E6020;
    case 4u: goto L_089E605C;
    case 5u: goto L_089E606C;
    case 6u: goto L_089E6070;
    case 7u: goto L_089E6078;
    case 8u: goto L_089E6080;
    case 9u: goto L_089E6084;
    case 10u: goto L_089E6088;
    case 11u: goto L_089E60B8;
    case 12u: goto L_089E60D0;
    case 13u: goto L_089E60DC;
    case 14u: goto L_089E60E4;
    case 15u: goto L_089E60EC;
    case 16u: goto L_089E6104;
    case 17u: goto L_089E6110;
    case 18u: goto L_089E611C;
    case 19u: goto L_089E6130;
    case 20u: goto L_089E613C;
    case 21u: goto L_089E6150;
    case 22u: goto L_089E6160;
    case 23u: goto L_089E6168;
    case 24u: goto L_089E6170;
    case 25u: goto L_089E6178;
    case 26u: goto L_089E617C;
    case 27u: goto L_089E6184;
    case 28u: goto L_089E618C;
    case 29u: goto L_089E6198;
    case 30u: goto L_089E61A0;
    case 31u: goto L_089E61AC;
    case 32u: goto L_089E61B8;
    case 33u: goto L_089E61C8;
    case 34u: goto L_089E61D0;
    case 35u: goto L_089E61DC;
    case 36u: goto L_089E61F0;
    case 37u: goto L_089E61F4;
    case 38u: goto L_089E61FC;
    case 39u: goto L_089E6210;
    case 40u: goto L_089E622C;
    case 41u: goto L_089E6244;
    case 42u: goto L_089E6254;
    case 43u: goto L_089E6260;
    case 44u: goto L_089E6268;
    case 45u: goto L_089E6274;
    case 46u: goto L_089E6280;
    case 47u: goto L_089E6290;
    case 48u: goto L_089E6298;
    case 49u: goto L_089E62A4;
    case 50u: goto L_089E62B8;
    case 51u: goto L_089E62BC;
    case 52u: goto L_089E62C4;
    case 53u: goto L_089E62D8;
    case 54u: goto L_089E62F4;
    case 55u: goto L_089E6304;
    case 56u: goto L_089E630C;
    case 57u: goto L_089E6324;
    case 58u: goto L_089E632C;
    case 59u: goto L_089E6338;
    case 60u: goto L_089E6344;
    case 61u: goto L_089E6350;
    case 62u: goto L_089E6358;
    case 63u: goto L_089E6364;
    case 64u: goto L_089E6370;
    case 65u: goto L_089E6380;
    case 66u: goto L_089E6388;
    case 67u: goto L_089E6394;
    case 68u: goto L_089E63A8;
    case 69u: goto L_089E63AC;
    case 70u: goto L_089E63B4;
    case 71u: goto L_089E63E4;
    case 72u: goto L_089E63EC;
    case 73u: goto L_089E6400;
    case 74u: goto L_089E641C;
    case 75u: goto L_089E642C;
    case 76u: goto L_089E6440;
    case 77u: goto L_089E644C;
    case 78u: goto L_089E6460;
    case 79u: goto L_089E6464;
    case 80u: goto L_089E6468;
    case 81u: goto L_089E6484;
    case 82u: goto L_089E6494;
    case 83u: goto L_089E64A0;
    case 84u: goto L_089E64A8;
    case 85u: goto L_089E64C0;
    case 86u: goto L_089E64D0;
    case 87u: goto L_089E64E0;
    case 88u: goto L_089E64F0;
    case 89u: goto L_089E64F8;
    case 90u: goto L_089E6504;
    case 91u: goto L_089E6518;
    case 92u: goto L_089E6524;
    case 93u: goto L_089E6528;
    case 94u: goto L_089E6540;
    case 95u: goto L_089E6554;
    case 96u: goto L_089E6574;
    case 97u: goto L_089E6590;
    case 98u: goto L_089E6598;
    case 99u: goto L_089E65A4;
    case 100u: goto L_089E65AC;
    case 101u: goto L_089E65B8;
    case 102u: goto L_089E65C4;
    case 103u: goto L_089E65D4;
    case 104u: goto L_089E65E8;
    case 105u: goto L_089E6608;
    case 106u: goto L_089E6610;
    case 107u: goto L_089E661C;
    case 108u: goto L_089E663C;
    case 109u: goto L_089E6648;
    case 110u: goto L_089E664C;
    case 111u: goto L_089E6664;
    case 112u: goto L_089E6684;
    case 113u: goto L_089E6694;
    case 114u: goto L_089E66A0;
    case 115u: goto L_089E66A8;
    case 116u: goto L_089E66B4;
    case 117u: goto L_089E66C0;
    case 118u: goto L_089E66D4;
    case 119u: goto L_089E66E4;
    case 120u: goto L_089E66EC;
    case 121u: goto L_089E66F8;
    case 122u: goto L_089E6700;
    case 123u: goto L_089E6714;
    case 124u: goto L_089E6724;
    case 125u: goto L_089E6730;
    case 126u: goto L_089E6738;
    case 127u: goto L_089E6744;
    case 128u: goto L_089E6750;
    case 129u: goto L_089E6760;
    case 130u: goto L_089E6768;
    case 131u: goto L_089E6774;
    case 132u: goto L_089E6790;
    case 133u: goto L_089E6794;
    case 134u: goto L_089E6798;
    case 135u: goto L_089E67A0;
    case 136u: goto L_089E67B4;
    case 137u: goto L_089E67D0;
    case 138u: goto L_089E67E8;
    case 139u: goto L_089E67F8;
    case 140u: goto L_089E6804;
    case 141u: goto L_089E680C;
    case 142u: goto L_089E6818;
    case 143u: goto L_089E6824;
    case 144u: goto L_089E6834;
    case 145u: goto L_089E683C;
    case 146u: goto L_089E6848;
    case 147u: goto L_089E685C;
    case 148u: goto L_089E6864;
    case 149u: goto L_089E6878;
    case 150u: goto L_089E6894;
    case 151u: goto L_089E68A4;
    case 152u: goto L_089E68AC;
    case 153u: goto L_089E68C4;
    case 154u: goto L_089E68CC;
    case 155u: goto L_089E68D8;
    case 156u: goto L_089E68E4;
    case 157u: goto L_089E68EC;
    case 158u: goto L_089E68F8;
    case 159u: goto L_089E6910;
    case 160u: goto L_089E6918;
    case 161u: goto L_089E691C;
    case 162u: goto L_089E6928;
    case 163u: goto L_089E6930;
    case 164u: goto L_089E6938;
    case 165u: goto L_089E6940;
    case 166u: goto L_089E6958;
    case 167u: goto L_089E6960;
    case 168u: goto L_089E6968;
    case 169u: goto L_089E6978;
    case 170u: goto L_089E69B4;
    case 171u: goto L_089E69BC;
    case 172u: goto L_089E69C4;
    case 173u: goto L_089E69D4;
    case 174u: goto L_089E69DC;
    case 175u: goto L_089E69EC;
    case 176u: goto L_089E69F0;
    case 177u: goto L_089E69F8;
    case 178u: goto L_089E6A04;
    case 179u: goto L_089E6A0C;
    case 180u: goto L_089E6A20;
    case 181u: goto L_089E6A24;
    case 182u: goto L_089E6A30;
    case 183u: goto L_089E6A40;
    case 184u: goto L_089E6A4C;
    case 185u: goto L_089E6A58;
    case 186u: goto L_089E6A60;
    case 187u: goto L_089E6A6C;
    case 188u: goto L_089E6A88;
    case 189u: goto L_089E6A9C;
    case 190u: goto L_089E6AA4;
    case 191u: goto L_089E6AAC;
    case 192u: goto L_089E6AB0;
    case 193u: goto L_089E6AB4;
    case 194u: goto L_089E6AC4;
    case 195u: goto L_089E6AD8;
    case 196u: goto L_089E6AF0;
    case 197u: goto L_089E6AF8;
    case 198u: goto L_089E6B0C;
    case 199u: goto L_089E6B14;
    case 200u: goto L_089E6B28;
    case 201u: goto L_089E6B34;
    case 202u: goto L_089E6B3C;
    case 203u: goto L_089E6B54;
    case 204u: goto L_089E6B64;
    case 205u: goto L_089E6B70;
    case 206u: goto L_089E6B7C;
    case 207u: goto L_089E6B94;
    case 208u: goto L_089E6BA4;
    case 209u: goto L_089E6BB4;
    case 210u: goto L_089E6BC4;
    case 211u: goto L_089E6BD0;
    case 212u: goto L_089E6BEC;
    case 213u: goto L_089E6BFC;
    case 214u: goto L_089E6C14;
    case 215u: goto L_089E6C24;
    case 216u: goto L_089E6C40;
    case 217u: goto L_089E6C50;
    case 218u: goto L_089E6C6C;
    case 219u: goto L_089E6C7C;
    case 220u: goto L_089E6C94;
    case 221u: goto L_089E6CA4;
    case 222u: goto L_089E6CBC;
    case 223u: goto L_089E6CCC;
    case 224u: goto L_089E6CE4;
    case 225u: goto L_089E6CF4;
    case 226u: goto L_089E6CFC;
    case 227u: goto L_089E6D04;
    case 228u: goto L_089E6D18;
    case 229u: goto L_089E6D28;
    case 230u: goto L_089E6D3C;
    case 231u: goto L_089E6D4C;
    case 232u: goto L_089E6D60;
    case 233u: goto L_089E6D70;
    case 234u: goto L_089E6D84;
    case 235u: goto L_089E6D94;
    case 236u: goto L_089E6D9C;
    case 237u: goto L_089E6DA8;
    case 238u: goto L_089E6DC0;
    case 239u: goto L_089E6DC8;
    case 240u: goto L_089E6DCC;
    case 241u: goto L_089E6DD4;
    case 242u: goto L_089E6DE0;
    case 243u: goto L_089E6DE8;
    case 244u: goto L_089E6DF4;
    case 245u: goto L_089E6DFC;
    case 246u: goto L_089E6E04;
    case 247u: goto L_089E6E0C;
    case 248u: goto L_089E6E24;
    case 249u: goto L_089E6E2C;
    case 250u: goto L_089E6E30;
    case 251u: goto L_089E6E3C;
    case 252u: goto L_089E6E48;
    case 253u: goto L_089E6E74;
    case 254u: goto L_089E6E90;
    case 255u: goto L_089E6E9C;
    case 256u: goto L_089E6EA4;
    case 257u: goto L_089E6EC4;
    case 258u: goto L_089E6ED4;
    case 259u: goto L_089E6EE4;
    case 260u: goto L_089E6EF4;
    case 261u: goto L_089E6EFC;
    case 262u: goto L_089E6F08;
    case 263u: goto L_089E6F30;
    case 264u: goto L_089E6F38;
    case 265u: goto L_089E6F48;
    case 266u: goto L_089E6F5C;
    case 267u: goto L_089E6F60;
    case 268u: goto L_089E6F64;
    case 269u: goto L_089E6F78;
    case 270u: goto L_089E6F8C;
    case 271u: goto L_089E6F94;
    case 272u: goto L_089E6FAC;
    case 273u: goto L_089E6FB4;
    case 274u: goto L_089E6FC4;
    case 275u: goto L_089E6FCC;
    case 276u: goto L_089E6FDC;
    case 277u: goto L_089E6FE4;
    case 278u: goto L_089E6FEC;
    case 279u: goto L_089E6FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E6000:
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(19668));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8280), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6010;
L_089E6010:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0481_entry, 481u, 179u, 0x089E5C28u>(ctx, &aot_mem); return;
L_089E6020:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E6084;
      }
      goto L_089E605C;
    }
L_089E605C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 2u);
      if (branch_taken) {
          goto L_089E60B8;
      }
      goto L_089E606C;
    }
L_089E606C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6070;
L_089E6070:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089E6084;
      }
      goto L_089E6078;
    }
L_089E6078:
    aot_gpr[31] = (0x089E6080u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0481_entry, 481u, 175u, 0x089E5BCCu>(ctx, &aot_mem) && ctx.pc == 0x089E6080u) goto L_089E6080;
    return;
L_089E6080:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089E6084;
L_089E6084:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089E6088;
L_089E6088:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E60B8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12024));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E60D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E60DC;
L_089E60DC:
    aot_gpr[31] = (0x089E60E4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0481_entry, 481u, 31u, 0x089E521Cu>(ctx, &aot_mem) && ctx.pc == 0x089E60E4u) goto L_089E60E4;
    return;
L_089E60E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089E6104;
      }
      goto L_089E60EC;
    }
L_089E60EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8256), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E6104;
L_089E6104:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_089E617C;
L_089E6110:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089E611Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E611Cu) goto L_089E611C;
    return;
L_089E611C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6130;
L_089E6130:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E613C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6160;
      }
      goto L_089E6150;
    }
L_089E6150:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089E6968;
    }
    goto L_089E6160;
L_089E6160:
    aot_gpr[31] = (0x089E6168u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 252u, 0x089E4F94u>(ctx, &aot_mem) && ctx.pc == 0x089E6168u) goto L_089E6168;
    return;
L_089E6168:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6070;
L_089E6170:
    aot_gpr[31] = (0x089E6178u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 254u, 0x089E4FC4u>(ctx, &aot_mem) && ctx.pc == 0x089E6178u) goto L_089E6178;
    return;
L_089E6178:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089E617C;
L_089E617C:
    if (aot_gpr[18] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6184;
L_089E6184:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089E6088;
L_089E618C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E6198u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E6198u) goto L_089E6198;
    return;
L_089E6198:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6C7C;
      }
      goto L_089E61A0;
    }
L_089E61A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E61AC;
L_089E61AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E61B8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E61C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E61C8u) goto L_089E61C8;
    return;
L_089E61C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E61DC;
      }
      goto L_089E61D0;
    }
L_089E61D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E61DC;
L_089E61DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6938;
      }
      goto L_089E61F0;
    }
L_089E61F0:
    aot_gpr[18] = (0u | 55004u);
    goto L_089E61F4;
L_089E61F4:
    aot_gpr[31] = (0x089E61FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E61FCu) goto L_089E61FC;
    return;
L_089E61FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6210u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E6210u) goto L_089E6210;
    return;
L_089E6210:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E622Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E622Cu) goto L_089E622C;
    return;
L_089E622C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8304)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E6244u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6244u) goto L_089E6244;
    return;
L_089E6244:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8304), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E6254:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E6260u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E6260u) goto L_089E6260;
    return;
L_089E6260:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6BD0;
      }
      goto L_089E6268;
    }
L_089E6268:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6274;
L_089E6274:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E6280:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E6290u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E6290u) goto L_089E6290;
    return;
L_089E6290:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E62A4;
      }
      goto L_089E6298;
    }
L_089E6298:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E62A4;
L_089E62A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E68E4;
      }
      goto L_089E62B8;
    }
L_089E62B8:
    aot_gpr[19] = (0u + 0u);
    goto L_089E62BC;
L_089E62BC:
    aot_gpr[31] = (0x089E62C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E62C4u) goto L_089E62C4;
    return;
L_089E62C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E62D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E62D8u) goto L_089E62D8;
    return;
L_089E62D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E62F4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E62F4u) goto L_089E62F4;
    return;
L_089E62F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8244)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_089E6D4C;
    }
    goto L_089E6304;
L_089E6304:
    if (aot_gpr[18] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_089E6D04;
    }
    goto L_089E630C;
L_089E630C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16804));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12068));
    aot_gpr[31] = (0x089E6324u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E6324u) goto L_089E6324;
    return;
L_089E6324:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6E74;
      }
      goto L_089E632C;
    }
L_089E632C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6338u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E6338u) goto L_089E6338;
    return;
L_089E6338:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    goto L_089E606C;
L_089E6344:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E6350u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E6350u) goto L_089E6350;
    return;
L_089E6350:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6BFC;
      }
      goto L_089E6358;
    }
L_089E6358:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6364;
L_089E6364:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E6370:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E6380u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E6380u) goto L_089E6380;
    return;
L_089E6380:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6394;
      }
      goto L_089E6388;
    }
L_089E6388:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6394;
L_089E6394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E6DFC;
      }
      goto L_089E63A8;
    }
L_089E63A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8244)));
    goto L_089E63AC;
L_089E63AC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8268)));
        goto L_089E6BC4;
    }
    goto L_089E63B4;
L_089E63B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8268), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8272), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8252), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8244), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E63E4;
L_089E63E4:
    aot_gpr[31] = (0x089E63ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E63ECu) goto L_089E63EC;
    return;
L_089E63EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6400u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E6400u) goto L_089E6400;
    return;
L_089E6400:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E641Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E641Cu) goto L_089E641C;
    return;
L_089E641C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8244)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E617C;
      }
      goto L_089E642C;
    }
L_089E642C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8272)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8268)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E6EFC;
      }
      goto L_089E6440;
    }
L_089E6440:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8252)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[18] ^ 55004u);
      if (branch_taken) {
          goto L_089E6468;
      }
      goto L_089E644C;
    }
L_089E644C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6F8C;
      }
      goto L_089E6460;
    }
L_089E6460:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089E6464;
L_089E6464:
    aot_gpr[2] = (aot_gpr[18] ^ 55004u);
    goto L_089E6468;
L_089E6468:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8296)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == 0u) aot_gpr[18] = (0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6484u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6484u) goto L_089E6484;
    return;
L_089E6484:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E6494:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E64A0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E64A0u) goto L_089E64A0;
    return;
L_089E64A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6B64;
      }
      goto L_089E64A8;
    }
L_089E64A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8284)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E64C0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E64C0u) goto L_089E64C0;
    return;
L_089E64C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8284), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E64D0:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(23432)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6B3C;
    }
    goto L_089E64E0;
L_089E64E0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E64F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E64F0u) goto L_089E64F0;
    return;
L_089E64F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6504;
      }
      goto L_089E64F8;
    }
L_089E64F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6504;
L_089E6504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E6528;
      }
      goto L_089E6518;
    }
L_089E6518:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 3u, 0x089E7020u>(ctx, &aot_mem); return;
    }
    goto L_089E6524;
L_089E6524:
    aot_gpr[3] = (2217u << 16u);
    goto L_089E6528;
L_089E6528:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23428), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(23432), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6540u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6540u) goto L_089E6540;
    return;
L_089E6540:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6554u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E6554u) goto L_089E6554;
    return;
L_089E6554:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8280)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E6574u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6574u) goto L_089E6574;
    return;
L_089E6574:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8280), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6590u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6590u) goto L_089E6590;
    return;
L_089E6590:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E6598:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E65A4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E65A4u) goto L_089E65A4;
    return;
L_089E65A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6CCC;
      }
      goto L_089E65AC;
    }
L_089E65AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E65B8;
L_089E65B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E65C4:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(23440)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6B7C;
    }
    goto L_089E65D4;
L_089E65D4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x089E65E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089E65E8u) goto L_089E65E8;
    return;
L_089E65E8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E6608u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 90u, 0x0898E62Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6608u) goto L_089E6608;
    return;
L_089E6608:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6648;
      }
      goto L_089E6610;
    }
L_089E6610:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6ED4;
    }
    goto L_089E661C;
L_089E661C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (0u | 55004u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(8312), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089E663Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 207u, 0x089E3F80u>(ctx, &aot_mem) && ctx.pc == 0x089E663Cu) goto L_089E663C;
    return;
L_089E663C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 38u, 0x089E7248u>(ctx, &aot_mem); return;
      }
      goto L_089E6648;
    }
L_089E6648:
    aot_gpr[3] = (2217u << 16u);
    goto L_089E664C;
L_089E664C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23436), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(23440), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6664u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E6664u) goto L_089E6664;
    return;
L_089E6664:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8276)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E6684u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6684u) goto L_089E6684;
    return;
L_089E6684:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8276), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E6694:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E66A0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E66A0u) goto L_089E66A0;
    return;
L_089E66A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6C24;
      }
      goto L_089E66A8;
    }
L_089E66A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E66B4;
L_089E66B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E66C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = ((aot_gpr[6] >> 12u) & 0x00000001u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 2048u);
      if (branch_taken) {
          goto L_089E66E4;
      }
      goto L_089E66D4;
    }
L_089E66D4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23424)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 2048u);
      if (branch_taken) {
          goto L_089E6CF4;
      }
      goto L_089E66E4;
    }
L_089E66E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E66F8;
      }
      goto L_089E66EC;
    }
L_089E66EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23420)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6CF4;
      }
      goto L_089E66F8;
    }
L_089E66F8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E6BA4;
      }
      goto L_089E6700;
    }
L_089E6700:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8284)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23416)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6714u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6714u) goto L_089E6714;
    return;
L_089E6714:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8284), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E6724:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E6730u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E6730u) goto L_089E6730;
    return;
L_089E6730:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6CA4;
      }
      goto L_089E6738;
    }
L_089E6738:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6744;
L_089E6744:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E6750:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E6760u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E6760u) goto L_089E6760;
    return;
L_089E6760:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6774;
      }
      goto L_089E6768;
    }
L_089E6768:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6774;
L_089E6774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6928;
      }
      goto L_089E6790;
    }
L_089E6790:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_089E6794;
L_089E6794:
    aot_gpr[18] = (0u | 55004u);
    goto L_089E6798;
L_089E6798:
    aot_gpr[31] = (0x089E67A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E67A0u) goto L_089E67A0;
    return;
L_089E67A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E67B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E67B4u) goto L_089E67B4;
    return;
L_089E67B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E67D0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E67D0u) goto L_089E67D0;
    return;
L_089E67D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8300)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E67E8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E67E8u) goto L_089E67E8;
    return;
L_089E67E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E67F8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E6804u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 146u, 0x089E4980u>(ctx, &aot_mem) && ctx.pc == 0x089E6804u) goto L_089E6804;
    return;
L_089E6804:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6C50;
      }
      goto L_089E680C;
    }
L_089E680C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6818;
L_089E6818:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E6824:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E6834u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E6834u) goto L_089E6834;
    return;
L_089E6834:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6848;
      }
      goto L_089E683C;
    }
L_089E683C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6848;
L_089E6848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6D94;
      }
      goto L_089E685C;
    }
L_089E685C:
    aot_gpr[31] = (0x089E6864u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6864u) goto L_089E6864;
    return;
L_089E6864:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6878u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E6878u) goto L_089E6878;
    return;
L_089E6878:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6894u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6894u) goto L_089E6894;
    return;
L_089E6894:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8244)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_089E6D70;
    }
    goto L_089E68A4;
L_089E68A4:
    if (aot_gpr[18] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_089E6D28;
    }
    goto L_089E68AC;
L_089E68AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16820));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12068));
    aot_gpr[31] = (0x089E68C4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E68C4u) goto L_089E68C4;
    return;
L_089E68C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E6EA4;
      }
      goto L_089E68CC;
    }
L_089E68CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E68D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E68D8u) goto L_089E68D8;
    return;
L_089E68D8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    goto L_089E606C;
L_089E68E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089E62BC;
      }
      goto L_089E68EC;
    }
L_089E68EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8244)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 16u, 0x089E7128u>(ctx, &aot_mem); return;
      }
      goto L_089E68F8;
    }
L_089E68F8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E6910u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6910u) goto L_089E6910;
    return;
L_089E6910:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E69F8;
    }
    goto L_089E6918;
L_089E6918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E691C;
L_089E691C:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[19] = (0u + 0u);
    goto L_089E62BC;
L_089E6928:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6798;
      }
      goto L_089E6930;
    }
L_089E6930:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_089E6794;
L_089E6938:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u | 55004u);
        goto L_089E61F4;
    }
    goto L_089E6940;
L_089E6940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E6958u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6958u) goto L_089E6958;
    return;
L_089E6958:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E69C4;
    }
    goto L_089E6960;
L_089E6960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E61F4;
L_089E6968:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[31] = (0x089E6978u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6978u) goto L_089E6978;
    return;
L_089E6978:
    aot_gpr[5] = (4194u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 19923u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[5]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (ctx.hi);
    aot_gpr[5] = (aot_gpr[5] >> 7u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[5] << 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1000));
    aot_gpr[31] = (0x089E69B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E69B4u) goto L_089E69B4;
    return;
L_089E69B4:
    aot_gpr[31] = (0x089E69BCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 252u, 0x089E4F94u>(ctx, &aot_mem) && ctx.pc == 0x089E69BCu) goto L_089E69BC;
    return;
L_089E69BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6070;
L_089E69C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E69D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E69D4u) goto L_089E69D4;
    return;
L_089E69D4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E61F4;
    }
    goto L_089E69DC;
L_089E69DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6144)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[23] = (0u + 0u);
      if (branch_taken) {
          goto L_089E6A88;
      }
      goto L_089E69EC;
    }
L_089E69EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E69F0;
L_089E69F0:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(6));
    goto L_089E61F4;
L_089E69F8:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E6A04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E6A04u) goto L_089E6A04;
    return;
L_089E6A04:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E691C;
    }
    goto L_089E6A0C;
L_089E6A0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(23444));
    aot_gpr[31] = (0x089E6A20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E6A20u) goto L_089E6A20;
    return;
L_089E6A20:
    aot_gpr[2] = (2216u << 16u);
    goto L_089E6A24;
L_089E6A24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19160)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 55u, 0x089E7304u>(ctx, &aot_mem); return;
      }
      goto L_089E6A30;
    }
L_089E6A30:
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-19156));
    aot_gpr[19] = (0u + 0u);
    aot_gpr[21] = (2217u << 16u);
    goto L_089E6A4C;
L_089E6A40:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E6A60;
      }
      goto L_089E6A4C;
    }
L_089E6A4C:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(23444));
    aot_gpr[31] = (0x089E6A58u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E6A58u) goto L_089E6A58;
    return;
L_089E6A58:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089E6A40;
    }
    goto L_089E6A60;
L_089E6A60:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E62B8;
    }
    goto L_089E6A6C;
L_089E6A6C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[19] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11944));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6A88:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[30] = (2215u << 16u);
    goto L_089E6AC4;
L_089E6A9C:
    aot_gpr[31] = (0x089E6AA4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6AA4u) goto L_089E6AA4;
    return;
L_089E6AA4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E6AF8;
      }
      goto L_089E6AAC;
    }
L_089E6AAC:
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E6AB0;
L_089E6AB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    goto L_089E6AB4;
L_089E6AB4:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 100u, 0x089E7538u>(ctx, &aot_mem); return;
      }
      goto L_089E6AC4;
    }
L_089E6AC4:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(3072));
    aot_gpr[19] = (aot_gpr[23] << 8u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[31] = (0x089E6AD8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089E6AD8u) goto L_089E6AD8;
    return;
L_089E6AD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(18224));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089E6AF0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E6AF0u) goto L_089E6AF0;
    return;
L_089E6AF0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E6A9C;
      }
      goto L_089E6AF8;
    }
L_089E6AF8:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(18244));
    aot_gpr[31] = (0x089E6B0Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E6B0Cu) goto L_089E6B0C;
    return;
L_089E6B0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 59u, 0x089E7330u>(ctx, &aot_mem); return;
      }
      goto L_089E6B14;
    }
L_089E6B14:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E6B28u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6B28u) goto L_089E6B28;
    return;
L_089E6B28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 99u, 0x089E7530u>(ctx, &aot_mem); return;
      }
      goto L_089E6B34;
    }
L_089E6B34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    goto L_089E6AB4;
L_089E6B3C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23428)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8280)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6B54u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6B54u) goto L_089E6B54;
    return;
L_089E6B54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E6B64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6070;
    }
    goto L_089E6B70;
L_089E6B70:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089E606C;
L_089E6B7C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23436)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8276)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6B94u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6B94u) goto L_089E6B94;
    return;
L_089E6B94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8276), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E6BA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8284)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23412)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6BB4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6BB4u) goto L_089E6BB4;
    return;
L_089E6BB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8284), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E6BC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8272), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E63E4;
L_089E6BD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8292)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6BECu);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6BECu) goto L_089E6BEC;
    return;
L_089E6BEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6BFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8300)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6C14u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6C14u) goto L_089E6C14;
    return;
L_089E6C14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6C24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8288)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6C40u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6C40u) goto L_089E6C40;
    return;
L_089E6C40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6C50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8296)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6C6Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6C6Cu) goto L_089E6C6C;
    return;
L_089E6C6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6C7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8308)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6C94u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6C94u) goto L_089E6C94;
    return;
L_089E6C94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8308), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6CA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8304)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6CBCu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6CBCu) goto L_089E6CBC;
    return;
L_089E6CBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8304), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6CCC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8280)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6CE4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6CE4u) goto L_089E6CE4;
    return;
L_089E6CE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6CF4:
    aot_gpr[31] = (0x089E6CFCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 168u, 0x089E4AC0u>(ctx, &aot_mem) && ctx.pc == 0x089E6CFCu) goto L_089E6CFC;
    return;
L_089E6CFC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089E617C;
L_089E6D04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8288)));
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6D18u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6D18u) goto L_089E6D18;
    return;
L_089E6D18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E6D28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8292)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6D3Cu);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6D3Cu) goto L_089E6D3C;
    return;
L_089E6D3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E606C;
L_089E6D4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8288)));
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6D60u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6D60u) goto L_089E6D60;
    return;
L_089E6D60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E6D70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8292)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6D84u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6D84u) goto L_089E6D84;
    return;
L_089E6D84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E617C;
L_089E6D94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E685C;
      }
      goto L_089E6D9C;
    }
L_089E6D9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8244)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089E6F94;
      }
      goto L_089E6DA8;
    }
L_089E6DA8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E6DC0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6DC0u) goto L_089E6DC0;
    return;
L_089E6DC0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6DD4;
    }
    goto L_089E6DC8;
L_089E6DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6DCC;
L_089E6DCC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089E685C;
L_089E6DD4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E6DE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E6DE0u) goto L_089E6DE0;
    return;
L_089E6DE0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6DCC;
    }
    goto L_089E6DE8;
L_089E6DE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089E6DF4u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089E6DF4u) goto L_089E6DF4;
    return;
L_089E6DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E685C;
L_089E6DFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8244)));
      if (branch_taken) {
          goto L_089E63AC;
      }
      goto L_089E6E04;
    }
L_089E6E04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 26u, 0x089E71B0u>(ctx, &aot_mem); return;
      }
      goto L_089E6E0C;
    }
L_089E6E0C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E6E24u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6E24u) goto L_089E6E24;
    return;
L_089E6E24:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 50u, 0x089E72CCu>(ctx, &aot_mem); return;
    }
    goto L_089E6E2C;
L_089E6E2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6E30;
L_089E6E30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8244)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8268)));
        (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 35u, 0x089E7220u>(ctx, &aot_mem); return;
    }
    goto L_089E6E3C;
L_089E6E3C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8268), aot_gpr[2]);
    aot_gpr[18] = (0u + 0u);
    goto L_089E6E48;
L_089E6E48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8272), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8252), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8244), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E63E4;
L_089E6E74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8288)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6E90u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6E90u) goto L_089E6E90;
    return;
L_089E6E90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6E9C;
L_089E6E9C:
    aot_gpr[18] = (aot_gpr[16] + 0u);
    goto L_089E6084;
L_089E6EA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8292)));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6EC4u);
    aot_gpr[18] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6EC4u) goto L_089E6EC4;
    return;
L_089E6EC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6ED4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[18] = (0u | 55001u);
    aot_gpr[31] = (0x089E6EE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6EE4u) goto L_089E6EE4;
    return;
L_089E6EE4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[3] = (2217u << 16u);
        goto L_089E664C;
    }
    goto L_089E6EF4;
L_089E6EF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E6070;
L_089E6EFC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10872));
    aot_gpr[31] = (0x089E6F08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(18292));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E6F08u) goto L_089E6F08;
    return;
L_089E6F08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(18340));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8272)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8272), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E6F30u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10872));
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E6F30u) goto L_089E6F30;
    return;
L_089E6F30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 36u, 0x089E7230u>(ctx, &aot_mem); return;
      }
      goto L_089E6F38;
    }
L_089E6F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8252)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089E6F64;
    }
    goto L_089E6F48;
L_089E6F48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 54u, 0x089E72FCu>(ctx, &aot_mem); return;
      }
      goto L_089E6F5C;
    }
L_089E6F5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089E6F60;
L_089E6F60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089E6F64;
L_089E6F64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8296)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E6F78u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E6F78u) goto L_089E6F78;
    return;
L_089E6F78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089E6084;
L_089E6F8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_089E6464;
L_089E6F94:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E6FACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6FACu) goto L_089E6FAC;
    return;
L_089E6FAC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6DCC;
    }
    goto L_089E6FB4;
L_089E6FB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E6FC4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E6FC4u) goto L_089E6FC4;
    return;
L_089E6FC4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E6DCC;
    }
    goto L_089E6FCC;
L_089E6FCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089E6FE4;
      }
      goto L_089E6FDC;
    }
L_089E6FDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E685C;
L_089E6FE4:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[20] << 8u);
    goto L_089E6FEC;
L_089E6FEC:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(18200));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[31] = (0x089E6FFCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E6FFCu) goto L_089E6FFC;
    return;
L_089E6FFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 63u, 0x089E7368u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 1u, 0x089E7004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0482(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0482_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_482(Runtime &runtime) {
    runtime.register_generated_unit(482u, 0x089E6000u, 4096u, &recomp_unit_0482, &recomp_unit_0482_entry);
    runtime.register_function(0x089E6000u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6010u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6020u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E605Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E606Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6070u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6078u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6080u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6084u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6088u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E60B8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E60D0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E60DCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E60E4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E60ECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6104u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6110u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E611Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6130u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E613Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6150u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6160u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6168u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6170u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6178u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E617Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6184u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E618Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6198u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61A0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61ACu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61B8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61C8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61D0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61DCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61F0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61F4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E61FCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6210u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E622Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6244u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6254u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6260u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6268u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6274u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6280u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6290u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6298u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E62A4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E62B8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E62BCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E62C4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E62D8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E62F4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6304u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E630Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6324u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E632Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6338u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6344u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6350u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6358u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6364u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6370u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6380u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6388u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6394u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E63A8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E63ACu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E63B4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E63E4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E63ECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6400u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E641Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E642Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6440u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E644Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6460u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6464u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6468u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6484u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6494u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64A0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64A8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64C0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64D0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64E0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64F0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E64F8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6504u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6518u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6524u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6528u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6540u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6554u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6574u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6590u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6598u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E65A4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E65ACu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E65B8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E65C4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E65D4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E65E8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6608u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6610u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E661Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E663Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6648u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E664Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6664u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6684u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6694u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66A0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66A8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66B4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66C0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66D4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66E4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66ECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E66F8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6700u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6714u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6724u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6730u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6738u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6744u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6750u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6760u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6768u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6774u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6790u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6794u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6798u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E67A0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E67B4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E67D0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E67E8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E67F8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6804u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E680Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6818u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6824u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6834u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E683Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6848u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E685Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6864u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6878u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6894u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68A4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68ACu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68C4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68CCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68D8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68E4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68ECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E68F8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6910u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6918u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E691Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6928u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6930u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6938u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6940u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6958u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6960u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6968u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6978u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69B4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69BCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69C4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69D4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69DCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69ECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69F0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E69F8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A04u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A0Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A20u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A24u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A30u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A40u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A4Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A58u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A60u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A6Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A88u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6A9Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AA4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AACu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AB0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AB4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AC4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AD8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AF0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6AF8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B0Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B14u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B28u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B34u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B3Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B54u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B64u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B70u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B7Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6B94u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6BA4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6BB4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6BC4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6BD0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6BECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6BFCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C14u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C24u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C40u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C50u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C6Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C7Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6C94u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6CA4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6CBCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6CCCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6CE4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6CF4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6CFCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D04u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D18u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D28u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D3Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D4Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D60u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D70u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D84u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D94u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6D9Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DA8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DC0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DC8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DCCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DD4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DE0u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DE8u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DF4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6DFCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E04u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E0Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E24u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E2Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E30u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E3Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E48u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E74u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E90u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6E9Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6EA4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6EC4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6ED4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6EE4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6EF4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6EFCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F08u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F30u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F38u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F48u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F5Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F60u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F64u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F78u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F8Cu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6F94u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FACu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FB4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FC4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FCCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FDCu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FE4u, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FECu, &recomp_unit_0482, "recomp_unit_0482");
    runtime.register_function(0x089E6FFCu, &recomp_unit_0482, "recomp_unit_0482");
}
} // namespace psprecomp
