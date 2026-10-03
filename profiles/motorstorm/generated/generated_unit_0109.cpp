#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0109[1017] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 8, 0, 9, 0, 0, 10, 0, 11, 0, 0, 12, 0,
    0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 24, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 53, 0, 54, 0, 0, 55,
    0, 56, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64,
    0, 0, 65, 0, 0, 66, 0, 67, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 80, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 96, 97, 0, 98, 0, 0, 0,
    99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 108, 109, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119,
    0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 126, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 132, 0, 0, 133, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 139, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0,
    0, 151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 186, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 194,
    0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 203, 0, 204, 0, 0, 205, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0,
    0, 214, 0, 0, 0, 215, 0, 216, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 224, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 240, 0, 0, 0, 0, 0, 241, 242, 0, 243, 0, 0, 244, 0,
    0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 253, 254, 0, 255, 0, 0, 0, 256, 0,
    257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 264, 265, 0, 266, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279,
    0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0,
    0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0,
    0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08871004u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0109[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08871004;
    case 2u: goto L_08871010;
    case 3u: goto L_08871018;
    case 4u: goto L_08871028;
    case 5u: goto L_08871030;
    case 6u: goto L_08871048;
    case 7u: goto L_08871050;
    case 8u: goto L_08871054;
    case 9u: goto L_0887105C;
    case 10u: goto L_08871068;
    case 11u: goto L_08871070;
    case 12u: goto L_0887107C;
    case 13u: goto L_08871088;
    case 14u: goto L_08871098;
    case 15u: goto L_088710A4;
    case 16u: goto L_088710B0;
    case 17u: goto L_088710BC;
    case 18u: goto L_088710CC;
    case 19u: goto L_088710DC;
    case 20u: goto L_088710E4;
    case 21u: goto L_088710EC;
    case 22u: goto L_088710F4;
    case 23u: goto L_08871108;
    case 24u: goto L_08871114;
    case 25u: goto L_08871118;
    case 26u: goto L_08871120;
    case 27u: goto L_0887112C;
    case 28u: goto L_08871134;
    case 29u: goto L_0887113C;
    case 30u: goto L_08871150;
    case 31u: goto L_0887115C;
    case 32u: goto L_08871164;
    case 33u: goto L_08871178;
    case 34u: goto L_08871184;
    case 35u: goto L_08871198;
    case 36u: goto L_088711A4;
    case 37u: goto L_088711B8;
    case 38u: goto L_088711C4;
    case 39u: goto L_088711D0;
    case 40u: goto L_088711E0;
    case 41u: goto L_088711EC;
    case 42u: goto L_088711F8;
    case 43u: goto L_08871204;
    case 44u: goto L_08871210;
    case 45u: goto L_08871218;
    case 46u: goto L_08871220;
    case 47u: goto L_08871230;
    case 48u: goto L_08871238;
    case 49u: goto L_08871240;
    case 50u: goto L_08871248;
    case 51u: goto L_0887125C;
    case 52u: goto L_08871268;
    case 53u: goto L_0887126C;
    case 54u: goto L_08871274;
    case 55u: goto L_08871280;
    case 56u: goto L_08871288;
    case 57u: goto L_0887128C;
    case 58u: goto L_088712A0;
    case 59u: goto L_088712A8;
    case 60u: goto L_088712BC;
    case 61u: goto L_088712D0;
    case 62u: goto L_088712D8;
    case 63u: goto L_088712F4;
    case 64u: goto L_08871300;
    case 65u: goto L_0887130C;
    case 66u: goto L_08871318;
    case 67u: goto L_08871320;
    case 68u: goto L_08871324;
    case 69u: goto L_08871338;
    case 70u: goto L_08871344;
    case 71u: goto L_08871350;
    case 72u: goto L_08871354;
    case 73u: goto L_0887135C;
    case 74u: goto L_0887138C;
    case 75u: goto L_088713C8;
    case 76u: goto L_088713E4;
    case 77u: goto L_088713EC;
    case 78u: goto L_088713F4;
    case 79u: goto L_08871408;
    case 80u: goto L_08871414;
    case 81u: goto L_08871418;
    case 82u: goto L_08871430;
    case 83u: goto L_0887143C;
    case 84u: goto L_08871444;
    case 85u: goto L_0887144C;
    case 86u: goto L_08871450;
    case 87u: goto L_08871468;
    case 88u: goto L_0887148C;
    case 89u: goto L_08871494;
    case 90u: goto L_0887149C;
    case 91u: goto L_088714B0;
    case 92u: goto L_088714BC;
    case 93u: goto L_088714C4;
    case 94u: goto L_088714D0;
    case 95u: goto L_088714E0;
    case 96u: goto L_088714E8;
    case 97u: goto L_088714EC;
    case 98u: goto L_088714F4;
    case 99u: goto L_08871504;
    case 100u: goto L_0887150C;
    case 101u: goto L_08871514;
    case 102u: goto L_0887152C;
    case 103u: goto L_08871538;
    case 104u: goto L_0887153C;
    case 105u: goto L_08871554;
    case 106u: goto L_08871560;
    case 107u: goto L_08871568;
    case 108u: goto L_08871570;
    case 109u: goto L_08871574;
    case 110u: goto L_0887158C;
    case 111u: goto L_088715A0;
    case 112u: goto L_088715B4;
    case 113u: goto L_088715C0;
    case 114u: goto L_088715C8;
    case 115u: goto L_088715D0;
    case 116u: goto L_088715D4;
    case 117u: goto L_088715E8;
    case 118u: goto L_088715F8;
    case 119u: goto L_08871600;
    case 120u: goto L_08871608;
    case 121u: goto L_0887161C;
    case 122u: goto L_08871628;
    case 123u: goto L_08871630;
    case 124u: goto L_0887163C;
    case 125u: goto L_0887164C;
    case 126u: goto L_08871654;
    case 127u: goto L_08871658;
    case 128u: goto L_08871660;
    case 129u: goto L_08871670;
    case 130u: goto L_08871678;
    case 131u: goto L_08871680;
    case 132u: goto L_08871698;
    case 133u: goto L_088716A4;
    case 134u: goto L_088716A8;
    case 135u: goto L_088716C0;
    case 136u: goto L_088716CC;
    case 137u: goto L_088716D4;
    case 138u: goto L_088716DC;
    case 139u: goto L_088716E0;
    case 140u: goto L_088716F8;
    case 141u: goto L_0887170C;
    case 142u: goto L_08871720;
    case 143u: goto L_0887172C;
    case 144u: goto L_08871734;
    case 145u: goto L_0887173C;
    case 146u: goto L_08871740;
    case 147u: goto L_08871754;
    case 148u: goto L_08871764;
    case 149u: goto L_0887176C;
    case 150u: goto L_08871774;
    case 151u: goto L_08871788;
    case 152u: goto L_08871794;
    case 153u: goto L_0887179C;
    case 154u: goto L_088717A8;
    case 155u: goto L_088717B8;
    case 156u: goto L_088717C0;
    case 157u: goto L_088717C4;
    case 158u: goto L_088717CC;
    case 159u: goto L_088717DC;
    case 160u: goto L_088717E4;
    case 161u: goto L_088717EC;
    case 162u: goto L_08871804;
    case 163u: goto L_08871810;
    case 164u: goto L_08871814;
    case 165u: goto L_0887182C;
    case 166u: goto L_08871838;
    case 167u: goto L_08871840;
    case 168u: goto L_08871848;
    case 169u: goto L_0887184C;
    case 170u: goto L_08871864;
    case 171u: goto L_08871878;
    case 172u: goto L_0887188C;
    case 173u: goto L_08871898;
    case 174u: goto L_088718A0;
    case 175u: goto L_088718A8;
    case 176u: goto L_088718AC;
    case 177u: goto L_088718C0;
    case 178u: goto L_088718D0;
    case 179u: goto L_088718D8;
    case 180u: goto L_088718E0;
    case 181u: goto L_088718F4;
    case 182u: goto L_08871900;
    case 183u: goto L_08871908;
    case 184u: goto L_08871914;
    case 185u: goto L_08871924;
    case 186u: goto L_0887192C;
    case 187u: goto L_08871930;
    case 188u: goto L_08871938;
    case 189u: goto L_08871948;
    case 190u: goto L_08871950;
    case 191u: goto L_08871958;
    case 192u: goto L_08871970;
    case 193u: goto L_0887197C;
    case 194u: goto L_08871980;
    case 195u: goto L_08871998;
    case 196u: goto L_088719A4;
    case 197u: goto L_088719AC;
    case 198u: goto L_088719B8;
    case 199u: goto L_088719BC;
    case 200u: goto L_088719D4;
    case 201u: goto L_088719E8;
    case 202u: goto L_088719FC;
    case 203u: goto L_08871A08;
    case 204u: goto L_08871A10;
    case 205u: goto L_08871A1C;
    case 206u: goto L_08871A20;
    case 207u: goto L_08871A34;
    case 208u: goto L_08871A44;
    case 209u: goto L_08871A4C;
    case 210u: goto L_08871A54;
    case 211u: goto L_08871A68;
    case 212u: goto L_08871A74;
    case 213u: goto L_08871A7C;
    case 214u: goto L_08871A88;
    case 215u: goto L_08871A98;
    case 216u: goto L_08871AA0;
    case 217u: goto L_08871AA4;
    case 218u: goto L_08871AAC;
    case 219u: goto L_08871ABC;
    case 220u: goto L_08871AC4;
    case 221u: goto L_08871ACC;
    case 222u: goto L_08871AE0;
    case 223u: goto L_08871AEC;
    case 224u: goto L_08871AF0;
    case 225u: goto L_08871B04;
    case 226u: goto L_08871B18;
    case 227u: goto L_08871B24;
    case 228u: goto L_08871B2C;
    case 229u: goto L_08871B38;
    case 230u: goto L_08871B50;
    case 231u: goto L_08871B58;
    case 232u: goto L_08871B70;
    case 233u: goto L_08871B88;
    case 234u: goto L_08871B94;
    case 235u: goto L_08871B9C;
    case 236u: goto L_08871BA4;
    case 237u: goto L_08871BB4;
    case 238u: goto L_08871BBC;
    case 239u: goto L_08871BC8;
    case 240u: goto L_08871BCC;
    case 241u: goto L_08871BE4;
    case 242u: goto L_08871BE8;
    case 243u: goto L_08871BF0;
    case 244u: goto L_08871BFC;
    case 245u: goto L_08871C08;
    case 246u: goto L_08871C14;
    case 247u: goto L_08871C20;
    case 248u: goto L_08871C28;
    case 249u: goto L_08871C30;
    case 250u: goto L_08871C40;
    case 251u: goto L_08871C48;
    case 252u: goto L_08871C54;
    case 253u: goto L_08871C60;
    case 254u: goto L_08871C64;
    case 255u: goto L_08871C6C;
    case 256u: goto L_08871C7C;
    case 257u: goto L_08871C84;
    case 258u: goto L_08871C8C;
    case 259u: goto L_08871CA0;
    case 260u: goto L_08871CAC;
    case 261u: goto L_08871CB4;
    case 262u: goto L_08871CC0;
    case 263u: goto L_08871CD0;
    case 264u: goto L_08871CD8;
    case 265u: goto L_08871CDC;
    case 266u: goto L_08871CE4;
    case 267u: goto L_08871CE8;
    case 268u: goto L_08871D18;
    case 269u: goto L_08871D50;
    case 270u: goto L_08871D68;
    case 271u: goto L_08871D78;
    case 272u: goto L_08871D8C;
    case 273u: goto L_08871DB0;
    case 274u: goto L_08871DB8;
    case 275u: goto L_08871DCC;
    case 276u: goto L_08871DDC;
    case 277u: goto L_08871DE4;
    case 278u: goto L_08871DF8;
    case 279u: goto L_08871E00;
    case 280u: goto L_08871E10;
    case 281u: goto L_08871E18;
    case 282u: goto L_08871E28;
    case 283u: goto L_08871E30;
    case 284u: goto L_08871E40;
    case 285u: goto L_08871E48;
    case 286u: goto L_08871E58;
    case 287u: goto L_08871E60;
    case 288u: goto L_08871E70;
    case 289u: goto L_08871E78;
    case 290u: goto L_08871E88;
    case 291u: goto L_08871E90;
    case 292u: goto L_08871E9C;
    case 293u: goto L_08871EA4;
    case 294u: goto L_08871EB4;
    case 295u: goto L_08871EC4;
    case 296u: goto L_08871ECC;
    case 297u: goto L_08871EDC;
    case 298u: goto L_08871EEC;
    case 299u: goto L_08871EF4;
    case 300u: goto L_08871F04;
    case 301u: goto L_08871F14;
    case 302u: goto L_08871F1C;
    case 303u: goto L_08871F2C;
    case 304u: goto L_08871F3C;
    case 305u: goto L_08871F44;
    case 306u: goto L_08871F54;
    case 307u: goto L_08871F64;
    case 308u: goto L_08871F6C;
    case 309u: goto L_08871F7C;
    case 310u: goto L_08871F8C;
    case 311u: goto L_08871F94;
    case 312u: goto L_08871FA4;
    case 313u: goto L_08871FB4;
    case 314u: goto L_08871FBC;
    case 315u: goto L_08871FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08871004:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871018;
      }
      goto L_08871010;
    }
