#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0505[1022] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0,
    10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0,
    0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 37, 0,
    38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 48, 0, 0, 0, 49, 0, 0, 50, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 65, 0, 66, 0, 67, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 76,
    0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86,
    0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 103, 0, 104, 0, 105, 0, 106,
    0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 126, 0, 0, 127, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0,
    0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 174, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0,
    188, 0, 0, 189, 0, 190, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0,
    200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0,
    0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 217, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0,
    222, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 231, 0, 0, 232, 233, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0,
    0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0,
    0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 270,
    0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276, 0, 0, 277, 278, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297,
};
void recomp_unit_0505_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089FD000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0505[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FD000;
    case 2u: goto L_089FD00C;
    case 3u: goto L_089FD018;
    case 4u: goto L_089FD028;
    case 5u: goto L_089FD030;
    case 6u: goto L_089FD048;
    case 7u: goto L_089FD064;
    case 8u: goto L_089FD06C;
    case 9u: goto L_089FD078;
    case 10u: goto L_089FD080;
    case 11u: goto L_089FD094;
    case 12u: goto L_089FD0CC;
    case 13u: goto L_089FD0D4;
    case 14u: goto L_089FD0DC;
    case 15u: goto L_089FD0E8;
    case 16u: goto L_089FD0F0;
    case 17u: goto L_089FD11C;
    case 18u: goto L_089FD124;
    case 19u: goto L_089FD12C;
    case 20u: goto L_089FD134;
    case 21u: goto L_089FD144;
    case 22u: goto L_089FD150;
    case 23u: goto L_089FD158;
    case 24u: goto L_089FD168;
    case 25u: goto L_089FD170;
    case 26u: goto L_089FD178;
    case 27u: goto L_089FD188;
    case 28u: goto L_089FD194;
    case 29u: goto L_089FD19C;
    case 30u: goto L_089FD1AC;
    case 31u: goto L_089FD1B8;
    case 32u: goto L_089FD1C0;
    case 33u: goto L_089FD1D0;
    case 34u: goto L_089FD1DC;
    case 35u: goto L_089FD1E4;
    case 36u: goto L_089FD1F4;
    case 37u: goto L_089FD1F8;
    case 38u: goto L_089FD200;
    case 39u: goto L_089FD208;
    case 40u: goto L_089FD210;
    case 41u: goto L_089FD218;
    case 42u: goto L_089FD224;
    case 43u: goto L_089FD238;
    case 44u: goto L_089FD240;
    case 45u: goto L_089FD248;
    case 46u: goto L_089FD250;
    case 47u: goto L_089FD27C;
    case 48u: goto L_089FD284;
    case 49u: goto L_089FD294;
    case 50u: goto L_089FD2A0;
    case 51u: goto L_089FD2A4;
    case 52u: goto L_089FD2BC;
    case 53u: goto L_089FD2C4;
    case 54u: goto L_089FD2CC;
    case 55u: goto L_089FD2D8;
    case 56u: goto L_089FD2F8;
    case 57u: goto L_089FD304;
    case 58u: goto L_089FD30C;
    case 59u: goto L_089FD314;
    case 60u: goto L_089FD31C;
    case 61u: goto L_089FD324;
    case 62u: goto L_089FD330;
    case 63u: goto L_089FD35C;
    case 64u: goto L_089FD37C;
    case 65u: goto L_089FD38C;
    case 66u: goto L_089FD394;
    case 67u: goto L_089FD39C;
    case 68u: goto L_089FD3A0;
    case 69u: goto L_089FD3A8;
    case 70u: goto L_089FD3B0;
    case 71u: goto L_089FD3BC;
    case 72u: goto L_089FD3D8;
    case 73u: goto L_089FD3E4;
    case 74u: goto L_089FD3EC;
    case 75u: goto L_089FD3F4;
    case 76u: goto L_089FD3FC;
    case 77u: goto L_089FD404;
    case 78u: goto L_089FD40C;
    case 79u: goto L_089FD428;
    case 80u: goto L_089FD434;
    case 81u: goto L_089FD43C;
    case 82u: goto L_089FD444;
    case 83u: goto L_089FD44C;
    case 84u: goto L_089FD468;
    case 85u: goto L_089FD474;
    case 86u: goto L_089FD47C;
    case 87u: goto L_089FD484;
    case 88u: goto L_089FD49C;
    case 89u: goto L_089FD4B0;
    case 90u: goto L_089FD4BC;
    case 91u: goto L_089FD4C4;
    case 92u: goto L_089FD4D0;
    case 93u: goto L_089FD4EC;
    case 94u: goto L_089FD4F0;
    case 95u: goto L_089FD500;
    case 96u: goto L_089FD514;
    case 97u: goto L_089FD51C;
    case 98u: goto L_089FD528;
    case 99u: goto L_089FD538;
    case 100u: goto L_089FD550;
    case 101u: goto L_089FD558;
    case 102u: goto L_089FD560;
    case 103u: goto L_089FD564;
    case 104u: goto L_089FD56C;
    case 105u: goto L_089FD574;
    case 106u: goto L_089FD57C;
    case 107u: goto L_089FD58C;
    case 108u: goto L_089FD59C;
    case 109u: goto L_089FD5A8;
    case 110u: goto L_089FD5B0;
    case 111u: goto L_089FD5C8;
    case 112u: goto L_089FD5D4;
    case 113u: goto L_089FD5DC;
    case 114u: goto L_089FD5FC;
    case 115u: goto L_089FD604;
    case 116u: goto L_089FD60C;
    case 117u: goto L_089FD614;
    case 118u: goto L_089FD61C;
    case 119u: goto L_089FD634;
    case 120u: goto L_089FD63C;
    case 121u: goto L_089FD644;
    case 122u: goto L_089FD650;
    case 123u: goto L_089FD654;
    case 124u: goto L_089FD67C;
    case 125u: goto L_089FD684;
    case 126u: goto L_089FD68C;
    case 127u: goto L_089FD698;
    case 128u: goto L_089FD69C;
    case 129u: goto L_089FD6B4;
    case 130u: goto L_089FD6BC;
    case 131u: goto L_089FD6D4;
    case 132u: goto L_089FD6E0;
    case 133u: goto L_089FD6EC;
    case 134u: goto L_089FD700;
    case 135u: goto L_089FD710;
    case 136u: goto L_089FD718;
    case 137u: goto L_089FD720;
    case 138u: goto L_089FD730;
    case 139u: goto L_089FD73C;
    case 140u: goto L_089FD744;
    case 141u: goto L_089FD748;
    case 142u: goto L_089FD75C;
    case 143u: goto L_089FD778;
    case 144u: goto L_089FD798;
    case 145u: goto L_089FD7A0;
    case 146u: goto L_089FD7A8;
    case 147u: goto L_089FD7B4;
    case 148u: goto L_089FD7BC;
    case 149u: goto L_089FD7C4;
    case 150u: goto L_089FD7CC;
    case 151u: goto L_089FD7E0;
    case 152u: goto L_089FD804;
    case 153u: goto L_089FD80C;
    case 154u: goto L_089FD818;
    case 155u: goto L_089FD820;
    case 156u: goto L_089FD828;
    case 157u: goto L_089FD844;
    case 158u: goto L_089FD84C;
    case 159u: goto L_089FD860;
    case 160u: goto L_089FD868;
    case 161u: goto L_089FD884;
    case 162u: goto L_089FD894;
    case 163u: goto L_089FD8A8;
    case 164u: goto L_089FD8B0;
    case 165u: goto L_089FD8BC;
    case 166u: goto L_089FD8CC;
    case 167u: goto L_089FD8E8;
    case 168u: goto L_089FD8F4;
    case 169u: goto L_089FD904;
    case 170u: goto L_089FD90C;
    case 171u: goto L_089FD914;
    case 172u: goto L_089FD920;
    case 173u: goto L_089FD930;
    case 174u: goto L_089FD938;
    case 175u: goto L_089FD93C;
    case 176u: goto L_089FD954;
    case 177u: goto L_089FD978;
    case 178u: goto L_089FD984;
    case 179u: goto L_089FD994;
    case 180u: goto L_089FD99C;
    case 181u: goto L_089FD9A4;
    case 182u: goto L_089FD9B4;
    case 183u: goto L_089FD9C0;
    case 184u: goto L_089FD9CC;
    case 185u: goto L_089FD9DC;
    case 186u: goto L_089FD9EC;
    case 187u: goto L_089FD9F8;
    case 188u: goto L_089FDA00;
    case 189u: goto L_089FDA0C;
    case 190u: goto L_089FDA14;
    case 191u: goto L_089FDA18;
    case 192u: goto L_089FDA20;
    case 193u: goto L_089FDA30;
    case 194u: goto L_089FDA3C;
    case 195u: goto L_089FDA50;
    case 196u: goto L_089FDA58;
    case 197u: goto L_089FDA60;
    case 198u: goto L_089FDA68;
    case 199u: goto L_089FDA78;
    case 200u: goto L_089FDA80;
    case 201u: goto L_089FDA90;
    case 202u: goto L_089FDA98;
    case 203u: goto L_089FDAA0;
    case 204u: goto L_089FDAAC;
    case 205u: goto L_089FDABC;
    case 206u: goto L_089FDAC4;
    case 207u: goto L_089FDAD4;
    case 208u: goto L_089FDAE4;
    case 209u: goto L_089FDAF0;
    case 210u: goto L_089FDAF8;
    case 211u: goto L_089FDB08;
    case 212u: goto L_089FDB14;
    case 213u: goto L_089FDB1C;
    case 214u: goto L_089FDB28;
    case 215u: goto L_089FDB30;
    case 216u: goto L_089FDB3C;
    case 217u: goto L_089FDB40;
    case 218u: goto L_089FDB44;
    case 219u: goto L_089FDB4C;
    case 220u: goto L_089FDB5C;
    case 221u: goto L_089FDB78;
    case 222u: goto L_089FDB80;
    case 223u: goto L_089FDB8C;
    case 224u: goto L_089FDB94;
    case 225u: goto L_089FDBA4;
    case 226u: goto L_089FDBB0;
    case 227u: goto L_089FDBB8;
    case 228u: goto L_089FDBC0;
    case 229u: goto L_089FDBE0;
    case 230u: goto L_089FDC04;
    case 231u: goto L_089FDC10;
    case 232u: goto L_089FDC1C;
    case 233u: goto L_089FDC20;
    case 234u: goto L_089FDC28;
    case 235u: goto L_089FDC34;
    case 236u: goto L_089FDC3C;
    case 237u: goto L_089FDC44;
    case 238u: goto L_089FDC50;
    case 239u: goto L_089FDC5C;
    case 240u: goto L_089FDC64;
    case 241u: goto L_089FDC6C;
    case 242u: goto L_089FDC78;
    case 243u: goto L_089FDC84;
    case 244u: goto L_089FDC8C;
    case 245u: goto L_089FDC94;
    case 246u: goto L_089FDCA0;
    case 247u: goto L_089FDCB0;
    case 248u: goto L_089FDCB8;
    case 249u: goto L_089FDCC4;
    case 250u: goto L_089FDCCC;
    case 251u: goto L_089FDCD4;
    case 252u: goto L_089FDCE0;
    case 253u: goto L_089FDD00;
    case 254u: goto L_089FDD30;
    case 255u: goto L_089FDD3C;
    case 256u: goto L_089FDD54;
    case 257u: goto L_089FDD68;
    case 258u: goto L_089FDD74;
    case 259u: goto L_089FDD84;
    case 260u: goto L_089FDD94;
    case 261u: goto L_089FDD9C;
    case 262u: goto L_089FDDA8;
    case 263u: goto L_089FDDB0;
    case 264u: goto L_089FDDBC;
    case 265u: goto L_089FDDC4;
    case 266u: goto L_089FDDCC;
    case 267u: goto L_089FDDE0;
    case 268u: goto L_089FDDEC;
    case 269u: goto L_089FDDF8;
    case 270u: goto L_089FDDFC;
    case 271u: goto L_089FDE04;
    case 272u: goto L_089FDE10;
    case 273u: goto L_089FDE1C;
    case 274u: goto L_089FDE28;
    case 275u: goto L_089FDE30;
    case 276u: goto L_089FDE38;
    case 277u: goto L_089FDE44;
    case 278u: goto L_089FDE48;
    case 279u: goto L_089FDE50;
    case 280u: goto L_089FDE58;
    case 281u: goto L_089FDE78;
    case 282u: goto L_089FDE90;
    case 283u: goto L_089FDE9C;
    case 284u: goto L_089FDEB4;
    case 285u: goto L_089FDED8;
    case 286u: goto L_089FDF00;
    case 287u: goto L_089FDF14;
    case 288u: goto L_089FDF40;
    case 289u: goto L_089FDF4C;
    case 290u: goto L_089FDF70;
    case 291u: goto L_089FDF8C;
    case 292u: goto L_089FDF94;
    case 293u: goto L_089FDFB0;
    case 294u: goto L_089FDFC8;
    case 295u: goto L_089FDFD0;
    case 296u: goto L_089FDFD8;
    case 297u: goto L_089FDFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FD000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FD00Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD00Cu) goto L_089FD00C;
    return;
