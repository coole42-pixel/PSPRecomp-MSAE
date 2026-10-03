#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0483[1023] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0,
    0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 32, 0,
    0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0,
    0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0,
    55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0,
    74, 0, 0, 75, 0, 76, 77, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 0, 85,
    0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0,
    0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0,
    0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 118, 119, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0,
    0, 129, 130, 131, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 150,
    0, 0, 0, 151, 0, 0, 152, 0, 153, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 171, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0,
    190, 0, 0, 191, 0, 192, 0, 193, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0,
    209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223,
    224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 232, 233, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0,
    242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251,
    0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260,
    0, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278,
    0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0,
    0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 296,
};
void recomp_unit_0483_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E7004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0483[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E7004;
    case 2u: goto L_089E7018;
    case 3u: goto L_089E7020;
    case 4u: goto L_089E7038;
    case 5u: goto L_089E7040;
    case 6u: goto L_089E7050;
    case 7u: goto L_089E7058;
    case 8u: goto L_089E7068;
    case 9u: goto L_089E7094;
    case 10u: goto L_089E70B8;
    case 11u: goto L_089E70D0;
    case 12u: goto L_089E70EC;
    case 13u: goto L_089E70F4;
    case 14u: goto L_089E7104;
    case 15u: goto L_089E7120;
    case 16u: goto L_089E7128;
    case 17u: goto L_089E7140;
    case 18u: goto L_089E7148;
    case 19u: goto L_089E7158;
    case 20u: goto L_089E7160;
    case 21u: goto L_089E7170;
    case 22u: goto L_089E717C;
    case 23u: goto L_089E718C;
    case 24u: goto L_089E7194;
    case 25u: goto L_089E71A8;
    case 26u: goto L_089E71B0;
    case 27u: goto L_089E71C8;
    case 28u: goto L_089E71D0;
    case 29u: goto L_089E71E0;
    case 30u: goto L_089E71E8;
    case 31u: goto L_089E71F8;
    case 32u: goto L_089E71FC;
    case 33u: goto L_089E7208;
    case 34u: goto L_089E7218;
    case 35u: goto L_089E7220;
    case 36u: goto L_089E7230;
    case 37u: goto L_089E723C;
    case 38u: goto L_089E7248;
    case 39u: goto L_089E725C;
    case 40u: goto L_089E7264;
    case 41u: goto L_089E7270;
    case 42u: goto L_089E7278;
    case 43u: goto L_089E7288;
    case 44u: goto L_089E7290;
    case 45u: goto L_089E7298;
    case 46u: goto L_089E72A0;
    case 47u: goto L_089E72A8;
    case 48u: goto L_089E72BC;
    case 49u: goto L_089E72C4;
    case 50u: goto L_089E72CC;
    case 51u: goto L_089E72D8;
    case 52u: goto L_089E72E0;
    case 53u: goto L_089E72F4;
    case 54u: goto L_089E72FC;
    case 55u: goto L_089E7304;
    case 56u: goto L_089E730C;
    case 57u: goto L_089E7320;
    case 58u: goto L_089E7328;
    case 59u: goto L_089E7330;
    case 60u: goto L_089E7340;
    case 61u: goto L_089E7348;
    case 62u: goto L_089E735C;
    case 63u: goto L_089E7368;
    case 64u: goto L_089E7374;
    case 65u: goto L_089E737C;
    case 66u: goto L_089E7390;
    case 67u: goto L_089E7398;
    case 68u: goto L_089E73AC;
    case 69u: goto L_089E73B4;
    case 70u: goto L_089E73BC;
    case 71u: goto L_089E73CC;
    case 72u: goto L_089E73E4;
    case 73u: goto L_089E73FC;
    case 74u: goto L_089E7404;
    case 75u: goto L_089E7410;
    case 76u: goto L_089E7418;
    case 77u: goto L_089E741C;
    case 78u: goto L_089E7420;
    case 79u: goto L_089E7438;
    case 80u: goto L_089E7440;
    case 81u: goto L_089E7448;
    case 82u: goto L_089E7450;
    case 83u: goto L_089E7468;
    case 84u: goto L_089E746C;
    case 85u: goto L_089E7480;
    case 86u: goto L_089E7488;
    case 87u: goto L_089E749C;
    case 88u: goto L_089E74A8;
    case 89u: goto L_089E74B0;
    case 90u: goto L_089E74C0;
    case 91u: goto L_089E74C8;
    case 92u: goto L_089E74E0;
    case 93u: goto L_089E74E8;
    case 94u: goto L_089E74F0;
    case 95u: goto L_089E74F8;
    case 96u: goto L_089E7508;
    case 97u: goto L_089E7510;
    case 98u: goto L_089E7524;
    case 99u: goto L_089E7530;
    case 100u: goto L_089E7538;
    case 101u: goto L_089E7540;
    case 102u: goto L_089E7548;
    case 103u: goto L_089E7550;
    case 104u: goto L_089E7558;
    case 105u: goto L_089E7564;
    case 106u: goto L_089E7570;
    case 107u: goto L_089E757C;
    case 108u: goto L_089E7588;
    case 109u: goto L_089E7594;
    case 110u: goto L_089E759C;
    case 111u: goto L_089E75A4;
    case 112u: goto L_089E75AC;
    case 113u: goto L_089E75C4;
    case 114u: goto L_089E75CC;
    case 115u: goto L_089E75D4;
    case 116u: goto L_089E75E0;
    case 117u: goto L_089E7600;
    case 118u: goto L_089E7608;
    case 119u: goto L_089E760C;
    case 120u: goto L_089E7610;
    case 121u: goto L_089E7620;
    case 122u: goto L_089E7628;
    case 123u: goto L_089E763C;
    case 124u: goto L_089E7644;
    case 125u: goto L_089E764C;
    case 126u: goto L_089E7654;
    case 127u: goto L_089E7670;
    case 128u: goto L_089E767C;
    case 129u: goto L_089E7688;
    case 130u: goto L_089E768C;
    case 131u: goto L_089E7690;
    case 132u: goto L_089E76A4;
    case 133u: goto L_089E76AC;
    case 134u: goto L_089E76B4;
    case 135u: goto L_089E76C0;
    case 136u: goto L_089E76CC;
    case 137u: goto L_089E76D4;
    case 138u: goto L_089E76DC;
    case 139u: goto L_089E76E8;
    case 140u: goto L_089E7708;
    case 141u: goto L_089E7720;
    case 142u: goto L_089E7728;
    case 143u: goto L_089E7734;
    case 144u: goto L_089E7738;
    case 145u: goto L_089E7744;
    case 146u: goto L_089E7758;
    case 147u: goto L_089E7760;
    case 148u: goto L_089E7768;
    case 149u: goto L_089E7778;
    case 150u: goto L_089E7780;
    case 151u: goto L_089E7790;
    case 152u: goto L_089E779C;
    case 153u: goto L_089E77A4;
    case 154u: goto L_089E77A8;
    case 155u: goto L_089E77B0;
    case 156u: goto L_089E77B4;
    case 157u: goto L_089E77D8;
    case 158u: goto L_089E77DC;
    case 159u: goto L_089E77E8;
    case 160u: goto L_089E7810;
    case 161u: goto L_089E7834;
    case 162u: goto L_089E783C;
    case 163u: goto L_089E784C;
    case 164u: goto L_089E7864;
    case 165u: goto L_089E786C;
    case 166u: goto L_089E7874;
    case 167u: goto L_089E7880;
    case 168u: goto L_089E7890;
    case 169u: goto L_089E7898;
    case 170u: goto L_089E78A8;
    case 171u: goto L_089E78B4;
    case 172u: goto L_089E78B8;
    case 173u: goto L_089E78C0;
    case 174u: goto L_089E78C8;
    case 175u: goto L_089E78F8;
    case 176u: goto L_089E7904;
    case 177u: goto L_089E7918;
    case 178u: goto L_089E7920;
    case 179u: goto L_089E793C;
    case 180u: goto L_089E7960;
    case 181u: goto L_089E7990;
    case 182u: goto L_089E7994;
    case 183u: goto L_089E79B0;
    case 184u: goto L_089E79C0;
    case 185u: goto L_089E79C8;
    case 186u: goto L_089E79D0;
    case 187u: goto L_089E79E0;
    case 188u: goto L_089E79E8;
    case 189u: goto L_089E79F0;
    case 190u: goto L_089E7A04;
    case 191u: goto L_089E7A10;
    case 192u: goto L_089E7A18;
    case 193u: goto L_089E7A20;
    case 194u: goto L_089E7A24;
    case 195u: goto L_089E7A2C;
    case 196u: goto L_089E7A34;
    case 197u: goto L_089E7A40;
    case 198u: goto L_089E7A50;
    case 199u: goto L_089E7A58;
    case 200u: goto L_089E7A60;
    case 201u: goto L_089E7A70;
    case 202u: goto L_089E7A78;
    case 203u: goto L_089E7AA0;
    case 204u: goto L_089E7ACC;
    case 205u: goto L_089E7AD0;
    case 206u: goto L_089E7AE0;
    case 207u: goto L_089E7AE8;
    case 208u: goto L_089E7AFC;
    case 209u: goto L_089E7B04;
    case 210u: goto L_089E7B0C;
    case 211u: goto L_089E7B14;
    case 212u: goto L_089E7B2C;
    case 213u: goto L_089E7B70;
    case 214u: goto L_089E7B9C;
    case 215u: goto L_089E7BA8;
    case 216u: goto L_089E7BB0;
    case 217u: goto L_089E7BBC;
    case 218u: goto L_089E7BC8;
    case 219u: goto L_089E7BD4;
    case 220u: goto L_089E7BDC;
    case 221u: goto L_089E7BE8;
    case 222u: goto L_089E7BF0;
    case 223u: goto L_089E7C00;
    case 224u: goto L_089E7C04;
    case 225u: goto L_089E7C0C;
    case 226u: goto L_089E7C28;
    case 227u: goto L_089E7C38;
    case 228u: goto L_089E7C40;
    case 229u: goto L_089E7C50;
    case 230u: goto L_089E7C5C;
    case 231u: goto L_089E7C64;
    case 232u: goto L_089E7C68;
    case 233u: goto L_089E7C6C;
    case 234u: goto L_089E7C8C;
    case 235u: goto L_089E7CA0;
    case 236u: goto L_089E7CA8;
    case 237u: goto L_089E7CB8;
    case 238u: goto L_089E7CBC;
    case 239u: goto L_089E7CC0;
    case 240u: goto L_089E7CE8;
    case 241u: goto L_089E7CFC;
    case 242u: goto L_089E7D04;
    case 243u: goto L_089E7D14;
    case 244u: goto L_089E7D1C;
    case 245u: goto L_089E7D2C;
    case 246u: goto L_089E7D38;
    case 247u: goto L_089E7D4C;
    case 248u: goto L_089E7D54;
    case 249u: goto L_089E7D64;
    case 250u: goto L_089E7D78;
    case 251u: goto L_089E7D80;
    case 252u: goto L_089E7D90;
    case 253u: goto L_089E7D9C;
    case 254u: goto L_089E7DB0;
    case 255u: goto L_089E7DB8;
    case 256u: goto L_089E7DC8;
    case 257u: goto L_089E7DD4;
    case 258u: goto L_089E7DE8;
    case 259u: goto L_089E7DF0;
    case 260u: goto L_089E7E00;
    case 261u: goto L_089E7E0C;
    case 262u: goto L_089E7E20;
    case 263u: goto L_089E7E28;
    case 264u: goto L_089E7E38;
    case 265u: goto L_089E7E44;
    case 266u: goto L_089E7E58;
    case 267u: goto L_089E7E60;
    case 268u: goto L_089E7E70;
    case 269u: goto L_089E7E7C;
    case 270u: goto L_089E7E90;
    case 271u: goto L_089E7E98;
    case 272u: goto L_089E7EA8;
    case 273u: goto L_089E7EB4;
    case 274u: goto L_089E7EC8;
    case 275u: goto L_089E7ED0;
    case 276u: goto L_089E7EE0;
    case 277u: goto L_089E7EEC;
    case 278u: goto L_089E7F00;
    case 279u: goto L_089E7F08;
    case 280u: goto L_089E7F18;
    case 281u: goto L_089E7F24;
    case 282u: goto L_089E7F38;
    case 283u: goto L_089E7F40;
    case 284u: goto L_089E7F50;
    case 285u: goto L_089E7F5C;
    case 286u: goto L_089E7F70;
    case 287u: goto L_089E7F78;
    case 288u: goto L_089E7F88;
    case 289u: goto L_089E7F94;
    case 290u: goto L_089E7FA8;
    case 291u: goto L_089E7FB0;
    case 292u: goto L_089E7FC0;
    case 293u: goto L_089E7FD8;
    case 294u: goto L_089E7FE0;
    case 295u: goto L_089E7FF0;
    case 296u: goto L_089E7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E7004:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (aot_gpr[20] << 8u);
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 278u, 0x089E6FECu>(ctx, &aot_mem); return;
    }
    goto L_089E7018;
