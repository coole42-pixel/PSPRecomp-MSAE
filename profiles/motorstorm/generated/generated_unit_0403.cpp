#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0403[1017] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 14,
    0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    23, 0, 24, 0, 25, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0,
    37, 38, 0, 0, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 48, 0,
    0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 54, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0,
    0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 67, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    73, 0, 74, 0, 75, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 89,
    0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 96, 0, 97, 0, 98, 0, 0, 99, 0, 100, 101, 0, 0, 102, 0,
    0, 0, 103, 0, 104, 105, 0, 106, 0, 0, 107, 108, 0, 109, 0, 110, 111, 0, 0, 112, 113, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 123, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128,
    0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 148,
    0, 149, 0, 150, 0, 151, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 157, 0, 0, 158, 0, 159, 160, 161, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 174, 0, 0, 0, 175, 0,
    0, 0, 176, 0, 177, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 188, 0,
    0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0,
    209, 0, 210, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 232, 0, 0, 233, 234, 0, 235, 0, 236, 0, 0, 237, 0, 238, 239, 240, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 242, 0, 243, 0, 244, 245, 0, 0, 246, 0, 0, 0, 247, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251,
    0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 260, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 273, 274, 0, 0, 275, 0, 276,
    0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 285, 0, 286, 0, 0, 287, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 295, 0, 296, 0, 297, 298, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309,
    0, 0, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313,
};
void recomp_unit_0403_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08997000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0403[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08997000;
    case 2u: goto L_08997008;
    case 3u: goto L_08997010;
    case 4u: goto L_08997018;
    case 5u: goto L_08997020;
    case 6u: goto L_08997034;
    case 7u: goto L_0899703C;
    case 8u: goto L_08997040;
    case 9u: goto L_08997048;
    case 10u: goto L_08997050;
    case 11u: goto L_08997058;
    case 12u: goto L_08997060;
    case 13u: goto L_08997074;
    case 14u: goto L_0899707C;
    case 15u: goto L_08997084;
    case 16u: goto L_0899708C;
    case 17u: goto L_08997094;
    case 18u: goto L_0899709C;
    case 19u: goto L_089970AC;
    case 20u: goto L_089970BC;
    case 21u: goto L_089970C4;
    case 22u: goto L_089970F8;
    case 23u: goto L_08997100;
    case 24u: goto L_08997108;
    case 25u: goto L_08997110;
    case 26u: goto L_08997114;
    case 27u: goto L_08997120;
    case 28u: goto L_08997128;
    case 29u: goto L_08997134;
    case 30u: goto L_08997140;
    case 31u: goto L_0899714C;
    case 32u: goto L_08997154;
    case 33u: goto L_0899715C;
    case 34u: goto L_08997164;
    case 35u: goto L_0899716C;
    case 36u: goto L_08997174;
    case 37u: goto L_08997180;
    case 38u: goto L_08997184;
    case 39u: goto L_08997194;
    case 40u: goto L_089971A4;
    case 41u: goto L_089971A8;
    case 42u: goto L_089971CC;
    case 43u: goto L_089971D4;
    case 44u: goto L_089971DC;
    case 45u: goto L_089971E4;
    case 46u: goto L_089971EC;
    case 47u: goto L_089971F4;
    case 48u: goto L_089971F8;
    case 49u: goto L_08997204;
    case 50u: goto L_0899720C;
    case 51u: goto L_08997214;
    case 52u: goto L_08997220;
    case 53u: goto L_08997230;
    case 54u: goto L_08997238;
    case 55u: goto L_0899723C;
    case 56u: goto L_08997244;
    case 57u: goto L_0899724C;
    case 58u: goto L_08997254;
    case 59u: goto L_0899725C;
    case 60u: goto L_08997270;
    case 61u: goto L_08997278;
    case 62u: goto L_08997284;
    case 63u: goto L_0899728C;
    case 64u: goto L_08997298;
    case 65u: goto L_089972A0;
    case 66u: goto L_089972A8;
    case 67u: goto L_089972AC;
    case 68u: goto L_089972B4;
    case 69u: goto L_089972C0;
    case 70u: goto L_089972C8;
    case 71u: goto L_089972CC;
    case 72u: goto L_089972F4;
    case 73u: goto L_08997300;
    case 74u: goto L_08997308;
    case 75u: goto L_08997310;
    case 76u: goto L_08997314;
    case 77u: goto L_0899731C;
    case 78u: goto L_08997330;
    case 79u: goto L_08997338;
    case 80u: goto L_08997344;
    case 81u: goto L_08997354;
    case 82u: goto L_08997364;
    case 83u: goto L_08997374;
    case 84u: goto L_0899739C;
    case 85u: goto L_089973DC;
    case 86u: goto L_089973E4;
    case 87u: goto L_089973F0;
    case 88u: goto L_089973F8;
    case 89u: goto L_089973FC;
    case 90u: goto L_08997410;
    case 91u: goto L_08997418;
    case 92u: goto L_08997420;
    case 93u: goto L_08997428;
    case 94u: goto L_08997430;
    case 95u: goto L_08997440;
    case 96u: goto L_08997444;
    case 97u: goto L_0899744C;
    case 98u: goto L_08997454;
    case 99u: goto L_08997460;
    case 100u: goto L_08997468;
    case 101u: goto L_0899746C;
    case 102u: goto L_08997478;
    case 103u: goto L_08997488;
    case 104u: goto L_08997490;
    case 105u: goto L_08997494;
    case 106u: goto L_0899749C;
    case 107u: goto L_089974A8;
    case 108u: goto L_089974AC;
    case 109u: goto L_089974B4;
    case 110u: goto L_089974BC;
    case 111u: goto L_089974C0;
    case 112u: goto L_089974CC;
    case 113u: goto L_089974D0;
    case 114u: goto L_089974D4;
    case 115u: goto L_089974D8;
    case 116u: goto L_08997500;
    case 117u: goto L_08997508;
    case 118u: goto L_08997514;
    case 119u: goto L_0899751C;
    case 120u: goto L_08997524;
    case 121u: goto L_0899752C;
    case 122u: goto L_08997534;
    case 123u: goto L_08997540;
    case 124u: goto L_08997544;
    case 125u: goto L_08997554;
    case 126u: goto L_08997564;
    case 127u: goto L_0899756C;
    case 128u: goto L_0899757C;
    case 129u: goto L_08997588;
    case 130u: goto L_08997590;
    case 131u: goto L_08997598;
    case 132u: goto L_089975A0;
    case 133u: goto L_089975A8;
    case 134u: goto L_089975B0;
    case 135u: goto L_089975BC;
    case 136u: goto L_089975C4;
    case 137u: goto L_089975CC;
    case 138u: goto L_089975D8;
    case 139u: goto L_089975E0;
    case 140u: goto L_089975E8;
    case 141u: goto L_089975F0;
    case 142u: goto L_08997600;
    case 143u: goto L_08997610;
    case 144u: goto L_08997618;
    case 145u: goto L_0899765C;
    case 146u: goto L_08997664;
    case 147u: goto L_08997668;
    case 148u: goto L_0899767C;
    case 149u: goto L_08997684;
    case 150u: goto L_0899768C;
    case 151u: goto L_08997694;
    case 152u: goto L_08997698;
    case 153u: goto L_089976A0;
    case 154u: goto L_089976A8;
    case 155u: goto L_089976B4;
    case 156u: goto L_089976BC;
    case 157u: goto L_089976C0;
    case 158u: goto L_089976CC;
    case 159u: goto L_089976D4;
    case 160u: goto L_089976D8;
    case 161u: goto L_089976DC;
    case 162u: goto L_089976E0;
    case 163u: goto L_08997708;
    case 164u: goto L_08997710;
    case 165u: goto L_0899771C;
    case 166u: goto L_08997724;
    case 167u: goto L_0899772C;
    case 168u: goto L_08997738;
    case 169u: goto L_08997740;
    case 170u: goto L_08997748;
    case 171u: goto L_08997750;
    case 172u: goto L_08997758;
    case 173u: goto L_08997764;
    case 174u: goto L_08997768;
    case 175u: goto L_08997778;
    case 176u: goto L_08997788;
    case 177u: goto L_08997790;
    case 178u: goto L_08997794;
    case 179u: goto L_089977A4;
    case 180u: goto L_089977AC;
    case 181u: goto L_089977B4;
    case 182u: goto L_089977BC;
    case 183u: goto L_089977CC;
    case 184u: goto L_089977D8;
    case 185u: goto L_089977E0;
    case 186u: goto L_089977EC;
    case 187u: goto L_089977F4;
    case 188u: goto L_089977F8;
    case 189u: goto L_0899780C;
    case 190u: goto L_08997814;
    case 191u: goto L_08997824;
    case 192u: goto L_08997834;
    case 193u: goto L_0899783C;
    case 194u: goto L_08997844;
    case 195u: goto L_0899784C;
    case 196u: goto L_0899785C;
    case 197u: goto L_0899790C;
    case 198u: goto L_08997918;
    case 199u: goto L_08997920;
    case 200u: goto L_08997930;
    case 201u: goto L_0899793C;
    case 202u: goto L_08997948;
    case 203u: goto L_0899794C;
    case 204u: goto L_08997954;
    case 205u: goto L_0899795C;
    case 206u: goto L_08997964;
    case 207u: goto L_0899796C;
    case 208u: goto L_08997978;
    case 209u: goto L_08997980;
    case 210u: goto L_08997988;
    case 211u: goto L_0899798C;
    case 212u: goto L_08997998;
    case 213u: goto L_089979A0;
    case 214u: goto L_089979AC;
    case 215u: goto L_089979C4;
    case 216u: goto L_089979CC;
    case 217u: goto L_089979E8;
    case 218u: goto L_08997A04;
    case 219u: goto L_08997A18;
    case 220u: goto L_08997A24;
    case 221u: goto L_08997A2C;
    case 222u: goto L_08997A40;
    case 223u: goto L_08997A44;
    case 224u: goto L_08997A50;
    case 225u: goto L_08997A58;
    case 226u: goto L_08997A7C;
    case 227u: goto L_08997A84;
    case 228u: goto L_08997A8C;
    case 229u: goto L_08997A94;
    case 230u: goto L_08997AA0;
    case 231u: goto L_08997AA8;
    case 232u: goto L_08997AAC;
    case 233u: goto L_08997AB8;
    case 234u: goto L_08997ABC;
    case 235u: goto L_08997AC4;
    case 236u: goto L_08997ACC;
    case 237u: goto L_08997AD8;
    case 238u: goto L_08997AE0;
    case 239u: goto L_08997AE4;
    case 240u: goto L_08997AE8;
    case 241u: goto L_08997B00;
    case 242u: goto L_08997B14;
    case 243u: goto L_08997B1C;
    case 244u: goto L_08997B24;
    case 245u: goto L_08997B28;
    case 246u: goto L_08997B34;
    case 247u: goto L_08997B44;
    case 248u: goto L_08997B48;
    case 249u: goto L_08997B5C;
    case 250u: goto L_08997B70;
    case 251u: goto L_08997B7C;
    case 252u: goto L_08997B8C;
    case 253u: goto L_08997B9C;
    case 254u: goto L_08997BB4;
    case 255u: goto L_08997BBC;
    case 256u: goto L_08997BC4;
    case 257u: goto L_08997BCC;
    case 258u: goto L_08997BD8;
    case 259u: goto L_08997C0C;
    case 260u: goto L_08997C20;
    case 261u: goto L_08997C24;
    case 262u: goto L_08997C34;
    case 263u: goto L_08997C3C;
    case 264u: goto L_08997C44;
    case 265u: goto L_08997C5C;
    case 266u: goto L_08997C68;
    case 267u: goto L_08997C70;
    case 268u: goto L_08997C94;
    case 269u: goto L_08997CA8;
    case 270u: goto L_08997CC8;
    case 271u: goto L_08997CD0;
    case 272u: goto L_08997CD8;
    case 273u: goto L_08997CE4;
    case 274u: goto L_08997CE8;
    case 275u: goto L_08997CF4;
    case 276u: goto L_08997CFC;
    case 277u: goto L_08997D04;
    case 278u: goto L_08997D10;
    case 279u: goto L_08997D28;
    case 280u: goto L_08997D74;
    case 281u: goto L_08997D7C;
    case 282u: goto L_08997DB0;
    case 283u: goto L_08997DB8;
    case 284u: goto L_08997DD8;
    case 285u: goto L_08997DDC;
    case 286u: goto L_08997DE4;
    case 287u: goto L_08997DF0;
    case 288u: goto L_08997DF8;
    case 289u: goto L_08997E10;
    case 290u: goto L_08997E1C;
    case 291u: goto L_08997E34;
    case 292u: goto L_08997E40;
    case 293u: goto L_08997E58;
    case 294u: goto L_08997E6C;
    case 295u: goto L_08997E88;
    case 296u: goto L_08997E90;
    case 297u: goto L_08997E98;
    case 298u: goto L_08997E9C;
    case 299u: goto L_08997EA8;
    case 300u: goto L_08997EAC;
    case 301u: goto L_08997EC8;
    case 302u: goto L_08997ED8;
    case 303u: goto L_08997EE4;
    case 304u: goto L_08997EF4;
    case 305u: goto L_08997EF8;
    case 306u: goto L_08997F38;
    case 307u: goto L_08997F48;
    case 308u: goto L_08997F74;
    case 309u: goto L_08997F7C;
    case 310u: goto L_08997F8C;
    case 311u: goto L_08997F90;
    case 312u: goto L_08997FD0;
    case 313u: goto L_08997FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08997000:
    aot_gpr[31] = (0x08997008u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08997008u) goto L_08997008;
    return;
L_08997008:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[17] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 197u, 0x08996E0Cu>(ctx, &aot_mem); return;
    }
    goto L_08997010;
