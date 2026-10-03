#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0418[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 9, 0,
    0, 10, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 20, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 26, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0,
    0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0,
    59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 70,
    0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0,
    0, 0, 82, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 104, 0, 105, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0,
    112, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 128, 129, 0, 130, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0,
    144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 148, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176,
    177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 188, 0, 0, 0, 189, 190, 0, 0, 191, 0, 0, 192, 193, 194, 0, 195, 0,
    196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205,
    0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 250,
    0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0,
    257, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267,
};
void recomp_unit_0418_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A6004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0418[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A6004;
    case 2u: goto L_089A6020;
    case 3u: goto L_089A6030;
    case 4u: goto L_089A6038;
    case 5u: goto L_089A6058;
    case 6u: goto L_089A6060;
    case 7u: goto L_089A606C;
    case 8u: goto L_089A6078;
    case 9u: goto L_089A607C;
    case 10u: goto L_089A6088;
    case 11u: goto L_089A6090;
    case 12u: goto L_089A609C;
    case 13u: goto L_089A60A8;
    case 14u: goto L_089A60B4;
    case 15u: goto L_089A60B8;
    case 16u: goto L_089A60C0;
    case 17u: goto L_089A60CC;
    case 18u: goto L_089A60D8;
    case 19u: goto L_089A60E0;
    case 20u: goto L_089A60E4;
    case 21u: goto L_089A60EC;
    case 22u: goto L_089A6104;
    case 23u: goto L_089A6114;
    case 24u: goto L_089A6120;
    case 25u: goto L_089A6130;
    case 26u: goto L_089A6138;
    case 27u: goto L_089A613C;
    case 28u: goto L_089A6144;
    case 29u: goto L_089A6154;
    case 30u: goto L_089A615C;
    case 31u: goto L_089A6164;
    case 32u: goto L_089A6170;
    case 33u: goto L_089A6184;
    case 34u: goto L_089A61A8;
    case 35u: goto L_089A61B4;
    case 36u: goto L_089A61C0;
    case 37u: goto L_089A61D4;
    case 38u: goto L_089A61E0;
    case 39u: goto L_089A61F0;
    case 40u: goto L_089A61F8;
    case 41u: goto L_089A6208;
    case 42u: goto L_089A6214;
    case 43u: goto L_089A621C;
    case 44u: goto L_089A622C;
    case 45u: goto L_089A6238;
    case 46u: goto L_089A623C;
    case 47u: goto L_089A6248;
    case 48u: goto L_089A6254;
    case 49u: goto L_089A626C;
    case 50u: goto L_089A6288;
    case 51u: goto L_089A6290;
    case 52u: goto L_089A629C;
    case 53u: goto L_089A62A8;
    case 54u: goto L_089A62C0;
    case 55u: goto L_089A62CC;
    case 56u: goto L_089A62D8;
    case 57u: goto L_089A62E8;
    case 58u: goto L_089A62F8;
    case 59u: goto L_089A6304;
    case 60u: goto L_089A630C;
    case 61u: goto L_089A6314;
    case 62u: goto L_089A631C;
    case 63u: goto L_089A6324;
    case 64u: goto L_089A6330;
    case 65u: goto L_089A6338;
    case 66u: goto L_089A635C;
    case 67u: goto L_089A6364;
    case 68u: goto L_089A6370;
    case 69u: goto L_089A6378;
    case 70u: goto L_089A6380;
    case 71u: goto L_089A6388;
    case 72u: goto L_089A6390;
    case 73u: goto L_089A6398;
    case 74u: goto L_089A63A0;
    case 75u: goto L_089A63A8;
    case 76u: goto L_089A63B4;
    case 77u: goto L_089A63BC;
    case 78u: goto L_089A63C4;
    case 79u: goto L_089A63E4;
    case 80u: goto L_089A63EC;
    case 81u: goto L_089A63F8;
    case 82u: goto L_089A640C;
    case 83u: goto L_089A6410;
    case 84u: goto L_089A6418;
    case 85u: goto L_089A6420;
    case 86u: goto L_089A6428;
    case 87u: goto L_089A6430;
    case 88u: goto L_089A6438;
    case 89u: goto L_089A6444;
    case 90u: goto L_089A6450;
    case 91u: goto L_089A6458;
    case 92u: goto L_089A6460;
    case 93u: goto L_089A6468;
    case 94u: goto L_089A64A0;
    case 95u: goto L_089A64AC;
    case 96u: goto L_089A64BC;
    case 97u: goto L_089A64C4;
    case 98u: goto L_089A64D8;
    case 99u: goto L_089A64E0;
    case 100u: goto L_089A64E8;
    case 101u: goto L_089A64F0;
    case 102u: goto L_089A64FC;
    case 103u: goto L_089A6514;
    case 104u: goto L_089A651C;
    case 105u: goto L_089A6524;
    case 106u: goto L_089A6528;
    case 107u: goto L_089A6534;
    case 108u: goto L_089A6550;
    case 109u: goto L_089A6560;
    case 110u: goto L_089A6568;
    case 111u: goto L_089A657C;
    case 112u: goto L_089A6584;
    case 113u: goto L_089A658C;
    case 114u: goto L_089A659C;
    case 115u: goto L_089A65A8;
    case 116u: goto L_089A65B0;
    case 117u: goto L_089A65BC;
    case 118u: goto L_089A65C4;
    case 119u: goto L_089A65C8;
    case 120u: goto L_089A65D8;
    case 121u: goto L_089A65E8;
    case 122u: goto L_089A65F8;
    case 123u: goto L_089A6600;
    case 124u: goto L_089A660C;
    case 125u: goto L_089A6638;
    case 126u: goto L_089A6654;
    case 127u: goto L_089A6660;
    case 128u: goto L_089A6664;
    case 129u: goto L_089A6668;
    case 130u: goto L_089A6670;
    case 131u: goto L_089A6680;
    case 132u: goto L_089A668C;
    case 133u: goto L_089A66C8;
    case 134u: goto L_089A66D4;
    case 135u: goto L_089A66F4;
    case 136u: goto L_089A670C;
    case 137u: goto L_089A6718;
    case 138u: goto L_089A6720;
    case 139u: goto L_089A6734;
    case 140u: goto L_089A6740;
    case 141u: goto L_089A6768;
    case 142u: goto L_089A6770;
    case 143u: goto L_089A6778;
    case 144u: goto L_089A6784;
    case 145u: goto L_089A6790;
    case 146u: goto L_089A67A0;
    case 147u: goto L_089A67D0;
    case 148u: goto L_089A67D4;
    case 149u: goto L_089A67D8;
    case 150u: goto L_089A6804;
    case 151u: goto L_089A6810;
    case 152u: goto L_089A681C;
    case 153u: goto L_089A6824;
    case 154u: goto L_089A683C;
    case 155u: goto L_089A6844;
    case 156u: goto L_089A684C;
    case 157u: goto L_089A6854;
    case 158u: goto L_089A6864;
    case 159u: goto L_089A6870;
    case 160u: goto L_089A6878;
    case 161u: goto L_089A6880;
    case 162u: goto L_089A6894;
    case 163u: goto L_089A68A8;
    case 164u: goto L_089A68C4;
    case 165u: goto L_089A68D8;
    case 166u: goto L_089A68E4;
    case 167u: goto L_089A68FC;
    case 168u: goto L_089A6904;
    case 169u: goto L_089A690C;
    case 170u: goto L_089A6914;
    case 171u: goto L_089A695C;
    case 172u: goto L_089A6964;
    case 173u: goto L_089A6970;
    case 174u: goto L_089A69AC;
    case 175u: goto L_089A69F8;
    case 176u: goto L_089A6A00;
    case 177u: goto L_089A6A04;
    case 178u: goto L_089A6A10;
    case 179u: goto L_089A6A2C;
    case 180u: goto L_089A6A34;
    case 181u: goto L_089A6A3C;
    case 182u: goto L_089A6A64;
    case 183u: goto L_089A6A6C;
    case 184u: goto L_089A6A70;
    case 185u: goto L_089A6A94;
    case 186u: goto L_089A6AA0;
    case 187u: goto L_089A6ABC;
    case 188u: goto L_089A6AC0;
    case 189u: goto L_089A6AD0;
    case 190u: goto L_089A6AD4;
    case 191u: goto L_089A6AE0;
    case 192u: goto L_089A6AEC;
    case 193u: goto L_089A6AF0;
    case 194u: goto L_089A6AF4;
    case 195u: goto L_089A6AFC;
    case 196u: goto L_089A6B04;
    case 197u: goto L_089A6B14;
    case 198u: goto L_089A6B1C;
    case 199u: goto L_089A6B24;
    case 200u: goto L_089A6B38;
    case 201u: goto L_089A6B48;
    case 202u: goto L_089A6B64;
    case 203u: goto L_089A6B6C;
    case 204u: goto L_089A6B78;
    case 205u: goto L_089A6B80;
    case 206u: goto L_089A6B88;
    case 207u: goto L_089A6B90;
    case 208u: goto L_089A6B9C;
    case 209u: goto L_089A6BDC;
    case 210u: goto L_089A6BE8;
    case 211u: goto L_089A6C10;
    case 212u: goto L_089A6C34;
    case 213u: goto L_089A6C44;
    case 214u: goto L_089A6C50;
    case 215u: goto L_089A6C7C;
    case 216u: goto L_089A6C84;
    case 217u: goto L_089A6C8C;
    case 218u: goto L_089A6C9C;
    case 219u: goto L_089A6CA8;
    case 220u: goto L_089A6CBC;
    case 221u: goto L_089A6CCC;
    case 222u: goto L_089A6CDC;
    case 223u: goto L_089A6CF8;
    case 224u: goto L_089A6D14;
    case 225u: goto L_089A6D34;
    case 226u: goto L_089A6D44;
    case 227u: goto L_089A6D50;
    case 228u: goto L_089A6D5C;
    case 229u: goto L_089A6D64;
    case 230u: goto L_089A6D70;
    case 231u: goto L_089A6D7C;
    case 232u: goto L_089A6D8C;
    case 233u: goto L_089A6D9C;
    case 234u: goto L_089A6DA4;
    case 235u: goto L_089A6DC8;
    case 236u: goto L_089A6DD8;
    case 237u: goto L_089A6DE0;
    case 238u: goto L_089A6DFC;
    case 239u: goto L_089A6E04;
    case 240u: goto L_089A6E44;
    case 241u: goto L_089A6E4C;
    case 242u: goto L_089A6E68;
    case 243u: goto L_089A6E78;
    case 244u: goto L_089A6E8C;
    case 245u: goto L_089A6EAC;
    case 246u: goto L_089A6EC0;
    case 247u: goto L_089A6ECC;
    case 248u: goto L_089A6EE0;
    case 249u: goto L_089A6EFC;
    case 250u: goto L_089A6F00;
    case 251u: goto L_089A6F14;
    case 252u: goto L_089A6F1C;
    case 253u: goto L_089A6F24;
    case 254u: goto L_089A6F2C;
    case 255u: goto L_089A6F60;
    case 256u: goto L_089A6F6C;
    case 257u: goto L_089A6F84;
    case 258u: goto L_089A6F88;
    case 259u: goto L_089A6F98;
    case 260u: goto L_089A6FA4;
    case 261u: goto L_089A6FB8;
    case 262u: goto L_089A6FC0;
    case 263u: goto L_089A6FC8;
    case 264u: goto L_089A6FD4;
    case 265u: goto L_089A6FE0;
    case 266u: goto L_089A6FEC;
    case 267u: goto L_089A6FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A6004:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (0u | 52014u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A6020u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6020u) goto L_089A6020;
    return;
L_089A6020:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 252u, 0x089A5F10u>(ctx, &aot_mem); return;
      }
      goto L_089A6030;
    }