L_089E7018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 147u, 0x089E685Cu>(ctx, &aot_mem); return;
L_089E7020:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E7038u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7038u) goto L_089E7038;
    return;
L_089E7038:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 93u, 0x089E6528u>(ctx, &aot_mem); return;
      }
      goto L_089E7040;
    }
L_089E7040:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7050u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E7050u) goto L_089E7050;
    return;
L_089E7050:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 93u, 0x089E6528u>(ctx, &aot_mem); return;
      }
      goto L_089E7058;
    }
L_089E7058:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (2217u << 16u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(23708));
    aot_gpr[9] = (aot_gpr[6] + static_cast<std::uint32_t>(4864));
    goto L_089E7068;
L_089E7068:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E7068;
      }
      goto L_089E7094;
    }
L_089E7094:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(23708));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(23708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 93u, 0x089E6528u>(ctx, &aot_mem); return;
      }
      goto L_089E70B8;
    }
L_089E70B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1576));
    aot_gpr[31] = (0x089E70D0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E70D0u) goto L_089E70D0;
    return;
L_089E70D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E70ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 184u, 0x089E3DB0u>(ctx, &aot_mem) && ctx.pc == 0x089E70ECu) goto L_089E70EC;
    return;
L_089E70EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 255u, 0x089E6E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E70F4;
    }