L_08871010:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887135C;
      }
      goto L_08871018;
    }
L_08871018:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08871028u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08871028u) goto L_08871028;
    return;
L_08871028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887135C;
      }
      goto L_08871030;
    }
L_08871030:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08871048u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871048u) goto L_08871048;
    return;
L_08871048:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887113C;
      }
      goto L_08871050;
    }
L_08871050:
    aot_gpr[16] = (0u | 0u);
    goto L_08871054;
L_08871054:
    aot_gpr[31] = (0x0887105Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x0887105Cu) goto L_0887105C;
    return;
L_0887105C:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871134;
      }
      goto L_08871068;
    }
L_08871068:
    aot_gpr[31] = (0x08871070u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x08871070u) goto L_08871070;
    return;
L_08871070:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871088;
      }
      goto L_0887107C;
    }
L_0887107C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_08871088;
    }
L_08871088:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088710CC;
      }
      goto L_08871098;
    }
L_08871098:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088710CC;
      }
      goto L_088710A4;
    }
L_088710A4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088710BC;
      }
      goto L_088710B0;
    }
L_088710B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_088710BC;
    }
L_088710BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_088710CC;
    }
L_088710CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_088710DC;
    }
L_088710DC:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_088710E4;
    }
L_088710E4:
    aot_gpr[31] = (0x088710ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x088710ECu) goto L_088710EC;
    return;