L_08997010:
    aot_gpr[2] = (8192u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 237u, 0x08996FC4u>(ctx, &aot_mem); return;
L_08997018:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[22] | aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 207u, 0x08996E6Cu>(ctx, &aot_mem); return;
      }
      goto L_08997020;
    }
L_08997020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08997034u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x08997034u) goto L_08997034;
    return;
L_08997034:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 208u, 0x08996E70u>(ctx, &aot_mem); return;
L_0899703C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08997040;
L_08997040:
    aot_gpr[31] = (0x08997048u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x08997048u) goto L_08997048;
    return;
L_08997048:
    aot_gpr[31] = (0x08997050u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08997050u) goto L_08997050;
    return;
L_08997050:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 233u, 0x08996F78u>(ctx, &aot_mem); return;
      }
      goto L_08997058;
    }
L_08997058:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[22] | aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 207u, 0x08996E6Cu>(ctx, &aot_mem); return;
      }
      goto L_08997060;
    }
L_08997060:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08997074u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x08997074u) goto L_08997074;
    return;
L_08997074:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 208u, 0x08996E70u>(ctx, &aot_mem); return;
L_0899707C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 237u, 0x08996FC4u>(ctx, &aot_mem); return;
      }
      goto L_08997084;
    }
L_08997084:
    aot_gpr[31] = (0x0899708Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x0899708Cu) goto L_0899708C;
    return;