L_089E70F4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E7104u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x089E7104u) goto L_089E7104;
    return;
L_089E7104:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23712));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(18164));
    aot_gpr[31] = (0x089E7120u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E7120u) goto L_089E7120;
    return;
L_089E7120:
    aot_gpr[3] = (2217u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 93u, 0x089E6528u>(ctx, &aot_mem); return;
L_089E7128:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E7140u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7140u) goto L_089E7140;
    return;
L_089E7140:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 161u, 0x089E691Cu>(ctx, &aot_mem); return;
    }
    goto L_089E7148;
L_089E7148:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7158u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E7158u) goto L_089E7158;
    return;
L_089E7158:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 161u, 0x089E691Cu>(ctx, &aot_mem); return;
    }
    goto L_089E7160;
L_089E7160:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 181u, 0x089E6A24u>(ctx, &aot_mem); return;
      }
      goto L_089E7170;
    }
L_089E7170:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[20] << 8u);
    goto L_089E717C;
L_089E717C:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(18180));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[31] = (0x089E718Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E718Cu) goto L_089E718C;
    return;
L_089E718C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
      if (branch_taken) {
          goto L_089E737C;
      }
      goto L_089E7194;
    }
L_089E7194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[20] << 8u);
      if (branch_taken) {
          goto L_089E717C;
      }
      goto L_089E71A8;
    }
