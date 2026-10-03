#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0474[1024] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 15, 0, 16, 17, 0, 18, 0, 19, 0, 20, 21, 0,
    22, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 28, 29, 0, 30, 0, 0, 31, 0, 0, 32, 33, 0, 0, 34, 0, 35, 36, 0, 37,
    0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 45, 0, 0, 0, 0, 46, 47, 0,
    0, 48, 49, 0, 50, 51, 0, 0, 0, 52, 53, 0, 54, 55, 0, 56, 0, 57, 0, 58, 0, 59, 60, 0, 61, 62, 0, 63, 0, 0, 64, 0,
    0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 73, 74, 75, 76, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0,
    86, 0, 0, 87, 88, 0, 89, 0, 90, 91, 0, 0, 92, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121,
    0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0,
    0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0,
    0, 0, 151, 0, 152, 153, 0, 154, 0, 0, 155, 156, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 194, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0,
    199, 0, 0, 0, 0, 0, 200, 0, 201, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 213, 0, 0, 0, 0, 0, 0, 0, 214, 215, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226,
    0, 227, 0, 228, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 0, 236, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 252,
    0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0,
    281, 282, 0, 283, 284, 0, 285, 286, 0, 0, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 292, 0, 293, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 298, 0, 0, 299,
};
void recomp_unit_0474_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089DE000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0474[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DE000;
    case 2u: goto L_089DE01C;
    case 3u: goto L_089DE024;
    case 4u: goto L_089DE034;
    case 5u: goto L_089DE03C;
    case 6u: goto L_089DE044;
    case 7u: goto L_089DE04C;
    case 8u: goto L_089DE064;
    case 9u: goto L_089DE06C;
    case 10u: goto L_089DE0A4;
    case 11u: goto L_089DE0B0;
    case 12u: goto L_089DE0B8;
    case 13u: goto L_089DE0C4;
    case 14u: goto L_089DE0CC;
    case 15u: goto L_089DE0D0;
    case 16u: goto L_089DE0D8;
    case 17u: goto L_089DE0DC;
    case 18u: goto L_089DE0E4;
    case 19u: goto L_089DE0EC;
    case 20u: goto L_089DE0F4;
    case 21u: goto L_089DE0F8;
    case 22u: goto L_089DE100;
    case 23u: goto L_089DE108;
    case 24u: goto L_089DE110;
    case 25u: goto L_089DE118;
    case 26u: goto L_089DE124;
    case 27u: goto L_089DE12C;
    case 28u: goto L_089DE134;
    case 29u: goto L_089DE138;
    case 30u: goto L_089DE140;
    case 31u: goto L_089DE14C;
    case 32u: goto L_089DE158;
    case 33u: goto L_089DE15C;
    case 34u: goto L_089DE168;
    case 35u: goto L_089DE170;
    case 36u: goto L_089DE174;
    case 37u: goto L_089DE17C;
    case 38u: goto L_089DE188;
    case 39u: goto L_089DE194;
    case 40u: goto L_089DE1A8;
    case 41u: goto L_089DE1AC;
    case 42u: goto L_089DE1B4;
    case 43u: goto L_089DE1D0;
    case 44u: goto L_089DE1D4;
    case 45u: goto L_089DE1E0;
    case 46u: goto L_089DE1F4;
    case 47u: goto L_089DE1F8;
    case 48u: goto L_089DE204;
    case 49u: goto L_089DE208;
    case 50u: goto L_089DE210;
    case 51u: goto L_089DE214;
    case 52u: goto L_089DE224;
    case 53u: goto L_089DE228;
    case 54u: goto L_089DE230;
    case 55u: goto L_089DE234;
    case 56u: goto L_089DE23C;
    case 57u: goto L_089DE244;
    case 58u: goto L_089DE24C;
    case 59u: goto L_089DE254;
    case 60u: goto L_089DE258;
    case 61u: goto L_089DE260;
    case 62u: goto L_089DE264;
    case 63u: goto L_089DE26C;
    case 64u: goto L_089DE278;
    case 65u: goto L_089DE28C;
    case 66u: goto L_089DE298;
    case 67u: goto L_089DE2A0;
    case 68u: goto L_089DE2A8;
    case 69u: goto L_089DE2BC;
    case 70u: goto L_089DE2C4;
    case 71u: goto L_089DE2C8;
    case 72u: goto L_089DE2FC;
    case 73u: goto L_089DE304;
    case 74u: goto L_089DE308;
    case 75u: goto L_089DE30C;
    case 76u: goto L_089DE310;
    case 77u: goto L_089DE31C;
    case 78u: goto L_089DE324;
    case 79u: goto L_089DE330;
    case 80u: goto L_089DE340;
    case 81u: goto L_089DE348;
    case 82u: goto L_089DE354;
    case 83u: goto L_089DE360;
    case 84u: goto L_089DE370;
    case 85u: goto L_089DE378;
    case 86u: goto L_089DE380;
    case 87u: goto L_089DE38C;
    case 88u: goto L_089DE390;
    case 89u: goto L_089DE398;
    case 90u: goto L_089DE3A0;
    case 91u: goto L_089DE3A4;
    case 92u: goto L_089DE3B0;
    case 93u: goto L_089DE3B4;
    case 94u: goto L_089DE3BC;
    case 95u: goto L_089DE3C8;
    case 96u: goto L_089DE3D4;
    case 97u: goto L_089DE3DC;
    case 98u: goto L_089DE3E4;
    case 99u: goto L_089DE3FC;
    case 100u: goto L_089DE40C;
    case 101u: goto L_089DE414;
    case 102u: goto L_089DE41C;
    case 103u: goto L_089DE424;
    case 104u: goto L_089DE430;
    case 105u: goto L_089DE434;
    case 106u: goto L_089DE43C;
    case 107u: goto L_089DE448;
    case 108u: goto L_089DE46C;
    case 109u: goto L_089DE474;
    case 110u: goto L_089DE498;
    case 111u: goto L_089DE4A0;
    case 112u: goto L_089DE4AC;
    case 113u: goto L_089DE4B4;
    case 114u: goto L_089DE4C0;
    case 115u: goto L_089DE4C8;
    case 116u: goto L_089DE4D0;
    case 117u: goto L_089DE4D8;
    case 118u: goto L_089DE4E0;
    case 119u: goto L_089DE4E8;
    case 120u: goto L_089DE4F0;
    case 121u: goto L_089DE4FC;
    case 122u: goto L_089DE508;
    case 123u: goto L_089DE514;
    case 124u: goto L_089DE51C;
    case 125u: goto L_089DE534;
    case 126u: goto L_089DE544;
    case 127u: goto L_089DE560;
    case 128u: goto L_089DE574;
    case 129u: goto L_089DE584;
    case 130u: goto L_089DE594;
    case 131u: goto L_089DE5A4;
    case 132u: goto L_089DE5B0;
    case 133u: goto L_089DE5B8;
    case 134u: goto L_089DE5D0;
    case 135u: goto L_089DE5E4;
    case 136u: goto L_089DE5F0;
    case 137u: goto L_089DE604;
    case 138u: goto L_089DE620;
    case 139u: goto L_089DE634;
    case 140u: goto L_089DE648;
    case 141u: goto L_089DE658;
    case 142u: goto L_089DE668;
    case 143u: goto L_089DE678;
    case 144u: goto L_089DE68C;
    case 145u: goto L_089DE6A4;
    case 146u: goto L_089DE6B8;
    case 147u: goto L_089DE6D0;
    case 148u: goto L_089DE6D8;
    case 149u: goto L_089DE6E4;
    case 150u: goto L_089DE6F8;
    case 151u: goto L_089DE708;
    case 152u: goto L_089DE710;
    case 153u: goto L_089DE714;
    case 154u: goto L_089DE71C;
    case 155u: goto L_089DE728;
    case 156u: goto L_089DE72C;
    case 157u: goto L_089DE734;
    case 158u: goto L_089DE73C;
    case 159u: goto L_089DE744;
    case 160u: goto L_089DE750;
    case 161u: goto L_089DE76C;
    case 162u: goto L_089DE774;
    case 163u: goto L_089DE790;
    case 164u: goto L_089DE794;
    case 165u: goto L_089DE7A4;
    case 166u: goto L_089DE7C8;
    case 167u: goto L_089DE7E0;
    case 168u: goto L_089DE7E8;
    case 169u: goto L_089DE80C;
    case 170u: goto L_089DE820;
    case 171u: goto L_089DE828;
    case 172u: goto L_089DE830;
    case 173u: goto L_089DE838;
    case 174u: goto L_089DE840;
    case 175u: goto L_089DE850;
    case 176u: goto L_089DE85C;
    case 177u: goto L_089DE89C;
    case 178u: goto L_089DE8A4;
    case 179u: goto L_089DE8A8;
    case 180u: goto L_089DE8B0;
    case 181u: goto L_089DE8B8;
    case 182u: goto L_089DE8C8;
    case 183u: goto L_089DE8D4;
    case 184u: goto L_089DE914;
    case 185u: goto L_089DE91C;
    case 186u: goto L_089DE920;
    case 187u: goto L_089DE928;
    case 188u: goto L_089DE944;
    case 189u: goto L_089DE94C;
    case 190u: goto L_089DE954;
    case 191u: goto L_089DE964;
    case 192u: goto L_089DE96C;
    case 193u: goto L_089DE97C;
    case 194u: goto L_089DE994;
    case 195u: goto L_089DE998;
    case 196u: goto L_089DE9B0;
    case 197u: goto L_089DE9EC;
    case 198u: goto L_089DE9F8;
    case 199u: goto L_089DEA00;
    case 200u: goto L_089DEA18;
    case 201u: goto L_089DEA20;
    case 202u: goto L_089DEA24;
    case 203u: goto L_089DEA30;
    case 204u: goto L_089DEA54;
    case 205u: goto L_089DEA80;
    case 206u: goto L_089DEA88;
    case 207u: goto L_089DEA90;
    case 208u: goto L_089DEA9C;
    case 209u: goto L_089DEAAC;
    case 210u: goto L_089DEAB4;
    case 211u: goto L_089DEAC4;
    case 212u: goto L_089DEACC;
    case 213u: goto L_089DEAD0;
    case 214u: goto L_089DEAF0;
    case 215u: goto L_089DEAF4;
    case 216u: goto L_089DEB14;
    case 217u: goto L_089DEB1C;
    case 218u: goto L_089DEB24;
    case 219u: goto L_089DEB2C;
    case 220u: goto L_089DEB38;
    case 221u: goto L_089DEB48;
    case 222u: goto L_089DEB58;
    case 223u: goto L_089DEB60;
    case 224u: goto L_089DEB68;
    case 225u: goto L_089DEB70;
    case 226u: goto L_089DEB7C;
    case 227u: goto L_089DEB84;
    case 228u: goto L_089DEB8C;
    case 229u: goto L_089DEB90;
    case 230u: goto L_089DEB98;
    case 231u: goto L_089DEBA4;
    case 232u: goto L_089DEBAC;
    case 233u: goto L_089DEBB4;
    case 234u: goto L_089DEBBC;
    case 235u: goto L_089DEBC4;
    case 236u: goto L_089DEBD4;
    case 237u: goto L_089DEBD8;
    case 238u: goto L_089DEBE0;
    case 239u: goto L_089DEC10;
    case 240u: goto L_089DEC18;
    case 241u: goto L_089DEC24;
    case 242u: goto L_089DEC28;
    case 243u: goto L_089DEC4C;
    case 244u: goto L_089DEC84;
    case 245u: goto L_089DECAC;
    case 246u: goto L_089DECBC;
    case 247u: goto L_089DECC4;
    case 248u: goto L_089DECD0;
    case 249u: goto L_089DECE0;
    case 250u: goto L_089DECEC;
    case 251u: goto L_089DECF4;
    case 252u: goto L_089DECFC;
    case 253u: goto L_089DED08;
    case 254u: goto L_089DED10;
    case 255u: goto L_089DED1C;
    case 256u: goto L_089DED30;
    case 257u: goto L_089DED38;
    case 258u: goto L_089DED3C;
    case 259u: goto L_089DED48;
    case 260u: goto L_089DED50;
    case 261u: goto L_089DED58;
    case 262u: goto L_089DED60;
    case 263u: goto L_089DED68;
    case 264u: goto L_089DED70;
    case 265u: goto L_089DED78;
    case 266u: goto L_089DED84;
    case 267u: goto L_089DEDAC;
    case 268u: goto L_089DEDB4;
    case 269u: goto L_089DEDE0;
    case 270u: goto L_089DEE10;
    case 271u: goto L_089DEE18;
    case 272u: goto L_089DEE28;
    case 273u: goto L_089DEE34;
    case 274u: goto L_089DEE40;
    case 275u: goto L_089DEE48;
    case 276u: goto L_089DEE54;
    case 277u: goto L_089DEED4;
    case 278u: goto L_089DEED8;
    case 279u: goto L_089DEEE8;
    case 280u: goto L_089DEEF4;
    case 281u: goto L_089DEF00;
    case 282u: goto L_089DEF04;
    case 283u: goto L_089DEF0C;
    case 284u: goto L_089DEF10;
    case 285u: goto L_089DEF18;
    case 286u: goto L_089DEF1C;
    case 287u: goto L_089DEF2C;
    case 288u: goto L_089DEF30;
    case 289u: goto L_089DEF64;
    case 290u: goto L_089DEF9C;
    case 291u: goto L_089DEFA8;
    case 292u: goto L_089DEFAC;
    case 293u: goto L_089DEFB4;
    case 294u: goto L_089DEFB8;
    case 295u: goto L_089DEFD4;
    case 296u: goto L_089DEFE0;
    case 297u: goto L_089DEFEC;
    case 298u: goto L_089DEFF0;
    case 299u: goto L_089DEFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DE000:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE01C:
    if (aot_gpr[19] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
        (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 212u, 0x089DDF18u>(ctx, &aot_mem); return;
    }
    goto L_089DE024;
L_089DE024:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (0u + 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 211u, 0x089DDF14u>(ctx, &aot_mem); return;
      }
      goto L_089DE034;
    }
L_089DE034:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 226u, 0x089DDFB0u>(ctx, &aot_mem); return;
L_089DE03C:
    aot_gpr[31] = (0x089DE044u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 32u, 0x089DA1C8u>(ctx, &aot_mem) && ctx.pc == 0x089DE044u) goto L_089DE044;
    return;
L_089DE044:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 218u, 0x089DDF50u>(ctx, &aot_mem); return;
      }
      goto L_089DE04C;
    }
