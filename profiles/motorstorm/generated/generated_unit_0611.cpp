#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0611[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0,
    10, 0, 0, 0, 11, 0, 12, 0, 13, 14, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 29, 0, 30, 31, 32, 0, 33, 0, 0, 0,
    34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 39, 40, 41, 42, 43, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 65, 0, 66, 0, 67, 68, 0, 0, 0, 0, 0, 0, 69, 0,
    70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81,
    0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 92, 93, 0,
    94, 0, 0, 95, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0,
    0, 0, 104, 0, 105, 106, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0,
    120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 130, 131, 132, 0, 133, 0, 134, 0, 0, 135, 136, 137,
    138, 0, 139, 140, 141, 142, 0, 143, 144, 145, 0, 0, 146, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0,
    165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    173, 174, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0,
    0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 222, 0, 0, 0, 0, 223, 0, 0, 224, 225, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 227, 228, 229, 0, 0, 0, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251, 252, 0, 253, 0, 254, 255, 256, 257, 258, 259, 260, 261, 262, 0,
    0, 263, 264, 265, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 273, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 287, 0, 0, 0, 0, 288,
};
void recomp_unit_0611_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A67000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0611[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A67000;
    case 2u: goto L_08A67008;
    case 3u: goto L_08A67034;
    case 4u: goto L_08A67040;
    case 5u: goto L_08A6704C;
    case 6u: goto L_08A67054;
    case 7u: goto L_08A67060;
    case 8u: goto L_08A67068;
    case 9u: goto L_08A67074;
    case 10u: goto L_08A67080;
    case 11u: goto L_08A67090;
    case 12u: goto L_08A67098;
    case 13u: goto L_08A670A0;
    case 14u: goto L_08A670A4;
    case 15u: goto L_08A670B0;
    case 16u: goto L_08A670B8;
    case 17u: goto L_08A670C8;
    case 18u: goto L_08A670D0;
    case 19u: goto L_08A670D8;
    case 20u: goto L_08A670E0;
    case 21u: goto L_08A67108;
    case 22u: goto L_08A67110;
    case 23u: goto L_08A67118;
    case 24u: goto L_08A67120;
    case 25u: goto L_08A67158;
    case 26u: goto L_08A67190;
    case 27u: goto L_08A671D0;
    case 28u: goto L_08A671D4;
    case 29u: goto L_08A671D8;
    case 30u: goto L_08A671E0;
    case 31u: goto L_08A671E4;
    case 32u: goto L_08A671E8;
    case 33u: goto L_08A671F0;
    case 34u: goto L_08A67200;
    case 35u: goto L_08A67208;
    case 36u: goto L_08A67210;
    case 37u: goto L_08A67228;
    case 38u: goto L_08A672A8;
    case 39u: goto L_08A672AC;
    case 40u: goto L_08A672B0;
    case 41u: goto L_08A672B4;
    case 42u: goto L_08A672B8;
    case 43u: goto L_08A672BC;
    case 44u: goto L_08A672C0;
    case 45u: goto L_08A672C8;
    case 46u: goto L_08A672D0;
    case 47u: goto L_08A67310;
    case 48u: goto L_08A67350;
    case 49u: goto L_08A67378;
    case 50u: goto L_08A67390;
    case 51u: goto L_08A673A4;
    case 52u: goto L_08A673D0;
    case 53u: goto L_08A67410;
    case 54u: goto L_08A67430;
    case 55u: goto L_08A6743C;
    case 56u: goto L_08A67448;
    case 57u: goto L_08A67460;
    case 58u: goto L_08A6746C;
    case 59u: goto L_08A67484;
    case 60u: goto L_08A67490;
    case 61u: goto L_08A6749C;
    case 62u: goto L_08A674AC;
    case 63u: goto L_08A674B4;
    case 64u: goto L_08A674C4;
    case 65u: goto L_08A674C8;
    case 66u: goto L_08A674D0;
    case 67u: goto L_08A674D8;
    case 68u: goto L_08A674DC;
    case 69u: goto L_08A674F8;
    case 70u: goto L_08A67500;
    case 71u: goto L_08A67508;
    case 72u: goto L_08A67528;
    case 73u: goto L_08A67530;
    case 74u: goto L_08A67538;
    case 75u: goto L_08A675B0;
    case 76u: goto L_08A675BC;
    case 77u: goto L_08A675C4;
    case 78u: goto L_08A675D4;
    case 79u: goto L_08A675DC;
    case 80u: goto L_08A675F0;
    case 81u: goto L_08A675FC;
    case 82u: goto L_08A67604;
    case 83u: goto L_08A6760C;
    case 84u: goto L_08A6761C;
    case 85u: goto L_08A6762C;
    case 86u: goto L_08A67634;
    case 87u: goto L_08A6763C;
    case 88u: goto L_08A67644;
    case 89u: goto L_08A67650;
    case 90u: goto L_08A67660;
    case 91u: goto L_08A67668;
    case 92u: goto L_08A67674;
    case 93u: goto L_08A67678;
    case 94u: goto L_08A67680;
    case 95u: goto L_08A6768C;
    case 96u: goto L_08A67690;
    case 97u: goto L_08A676A0;
    case 98u: goto L_08A676B4;
    case 99u: goto L_08A676C4;
    case 100u: goto L_08A676C8;
    case 101u: goto L_08A676D4;
    case 102u: goto L_08A676E4;
    case 103u: goto L_08A676F4;
    case 104u: goto L_08A67708;
    case 105u: goto L_08A67710;
    case 106u: goto L_08A67714;
    case 107u: goto L_08A67718;
    case 108u: goto L_08A67720;
    case 109u: goto L_08A67728;
    case 110u: goto L_08A67730;
    case 111u: goto L_08A67738;
    case 112u: goto L_08A67740;
    case 113u: goto L_08A67748;
    case 114u: goto L_08A67750;
    case 115u: goto L_08A67758;
    case 116u: goto L_08A67760;
    case 117u: goto L_08A67768;
    case 118u: goto L_08A67770;
    case 119u: goto L_08A67778;
    case 120u: goto L_08A67780;
    case 121u: goto L_08A67788;
    case 122u: goto L_08A67790;
    case 123u: goto L_08A67798;
    case 124u: goto L_08A677A0;
    case 125u: goto L_08A677AC;
    case 126u: goto L_08A677B4;
    case 127u: goto L_08A677BC;
    case 128u: goto L_08A677C4;
    case 129u: goto L_08A677CC;
    case 130u: goto L_08A677D0;
    case 131u: goto L_08A677D4;
    case 132u: goto L_08A677D8;
    case 133u: goto L_08A677E0;
    case 134u: goto L_08A677E8;
    case 135u: goto L_08A677F4;
    case 136u: goto L_08A677F8;
    case 137u: goto L_08A677FC;
    case 138u: goto L_08A67800;
    case 139u: goto L_08A67808;
    case 140u: goto L_08A6780C;
    case 141u: goto L_08A67810;
    case 142u: goto L_08A67814;
    case 143u: goto L_08A6781C;
    case 144u: goto L_08A67820;
    case 145u: goto L_08A67824;
    case 146u: goto L_08A67830;
    case 147u: goto L_08A67834;
    case 148u: goto L_08A67838;
    case 149u: goto L_08A678A0;
    case 150u: goto L_08A678B4;
    case 151u: goto L_08A678C0;
    case 152u: goto L_08A678CC;
    case 153u: goto L_08A678D4;
    case 154u: goto L_08A678E8;
    case 155u: goto L_08A67904;
    case 156u: goto L_08A6790C;
    case 157u: goto L_08A67914;
    case 158u: goto L_08A6792C;
    case 159u: goto L_08A67938;
    case 160u: goto L_08A67948;
    case 161u: goto L_08A67958;
    case 162u: goto L_08A67964;
    case 163u: goto L_08A6796C;
    case 164u: goto L_08A67978;
    case 165u: goto L_08A67980;
    case 166u: goto L_08A6798C;
    case 167u: goto L_08A67994;
    case 168u: goto L_08A6799C;
    case 169u: goto L_08A679AC;
    case 170u: goto L_08A679C4;
    case 171u: goto L_08A679D0;
    case 172u: goto L_08A679FC;
    case 173u: goto L_08A67A00;
    case 174u: goto L_08A67A04;
    case 175u: goto L_08A67A08;
    case 176u: goto L_08A67A70;
    case 177u: goto L_08A67A90;
    case 178u: goto L_08A67A9C;
    case 179u: goto L_08A67AA4;
    case 180u: goto L_08A67AB0;
    case 181u: goto L_08A67AB4;
    case 182u: goto L_08A67AC0;
    case 183u: goto L_08A67AD4;
    case 184u: goto L_08A67AE4;
    case 185u: goto L_08A67B08;
    case 186u: goto L_08A67B20;
    case 187u: goto L_08A67B2C;
    case 188u: goto L_08A67B40;
    case 189u: goto L_08A67B88;
    case 190u: goto L_08A67BA0;
    case 191u: goto L_08A67BA4;
    case 192u: goto L_08A67BA8;
    case 193u: goto L_08A67BAC;
    case 194u: goto L_08A67BB0;
    case 195u: goto L_08A67BB4;
    case 196u: goto L_08A67BB8;
    case 197u: goto L_08A67BBC;
    case 198u: goto L_08A67BC0;
    case 199u: goto L_08A67BC4;
    case 200u: goto L_08A67BC8;
    case 201u: goto L_08A67BCC;
    case 202u: goto L_08A67BD0;
    case 203u: goto L_08A67BD4;
    case 204u: goto L_08A67BD8;
    case 205u: goto L_08A67BDC;
    case 206u: goto L_08A67BF8;
    case 207u: goto L_08A67C04;
    case 208u: goto L_08A67C14;
    case 209u: goto L_08A67C24;
    case 210u: goto L_08A67C3C;
    case 211u: goto L_08A67C40;
    case 212u: goto L_08A67C50;
    case 213u: goto L_08A67C60;
    case 214u: goto L_08A67C68;
    case 215u: goto L_08A67C70;
    case 216u: goto L_08A67C88;
    case 217u: goto L_08A67C90;
    case 218u: goto L_08A67CA0;
    case 219u: goto L_08A67CB0;
    case 220u: goto L_08A67CB8;
    case 221u: goto L_08A67CC4;
    case 222u: goto L_08A67CC8;
    case 223u: goto L_08A67CDC;
    case 224u: goto L_08A67CE8;
    case 225u: goto L_08A67CEC;
    case 226u: goto L_08A67D08;
    case 227u: goto L_08A67D18;
    case 228u: goto L_08A67D1C;
    case 229u: goto L_08A67D20;
    case 230u: goto L_08A67D30;
    case 231u: goto L_08A67D34;
    case 232u: goto L_08A67D38;
    case 233u: goto L_08A67D3C;
    case 234u: goto L_08A67D40;
    case 235u: goto L_08A67D44;
    case 236u: goto L_08A67D48;
    case 237u: goto L_08A67D4C;
    case 238u: goto L_08A67D50;
    case 239u: goto L_08A67D54;
    case 240u: goto L_08A67D58;
    case 241u: goto L_08A67D5C;
    case 242u: goto L_08A67D60;
    case 243u: goto L_08A67D64;
    case 244u: goto L_08A67D68;
    case 245u: goto L_08A67D6C;
    case 246u: goto L_08A67D70;
    case 247u: goto L_08A67D84;
    case 248u: goto L_08A67D98;
    case 249u: goto L_08A67DA8;
    case 250u: goto L_08A67DBC;
    case 251u: goto L_08A67DC4;
    case 252u: goto L_08A67DC8;
    case 253u: goto L_08A67DD0;
    case 254u: goto L_08A67DD8;
    case 255u: goto L_08A67DDC;
    case 256u: goto L_08A67DE0;
    case 257u: goto L_08A67DE4;
    case 258u: goto L_08A67DE8;
    case 259u: goto L_08A67DEC;
    case 260u: goto L_08A67DF0;
    case 261u: goto L_08A67DF4;
    case 262u: goto L_08A67DF8;
    case 263u: goto L_08A67E04;
    case 264u: goto L_08A67E08;
    case 265u: goto L_08A67E0C;
    case 266u: goto L_08A67E14;
    case 267u: goto L_08A67E20;
    case 268u: goto L_08A67E38;
    case 269u: goto L_08A67E4C;
    case 270u: goto L_08A67E54;
    case 271u: goto L_08A67E6C;
    case 272u: goto L_08A67E80;
    case 273u: goto L_08A67E88;
    case 274u: goto L_08A67E8C;
    case 275u: goto L_08A67EA0;
    case 276u: goto L_08A67EA8;
    case 277u: goto L_08A67EB0;
    case 278u: goto L_08A67ED0;
    case 279u: goto L_08A67F28;
    case 280u: goto L_08A67F34;
    case 281u: goto L_08A67F50;
    case 282u: goto L_08A67F5C;
    case 283u: goto L_08A67F68;
    case 284u: goto L_08A67F8C;
    case 285u: goto L_08A67FD0;
    case 286u: goto L_08A67FDC;
    case 287u: goto L_08A67FE0;
    case 288u: goto L_08A67FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A67000:
    rt.unsupported(0x08A67000u, 0x746E656Du, "unknown not lowered yet"); return;
L_08A67008:
    rt.unsupported(0x08A67008u, 0x74617473u, "unknown not lowered yet"); return;
L_08A67034:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    aot_gpr[14] = (aot_gpr[3] + aot_gpr[4]);
    goto L_08A67040;
L_08A67040:
    rt.unsupported(0x08A67040u, 0x72657375u, "unknown not lowered yet"); return;
L_08A6704C:
    rt.unsupported(0x08A6704Cu, 0x72657375u, "unknown not lowered yet"); return;
L_08A67054:
    ctx.execute_vfpu_compare3(97u, 99u, 99u, 1u, 6u);
    rt.unsupported(0x08A67058u, 0x49746E75u, "cop2/vfpu not lowered yet"); return;
L_08A67060:
    rt.unsupported(0x08A67060u, 0x6B6E6172u, "unknown not lowered yet"); return;
L_08A67068:
    ctx.execute_vfpu_compare3(97u, 99u, 99u, 1u, 6u);
    rt.unsupported(0x08A6706Cu, 0x4E746E75u, "unknown not lowered yet"); return;
L_08A67074:
    rt.unsupported(0x08A67074u, 0x74736562u, "unknown not lowered yet"); return;
L_08A67080:
    rt.unsupported(0x08A67080u, 0x736F6867u, "unknown not lowered yet"); return;
L_08A67090:
    rt.unsupported(0x08A67090u, 0x726F6373u, "unknown not lowered yet"); return;
L_08A67098:
    rt.unsupported(0x08A67098u, 0x74617473u, "unknown not lowered yet"); return;
L_08A670A0:
    rt.unsupported(0x08A670A0u, 0x00006469u, "special? not lowered yet"); return;
L_08A670A4:
    rt.unsupported(0x08A670A4u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A670B0:
    rt.unsupported(0x08A670B0u, 0x676E656Cu, "vfpu1 not lowered yet"); return;
L_08A670B8:
    ctx.execute_vfpu_compare3(101u, 110u, 99u, 1u, 6u);
    rt.unsupported(0x08A670BCu, 0x4C646564u, "unknown not lowered yet"); return;
L_08A670C8:
    rt.unsupported(0x08A670C8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A670D0:
    rt.unsupported(0x08A670D0u, 0x736F6867u, "unknown not lowered yet"); return;
L_08A670D8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    goto L_08A670E0;
L_08A670E0:
    ctx.execute_vfpu_vhdp(37u, 100u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    rt.unsupported(0x08A670E8u, 0x626F2064u, "vfpu0 not lowered yet"); return;
L_08A67108:
    rt.unsupported(0x08A67108u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A67110:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A67114u, 0x424F455Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 8u, 0x08A7B1CCu>(ctx, &aot_mem); return;
    }
    goto L_08A67118;
L_08A67118:
    rt.unsupported(0x08A67118u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67120:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08A67124u, 0x74206465u, "unknown not lowered yet"); return;
L_08A67158:
    rt.unsupported(0x08A67158u, 0x4F58414Du, "unknown not lowered yet"); return;
L_08A67190:
    rt.unsupported(0x08A67190u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08A671D0:
    rt.unsupported(0x08A671D0u, 0x00000033u, "special? not lowered yet"); return;
L_08A671D4:
    rt.unsupported(0x08A671D4u, 0x00000032u, "special? not lowered yet"); return;
L_08A671D8:
    rt.unsupported(0x08A671D8u, 0x00000031u, "special? not lowered yet"); return;
L_08A671E0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[19]) ? aot_gpr[3] : aot_gpr[19]);
    goto L_08A671E4;
L_08A671E4:
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[19] ? 1u : 0u);
    goto L_08A671E8;
L_08A671E8:
    aot_gpr[12] = (0u | 0u);
    // nop
    goto L_08A671F0;
L_08A671F0:
    aot_gpr[15] = (aot_gpr[9] + static_cast<std::uint32_t>(25637));
    (void)(0u & 0u);
    rt.unsupported(0x08A671F8u, 0x40000000u, "unknown not lowered yet"); return;
L_08A67200:
    aot_gpr[16] = (aot_gpr[17] & 9515u);
    (void)(0u & 0u);
    goto L_08A67208;
L_08A67208:
    aot_gpr[12] = (0u | 0u);
    // nop
    goto L_08A67210;
L_08A67210:
    rt.unsupported(0x08A67210u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67228:
    rt.unsupported(0x08A67228u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A672A8:
    aot_gpr[6] = (0u << 9u);
    goto L_08A672AC;
L_08A672AC:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[1]) * static_cast<std::uint64_t>(aot_gpr[18]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A672B0;
L_08A672B0:
    rt.unsupported(0x08A672B0u, 0x00000032u, "special? not lowered yet"); return;
L_08A672B4:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A672B8;
L_08A672B8:
    aot_gpr[12] = (0u | 0u);
    goto L_08A672BC;
L_08A672BC:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[4]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A672C0;
L_08A672C0:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A672C0u, 0x00000020u); return; } }
    // nop
    goto L_08A672C8;
L_08A672C8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<51u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    goto L_08A672D0;
L_08A672D0:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    rt.unsupported(0x08A672E4u, 0x00000001u, "special? not lowered yet"); return;
L_08A67310:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A67314u, 0x00000005u, "special? not lowered yet"); return;
L_08A67350:
    // nop
    rt.unsupported(0x08A67354u, 0x00000001u, "special? not lowered yet"); return;
