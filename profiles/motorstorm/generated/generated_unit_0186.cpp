#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0186[1020] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 7, 0, 8, 9, 0, 10, 0, 11, 12,
    0, 13, 0, 14, 15, 0, 16, 0, 17, 18, 0, 19, 0, 20, 21, 0, 22, 0, 23, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26,
    0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0,
    38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0,
    0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0,
    61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74,
    0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98,
    0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0,
    112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0,
    122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136,
    0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0,
    151, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 171, 0, 172, 0, 0, 173, 174, 0, 175, 0, 0, 176, 177, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 179, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    226, 0, 227, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259,
};
void recomp_unit_0186_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088BE000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0186[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BE000;
    case 2u: goto L_088BE014;
    case 3u: goto L_088BE028;
    case 4u: goto L_088BE048;
    case 5u: goto L_088BE050;
    case 6u: goto L_088BE054;
    case 7u: goto L_088BE05C;
    case 8u: goto L_088BE064;
    case 9u: goto L_088BE068;
    case 10u: goto L_088BE070;
    case 11u: goto L_088BE078;
    case 12u: goto L_088BE07C;
    case 13u: goto L_088BE084;
    case 14u: goto L_088BE08C;
    case 15u: goto L_088BE090;
    case 16u: goto L_088BE098;
    case 17u: goto L_088BE0A0;
    case 18u: goto L_088BE0A4;
    case 19u: goto L_088BE0AC;
    case 20u: goto L_088BE0B4;
    case 21u: goto L_088BE0B8;
    case 22u: goto L_088BE0C0;
    case 23u: goto L_088BE0C8;
    case 24u: goto L_088BE0CC;
    case 25u: goto L_088BE0E4;
    case 26u: goto L_088BE0FC;
    case 27u: goto L_088BE104;
    case 28u: goto L_088BE10C;
    case 29u: goto L_088BE114;
    case 30u: goto L_088BE128;
    case 31u: goto L_088BE130;
    case 32u: goto L_088BE138;
    case 33u: goto L_088BE140;
    case 34u: goto L_088BE154;
    case 35u: goto L_088BE15C;
    case 36u: goto L_088BE164;
    case 37u: goto L_088BE16C;
    case 38u: goto L_088BE180;
    case 39u: goto L_088BE188;
    case 40u: goto L_088BE190;
    case 41u: goto L_088BE198;
    case 42u: goto L_088BE1AC;
    case 43u: goto L_088BE1BC;
    case 44u: goto L_088BE1D4;
    case 45u: goto L_088BE1DC;
    case 46u: goto L_088BE1E4;
    case 47u: goto L_088BE1F8;
    case 48u: goto L_088BE208;
    case 49u: goto L_088BE214;
    case 50u: goto L_088BE220;
    case 51u: goto L_088BE228;
    case 52u: goto L_088BE230;
    case 53u: goto L_088BE238;
    case 54u: goto L_088BE240;
    case 55u: goto L_088BE248;
    case 56u: goto L_088BE258;
    case 57u: goto L_088BE260;
    case 58u: goto L_088BE268;
    case 59u: goto L_088BE270;
    case 60u: goto L_088BE278;
    case 61u: goto L_088BE280;
    case 62u: goto L_088BE288;
    case 63u: goto L_088BE298;
    case 64u: goto L_088BE2A0;
    case 65u: goto L_088BE2AC;
    case 66u: goto L_088BE2B4;
    case 67u: goto L_088BE2BC;
    case 68u: goto L_088BE2C4;
    case 69u: goto L_088BE2CC;
    case 70u: goto L_088BE2D4;
    case 71u: goto L_088BE2DC;
    case 72u: goto L_088BE2EC;
    case 73u: goto L_088BE2F4;
    case 74u: goto L_088BE2FC;
    case 75u: goto L_088BE304;
    case 76u: goto L_088BE30C;
    case 77u: goto L_088BE314;
    case 78u: goto L_088BE31C;
    case 79u: goto L_088BE32C;
    case 80u: goto L_088BE33C;
    case 81u: goto L_088BE34C;
    case 82u: goto L_088BE35C;
    case 83u: goto L_088BE36C;
    case 84u: goto L_088BE374;
    case 85u: goto L_088BE384;
    case 86u: goto L_088BE390;
    case 87u: goto L_088BE39C;
    case 88u: goto L_088BE3A4;
    case 89u: goto L_088BE3AC;
    case 90u: goto L_088BE3B4;
    case 91u: goto L_088BE3BC;
    case 92u: goto L_088BE3C4;
    case 93u: goto L_088BE3D4;
    case 94u: goto L_088BE3DC;
    case 95u: goto L_088BE3E4;
    case 96u: goto L_088BE3EC;
    case 97u: goto L_088BE3F4;
    case 98u: goto L_088BE3FC;
    case 99u: goto L_088BE404;
    case 100u: goto L_088BE414;
    case 101u: goto L_088BE41C;
    case 102u: goto L_088BE428;
    case 103u: goto L_088BE430;
    case 104u: goto L_088BE438;
    case 105u: goto L_088BE440;
    case 106u: goto L_088BE448;
    case 107u: goto L_088BE450;
    case 108u: goto L_088BE458;
    case 109u: goto L_088BE468;
    case 110u: goto L_088BE470;
    case 111u: goto L_088BE478;
    case 112u: goto L_088BE480;
    case 113u: goto L_088BE488;
    case 114u: goto L_088BE490;
    case 115u: goto L_088BE498;
    case 116u: goto L_088BE4A8;
    case 117u: goto L_088BE4B8;
    case 118u: goto L_088BE4C8;
    case 119u: goto L_088BE4D8;
    case 120u: goto L_088BE4E8;
    case 121u: goto L_088BE4F0;
    case 122u: goto L_088BE500;
    case 123u: goto L_088BE50C;
    case 124u: goto L_088BE518;
    case 125u: goto L_088BE520;
    case 126u: goto L_088BE528;
    case 127u: goto L_088BE530;
    case 128u: goto L_088BE538;
    case 129u: goto L_088BE540;
    case 130u: goto L_088BE54C;
    case 131u: goto L_088BE554;
    case 132u: goto L_088BE55C;
    case 133u: goto L_088BE564;
    case 134u: goto L_088BE56C;
    case 135u: goto L_088BE574;
    case 136u: goto L_088BE57C;
    case 137u: goto L_088BE588;
    case 138u: goto L_088BE590;
    case 139u: goto L_088BE59C;
    case 140u: goto L_088BE5A4;
    case 141u: goto L_088BE5AC;
    case 142u: goto L_088BE5B4;
    case 143u: goto L_088BE5BC;
    case 144u: goto L_088BE5C4;
    case 145u: goto L_088BE5CC;
    case 146u: goto L_088BE5D8;
    case 147u: goto L_088BE5E0;
    case 148u: goto L_088BE5E8;
    case 149u: goto L_088BE5F0;
    case 150u: goto L_088BE5F8;
    case 151u: goto L_088BE600;
    case 152u: goto L_088BE608;
    case 153u: goto L_088BE614;
    case 154u: goto L_088BE620;
    case 155u: goto L_088BE62C;
    case 156u: goto L_088BE638;
    case 157u: goto L_088BE644;
    case 158u: goto L_088BE648;
    case 159u: goto L_088BE650;
    case 160u: goto L_088BE670;
    case 161u: goto L_088BE68C;
    case 162u: goto L_088BE6A4;
    case 163u: goto L_088BE6B0;
    case 164u: goto L_088BE6BC;
    case 165u: goto L_088BE6DC;
    case 166u: goto L_088BE6F0;
    case 167u: goto L_088BE70C;
    case 168u: goto L_088BE720;
    case 169u: goto L_088BE730;
    case 170u: goto L_088BE738;
    case 171u: goto L_088BE73C;
    case 172u: goto L_088BE744;
    case 173u: goto L_088BE750;
    case 174u: goto L_088BE754;
    case 175u: goto L_088BE75C;
    case 176u: goto L_088BE768;
    case 177u: goto L_088BE76C;
    case 178u: goto L_088BE784;
    case 179u: goto L_088BE798;
    case 180u: goto L_088BE79C;
    case 181u: goto L_088BE7A8;
    case 182u: goto L_088BE7B8;
    case 183u: goto L_088BE7C0;
    case 184u: goto L_088BE7C8;
    case 185u: goto L_088BE7CC;
    case 186u: goto L_088BE7D4;
    case 187u: goto L_088BE84C;
    case 188u: goto L_088BE850;
    case 189u: goto L_088BE864;
    case 190u: goto L_088BE878;
    case 191u: goto L_088BE8B0;
    case 192u: goto L_088BE8C0;
    case 193u: goto L_088BE8D4;
    case 194u: goto L_088BE908;
    case 195u: goto L_088BE9A0;
    case 196u: goto L_088BE9A8;
    case 197u: goto L_088BE9D8;
    case 198u: goto L_088BE9E4;
    case 199u: goto L_088BE9F8;
    case 200u: goto L_088BEA00;
    case 201u: goto L_088BEA04;
    case 202u: goto L_088BEA30;
    case 203u: goto L_088BEA3C;
    case 204u: goto L_088BEA70;
    case 205u: goto L_088BEA80;
    case 206u: goto L_088BEA94;
    case 207u: goto L_088BEA9C;
    case 208u: goto L_088BEADC;
    case 209u: goto L_088BEB14;
    case 210u: goto L_088BEB74;
    case 211u: goto L_088BEB7C;
    case 212u: goto L_088BEBA8;
    case 213u: goto L_088BEBB4;
    case 214u: goto L_088BEBBC;
    case 215u: goto L_088BEBE8;
    case 216u: goto L_088BEBF0;
    case 217u: goto L_088BEC04;
    case 218u: goto L_088BEC38;
    case 219u: goto L_088BEC58;
    case 220u: goto L_088BEC74;
    case 221u: goto L_088BEC8C;
    case 222u: goto L_088BEC98;
    case 223u: goto L_088BECB8;
    case 224u: goto L_088BECCC;
    case 225u: goto L_088BECE8;
    case 226u: goto L_088BED00;
    case 227u: goto L_088BED08;
    case 228u: goto L_088BED0C;
    case 229u: goto L_088BED24;
    case 230u: goto L_088BED40;
    case 231u: goto L_088BED50;
    case 232u: goto L_088BED58;
    case 233u: goto L_088BED78;
    case 234u: goto L_088BED94;
    case 235u: goto L_088BEDAC;
    case 236u: goto L_088BEDB8;
    case 237u: goto L_088BEDC4;
    case 238u: goto L_088BEDD8;
    case 239u: goto L_088BEDEC;
    case 240u: goto L_088BEE04;
    case 241u: goto L_088BEE20;
    case 242u: goto L_088BEE38;
    case 243u: goto L_088BEE44;
    case 244u: goto L_088BEE64;
    case 245u: goto L_088BEE78;
    case 246u: goto L_088BEE84;
    case 247u: goto L_088BEEA4;
    case 248u: goto L_088BEECC;
    case 249u: goto L_088BEED4;
    case 250u: goto L_088BEEEC;
    case 251u: goto L_088BEF0C;
    case 252u: goto L_088BEF20;
    case 253u: goto L_088BEF2C;
    case 254u: goto L_088BEF3C;
    case 255u: goto L_088BEF84;
    case 256u: goto L_088BEF90;
    case 257u: goto L_088BEFAC;
    case 258u: goto L_088BEFE4;
    case 259u: goto L_088BEFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BE000:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3416));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(168));
    goto L_088BE014;