L_089DE04C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(264)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[31] = (0x089DE064u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089DE064u) goto L_089DE064;
    return;
L_089DE064:
    aot_gpr[3] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 232u, 0x089DDFF4u>(ctx, &aot_mem); return;
L_089DE06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[3] = (0u | 54002u);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DE2C8;
      }
      goto L_089DE0A4;
    }
L_089DE0A4:
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x089DE0B0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089DE0B0u) goto L_089DE0B0;
    return;
L_089DE0B0:
    aot_gpr[31] = (0x089DE0B8u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 90u, 0x089DA5C8u>(ctx, &aot_mem) && ctx.pc == 0x089DE0B8u) goto L_089DE0B8;
    return;
L_089DE0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_089DE0D0;
    }
    goto L_089DE0C4;
L_089DE0C4:
    aot_gpr[31] = (0x089DE0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 3u, 0x089E6020u>(ctx, &aot_mem) && ctx.pc == 0x089DE0CCu) goto L_089DE0CC;
    return;
L_089DE0CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089DE0D0;
L_089DE0D0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE100;
      }
      goto L_089DE0D8;
    }
L_089DE0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089DE0DC;
L_089DE0DC:
    if (aot_gpr[4] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089DE0F8;
    }
    goto L_089DE0E4;
L_089DE0E4:
    aot_gpr[31] = (0x089DE0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 32u, 0x089EB1D8u>(ctx, &aot_mem) && ctx.pc == 0x089DE0ECu) goto L_089DE0EC;
    return;