L_089FD00C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[31] = (0x089FD018u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD018u) goto L_089FD018;
    return;
L_089FD018:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[31] = (0x089FD028u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 98u, 0x089FC550u>(ctx, &aot_mem) && ctx.pc == 0x089FD028u) goto L_089FD028;
    return;
L_089FD028:
    aot_gpr[31] = (0x089FD030u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 208u, 0x089FCC04u>(ctx, &aot_mem) && ctx.pc == 0x089FD030u) goto L_089FD030;
    return;
L_089FD030:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2068)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2072)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2080));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FD080;
      }
      goto L_089FD064;
    }
L_089FD064:
    aot_gpr[31] = (0x089FD06Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FD49C;
L_089FD06C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD080;
      }
      goto L_089FD078;
    }
L_089FD078:
    aot_gpr[31] = (0x089FD080u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FD500;
L_089FD080:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1648));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1612), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1616), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1620), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1624), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1628), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1632), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1636), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1640), aot_gpr[31]);
    aot_gpr[31] = (0x089FD0CCu);
    aot_gpr[19] = (0u | 0u);
    goto L_089FD538;
L_089FD0CC:
    aot_gpr[31] = (0x089FD0D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 8u, 0x089FC074u>(ctx, &aot_mem) && ctx.pc == 0x089FD0D4u) goto L_089FD0D4;
    return;