L_08A67378:
    if (0u == 0u) (void)(0u);
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08A67380u, 0x0000000Du, "special? not lowered yet"); return;
L_08A67390:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    rt.unsupported(0x08A67398u, 0x00000001u, "special? not lowered yet"); return;
L_08A673A4:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A673A8u, 0x00000005u, "special? not lowered yet"); return;
L_08A673D0:
    rt.unsupported(0x08A673D0u, 0x40200000u, "unknown not lowered yet"); return;
L_08A67410:
    rt.unsupported(0x08A67410u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67430:
    rt.unsupported(0x08A67430u, 0x4C425845u, "unknown not lowered yet"); return;
L_08A6743C:
    // nop
    rt.unsupported(0x08A67440u, 0x40A00000u, "unknown not lowered yet"); return;
L_08A67448:
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[6] = (26214u << 16u);
    aot_gpr[12] = (52429u << 16u);
    // nop
    goto L_08A67460;
L_08A67460:
    ctx.execute_vfpu_vscl_ct<69u, 102u, 102u, 1u>();
    rt.unsupported(0x08A67468u, 0x535F4546u, "control flow in delay slot"); return;
L_08A6746C:
    ctx.execute_vfpu_compare3(108u, 97u, 108u, 1u, 6u);
    ctx.execute_vfpu_compare3(109u, 83u, 109u, 1u, 6u);
    rt.unsupported(0x08A67474u, 0x4C5F656Bu, "unknown not lowered yet"); return;
L_08A67484:
    rt.unsupported(0x08A67484u, 0x454C4349u, "cop1? not lowered yet"); return;
L_08A67490:
    ctx.execute_vfpu_vscl_ct<69u, 102u, 102u, 1u>();
    rt.unsupported(0x08A67498u, 0x535F4546u, "control flow in delay slot"); return;
L_08A6749C:
    ctx.execute_vfpu_compare3(108u, 97u, 108u, 1u, 6u);
    ctx.execute_vfpu_compare3(109u, 83u, 109u, 1u, 6u);
    if (aot_gpr[18] == aot_gpr[31]) {
    rt.unsupported(0x08A674A8u, 0x74686769u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 67u, 0x08A80A54u>(ctx, &aot_mem); return;
    }
    goto L_08A674AC;
L_08A674AC:
    rt.unsupported(0x08A674B0u, 0x5241505Fu, "control flow in delay slot"); return;
L_08A674B4:
    rt.unsupported(0x08A674B4u, 0x4C434954u, "unknown not lowered yet"); return;
L_08A674C4:
    aot_gpr[12] = (0u | 0u);
    goto L_08A674C8;
L_08A674C8:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A674CCu, 0x4341525Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 20u, 0x08A7B584u>(ctx, &aot_mem); return;
    }
    goto L_08A674D0;
L_08A674D0:
    rt.unsupported(0x08A674D0u, 0x414D5F45u, "unknown not lowered yet"); return;
L_08A674D8:
    rt.unsupported(0x08A674D8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A674DC:
    rt.unsupported(0x08A674DCu, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A674F8:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A674FCu, 0x444F4D5Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 24u, 0x08A7B5B4u>(ctx, &aot_mem); return;
    }
    goto L_08A67500;
L_08A67500:
    rt.unsupported(0x08A67500u, 0x4D5F4C45u, "unknown not lowered yet"); return;
L_08A67508:
    rt.unsupported(0x08A67508u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67528:
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A6752Cu, 0x4F4D5F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0622_entry, 622u, 111u, 0x08A72EFCu>(ctx, &aot_mem); return;
    }
    goto L_08A67530;
L_08A67530:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A67534u, 0x4E49414Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 91u, 0x08A78A44u>(ctx, &aot_mem); return;
    }
    goto L_08A67538;
L_08A67538:
    // nop
    // nop
    rt.unsupported(0x08A67544u, 0x088BA8F4u, "control flow in delay slot"); return;
L_08A675B0:
    rt.unsupported(0x08A675B0u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A675BC:
    rt.unsupported(0x08A675BCu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A675C4:
    rt.unsupported(0x08A675C4u, 0x4F5C7325u, "unknown not lowered yet"); return;
L_08A675D4:
    if (aot_gpr[2] != aot_gpr[28]) {
    rt.unsupported(0x08A675D8u, 0x6B636172u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 22u, 0x08A8426Cu>(ctx, &aot_mem); return;
    }
    goto L_08A675DC;
L_08A675DC:
    // nop
    aot_gpr[12] = (0u | 0u);
    aot_gpr[14] = (0u | 0u);
    if (0u == 0u) (void)(0u);
    // nop
    goto L_08A675F0;
L_08A675F0:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    (void)(0u & 0u);
    goto L_08A675FC;
L_08A675FC:
    rt.unsupported(0x08A675FCu, 0x72746E45u, "unknown not lowered yet"); return;
L_08A67604:
    rt.unsupported(0x08A67604u, 0x69686556u, "unknown not lowered yet"); return;
L_08A6760C:
    rt.unsupported(0x08A6760Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A6761C:
    rt.unsupported(0x08A6761Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A6762C:
    rt.unsupported(0x08A6762Cu, 0x74786554u, "unknown not lowered yet"); return;
L_08A67634:
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6763C;
L_08A6763C:
    rt.unsupported(0x08A6763Cu, 0x6E657645u, "vfpu3 not lowered yet"); return;
L_08A67644:
    rt.unsupported(0x08A67644u, 0x72616843u, "unknown not lowered yet"); return;
L_08A67650:
    rt.unsupported(0x08A67650u, 0x72616843u, "unknown not lowered yet"); return;
L_08A67660:
    rt.unsupported(0x08A67660u, 0x776F6C47u, "unknown not lowered yet"); return;
L_08A67668:
    rt.unsupported(0x08A67668u, 0x69686556u, "unknown not lowered yet"); return;
L_08A67674:
    // nop
    goto L_08A67678;
L_08A67678:
    ctx.execute_vfpu_vscl_ct<79u, 98u, 106u, 1u>();
    aot_gpr[14] = (0u - 0u);
    goto L_08A67680;
L_08A67680:
    rt.unsupported(0x08A67680u, 0x69686556u, "unknown not lowered yet"); return;
L_08A6768C:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[19]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A67690;
L_08A67690:
    ctx.execute_vfpu_vminmax(65u, 110u, 105u, 1u, false);
    ctx.execute_vfpu_compare3(97u, 116u, 105u, 1u, 6u);
    ctx.execute_vfpu_compare3(110u, 66u, 108u, 1u, 6u);
    aot_gpr[13] = (0u - 0u);
    goto L_08A676A0;
L_08A676A0:
    rt.unsupported(0x08A676A0u, 0x72616843u, "unknown not lowered yet"); return;
L_08A676B4:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A676B8u, 0x63736544u, "vfpu0 not lowered yet"); return;
L_08A676C4:
    aot_gpr[8] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[2])));
    goto L_08A676C8;
L_08A676C8:
    rt.unsupported(0x08A676C8u, 0x73747543u, "unknown not lowered yet"); return;
L_08A676D4:
    rt.unsupported(0x08A676D4u, 0x72616853u, "unknown not lowered yet"); return;
L_08A676E4:
    rt.unsupported(0x08A676E4u, 0x74726150u, "unknown not lowered yet"); return;
L_08A676F4:
    rt.unsupported(0x08A676F4u, 0x61657242u, "vfpu0 not lowered yet"); return;
L_08A67708:
    rt.unsupported(0x08A6770Cu, 0x544E455Fu, "control flow in delay slot"); return;
L_08A67710:
    rt.unsupported(0x08A67710u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67714:
    rt.unsupported(0x08A67714u, 0x0000004Eu, "special? not lowered yet"); return;
L_08A67718:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6771Cu, 0x4845565Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 43u, 0x08A7B7D4u>(ctx, &aot_mem); return;
    }
    goto L_08A67720;
L_08A67720:
    rt.unsupported(0x08A67720u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67728:
    rt.unsupported(0x08A6772Cu, 0x5854505Fu, "control flow in delay slot"); return;
L_08A67730:
    rt.unsupported(0x08A67730u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67738:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6773Cu, 0x444F4D5Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 45u, 0x08A7B7F4u>(ctx, &aot_mem); return;
    }
    goto L_08A67740;
L_08A67740:
    rt.unsupported(0x08A67740u, 0x4D5F4C45u, "unknown not lowered yet"); return;
L_08A67748:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6774Cu, 0x4556455Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 46u, 0x08A7B804u>(ctx, &aot_mem); return;
    }
    goto L_08A67750;
L_08A67750:
    rt.unsupported(0x08A67750u, 0x4D5F544Eu, "unknown not lowered yet"); return;
L_08A67758:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6775Cu, 0x4148435Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 47u, 0x08A7B814u>(ctx, &aot_mem); return;
    }
    goto L_08A67760;
L_08A67760:
    rt.unsupported(0x08A67760u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67768:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6776Cu, 0x4F4C475Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 48u, 0x08A7B824u>(ctx, &aot_mem); return;
    }
    goto L_08A67770;
L_08A67770:
    rt.unsupported(0x08A67770u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67778:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6777Cu, 0x4A424F5Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 49u, 0x08A7B834u>(ctx, &aot_mem); return;
    }
    goto L_08A67780;
L_08A67780:
    rt.unsupported(0x08A67780u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67788:
    rt.unsupported(0x08A6778Cu, 0x5355435Fu, "control flow in delay slot"); return;
L_08A67790:
    rt.unsupported(0x08A67790u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67798:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6779Cu, 0x494E415Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 52u, 0x08A7B854u>(ctx, &aot_mem); return;
    }
    goto L_08A677A0;
L_08A677A0:
    rt.unsupported(0x08A677A0u, 0x4F4C424Du, "unknown not lowered yet"); return;
L_08A677AC:
    rt.unsupported(0x08A677B0u, 0x564C435Fu, "control flow in delay slot"); return;
L_08A677B4:
    rt.unsupported(0x08A677B4u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A677BC:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A677C0u, 0x4341525Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 55u, 0x08A7B878u>(ctx, &aot_mem); return;
    }
    goto L_08A677C4;
L_08A677C4:
    if (aot_gpr[26] == aot_gpr[5]) {
    rt.unsupported(0x08A677C8u, 0x414D5F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 70u, 0x08A788DCu>(ctx, &aot_mem); return;
    }
    goto L_08A677CC;
L_08A677CC:
    rt.unsupported(0x08A677D0u, 0x5053502Eu, "control flow in delay slot"); return;
L_08A677D0:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A677D4u, 0x4441565Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 56u, 0x08A7B88Cu>(ctx, &aot_mem); return;
    }
    goto L_08A677D8;
L_08A677D4:
    rt.unsupported(0x08A677D4u, 0x4441565Fu, "unsupported CFC1 control register"); return;
    goto L_08A677D8;
L_08A677D8:
    rt.unsupported(0x08A677D8u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A677E0:
    rt.unsupported(0x08A677E4u, 0x5455435Fu, "control flow in delay slot"); return;
L_08A677E8:
    rt.unsupported(0x08A677E8u, 0x4E454353u, "unknown not lowered yet"); return;
L_08A677F4:
    rt.unsupported(0x08A677F8u, 0x5845545Fu, "control flow in delay slot"); return;
L_08A677F8:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    rt.unsupported(0x08A677FCu, 0x434F4C42u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 167u, 0x08A7C978u>(ctx, &aot_mem); return;
    }
    goto L_08A67800;
L_08A677FC:
    rt.unsupported(0x08A677FCu, 0x434F4C42u, "unknown not lowered yet"); return;
L_08A67800:
    rt.unsupported(0x08A67800u, 0x414D5F4Bu, "unknown not lowered yet"); return;
L_08A67808:
    rt.unsupported(0x08A6780Cu, 0x5241505Fu, "control flow in delay slot"); return;
L_08A6780C:
    if (aot_gpr[18] == aot_gpr[1]) {
    rt.unsupported(0x08A67810u, 0x4C434954u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 63u, 0x08A7B98Cu>(ctx, &aot_mem); return;
    }
    goto L_08A67814;
L_08A67810:
    rt.unsupported(0x08A67810u, 0x4C434954u, "unknown not lowered yet"); return;
L_08A67814:
    rt.unsupported(0x08A67814u, 0x414D5F45u, "unknown not lowered yet"); return;
L_08A6781C:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A67820u, 0x4552425Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 62u, 0x08A7B8D8u>(ctx, &aot_mem); return;
    }
    goto L_08A67824;
L_08A67820:
    rt.unsupported(0x08A67820u, 0x4552425Fu, "cop1? not lowered yet"); return;
L_08A67824:
    rt.unsupported(0x08A67824u, 0x43534B41u, "unknown not lowered yet"); return;
L_08A67830:
    jump_target = 0u;
    aot_gpr[9] = (0x08A67838u);
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A67838u) goto L_08A67838;
    return;
L_08A67834:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    goto L_08A67838;
L_08A67838:
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6783Cu, 0x70795420u, "unknown not lowered yet"); return;
L_08A678A0:
    rt.unsupported(0x08A678A0u, 0x4541534Du, "cop1? not lowered yet"); return;
L_08A678B4:
    rt.unsupported(0x08A678B4u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A678C0:
    rt.unsupported(0x08A678C0u, 0x44455053u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A678C4u, 0x4144452Eu, "unknown not lowered yet"); return;
L_08A678CC:
    if (aot_gpr[26] == aot_gpr[21]) {
    aot_gpr[23] = (aot_gpr[1] | 14393u);
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 46u, 0x08A78624u>(ctx, &aot_mem); return;
    }
    goto L_08A678D4;
L_08A678D4:
    { const float vfpu_value[1]{static_cast<float>(51)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(14816);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    rt.unsupported(0x08A678DCu, 0x9F8243B7u, "unknown not lowered yet"); return;
L_08A678E8:
    rt.unsupported(0x08A678E8u, 0x74617453u, "unknown not lowered yet"); return;
L_08A67904:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A67908u, 0x00004B41u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 109u, 0x08A78E20u>(ctx, &aot_mem); return;
    }
    goto L_08A6790C;
L_08A6790C:
    ctx.execute_vfpu_vhdp(46u, 115u, 116u, 1u);
    // nop
    goto L_08A67914;
L_08A67914:
    rt.unsupported(0x08A67914u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6792C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<116u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vhdp(46u, 115u, 116u, 1u);
    // nop
    goto L_08A67938;
L_08A67938:
    rt.unsupported(0x08A67938u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A67948:
    ctx.execute_vfpu_vminmax(67u, 104u, 97u, 1u, false);
    rt.unsupported(0x08A6794Cu, 0x6E6F6970u, "vfpu3 not lowered yet"); return;
L_08A67958:
    rt.unsupported(0x08A67958u, 0x69686556u, "unknown not lowered yet"); return;
L_08A67964:
    rt.unsupported(0x08A67964u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A6796C:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 118u, 1u>();
    rt.unsupported(0x08A67970u, 0x73656972u, "unknown not lowered yet"); return;
L_08A67978:
    rt.unsupported(0x08A67978u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A67980:
    rt.unsupported(0x08A67980u, 0x72616843u, "unknown not lowered yet"); return;
L_08A6798C:
    rt.unsupported(0x08A6798Cu, 0x756E6F42u, "unknown not lowered yet"); return;
L_08A67994:
    rt.unsupported(0x08A67994u, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A6799C:
    rt.unsupported(0x08A6799Cu, 0x69647541u, "unknown not lowered yet"); return;
L_08A679AC:
    rt.unsupported(0x08A679ACu, 0x69204546u, "unknown not lowered yet"); return;
L_08A679C4:
    rt.unsupported(0x08A679C4u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A679D0:
    rt.unsupported(0x08A679D0u, 0x72617453u, "unknown not lowered yet"); return;
L_08A679FC:
    rt.unsupported(0x08A67A00u, 0x5574736Fu, "control flow in delay slot"); return;
L_08A67A00:
    if (aot_gpr[11] != aot_gpr[20]) {
    rt.unsupported(0x08A67A04u, 0x636F6C6Eu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 51u, 0x08A847C0u>(ctx, &aot_mem); return;
    }
    goto L_08A67A08;
L_08A67A04:
    rt.unsupported(0x08A67A04u, 0x636F6C6Eu, "vfpu0 not lowered yet"); return;
L_08A67A08:
    rt.unsupported(0x08A67A08u, 0x6E654D6Bu, "vfpu3 not lowered yet"); return;
L_08A67A70:
    rt.unsupported(0x08A67A70u, 0x74617453u, "unknown not lowered yet"); return;
L_08A67A90:
    ctx.execute_vfpu_compare3(85u, 112u, 108u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<97u, 100u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A67A9C;
L_08A67A9C:
    rt.unsupported(0x08A67A9Cu, 0x4E4E5350u, "unknown not lowered yet"); return;
L_08A67AA4:
    rt.unsupported(0x08A67AA4u, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08A67AB0:
    // nop
    goto L_08A67AB4;
L_08A67AB4:
    rt.unsupported(0x08A67AB4u, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A67AC0:
    rt.unsupported(0x08A67AC0u, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A67AD4:
    rt.unsupported(0x08A67AD4u, 0x7478654Eu, "unknown not lowered yet"); return;
L_08A67AE4:
    rt.unsupported(0x08A67AE4u, 0x7478654Eu, "unknown not lowered yet"); return;
L_08A67B08:
    rt.unsupported(0x08A67B08u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A67B20:
    rt.unsupported(0x08A67B20u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A67B2C:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08A67B30u, 0x696E6920u, "unknown not lowered yet"); return;
L_08A67B40:
    rt.unsupported(0x08A67B40u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A67B88:
    rt.unsupported(0x08A67B88u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A67BA0:
    rt.unsupported(0x08A67BA0u, 0x00000031u, "special? not lowered yet"); return;
L_08A67BA4:
    rt.unsupported(0x08A67BA4u, 0x00000032u, "special? not lowered yet"); return;
L_08A67BA8:
    rt.unsupported(0x08A67BA8u, 0x00000033u, "special? not lowered yet"); return;
L_08A67BAC:
    rt.unsupported(0x08A67BACu, 0x00000034u, "special? not lowered yet"); return;
L_08A67BB0:
    rt.unsupported(0x08A67BB0u, 0x00000035u, "special? not lowered yet"); return;
L_08A67BB4:
    rt.unsupported(0x08A67BB4u, 0x00000036u, "special? not lowered yet"); return;
L_08A67BB8:
    rt.unsupported(0x08A67BB8u, 0x00000037u, "special? not lowered yet"); return;
L_08A67BBC:
    rt.unsupported(0x08A67BBCu, 0x00000038u, "special? not lowered yet"); return;
L_08A67BC0:
    rt.unsupported(0x08A67BC0u, 0x00000039u, "special? not lowered yet"); return;
L_08A67BC4:
    rt.unsupported(0x08A67BC4u, 0x00003031u, "special? not lowered yet"); return;
L_08A67BC8:
    rt.unsupported(0x08A67BC8u, 0x00003131u, "special? not lowered yet"); return;
L_08A67BCC:
    rt.unsupported(0x08A67BCCu, 0x00003231u, "special? not lowered yet"); return;
L_08A67BD0:
    rt.unsupported(0x08A67BD0u, 0x00003331u, "special? not lowered yet"); return;
L_08A67BD4:
    rt.unsupported(0x08A67BD4u, 0x00003431u, "special? not lowered yet"); return;
L_08A67BD8:
    rt.unsupported(0x08A67BD8u, 0x00003531u, "special? not lowered yet"); return;
L_08A67BDC:
    rt.unsupported(0x08A67BDCu, 0x69766E49u, "unknown not lowered yet"); return;
L_08A67BF8:
    rt.unsupported(0x08A67BF8u, 0x75736552u, "unknown not lowered yet"); return;
L_08A67C04:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A67C08u, 0x75736552u, "unknown not lowered yet"); return;
L_08A67C14:
    rt.unsupported(0x08A67C14u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A67C24:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A67C28u, 0x696E6946u, "unknown not lowered yet"); return;
L_08A67C3C:
    aot_gpr[12] = (0u | 0u);
    goto L_08A67C40;
L_08A67C40:
    rt.unsupported(0x08A67C40u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A67C50:
    rt.unsupported(0x08A67C50u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A67C60:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A67C64u, 0x00004B41u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 9u, 0x08A7917Cu>(ctx, &aot_mem); return;
    }
    goto L_08A67C68;
L_08A67C68:
    ctx.execute_vfpu_vhdp(46u, 115u, 116u, 1u);
    // nop
    goto L_08A67C70;
L_08A67C70:
    rt.unsupported(0x08A67C70u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67C88:
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(24943) ? 1u : 0u);
    rt.unsupported(0x08A67C8Cu, 0x00667473u, "special? not lowered yet"); return;
L_08A67C90:
    rt.unsupported(0x08A67C90u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A67CA0:
    ctx.execute_vfpu_vminmax(67u, 104u, 97u, 1u, false);
    rt.unsupported(0x08A67CA4u, 0x6E6F6970u, "vfpu3 not lowered yet"); return;
L_08A67CB0:
    rt.unsupported(0x08A67CB0u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A67CB8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[19] == aot_gpr[7]) {
    rt.unsupported(0x08A67CC0u, 0x4D656361u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 44u, 0x08A83664u>(ctx, &aot_mem); return;
    }
    goto L_08A67CC4;
L_08A67CC4:
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[21]);
    goto L_08A67CC8;
L_08A67CC8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A67CCCu, 0x43676E69u, "unknown not lowered yet"); return;
L_08A67CDC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A67CE0u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A67CE8:
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[21]);
    goto L_08A67CEC;
L_08A67CEC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A67CF0u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A67D08:
    rt.unsupported(0x08A67D08u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A67D18:
    rt.unsupported(0x08A67D18u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A67D1C:
    // nop
    goto L_08A67D20;
L_08A67D20:
    rt.unsupported(0x08A67D20u, 0x20627553u, "unknown not lowered yet"); return;
L_08A67D30:
    rt.unsupported(0x08A67D30u, 0x00004E45u, "special? not lowered yet"); return;
L_08A67D34:
    aot_gpr[10] = (0u >> (0u & 31u));
    goto L_08A67D38;
L_08A67D38:
    jump_target = 0u;
    aot_gpr[10] = (0x08A67D40u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A67D40u) goto L_08A67D40;
    return;
L_08A67D3C:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08A67D40;
L_08A67D40:
    ctx.lo = 0u;
    goto L_08A67D44;
L_08A67D44:
    aot_gpr[8] = (0u << (0u & 31u));
    goto L_08A67D48;
L_08A67D48:
    ctx.lo = 0u;
    goto L_08A67D4C;
L_08A67D4C:
    aot_gpr[9] = (0u >> (0u & 31u));
    goto L_08A67D50;
L_08A67D50:
    rt.unsupported(0x08A67D50u, 0x00004F4Eu, "special? not lowered yet"); return;
L_08A67D54:
    aot_gpr[10] = (ctx.lo);
    goto L_08A67D58;
L_08A67D58:
    aot_gpr[9] = (ctx.hi);
    goto L_08A67D5C;
L_08A67D5C:
    aot_gpr[10] = (ctx.hi);
    goto L_08A67D60;
L_08A67D60:
    rt.unsupported(0x08A67D60u, 0x00004C4Eu, "special? not lowered yet"); return;
L_08A67D64:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08A67D68;
L_08A67D68:
    if (0u != 0u) aot_gpr[9] = (0u);
    goto L_08A67D6C;
L_08A67D6C:
    if (0u == 0u) aot_gpr[8] = (0u);
    goto L_08A67D70;
L_08A67D70:
    rt.unsupported(0x08A67D70u, 0x74786554u, "unknown not lowered yet"); return;
L_08A67D84:
    rt.unsupported(0x08A67D84u, 0x74786554u, "unknown not lowered yet"); return;
L_08A67D98:
    rt.unsupported(0x08A67D98u, 0x74786554u, "unknown not lowered yet"); return;
L_08A67DA8:
    rt.unsupported(0x08A67DA8u, 0x74786554u, "unknown not lowered yet"); return;
L_08A67DBC:
    rt.unsupported(0x08A67DBCu, 0x7461642Eu, "unknown not lowered yet"); return;
L_08A67DC4:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A67DC4u, 0x00000020u); return; } }
    goto L_08A67DC8;
L_08A67DC8:
    if (aot_gpr[26] == aot_gpr[4]) {
    rt.unsupported(0x08A67DCCu, 0x4E495254u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 26u, 0x08A782D4u>(ctx, &aot_mem); return;
    }
    goto L_08A67DD0;
L_08A67DD0:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> (aot_gpr[2] & 31u)));
    // nop
    goto L_08A67DD8;
L_08A67DD8:
    aot_gpr[9] = (0u >> 13u);
    goto L_08A67DDC;
L_08A67DDC:
    rt.unsupported(0x08A67DDCu, 0x00565441u, "special? not lowered yet"); return;
L_08A67DE0:
    ctx.lo = 0u;
    goto L_08A67DE4;
L_08A67DE4:
    aot_gpr[8] = (ctx.lo);
    goto L_08A67DE8;
L_08A67DE8:
    aot_gpr[8] = (ctx.lo);
    goto L_08A67DEC;
L_08A67DEC:
    ctx.lo = 0u;
    goto L_08A67DF0;
L_08A67DF0:
    ctx.lo = 0u;
    goto L_08A67DF4;
L_08A67DF4:
    aot_gpr[10] = (0u >> 9u);
    goto L_08A67DF8;
L_08A67DF8:
    rt.unsupported(0x08A67DF8u, 0x73256425u, "unknown not lowered yet"); return;
L_08A67E04:
    aot_gpr[8] = (ctx.lo);
    goto L_08A67E08;
L_08A67E08:
    aot_gpr[10] = (aot_gpr[4] >> (aot_gpr[2] & 31u));
    goto L_08A67E0C;
L_08A67E0C:
    if (aot_gpr[26] == aot_gpr[5]) {
    aot_gpr[18] = (aot_gpr[9] | 12592u);
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 98u, 0x08A78B64u>(ctx, &aot_mem); return;
    }
    goto L_08A67E14;
L_08A67E14:
    rt.unsupported(0x08A67E14u, 0x00000030u, "special? not lowered yet"); return;
L_08A67E20:
    rt.unsupported(0x08A67E20u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67E38:
    ctx.execute_vfpu_vcmp_ct<110u, 103u, 1u, 9u>();
    rt.unsupported(0x08A67E3Cu, 0x61725465u, "vfpu0 not lowered yet"); return;
L_08A67E4C:
    rt.unsupported(0x08A67E4Cu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A67E54:
    rt.unsupported(0x08A67E54u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67E6C:
    rt.unsupported(0x08A67E6Cu, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A67E80:
    rt.unsupported(0x08A67E80u, 0x414D5F58u, "unknown not lowered yet"); return;
L_08A67E88:
    rt.unsupported(0x08A67E88u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67E8C:
    rt.unsupported(0x08A67E8Cu, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A67EA0:
    if (aot_gpr[3] != aot_gpr[3]) {
    rt.unsupported(0x08A67EA4u, 0x6B636172u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 17u, 0x08A8246Cu>(ctx, &aot_mem); return;
    }
    goto L_08A67EA8;
L_08A67EA8:
    rt.unsupported(0x08A67EACu, 0x505F5053u, "control flow in delay slot"); return;
L_08A67EB0:
    rt.unsupported(0x08A67EB0u, 0x4D5F5854u, "unknown not lowered yet"); return;
L_08A67ED0:
    rt.unsupported(0x08A67ED0u, 0x73257325u, "unknown not lowered yet"); return;
L_08A67F28:
    ctx.execute_vfpu_vscl_ct<101u, 102u, 102u, 1u>();
    rt.unsupported(0x08A67F30u, 0x505F4556u, "control flow in delay slot"); return;
L_08A67F34:
    rt.unsupported(0x08A67F34u, 0x4574736Fu, "cop1? not lowered yet"); return;
L_08A67F50:
    ctx.execute_vfpu_vscl_ct<105u, 99u, 108u, 1u>();
    rt.unsupported(0x08A67F54u, 0x69616D5Fu, "unknown not lowered yet"); return;
L_08A67F5C:
    ctx.execute_vfpu_vscl_ct<101u, 102u, 102u, 1u>();
    if (static_cast<std::int32_t>(aot_gpr[3]) > 0) {
    rt.unsupported(0x08A67F64u, 0x455F5846u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08A850F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A67F68;
L_08A67F68:
    rt.unsupported(0x08A67F68u, 0x6E69676Eu, "vfpu3 not lowered yet"); return;
L_08A67F8C:
    ctx.execute_vfpu_vscl_ct<105u, 99u, 108u, 1u>();
    rt.unsupported(0x08A67F90u, 0x69616D5Fu, "unknown not lowered yet"); return;
L_08A67FD0:
    rt.unsupported(0x08A67FD0u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67FDC:
    rt.unsupported(0x08A67FDCu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A67FE0:
    rt.unsupported(0x08A67FE0u, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A67FF4:
    rt.unsupported(0x08A67FF4u, 0x43494845u, "unknown not lowered yet"); return;
}

void recomp_unit_0611(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0611_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_611(Runtime &runtime) {
    runtime.register_generated_unit(611u, 0x08A67000u, 4096u, &recomp_unit_0611, &recomp_unit_0611_entry);
    runtime.register_function(0x08A67000u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67008u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67034u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67040u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6704Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67054u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67060u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67068u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67074u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67080u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67090u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67098u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670A0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670A4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670B0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670B8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670C8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670D8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A670E0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67108u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67110u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67118u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67120u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67158u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67190u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671D4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671D8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671E0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671E4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671E8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A671F0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67200u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67208u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67210u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67228u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672A8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672ACu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672B0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672B4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672B8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672BCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672C0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672C8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A672D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67310u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67350u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67378u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67390u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A673A4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A673D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67410u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67430u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6743Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67448u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67460u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6746Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67484u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67490u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6749Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674ACu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674B4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674C4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674C8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674D8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674DCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A674F8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67500u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67508u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67528u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67530u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67538u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675B0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675BCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675C4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675D4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675DCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675F0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A675FCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67604u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6760Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6761Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6762Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67634u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6763Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67644u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67650u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67660u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67668u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67674u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67678u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67680u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6768Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67690u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676A0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676B4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676C4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676C8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676D4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676E4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A676F4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67708u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67710u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67714u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67718u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67720u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67728u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67730u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67738u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67740u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67748u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67750u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67758u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67760u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67768u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67770u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67778u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67780u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67788u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67790u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67798u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677A0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677ACu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677B4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677BCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677C4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677CCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677D4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677D8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677E0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677E8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677F4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677F8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A677FCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67800u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67808u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6780Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67810u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67814u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6781Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67820u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67824u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67830u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67834u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67838u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A678A0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A678B4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A678C0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A678CCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A678D4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A678E8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67904u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6790Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67914u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6792Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67938u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67948u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67958u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67964u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6796Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67978u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67980u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6798Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67994u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A6799Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A679ACu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A679C4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A679D0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A679FCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67A00u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67A04u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67A08u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67A70u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67A90u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67A9Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67AA4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67AB0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67AB4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67AC0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67AD4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67AE4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67B08u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67B20u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67B2Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67B40u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67B88u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BA0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BA4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BA8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BACu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BB0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BB4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BB8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BBCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BC0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BC4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BC8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BCCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BD0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BD4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BD8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BDCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67BF8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C04u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C14u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C24u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C3Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C40u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C50u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C60u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C68u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C70u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C88u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67C90u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CA0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CB0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CB8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CC4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CC8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CDCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CE8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67CECu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D08u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D18u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D1Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D20u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D30u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D34u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D38u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D3Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D40u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D44u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D48u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D4Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D50u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D54u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D58u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D5Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D60u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D64u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D68u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D6Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D70u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D84u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67D98u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DA8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DBCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DC4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DC8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DD0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DD8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DDCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DE0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DE4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DE8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DECu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DF0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DF4u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67DF8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E04u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E08u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E0Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E14u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E20u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E38u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E4Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E54u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E6Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E80u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E88u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67E8Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67EA0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67EA8u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67EB0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67ED0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67F28u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67F34u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67F50u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67F5Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67F68u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67F8Cu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67FD0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67FDCu, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67FE0u, &recomp_unit_0611, "recomp_unit_0611");
    runtime.register_function(0x08A67FF4u, &recomp_unit_0611, "recomp_unit_0611");
}
} // namespace psprecomp