L_089DE0EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DE2C8;
      }
      goto L_089DE0F4;
    }
L_089DE0F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_089DE0F8;
L_089DE0F8:
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089DE0DC;
    }
    goto L_089DE100;
L_089DE100:
    aot_gpr[31] = (0x089DE108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089DE108u) goto L_089DE108;
    return;
L_089DE108:
    aot_gpr[31] = (0x089DE110u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 204u, 0x089DAC84u>(ctx, &aot_mem) && ctx.pc == 0x089DE110u) goto L_089DE110;
    return;
L_089DE110:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DE2C8;
      }
      goto L_089DE118;
    }
L_089DE118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089DE15C;
      }
      goto L_089DE124;
    }
L_089DE124:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(27));
    goto L_089DE134;
L_089DE12C:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_089DE15C;
    }
    goto L_089DE134;
L_089DE134:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DE138;
L_089DE138:
    if (aot_gpr[2] != aot_gpr[17]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
        goto L_089DE12C;
    }
    goto L_089DE140;
L_089DE140:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DE14Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 157u, 0x089DA94Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE14Cu) goto L_089DE14C;
    return;
L_089DE14C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE138;
    }
    goto L_089DE158;
L_089DE158:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_089DE15C;
L_089DE15C:
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089DE1D0;
      }
      goto L_089DE168;
    }