L_089A6030:
    aot_gpr[17] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
L_089A6038:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (aot_gpr[2] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089A6058u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 3u, 0x08A43020u>(ctx, &aot_mem) && ctx.pc == 0x089A6058u) goto L_089A6058;
    return;
L_089A6058:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6060;
    }
L_089A6060:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A606Cu);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A606Cu) goto L_089A606C;
    return;
L_089A606C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089A60E4;
      }
      goto L_089A6078;
    }
L_089A6078:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089A607C;
L_089A607C:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A6088u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 78u, 0x08A43404u>(ctx, &aot_mem) && ctx.pc == 0x089A6088u) goto L_089A6088;
    return;
L_089A6088:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6090;
    }
L_089A6090:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089A6338;
      }
      goto L_089A609C;
    }
L_089A609C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089A6458;
      }
      goto L_089A60A8;
    }
L_089A60A8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1603) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A63C4;
      }
      goto L_089A60B4;
    }
L_089A60B4:
    aot_gpr[16] = (0u + 0u);
    goto L_089A60B8;
L_089A60B8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_089A63A0;
    }
    goto L_089A60C0;
L_089A60C0:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A60CCu);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A60CCu) goto L_089A60CC;
    return;
L_089A60CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089A60E4;
      }
      goto L_089A60D8;
    }