L_088710EC:
    aot_gpr[31] = (0x088710F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 163u, 0x0881BDE0u>(ctx, &aot_mem) && ctx.pc == 0x088710F4u) goto L_088710F4;
    return;
L_088710F4:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] ^ 255u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
        goto L_08871118;
    }
    goto L_08871108;
L_08871108:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871120;
      }
      goto L_08871114;
    }
L_08871114:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    goto L_08871118;
L_08871118:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_08871120;
    }
L_08871120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0887112C;
L_0887112C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08871054;
      }
      goto L_08871134;
    }
L_08871134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871164;
      }
      goto L_0887113C;
    }
L_0887113C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08871150u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08871150u) goto L_08871150;
    return;
L_08871150:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871164;
      }
      goto L_0887115C;
    }
L_0887115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871010;
      }
      goto L_08871164;
    }
L_08871164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088712A0;
      }
      goto L_08871178;
    }
L_08871178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(524));
      if (branch_taken) {
          goto L_08871198;
      }
      goto L_08871184;
    }
L_08871184:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2060));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088711A4;
      }
      goto L_08871198;
    }
L_08871198:
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088711A4;
L_088711A4:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088711B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 48u, 0x0881C3CCu>(ctx, &aot_mem) && ctx.pc == 0x088711B8u) goto L_088711B8;
    return;