L_089FD0D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD0F0;
      }
      goto L_089FD0DC;
    }
L_089FD0DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD11C;
      }
      goto L_089FD0E8;
    }
L_089FD0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD330;
      }
      goto L_089FD0F0;
    }
L_089FD0F0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD11C:
    aot_gpr[31] = (0x089FD124u);
    // nop
    goto L_089FD5A8;
L_089FD124:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD170;
      }
      goto L_089FD12C;
    }
L_089FD12C:
    aot_gpr[31] = (0x089FD134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FD134u) goto L_089FD134;
    return;
L_089FD134:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD144u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7648));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FD144u) goto L_089FD144;
    return;
L_089FD144:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD200;
      }
      goto L_089FD150;
    }
L_089FD150:
    aot_gpr[31] = (0x089FD158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FD158u) goto L_089FD158;
    return;
L_089FD158:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD168u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7624));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FD168u) goto L_089FD168;
    return;
L_089FD168:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089FD1F8;
      }
      goto L_089FD170;
    }
L_089FD170:
    aot_gpr[31] = (0x089FD178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FD178u) goto L_089FD178;
    return;
L_089FD178:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD188u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7600));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FD188u) goto L_089FD188;
    return;
L_089FD188:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD200;
      }
      goto L_089FD194;
    }
L_089FD194:
    aot_gpr[31] = (0x089FD19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FD19Cu) goto L_089FD19C;
    return;
L_089FD19C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD1ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7584));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FD1ACu) goto L_089FD1AC;
    return;
L_089FD1AC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD200;
      }
      goto L_089FD1B8;
    }
L_089FD1B8:
    aot_gpr[31] = (0x089FD1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FD1C0u) goto L_089FD1C0;
    return;
L_089FD1C0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD1D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7568));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FD1D0u) goto L_089FD1D0;
    return;
L_089FD1D0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD200;
      }
      goto L_089FD1DC;
    }