L_089A60D8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089A607C;
      }
      goto L_089A60E0;
    }
L_089A60E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089A60E4;
L_089A60E4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 248u, 0x089A5EF0u>(ctx, &aot_mem); return;
    }
    goto L_089A60EC;
L_089A60EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          goto L_089A6460;
      }
      goto L_089A6104;
    }
L_089A6104:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (aot_gpr[2] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089A6114u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 87u, 0x08A434A4u>(ctx, &aot_mem) && ctx.pc == 0x089A6114u) goto L_089A6114;
    return;
L_089A6114:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089A613C;
      }
      goto L_089A6120;
    }
L_089A6120:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16264)));
    aot_gpr[31] = (0x089A6130u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 3u, 0x08A43020u>(ctx, &aot_mem) && ctx.pc == 0x089A6130u) goto L_089A6130;
    return;
L_089A6130:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6138;
    }
L_089A6138:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089A613C;
L_089A613C:
    aot_gpr[31] = (0x089A6144u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 256u, 0x08A42EA8u>(ctx, &aot_mem) && ctx.pc == 0x089A6144u) goto L_089A6144;
    return;
L_089A6144:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 248u, 0x089A5EF0u>(ctx, &aot_mem); return;
    }
    goto L_089A6154;
L_089A6154:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089A615C;
L_089A615C:
    aot_gpr[31] = (0x089A6164u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 69u, 0x08A43364u>(ctx, &aot_mem) && ctx.pc == 0x089A6164u) goto L_089A6164;
    return;
L_089A6164:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6170;
    }
L_089A6170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A6184u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A6184u) goto L_089A6184;
    return;
L_089A6184:
    aot_gpr[9] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A61B4;
      }
      goto L_089A61A8;
    }
L_089A61A8:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 0 ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[16] = (aot_gpr[3]);
    goto L_089A61B4;
L_089A61B4:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 247u, 0x089A5EECu>(ctx, &aot_mem); return;
      }
      goto L_089A61C0;
    }
L_089A61C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089A61D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 139u, 0x089A48ACu>(ctx, &aot_mem) && ctx.pc == 0x089A61D4u) goto L_089A61D4;
    return;
L_089A61D4:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A61E0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 47u, 0x08A4323Cu>(ctx, &aot_mem) && ctx.pc == 0x089A61E0u) goto L_089A61E0;
    return;