L_0899708C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (8192u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 221u, 0x08996F08u>(ctx, &aot_mem); return;
      }
      goto L_08997094;
    }
L_08997094:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 237u, 0x08996FC4u>(ctx, &aot_mem); return;
L_0899709C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089970ACu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 31u, 0x08999250u>(ctx, &aot_mem) && ctx.pc == 0x089970ACu) goto L_089970AC;
    return;
L_089970AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089970BCu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 38u, 0x08999350u>(ctx, &aot_mem) && ctx.pc == 0x089970BCu) goto L_089970BC;
    return;
L_089970BC:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 208u, 0x08996E70u>(ctx, &aot_mem); return;
L_089970C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-432));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[18]);
      if (branch_taken) {
          goto L_089972C8;
      }
      goto L_089970F8;
    }
L_089970F8:
    if (aot_gpr[7] == 0u) {
    aot_gpr[18] = (0u + 0u);
        goto L_0899714C;
    }
    goto L_08997100;
L_08997100:
    if (aot_gpr[6] == 0u) {
    aot_gpr[18] = (0u + 0u);
        goto L_0899714C;
    }
    goto L_08997108;
L_08997108:
    if (aot_gpr[5] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08997114;
    }
    goto L_08997110;
L_08997110:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08997114;
L_08997114:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_08997338;
      }
      goto L_08997120;
    }
L_08997120:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08997338;
      }
      goto L_08997128;
    }
L_08997128:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_08997154;
      }
      goto L_08997134;
    }
L_08997134:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08997140u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 26u, 0x089950F8u>(ctx, &aot_mem) && ctx.pc == 0x08997140u) goto L_08997140;
    return;