L_089FD1DC:
    aot_gpr[31] = (0x089FD1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FD1E4u) goto L_089FD1E4;
    return;
L_089FD1E4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD1F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7552));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FD1F4u) goto L_089FD1F4;
    return;
L_089FD1F4:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_089FD1F8;
L_089FD1F8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD248;
      }
      goto L_089FD200;
    }
L_089FD200:
    aot_gpr[31] = (0x089FD208u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FD208u) goto L_089FD208;
    return;
L_089FD208:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089FD248;
      }
      goto L_089FD210;
    }
L_089FD210:
    aot_gpr[31] = (0x089FD218u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x089FD218u) goto L_089FD218;
    return;
L_089FD218:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(668));
    aot_gpr[31] = (0x089FD224u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 80u, 0x089F143Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD224u) goto L_089FD224;
    return;
L_089FD224:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FD238u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x089FD238u) goto L_089FD238;
    return;
L_089FD238:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_089FD27C;
    }
    goto L_089FD240;
L_089FD240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FD2A4;
      }
      goto L_089FD248;
    }
L_089FD248:
    aot_gpr[31] = (0x089FD250u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089FD5A8;
L_089FD250:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD27C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FD2A4;
      }
      goto L_089FD284;
    }
L_089FD284:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FD294u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x089FD294u) goto L_089FD294;
    return;
L_089FD294:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FD2A0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x089FD2A0u) goto L_089FD2A0;
    return;
L_089FD2A0:
    aot_gpr[4] = (0u | 1u);
    goto L_089FD2A4;
L_089FD2A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1344), 0u);
    aot_gpr[31] = (0x089FD2BCu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_089FD5B0;
L_089FD2BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089FD31C;
      }
      goto L_089FD2C4;
    }
L_089FD2C4:
    aot_gpr[31] = (0x089FD2CCu);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x089FD2CCu) goto L_089FD2CC;
    return;
L_089FD2CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FD2D8u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 8u, 0x089FC074u>(ctx, &aot_mem) && ctx.pc == 0x089FD2D8u) goto L_089FD2D8;
    return;
L_089FD2D8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x089FD2F8u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 91u, 0x089F14F4u>(ctx, &aot_mem) && ctx.pc == 0x089FD2F8u) goto L_089FD2F8;
    return;
L_089FD2F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FD304u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 16u, 0x089FC0D8u>(ctx, &aot_mem) && ctx.pc == 0x089FD304u) goto L_089FD304;
    return;
L_089FD304:
    aot_gpr[31] = (0x089FD30Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 15u, 0x089FC0D0u>(ctx, &aot_mem) && ctx.pc == 0x089FD30Cu) goto L_089FD30C;
    return;
L_089FD30C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089FD31C;
      }
      goto L_089FD314;
    }
L_089FD314:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089FD31C;
L_089FD31C:
    aot_gpr[31] = (0x089FD324u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD324u) goto L_089FD324;
    return;
L_089FD324:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FD330u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD330u) goto L_089FD330;
    return;
L_089FD330:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD35C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FD37Cu);
    aot_gpr[17] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 9u, 0x089FC07Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD37Cu) goto L_089FD37C;
    return;
L_089FD37C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FD3A0;
      }
      goto L_089FD38C;
    }
L_089FD38C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089FD484;
      }
      goto L_089FD394;
    }
L_089FD394:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089FD484;
      }
      goto L_089FD39C;
    }
L_089FD39C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    goto L_089FD3A0;
L_089FD3A0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089FD3F4;
      }
      goto L_089FD3A8;
    }
L_089FD3A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD484;
      }
      goto L_089FD3B0;
    }
L_089FD3B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FD3BCu);
    aot_gpr[17] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 20u, 0x089FC128u>(ctx, &aot_mem) && ctx.pc == 0x089FD3BCu) goto L_089FD3BC;
    return;
L_089FD3BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FD3D8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD3D8u) goto L_089FD3D8;
    return;
L_089FD3D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FD3E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD3E4u) goto L_089FD3E4;
    return;
L_089FD3E4:
    aot_gpr[31] = (0x089FD3ECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FD538;
L_089FD3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD484;
      }
      goto L_089FD3F4;
    }
L_089FD3F4:
    aot_gpr[31] = (0x089FD3FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 11u, 0x089FC098u>(ctx, &aot_mem) && ctx.pc == 0x089FD3FCu) goto L_089FD3FC;
    return;
L_089FD3FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FD444;
      }
      goto L_089FD404;
    }
L_089FD404:
    aot_gpr[31] = (0x089FD40Cu);
    aot_gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 20u, 0x089FC128u>(ctx, &aot_mem) && ctx.pc == 0x089FD40Cu) goto L_089FD40C;
    return;
L_089FD40C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FD428u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD428u) goto L_089FD428;
    return;
L_089FD428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FD434u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD434u) goto L_089FD434;
    return;
L_089FD434:
    aot_gpr[31] = (0x089FD43Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FD538;
L_089FD43C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD484;
      }
      goto L_089FD444;
    }
L_089FD444:
    aot_gpr[31] = (0x089FD44Cu);
    aot_gpr[17] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 20u, 0x089FC128u>(ctx, &aot_mem) && ctx.pc == 0x089FD44Cu) goto L_089FD44C;
    return;
L_089FD44C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FD468u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD468u) goto L_089FD468;
    return;
L_089FD468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FD474u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 187u, 0x089FBCDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD474u) goto L_089FD474;
    return;
L_089FD474:
    aot_gpr[31] = (0x089FD47Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FD538;
L_089FD47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD484;
      }
      goto L_089FD484;
    }