L_088BE014:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BE014;
      }
      goto L_088BE028;
    }
L_088BE028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_088BE054;
      }
      goto L_088BE048;
    }
L_088BE048:
    aot_gpr[31] = (0x088BE050u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 91u, 0x08A50874u>(ctx, &aot_mem) && ctx.pc == 0x088BE050u) goto L_088BE050;
    return;
L_088BE050:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    goto L_088BE054;
L_088BE054:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088BE068;
      }
      goto L_088BE05C;
    }
L_088BE05C:
    aot_gpr[31] = (0x088BE064u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 92u, 0x08A5087Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE064u) goto L_088BE064;
    return;
L_088BE064:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_088BE068;
L_088BE068:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088BE07C;
      }
      goto L_088BE070;
    }
L_088BE070:
    aot_gpr[31] = (0x088BE078u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 92u, 0x08A5087Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE078u) goto L_088BE078;
    return;
L_088BE078:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    goto L_088BE07C;
L_088BE07C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088BE090;
      }
      goto L_088BE084;
    }
L_088BE084:
    aot_gpr[31] = (0x088BE08Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 93u, 0x08A50884u>(ctx, &aot_mem) && ctx.pc == 0x088BE08Cu) goto L_088BE08C;
    return;
L_088BE08C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    goto L_088BE090;
L_088BE090:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088BE0A4;
      }
      goto L_088BE098;
    }