L_08997140:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[18] = ((aot_gpr[18] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_08997154;
L_0899714C:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + 0u);
    goto L_08997154;
L_08997154:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089971CC;
      }
      goto L_0899715C;
    }
L_0899715C:
    aot_gpr[31] = (0x08997164u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08997164u) goto L_08997164;
    return;
L_08997164:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (24576u << 16u);
      if (branch_taken) {
          goto L_089971CC;
      }
      goto L_0899716C;
    }
L_0899716C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089971A4;
      }
      goto L_08997174;
    }
L_08997174:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[21] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08997354;
    }
    goto L_08997180;
L_08997180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08997184;
L_08997184:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08997194u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 9u, 0x0899D854u>(ctx, &aot_mem) && ctx.pc == 0x08997194u) goto L_08997194;
    return;
L_08997194:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089971A4u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 12u, 0x0899D8D0u>(ctx, &aot_mem) && ctx.pc == 0x089971A4u) goto L_089971A4;
    return;
L_089971A4:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089971A8;
L_089971A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089971CC:
    aot_gpr[31] = (0x089971D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x089971D4u) goto L_089971D4;
    return;
L_089971D4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08997278;
    }
    goto L_089971DC;
L_089971DC:
    if (aot_gpr[16] == 0u) {
    aot_gpr[18] = (0u + 0u);
        goto L_089972CC;
    }
    goto L_089971E4;
L_089971E4:
    aot_gpr[31] = (0x089971ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089971ECu) goto L_089971EC;
    return;
L_089971EC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_089972F4;
    }
    goto L_089971F4;
L_089971F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089971F8;
L_089971F8:
    aot_gpr[16] = (0u | 65535u);
    if (aot_gpr[2] == aot_gpr[16]) {
    aot_gpr[18] = (0u + 0u);
        goto L_089972CC;
    }
    goto L_08997204;
L_08997204:
    aot_gpr[31] = (0x0899720Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x0899720Cu) goto L_0899720C;
    return;
L_0899720C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (0u + 0u);
        goto L_089972CC;
    }
    goto L_08997214;
L_08997214:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[2] = (16384u << 16u);
      if (branch_taken) {
          goto L_089972C8;
      }
      goto L_08997220;
    }
L_08997220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = ((aot_gpr[4] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[29] + 0u);
        goto L_0899723C;
    }
    goto L_08997230;
L_08997230:
    if (aot_gpr[4] != 0u) {
    aot_gpr[18] = (0u + 0u);
        goto L_089972CC;
    }
    goto L_08997238;
L_08997238:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899723C;
L_0899723C:
    aot_gpr[31] = (0x08997244u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x08997244u) goto L_08997244;
    return;
L_08997244:
    aot_gpr[31] = (0x0899724Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x0899724Cu) goto L_0899724C;
    return;
L_0899724C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_089972C8;
      }
      goto L_08997254;
    }
L_08997254:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089971A4;
      }
      goto L_0899725C;
    }
L_0899725C:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08997270u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x08997270u) goto L_08997270;
    return;
L_08997270:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089971A8;
L_08997278:
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (8192u << 16u);
      if (branch_taken) {
          goto L_089972AC;
      }
      goto L_08997284;
    }
L_08997284:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089972A8;
      }
      goto L_0899728C;
    }
L_0899728C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (8192u << 16u);
      if (branch_taken) {
          goto L_089972AC;
      }
      goto L_08997298;
    }
L_08997298:
    aot_gpr[31] = (0x089972A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089972A0u) goto L_089972A0;
    return;
L_089972A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089971E4;
      }
      goto L_089972A8;
    }
L_089972A8:
    aot_gpr[2] = (8192u << 16u);
    goto L_089972AC;
L_089972AC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089971A4;
      }
      goto L_089972B4;
    }
L_089972B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[21] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_08997354;
    }
    goto L_089972C0;
L_089972C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_08997184;
L_089972C8:
    aot_gpr[18] = (0u + 0u);
    goto L_089972CC;
L_089972CC:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089972F4:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (57344u << 16u);
      if (branch_taken) {
          goto L_08997314;
      }
      goto L_08997300;
    }
L_08997300:
    aot_gpr[31] = (0x08997308u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08997308u) goto L_08997308;
    return;
L_08997308:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089971F8;
    }
    goto L_08997310;
L_08997310:
    aot_gpr[2] = (57344u << 16u);
    goto L_08997314;
L_08997314:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089971A4;
      }
      goto L_0899731C;
    }
L_0899731C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08997330u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 86u, 0x089998ECu>(ctx, &aot_mem) && ctx.pc == 0x08997330u) goto L_08997330;
    return;
L_08997330:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089971A8;
L_08997338:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08997344u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 6u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x08997344u) goto L_08997344;
    return;
L_08997344:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[18] = ((aot_gpr[18] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1024));
    goto L_08997154;
L_08997354:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08997364u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 31u, 0x08999250u>(ctx, &aot_mem) && ctx.pc == 0x08997364u) goto L_08997364;
    return;
L_08997364:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08997374u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 38u, 0x08999350u>(ctx, &aot_mem) && ctx.pc == 0x08997374u) goto L_08997374;
    return;
L_08997374:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899739C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[23]);
    aot_gpr[31] = (0x089973DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x089973DCu) goto L_089973DC;
    return;
L_089973DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089974D0;
      }
      goto L_089973E4;
    }
L_089973E4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089973F0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 10u, 0x08995068u>(ctx, &aot_mem) && ctx.pc == 0x089973F0u) goto L_089973F0;
    return;
L_089973F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08997588;
      }
      goto L_089973F8;
    }