L_088711B8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088711D0;
      }
      goto L_088711C4;
    }
L_088711C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_088711D0;
    }
L_088711D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08871220;
      }
      goto L_088711E0;
    }
L_088711E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871220;
      }
      goto L_088711EC;
    }
L_088711EC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08871204;
      }
      goto L_088711F8;
    }
L_088711F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871204;
    }
L_08871204:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871210u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 242u, 0x0886FEB4u>(ctx, &aot_mem) && ctx.pc == 0x08871210u) goto L_08871210;
    return;
L_08871210:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871218;
    }
L_08871218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871220;
    }
L_08871220:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871230;
    }
L_08871230:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871238;
    }
L_08871238:
    aot_gpr[31] = (0x08871240u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x08871240u) goto L_08871240;
    return;
L_08871240:
    aot_gpr[31] = (0x08871248u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 163u, 0x0881BDE0u>(ctx, &aot_mem) && ctx.pc == 0x08871248u) goto L_08871248;
    return;
L_08871248:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] ^ 255u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
        goto L_0887126C;
    }
    goto L_0887125C;
L_0887125C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871274;
      }
      goto L_08871268;
    }
L_08871268:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    goto L_0887126C;
L_0887126C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871274;
    }
L_08871274:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871280u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 242u, 0x0886FEB4u>(ctx, &aot_mem) && ctx.pc == 0x08871280u) goto L_08871280;
    return;
L_08871280:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887128C;
      }
      goto L_08871288;
    }
L_08871288:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0887128C;
L_0887128C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871178;
      }
      goto L_088712A0;
    }
L_088712A0:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871338;
      }
      goto L_088712A8;
    }
L_088712A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4460)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871338;
      }
      goto L_088712BC;
    }
L_088712BC:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(4464));
    aot_gpr[17] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088712D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x088712D0u) goto L_088712D0;
    return;
L_088712D0:
    aot_gpr[31] = (0x088712D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 163u, 0x0881BDE0u>(ctx, &aot_mem) && ctx.pc == 0x088712D8u) goto L_088712D8;
    return;
L_088712D8:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(4592));
    aot_gpr[4] = (aot_gpr[4] ^ 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08871300;
      }
      goto L_088712F4;
    }
L_088712F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887130C;
      }
      goto L_08871300;
    }
L_08871300:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871324;
      }
      goto L_0887130C;
    }
L_0887130C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08871318u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 242u, 0x0886FEB4u>(ctx, &aot_mem) && ctx.pc == 0x08871318u) goto L_08871318;
    return;
L_08871318:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871324;
      }
      goto L_08871320;
    }
L_08871320:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08871324;
L_08871324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4460)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088712BC;
      }
      goto L_08871338;
    }
L_08871338:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08871354;
      }
      goto L_08871344;
    }
L_08871344:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08871354;
      }
      goto L_08871350;
    }
L_08871350:
    aot_gpr[4] = (0u | 1u);
    goto L_08871354;
L_08871354:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887135C;
      }
      goto L_0887135C;
    }
L_0887135C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887138C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_088713C8;
    }
L_088713C8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x088713E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7216));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088713E4u) goto L_088713E4;
    return;
L_088713E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088714F4;
      }
      goto L_088713EC;
    }
L_088713EC:
    aot_gpr[31] = (0x088713F4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x088713F4u) goto L_088713F4;
    return;
L_088713F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08871418;
      }
      goto L_08871408;
    }
L_08871408:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08871414u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x08871414u) goto L_08871414;
    return;
L_08871414:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08871418;
L_08871418:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08871468;
      }
      goto L_08871430;
    }
L_08871430:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887144C;
      }
      goto L_0887143C;
    }
L_0887143C:
    aot_gpr[31] = (0x08871444u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 154u, 0x0881CAD8u>(ctx, &aot_mem) && ctx.pc == 0x08871444u) goto L_08871444;
    return;
L_08871444:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08871450;
      }
      goto L_0887144C;
    }
L_0887144C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08871450;
L_08871450:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871430;
      }
      goto L_08871468;
    }
L_08871468:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4808));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[31] = (0x0887148Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887148Cu) goto L_0887148C;
    return;
L_0887148C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887149C;
      }
      goto L_08871494;
    }
L_08871494:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_088714C4;
      }
      goto L_0887149C;
    }
L_0887149C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088714B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x088714B0u) goto L_088714B0;
    return;
L_088714B0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088714C4;
      }
      goto L_088714BC;
    }
L_088714BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_088714C4;
    }
L_088714C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088714EC;
      }
      goto L_088714D0;
    }
L_088714D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088714E0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x088714E0u) goto L_088714E0;
    return;
L_088714E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088714EC;
      }
      goto L_088714E8;
    }
L_088714E8:
    aot_gpr[8] = (0u | 1u);
    goto L_088714EC;
L_088714EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08871CE8;
      }
      goto L_088714F4;
    }
L_088714F4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871504u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7224));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871504u) goto L_08871504;
    return;