L_089FD484:
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
L_089FD49C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FD4B0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_089FD538;
L_089FD4B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD4F0;
      }
      goto L_089FD4BC;
    }
L_089FD4BC:
    aot_gpr[31] = (0x089FD4C4u);
    // nop
    goto L_089FD58C;
L_089FD4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
        goto L_089FD4F0;
    }
    goto L_089FD4D0;
L_089FD4D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1036)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FD4ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD4ECu) goto L_089FD4EC;
    return;
L_089FD4EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_089FD4F0;
L_089FD4F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD500:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FD514u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD514u) goto L_089FD514;
    return;
L_089FD514:
    aot_gpr[31] = (0x089FD51Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD51Cu) goto L_089FD51C;
    return;
L_089FD51C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD528u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD528u) goto L_089FD528;
    return;
L_089FD528:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD538:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FD550u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 8u, 0x089FC074u>(ctx, &aot_mem) && ctx.pc == 0x089FD550u) goto L_089FD550;
    return;
L_089FD550:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FD564;
      }
      goto L_089FD558;
    }
L_089FD558:
    aot_gpr[31] = (0x089FD560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 13u, 0x089FC0B4u>(ctx, &aot_mem) && ctx.pc == 0x089FD560u) goto L_089FD560;
    return;
L_089FD560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FD564;
L_089FD564:
    aot_gpr[31] = (0x089FD56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 15u, 0x089FC0D0u>(ctx, &aot_mem) && ctx.pc == 0x089FD56Cu) goto L_089FD56C;
    return;
L_089FD56C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD57C;
      }
      goto L_089FD574;
    }
L_089FD574:
    aot_gpr[31] = (0x089FD57Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 17u, 0x089FC0E0u>(ctx, &aot_mem) && ctx.pc == 0x089FD57Cu) goto L_089FD57C;
    return;
L_089FD57C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD58C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FD59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 10u, 0x089EF094u>(ctx, &aot_mem) && ctx.pc == 0x089FD59Cu) goto L_089FD59C;
    return;
L_089FD59C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD5A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD5B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089FD5C8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 153u, 0x089F0884u>(ctx, &aot_mem) && ctx.pc == 0x089FD5C8u) goto L_089FD5C8;
    return;
L_089FD5C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD5D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD5DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_089FD5FC;
    }
    goto L_089FD5FC;
L_089FD5FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD604:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD60C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD614:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD61C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FD654;
      }
      goto L_089FD634;
    }
L_089FD634:
    aot_gpr[31] = (0x089FD63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD63Cu) goto L_089FD63C;
    return;
L_089FD63C:
    aot_gpr[31] = (0x089FD644u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD644u) goto L_089FD644;
    return;
L_089FD644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089FD650u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD650u) goto L_089FD650;
    return;
L_089FD650:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089FD654;
L_089FD654:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_089FD69C;
      }
      goto L_089FD67C;
    }
L_089FD67C:
    aot_gpr[31] = (0x089FD684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD684u) goto L_089FD684;
    return;
L_089FD684:
    aot_gpr[31] = (0x089FD68Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD68Cu) goto L_089FD68C;
    return;
L_089FD68C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (0x089FD698u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD698u) goto L_089FD698;
    return;
L_089FD698:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), 0u);
    goto L_089FD69C;
L_089FD69C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD6B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD6BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089FD748;
      }
      goto L_089FD6D4;
    }
L_089FD6D4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x089FD6E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7488));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089FD6E0u) goto L_089FD6E0;
    return;
L_089FD6E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD748;
      }
      goto L_089FD6EC;
    }
L_089FD6EC:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FD700u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD700u) goto L_089FD700;
    return;
L_089FD700:
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 60u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_089FD710;
L_089FD710:
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[6] = (aot_gpr[4] | 0u);
        goto L_089FD730;
    }
    goto L_089FD718;
L_089FD718:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FD730;
      }
      goto L_089FD720;
    }
L_089FD720:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089FD710;
      }
      goto L_089FD730;
    }
L_089FD730:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FD73Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FD73Cu) goto L_089FD73C;
    return;
L_089FD73C:
    aot_gpr[31] = (0x089FD744u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x089FD744u) goto L_089FD744;
    return;
L_089FD744:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089FD748;
L_089FD748:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD75C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FD7CC;
      }
      goto L_089FD778;
    }
L_089FD778:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11160));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(532), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18584), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_089FD7BC;
      }
      goto L_089FD798;
    }
L_089FD798:
    aot_gpr[31] = (0x089FD7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD7A0u) goto L_089FD7A0;
    return;
L_089FD7A0:
    aot_gpr[31] = (0x089FD7A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD7A8u) goto L_089FD7A8;
    return;
L_089FD7A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(516)));
    aot_gpr[31] = (0x089FD7B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD7B4u) goto L_089FD7B4;
    return;
L_089FD7B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(516), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_089FD7BC;
L_089FD7BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD7CC;
      }
      goto L_089FD7C4;
    }
L_089FD7C4:
    aot_gpr[31] = (0x089FD7CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FD894;
L_089FD7CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD7E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18584)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089FD828;
      }
      goto L_089FD804;
    }
L_089FD804:
    aot_gpr[31] = (0x089FD80Cu);
    aot_gpr[4] = (0u | 536u);
    goto L_089FD84C;
L_089FD80C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18584), aot_gpr[17]);
        goto L_089FD828;
    }
    goto L_089FD818;
L_089FD818:
    aot_gpr[31] = (0x089FD820u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FDBC0;
L_089FD820:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18584), aot_gpr[17]);
    goto L_089FD828;