L_089973F8:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    goto L_089973FC;
L_089973FC:
    aot_gpr[17] = (aot_gpr[21] + 0u);
    aot_gpr[17] = ((aot_gpr[17] & ~0x1FFFFFFFu) | ((0u & 0x1FFFFFFFu) << 0u));
    aot_gpr[2] = (24576u << 16u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899751C;
      }
      goto L_08997410;
    }
L_08997410:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_08997500;
      }
      goto L_08997418;
    }
L_08997418:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (57344u << 16u);
      if (branch_taken) {
          goto L_0899756C;
      }
      goto L_08997420;
    }
L_08997420:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997444;
      }
      goto L_08997428;
    }
L_08997428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    goto L_08997430;
L_08997430:
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08997440u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 95u, 0x08999A18u>(ctx, &aot_mem) && ctx.pc == 0x08997440u) goto L_08997440;
    return;
L_08997440:
    aot_gpr[18] = (0u + 0u);
    goto L_08997444;
L_08997444:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[2] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089974D4;
      }
      goto L_0899744C;
    }
L_0899744C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
      if (branch_taken) {
          goto L_089974D8;
      }
      goto L_08997454;
    }
L_08997454:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_08997590;
      }
      goto L_08997460;
    }
L_08997460:
    aot_gpr[31] = (0x08997468u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 6u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x08997468u) goto L_08997468;
    return;
L_08997468:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_0899746C;
L_0899746C:
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[2];
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_089974D0;
      }
      goto L_08997478;
    }
L_08997478:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (57344u << 16u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089975C4;
      }
      goto L_08997488;
    }
L_08997488:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-2));
        goto L_089974D0;
    }
    goto L_08997490;
L_08997490:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08997494;
L_08997494:
    aot_gpr[31] = (0x0899749Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x0899749Cu) goto L_0899749C;
    return;
L_0899749C:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089974A8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 110u, 0x08999C08u>(ctx, &aot_mem) && ctx.pc == 0x089974A8u) goto L_089974A8;
    return;
L_089974A8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089974AC;
L_089974AC:
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089975E0;
      }
      goto L_089974B4;
    }
L_089974B4:
    aot_gpr[31] = (0x089974BCu);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 6u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089974BCu) goto L_089974BC;
    return;
L_089974BC:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_089974C0;
L_089974C0:
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089974D4;
      }
      goto L_089974CC;
    }
L_089974CC:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    goto L_089974D0;
L_089974D0:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089974D4;
L_089974D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    goto L_089974D8;
L_089974D8:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997500:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_08997444;
      }
      goto L_08997508;
    }
L_08997508:
    aot_gpr[2] = (8192u << 16u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089975A0;
      }
      goto L_08997514;
    }
L_08997514:
    // nop
    goto L_08997444;
L_0899751C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997444;
      }
      goto L_08997524;
    }
L_08997524:
    aot_gpr[31] = (0x0899752Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x0899752Cu) goto L_0899752C;
    return;
L_0899752C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997444;
      }
      goto L_08997534;
    }
L_08997534:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089975F0;
    }
    goto L_08997540;
L_08997540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08997544;
L_08997544:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08997554u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 9u, 0x0899D854u>(ctx, &aot_mem) && ctx.pc == 0x08997554u) goto L_08997554;
    return;
L_08997554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08997564u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 16u, 0x0899D9A0u>(ctx, &aot_mem) && ctx.pc == 0x08997564u) goto L_08997564;
    return;
L_08997564:
    aot_gpr[18] = (0u + 0u);
    goto L_08997444;
L_0899756C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899757Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x0899757Cu) goto L_0899757C;
    return;
L_0899757C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_08997430;
L_08997588:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_089973FC;
L_08997590:
    aot_gpr[31] = (0x08997598u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 26u, 0x089950F8u>(ctx, &aot_mem) && ctx.pc == 0x08997598u) goto L_08997598;
    return;
L_08997598:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_0899746C;
L_089975A0:
    aot_gpr[31] = (0x089975A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x089975A8u) goto L_089975A8;
    return;
L_089975A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997444;
      }
      goto L_089975B0;
    }
L_089975B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
        goto L_089975F0;
    }
    goto L_089975BC;
L_089975BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_08997544;
L_089975C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08997494;
      }
      goto L_089975CC;
    }
L_089975CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089975D8u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 110u, 0x08999C08u>(ctx, &aot_mem) && ctx.pc == 0x089975D8u) goto L_089975D8;
    return;
L_089975D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089974AC;
L_089975E0:
    aot_gpr[31] = (0x089975E8u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 26u, 0x089950F8u>(ctx, &aot_mem) && ctx.pc == 0x089975E8u) goto L_089975E8;
    return;
L_089975E8:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_089974C0;
L_089975F0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08997600u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 31u, 0x08999250u>(ctx, &aot_mem) && ctx.pc == 0x08997600u) goto L_08997600;
    return;
L_08997600:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08997610u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 41u, 0x089993E0u>(ctx, &aot_mem) && ctx.pc == 0x08997610u) goto L_08997610;
    return;
L_08997610:
    aot_gpr[18] = (0u + 0u);
    goto L_08997444;
L_08997618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[23]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[17]);
      if (branch_taken) {
          goto L_089976D8;
      }
      goto L_0899765C;
    }
L_0899765C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08997668;
    }
    goto L_08997664;
L_08997664:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08997668;
L_08997668:
    aot_gpr[17] = (aot_gpr[21] + 0u);
    aot_gpr[17] = ((aot_gpr[17] & ~0x1FFFFFFFu) | ((0u & 0x1FFFFFFFu) << 0u));
    aot_gpr[2] = (24576u << 16u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08997740;
      }
      goto L_0899767C;
    }
L_0899767C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_08997708;
      }
      goto L_08997684;
    }
L_08997684:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (57344u << 16u);
      if (branch_taken) {
          goto L_089977BC;
      }
      goto L_0899768C;
    }