L_08871504:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871660;
      }
      goto L_0887150C;
    }
L_0887150C:
    aot_gpr[31] = (0x08871514u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x08871514u) goto L_08871514;
    return;
L_08871514:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0887153C;
      }
      goto L_0887152C;
    }
L_0887152C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08871538u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x08871538u) goto L_08871538;
    return;
L_08871538:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_0887153C;
L_0887153C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0887158C;
      }
      goto L_08871554;
    }
L_08871554:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871570;
      }
      goto L_08871560;
    }
L_08871560:
    aot_gpr[31] = (0x08871568u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x0881C6F4u>(ctx, &aot_mem) && ctx.pc == 0x08871568u) goto L_08871568;
    return;
L_08871568:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08871574;
      }
      goto L_08871570;
    }
L_08871570:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08871574;
L_08871574:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871554;
      }
      goto L_0887158C;
    }
L_0887158C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3352)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088715E8;
      }
      goto L_088715A0;
    }
L_088715A0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(3356));
    aot_gpr[5] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088715B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x0881C72Cu>(ctx, &aot_mem) && ctx.pc == 0x088715B4u) goto L_088715B4;
    return;
L_088715B4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088715D0;
      }
      goto L_088715C0;
    }
L_088715C0:
    aot_gpr[31] = (0x088715C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 94u, 0x0881C6F4u>(ctx, &aot_mem) && ctx.pc == 0x088715C8u) goto L_088715C8;
    return;
L_088715C8:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088715D4;
      }
      goto L_088715D0;
    }
L_088715D0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088715D4;
L_088715D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3352)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088715A0;
      }
      goto L_088715E8;
    }
L_088715E8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088715F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088715F8u) goto L_088715F8;
    return;
L_088715F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871608;
      }
      goto L_08871600;
    }
L_08871600:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[20]);
      if (branch_taken) {
          goto L_08871630;
      }
      goto L_08871608;
    }
L_08871608:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887161Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x0887161Cu) goto L_0887161C;
    return;
L_0887161C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871630;
      }
      goto L_08871628;
    }
L_08871628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_08871630;
    }
L_08871630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08871658;
      }
      goto L_0887163C;
    }
L_0887163C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887164Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x0887164Cu) goto L_0887164C;
    return;
L_0887164C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871658;
      }
      goto L_08871654;
    }
L_08871654:
    aot_gpr[8] = (0u | 1u);
    goto L_08871658;
L_08871658:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08871CE8;
      }
      goto L_08871660;
    }
L_08871660:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871670u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7236));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871670u) goto L_08871670;
    return;
L_08871670:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088717CC;
      }
      goto L_08871678;
    }
L_08871678:
    aot_gpr[31] = (0x08871680u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x08871680u) goto L_08871680;
    return;
L_08871680:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088716A8;
      }
      goto L_08871698;
    }
L_08871698:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088716A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x088716A4u) goto L_088716A4;
    return;
L_088716A4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088716A8;
L_088716A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088716F8;
      }
      goto L_088716C0;
    }
L_088716C0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088716DC;
      }
      goto L_088716CC;
    }
L_088716CC:
    aot_gpr[31] = (0x088716D4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 141u, 0x0881C9F4u>(ctx, &aot_mem) && ctx.pc == 0x088716D4u) goto L_088716D4;
    return;
L_088716D4:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088716E0;
      }
      goto L_088716DC;
    }
L_088716DC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088716E0;
L_088716E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088716C0;
      }
      goto L_088716F8;
    }
L_088716F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3552)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871754;
      }
      goto L_0887170C;
    }
L_0887170C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(3556));
    aot_gpr[5] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08871720u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 142u, 0x0881CA10u>(ctx, &aot_mem) && ctx.pc == 0x08871720u) goto L_08871720;
    return;
L_08871720:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887173C;
      }
      goto L_0887172C;
    }
L_0887172C:
    aot_gpr[31] = (0x08871734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 141u, 0x0881C9F4u>(ctx, &aot_mem) && ctx.pc == 0x08871734u) goto L_08871734;
    return;
L_08871734:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08871740;
      }
      goto L_0887173C;
    }
L_0887173C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08871740;
L_08871740:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3552)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887170C;
      }
      goto L_08871754;
    }
L_08871754:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08871764u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871764u) goto L_08871764;
    return;
L_08871764:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871774;
      }
      goto L_0887176C;
    }
L_0887176C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871774;
    }
L_08871774:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08871788u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08871788u) goto L_08871788;
    return;
L_08871788:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871794;
    }
L_08871794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_0887179C;
    }
L_0887179C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088717C4;
      }
      goto L_088717A8;
    }
L_088717A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088717B8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x088717B8u) goto L_088717B8;
    return;
L_088717B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088717C4;
      }
      goto L_088717C0;
    }
L_088717C0:
    aot_gpr[8] = (0u | 1u);
    goto L_088717C4;
L_088717C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08871CE8;
      }
      goto L_088717CC;
    }
L_088717CC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088717DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7248));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088717DCu) goto L_088717DC;
    return;
L_088717DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871938;
      }
      goto L_088717E4;
    }
L_088717E4:
    aot_gpr[31] = (0x088717ECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x088717ECu) goto L_088717EC;
    return;