L_088BE098:
    aot_gpr[31] = (0x088BE0A0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 94u, 0x08A5088Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE0A0u) goto L_088BE0A0;
    return;
L_088BE0A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    goto L_088BE0A4;
L_088BE0A4:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_088BE0B8;
      }
      goto L_088BE0AC;
    }
L_088BE0AC:
    aot_gpr[31] = (0x088BE0B4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 94u, 0x08A5088Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE0B4u) goto L_088BE0B4;
    return;
L_088BE0B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    goto L_088BE0B8;
L_088BE0B8:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[4] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_088BE0CC;
      }
      goto L_088BE0C0;
    }
L_088BE0C0:
    aot_gpr[31] = (0x088BE0C8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 95u, 0x08A50894u>(ctx, &aot_mem) && ctx.pc == 0x088BE0C8u) goto L_088BE0C8;
    return;
L_088BE0C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), aot_gpr[2]);
    goto L_088BE0CC;
L_088BE0CC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE0E4:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088BE10C;
      }
      goto L_088BE0FC;
    }
L_088BE0FC:
    if (aot_gpr[7] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
        goto L_088BE114;
    }
    goto L_088BE104;
L_088BE104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE128;
      }
      goto L_088BE10C;
    }
L_088BE10C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE114;
    }
L_088BE114:
    aot_gpr[8] = (aot_gpr[8] & 2u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE138;
      }
      goto L_088BE128;
    }
L_088BE128:
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
        goto L_088BE140;
    }
    goto L_088BE130;
L_088BE130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE154;
      }
      goto L_088BE138;
    }
L_088BE138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE140;
    }
L_088BE140:
    aot_gpr[7] = (aot_gpr[7] & 4096u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE164;
      }
      goto L_088BE154;
    }