L_089A61E0:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A61F0;
    }
L_089A61F0:
    aot_gpr[31] = (0x089A61F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 256u, 0x08A42EA8u>(ctx, &aot_mem) && ctx.pc == 0x089A61F8u) goto L_089A61F8;
    return;
L_089A61F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 248u, 0x089A5EF0u>(ctx, &aot_mem); return;
    }
    goto L_089A6208;
L_089A6208:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A615C;
      }
      goto L_089A6214;
    }
L_089A6214:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 248u, 0x089A5EF0u>(ctx, &aot_mem); return;
L_089A621C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(65)));
    aot_gpr[2] = (aot_gpr[2] & 4u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089A623C;
    }
    goto L_089A622C;
L_089A622C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089A6430;
      }
      goto L_089A6238;
    }
L_089A6238:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089A623C;
L_089A623C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 224u, 0x089A5DFCu>(ctx, &aot_mem); return;
    }
    goto L_089A6248;
L_089A6248:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089A6254u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6254u) goto L_089A6254;
    return;
L_089A6254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 224u, 0x089A5DFCu>(ctx, &aot_mem); return;
    }
    goto L_089A626C;
L_089A626C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A6288u);
    aot_gpr[9] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 90u, 0x089A44C8u>(ctx, &aot_mem) && ctx.pc == 0x089A6288u) goto L_089A6288;
    return;
L_089A6288:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6290;
    }
L_089A6290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A629Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A629Cu) goto L_089A629C;
    return;
L_089A629C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 223u, 0x089A5DF8u>(ctx, &aot_mem); return;
    }
    goto L_089A62A8;
L_089A62A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 223u, 0x089A5DF8u>(ctx, &aot_mem); return;
L_089A62C0:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 229u, 0x089A5E30u>(ctx, &aot_mem); return;
L_089A62CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 223u, 0x089A5DF8u>(ctx, &aot_mem); return;
    }
    goto L_089A62D8;
L_089A62D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089A62E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A62E8u) goto L_089A62E8;
    return;
L_089A62E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(201) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 223u, 0x089A5DF8u>(ctx, &aot_mem); return;
    }
    goto L_089A62F8;
L_089A62F8:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A6304u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 97u, 0x089A452Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6304u) goto L_089A6304;
    return;
L_089A6304:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 222u, 0x089A5DF4u>(ctx, &aot_mem); return;
      }
      goto L_089A630C;
    }
L_089A630C:
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 252u, 0x089A5F10u>(ctx, &aot_mem); return;
L_089A6314:
    aot_gpr[31] = (0x089A631Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 200u, 0x089A5C64u>(ctx, &aot_mem) && ctx.pc == 0x089A631Cu) goto L_089A631C;
    return;
L_089A631C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6324;
    }
L_089A6324:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] != aot_gpr[16]) {
    aot_gpr[22] = (aot_gpr[19] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 217u, 0x089A5DB4u>(ctx, &aot_mem); return;
    }
    goto L_089A6330;
L_089A6330:
    aot_gpr[17] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
L_089A6338:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[16] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    if (aot_gpr[3] == 0u) aot_gpr[16] = (aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A635Cu);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 101u, 0x0898E724u>(ctx, &aot_mem) && ctx.pc == 0x089A635Cu) goto L_089A635C;
    return;
L_089A635C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A6364;
    }
L_089A6364:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[16] = (0u + 0u);
        goto L_089A60B8;
    }
    goto L_089A6370;
L_089A6370:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A60B8;
L_089A6378:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 236u, 0x089A5E84u>(ctx, &aot_mem); return;
      }
      goto L_089A6380;
    }
L_089A6380:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 239u, 0x089A5EA8u>(ctx, &aot_mem); return;
L_089A6388:
    aot_gpr[31] = (0x089A6390u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 80u, 0x089A3534u>(ctx, &aot_mem) && ctx.pc == 0x089A6390u) goto L_089A6390;
    return;
L_089A6390:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 241u, 0x089A5EB8u>(ctx, &aot_mem); return;
      }
      goto L_089A6398;
    }
L_089A6398:
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 252u, 0x089A5F10u>(ctx, &aot_mem); return;
L_089A63A0:
    aot_gpr[31] = (0x089A63A8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A63A8u) goto L_089A63A8;
    return;
L_089A63A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089A63B4u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 33u, 0x08A4317Cu>(ctx, &aot_mem) && ctx.pc == 0x089A63B4u) goto L_089A63B4;
    return;
L_089A63B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A60C0;
      }
      goto L_089A63BC;
    }
L_089A63BC:
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 252u, 0x089A5F10u>(ctx, &aot_mem); return;
L_089A63C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1603));
    aot_gpr[31] = (0x089A63E4u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 90u, 0x0898E62Cu>(ctx, &aot_mem) && ctx.pc == 0x089A63E4u) goto L_089A63E4;
    return;
L_089A63E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
      }
      goto L_089A63EC;
    }
L_089A63EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089A60C0;
      }
      goto L_089A63F8;
    }
L_089A63F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6418;
      }
      goto L_089A640C;
    }
L_089A640C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A6410;
L_089A6410:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_089A60C0;
L_089A6418:
    aot_gpr[31] = (0x089A6420u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6420u) goto L_089A6420;
    return;