L_089DE168:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089DE1D0;
      }
      goto L_089DE170;
    }
L_089DE170:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    goto L_089DE174;
L_089DE174:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DE1D4;
      }
      goto L_089DE17C;
    }
L_089DE17C:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
        goto L_089DE174;
    }
    goto L_089DE188;
L_089DE188:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DE1E0;
      }
      goto L_089DE194;
    }
L_089DE194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (0u + 0u);
    aot_gpr[22] = (0u + 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[23] = (0u + 0u);
      if (branch_taken) {
          goto L_089DE3C8;
      }
      goto L_089DE1A8;
    }
L_089DE1A8:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    goto L_089DE1AC;
L_089DE1AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089DE30C;
      }
      goto L_089DE1B4;
    }
L_089DE1B4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12356));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE1D0:
    aot_gpr[20] = (0u + 0u);
    goto L_089DE1D4;
L_089DE1D4:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DE194;
      }
      goto L_089DE1E0;
    }
L_089DE1E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DE194;
      }
      goto L_089DE1F4;
    }
L_089DE1F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089DE1F8;
L_089DE1F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DE678;
      }
      goto L_089DE204;
    }
L_089DE204:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089DE208;
L_089DE208:
    if (aot_gpr[18] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
        goto L_089DE264;
    }
    goto L_089DE210;
L_089DE210:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    goto L_089DE214;
L_089DE214:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089DE254;
      }
      goto L_089DE224;
    }
L_089DE224:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089DE228;
L_089DE228:
    if (aot_gpr[16] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
        goto L_089DE258;
    }
    goto L_089DE230;
L_089DE230:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DE234;
L_089DE234:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089DE3E4;
      }
      goto L_089DE23C;
    }
L_089DE23C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DE228;
      }
      goto L_089DE244;
    }
L_089DE244:
    aot_gpr[31] = (0x089DE24Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE24Cu) goto L_089DE24C;
    return;
L_089DE24C:
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE234;
    }
    goto L_089DE254;
L_089DE254:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_089DE258;
L_089DE258:
    if (aot_gpr[18] != 0u) {
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
        goto L_089DE214;
    }
    goto L_089DE260;
L_089DE260:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    goto L_089DE264;
L_089DE264:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089DE2BC;
      }
      goto L_089DE26C;
    }
L_089DE26C:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x089DE278u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DE278u) goto L_089DE278;
    return;
L_089DE278:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE298;
      }
      goto L_089DE28C;
    }
L_089DE28C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE2BC;
      }
      goto L_089DE298;
    }
L_089DE298:
    aot_gpr[31] = (0x089DE2A0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 32u, 0x089DA1C8u>(ctx, &aot_mem) && ctx.pc == 0x089DE2A0u) goto L_089DE2A0;
    return;
L_089DE2A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DE2C8;
      }
      goto L_089DE2A8;
    }
L_089DE2A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    goto L_089DE2BC;
L_089DE2BC:
    aot_gpr[31] = (0x089DE2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089DE2C4u) goto L_089DE2C4;
    return;
L_089DE2C4:
    aot_gpr[3] = (0u + 0u);
    goto L_089DE2C8;
L_089DE2C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE2FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DE710;
      }
      goto L_089DE304;
    }
L_089DE304:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DE308;
L_089DE308:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089DE30C;
L_089DE30C:
    aot_gpr[3] = (0u + 0u);
    goto L_089DE310;
L_089DE310:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DE4C8;
      }
      goto L_089DE31C;
    }
L_089DE31C:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE340;
      }
      goto L_089DE324;
    }
L_089DE324:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089DE4A0;
      }
      goto L_089DE330;
    }
L_089DE330:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(284)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DE340u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE340u) goto L_089DE340;
    return;
L_089DE340:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_089DE370;
      }
      goto L_089DE348;
    }
L_089DE348:
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089DE354u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 155u, 0x089DF9A4u>(ctx, &aot_mem) && ctx.pc == 0x089DE354u) goto L_089DE354;
    return;
L_089DE354:
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089DE360u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 173u, 0x089DFA5Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE360u) goto L_089DE360;
    return;
L_089DE360:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    goto L_089DE370;
L_089DE370:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[5] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089DE390;
      }
      goto L_089DE378;
    }
L_089DE378:
    aot_gpr[31] = (0x089DE380u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 155u, 0x089DF9A4u>(ctx, &aot_mem) && ctx.pc == 0x089DE380u) goto L_089DE380;
    return;
L_089DE380:
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089DE38Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 70u, 0x089DA3DCu>(ctx, &aot_mem) && ctx.pc == 0x089DE38Cu) goto L_089DE38C;
    return;
L_089DE38C:
    aot_gpr[22] = (0u + 0u);
    goto L_089DE390;
L_089DE390:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE4AC;
      }
      goto L_089DE398;
    }