L_088BE154:
    if (aot_gpr[5] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
        goto L_088BE16C;
    }
    goto L_088BE15C;
L_088BE15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE180;
      }
      goto L_088BE164;
    }
L_088BE164:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE16C;
    }
L_088BE16C:
    aot_gpr[7] = (aot_gpr[7] & 16384u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE190;
      }
      goto L_088BE180;
    }
L_088BE180:
    if (aot_gpr[5] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
        goto L_088BE198;
    }
    goto L_088BE188;
L_088BE188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE1BC;
      }
      goto L_088BE190;
    }
L_088BE190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE198;
    }
L_088BE198:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28140)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE1DC;
      }
      goto L_088BE1AC;
    }
L_088BE1AC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE1DC;
      }
      goto L_088BE1BC;
    }
L_088BE1BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    aot_gpr[7] = (aot_gpr[5] & 2048u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE1E4;
      }
      goto L_088BE1D4;
    }
L_088BE1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE4F0;
      }
      goto L_088BE1DC;
    }
L_088BE1DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE1E4;
    }
L_088BE1E4:
    aot_gpr[5] = (aot_gpr[5] & 4096u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE374;
      }
      goto L_088BE1F8;
    }
L_088BE1F8:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 19001 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE298;
      }
      goto L_088BE208;
    }
L_088BE208:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 12000u);
      if (branch_taken) {
          goto L_088BE258;
      }
      goto L_088BE214;
    }
L_088BE214:
    aot_gpr[6] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 5000u);
      if (branch_taken) {
          goto L_088BE32C;
      }
      goto L_088BE220;
    }
L_088BE220:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 4000u);
      if (branch_taken) {
          goto L_088BE32C;
      }
      goto L_088BE228;
    }
L_088BE228:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 3000u);
      if (branch_taken) {
          goto L_088BE32C;
      }
      goto L_088BE230;
    }
L_088BE230:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 2000u);
      if (branch_taken) {
          goto L_088BE248;
      }
      goto L_088BE238;
    }
L_088BE238:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 1000u);
      if (branch_taken) {
          goto L_088BE248;
      }
      goto L_088BE240;
    }
L_088BE240:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE36C;
      }
      goto L_088BE248;
    }
L_088BE248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE258;
    }
L_088BE258:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 11000u);
      if (branch_taken) {
          goto L_088BE33C;
      }
      goto L_088BE260;
    }
L_088BE260:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 10000u);
      if (branch_taken) {
          goto L_088BE33C;
      }
      goto L_088BE268;
    }
L_088BE268:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 9000u);
      if (branch_taken) {
          goto L_088BE33C;
      }
      goto L_088BE270;
    }
L_088BE270:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 8000u);
      if (branch_taken) {
          goto L_088BE288;
      }
      goto L_088BE278;
    }
L_088BE278:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 7000u);
      if (branch_taken) {
          goto L_088BE288;
      }
      goto L_088BE280;
    }
L_088BE280:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE36C;
      }
      goto L_088BE288;
    }
L_088BE288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE298;
    }
L_088BE298:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 25000u);
      if (branch_taken) {
          goto L_088BE2EC;
      }
      goto L_088BE2A0;
    }
L_088BE2A0:
    aot_gpr[6] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 18000u);
      if (branch_taken) {
          goto L_088BE31C;
      }
      goto L_088BE2AC;
    }
L_088BE2AC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 17000u);
      if (branch_taken) {
          goto L_088BE34C;
      }
      goto L_088BE2B4;
    }
L_088BE2B4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 16000u);
      if (branch_taken) {
          goto L_088BE34C;
      }
      goto L_088BE2BC;
    }
L_088BE2BC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 15000u);
      if (branch_taken) {
          goto L_088BE34C;
      }
      goto L_088BE2C4;
    }
L_088BE2C4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 14000u);
      if (branch_taken) {
          goto L_088BE2DC;
      }
      goto L_088BE2CC;
    }
L_088BE2CC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 13000u);
      if (branch_taken) {
          goto L_088BE2DC;
      }
      goto L_088BE2D4;
    }
L_088BE2D4:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE36C;
      }
      goto L_088BE2DC;
    }
L_088BE2DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 128u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE2EC;
    }
L_088BE2EC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 24000u);
      if (branch_taken) {
          goto L_088BE2DC;
      }
      goto L_088BE2F4;
    }
L_088BE2F4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 23000u);
      if (branch_taken) {
          goto L_088BE35C;
      }
      goto L_088BE2FC;
    }
L_088BE2FC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 22000u);
      if (branch_taken) {
          goto L_088BE35C;
      }
      goto L_088BE304;
    }
L_088BE304:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 21000u);
      if (branch_taken) {
          goto L_088BE35C;
      }
      goto L_088BE30C;
    }
L_088BE30C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 20000u);
      if (branch_taken) {
          goto L_088BE31C;
      }
      goto L_088BE314;
    }
L_088BE314:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE36C;
      }
      goto L_088BE31C;
    }
L_088BE31C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE32C;
    }