L_089FD828:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18584)));
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
L_089FD844:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD84C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FD860u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD860u) goto L_089FD860;
    return;
L_089FD860:
    aot_gpr[31] = (0x089FD868u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD868u) goto L_089FD868;
    return;
L_089FD868:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 36u);
    aot_gpr[31] = (0x089FD884u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6848));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FD884u) goto L_089FD884;
    return;
L_089FD884:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD894:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FD8A8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FD8A8u) goto L_089FD8A8;
    return;
L_089FD8A8:
    aot_gpr[31] = (0x089FD8B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD8B0u) goto L_089FD8B0;
    return;
L_089FD8B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD8BCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FD8BCu) goto L_089FD8BC;
    return;
L_089FD8BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD8CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FD8E8u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FD8E8u) goto L_089FD8E8;
    return;
L_089FD8E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FD8F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD8F4u) goto L_089FD8F4;
    return;
L_089FD8F4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD904u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6808));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD904u) goto L_089FD904;
    return;
L_089FD904:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 1u);
        goto L_089FD93C;
    }
    goto L_089FD90C;
L_089FD90C:
    aot_gpr[31] = (0x089FD914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FD914u) goto L_089FD914;
    return;
L_089FD914:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FD920u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD920u) goto L_089FD920;
    return;
L_089FD920:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD930u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6796));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD930u) goto L_089FD930;
    return;
L_089FD930:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD93C;
      }
      goto L_089FD938;
    }
L_089FD938:
    aot_gpr[17] = (0u | 1u);
    goto L_089FD93C;
L_089FD93C:
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
L_089FD954:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089FD978u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FD978u) goto L_089FD978;
    return;
L_089FD978:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FD984u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD984u) goto L_089FD984;
    return;
L_089FD984:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD994u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6808));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FD994u) goto L_089FD994;
    return;
L_089FD994:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FDA98;
      }
      goto L_089FD99C;
    }
L_089FD99C:
    aot_gpr[31] = (0x089FD9A4u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6784));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FD9A4u) goto L_089FD9A4;
    return;
L_089FD9A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FD9B4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD9B4u) goto L_089FD9B4;
    return;
L_089FD9B4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FDA58;
      }
      goto L_089FD9C0;
    }
L_089FD9C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FD9CCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089FDBE0;
L_089FD9CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FD9DCu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-6776));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FD9DCu) goto L_089FD9DC;
    return;
L_089FD9DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FD9ECu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD9ECu) goto L_089FD9EC;
    return;
L_089FD9EC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDA18;
      }
      goto L_089FD9F8;
    }
L_089FD9F8:
    aot_gpr[31] = (0x089FDA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDA00u) goto L_089FDA00;
    return;
L_089FDA00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDA0Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDA0Cu) goto L_089FDA0C;
    return;
L_089FDA0C:
    aot_gpr[31] = (0x089FDA14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x089FDA14u) goto L_089FDA14;
    return;
L_089FDA14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089FDA18;
L_089FDA18:
    aot_gpr[31] = (0x089FDA20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 212u, 0x089FCC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDA20u) goto L_089FDA20;
    return;
L_089FDA20:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr[31] = (0x089FDA30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 127u, 0x089FB930u>(ctx, &aot_mem) && ctx.pc == 0x089FDA30u) goto L_089FDA30;
    return;
L_089FDA30:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[31] = (0x089FDA3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 127u, 0x089FB930u>(ctx, &aot_mem) && ctx.pc == 0x089FDA3Cu) goto L_089FDA3C;
    return;
L_089FDA3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x089FDA50u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 98u, 0x089FC550u>(ctx, &aot_mem) && ctx.pc == 0x089FDA50u) goto L_089FDA50;
    return;
L_089FDA50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDB5C;
      }
      goto L_089FDA58;
    }
L_089FDA58:
    aot_gpr[31] = (0x089FDA60u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089FDD00;
L_089FDA60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          goto L_089FDA80;
      }
      goto L_089FDA68;
    }
L_089FDA68:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x089FDA78u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 98u, 0x089FC550u>(ctx, &aot_mem) && ctx.pc == 0x089FDA78u) goto L_089FDA78;
    return;
L_089FDA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDB5C;
      }
      goto L_089FDA80;
    }
L_089FDA80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x089FDA90u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 98u, 0x089FC550u>(ctx, &aot_mem) && ctx.pc == 0x089FDA90u) goto L_089FDA90;
    return;
L_089FDA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDB5C;
      }
      goto L_089FDA98;
    }
L_089FDA98:
    aot_gpr[31] = (0x089FDAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDAA0u) goto L_089FDAA0;
    return;
L_089FDAA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDAACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDAACu) goto L_089FDAAC;
    return;
L_089FDAAC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FDABCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6796));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDABCu) goto L_089FDABC;
    return;
L_089FDABC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FDB5C;
      }
      goto L_089FDAC4;
    }
L_089FDAC4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[31] = (0x089FDAD4u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-6784));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDAD4u) goto L_089FDAD4;
    return;
L_089FDAD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FDAE4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDAE4u) goto L_089FDAE4;
    return;
L_089FDAE4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FDB40;
      }
      goto L_089FDAF0;
    }
L_089FDAF0:
    aot_gpr[31] = (0x089FDAF8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-6768));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDAF8u) goto L_089FDAF8;
    return;
L_089FDAF8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FDB08u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDB08u) goto L_089FDB08;
    return;
L_089FDB08:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
        goto L_089FDB44;
    }
    goto L_089FDB14;