L_089DE398:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE3B4;
      }
      goto L_089DE3A0;
    }
L_089DE3A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_089DE3A4;
L_089DE3A4:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089DE1F8;
      }
      goto L_089DE3B0;
    }
L_089DE3B0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089DE3B4;
L_089DE3B4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089DE1F8;
      }
      goto L_089DE3BC;
    }
L_089DE3BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(30) ? 1u : 0u);
      if (branch_taken) {
          goto L_089DE1AC;
      }
      goto L_089DE3C8;
    }
L_089DE3C8:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DE3D4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 124u, 0x089D9ADCu>(ctx, &aot_mem) && ctx.pc == 0x089DE3D4u) goto L_089DE3D4;
    return;
L_089DE3D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DE2C8;
      }
      goto L_089DE3DC;
    }
L_089DE3DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DE1A8;
L_089DE3E4:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089DE3FCu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089DE3FCu) goto L_089DE3FC;
    return;
L_089DE3FC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(451));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(452));
      if (branch_taken) {
          goto L_089DE474;
      }
      goto L_089DE40C;
    }
L_089DE40C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DE41C;
      }
      goto L_089DE414;
    }
L_089DE414:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089DE23C;
L_089DE41C:
    aot_gpr[31] = (0x089DE424u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DE424u) goto L_089DE424;
    return;
L_089DE424:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DE4D8;
      }
      goto L_089DE430;
    }
L_089DE430:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089DE434;
L_089DE434:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (aot_gpr[16] + 0u);
        goto L_089DE23C;
    }
    goto L_089DE43C;
L_089DE43C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DE414;
      }
      goto L_089DE448;
    }
L_089DE448:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-2));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089DE46Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE46Cu) goto L_089DE46C;
    return;
L_089DE46C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089DE23C;
L_089DE474:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(184)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DE498u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE498u) goto L_089DE498;
    return;
L_089DE498:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089DE23C;
L_089DE4A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DE340;
L_089DE4AC:
    if (aot_gpr[30] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
        goto L_089DE3A4;
    }
    goto L_089DE4B4;
L_089DE4B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DE1F4;
      }
      goto L_089DE4C0;
    }
L_089DE4C0:
    aot_gpr[20] = (0u + 0u);
    goto L_089DE3A0;
L_089DE4C8:
    aot_gpr[31] = (0x089DE4D0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 136u, 0x08A43700u>(ctx, &aot_mem) && ctx.pc == 0x089DE4D0u) goto L_089DE4D0;
    return;
L_089DE4D0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_089DE324;
L_089DE4D8:
    aot_gpr[31] = (0x089DE4E0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 148u, 0x089E3B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE4E0u) goto L_089DE4E0;
    return;
L_089DE4E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089DE434;
      }
      goto L_089DE4E8;
    }
L_089DE4E8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_089DE258;
L_089DE4F0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DE310;
L_089DE4FC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DE310;
L_089DE508:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DE514u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 105u, 0x089D9994u>(ctx, &aot_mem) && ctx.pc == 0x089DE514u) goto L_089DE514;
    return;
L_089DE514:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE308;
    }
    goto L_089DE51C;
L_089DE51C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[23] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE534:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DE544u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 174u, 0x08992B84u>(ctx, &aot_mem) && ctx.pc == 0x089DE544u) goto L_089DE544;
    return;
L_089DE544:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE308;
    }
    goto L_089DE560;
L_089DE560:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE574:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DE584u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DE584u) goto L_089DE584;
    return;
L_089DE584:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE308;
    }
    goto L_089DE594;
L_089DE594:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE5A4:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DE5B0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 105u, 0x089D9994u>(ctx, &aot_mem) && ctx.pc == 0x089DE5B0u) goto L_089DE5B0;
    return;
L_089DE5B0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE308;
    }
    goto L_089DE5B8;
L_089DE5B8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(30));
    aot_gpr[22] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE5D0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE5E4:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DE310;
L_089DE5F0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(27));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE604:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x089DE620u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DE620u) goto L_089DE620;
    return;
L_089DE620:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089DE2FC;
      }
      goto L_089DE634;
    }
L_089DE634:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE648:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DE658u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DE658u) goto L_089DE658;
    return;
L_089DE658:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE308;
    }
    goto L_089DE668;
L_089DE668:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DE310;
L_089DE678:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DE68Cu);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DE68Cu) goto L_089DE68C;
    return;
L_089DE68C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (0u | 59999u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DE204;
      }
      goto L_089DE6A4;
    }
L_089DE6A4:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DE6B8u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 185u, 0x089DFB58u>(ctx, &aot_mem) && ctx.pc == 0x089DE6B8u) goto L_089DE6B8;
    return;
L_089DE6B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089DE6D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 70u, 0x089DA3DCu>(ctx, &aot_mem) && ctx.pc == 0x089DE6D0u) goto L_089DE6D0;
    return;
L_089DE6D0:
    if (aot_gpr[17] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_089DE208;
    }
    goto L_089DE6D8;
L_089DE6D8:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < 100 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_089DE208;
    }
    goto L_089DE6E4;
L_089DE6E4:
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DE6F8u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DE6F8u) goto L_089DE6F8;
    return;
L_089DE6F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DE6A4;
      }
      goto L_089DE708;
    }
L_089DE708:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089DE208;
L_089DE710:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_089DE714;
L_089DE714:
    if (aot_gpr[17] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DE308;
    }
    goto L_089DE71C;
L_089DE71C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089DE744;
      }
      goto L_089DE728;
    }
L_089DE728:
    aot_gpr[5] = (0u + 0u);
    goto L_089DE72C;