L_088717EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08871814;
      }
      goto L_08871804;
    }
L_08871804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08871810u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x08871810u) goto L_08871810;
    return;
L_08871810:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08871814;
L_08871814:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08871864;
      }
      goto L_0887182C;
    }
L_0887182C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871848;
      }
      goto L_08871838;
    }
L_08871838:
    aot_gpr[31] = (0x08871840u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 168u, 0x0881CBF0u>(ctx, &aot_mem) && ctx.pc == 0x08871840u) goto L_08871840;
    return;
L_08871840:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887184C;
      }
      goto L_08871848;
    }
L_08871848:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0887184C;
L_0887184C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887182C;
      }
      goto L_08871864;
    }
L_08871864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4068)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088718C0;
      }
      goto L_08871878;
    }
L_08871878:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4072));
    aot_gpr[5] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x0887188Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 169u, 0x0881CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887188Cu) goto L_0887188C;
    return;
L_0887188C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088718A8;
      }
      goto L_08871898;
    }
L_08871898:
    aot_gpr[31] = (0x088718A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 168u, 0x0881CBF0u>(ctx, &aot_mem) && ctx.pc == 0x088718A0u) goto L_088718A0;
    return;
L_088718A0:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088718AC;
      }
      goto L_088718A8;
    }
L_088718A8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088718AC;
L_088718AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4068)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871878;
      }
      goto L_088718C0;
    }
L_088718C0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088718D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088718D0u) goto L_088718D0;
    return;
L_088718D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088718E0;
      }
      goto L_088718D8;
    }
L_088718D8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
      if (branch_taken) {
          goto L_08871908;
      }
      goto L_088718E0;
    }
L_088718E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088718F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x088718F4u) goto L_088718F4;
    return;
L_088718F4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871908;
      }
      goto L_08871900;
    }
L_08871900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_08871908;
    }
L_08871908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08871930;
      }
      goto L_08871914;
    }
L_08871914:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08871924u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08871924u) goto L_08871924;
    return;
L_08871924:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871930;
      }
      goto L_0887192C;
    }
L_0887192C:
    aot_gpr[8] = (0u | 1u);
    goto L_08871930;
L_08871930:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08871CE8;
      }
      goto L_08871938;
    }
L_08871938:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871948u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7260));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871948u) goto L_08871948;
    return;
L_08871948:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871AAC;
      }
      goto L_08871950;
    }
L_08871950:
    aot_gpr[31] = (0x08871958u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x08871958u) goto L_08871958;
    return;
L_08871958:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08871980;
      }
      goto L_08871970;
    }
L_08871970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0887197Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x0887197Cu) goto L_0887197C;
    return;
L_0887197C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08871980;
L_08871980:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088719D4;
      }
      goto L_08871998;
    }
L_08871998:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088719B8;
      }
      goto L_088719A4;
    }
L_088719A4:
    aot_gpr[31] = (0x088719ACu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 115u, 0x0881C828u>(ctx, &aot_mem) && ctx.pc == 0x088719ACu) goto L_088719AC;
    return;
L_088719AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088719BC;
      }
      goto L_088719B8;
    }
L_088719B8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088719BC;
L_088719BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871998;
      }
      goto L_088719D4;
    }
L_088719D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3484)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A34;
      }
      goto L_088719E8;
    }
L_088719E8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(3488));
    aot_gpr[5] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088719FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 116u, 0x0881C840u>(ctx, &aot_mem) && ctx.pc == 0x088719FCu) goto L_088719FC;
    return;
L_088719FC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871A1C;
      }
      goto L_08871A08;
    }
L_08871A08:
    aot_gpr[31] = (0x08871A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 115u, 0x0881C828u>(ctx, &aot_mem) && ctx.pc == 0x08871A10u) goto L_08871A10;
    return;
L_08871A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08871A20;
      }
      goto L_08871A1C;
    }
L_08871A1C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08871A20;
L_08871A20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3484)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088719E8;
      }
      goto L_08871A34;
    }
L_08871A34:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08871A44u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871A44u) goto L_08871A44;
    return;
L_08871A44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871A54;
      }
      goto L_08871A4C;
    }
L_08871A4C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
      if (branch_taken) {
          goto L_08871A7C;
      }
      goto L_08871A54;
    }
L_08871A54:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08871A68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08871A68u) goto L_08871A68;
    return;
L_08871A68:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871A7C;
      }
      goto L_08871A74;
    }
L_08871A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_08871A7C;
    }
L_08871A7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08871AA4;
      }
      goto L_08871A88;
    }
L_08871A88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08871A98u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08871A98u) goto L_08871A98;
    return;
L_08871A98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871AA4;
      }
      goto L_08871AA0;
    }
L_08871AA0:
    aot_gpr[8] = (0u | 1u);
    goto L_08871AA4;
L_08871AA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08871CE8;
      }
      goto L_08871AAC;
    }
L_08871AAC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871ABCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7268));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871ABCu) goto L_08871ABC;
    return;
L_08871ABC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_08871AC4;
    }
L_08871AC4:
    aot_gpr[31] = (0x08871ACCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x08871ACCu) goto L_08871ACC;
    return;
L_08871ACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08871AF0;
      }
      goto L_08871AE0;
    }
L_08871AE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08871AECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x08871AECu) goto L_08871AEC;
    return;