L_0899768C:
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_08997790;
    }
    goto L_08997694;
L_08997694:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08997698;
L_08997698:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[2] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089976DC;
      }
      goto L_089976A0;
    }
L_089976A0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
      if (branch_taken) {
          goto L_089976E0;
      }
      goto L_089976A8;
    }
L_089976A8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089977AC;
      }
      goto L_089976B4;
    }
L_089976B4:
    aot_gpr[31] = (0x089976BCu);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 6u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089976BCu) goto L_089976BC;
    return;
L_089976BC:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_089976C0;
L_089976C0:
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[2];
    aot_gpr[2] = (57344u << 16u);
      if (branch_taken) {
          goto L_089976D8;
      }
      goto L_089976CC;
    }
L_089976CC:
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_089977D8;
    }
    goto L_089976D4;
L_089976D4:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    goto L_089976D8;
L_089976D8:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089976DC;
L_089976DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    goto L_089976E0;
L_089976E0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997708:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_08997698;
      }
      goto L_08997710;
    }
L_08997710:
    aot_gpr[2] = (8192u << 16u);
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08997698;
    }
    goto L_0899771C;
L_0899771C:
    aot_gpr[31] = (0x08997724u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08997724u) goto L_08997724;
    return;
L_08997724:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997698;
      }
      goto L_0899772C;
    }
L_0899772C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
        goto L_08997814;
    }
    goto L_08997738;
L_08997738:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_08997768;
L_08997740:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997698;
      }
      goto L_08997748;
    }
L_08997748:
    aot_gpr[31] = (0x08997750u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08997750u) goto L_08997750;
    return;
L_08997750:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08997698;
      }
      goto L_08997758;
    }
L_08997758:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08997814;
    }
    goto L_08997764;
L_08997764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08997768;
L_08997768:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08997778u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 9u, 0x0899D854u>(ctx, &aot_mem) && ctx.pc == 0x08997778u) goto L_08997778;
    return;
L_08997778:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08997788u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 16u, 0x0899D9A0u>(ctx, &aot_mem) && ctx.pc == 0x08997788u) goto L_08997788;
    return;
L_08997788:
    aot_gpr[18] = (0u + 0u);
    goto L_08997698;
L_08997790:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    goto L_08997794;
L_08997794:
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089977A4u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 95u, 0x08999A18u>(ctx, &aot_mem) && ctx.pc == 0x089977A4u) goto L_089977A4;
    return;
L_089977A4:
    aot_gpr[18] = (0u + 0u);
    goto L_08997698;
L_089977AC:
    aot_gpr[31] = (0x089977B4u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 26u, 0x089950F8u>(ctx, &aot_mem) && ctx.pc == 0x089977B4u) goto L_089977B4;
    return;
L_089977B4:
    aot_gpr[2] = ((aot_gpr[2] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    goto L_089976C0;
L_089977BC:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089977CCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 170u, 0x08995B58u>(ctx, &aot_mem) && ctx.pc == 0x089977CCu) goto L_089977CC;
    return;
L_089977CC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_08997794;
L_089977D8:
    aot_gpr[31] = (0x089977E0u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 110u, 0x08999C08u>(ctx, &aot_mem) && ctx.pc == 0x089977E0u) goto L_089977E0;
    return;
L_089977E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_0899783C;
      }
      goto L_089977EC;
    }
L_089977EC:
    aot_gpr[31] = (0x089977F4u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 6u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089977F4u) goto L_089977F4;
    return;
L_089977F4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089977F8;
L_089977F8:
    aot_gpr[3] = ((aot_gpr[3] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    aot_gpr[2] = (57344u << 16u);
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    if (aot_gpr[21] != aot_gpr[2]) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-2));
        goto L_089976D8;
    }
    goto L_0899780C;
L_0899780C:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089976DC;
L_08997814:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08997824u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 31u, 0x08999250u>(ctx, &aot_mem) && ctx.pc == 0x08997824u) goto L_08997824;
    return;
L_08997824:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08997834u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 41u, 0x089993E0u>(ctx, &aot_mem) && ctx.pc == 0x08997834u) goto L_08997834;
    return;
L_08997834:
    aot_gpr[18] = (0u + 0u);
    goto L_08997698;
L_0899783C:
    aot_gpr[31] = (0x08997844u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 26u, 0x089950F8u>(ctx, &aot_mem) && ctx.pc == 0x08997844u) goto L_08997844;
    return;
L_08997844:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089977F8;
L_0899784C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899785C:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16028));
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30988));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2788), aot_gpr[4]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28892));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16028), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31912));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-31872));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31236));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(31488));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31000));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-29800));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28644));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28636));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28540));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28348));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28284));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899790C:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997918:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_0899794C;
    }
    goto L_08997920;
L_08997920:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16016)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (2217u << 16u);
      if (branch_taken) {
          goto L_089979A0;
      }
      goto L_08997930;
    }
L_08997930:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16020)));
    if (aot_gpr[4] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089979C4;
    }
    goto L_0899793C;
L_0899793C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[2] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08997954;
      }
      goto L_08997948;
    }
L_08997948:
    aot_gpr[4] = (0u + 0u);
    goto L_0899794C;
L_0899794C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997954:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_0899794C;
    }
    goto L_0899795C;
L_0899795C:
    if (aot_gpr[3] == aot_gpr[5]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0899798C;
    }
    goto L_08997964;
L_08997964:
    if (aot_gpr[6] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0899798C;
    }
    goto L_0899796C;
L_0899796C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[4] = (0u + 0u);
        goto L_0899794C;
    }
    goto L_08997978;
L_08997978:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_0899794C;
    }
    goto L_08997980;
L_08997980:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_08997964;
      }
      goto L_08997988;
    }