L_089A6420:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A6410;
      }
      goto L_089A6428;
    }
L_089A6428:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089A60B8;
L_089A6430:
    aot_gpr[31] = (0x089A6438u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 15u, 0x089930CCu>(ctx, &aot_mem) && ctx.pc == 0x089A6438u) goto L_089A6438;
    return;
L_089A6438:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089A623C;
    }
    goto L_089A6444;
L_089A6444:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A6450u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 189u, 0x0899FF24u>(ctx, &aot_mem) && ctx.pc == 0x089A6450u) goto L_089A6450;
    return;
L_089A6450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089A623C;
L_089A6458:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(4));
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
L_089A6460:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 251u, 0x089A5F0Cu>(ctx, &aot_mem); return;
L_089A6468:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089A67D0;
      }
      goto L_089A64A0;
    }
L_089A64A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_089A67D4;
      }
      goto L_089A64AC;
    }
L_089A64AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_089A67D8;
    }
    goto L_089A64BC;
L_089A64BC:
    aot_gpr[31] = (0x089A64C4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089A64C4u) goto L_089A64C4;
    return;
L_089A64C4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089A67D0;
      }
      goto L_089A64D8;
    }
L_089A64D8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_089A67D4;
      }
      goto L_089A64E0;
    }
L_089A64E0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_089A67D8;
      }
      goto L_089A64E8;
    }
L_089A64E8:
    aot_gpr[31] = (0x089A64F0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A64F0u) goto L_089A64F0;
    return;
L_089A64F0:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A64FC;
    }
L_089A64FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_gpr[23] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089A6524;
      }
      goto L_089A6514;
    }
L_089A6514:
    aot_gpr[31] = (0x089A651Cu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089A651Cu) goto L_089A651C;
    return;
L_089A651C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A6528;
      }
      goto L_089A6524;
    }
L_089A6524:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A6528;
L_089A6528:
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(180), aot_gpr[3]);
      if (branch_taken) {
          goto L_089A6804;
      }
      goto L_089A6534;
    }
L_089A6534:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1603));
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(1603) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(1603) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[17] = (aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    if (aot_gpr[5] != 0u) aot_gpr[16] = (aot_gpr[4]);
      if (branch_taken) {
          goto L_089A657C;
      }
      goto L_089A6550;
    }
L_089A6550:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A6560u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 35u, 0x089A3254u>(ctx, &aot_mem) && ctx.pc == 0x089A6560u) goto L_089A6560;
    return;
L_089A6560:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A683C;
      }
      goto L_089A6568;
    }
L_089A6568:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    goto L_089A657C;
L_089A657C:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[22];
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089A6810;
      }
      goto L_089A6584;
    }
L_089A6584:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A67D0;
      }
      goto L_089A658C;
    }
L_089A658C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16268)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A65C8;
      }
      goto L_089A659C;
    }
L_089A659C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16264)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(16264));
      if (branch_taken) {
          goto L_089A65B0;
      }
      goto L_089A65A8;
    }
L_089A65A8:
    aot_gpr[31] = (0x089A65B0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A65B0u) goto L_089A65B0;
    return;
L_089A65B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A65BCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A65BCu) goto L_089A65BC;
    return;
L_089A65BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A65C4;
    }
L_089A65C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16268), aot_gpr[17]);
    goto L_089A65C8;
L_089A65C8:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[31] = (0x089A65D8u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A65D8u) goto L_089A65D8;
    return;
L_089A65D8:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_089A6880;
      }
      goto L_089A65E8;
    }
L_089A65E8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x089A65F8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A65F8u) goto L_089A65F8;
    return;
L_089A65F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A6600;
    }
L_089A6600:
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[20] + static_cast<std::uint32_t>(80));
    goto L_089A660C;
L_089A660C:
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
          goto L_089A660C;
      }
      goto L_089A6638;
    }
L_089A6638:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
        goto L_089A6664;
    }
    goto L_089A6654;
L_089A6654:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6844;
      }
      goto L_089A6660;
    }
L_089A6660:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
    goto L_089A6664;
L_089A6664:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), 0u);
    goto L_089A6668;
L_089A6668:
    aot_gpr[31] = (0x089A6670u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089A6670u) goto L_089A6670;
    return;
L_089A6670:
    aot_gpr[18] = (aot_gpr[17] + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    goto L_089A6680;
L_089A6680:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6718;
      }
      goto L_089A668C;
    }
L_089A668C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(140), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(164), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(128), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(132), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(136), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(184), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A66C8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A66C8u) goto L_089A66C8;
    return;
L_089A66C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A66D4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A66D4u) goto L_089A66D4;
    return;
L_089A66D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A66F4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A66F4u) goto L_089A66F4;
    return;
L_089A66F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A670Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 227u, 0x08A42CC8u>(ctx, &aot_mem) && ctx.pc == 0x089A670Cu) goto L_089A670C;
    return;
L_089A670C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A6718u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 227u, 0x08A42CC8u>(ctx, &aot_mem) && ctx.pc == 0x089A6718u) goto L_089A6718;
    return;