L_089FDB14:
    aot_gpr[31] = (0x089FDB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDB1Cu) goto L_089FDB1C;
    return;
L_089FDB1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDB28u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDB28u) goto L_089FDB28;
    return;
L_089FDB28:
    aot_gpr[31] = (0x089FDB30u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x089FDB30u) goto L_089FDB30;
    return;
L_089FDB30:
    aot_gpr[4] = (0u | 20422u);
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
        goto L_089FDB44;
    }
    goto L_089FDB3C;
L_089FDB3C:
    aot_gpr[17] = (0u | 0u);
    goto L_089FDB40;
L_089FDB40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    goto L_089FDB44;
L_089FDB44:
    aot_gpr[31] = (0x089FDB4Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 213u, 0x089FCC44u>(ctx, &aot_mem) && ctx.pc == 0x089FDB4Cu) goto L_089FDB4C;
    return;
L_089FDB4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_gpr[5] = (0u | 9u);
    aot_gpr[31] = (0x089FDB5Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 98u, 0x089FC550u>(ctx, &aot_mem) && ctx.pc == 0x089FDB5Cu) goto L_089FDB5C;
    return;
L_089FDB5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDB78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDB80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDBB0;
      }
      goto L_089FDB8C;
    }
L_089FDB8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FDBB0;
      }
      goto L_089FDB94;
    }
L_089FDB94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089FDBB0;
      }
      goto L_089FDBA4;
    }
L_089FDBA4:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDBB0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDBB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(257));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDBC0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11160));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(532), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(524), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDBE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089FDC04u);
    aot_gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDC04u) goto L_089FDC04;
    return;
L_089FDC04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDC10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDC10u) goto L_089FDC10;
    return;
L_089FDC10:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FDC84;
      }
      goto L_089FDC1C;
    }
L_089FDC1C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6764));
    goto L_089FDC20;
L_089FDC20:
    aot_gpr[31] = (0x089FDC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDC28u) goto L_089FDC28;
    return;
L_089FDC28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDC34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDC34u) goto L_089FDC34;
    return;
L_089FDC34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDC64;
      }
      goto L_089FDC3C;
    }
L_089FDC3C:
    aot_gpr[31] = (0x089FDC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDC44u) goto L_089FDC44;
    return;
L_089FDC44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDC50u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDC50u) goto L_089FDC50;
    return;
L_089FDC50:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FDC5Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDC5Cu) goto L_089FDC5C;
    return;
L_089FDC5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDC84;
      }
      goto L_089FDC64;
    }
L_089FDC64:
    aot_gpr[31] = (0x089FDC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDC6Cu) goto L_089FDC6C;
    return;
L_089FDC6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDC78u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDC78u) goto L_089FDC78;
    return;
L_089FDC78:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDC20;
      }
      goto L_089FDC84;
    }
L_089FDC84:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDCE0;
      }
      goto L_089FDC8C;
    }
L_089FDC8C:
    aot_gpr[31] = (0x089FDC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDC94u) goto L_089FDC94;
    return;
L_089FDC94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDCA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDCA0u) goto L_089FDCA0;
    return;
L_089FDCA0:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-6940));
    goto L_089FDCB0;
L_089FDCB0:
    if (aot_gpr[19] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089FDCD4;
    }
    goto L_089FDCB8;
L_089FDCB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FDCC4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDCC4u) goto L_089FDCC4;
    return;
L_089FDCC4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089FDCD4;
    }
    goto L_089FDCCC;
L_089FDCCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089FDCE0;
      }
      goto L_089FDCD4;
    }
L_089FDCD4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 23 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FDCB0;
      }
      goto L_089FDCE0;
    }
L_089FDCE0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDD00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089FDD30u);
    aot_gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDD30u) goto L_089FDD30;
    return;
L_089FDD30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDD3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDD3Cu) goto L_089FDD3C;
    return;
L_089FDD3C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FDD54u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDD54u) goto L_089FDD54;
    return;
L_089FDD54:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(257));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FDD68u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDD68u) goto L_089FDD68;
    return;
L_089FDD68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x089FDD74u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-6756));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDD74u) goto L_089FDD74;
    return;
L_089FDD74:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FDD84u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDD84u) goto L_089FDD84;
    return;
L_089FDD84:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FDD94u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FDD94u) goto L_089FDD94;
    return;
L_089FDD94:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FDE1C;
      }
      goto L_089FDD9C;
    }
L_089FDD9C:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6748));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6740));
    goto L_089FDDA8;
L_089FDDA8:
    aot_gpr[31] = (0x089FDDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDDB0u) goto L_089FDDB0;
    return;
L_089FDDB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDDBCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDDBCu) goto L_089FDDBC;
    return;
L_089FDDBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDDFC;
      }
      goto L_089FDDC4;
    }
L_089FDDC4:
    aot_gpr[31] = (0x089FDDCCu);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDDCCu) goto L_089FDDCC;
    return;
L_089FDDCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FDDE0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDDE0u) goto L_089FDDE0;
    return;
L_089FDDE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FDDECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x089FDDECu) goto L_089FDDEC;
    return;
L_089FDDEC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FDDF8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x089FDDF8u) goto L_089FDDF8;
    return;
L_089FDDF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089FDDFC;
L_089FDDFC:
    aot_gpr[31] = (0x089FDE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089FDE04u) goto L_089FDE04;
    return;
L_089FDE04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FDE10u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDE10u) goto L_089FDE10;
    return;
L_089FDE10:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDDA8;
      }
      goto L_089FDE1C;
    }