L_08871AEC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08871AF0;
L_08871AF0:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08871B38;
      }
      goto L_08871B04;
    }
L_08871B04:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x08871B18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7276));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08871B18u) goto L_08871B18;
    return;
L_08871B18:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871B2C;
      }
      goto L_08871B24;
    }
L_08871B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B38;
      }
      goto L_08871B2C;
    }
L_08871B2C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871B04;
      }
      goto L_08871B38;
    }
L_08871B38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B70;
      }
      goto L_08871B50;
    }
L_08871B50:
    aot_gpr[31] = (0x08871B58u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x08871B58u) goto L_08871B58;
    return;
L_08871B58:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871B50;
      }
      goto L_08871B70;
    }
L_08871B70:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08871BE4;
      }
      goto L_08871B88;
    }
L_08871B88:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871BA4;
      }
      goto L_08871B94;
    }
L_08871B94:
    aot_gpr[31] = (0x08871B9Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x0881CD64u>(ctx, &aot_mem) && ctx.pc == 0x08871B9Cu) goto L_08871B9C;
    return;
L_08871B9C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08871BCC;
      }
      goto L_08871BA4;
    }
L_08871BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08871BC8;
      }
      goto L_08871BB4;
    }
L_08871BB4:
    aot_gpr[31] = (0x08871BBCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x08871BBCu) goto L_08871BBC;
    return;
L_08871BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871BCC;
      }
      goto L_08871BC8;
    }
L_08871BC8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(5));
    goto L_08871BCC;
L_08871BCC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871B88;
      }
      goto L_08871BE4;
    }
L_08871BE4:
    aot_gpr[22] = (0u | 0u);
    goto L_08871BE8;
L_08871BE8:
    aot_gpr[31] = (0x08871BF0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 277u, 0x08874F48u>(ctx, &aot_mem) && ctx.pc == 0x08871BF0u) goto L_08871BF0;
    return;
L_08871BF0:
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871C6C;
      }
      goto L_08871BFC;
    }
L_08871BFC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871C08u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 278u, 0x08874F50u>(ctx, &aot_mem) && ctx.pc == 0x08871C08u) goto L_08871C08;
    return;
L_08871C08:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08871C14u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 180u, 0x0881CCB8u>(ctx, &aot_mem) && ctx.pc == 0x08871C14u) goto L_08871C14;
    return;
L_08871C14:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    aot_gpr[30] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871C30;
      }
      goto L_08871C20;
    }
L_08871C20:
    aot_gpr[31] = (0x08871C28u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x0881CD64u>(ctx, &aot_mem) && ctx.pc == 0x08871C28u) goto L_08871C28;
    return;
L_08871C28:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08871C64;
      }
      goto L_08871C30;
    }
L_08871C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08871C54;
      }
      goto L_08871C40;
    }
L_08871C40:
    aot_gpr[31] = (0x08871C48u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x08871C48u) goto L_08871C48;
    return;
L_08871C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871C64;
      }
      goto L_08871C54;
    }
L_08871C54:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871C60u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x08871C60u) goto L_08871C60;
    return;
L_08871C60:
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[2]);
    goto L_08871C64;
L_08871C64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08871BE8;
      }
      goto L_08871C6C;
    }
L_08871C6C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08871C7Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871C7Cu) goto L_08871C7C;
    return;
L_08871C7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871C8C;
      }
      goto L_08871C84;
    }
L_08871C84:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
      if (branch_taken) {
          goto L_08871CB4;
      }
      goto L_08871C8C;
    }
L_08871C8C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08871CA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08871CA0u) goto L_08871CA0;
    return;
L_08871CA0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08871CB4;
      }
      goto L_08871CAC;
    }
L_08871CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CE4;
      }
      goto L_08871CB4;
    }
L_08871CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08871CDC;
      }
      goto L_08871CC0;
    }
L_08871CC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08871CD0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08871CD0u) goto L_08871CD0;
    return;
L_08871CD0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871CDC;
      }
      goto L_08871CD8;
    }
L_08871CD8:
    aot_gpr[8] = (0u | 1u);
    goto L_08871CDC;
L_08871CDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08871CE8;
      }
      goto L_08871CE4;
    }
L_08871CE4:
    aot_gpr[2] = (0u | 0u);
    goto L_08871CE8;
L_08871CE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871D18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(588), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(592), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(596), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(600), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(604), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(616), aot_gpr[31]);
    aot_gpr[31] = (0x08871D50u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 108u, 0x08A4D7CCu>(ctx, &aot_mem) && ctx.pc == 0x08871D50u) goto L_08871D50;
    return;
L_08871D50:
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (0u | 40u);
    aot_gpr[31] = (0x08871D68u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-10352));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08871D68u) goto L_08871D68;
    return;
L_08871D68:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[31] = (0x08871D78u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 132u, 0x08870794u>(ctx, &aot_mem) && ctx.pc == 0x08871D78u) goto L_08871D78;
    return;
L_08871D78:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08871DDC;
      }
      goto L_08871D8C;
    }
L_08871D8C:
    aot_gpr[4] = (aot_gpr[18] << 5u);
    aot_gpr[5] = (aot_gpr[18] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08871DB0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08871DB0u) goto L_08871DB0;
    return;
L_08871DB0:
    aot_gpr[31] = (0x08871DB8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08871DB8u) goto L_08871DB8;
    return;