L_089DE72C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DE714;
      }
      goto L_089DE734;
    }
L_089DE734:
    aot_gpr[31] = (0x089DE73Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE73Cu) goto L_089DE73C;
    return;
L_089DE73C:
    // nop
    goto L_089DE714;
L_089DE744:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DE750u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DE750u) goto L_089DE750;
    return;
L_089DE750:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    aot_gpr[3] = (aot_gpr[2] & 16384u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089DE794;
      }
      goto L_089DE76C;
    }
L_089DE76C:
    aot_gpr[31] = (0x089DE774u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DE774u) goto L_089DE774;
    return;
L_089DE774:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] ^ 65535u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] != 0u) aot_gpr[5] = (aot_gpr[3]);
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[5] = (0u + 0u);
        goto L_089DE72C;
    }
    goto L_089DE790;
L_089DE790:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_089DE794;
L_089DE794:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089DE7A4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089DE7A4u) goto L_089DE7A4;
    return;
L_089DE7A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[9]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DE72C;
      }
      goto L_089DE7C8;
    }
L_089DE7C8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(284)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DE7E0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE7E0u) goto L_089DE7E0;
    return;
L_089DE7E0:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089DE72C;
L_089DE7E8:
    aot_gpr[2] = (0u | 65534u);
    aot_gpr[3] = (7u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(248), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] | 41248u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(252), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(240), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE80C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19200)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE820:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DE830;
      }
      goto L_089DE828;
    }
L_089DE828:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089DE830;
L_089DE830:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE838:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DE8A8;
      }
      goto L_089DE840;
    }
L_089DE840:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DE8A4;
      }
      goto L_089DE850;
    }
L_089DE850:
    aot_gpr[2] = (4194u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[2] | 19923u);
      if (branch_taken) {
          goto L_089DE89C;
      }
      goto L_089DE85C;
    }
L_089DE85C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[7] = (0u + 0u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(260)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] >> 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(252)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089DE89C;
L_089DE89C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE8A4:
    aot_gpr[7] = (0u | 54003u);
    goto L_089DE8A8;
L_089DE8A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE8B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DE920;
      }
      goto L_089DE8B8;
    }
L_089DE8B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DE91C;
      }
      goto L_089DE8C8;
    }
L_089DE8C8:
    aot_gpr[2] = (4194u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[2] | 19923u);
      if (branch_taken) {
          goto L_089DE914;
      }
      goto L_089DE8D4;
    }
L_089DE8D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (0u + 0u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] >> 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089DE914;
L_089DE914:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE91C:
    aot_gpr[7] = (0u | 54003u);
    goto L_089DE920;
L_089DE920:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
      if (branch_taken) {
          goto L_089DE994;
      }
      goto L_089DE944;
    }
L_089DE944:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089DE998;
      }
      goto L_089DE94C;
    }
L_089DE94C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089DE998;
      }
      goto L_089DE954;
    }
L_089DE954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DE964u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE964u) goto L_089DE964;
    return;
L_089DE964:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DE97C;
      }
      goto L_089DE96C;
    }
L_089DE96C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089DE97C;
L_089DE97C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE994:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089DE998;
L_089DE998:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE9B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DEA30;
      }
      goto L_089DE9EC;
    }
L_089DE9EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089DEA30;
      }
      goto L_089DE9F8;
    }
L_089DE9F8:
    aot_gpr[20] = (2206u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089DEA00;
L_089DEA00:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[20] + static_cast<std::uint32_t>(-26620));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DEA24;
      }
      goto L_089DEA18;
    }
L_089DEA18:
    aot_gpr[31] = (0x089DEA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 203u, 0x089EA9E8u>(ctx, &aot_mem) && ctx.pc == 0x089DEA20u) goto L_089DEA20;
    return;
L_089DEA20:
    if (aot_gpr[2] != 0u) aot_gpr[18] = (aot_gpr[2]);
    goto L_089DEA24;
L_089DEA24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089DEA00;
    }
    goto L_089DEA30;
L_089DEA30:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEA54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
      if (branch_taken) {
          goto L_089DEAF0;
      }
      goto L_089DEA80;
    }
L_089DEA80:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DEAF4;
      }
      goto L_089DEA88;
    }
L_089DEA88:
    aot_gpr[31] = (0x089DEA90u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 63u, 0x089DA380u>(ctx, &aot_mem) && ctx.pc == 0x089DEA90u) goto L_089DEA90;
    return;
L_089DEA90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x089DEA9Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 63u, 0x089DA380u>(ctx, &aot_mem) && ctx.pc == 0x089DEA9Cu) goto L_089DEA9C;
    return;
L_089DEA9C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_089DEAB4;
      }
      goto L_089DEAAC;
    }
L_089DEAAC:
    aot_gpr[31] = (0x089DEAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 164u, 0x089DAA04u>(ctx, &aot_mem) && ctx.pc == 0x089DEAB4u) goto L_089DEAB4;
    return;
L_089DEAB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DEAD0;
      }
      goto L_089DEAC4;
    }
L_089DEAC4:
    aot_gpr[31] = (0x089DEACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 164u, 0x089DAA04u>(ctx, &aot_mem) && ctx.pc == 0x089DEACCu) goto L_089DEACC;
    return;
L_089DEACC:
    aot_gpr[3] = (0u + 0u);
    goto L_089DEAD0;
L_089DEAD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEAF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089DEAF4;
L_089DEAF4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEB14:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089DEB58;
      }
      goto L_089DEB1C;
    }
L_089DEB1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DEB58;
      }
      goto L_089DEB24;
    }