L_089FDE1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), aot_gpr[20]);
      if (branch_taken) {
          goto L_089FDE48;
      }
      goto L_089FDE28;
    }
L_089FDE28:
    aot_gpr[31] = (0x089FDE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FDE30u) goto L_089FDE30;
    return;
L_089FDE30:
    aot_gpr[31] = (0x089FDE38u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDE38u) goto L_089FDE38;
    return;
L_089FDE38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
    aot_gpr[31] = (0x089FDE44u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FDE44u) goto L_089FDE44;
    return;
L_089FDE44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), 0u);
    goto L_089FDE48;
L_089FDE48:
    aot_gpr[31] = (0x089FDE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FDE50u) goto L_089FDE50;
    return;
L_089FDE50:
    aot_gpr[31] = (0x089FDE58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDE58u) goto L_089FDE58;
    return;
L_089FDE58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 269u);
    aot_gpr[31] = (0x089FDE78u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6848));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FDE78u) goto L_089FDE78;
    return;
L_089FDE78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FDED8;
      }
      goto L_089FDE90;
    }
L_089FDE90:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6740));
    goto L_089FDE9C;
L_089FDE9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[31] = (0x089FDEB4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089FDEB4u) goto L_089FDEB4;
    return;
L_089FDEB4:
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FDE9C;
      }
      goto L_089FDED8;
    }
L_089FDED8:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDF00:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11208));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089FDF40u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 65u, 0x08A02550u>(ctx, &aot_mem) && ctx.pc == 0x089FDF40u) goto L_089FDF40;
    return;
L_089FDF40:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FDF4Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 91u, 0x08A02728u>(ctx, &aot_mem) && ctx.pc == 0x089FDF4Cu) goto L_089FDF4C;
    return;
L_089FDF4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089FDF70u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDF70u) goto L_089FDF70;
    return;
L_089FDF70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDF8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDF94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FDFB0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDFB0u) goto L_089FDFB0;
    return;
L_089FDFB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDFC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDFD0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDFD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FDFF4u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FDFF4u) goto L_089FDFF4;
    return;
L_089FDFF4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    ctx.pc = 0x089FE000u; return;
}

void recomp_unit_0505(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0505_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_505(Runtime &runtime) {
    runtime.register_generated_unit(505u, 0x089FD000u, 4096u, &recomp_unit_0505, &recomp_unit_0505_entry);
    runtime.register_function(0x089FD000u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD00Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD018u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD028u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD030u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD048u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD064u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD06Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD078u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD080u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD094u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD0CCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD0D4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD0DCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD0E8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD0F0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD11Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD124u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD12Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD134u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD144u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD150u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD158u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD168u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD170u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD178u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD188u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD194u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD19Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1ACu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1B8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1C0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1D0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1DCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1E4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1F4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD1F8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD200u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD208u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD210u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD218u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD224u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD238u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD240u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD248u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD250u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD27Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD284u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD294u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2A0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2A4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2BCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2C4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2CCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2D8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD2F8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD304u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD30Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD314u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD31Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD324u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD330u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD35Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD37Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD38Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD394u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD39Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3A0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3A8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3B0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3BCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3D8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3E4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3ECu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3F4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD3FCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD404u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD40Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD428u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD434u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD43Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD444u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD44Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD468u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD474u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD47Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD484u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD49Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD4B0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD4BCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD4C4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD4D0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD4ECu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD4F0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD500u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD514u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD51Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD528u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD538u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD550u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD558u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD560u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD564u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD56Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD574u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD57Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD58Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD59Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD5A8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD5B0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD5C8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD5D4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD5DCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD5FCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD604u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD60Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD614u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD61Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD634u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD63Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD644u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD650u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD654u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD67Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD684u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD68Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD698u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD69Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD6B4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD6BCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD6D4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD6E0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD6ECu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD700u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD710u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD718u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD720u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD730u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD73Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD744u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD748u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD75Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD778u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD798u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7A0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7A8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7B4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7BCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7C4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7CCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD7E0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD804u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD80Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD818u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD820u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD828u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD844u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD84Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD860u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD868u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD884u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD894u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD8A8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD8B0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD8BCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD8CCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD8E8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD8F4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD904u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD90Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD914u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD920u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD930u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD938u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD93Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD954u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD978u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD984u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD994u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD99Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9A4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9B4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9C0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9CCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9DCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9ECu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FD9F8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA00u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA0Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA14u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA18u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA20u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA30u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA3Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA50u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA58u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA60u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA68u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA78u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA80u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA90u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDA98u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAA0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAACu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDABCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAC4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAD4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAE4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAF0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDAF8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB08u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB14u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB1Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB28u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB30u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB3Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB40u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB44u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB4Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB5Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB78u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB80u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB8Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDB94u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDBA4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDBB0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDBB8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDBC0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDBE0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC04u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC10u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC1Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC20u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC28u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC34u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC3Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC44u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC50u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC5Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC64u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC6Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC78u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC84u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC8Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDC94u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCA0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCB0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCB8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCC4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCCCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCD4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDCE0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD00u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD30u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD3Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD54u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD68u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD74u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD84u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD94u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDD9Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDA8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDB0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDBCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDC4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDCCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDE0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDECu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDF8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDDFCu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE04u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE10u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE1Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE28u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE30u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE38u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE44u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE48u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE50u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE58u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE78u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE90u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDE9Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDEB4u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDED8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF00u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF14u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF40u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF4Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF70u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF8Cu, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDF94u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDFB0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDFC8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDFD0u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDFD8u, &recomp_unit_0505, "recomp_unit_0505");
    runtime.register_function(0x089FDFF4u, &recomp_unit_0505, "recomp_unit_0505");
}
} // namespace psprecomp