L_089A6718:
    if (aot_gpr[19] != aot_gpr[21]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
        goto L_089A6680;
    }
    goto L_089A6720;
L_089A6720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A6778;
      }
      goto L_089A6734;
    }
L_089A6734:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1603));
      if (branch_taken) {
          goto L_089A6904;
      }
      goto L_089A6740;
    }
L_089A6740:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089A6768u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089A6768u) goto L_089A6768;
    return;
L_089A6768:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A6770;
    }
L_089A6770:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089A6778;
L_089A6778:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
        goto L_089A690C;
    }
    goto L_089A6784;
L_089A6784:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A6790;
    }
L_089A6790:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A6870;
      }
      goto L_089A67A0;
    }
L_089A67A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A67D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_089A67D4;
L_089A67D4:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_089A67D8;
L_089A67D8:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6804:
    aot_gpr[16] = (aot_gpr[16] >> 1u);
    aot_gpr[17] = (aot_gpr[17] >> 1u);
    goto L_089A6534;
L_089A6810:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A681Cu);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 35u, 0x089A3254u>(ctx, &aot_mem) && ctx.pc == 0x089A681Cu) goto L_089A681C;
    return;
L_089A681C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A683C;
      }
      goto L_089A6824;
    }
L_089A6824:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    goto L_089A6584;
L_089A683C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(100));
    goto L_089A67A0;
L_089A6844:
    aot_gpr[31] = (0x089A684Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A684Cu) goto L_089A684C;
    return;
L_089A684C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A6854;
    }
L_089A6854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x089A6864u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A6864u) goto L_089A6864;
    return;
L_089A6864:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    goto L_089A6668;
L_089A6870:
    aot_gpr[31] = (0x089A6878u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 200u, 0x089A5C64u>(ctx, &aot_mem) && ctx.pc == 0x089A6878u) goto L_089A6878;
    return;
L_089A6878:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_089A67A0;
L_089A6880:
    aot_gpr[16] = (aot_gpr[21] + 0u);
    aot_gpr[16] = ((aot_gpr[16] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6894u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6894u) goto L_089A6894;
    return;
L_089A6894:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A68A8u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68A8u) goto L_089A68A8;
    return;
L_089A68A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1536));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A68C4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68C4u) goto L_089A68C4;
    return;
L_089A68C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A68D8u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68D8u) goto L_089A68D8;
    return;
L_089A68D8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089A68E4u);
    aot_gpr[5] = (0u | 65535u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68E4u) goto L_089A68E4;
    return;
L_089A68E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(184), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A68FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68FCu) goto L_089A68FC;
    return;
L_089A68FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(188), aot_gpr[2]);
    goto L_089A65E8;
L_089A6904:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A67A0;
L_089A690C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A6904;
      }
      goto L_089A6914;
    }
L_089A6914:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A695Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089A695Cu) goto L_089A695C;
    return;
L_089A695C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A67A0;
      }
      goto L_089A6964;
    }
L_089A6964:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), aot_gpr[16]);
    goto L_089A6784;
L_089A6970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[21]);
    aot_gpr[31] = (0x089A69ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A69ACu) goto L_089A69AC;
    return;
L_089A69AC:
    aot_gpr[3] = (20971u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] | 34079u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[6]) * static_cast<std::uint64_t>(aot_gpr[3]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] >> 5u);
    aot_gpr[5] = (aot_gpr[3] << 4u);
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[3] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[2] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[3] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_089A6A00;
      }
      goto L_089A69F8;
    }
L_089A69F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A6A64;
      }
      goto L_089A6A00;
    }
L_089A6A00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_089A6A04;
L_089A6A04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A6C50;
      }
      goto L_089A6A10;
    }
L_089A6A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A6A2Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6A2Cu) goto L_089A6A2C;
    return;
L_089A6A2C:
    aot_gpr[31] = (0x089A6A34u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A6A34u) goto L_089A6A34;
    return;
L_089A6A34:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A6C50;
      }
      goto L_089A6A3C;
    }
L_089A6A3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6A64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(13) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A6B78;
      }
      goto L_089A6A6C;
    }
L_089A6A6C:
    aot_gpr[3] = (aot_gpr[4] << 4u);
    goto L_089A6A70;
L_089A6A70:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A6D64;
      }
      goto L_089A6A94;
    }
L_089A6A94:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A6AA0;
L_089A6AA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A6DE0;
      }
      goto L_089A6ABC;
    }
L_089A6ABC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089A6AC0;
L_089A6AC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] & 512u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A6C9C;
      }
      goto L_089A6AD0;
    }
L_089A6AD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    goto L_089A6AD4;
L_089A6AD4:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[2] == aot_gpr[21]) {
    aot_gpr[16] = (2217u << 16u);
        goto L_089A6DA4;
    }
    goto L_089A6AE0;
L_089A6AE0:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A6B88;
      }
      goto L_089A6AEC;
    }
L_089A6AEC:
    aot_gpr[3] = (0u + 0u);
    goto L_089A6AF0;
L_089A6AF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    goto L_089A6AF4;
L_089A6AF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6C7C;
      }
      goto L_089A6AFC;
    }
L_089A6AFC:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_089A6C7C;
      }
      goto L_089A6B04;
    }
L_089A6B04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_089A6B24;
      }
      goto L_089A6B14;
    }