L_088BE32C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE33C;
    }
L_088BE33C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE34C;
    }
L_088BE34C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE35C;
    }
L_088BE35C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] & 64u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE36C;
    }
L_088BE36C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE374;
    }
L_088BE374:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 19001 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE414;
      }
      goto L_088BE384;
    }
L_088BE384:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 12000u);
      if (branch_taken) {
          goto L_088BE3D4;
      }
      goto L_088BE390;
    }
L_088BE390:
    aot_gpr[6] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 5000u);
      if (branch_taken) {
          goto L_088BE4A8;
      }
      goto L_088BE39C;
    }
L_088BE39C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 4000u);
      if (branch_taken) {
          goto L_088BE4A8;
      }
      goto L_088BE3A4;
    }
L_088BE3A4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 3000u);
      if (branch_taken) {
          goto L_088BE4A8;
      }
      goto L_088BE3AC;
    }
L_088BE3AC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 2000u);
      if (branch_taken) {
          goto L_088BE3C4;
      }
      goto L_088BE3B4;
    }
L_088BE3B4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 1000u);
      if (branch_taken) {
          goto L_088BE3C4;
      }
      goto L_088BE3BC;
    }
L_088BE3BC:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE4E8;
      }
      goto L_088BE3C4;
    }
L_088BE3C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE3D4;
    }
L_088BE3D4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 11000u);
      if (branch_taken) {
          goto L_088BE4B8;
      }
      goto L_088BE3DC;
    }
L_088BE3DC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 10000u);
      if (branch_taken) {
          goto L_088BE4B8;
      }
      goto L_088BE3E4;
    }
L_088BE3E4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 9000u);
      if (branch_taken) {
          goto L_088BE4B8;
      }
      goto L_088BE3EC;
    }
L_088BE3EC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 8000u);
      if (branch_taken) {
          goto L_088BE404;
      }
      goto L_088BE3F4;
    }
L_088BE3F4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 7000u);
      if (branch_taken) {
          goto L_088BE404;
      }
      goto L_088BE3FC;
    }
L_088BE3FC:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE4E8;
      }
      goto L_088BE404;
    }
L_088BE404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE414;
    }
L_088BE414:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 25000u);
      if (branch_taken) {
          goto L_088BE468;
      }
      goto L_088BE41C;
    }
L_088BE41C:
    aot_gpr[6] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 18000u);
      if (branch_taken) {
          goto L_088BE498;
      }
      goto L_088BE428;
    }
L_088BE428:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 17000u);
      if (branch_taken) {
          goto L_088BE4C8;
      }
      goto L_088BE430;
    }
L_088BE430:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 16000u);
      if (branch_taken) {
          goto L_088BE4C8;
      }
      goto L_088BE438;
    }
L_088BE438:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 15000u);
      if (branch_taken) {
          goto L_088BE4C8;
      }
      goto L_088BE440;
    }
L_088BE440:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 14000u);
      if (branch_taken) {
          goto L_088BE458;
      }
      goto L_088BE448;
    }
L_088BE448:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 13000u);
      if (branch_taken) {
          goto L_088BE458;
      }
      goto L_088BE450;
    }
L_088BE450:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE4E8;
      }
      goto L_088BE458;
    }
L_088BE458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 128u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE468;
    }
L_088BE468:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 24000u);
      if (branch_taken) {
          goto L_088BE458;
      }
      goto L_088BE470;
    }
L_088BE470:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 23000u);
      if (branch_taken) {
          goto L_088BE4D8;
      }
      goto L_088BE478;
    }
L_088BE478:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 22000u);
      if (branch_taken) {
          goto L_088BE4D8;
      }
      goto L_088BE480;
    }
L_088BE480:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 21000u);
      if (branch_taken) {
          goto L_088BE4D8;
      }
      goto L_088BE488;
    }
L_088BE488:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 20000u);
      if (branch_taken) {
          goto L_088BE498;
      }
      goto L_088BE490;
    }
L_088BE490:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE4E8;
      }
      goto L_088BE498;
    }
L_088BE498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE4A8;
    }
L_088BE4A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE4B8;
    }
L_088BE4B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE4C8;
    }
L_088BE4C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE4D8;
    }
L_088BE4D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] & 64u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE4E8;
    }
L_088BE4E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE4F0;
    }
L_088BE4F0:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 19001 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE588;
      }
      goto L_088BE500;
    }
L_088BE500:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 12000u);
      if (branch_taken) {
          goto L_088BE54C;
      }
      goto L_088BE50C;
    }
L_088BE50C:
    aot_gpr[6] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 5000u);
      if (branch_taken) {
          goto L_088BE614;
      }
      goto L_088BE518;
    }
L_088BE518:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 4000u);
      if (branch_taken) {
          goto L_088BE614;
      }
      goto L_088BE520;
    }
L_088BE520:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 3000u);
      if (branch_taken) {
          goto L_088BE614;
      }
      goto L_088BE528;
    }