L_08997988:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0899798C;
L_0899798C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08997998;
L_08997998:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089979A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16016), aot_gpr[2]);
      if (branch_taken) {
          goto L_089979E8;
      }
      goto L_089979AC;
    }
L_089979AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08997998;
L_089979C4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16020), aot_gpr[2]);
      if (branch_taken) {
          goto L_089979AC;
      }
      goto L_089979CC;
    }
L_089979CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16020), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08997998;
L_089979E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16016), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08997998;
L_08997A04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08997A40;
      }
      goto L_08997A18;
    }
L_08997A18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08997A44;
      }
      goto L_08997A24;
    }
L_08997A24:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08997A2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08997A2Cu) goto L_08997A2C;
    return;
L_08997A2C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16024)));
    aot_gpr[4] = (aot_gpr[16] ^ aot_gpr[3]);
    if (aot_gpr[4] == 0u) aot_gpr[3] = (0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16024), aot_gpr[3]);
    goto L_08997A40;
L_08997A40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08997A44;
L_08997A44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997A50:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem); return;
L_08997A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16020)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_08997A7C;
    }
L_08997A7C:
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    goto L_08997A84;
L_08997A84:
    aot_gpr[31] = (0x08997A8Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_08997A50;
L_08997A8C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[16] + 0u);
        goto L_08997AE8;
    }
    goto L_08997A94;
L_08997A94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08997AAC;
      }
      goto L_08997AA0;
    }
L_08997AA0:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08997A84;
      }
      goto L_08997AA8;
    }
L_08997AA8:
    aot_gpr[2] = (2217u << 16u);
    goto L_08997AAC;
L_08997AAC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16016)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08997AE0;
      }
      goto L_08997AB8;
    }
L_08997AB8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    goto L_08997ABC;
L_08997ABC:
    aot_gpr[31] = (0x08997AC4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_08997A50;
L_08997AC4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[16] + 0u);
        goto L_08997AE8;
    }
    goto L_08997ACC;
L_08997ACC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[16] = (0u + 0u);
        goto L_08997AE4;
    }
    goto L_08997AD8;
L_08997AD8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08997ABC;
      }
      goto L_08997AE0;
    }
L_08997AE0:
    aot_gpr[16] = (0u + 0u);
    goto L_08997AE4;
L_08997AE4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_08997AE8;
L_08997AE8:
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
L_08997B00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08997B9C;
      }
      goto L_08997B14;
    }
L_08997B14:
    aot_gpr[31] = (0x08997B1Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    goto L_08997A58;
L_08997B1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08997B8C;
      }
      goto L_08997B24;
    }
L_08997B24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08997B28;
L_08997B28:
    aot_gpr[2] = (aot_gpr[2] & 128u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_08997B70;
      }
      goto L_08997B34;
    }
L_08997B34:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16020)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16020), aot_gpr[16]);
        goto L_08997BCC;
    }
    goto L_08997B44;
L_08997B44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08997B48;
L_08997B48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08997B5C;
L_08997B5C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997B70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16016)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_08997B48;
    }
    goto L_08997B7C;
L_08997B7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16016), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_08997B5C;
L_08997B8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] & 128u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997BB4;
      }
      goto L_08997B9C;
    }
L_08997B9C:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997BB4:
    aot_gpr[31] = (0x08997BBCu);
    // nop
    goto L_08997918;
L_08997BBC:
    aot_gpr[31] = (0x08997BC4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08997A04;
L_08997BC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08997B28;
L_08997BCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_08997B5C;
L_08997BD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[2] & 192u);
    aot_gpr[4] = (aot_gpr[2] & 32u);
    aot_gpr[5] = (aot_gpr[2] & 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08997C24;
      }
      goto L_08997C0C;
    }
L_08997C0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] & 128u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[3]);
      if (branch_taken) {
          goto L_08997C5C;
      }
      goto L_08997C20;
    }
L_08997C20:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2));
    goto L_08997C24;
L_08997C24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_08997C3C;
    }
    goto L_08997C34;
L_08997C34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997C3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997C34;
      }
      goto L_08997C44;
    }
L_08997C44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997C5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(129));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(130));
      if (branch_taken) {
          goto L_08997C94;
      }
      goto L_08997C68;
    }
L_08997C68:
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2));
        goto L_08997C24;
    }
    goto L_08997C70;
L_08997C70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_08997C24;
L_08997C94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(3));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_08997C24;
L_08997CA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16016)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (2217u << 16u);
        goto L_08997CE8;
    }
    goto L_08997CC8;
L_08997CC8:
    aot_gpr[31] = (0x08997CD0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08997918;
L_08997CD0:
    aot_gpr[31] = (0x08997CD8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08997A04;
L_08997CD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16016)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997CC8;
      }
      goto L_08997CE4;
    }
L_08997CE4:
    aot_gpr[17] = (2217u << 16u);
    goto L_08997CE8;
L_08997CE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16020)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08997D10;
      }
      goto L_08997CF4;
    }
L_08997CF4:
    aot_gpr[31] = (0x08997CFCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08997918;
L_08997CFC:
    aot_gpr[31] = (0x08997D04u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08997A04;
L_08997D04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16020)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08997CF4;
      }
      goto L_08997D10;
    }
L_08997D10:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16024), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[31] = (0x08997D74u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 64u, 0x0899CB04u>(ctx, &aot_mem) && ctx.pc == 0x08997D74u) goto L_08997D74;
    return;
L_08997D74:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08997DB0;
      }
      goto L_08997D7C;
    }
L_08997D7C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997DB0:
    aot_gpr[31] = (0x08997DB8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08997BD8;
L_08997DB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(49));
    aot_gpr[30] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08997E10;
      }
      goto L_08997DD8;
    }