L_089A6B14:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A6B24;
      }
      goto L_089A6B1C;
    }
L_089A6B1C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u | 52019u);
      if (branch_taken) {
          goto L_089A6A3C;
      }
      goto L_089A6B24;
    }
L_089A6B24:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(152));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[31] = (0x089A6B38u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089A6B38u) goto L_089A6B38;
    return;
L_089A6B38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A6B48u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 25u, 0x089902D4u>(ctx, &aot_mem) && ctx.pc == 0x089A6B48u) goto L_089A6B48;
    return;
L_089A6B48:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(18));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089A6B64u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 90u, 0x089A44C8u>(ctx, &aot_mem) && ctx.pc == 0x089A6B64u) goto L_089A6B64;
    return;
L_089A6B64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A6A3C;
      }
      goto L_089A6B6C;
    }
L_089A6B6C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A6A3C;
L_089A6B78:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[4] << 4u);
        goto L_089A6A70;
    }
    goto L_089A6B80;
L_089A6B80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_089A6A04;
L_089A6B88:
    aot_gpr[31] = (0x089A6B90u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A6B90u) goto L_089A6B90;
    return;
L_089A6B90:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6AEC;
      }
      goto L_089A6B9C;
    }
L_089A6B9C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[7];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A6AF0;
      }
      goto L_089A6BDC;
    }
L_089A6BDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    if (aot_gpr[2] != aot_gpr[21]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
        goto L_089A6AF4;
    }
    goto L_089A6BE8;
L_089A6BE8:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089A6C10u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6C10u) goto L_089A6C10;
    return;
L_089A6C10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6C34u);
    aot_gpr[5] = (0u | 65535u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6C34u) goto L_089A6C34;
    return;
L_089A6C34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6C44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6C44u) goto L_089A6C44;
    return;
L_089A6C44:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(188), aot_gpr[2]);
    goto L_089A6AF0;
L_089A6C50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6C7C:
    aot_gpr[31] = (0x089A6C84u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 111u, 0x089A466Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6C84u) goto L_089A6C84;
    return;
L_089A6C84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A6A3C;
      }
      goto L_089A6C8C;
    }
L_089A6C8C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A6A3C;
L_089A6C9C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A6CA8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A6CA8u) goto L_089A6CA8;
    return;
L_089A6CA8:
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089A6AD0;
      }
      goto L_089A6CBC;
    }
L_089A6CBC:
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
        goto L_089A6AD4;
    }
    goto L_089A6CCC;
L_089A6CCC:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2788)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2202u << 16u);
      if (branch_taken) {
          goto L_089A6AD0;
      }
      goto L_089A6CDC;
    }
L_089A6CDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (2202u << 16u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12708));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12748));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6CF8u);
    aot_gpr[4] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6CF8u) goto L_089A6CF8;
    return;
L_089A6CF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2788)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6D14u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6D14u) goto L_089A6D14;
    return;
L_089A6D14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2788)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (aot_gpr[20] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6D34u);
    aot_gpr[20] = (aot_gpr[3] & 65535u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6D34u) goto L_089A6D34;
    return;
L_089A6D34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2788)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6D44u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6D44u) goto L_089A6D44;
    return;
L_089A6D44:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2788)));
      if (branch_taken) {
          goto L_089A6D7C;
      }
      goto L_089A6D50;
    }
L_089A6D50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6D5Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6D5Cu) goto L_089A6D5C;
    return;
L_089A6D5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    goto L_089A6AD4;
L_089A6D64:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A6D70u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A6D70u) goto L_089A6D70;
    return;
L_089A6D70:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(4));
    goto L_089A6AA0;
L_089A6D7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6D8Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6D8Cu) goto L_089A6D8C;
    return;
L_089A6D8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2788)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6D9Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6D9Cu) goto L_089A6D9C;
    return;
L_089A6D9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    goto L_089A6AD4;
L_089A6DA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[5] = (0u | 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6DC8u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6DC8u) goto L_089A6DC8;
    return;
L_089A6DC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6DD8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6DD8u) goto L_089A6DD8;
    return;
L_089A6DD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(188), aot_gpr[2]);
    goto L_089A6AE0;
L_089A6DE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A6DFCu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6DFCu) goto L_089A6DFC;
    return;
L_089A6DFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089A6AC0;
L_089A6E04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[31] = (0x089A6E44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A6E44u) goto L_089A6E44;
    return;
L_089A6E44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A6F2C;
      }
      goto L_089A6E4C;
    }
L_089A6E4C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[20] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[23] = (0u + 0u);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
    goto L_089A6E68;
L_089A6E68:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6EC0;
      }
      goto L_089A6E78;
    }
L_089A6E78:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A6E8Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x089A6E8Cu) goto L_089A6E8C;
    return;
L_089A6E8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[31] = (0x089A6EACu);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x089A6EACu) goto L_089A6EAC;
    return;
L_089A6EAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[4]);
    goto L_089A6EC0;
L_089A6EC0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[18] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
        goto L_089A6E68;
    }
    goto L_089A6ECC;
L_089A6ECC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[21]);
      if (branch_taken) {
          goto L_089A6F60;
      }
      goto L_089A6EE0;
    }