L_088BE528:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 2000u);
      if (branch_taken) {
          goto L_088BE540;
      }
      goto L_088BE530;
    }
L_088BE530:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 1000u);
      if (branch_taken) {
          goto L_088BE540;
      }
      goto L_088BE538;
    }
L_088BE538:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE644;
      }
      goto L_088BE540;
    }
L_088BE540:
    aot_gpr[2] = (aot_gpr[5] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE54C;
    }
L_088BE54C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 11000u);
      if (branch_taken) {
          goto L_088BE620;
      }
      goto L_088BE554;
    }
L_088BE554:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 10000u);
      if (branch_taken) {
          goto L_088BE620;
      }
      goto L_088BE55C;
    }
L_088BE55C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 9000u);
      if (branch_taken) {
          goto L_088BE620;
      }
      goto L_088BE564;
    }
L_088BE564:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 8000u);
      if (branch_taken) {
          goto L_088BE57C;
      }
      goto L_088BE56C;
    }
L_088BE56C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 7000u);
      if (branch_taken) {
          goto L_088BE57C;
      }
      goto L_088BE574;
    }
L_088BE574:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE644;
      }
      goto L_088BE57C;
    }
L_088BE57C:
    aot_gpr[2] = (aot_gpr[5] & 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE588;
    }
L_088BE588:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 25000u);
      if (branch_taken) {
          goto L_088BE5D8;
      }
      goto L_088BE590;
    }
L_088BE590:
    aot_gpr[6] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 18000u);
      if (branch_taken) {
          goto L_088BE608;
      }
      goto L_088BE59C;
    }
L_088BE59C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 17000u);
      if (branch_taken) {
          goto L_088BE62C;
      }
      goto L_088BE5A4;
    }
L_088BE5A4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 16000u);
      if (branch_taken) {
          goto L_088BE62C;
      }
      goto L_088BE5AC;
    }
L_088BE5AC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 15000u);
      if (branch_taken) {
          goto L_088BE62C;
      }
      goto L_088BE5B4;
    }
L_088BE5B4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 14000u);
      if (branch_taken) {
          goto L_088BE5CC;
      }
      goto L_088BE5BC;
    }
L_088BE5BC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 13000u);
      if (branch_taken) {
          goto L_088BE5CC;
      }
      goto L_088BE5C4;
    }
L_088BE5C4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE644;
      }
      goto L_088BE5CC;
    }
L_088BE5CC:
    aot_gpr[2] = (aot_gpr[5] & 128u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE5D8;
    }
L_088BE5D8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 24000u);
      if (branch_taken) {
          goto L_088BE5CC;
      }
      goto L_088BE5E0;
    }
L_088BE5E0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 23000u);
      if (branch_taken) {
          goto L_088BE638;
      }
      goto L_088BE5E8;
    }
L_088BE5E8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 22000u);
      if (branch_taken) {
          goto L_088BE638;
      }
      goto L_088BE5F0;
    }
L_088BE5F0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 21000u);
      if (branch_taken) {
          goto L_088BE638;
      }
      goto L_088BE5F8;
    }
L_088BE5F8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 20000u);
      if (branch_taken) {
          goto L_088BE608;
      }
      goto L_088BE600;
    }
L_088BE600:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE644;
      }
      goto L_088BE608;
    }
L_088BE608:
    aot_gpr[2] = (aot_gpr[5] & 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE614;
    }
L_088BE614:
    aot_gpr[2] = (aot_gpr[5] & 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE620;
    }
L_088BE620:
    aot_gpr[2] = (aot_gpr[5] & 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE62C;
    }
L_088BE62C:
    aot_gpr[2] = (aot_gpr[5] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE638;
    }
L_088BE638:
    aot_gpr[2] = (aot_gpr[5] & 64u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE648;
      }
      goto L_088BE644;
    }
L_088BE644:
    aot_gpr[2] = (0u | 1u);
    goto L_088BE648;
L_088BE648:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE650:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BE6DC;
      }
      goto L_088BE68C;
    }
L_088BE68C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3400));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x088BE6A4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 49u, 0x08908390u>(ctx, &aot_mem) && ctx.pc == 0x088BE6A4u) goto L_088BE6A4;
    return;
L_088BE6A4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BE6B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088BE6B0u) goto L_088BE6B0;
    return;
L_088BE6B0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BE6DC;
      }
      goto L_088BE6BC;
    }
L_088BE6BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BE6DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BE6DCu) goto L_088BE6DC;
    return;
L_088BE6DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE6F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BE70Cu);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE70Cu) goto L_088BE70C;
    return;
L_088BE70C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3400));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x088BE720u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 48u, 0x08908388u>(ctx, &aot_mem) && ctx.pc == 0x088BE720u) goto L_088BE720;
    return;
L_088BE720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(224)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_088BE73C;
      }
      goto L_088BE730;
    }
L_088BE730:
    aot_gpr[31] = (0x088BE738u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 102u, 0x08A50918u>(ctx, &aot_mem) && ctx.pc == 0x088BE738u) goto L_088BE738;
    return;