L_08997DD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08997DDC;
L_08997DDC:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_08997DE4;
L_08997DE4:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08997D7C;
      }
      goto L_08997DF0;
    }
L_08997DF0:
    aot_gpr[31] = (0x08997DF8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08997BD8;
L_08997DF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08997DDC;
      }
      goto L_08997E10;
    }
L_08997E10:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08997E1Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08997BD8;
L_08997E1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08997DDC;
      }
      goto L_08997E34;
    }
L_08997E34:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08997E40u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08997BD8;
L_08997E40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[22] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0404_entry, 404u, 3u, 0x08998014u>(ctx, &aot_mem); return;
      }
      goto L_08997E58;
    }
L_08997E58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x08997E6Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_08997BD8;
L_08997E6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_08997EA8;
      }
      goto L_08997E88;
    }
L_08997E88:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08997EA8;
      }
      goto L_08997E90;
    }
L_08997E90:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08997EAC;
    }
    goto L_08997E98;
L_08997E98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08997E9C;
L_08997E9C:
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_08997DE4;
L_08997EA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08997EAC;
L_08997EAC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(63));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[3] = (aot_gpr[16] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[16] = (aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08997EC8u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08997EC8u) goto L_08997EC8;
    return;
L_08997EC8:
    aot_gpr[3] = (aot_gpr[29] + aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08997F7C;
      }
      goto L_08997ED8;
    }
L_08997ED8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(66));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08997E9C;
      }
      goto L_08997EE4;
    }
L_08997EE4:
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_08997F48;
      }
      goto L_08997EF4;
    }
L_08997EF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08997EF8;
L_08997EF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    if (aot_gpr[7] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08997EF8;
    }
    goto L_08997F38;
L_08997F38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_08997DE4;
L_08997F48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[30];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08997F48;
      }
      goto L_08997F74;
    }
L_08997F74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08997E9C;
L_08997F7C:
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_08997FE0;
      }
      goto L_08997F8C;
    }
L_08997F8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08997F90;
L_08997F90:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    if (aot_gpr[7] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08997F90;
    }
    goto L_08997FD0;
L_08997FD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_08997DE4;
L_08997FE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    ctx.pc = 0x08998000u; return;
}

void recomp_unit_0403(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0403_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_403(Runtime &runtime) {
    runtime.register_generated_unit(403u, 0x08997000u, 4096u, &recomp_unit_0403, &recomp_unit_0403_entry);
    runtime.register_function(0x08997000u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997008u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997010u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997018u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997020u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997034u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899703Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997040u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997048u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997050u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997058u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997060u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997074u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899707Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997084u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899708Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997094u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899709Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089970ACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089970BCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089970C4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089970F8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997100u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997108u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997110u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997114u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997120u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997128u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997134u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997140u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899714Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997154u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899715Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997164u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899716Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997174u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997180u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997184u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997194u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971A4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971A8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971D4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971DCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971E4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971ECu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971F4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089971F8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997204u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899720Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997214u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997220u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997230u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997238u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899723Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997244u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899724Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997254u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899725Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997270u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997278u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997284u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899728Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997298u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972A0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972A8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972ACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972B4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972C0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972C8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089972F4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997300u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997308u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997310u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997314u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899731Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997330u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997338u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997344u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997354u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997364u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997374u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899739Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089973DCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089973E4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089973F0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089973F8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089973FCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997410u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997418u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997420u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997428u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997430u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997440u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997444u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899744Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997454u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997460u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997468u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899746Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997478u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997488u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997490u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997494u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899749Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974A8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974ACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974B4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974BCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974C0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974D0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974D4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089974D8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997500u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997508u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997514u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899751Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997524u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899752Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997534u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997540u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997544u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997554u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997564u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899756Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899757Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997588u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997590u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997598u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975A0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975A8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975B0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975BCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975C4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975D8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975E0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975E8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089975F0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997600u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997610u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997618u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899765Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997664u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997668u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899767Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997684u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899768Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997694u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997698u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976A0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976A8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976B4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976BCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976C0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976D4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976D8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976DCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089976E0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997708u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997710u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899771Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997724u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899772Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997738u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997740u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997748u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997750u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997758u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997764u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997768u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997778u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997788u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997790u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997794u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977A4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977ACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977B4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977BCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977D8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977E0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977ECu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977F4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089977F8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899780Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997814u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997824u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997834u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899783Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997844u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899784Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899785Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899790Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997918u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997920u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997930u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899793Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997948u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899794Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997954u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899795Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997964u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899796Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997978u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997980u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997988u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x0899798Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997998u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089979A0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089979ACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089979C4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089979CCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x089979E8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A04u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A18u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A24u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A2Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A40u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A44u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A50u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A58u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A7Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A84u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A8Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997A94u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AA0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AA8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AB8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997ABCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AC4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997ACCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AD8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AE0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AE4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997AE8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B00u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B14u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B1Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B24u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B28u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B34u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B44u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B48u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B5Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B70u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B7Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B8Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997B9Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997BB4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997BBCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997BC4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997BCCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997BD8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C0Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C20u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C24u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C34u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C3Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C44u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C5Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C68u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C70u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997C94u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CA8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CC8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CD0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CD8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CE4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CE8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CF4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997CFCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997D04u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997D10u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997D28u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997D74u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997D7Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DB0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DB8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DD8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DDCu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DE4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DF0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997DF8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E10u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E1Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E34u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E40u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E58u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E6Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E88u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E90u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E98u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997E9Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997EA8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997EACu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997EC8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997ED8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997EE4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997EF4u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997EF8u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997F38u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997F48u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997F74u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997F7Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997F8Cu, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997F90u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997FD0u, &recomp_unit_0403, "recomp_unit_0403");
    runtime.register_function(0x08997FE0u, &recomp_unit_0403, "recomp_unit_0403");
}
} // namespace psprecomp