L_089DEB24:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB58;
      }
      goto L_089DEB2C;
    }
L_089DEB2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DEB48;
      }
      goto L_089DEB38;
    }
L_089DEB38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEB48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEB58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEB60:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DEBAC;
      }
      goto L_089DEB68;
    }
L_089DEB68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DEBAC;
      }
      goto L_089DEB70;
    }
L_089DEB70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089DEB90;
    }
    goto L_089DEB7C;
L_089DEB7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEB84:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEBA4;
      }
      goto L_089DEB8C;
    }
L_089DEB8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089DEB90;
L_089DEB90:
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_089DEB84;
    }
    goto L_089DEB98;
L_089DEB98:
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEBA4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEBAC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEBB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DEBD8;
      }
      goto L_089DEBBC;
    }
L_089DEBBC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DEBD4;
      }
      goto L_089DEBC4;
    }
L_089DEBC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEBD4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089DEBD8;
L_089DEBD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEBE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DEDB4;
      }
      goto L_089DEC10;
    }
L_089DEC10:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DEDB4;
      }
      goto L_089DEC18;
    }
L_089DEC18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u | 54024u);
      if (branch_taken) {
          goto L_089DEC4C;
      }
      goto L_089DEC24;
    }
L_089DEC24:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089DEC28;
L_089DEC28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEC4C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (0x089DEC84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089DEC84u) goto L_089DEC84;
    return;
L_089DEC84:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1450));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089DECACu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089DECACu) goto L_089DECAC;
    return;
L_089DECAC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089DEDAC;
      }
      goto L_089DECBC;
    }
L_089DECBC:
    aot_gpr[31] = (0x089DECC4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 200u, 0x089DFBF0u>(ctx, &aot_mem) && ctx.pc == 0x089DECC4u) goto L_089DECC4;
    return;
L_089DECC4:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089DECD0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 198u, 0x089DFBD0u>(ctx, &aot_mem) && ctx.pc == 0x089DECD0u) goto L_089DECD0;
    return;
L_089DECD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DED78;
      }
      goto L_089DECE0;
    }
L_089DECE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089DECECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 208u, 0x0898DE88u>(ctx, &aot_mem) && ctx.pc == 0x089DECECu) goto L_089DECEC;
    return;
L_089DECEC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DED78;
      }
      goto L_089DECF4;
    }
L_089DECF4:
    if (aot_gpr[21] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
        goto L_089DED3C;
    }
    goto L_089DECFC;
L_089DECFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089DED08u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 188u, 0x089EA920u>(ctx, &aot_mem) && ctx.pc == 0x089DED08u) goto L_089DED08;
    return;
L_089DED08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DED78;
      }
      goto L_089DED10;
    }
L_089DED10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2206u << 16u);
      if (branch_taken) {
          goto L_089DED38;
      }
      goto L_089DED1C;
    }
L_089DED1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26620));
    aot_gpr[31] = (0x089DED30u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 220u, 0x089EAB44u>(ctx, &aot_mem) && ctx.pc == 0x089DED30u) goto L_089DED30;
    return;
L_089DED30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DED78;
      }
      goto L_089DED38;
    }
L_089DED38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_089DED3C;
L_089DED3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (0x089DED48u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089DED48u) goto L_089DED48;
    return;
L_089DED48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DED78;
      }
      goto L_089DED50;
    }
L_089DED50:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089DED60;
      }
      goto L_089DED58;
    }
L_089DED58:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089DEC24;
L_089DED60:
    aot_gpr[31] = (0x089DED68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 32u, 0x089EB1D8u>(ctx, &aot_mem) && ctx.pc == 0x089DED68u) goto L_089DED68;
    return;
L_089DED68:
    aot_gpr[31] = (0x089DED70u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089DED70u) goto L_089DED70;
    return;
L_089DED70:
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (0u + 0u);
        goto L_089DED58;
    }
    goto L_089DED78;
L_089DED78:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DED84u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 53u, 0x089DA2F4u>(ctx, &aot_mem) && ctx.pc == 0x089DED84u) goto L_089DED84;
    return;
L_089DED84:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEDAC:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DEC28;
      }
      goto L_089DEDB4;
    }
L_089DEDB4:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEDE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 29u, 0x089DF1B0u>(ctx, &aot_mem); return;
      }
      goto L_089DEE10;
    }
L_089DEE10:
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 30u, 0x089DF1B4u>(ctx, &aot_mem); return;
    }
    goto L_089DEE18;
L_089DEE18:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 30u, 0x089DF1B4u>(ctx, &aot_mem); return;
    }
    goto L_089DEE28;
L_089DEE28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 30u, 0x089DF1B4u>(ctx, &aot_mem); return;
    }
    goto L_089DEE34;
L_089DEE34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 29u, 0x089DF1B0u>(ctx, &aot_mem); return;
      }
      goto L_089DEE40;
    }
L_089DEE40:
    aot_gpr[31] = (0x089DEE48u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DEE48u) goto L_089DEE48;
    return;
L_089DEE48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 10u, 0x089DF068u>(ctx, &aot_mem); return;
      }
      goto L_089DEE54;
    }
L_089DEE54:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DEED8;
      }
      goto L_089DEED4;
    }
L_089DEED4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_089DEED8;
L_089DEED8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 20u, 0x089DF100u>(ctx, &aot_mem); return;
      }
      goto L_089DEEE8;
    }
L_089DEEE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 18u, 0x089DF0E8u>(ctx, &aot_mem); return;
      }
      goto L_089DEEF4;
    }
L_089DEEF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 16u, 0x089DF0D0u>(ctx, &aot_mem); return;
      }
      goto L_089DEF00;
    }