L_088BE738:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(224), aot_gpr[2]);
    goto L_088BE73C;
L_088BE73C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE754;
      }
      goto L_088BE744;
    }
L_088BE744:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088BE750u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 103u, 0x08A50920u>(ctx, &aot_mem) && ctx.pc == 0x088BE750u) goto L_088BE750;
    return;
L_088BE750:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    goto L_088BE754;
L_088BE754:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE76C;
      }
      goto L_088BE75C;
    }
L_088BE75C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088BE768u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 94u, 0x08A5088Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE768u) goto L_088BE768;
    return;
L_088BE768:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(236), aot_gpr[2]);
    goto L_088BE76C;
L_088BE76C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE784:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7C8;
      }
      goto L_088BE798;
    }
L_088BE798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(232)));
    goto L_088BE79C;
L_088BE79C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE7C0;
      }
      goto L_088BE7A8;
    }
L_088BE7A8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BE79C;
      }
      goto L_088BE7B8;
    }
L_088BE7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7C8;
      }
      goto L_088BE7C0;
    }
L_088BE7C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BE7CC;
      }
      goto L_088BE7C8;
    }
L_088BE7C8:
    aot_gpr[2] = (0u | 0u);
    goto L_088BE7CC;
L_088BE7CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE7D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(240)));
    aot_gpr[5] = (32639u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088BE8D4;
      }
      goto L_088BE84C;
    }
L_088BE84C:
    aot_gpr[23] = (0u | 0u);
    goto L_088BE850;
L_088BE850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BE8C0;
      }
      goto L_088BE864;
    }
L_088BE864:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BE878u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 108u, 0x088BD9E0u>(ctx, &aot_mem) && ctx.pc == 0x088BE878u) goto L_088BE878;
    return;
L_088BE878:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BE8C0;
      }
      goto L_088BE8B0;
    }
L_088BE8B0:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[21] = (aot_gpr[4] | 0u);
    goto L_088BE8C0;
L_088BE8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(240)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BE850;
      }
      goto L_088BE8D4;
    }
L_088BE8D4:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE908:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[2] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[10]);
    aot_gpr[20] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28172), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(240)));
    aot_gpr[5] = (32639u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088BEA94;
      }
      goto L_088BE9A0;
    }
L_088BE9A0:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[23] = (2215u << 16u);
    goto L_088BE9A8;
L_088BE9A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28040)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BEA80;
      }
      goto L_088BE9D8;
    }
L_088BE9D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_088BEA04;
    }
    goto L_088BE9E4;
L_088BE9E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BE9F8u);
    aot_gpr[7] = (0u | 0u);
    goto L_088BE0E4;
L_088BE9F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEA80;
      }
      goto L_088BEA00;
    }
L_088BEA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BEA04;
L_088BEA04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28172)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28172), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BEA30u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 108u, 0x088BD9E0u>(ctx, &aot_mem) && ctx.pc == 0x088BEA30u) goto L_088BEA30;
    return;
L_088BEA30:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BEA80;
      }
      goto L_088BEA3C;
    }
L_088BEA3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[16] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BEA80;
      }
      goto L_088BEA70;
    }
L_088BEA70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[30] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_088BEA80;
L_088BEA80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(240)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BE9A8;
      }
      goto L_088BEA94;
    }
L_088BEA94:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEADC;
      }
      goto L_088BEA9C;
    }
L_088BEA9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088BEADC;
L_088BEADC:
    aot_gpr[2] = (aot_gpr[30] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEB14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (32639u << 16u);
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(244)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[22] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088BEC04;
      }
      goto L_088BEB74;
    }
L_088BEB74:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (2215u << 16u);
    goto L_088BEB7C;
L_088BEB7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(236)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBF0;
      }
      goto L_088BEBA8;
    }
L_088BEBA8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BEBB4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088BED24;
L_088BEBB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBF0;
      }
      goto L_088BEBBC;
    }
L_088BEBBC:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BEBF0;
      }
      goto L_088BEBE8;
    }
L_088BEBE8:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[22] = (aot_gpr[18] | 0u);
    goto L_088BEBF0;
L_088BEBF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(244)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088BEB7C;
      }
      goto L_088BEC04;
    }
L_088BEC04:
    aot_gpr[2] = (aot_gpr[22] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEC38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEC58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BECB8;
      }
      goto L_088BEC74;
    }
L_088BEC74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3384));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BEC8Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088BEC8Cu) goto L_088BEC8C;
    return;
L_088BEC8C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BECB8;
      }
      goto L_088BEC98;
    }
L_088BEC98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BECB8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BECB8u) goto L_088BECB8;
    return;
L_088BECB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BECCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BECE8u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088BECE8u) goto L_088BECE8;
    return;
L_088BECE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3384));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED0C;
      }
      goto L_088BED00;
    }