L_089E71A8:
    aot_gpr[2] = (2216u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 181u, 0x089E6A24u>(ctx, &aot_mem); return;
L_089E71B0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E71C8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E71C8u) goto L_089E71C8;
    return;
L_089E71C8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 250u, 0x089E6E30u>(ctx, &aot_mem); return;
    }
    goto L_089E71D0;
L_089E71D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E71E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E71E0u) goto L_089E71E0;
    return;
L_089E71E0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 250u, 0x089E6E30u>(ctx, &aot_mem); return;
    }
    goto L_089E71E8;
L_089E71E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6144)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089E73BC;
      }
      goto L_089E71F8;
    }
L_089E71F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E71FC;
L_089E71FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8252)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 71u, 0x089E63E4u>(ctx, &aot_mem); return;
      }
      goto L_089E7208;
    }
L_089E7208:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[21] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[21]);
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 71u, 0x089E63E4u>(ctx, &aot_mem); return;
    }
    goto L_089E7218;
L_089E7218:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 71u, 0x089E63E4u>(ctx, &aot_mem); return;
L_089E7220:
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8272), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 71u, 0x089E63E4u>(ctx, &aot_mem); return;
L_089E7230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E723Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E723Cu) goto L_089E723C;
    return;
L_089E723C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 5u, 0x089E606Cu>(ctx, &aot_mem); return;
L_089E7248:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(65) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E730C;
      }
      goto L_089E725C;
    }
L_089E725C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
      if (branch_taken) {
          goto L_089E7298;
      }
      goto L_089E7264;
    }
L_089E7264:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (2215u << 16u);
        goto L_089E7278;
    }
    goto L_089E7270;
L_089E7270:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(6));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
L_089E7278:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17872));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2600));
    aot_gpr[31] = (0x089E7288u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7288u) goto L_089E7288;
    return;
L_089E7288:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
    }
    goto L_089E7290;
L_089E7290:
    aot_gpr[18] = (0u | 55003u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
L_089E7298:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_089E7398;
      }
      goto L_089E72A0;
    }
L_089E72A0:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
      }
      goto L_089E72A8;
    }
L_089E72A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17976));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2600));
    aot_gpr[31] = (0x089E72BCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E72BCu) goto L_089E72BC;
    return;
L_089E72BC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (0u | 55003u);
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
    }
    goto L_089E72C4;
L_089E72C4:
    aot_gpr[18] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
L_089E72CC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E72D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E72D8u) goto L_089E72D8;
    return;
L_089E72D8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 250u, 0x089E6E30u>(ctx, &aot_mem); return;
    }
    goto L_089E72E0;
L_089E72E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E72F4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E72F4u) goto L_089E72F4;
    return;
L_089E72F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8268), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 252u, 0x089E6E48u>(ctx, &aot_mem); return;
L_089E72FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 267u, 0x089E6F60u>(ctx, &aot_mem); return;
L_089E7304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 50u, 0x089E62B8u>(ctx, &aot_mem); return;
L_089E730C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17920));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2600));
    aot_gpr[31] = (0x089E7320u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7320u) goto L_089E7320;
    return;
L_089E7320:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
    }
    goto L_089E7328;
L_089E7328:
    aot_gpr[18] = (0u | 55003u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
L_089E7330:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(18368));
    aot_gpr[31] = (0x089E7340u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7340u) goto L_089E7340;
    return;
L_089E7340:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 193u, 0x089E6AB4u>(ctx, &aot_mem); return;
    }
    goto L_089E7348;
L_089E7348:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E735Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E735Cu) goto L_089E735C;
    return;
L_089E735C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (aot_gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 192u, 0x089E6AB0u>(ctx, &aot_mem); return;
L_089E7368:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[31] = (0x089E7374u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089E7374u) goto L_089E7374;
    return;
L_089E7374:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E7004;
L_089E737C:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(23444));
    aot_gpr[31] = (0x089E7390u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7390u) goto L_089E7390;
    return;
L_089E7390:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089E7194;
L_089E7398:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18024));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2600));
    aot_gpr[31] = (0x089E73ACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E73ACu) goto L_089E73AC;
    return;
L_089E73AC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
    }
    goto L_089E73B4;
L_089E73B4:
    aot_gpr[18] = (0u | 55003u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 109u, 0x089E6648u>(ctx, &aot_mem); return;
L_089E73BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[23] = (0u + 0u);
    aot_gpr[30] = (0u + 0u);
    goto L_089E73CC;
L_089E73CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(3072));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[20] = (aot_gpr[2] << 8u);
    aot_gpr[31] = (0x089E73E4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089E73E4u) goto L_089E73E4;
    return;
L_089E73E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(18224));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089E73FCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E73FCu) goto L_089E73FC;
    return;
L_089E73FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[20]);
      if (branch_taken) {
          goto L_089E746C;
      }
      goto L_089E7404;
    }
L_089E7404:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E7410u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7410u) goto L_089E7410;
    return;