L_089DEF00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_089DEF04;
L_089DEF04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1448));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 14u, 0x089DF0B8u>(ctx, &aot_mem); return;
      }
      goto L_089DEF0C;
    }
L_089DEF0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    goto L_089DEF10;
L_089DEF10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 12u, 0x089DF098u>(ctx, &aot_mem); return;
      }
      goto L_089DEF18;
    }
L_089DEF18:
    aot_gpr[2] = (2217u << 16u);
    goto L_089DEF1C;
L_089DEF1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 22u, 0x089DF118u>(ctx, &aot_mem); return;
      }
      goto L_089DEF2C;
    }
L_089DEF2C:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(0u));
    goto L_089DEF30;
L_089DEF30:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (aot_gpr[7] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 25u, 0x089DF164u>(ctx, &aot_mem); return;
      }
      goto L_089DEF64;
    }
L_089DEF64:
    aot_gpr[2] = (aot_gpr[7] << 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x089DEF9Cu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DEF9Cu) goto L_089DEF9C;
    return;
L_089DEF9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 28u, 0x089DF1A8u>(ctx, &aot_mem); return;
      }
      goto L_089DEFA8;
    }
L_089DEFA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089DEFAC;
L_089DEFAC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 57u, 0x089DF338u>(ctx, &aot_mem); return;
    }
    goto L_089DEFB4;
L_089DEFB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_089DEFB8;
L_089DEFB8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr[3] = (aot_gpr[2] << 4u);
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x089DEFD4u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DEFD4u) goto L_089DEFD4;
    return;
L_089DEFD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 28u, 0x089DF1A8u>(ctx, &aot_mem); return;
      }
      goto L_089DEFE0;
    }
L_089DEFE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 62u, 0x089DF370u>(ctx, &aot_mem); return;
    }
    goto L_089DEFEC;
L_089DEFEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    goto L_089DEFF0;
L_089DEFF0:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089DEFFCu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DEFFCu) goto L_089DEFFC;
    return;
L_089DEFFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x089DF000u; return;
}

void recomp_unit_0474(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0474_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_474(Runtime &runtime) {
    runtime.register_generated_unit(474u, 0x089DE000u, 4096u, &recomp_unit_0474, &recomp_unit_0474_entry);
    runtime.register_function(0x089DE000u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE01Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE024u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE034u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE03Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE044u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE04Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE064u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE06Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0A4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0B0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0B8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0C4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0CCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0D0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0D8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0DCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0E4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0ECu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0F4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE0F8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE100u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE108u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE110u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE118u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE124u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE12Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE134u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE138u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE140u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE14Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE158u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE15Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE168u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE170u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE174u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE17Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE188u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE194u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1A8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1ACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1B4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1D0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1D4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1E0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1F4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE1F8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE204u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE208u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE210u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE214u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE224u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE228u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE230u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE234u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE23Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE244u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE24Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE254u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE258u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE260u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE264u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE26Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE278u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE28Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE298u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE2A0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE2A8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE2BCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE2C4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE2C8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE2FCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE304u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE308u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE30Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE310u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE31Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE324u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE330u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE340u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE348u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE354u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE360u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE370u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE378u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE380u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE38Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE390u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE398u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3A0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3A4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3B0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3B4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3BCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3C8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3D4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3DCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3E4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE3FCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE40Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE414u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE41Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE424u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE430u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE434u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE43Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE448u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE46Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE474u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE498u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4A0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4ACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4B4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4C0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4C8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4D0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4D8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4E0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4E8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4F0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE4FCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE508u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE514u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE51Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE534u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE544u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE560u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE574u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE584u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE594u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE5A4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE5B0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE5B8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE5D0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE5E4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE5F0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE604u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE620u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE634u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE648u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE658u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE668u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE678u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE68Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE6A4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE6B8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE6D0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE6D8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE6E4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE6F8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE708u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE710u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE714u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE71Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE728u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE72Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE734u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE73Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE744u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE750u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE76Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE774u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE790u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE794u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE7A4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE7C8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE7E0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE7E8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE80Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE820u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE828u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE830u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE838u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE840u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE850u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE85Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE89Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE8A4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE8A8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE8B0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE8B8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE8C8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE8D4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE914u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE91Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE920u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE928u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE944u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE94Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE954u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE964u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE96Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE97Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE994u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE998u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE9B0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE9ECu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DE9F8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA00u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA18u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA20u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA24u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA30u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA54u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA80u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA88u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA90u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEA9Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEAACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEAB4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEAC4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEACCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEAD0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEAF0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEAF4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB14u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB1Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB24u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB2Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB38u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB48u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB58u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB60u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB68u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB70u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB7Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB84u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB8Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB90u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEB98u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBA4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBB4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBBCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBC4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBD4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBD8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEBE0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEC10u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEC18u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEC24u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEC28u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEC4Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEC84u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECBCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECC4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECD0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECE0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECECu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECF4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DECFCu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED08u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED10u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED1Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED30u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED38u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED3Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED48u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED50u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED58u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED60u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED68u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED70u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED78u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DED84u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEDACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEDB4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEDE0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE10u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE18u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE28u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE34u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE40u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE48u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEE54u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEED4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEED8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEEE8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEEF4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF00u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF04u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF0Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF10u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF18u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF1Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF2Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF30u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF64u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEF9Cu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFA8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFACu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFB4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFB8u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFD4u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFE0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFECu, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFF0u, &recomp_unit_0474, "recomp_unit_0474");
    runtime.register_function(0x089DEFFCu, &recomp_unit_0474, "recomp_unit_0474");
}
} // namespace psprecomp