L_08871DB8:
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08871DCCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 109u, 0x08A4D7E0u>(ctx, &aot_mem) && ctx.pc == 0x08871DCCu) goto L_08871DCC;
    return;
L_08871DCC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871D8C;
      }
      goto L_08871DDC;
    }
L_08871DDC:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E90;
      }
      goto L_08871DE4;
    }
L_08871DE4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871DF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7076));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871DF8u) goto L_08871DF8;
    return;
L_08871DF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871F94;
      }
      goto L_08871E00;
    }
L_08871E00:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871E10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6948));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871E10u) goto L_08871E10;
    return;
L_08871E10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871F6C;
      }
      goto L_08871E18;
    }
L_08871E18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871E28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7084));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871E28u) goto L_08871E28;
    return;
L_08871E28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871F44;
      }
      goto L_08871E30;
    }
L_08871E30:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871E40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7096));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871E40u) goto L_08871E40;
    return;
L_08871E40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871F1C;
      }
      goto L_08871E48;
    }
L_08871E48:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871E58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6732));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871E58u) goto L_08871E58;
    return;
L_08871E58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871EF4;
      }
      goto L_08871E60;
    }
L_08871E60:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871E70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7104));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871E70u) goto L_08871E70;
    return;
L_08871E70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871ECC;
      }
      goto L_08871E78;
    }
L_08871E78:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08871E88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7112));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08871E88u) goto L_08871E88;
    return;
L_08871E88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871EA4;
      }
      goto L_08871E90;
    }
L_08871E90:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871E9Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871E9Cu) goto L_08871E9C;
    return;
L_08871E9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871EA4;
    }
L_08871EA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871EB4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 200u, 0x08870BC0u>(ctx, &aot_mem) && ctx.pc == 0x08871EB4u) goto L_08871EB4;
    return;
L_08871EB4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871EC4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871EC4u) goto L_08871EC4;
    return;
L_08871EC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871ECC;
    }
L_08871ECC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871EDCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0887138C;
L_08871EDC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871EECu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871EECu) goto L_08871EEC;
    return;
L_08871EEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871EF4;
    }
L_08871EF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871F04u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 186u, 0x08870AF8u>(ctx, &aot_mem) && ctx.pc == 0x08871F04u) goto L_08871F04;
    return;
L_08871F04:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871F14u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871F14u) goto L_08871F14;
    return;
L_08871F14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871F1C;
    }
L_08871F1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871F2Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 142u, 0x08870874u>(ctx, &aot_mem) && ctx.pc == 0x08871F2Cu) goto L_08871F2C;
    return;
L_08871F2C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871F3Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871F3Cu) goto L_08871F3C;
    return;
L_08871F3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871F44;
    }
L_08871F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871F54u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 100u, 0x08870594u>(ctx, &aot_mem) && ctx.pc == 0x08871F54u) goto L_08871F54;
    return;
L_08871F54:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871F64u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871F64u) goto L_08871F64;
    return;
L_08871F64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871F6C;
    }
L_08871F6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871F7Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 231u, 0x08870D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08871F7Cu) goto L_08871F7C;
    return;
L_08871F7C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871F8Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871F8Cu) goto L_08871F8C;
    return;
L_08871F8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871F94;
    }
L_08871F94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08871FA4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 256u, 0x0886FF90u>(ctx, &aot_mem) && ctx.pc == 0x08871FA4u) goto L_08871FA4;
    return;
L_08871FA4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871FB4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 113u, 0x08A4D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08871FB4u) goto L_08871FB4;
    return;
L_08871FB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08871FBC;
      }
      goto L_08871FBC;
    }
L_08871FBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(588)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(604)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871FE4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25432), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x08871000u, 4096u, &recomp_unit_0109, &recomp_unit_0109_entry);
    runtime.register_function(0x08871004u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871010u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871030u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871050u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871054u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887105Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887107Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871088u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871098u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088710F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871108u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887112Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887113Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871150u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887115Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871164u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871178u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871184u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871198u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088711F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871204u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871210u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871218u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871230u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871238u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871240u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871248u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887125Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887126Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871274u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871280u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887128Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088712A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088712A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088712BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088712D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088712D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088712F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871300u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887130Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871318u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871324u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871350u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871354u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887135Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887138Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088713C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088713E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088713ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088713F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871414u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871418u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871430u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887143Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871444u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887144Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871450u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871468u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887148Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871494u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887149Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088714F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887150Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871514u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887152Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871538u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887153Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871554u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871560u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871574u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887158Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088715F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871600u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871608u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887161Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871630u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887163Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887164Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871660u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871670u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871678u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871680u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871698u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088716F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887170Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871720u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887172Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887173Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871740u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887176Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871774u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871788u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887179Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088717ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871804u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871810u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887182Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871840u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871848u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887184Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871864u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871878u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887188Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088718F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871900u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871908u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887192Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871938u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871958u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871970u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x0887197Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871980u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871998u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x088719FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871A98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871ABCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871ACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871AF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871B9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871BFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871C8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871CE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871D18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871D50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871D68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871D78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871D8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871DB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871DB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871DCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871DDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871DE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871DF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871E9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871EA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871EB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871EC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871ECCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871EDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871EECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871EF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871F94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871FA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871FB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871FBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x08871FE4u, &recomp_unit_0109, "recomp_unit_0109");
}
} // namespace psprecomp