L_089E7410:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E7468;
      }
      goto L_089E7418;
    }
L_089E7418:
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E741C;
L_089E741C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089E7420;
L_089E7420:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(6144)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[3]);
      if (branch_taken) {
          goto L_089E73CC;
      }
      goto L_089E7438;
    }
L_089E7438:
    if (aot_gpr[30] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E71FC;
    }
    goto L_089E7440;
L_089E7440:
    if (aot_gpr[23] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E71FC;
    }
    goto L_089E7448;
L_089E7448:
    if (aot_gpr[22] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E71FC;
    }
    goto L_089E7450;
L_089E7450:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8252), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 71u, 0x089E63E4u>(ctx, &aot_mem); return;
L_089E7468:
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[20]);
    goto L_089E746C;
L_089E746C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(18244));
    aot_gpr[31] = (0x089E7480u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7480u) goto L_089E7480;
    return;
L_089E7480:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E74B0;
      }
      goto L_089E7488;
    }
L_089E7488:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E749Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E749Cu) goto L_089E749C;
    return;
L_089E749C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E74F0;
      }
      goto L_089E74A8;
    }
L_089E74A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089E7420;
L_089E74B0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(18260));
    aot_gpr[31] = (0x089E74C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E74C0u) goto L_089E74C0;
    return;
L_089E74C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E74F8;
      }
      goto L_089E74C8;
    }
L_089E74C8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(18272));
    aot_gpr[31] = (0x089E74E0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E74E0u) goto L_089E74E0;
    return;
L_089E74E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E74F8;
      }
      goto L_089E74E8;
    }
L_089E74E8:
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E741C;
L_089E74F0:
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E741C;
L_089E74F8:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(18276));
    aot_gpr[31] = (0x089E7508u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7508u) goto L_089E7508;
    return;
L_089E7508:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7420;
      }
      goto L_089E7510;
    }
L_089E7510:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3072));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E7524u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7524u) goto L_089E7524;
    return;
L_089E7524:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (aot_gpr[2] + 0u);
    goto L_089E741C;
L_089E7530:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 192u, 0x089E6AB0u>(ctx, &aot_mem); return;
L_089E7538:
    if (aot_gpr[22] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 176u, 0x089E69F0u>(ctx, &aot_mem); return;
    }
    goto L_089E7540;
L_089E7540:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 176u, 0x089E69F0u>(ctx, &aot_mem); return;
      }
      goto L_089E7548;
    }
L_089E7548:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 176u, 0x089E69F0u>(ctx, &aot_mem); return;
      }
      goto L_089E7550;
    }
L_089E7550:
    aot_gpr[18] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 37u, 0x089E61F4u>(ctx, &aot_mem); return;
L_089E7558:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 51u, 0x089E62BCu>(ctx, &aot_mem); return;
L_089E7564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 51u, 0x089E62BCu>(ctx, &aot_mem); return;
L_089E7570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 51u, 0x089E62BCu>(ctx, &aot_mem); return;
L_089E757C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(4));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 51u, 0x089E62BCu>(ctx, &aot_mem); return;
L_089E7588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(5));
    (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 51u, 0x089E62BCu>(ctx, &aot_mem); return;
L_089E7594:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E75A4;
      }
      goto L_089E759C;
    }
L_089E759C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089E75A4;
L_089E75A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E75AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089E764C;
      }
      goto L_089E75C4;
    }
L_089E75C4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E760C;
    }
    goto L_089E75CC;
L_089E75CC:
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E760C;
    }
    goto L_089E75D4;
L_089E75D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_089E7620;
      }
      goto L_089E75E0;
    }
L_089E75E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089E7600u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089E7600u) goto L_089E7600;
    return;
L_089E7600:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089E763C;
    }
    goto L_089E7608;
L_089E7608:
    aot_gpr[4] = (0u | 55000u);
    goto L_089E760C;
L_089E760C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089E7610;
L_089E7610:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7620:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E75E0;
      }
      goto L_089E7628;
    }
L_089E7628:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E763C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089E7608;
      }
      goto L_089E7644;
    }
L_089E7644:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089E7610;
L_089E764C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E760C;
L_089E7654:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_089E768C;
      }
      goto L_089E7670;
    }
L_089E7670:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E768C;
      }
      goto L_089E767C;
    }
L_089E767C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E76A4;
      }
      goto L_089E7688;
    }
L_089E7688:
    aot_gpr[3] = (0u | 55002u);
    goto L_089E768C;
L_089E768C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089E7690;
L_089E7690:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E76A4:
    aot_gpr[31] = (0x089E76ACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089E76ACu) goto L_089E76AC;
    return;
L_089E76AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E768C;
      }
      goto L_089E76B4;
    }
L_089E76B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E7690;
      }
      goto L_089E76C0;
    }
L_089E76C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E7688;
      }
      goto L_089E76CC;
    }
L_089E76CC:
    aot_gpr[31] = (0x089E76D4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0481_entry, 481u, 31u, 0x089E521Cu>(ctx, &aot_mem) && ctx.pc == 0x089E76D4u) goto L_089E76D4;
    return;
L_089E76D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089E768C;
      }
      goto L_089E76DC;
    }
L_089E76DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089E7734;
    }
    goto L_089E76E8;