L_088BED00:
    aot_gpr[31] = (0x088BED08u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 104u, 0x08A50928u>(ctx, &aot_mem) && ctx.pc == 0x088BED08u) goto L_088BED08;
    return;
L_088BED08:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_088BED0C;
L_088BED0C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED50;
      }
      goto L_088BED40;
    }
L_088BED40:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BED40;
      }
      goto L_088BED50;
    }
L_088BED50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED58:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BED94u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088BED94u) goto L_088BED94;
    return;
L_088BED94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25264));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1448)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDEC;
      }
      goto L_088BEDAC;
    }
L_088BEDAC:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088BEDB8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 105u, 0x08A50930u>(ctx, &aot_mem) && ctx.pc == 0x088BEDB8u) goto L_088BEDB8;
    return;
L_088BEDB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1448), aot_gpr[2]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    goto L_088BEDC4;
L_088BEDC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1448)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[31] = (0x088BEDD8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 106u, 0x08A50938u>(ctx, &aot_mem) && ctx.pc == 0x088BEDD8u) goto L_088BEDD8;
    return;
L_088BEDD8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BEDC4;
      }
      goto L_088BEDEC;
    }
L_088BEDEC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEE04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BEE64;
      }
      goto L_088BEE20;
    }
L_088BEE20:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25264));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BEE38u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088BEE38u) goto L_088BEE38;
    return;
L_088BEE38:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BEE64;
      }
      goto L_088BEE44;
    }
L_088BEE44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BEE64u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BEE64u) goto L_088BEE64;
    return;
L_088BEE64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEE78:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[6] != aot_gpr[7]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1448)));
        goto L_088BEEA4;
    }
    goto L_088BEE84;
L_088BEE84:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_088BEECC;
      }
      goto L_088BEEA4;
    }
L_088BEEA4:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_088BEECC;
      }
      goto L_088BEECC;
    }
L_088BEECC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEED4:
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1468));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEEEC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEF0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088BEF20u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x088BEF20u) goto L_088BEF20;
    return;
L_088BEF20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEF2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEF3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(25252));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[31]);
    aot_gpr[31] = (0x088BEF84u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BEF84u) goto L_088BEF84;
    return;
L_088BEF84:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x088BEF90u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x088BEF90u) goto L_088BEF90;
    return;
L_088BEF90:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BEFACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30128));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088BEFACu) goto L_088BEFAC;
    return;
L_088BEFAC:
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088BEFE4u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BEFE4u) goto L_088BEFE4;
    return;
L_088BEFE4:
    aot_gpr[31] = (0x088BEFECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088BEF2C;
L_088BEFEC:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[6] = (15395u << 16u);
    aot_gpr[5] = (aot_gpr[4] ^ 3u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    ctx.pc = 0x088BF000u; return;
}

void recomp_unit_0186(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0186_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_186(Runtime &runtime) {
    runtime.register_generated_unit(186u, 0x088BE000u, 4096u, &recomp_unit_0186, &recomp_unit_0186_entry);
    runtime.register_function(0x088BE000u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE014u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE028u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE048u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE050u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE054u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE05Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE064u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE068u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE070u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE078u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE07Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE084u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE08Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE090u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE098u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE0FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE104u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE10Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE114u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE128u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE130u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE138u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE140u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE154u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE15Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE164u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE16Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE180u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE188u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE190u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE198u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE1ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE1BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE1D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE1DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE1E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE1F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE208u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE214u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE220u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE228u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE230u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE238u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE240u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE248u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE258u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE260u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE268u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE270u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE278u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE280u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE288u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE298u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE2FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE304u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE30Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE314u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE31Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE32Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE33Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE34Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE35Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE36Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE374u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE384u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE390u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE39Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE3FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE404u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE414u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE41Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE428u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE430u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE438u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE440u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE448u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE450u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE458u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE468u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE470u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE478u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE480u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE488u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE490u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE498u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE4A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE4B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE4C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE4D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE4E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE4F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE500u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE50Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE518u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE520u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE528u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE530u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE538u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE540u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE54Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE554u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE55Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE564u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE56Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE574u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE57Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE588u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE590u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE59Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE5F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE600u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE608u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE614u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE620u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE62Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE638u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE644u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE648u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE650u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE670u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE68Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE6A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE6B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE6BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE6DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE6F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE70Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE720u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE730u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE738u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE73Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE744u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE750u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE754u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE75Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE768u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE76Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE784u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE798u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE79Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE7A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE7B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE7C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE7C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE7CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE7D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE84Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE850u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE864u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE878u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE8B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE8C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE8D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE908u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE9A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE9A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE9D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE9E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BE9F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEA9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEADCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEB14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEB74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEB7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEBA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEBB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEBBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEBE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEBF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEC04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEC38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEC58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEC74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEC8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEC98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BECB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BECCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BECE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BED94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEDACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEDB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEDC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEDD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEDECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEE84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEEA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEECCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEED4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEEECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEF0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEF20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEF2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEF3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEF84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEF90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEFACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEFE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x088BEFECu, &recomp_unit_0186, "recomp_unit_0186");
}
} // namespace psprecomp