L_089A6EE0:
    aot_gpr[4] = (aot_gpr[19] << 4u);
    aot_gpr[2] = (aot_gpr[19] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[20] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089A6F00;
      }
      goto L_089A6EFC;
    }
L_089A6EFC:
    rt.unsupported(0x089A6EFCu, 0x000001CDu, "special? not lowered yet"); return;
L_089A6F00:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A6F1C;
      }
      goto L_089A6F14;
    }
L_089A6F14:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089A6F1C;
L_089A6F1C:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[4] = (aot_gpr[21] << 4u);
      if (branch_taken) {
          goto L_089A6F6C;
      }
      goto L_089A6F24;
    }
L_089A6F24:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (0u | 52000u);
    goto L_089A6F2C;
L_089A6F2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6F60:
    aot_gpr[5] = (0u | 52000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), 0u);
    goto L_089A6F1C;
L_089A6F6C:
    aot_gpr[2] = (aot_gpr[21] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[23] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089A6F88;
      }
      goto L_089A6F84;
    }
L_089A6F84:
    rt.unsupported(0x089A6F84u, 0x000001CDu, "special? not lowered yet"); return;
L_089A6F88:
    aot_gpr[2] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A6F2C;
      }
      goto L_089A6F98;
    }
L_089A6F98:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089A6F2C;
L_089A6FA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_089A6FC0;
      }
      goto L_089A6FB8;
    }
L_089A6FB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6FC0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FB8;
      }
      goto L_089A6FC8;
    }
L_089A6FC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 80u);
      if (branch_taken) {
          goto L_089A6FB8;
      }
      goto L_089A6FD4;
    }
L_089A6FD4:
    if (aot_gpr[5] == 0u) aot_gpr[4] = (aot_gpr[6]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6FE0:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    goto L_089A6FEC;
L_089A6FEC:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 1u, 0x089A7000u>(ctx, &aot_mem); return;
      }
      goto L_089A6FF8;
    }
L_089A6FF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    ctx.pc = 0x089A7000u; return;
}

void recomp_unit_0418(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0418_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_418(Runtime &runtime) {
    runtime.register_generated_unit(418u, 0x089A6000u, 4096u, &recomp_unit_0418, &recomp_unit_0418_entry);
    runtime.register_function(0x089A6004u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6020u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6030u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6038u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6058u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6060u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A606Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6078u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A607Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6088u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6090u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A609Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60A8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60B4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60B8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60C0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60CCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60D8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60E0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60E4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A60ECu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6104u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6114u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6120u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6130u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6138u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A613Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6144u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6154u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A615Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6164u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6170u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6184u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61A8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61B4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61C0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61D4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61E0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61F0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A61F8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6208u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6214u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A621Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A622Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6238u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A623Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6248u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6254u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A626Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6288u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6290u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A629Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A62A8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A62C0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A62CCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A62D8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A62E8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A62F8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6304u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A630Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6314u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A631Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6324u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6330u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6338u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A635Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6364u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6370u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6378u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6380u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6388u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6390u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6398u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63A0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63A8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63B4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63BCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63C4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63E4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63ECu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A63F8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A640Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6410u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6418u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6420u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6428u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6430u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6438u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6444u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6450u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6458u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6460u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6468u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64A0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64ACu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64BCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64C4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64D8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64E0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64E8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64F0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A64FCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6514u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A651Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6524u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6528u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6534u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6550u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6560u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6568u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A657Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6584u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A658Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A659Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65A8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65B0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65BCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65C4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65C8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65D8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65E8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A65F8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6600u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A660Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6638u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6654u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6660u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6664u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6668u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6670u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6680u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A668Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A66C8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A66D4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A66F4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A670Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6718u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6720u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6734u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6740u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6768u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6770u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6778u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6784u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6790u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A67A0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A67D0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A67D4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A67D8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6804u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6810u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A681Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6824u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A683Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6844u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A684Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6854u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6864u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6870u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6878u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6880u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6894u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A68A8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A68C4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A68D8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A68E4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A68FCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6904u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A690Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6914u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A695Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6964u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6970u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A69ACu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A69F8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A00u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A04u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A10u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A2Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A34u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A3Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A64u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A6Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A70u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6A94u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AA0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6ABCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AC0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AD0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AD4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AE0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AECu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AF0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AF4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6AFCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B04u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B14u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B1Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B24u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B38u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B48u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B64u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B6Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B78u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B80u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B88u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B90u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6B9Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6BDCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6BE8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C10u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C34u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C44u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C50u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C7Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C84u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C8Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6C9Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6CA8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6CBCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6CCCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6CDCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6CF8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D14u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D34u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D44u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D50u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D5Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D64u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D70u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D7Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D8Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6D9Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6DA4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6DC8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6DD8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6DE0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6DFCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6E04u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6E44u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6E4Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6E68u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6E78u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6E8Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6EACu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6EC0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6ECCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6EE0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6EFCu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F00u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F14u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F1Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F24u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F2Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F60u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F6Cu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F84u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F88u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6F98u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FA4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FB8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FC0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FC8u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FD4u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FE0u, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FECu, &recomp_unit_0418, "recomp_unit_0418");
    runtime.register_function(0x089A6FF8u, &recomp_unit_0418, "recomp_unit_0418");
}
} // namespace psprecomp