L_089E76E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(18380));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089E7708u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10872));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E7708u) goto L_089E7708;
    return;
L_089E7708:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(18480));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10872));
    aot_gpr[31] = (0x089E7720u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E7720u) goto L_089E7720;
    return;
L_089E7720:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E768C;
      }
      goto L_089E7728;
    }
L_089E7728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    goto L_089E7738;
L_089E7734:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    goto L_089E7738;
L_089E7738:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089E7744u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E7744u) goto L_089E7744;
    return;
L_089E7744:
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20292));
    aot_gpr[31] = (0x089E7758u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8308), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089E7758u) goto L_089E7758;
    return;
L_089E7758:
    aot_gpr[31] = (0x089E7760u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 3u, 0x089E6020u>(ctx, &aot_mem) && ctx.pc == 0x089E7760u) goto L_089E7760;
    return;
L_089E7760:
    aot_gpr[3] = (0u + 0u);
    goto L_089E768C;
L_089E7768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E77DC;
      }
      goto L_089E7778;
    }
L_089E7778:
    aot_gpr[31] = (0x089E7780u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089E7654;
L_089E7780:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (2217u << 16u);
        goto L_089E77B4;
    }
    goto L_089E7790;
L_089E7790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E77A8;
      }
      goto L_089E779C;
    }
L_089E779C:
    aot_gpr[31] = (0x089E77A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E77A4u) goto L_089E77A4;
    return;
L_089E77A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E77A8;
L_089E77A8:
    aot_gpr[31] = (0x089E77B0u);
    aot_gpr[4] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 252u, 0x089E4F94u>(ctx, &aot_mem) && ctx.pc == 0x089E77B0u) goto L_089E77B0;
    return;
L_089E77B0:
    aot_gpr[2] = (2217u << 16u);
    goto L_089E77B4;
L_089E77B4:
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23440), 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23432), 0u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23424), 0u);
    aot_gpr[31] = (0x089E77D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23420), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E77D8u) goto L_089E77D8;
    return;
L_089E77D8:
    aot_gpr[2] = (0u + 0u);
    goto L_089E77DC;
L_089E77DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E77E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089E7810u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E7810u) goto L_089E7810;
    return;
L_089E7810:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E784C;
      }
      goto L_089E7834;
    }
L_089E7834:
    aot_gpr[31] = (0x089E783Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E783Cu) goto L_089E783C;
    return;
L_089E783C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089E784C;
L_089E784C:
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
L_089E7864:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E78C0;
      }
      goto L_089E786C;
    }
L_089E786C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E78B8;
      }
      goto L_089E7874;
    }
L_089E7874:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E78B8;
      }
      goto L_089E7880;
    }
L_089E7880:
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089E78B8;
      }
      goto L_089E7890;
    }
L_089E7890:
    aot_gpr[7] = (0u - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    goto L_089E7898;
L_089E7898:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[7]);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
        goto L_089E78B8;
    }
    goto L_089E78A8;
L_089E78A8:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-2))))));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E7898;
      }
      goto L_089E78B4;
    }
L_089E78B4:
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    goto L_089E78B8;
L_089E78B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E78C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E78C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089E78F8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089E7864;
L_089E78F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E7904u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E7904u) goto L_089E7904;
    return;
L_089E7904:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E7918u);
    aot_gpr[19] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7918u) goto L_089E7918;
    return;
L_089E7918:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089E793C;
      }
      goto L_089E7920;
    }
L_089E7920:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[20] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089E793C;
L_089E793C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E79B0;
      }
      goto L_089E7990;
    }
L_089E7990:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089E7994;
L_089E7994:
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
L_089E79B0:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x089E79C0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_089E77E8;
L_089E79C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E79D0;
      }
      goto L_089E79C8;
    }
L_089E79C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E79D0;
L_089E79D0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19372));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E79E0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E79E0u) goto L_089E79E0;
    return;
L_089E79E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E79E8;
    }
L_089E79E8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E7990;
      }
      goto L_089E79F0;
    }
L_089E79F0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19060)));
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E7A04;
L_089E7A04:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(19380));
    aot_gpr[31] = (0x089E7A10u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7A10u) goto L_089E7A10;
    return;
L_089E7A10:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089E7A24;
    }
    goto L_089E7A18;
L_089E7A18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E7A20;
L_089E7A20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E7A24;
L_089E7A24:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7990;
      }
      goto L_089E7A2C;
    }
L_089E7A2C:
    if (aot_gpr[17] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089E7A04;
    }
    goto L_089E7A34;
L_089E7A34:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089E7A24;
    }
    goto L_089E7A40;
L_089E7A40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E7A50u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7A50u) goto L_089E7A50;
    return;
L_089E7A50:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[17]);
        goto L_089E7A20;
    }
    goto L_089E7A58;
L_089E7A58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E7A24;
L_089E7A60:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19388));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E7A70u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7A70u) goto L_089E7A70;
    return;
L_089E7A70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E7994;
      }
      goto L_089E7A78;
    }
L_089E7A78:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem); return;
L_089E7AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(520));
      if (branch_taken) {
          goto L_089E7AE0;
      }
      goto L_089E7ACC;
    }
L_089E7ACC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089E7AD0;
L_089E7AD0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7AE0:
    aot_gpr[31] = (0x089E7AE8u);
    // nop
    goto L_089E78C8;
L_089E7AE8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19400));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089E7B04;
      }
      goto L_089E7AFC;
    }
L_089E7AFC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E7B04;
L_089E7B04:
    aot_gpr[31] = (0x089E7B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7B0Cu) goto L_089E7B0C;
    return;
L_089E7B0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E7AD0;
      }
      goto L_089E7B14;
    }
L_089E7B14:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7B2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(528)));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-11920));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    goto L_089E7B70;
L_089E7B70:
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
          goto L_089E7B70;
      }
      goto L_089E7B9C;
    }
L_089E7B9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7BA8;
    }
L_089E7BA8:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7BB0;
    }
L_089E7BB0:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_089E7C6C;
    }
    goto L_089E7BBC;
L_089E7BBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (0x089E7BC8u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(264));
    goto L_089E7864;
L_089E7BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E7C8C;
      }
      goto L_089E7BD4;
    }
L_089E7BD4:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089E7BDC;
L_089E7BDC:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E7BE8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7BE8u) goto L_089E7BE8;
    return;
L_089E7BE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(19) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7C04;
      }
      goto L_089E7BF0;
    }
L_089E7BF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E7BDC;
      }
      goto L_089E7C00;
    }
L_089E7C00:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    goto L_089E7C04;
L_089E7C04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7C0C;
    }
L_089E7C0C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[17] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11840));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7C28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E7C38u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7C38u) goto L_089E7C38;
    return;
L_089E7C38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0484_entry, 484u, 38u, 0x089E81F8u>(ctx, &aot_mem); return;
      }
      goto L_089E7C40;
    }
L_089E7C40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[2] | 4u);
    goto L_089E7C50;
L_089E7C50:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089E7C5Cu);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7C5Cu) goto L_089E7C5C;
    return;
L_089E7C5C:
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7C64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_089E7C68;
L_089E7C68:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_089E7C6C;
L_089E7C6C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
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
L_089E7C8C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19388));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7CA0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7CA0u) goto L_089E7CA0;
    return;
L_089E7CA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7CBC;
      }
      goto L_089E7CA8;
    }
L_089E7CA8:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7CB8;
    }
L_089E7CB8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E7CBC;
L_089E7CBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E7CC0;
L_089E7CC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
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
L_089E7CE8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19388));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7CFCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7CFCu) goto L_089E7CFC;
    return;
L_089E7CFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7CBC;
      }
      goto L_089E7D04;
    }
L_089E7D04:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7C64;
      }
      goto L_089E7D14;
    }
L_089E7D14:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E7CC0;
L_089E7D1C:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E7D2Cu);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7D2Cu) goto L_089E7D2C;
    return;
L_089E7D2C:
    aot_gpr[3] = (aot_gpr[22] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7D38:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19064)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E7D4Cu);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7D4Cu) goto L_089E7D4C;
    return;
L_089E7D4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0484_entry, 484u, 29u, 0x089E8180u>(ctx, &aot_mem); return;
      }
      goto L_089E7D54;
    }
L_089E7D54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E7C64;
L_089E7D64:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7D78u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7D78u) goto L_089E7D78;
    return;
L_089E7D78:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7D80;
    }
L_089E7D80:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x089E7D90u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7D90u) goto L_089E7D90;
    return;
L_089E7D90:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7D9C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7DB0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7DB0u) goto L_089E7DB0;
    return;
L_089E7DB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7DB8;
    }
L_089E7DB8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(516));
    aot_gpr[31] = (0x089E7DC8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7DC8u) goto L_089E7DC8;
    return;
L_089E7DC8:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7DD4:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7DE8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7DE8u) goto L_089E7DE8;
    return;
L_089E7DE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7DF0;
    }
L_089E7DF0:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(772));
    aot_gpr[31] = (0x089E7E00u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7E00u) goto L_089E7E00;
    return;
L_089E7E00:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(772), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7E0C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7E20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7E20u) goto L_089E7E20;
    return;
L_089E7E20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7E28;
    }
L_089E7E28:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(1028));
    aot_gpr[31] = (0x089E7E38u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7E38u) goto L_089E7E38;
    return;
L_089E7E38:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(1028), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7E44:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7E58u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7E58u) goto L_089E7E58;
    return;
L_089E7E58:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7E60;
    }
L_089E7E60:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(1284));
    aot_gpr[31] = (0x089E7E70u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7E70u) goto L_089E7E70;
    return;
L_089E7E70:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(1284), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7E7C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7E90u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7E90u) goto L_089E7E90;
    return;
L_089E7E90:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7E98;
    }
L_089E7E98:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(1540));
    aot_gpr[31] = (0x089E7EA8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7EA8u) goto L_089E7EA8;
    return;
L_089E7EA8:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7EB4:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7EC8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7EC8u) goto L_089E7EC8;
    return;
L_089E7EC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7ED0;
    }
L_089E7ED0:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(1796));
    aot_gpr[31] = (0x089E7EE0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7EE0u) goto L_089E7EE0;
    return;
L_089E7EE0:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(1796), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7EEC:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7F00u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7F00u) goto L_089E7F00;
    return;
L_089E7F00:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7F08;
    }
L_089E7F08:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(2052));
    aot_gpr[31] = (0x089E7F18u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7F18u) goto L_089E7F18;
    return;
L_089E7F18:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2052), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7F24:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7F38u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7F38u) goto L_089E7F38;
    return;
L_089E7F38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7F40;
    }
L_089E7F40:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(2308));
    aot_gpr[31] = (0x089E7F50u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7F50u) goto L_089E7F50;
    return;
L_089E7F50:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2308), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7F5C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19072)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E7F70u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7F70u) goto L_089E7F70;
    return;
L_089E7F70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7F78;
    }
L_089E7F78:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(2564));
    aot_gpr[31] = (0x089E7F88u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7F88u) goto L_089E7F88;
    return;
L_089E7F88:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2564), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7F94:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19080)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E7FA8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7FA8u) goto L_089E7FA8;
    return;
L_089E7FA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0484_entry, 484u, 32u, 0x089E81A8u>(ctx, &aot_mem); return;
      }
      goto L_089E7FB0;
    }
L_089E7FB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E7C64;
L_089E7FC0:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19104)));
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E7FD8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E7FD8u) goto L_089E7FD8;
    return;
L_089E7FD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0484_entry, 484u, 17u, 0x089E80E4u>(ctx, &aot_mem); return;
      }
      goto L_089E7FE0;
    }
L_089E7FE0:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(2820));
    aot_gpr[31] = (0x089E7FF0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E7FF0u) goto L_089E7FF0;
    return;
L_089E7FF0:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2820), static_cast<std::uint8_t>(0u));
    goto L_089E7C64;
L_089E7FFC:
    aot_gpr[2] = (2216u << 16u);
    ctx.pc = 0x089E8000u; return;
}

void recomp_unit_0483(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0483_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_483(Runtime &runtime) {
    runtime.register_generated_unit(483u, 0x089E7000u, 4096u, &recomp_unit_0483, &recomp_unit_0483_entry);
    runtime.register_function(0x089E7004u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7018u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7020u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7038u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7040u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7050u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7058u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7068u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7094u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E70B8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E70D0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E70ECu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E70F4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7104u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7120u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7128u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7140u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7148u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7158u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7160u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7170u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E717Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E718Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7194u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71A8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71B0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71C8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71D0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71E0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71E8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71F8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E71FCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7208u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7218u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7220u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7230u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E723Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7248u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E725Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7264u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7270u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7278u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7288u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7290u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7298u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72A0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72A8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72BCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72C4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72CCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72D8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72E0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72F4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E72FCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7304u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E730Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7320u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7328u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7330u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7340u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7348u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E735Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7368u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7374u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E737Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7390u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7398u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E73ACu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E73B4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E73BCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E73CCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E73E4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E73FCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7404u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7410u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7418u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E741Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7420u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7438u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7440u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7448u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7450u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7468u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E746Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7480u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7488u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E749Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74A8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74B0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74C0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74C8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74E0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74E8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74F0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E74F8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7508u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7510u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7524u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7530u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7538u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7540u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7548u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7550u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7558u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7564u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7570u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E757Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7588u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7594u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E759Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E75A4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E75ACu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E75C4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E75CCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E75D4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E75E0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7600u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7608u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E760Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7610u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7620u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7628u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E763Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7644u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E764Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7654u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7670u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E767Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7688u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E768Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7690u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76A4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76ACu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76B4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76C0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76CCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76D4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76DCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E76E8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7708u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7720u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7728u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7734u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7738u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7744u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7758u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7760u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7768u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7778u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7780u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7790u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E779Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77A4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77A8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77B0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77B4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77D8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77DCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E77E8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7810u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7834u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E783Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E784Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7864u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E786Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7874u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7880u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7890u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7898u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E78A8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E78B4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E78B8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E78C0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E78C8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E78F8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7904u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7918u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7920u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E793Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7960u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7990u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7994u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79B0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79C0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79C8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79D0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79E0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79E8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E79F0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A04u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A10u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A18u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A20u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A24u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A2Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A34u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A40u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A50u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A58u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A60u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A70u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7A78u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7AA0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7ACCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7AD0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7AE0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7AE8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7AFCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7B04u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7B0Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7B14u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7B2Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7B70u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7B9Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BA8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BB0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BBCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BC8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BD4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BDCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BE8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7BF0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C00u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C04u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C0Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C28u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C38u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C40u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C50u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C5Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C64u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C68u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C6Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7C8Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CA0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CA8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CB8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CBCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CC0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CE8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7CFCu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D04u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D14u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D1Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D2Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D38u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D4Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D54u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D64u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D78u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D80u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D90u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7D9Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7DB0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7DB8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7DC8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7DD4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7DE8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7DF0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E00u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E0Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E20u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E28u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E38u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E44u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E58u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E60u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E70u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E7Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E90u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7E98u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7EA8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7EB4u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7EC8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7ED0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7EE0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7EECu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F00u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F08u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F18u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F24u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F38u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F40u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F50u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F5Cu, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F70u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F78u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F88u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7F94u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FA8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FB0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FC0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FD8u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FE0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FF0u, &recomp_unit_0483, "recomp_unit_0483");
    runtime.register_function(0x089E7FFCu, &recomp_unit_0483, "recomp_unit_0483");
}
} // namespace psprecomp
