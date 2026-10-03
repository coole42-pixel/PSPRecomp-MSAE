#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0114[1022] = {
    1, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0,
    0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0,
    43, 44, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0,
    54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 58,
    0, 0, 0, 0, 0, 59, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69,
    0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0,
    95, 0, 0, 0, 96, 0, 0, 97, 0, 98, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0,
    125, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 133, 0, 134,
    0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 139, 0, 0, 140, 0, 0, 0,
    141, 0, 0, 142, 0, 0, 143, 144, 0, 0, 0, 0, 145, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 153,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 168, 0, 0, 0, 0, 169, 170, 0, 171,
    0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182,
    0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 188, 0, 189, 0, 0, 0, 190,
    0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 214, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 221, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 232, 233, 0, 234, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240,
    241, 0, 242, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 257, 0,
    0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0,
    267, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 273, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 278,
};
void recomp_unit_0114_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08876000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0114[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08876000;
    case 2u: goto L_0887600C;
    case 3u: goto L_08876010;
    case 4u: goto L_08876018;
    case 5u: goto L_08876030;
    case 6u: goto L_08876038;
    case 7u: goto L_0887604C;
    case 8u: goto L_08876054;
    case 9u: goto L_0887605C;
    case 10u: goto L_08876068;
    case 11u: goto L_08876074;
    case 12u: goto L_08876088;
    case 13u: goto L_0887609C;
    case 14u: goto L_088760A8;
    case 15u: goto L_088760B0;
    case 16u: goto L_088760B8;
    case 17u: goto L_088760C0;
    case 18u: goto L_088760C8;
    case 19u: goto L_088760D4;
    case 20u: goto L_088760E4;
    case 21u: goto L_088760EC;
    case 22u: goto L_088760F8;
    case 23u: goto L_08876104;
    case 24u: goto L_08876114;
    case 25u: goto L_08876120;
    case 26u: goto L_0887612C;
    case 27u: goto L_08876138;
    case 28u: goto L_08876150;
    case 29u: goto L_0887615C;
    case 30u: goto L_08876168;
    case 31u: goto L_08876178;
    case 32u: goto L_08876188;
    case 33u: goto L_08876198;
    case 34u: goto L_088761A4;
    case 35u: goto L_088761AC;
    case 36u: goto L_088761B4;
    case 37u: goto L_088761C0;
    case 38u: goto L_088761CC;
    case 39u: goto L_088761D4;
    case 40u: goto L_088761E0;
    case 41u: goto L_088761EC;
    case 42u: goto L_088761F4;
    case 43u: goto L_08876200;
    case 44u: goto L_08876204;
    case 45u: goto L_0887620C;
    case 46u: goto L_08876218;
    case 47u: goto L_08876228;
    case 48u: goto L_08876234;
    case 49u: goto L_08876240;
    case 50u: goto L_0887624C;
    case 51u: goto L_08876254;
    case 52u: goto L_08876260;
    case 53u: goto L_08876268;
    case 54u: goto L_08876280;
    case 55u: goto L_08876284;
    case 56u: goto L_088762B4;
    case 57u: goto L_088762F8;
    case 58u: goto L_088762FC;
    case 59u: goto L_08876314;
    case 60u: goto L_08876318;
    case 61u: goto L_08876320;
    case 62u: goto L_08876338;
    case 63u: goto L_08876340;
    case 64u: goto L_08876354;
    case 65u: goto L_0887635C;
    case 66u: goto L_08876364;
    case 67u: goto L_0887636C;
    case 68u: goto L_08876374;
    case 69u: goto L_0887637C;
    case 70u: goto L_0887638C;
    case 71u: goto L_08876394;
    case 72u: goto L_0887639C;
    case 73u: goto L_088763A4;
    case 74u: goto L_088763AC;
    case 75u: goto L_088763BC;
    case 76u: goto L_088763C8;
    case 77u: goto L_088763D0;
    case 78u: goto L_088763D4;
    case 79u: goto L_088763DC;
    case 80u: goto L_088763EC;
    case 81u: goto L_088763F8;
    case 82u: goto L_0887640C;
    case 83u: goto L_0887643C;
    case 84u: goto L_08876488;
    case 85u: goto L_08876498;
    case 86u: goto L_088764A0;
    case 87u: goto L_088764A8;
    case 88u: goto L_088764B4;
    case 89u: goto L_088764C0;
    case 90u: goto L_088764D0;
    case 91u: goto L_088764DC;
    case 92u: goto L_088764E4;
    case 93u: goto L_088764F0;
    case 94u: goto L_088764F8;
    case 95u: goto L_08876500;
    case 96u: goto L_08876510;
    case 97u: goto L_0887651C;
    case 98u: goto L_08876524;
    case 99u: goto L_08876528;
    case 100u: goto L_08876558;
    case 101u: goto L_0887658C;
    case 102u: goto L_08876590;
    case 103u: goto L_088765A0;
    case 104u: goto L_088765AC;
    case 105u: goto L_088765B4;
    case 106u: goto L_088765B8;
    case 107u: goto L_088765C0;
    case 108u: goto L_088765CC;
    case 109u: goto L_088765D8;
    case 110u: goto L_088765E4;
    case 111u: goto L_088765EC;
    case 112u: goto L_08876600;
    case 113u: goto L_08876620;
    case 114u: goto L_08876664;
    case 115u: goto L_0887666C;
    case 116u: goto L_08876674;
    case 117u: goto L_08876698;
    case 118u: goto L_0887669C;
    case 119u: goto L_088766B0;
    case 120u: goto L_088766BC;
    case 121u: goto L_088766C4;
    case 122u: goto L_088766C8;
    case 123u: goto L_088766DC;
    case 124u: goto L_088766E8;
    case 125u: goto L_08876700;
    case 126u: goto L_08876704;
    case 127u: goto L_0887670C;
    case 128u: goto L_0887671C;
    case 129u: goto L_08876724;
    case 130u: goto L_0887672C;
    case 131u: goto L_08876758;
    case 132u: goto L_08876770;
    case 133u: goto L_08876774;
    case 134u: goto L_0887677C;
    case 135u: goto L_08876790;
    case 136u: goto L_08876798;
    case 137u: goto L_088767A4;
    case 138u: goto L_088767E0;
    case 139u: goto L_088767E4;
    case 140u: goto L_088767F0;
    case 141u: goto L_08876800;
    case 142u: goto L_0887680C;
    case 143u: goto L_08876818;
    case 144u: goto L_0887681C;
    case 145u: goto L_08876830;
    case 146u: goto L_08876834;
    case 147u: goto L_0887683C;
    case 148u: goto L_08876848;
    case 149u: goto L_08876850;
    case 150u: goto L_08876860;
    case 151u: goto L_0887686C;
    case 152u: goto L_08876878;
    case 153u: goto L_0887687C;
    case 154u: goto L_08876884;
    case 155u: goto L_08876894;
    case 156u: goto L_088768AC;
    case 157u: goto L_088768B4;
    case 158u: goto L_088768BC;
    case 159u: goto L_088768D0;
    case 160u: goto L_088768D8;
    case 161u: goto L_088768E4;
    case 162u: goto L_08876920;
    case 163u: goto L_08876924;
    case 164u: goto L_08876930;
    case 165u: goto L_08876940;
    case 166u: goto L_0887694C;
    case 167u: goto L_08876958;
    case 168u: goto L_0887695C;
    case 169u: goto L_08876970;
    case 170u: goto L_08876974;
    case 171u: goto L_0887697C;
    case 172u: goto L_08876988;
    case 173u: goto L_08876990;
    case 174u: goto L_088769A0;
    case 175u: goto L_088769AC;
    case 176u: goto L_088769B8;
    case 177u: goto L_088769BC;
    case 178u: goto L_088769C4;
    case 179u: goto L_088769D4;
    case 180u: goto L_088769EC;
    case 181u: goto L_088769F4;
    case 182u: goto L_088769FC;
    case 183u: goto L_08876A0C;
    case 184u: goto L_08876A14;
    case 185u: goto L_08876A1C;
    case 186u: goto L_08876A48;
    case 187u: goto L_08876A60;
    case 188u: goto L_08876A64;
    case 189u: goto L_08876A6C;
    case 190u: goto L_08876A7C;
    case 191u: goto L_08876A84;
    case 192u: goto L_08876A8C;
    case 193u: goto L_08876AB8;
    case 194u: goto L_08876AD0;
    case 195u: goto L_08876AD4;
    case 196u: goto L_08876ADC;
    case 197u: goto L_08876AEC;
    case 198u: goto L_08876AF4;
    case 199u: goto L_08876AFC;
    case 200u: goto L_08876B28;
    case 201u: goto L_08876B40;
    case 202u: goto L_08876B44;
    case 203u: goto L_08876B4C;
    case 204u: goto L_08876B5C;
    case 205u: goto L_08876B64;
    case 206u: goto L_08876B70;
    case 207u: goto L_08876BAC;
    case 208u: goto L_08876BB8;
    case 209u: goto L_08876BCC;
    case 210u: goto L_08876BD4;
    case 211u: goto L_08876BE0;
    case 212u: goto L_08876BE8;
    case 213u: goto L_08876BF0;
    case 214u: goto L_08876BF4;
    case 215u: goto L_08876C04;
    case 216u: goto L_08876C1C;
    case 217u: goto L_08876C28;
    case 218u: goto L_08876C30;
    case 219u: goto L_08876C3C;
    case 220u: goto L_08876C44;
    case 221u: goto L_08876C4C;
    case 222u: goto L_08876C50;
    case 223u: goto L_08876C64;
    case 224u: goto L_08876C78;
    case 225u: goto L_08876C90;
    case 226u: goto L_08876C98;
    case 227u: goto L_08876CA0;
    case 228u: goto L_08876CB0;
    case 229u: goto L_08876CB8;
    case 230u: goto L_08876CC0;
    case 231u: goto L_08876CEC;
    case 232u: goto L_08876D04;
    case 233u: goto L_08876D08;
    case 234u: goto L_08876D10;
    case 235u: goto L_08876D20;
    case 236u: goto L_08876D28;
    case 237u: goto L_08876D30;
    case 238u: goto L_08876D40;
    case 239u: goto L_08876D64;
    case 240u: goto L_08876D7C;
    case 241u: goto L_08876D80;
    case 242u: goto L_08876D88;
    case 243u: goto L_08876D90;
    case 244u: goto L_08876D94;
    case 245u: goto L_08876DC4;
    case 246u: goto L_08876DE4;
    case 247u: goto L_08876E08;
    case 248u: goto L_08876E20;
    case 249u: goto L_08876E34;
    case 250u: goto L_08876E44;
    case 251u: goto L_08876E58;
    case 252u: goto L_08876E64;
    case 253u: goto L_08876E78;
    case 254u: goto L_08876E88;
    case 255u: goto L_08876EA0;
    case 256u: goto L_08876EF4;
    case 257u: goto L_08876EF8;
    case 258u: goto L_08876F0C;
    case 259u: goto L_08876F1C;
    case 260u: goto L_08876F28;
    case 261u: goto L_08876F34;
    case 262u: goto L_08876F4C;
    case 263u: goto L_08876F54;
    case 264u: goto L_08876F58;
    case 265u: goto L_08876F64;
    case 266u: goto L_08876F6C;
    case 267u: goto L_08876F80;
    case 268u: goto L_08876F8C;
    case 269u: goto L_08876FA4;
    case 270u: goto L_08876FAC;
    case 271u: goto L_08876FBC;
    case 272u: goto L_08876FC4;
    case 273u: goto L_08876FC8;
    case 274u: goto L_08876FD0;
    case 275u: goto L_08876FD8;
    case 276u: goto L_08876FE0;
    case 277u: goto L_08876FEC;
    case 278u: goto L_08876FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08876000:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887604C;
      }
      goto L_0887600C;
    }
L_0887600C:
    aot_gpr[16] = (0u | 0u);
    goto L_08876010;
L_08876010:
    aot_gpr[31] = (0x08876018u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 132u, 0x0881C904u>(ctx, &aot_mem) && ctx.pc == 0x08876018u) goto L_08876018;
    return;
L_08876018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(3576));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876038;
      }
      goto L_08876030;
    }
L_08876030:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0887604C;
      }
      goto L_08876038;
    }
L_08876038:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3572)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876010;
      }
      goto L_0887604C;
    }
L_0887604C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876268;
      }
      goto L_08876054;
    }
L_08876054:
    aot_gpr[31] = (0x0887605Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 134u, 0x0881C93Cu>(ctx, &aot_mem) && ctx.pc == 0x0887605Cu) goto L_0887605C;
    return;
L_0887605C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08876068u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 135u, 0x0881C958u>(ctx, &aot_mem) && ctx.pc == 0x08876068u) goto L_08876068;
    return;
L_08876068:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08876074u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 133u, 0x0881C920u>(ctx, &aot_mem) && ctx.pc == 0x08876074u) goto L_08876074;
    return;
L_08876074:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088760C8;
      }
      goto L_08876088;
    }
L_08876088:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (15u << 16u);
      if (branch_taken) {
          goto L_088760B8;
      }
      goto L_0887609C;
    }
L_0887609C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16960));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_088760A8;
    }
L_088760A8:
    aot_gpr[31] = (0x088760B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 154u, 0x088748D0u>(ctx, &aot_mem) && ctx.pc == 0x088760B0u) goto L_088760B0;
    return;
L_088760B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_088760B8;
    }
L_088760B8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_088760C0;
    }
L_088760C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_088760C8;
    }
L_088760C8:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088760F8;
      }
      goto L_088760D4;
    }
L_088760D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088760E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 247u, 0x08874D98u>(ctx, &aot_mem) && ctx.pc == 0x088760E4u) goto L_088760E4;
    return;
L_088760E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_088760EC;
    }
L_088760EC:
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_088760F8;
    }
L_088760F8:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887612C;
      }
      goto L_08876104;
    }
L_08876104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876114u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 9u, 0x08874068u>(ctx, &aot_mem) && ctx.pc == 0x08876114u) goto L_08876114;
    return;
L_08876114:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_08876120;
    }
L_08876120:
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_0887612C;
    }
L_0887612C:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_08876138;
    }
L_08876138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3372)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3376));
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_08876150;
    }
L_08876150:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08876168;
      }
      goto L_0887615C;
    }
L_0887615C:
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08876178;
      }
      goto L_08876168;
    }
L_08876168:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876150;
      }
      goto L_08876178;
    }
L_08876178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876268;
      }
      goto L_08876188;
    }
L_08876188:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08876198u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 132u, 0x0881C904u>(ctx, &aot_mem) && ctx.pc == 0x08876198u) goto L_08876198;
    return;
L_08876198:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088761A4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 183u, 0x08874A50u>(ctx, &aot_mem) && ctx.pc == 0x088761A4u) goto L_088761A4;
    return;
L_088761A4:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876268;
      }
      goto L_088761AC;
    }
L_088761AC:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876254;
      }
      goto L_088761B4;
    }
L_088761B4:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088761D4;
      }
      goto L_088761C0;
    }
L_088761C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088761CCu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088761CCu) goto L_088761CC;
    return;
L_088761CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 376u);
      if (branch_taken) {
          goto L_08876204;
      }
      goto L_088761D4;
    }
L_088761D4:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088761F4;
      }
      goto L_088761E0;
    }
L_088761E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088761ECu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088761ECu) goto L_088761EC;
    return;
L_088761EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 259u);
      if (branch_taken) {
          goto L_08876204;
      }
      goto L_088761F4;
    }
L_088761F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08876200u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08876200u) goto L_08876200;
    return;
L_08876200:
    aot_gpr[16] = (0u | 259u);
    goto L_08876204;
L_08876204:
    aot_gpr[31] = (0x0887620Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 136u, 0x0881C974u>(ctx, &aot_mem) && ctx.pc == 0x0887620Cu) goto L_0887620C;
    return;
L_0887620C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08876218u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 137u, 0x0881C990u>(ctx, &aot_mem) && ctx.pc == 0x08876218u) goto L_08876218;
    return;
L_08876218:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08876228u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876228u) goto L_08876228;
    return;
L_08876228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08876234u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08876234u) goto L_08876234;
    return;
L_08876234:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08876240u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876240u) goto L_08876240;
    return;
L_08876240:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887624Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0887624Cu) goto L_0887624C;
    return;
L_0887624C:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(0u));
    goto L_08876254;
L_08876254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876268;
      }
      goto L_08876260;
    }
L_08876260:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08876284;
      }
      goto L_08876268;
    }
L_08876268:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 272u, 0x08875FF4u>(ctx, &aot_mem); return;
      }
      goto L_08876280;
    }
L_08876280:
    aot_gpr[2] = (0u | 0u);
    goto L_08876284;
L_08876284:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088762B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887640C;
      }
      goto L_088762F8;
    }
L_088762F8:
    aot_gpr[21] = (2215u << 16u);
    goto L_088762FC;
L_088762FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4088)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08876354;
      }
      goto L_08876314;
    }
L_08876314:
    aot_gpr[22] = (0u | 0u);
    goto L_08876318;
L_08876318:
    aot_gpr[31] = (0x08876320u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08876320u) goto L_08876320;
    return;
L_08876320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4092));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876340;
      }
      goto L_08876338;
    }
L_08876338:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08876354;
      }
      goto L_08876340;
    }
L_08876340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4088)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876318;
      }
      goto L_08876354;
    }
L_08876354:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088763F8;
      }
      goto L_0887635C;
    }
L_0887635C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887636C;
      }
      goto L_08876364;
    }
L_08876364:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088763D4;
      }
      goto L_0887636C;
    }
L_0887636C:
    aot_gpr[31] = (0x08876374u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 179u, 0x0881CC9Cu>(ctx, &aot_mem) && ctx.pc == 0x08876374u) goto L_08876374;
    return;
L_08876374:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887639C;
      }
      goto L_0887637C;
    }
L_0887637C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0887638Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 154u, 0x088748D0u>(ctx, &aot_mem) && ctx.pc == 0x0887638Cu) goto L_0887638C;
    return;
L_0887638C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088763D4;
      }
      goto L_08876394;
    }
L_08876394:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088763D4;
      }
      goto L_0887639C;
    }
L_0887639C:
    aot_gpr[31] = (0x088763A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x0881CC64u>(ctx, &aot_mem) && ctx.pc == 0x088763A4u) goto L_088763A4;
    return;
L_088763A4:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088763D0;
      }
      goto L_088763AC;
    }
L_088763AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088763BCu);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 177u, 0x0881CC64u>(ctx, &aot_mem) && ctx.pc == 0x088763BCu) goto L_088763BC;
    return;
L_088763BC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088763C8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 247u, 0x08874D98u>(ctx, &aot_mem) && ctx.pc == 0x088763C8u) goto L_088763C8;
    return;
L_088763C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088763D4;
      }
      goto L_088763D0;
    }
L_088763D0:
    aot_gpr[19] = (0u | 1u);
    goto L_088763D4;
L_088763D4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088763F8;
      }
      goto L_088763DC;
    }
L_088763DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088763ECu);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x088763ECu) goto L_088763EC;
    return;
L_088763EC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088763F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 200u, 0x08874B38u>(ctx, &aot_mem) && ctx.pc == 0x088763F8u) goto L_088763F8;
    return;
L_088763F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088762FC;
      }
      goto L_0887640C;
    }
L_0887640C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887643C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] & 255u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[23] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08876488u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5532));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 106u, 0x0886C730u>(ctx, &aot_mem) && ctx.pc == 0x08876488u) goto L_08876488;
    return;
L_08876488:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[21] == aot_gpr[20];
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0887651C;
      }
      goto L_08876498;
    }
L_08876498:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    aot_gpr[17] = (0u | 1u);
    goto L_088764A0;
L_088764A0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088764F8;
      }
      goto L_088764A8;
    }
L_088764A8:
    aot_gpr[4] = (0u | 257u);
    aot_gpr[31] = (0x088764B4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088764B4u) goto L_088764B4;
    return;
L_088764B4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088764C0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088764C0u) goto L_088764C0;
    return;
L_088764C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088764D0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5532));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 117u, 0x0886C810u>(ctx, &aot_mem) && ctx.pc == 0x088764D0u) goto L_088764D0;
    return;
L_088764D0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088764DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088764DCu) goto L_088764DC;
    return;
L_088764DC:
    aot_gpr[31] = (0x088764E4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 194u, 0x0881CDB8u>(ctx, &aot_mem) && ctx.pc == 0x088764E4u) goto L_088764E4;
    return;
L_088764E4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088764F0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088764F0u) goto L_088764F0;
    return;
L_088764F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_088764F8;
L_088764F8:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876524;
      }
      goto L_08876500;
    }
L_08876500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08876510u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5532));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 106u, 0x0886C730u>(ctx, &aot_mem) && ctx.pc == 0x08876510u) goto L_08876510;
    return;
L_08876510:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088764A0;
      }
      goto L_0887651C;
    }
L_0887651C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08876528;
      }
      goto L_08876524;
    }
L_08876524:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_08876528;
L_08876528:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876558:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_08876600;
      }
      goto L_0887658C;
    }
L_0887658C:
    aot_gpr[18] = (2215u << 16u);
    goto L_08876590;
L_08876590:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088765A0u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 132u, 0x0881C904u>(ctx, &aot_mem) && ctx.pc == 0x088765A0u) goto L_088765A0;
    return;
L_088765A0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088765ACu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 193u, 0x08874AECu>(ctx, &aot_mem) && ctx.pc == 0x088765ACu) goto L_088765AC;
    return;
L_088765AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088765EC;
      }
      goto L_088765B4;
    }
L_088765B4:
    aot_gpr[17] = (0u | 0u);
    goto L_088765B8;
L_088765B8:
    aot_gpr[31] = (0x088765C0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x0881C9ACu>(ctx, &aot_mem) && ctx.pc == 0x088765C0u) goto L_088765C0;
    return;
L_088765C0:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088765EC;
      }
      goto L_088765CC;
    }
L_088765CC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088765D8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x0881C9C8u>(ctx, &aot_mem) && ctx.pc == 0x088765D8u) goto L_088765D8;
    return;
L_088765D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088765E4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 50u, 0x088DB4DCu>(ctx, &aot_mem) && ctx.pc == 0x088765E4u) goto L_088765E4;
    return;
L_088765E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088765B8;
      }
      goto L_088765EC;
    }
L_088765EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876590;
      }
      goto L_08876600;
    }
L_08876600:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08876664u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 13u, 0x08875094u>(ctx, &aot_mem) && ctx.pc == 0x08876664u) goto L_08876664;
    return;
L_08876664:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887670C;
      }
      goto L_0887666C;
    }
L_0887666C:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08876704;
      }
      goto L_08876674;
    }
L_08876674:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[22] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(7676));
      if (branch_taken) {
          goto L_088766DC;
      }
      goto L_08876698;
    }
L_08876698:
    aot_gpr[23] = (2215u << 16u);
    goto L_0887669C;
L_0887669C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088766B0u);
    aot_gpr[30] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x0881CD10u>(ctx, &aot_mem) && ctx.pc == 0x088766B0u) goto L_088766B0;
    return;
L_088766B0:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088766BCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 247u, 0x08874D98u>(ctx, &aot_mem) && ctx.pc == 0x088766BCu) goto L_088766BC;
    return;
L_088766BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088766C8;
      }
      goto L_088766C4;
    }
L_088766C4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088766C8;
L_088766C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887669C;
      }
      goto L_088766DC;
    }
L_088766DC:
    aot_gpr[4] = (0u | 324u);
    aot_gpr[31] = (0x088766E8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088766E8u) goto L_088766E8;
    return;
L_088766E8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08876700u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876700u) goto L_08876700;
    return;
L_08876700:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[20]));
    goto L_08876704;
L_08876704:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_0887670C;
    }
L_0887670C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887671Cu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 40u, 0x08875248u>(ctx, &aot_mem) && ctx.pc == 0x0887671Cu) goto L_0887671C;
    return;
L_0887671C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887677C;
      }
      goto L_08876724;
    }
L_08876724:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08876774;
      }
      goto L_0887672C;
    }
L_0887672C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 299u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08876758u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876758u) goto L_08876758;
    return;
L_08876758:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08876770u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876770u) goto L_08876770;
    return;
L_08876770:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08876774;
L_08876774:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_0887677C;
    }
L_0887677C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x08876790u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 69u, 0x08875424u>(ctx, &aot_mem) && ctx.pc == 0x08876790u) goto L_08876790;
    return;
L_08876790:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088768BC;
      }
      goto L_08876798;
    }
L_08876798:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_088768B4;
      }
      goto L_088767A4;
    }
L_088767A4:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4220)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(256));
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(7676));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_08876830;
      }
      goto L_088767E0;
    }
L_088767E0:
    aot_gpr[16] = (0u | 0u);
    goto L_088767E4;
L_088767E4:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[31] = (0x088767F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4224)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 48u, 0x0881C3CCu>(ctx, &aot_mem) && ctx.pc == 0x088767F0u) goto L_088767F0;
    return;
L_088767F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[20];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_0887681C;
      }
      goto L_08876800;
    }
L_08876800:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887681C;
      }
      goto L_0887680C;
    }
L_0887680C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887681C;
      }
      goto L_08876818;
    }
L_08876818:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0887681C;
L_0887681C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4220)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088767E4;
      }
      goto L_08876830;
    }
L_08876830:
    aot_gpr[16] = (0u | 0u);
    goto L_08876834;
L_08876834:
    aot_gpr[31] = (0x0887683Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x0887683Cu) goto L_0887683C;
    return;
L_0887683C:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876884;
      }
      goto L_08876848;
    }
L_08876848:
    aot_gpr[31] = (0x08876850u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x08876850u) goto L_08876850;
    return;
L_08876850:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887687C;
      }
      goto L_08876860;
    }
L_08876860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887687C;
      }
      goto L_0887686C;
    }
L_0887686C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887687C;
      }
      goto L_08876878;
    }
L_08876878:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0887687C;
L_0887687C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08876834;
      }
      goto L_08876884;
    }
L_08876884:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u | 327u);
    aot_gpr[31] = (0x08876894u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876894u) goto L_08876894;
    return;
L_08876894:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088768ACu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088768ACu) goto L_088768AC;
    return;
L_088768AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_088768B4;
L_088768B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_088768BC;
    }
L_088768BC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[31] = (0x088768D0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 69u, 0x08875424u>(ctx, &aot_mem) && ctx.pc == 0x088768D0u) goto L_088768D0;
    return;
L_088768D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088769FC;
      }
      goto L_088768D8;
    }
L_088768D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_088769F4;
      }
      goto L_088768E4;
    }
L_088768E4:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4220)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(256));
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[20] = (0u | 3u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(7676));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08876970;
      }
      goto L_08876920;
    }
L_08876920:
    aot_gpr[16] = (0u | 0u);
    goto L_08876924;
L_08876924:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x08876930u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4224)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 48u, 0x0881C3CCu>(ctx, &aot_mem) && ctx.pc == 0x08876930u) goto L_08876930;
    return;
L_08876930:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_0887695C;
      }
      goto L_08876940;
    }
L_08876940:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887695C;
      }
      goto L_0887694C;
    }
L_0887694C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887695C;
      }
      goto L_08876958;
    }
L_08876958:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0887695C;
L_0887695C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4220)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876924;
      }
      goto L_08876970;
    }
L_08876970:
    aot_gpr[16] = (0u | 0u);
    goto L_08876974;
L_08876974:
    aot_gpr[31] = (0x0887697Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x0887697Cu) goto L_0887697C;
    return;
L_0887697C:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088769C4;
      }
      goto L_08876988;
    }
L_08876988:
    aot_gpr[31] = (0x08876990u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x08876990u) goto L_08876990;
    return;
L_08876990:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088769BC;
      }
      goto L_088769A0;
    }
L_088769A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088769BC;
      }
      goto L_088769AC;
    }
L_088769AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088769BC;
      }
      goto L_088769B8;
    }
L_088769B8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088769BC;
L_088769BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08876974;
      }
      goto L_088769C4;
    }
L_088769C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u | 328u);
    aot_gpr[31] = (0x088769D4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088769D4u) goto L_088769D4;
    return;
L_088769D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088769ECu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088769ECu) goto L_088769EC;
    return;
L_088769EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_088769F4;
L_088769F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_088769FC;
    }
L_088769FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876A0Cu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 106u, 0x08875668u>(ctx, &aot_mem) && ctx.pc == 0x08876A0Cu) goto L_08876A0C;
    return;
L_08876A0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876A6C;
      }
      goto L_08876A14;
    }
L_08876A14:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08876A64;
      }
      goto L_08876A1C;
    }
L_08876A1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 87u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08876A48u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876A48u) goto L_08876A48;
    return;
L_08876A48:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08876A60u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876A60u) goto L_08876A60;
    return;
L_08876A60:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08876A64;
L_08876A64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876A6C;
    }
L_08876A6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876A7Cu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 156u, 0x0887592Cu>(ctx, &aot_mem) && ctx.pc == 0x08876A7Cu) goto L_08876A7C;
    return;
L_08876A7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876ADC;
      }
      goto L_08876A84;
    }
L_08876A84:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08876AD4;
      }
      goto L_08876A8C;
    }
L_08876A8C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3372)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 247u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08876AB8u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876AB8u) goto L_08876AB8;
    return;
L_08876AB8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08876AD0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876AD0u) goto L_08876AD0;
    return;
L_08876AD0:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08876AD4;
L_08876AD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876ADC;
    }
L_08876ADC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876AECu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 233u, 0x08875D28u>(ctx, &aot_mem) && ctx.pc == 0x08876AECu) goto L_08876AEC;
    return;
L_08876AEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876B4C;
      }
      goto L_08876AF4;
    }
L_08876AF4:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08876B44;
      }
      goto L_08876AFC;
    }
L_08876AFC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3504)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 99u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08876B28u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876B28u) goto L_08876B28;
    return;
L_08876B28:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08876B40u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876B40u) goto L_08876B40;
    return;
L_08876B40:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08876B44;
L_08876B44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876B4C;
    }
L_08876B4C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876B5Cu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 270u, 0x08875F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08876B5Cu) goto L_08876B5C;
    return;
L_08876B5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876CA0;
      }
      goto L_08876B64;
    }
L_08876B64:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08876C98;
      }
      goto L_08876B70;
    }
L_08876B70:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3572)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[22] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08876C04;
      }
      goto L_08876BAC;
    }
L_08876BAC:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (0u | 2u);
    aot_gpr[16] = (0u | 0u);
    goto L_08876BB8;
L_08876BB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3576));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x08876BCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 142u, 0x0881CA10u>(ctx, &aot_mem) && ctx.pc == 0x08876BCCu) goto L_08876BCC;
    return;
L_08876BCC:
    aot_gpr[31] = (0x08876BD4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 134u, 0x0881C93Cu>(ctx, &aot_mem) && ctx.pc == 0x08876BD4u) goto L_08876BD4;
    return;
L_08876BD4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08876BF0;
      }
      goto L_08876BE0;
    }
L_08876BE0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08876BF0;
      }
      goto L_08876BE8;
    }
L_08876BE8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08876BF4;
      }
      goto L_08876BF0;
    }
L_08876BF0:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08876BF4;
L_08876BF4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876BB8;
      }
      goto L_08876C04;
    }
L_08876C04:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08876C64;
      }
      goto L_08876C1C;
    }
L_08876C1C:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[17] = (0u | 2u);
    aot_gpr[19] = (2218u << 16u);
    goto L_08876C28;
L_08876C28:
    aot_gpr[31] = (0x08876C30u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 134u, 0x0881C93Cu>(ctx, &aot_mem) && ctx.pc == 0x08876C30u) goto L_08876C30;
    return;
L_08876C30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08876C4C;
      }
      goto L_08876C3C;
    }
L_08876C3C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08876C4C;
      }
      goto L_08876C44;
    }
L_08876C44:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08876C50;
      }
      goto L_08876C4C;
    }
L_08876C4C:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08876C50;
L_08876C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876C28;
      }
      goto L_08876C64;
    }
L_08876C64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 248u);
    aot_gpr[31] = (0x08876C78u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876C78u) goto L_08876C78;
    return;
L_08876C78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08876C90u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876C90u) goto L_08876C90;
    return;
L_08876C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[20]));
    goto L_08876C98;
L_08876C98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876CA0;
    }
L_08876CA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876CB0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_088762B4;
L_08876CB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876D10;
      }
      goto L_08876CB8;
    }
L_08876CB8:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08876D08;
      }
      goto L_08876CC0;
    }
L_08876CC0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4088)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 145u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08876CECu);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876CECu) goto L_08876CEC;
    return;
L_08876CEC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08876D04u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876D04u) goto L_08876D04;
    return;
L_08876D04:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08876D08;
L_08876D08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876D10;
    }
L_08876D10:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876D20u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_0887643C;
L_08876D20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876D88;
      }
      goto L_08876D28;
    }
L_08876D28:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08876D80;
      }
      goto L_08876D30;
    }
L_08876D30:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x08876D40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5532));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 121u, 0x0886C85Cu>(ctx, &aot_mem) && ctx.pc == 0x08876D40u) goto L_08876D40;
    return;
L_08876D40:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[30] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 157u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08876D64u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(7676));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08876D64u) goto L_08876D64;
    return;
L_08876D64:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08876D7Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08876D7Cu) goto L_08876D7C;
    return;
L_08876D7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08876D80;
L_08876D80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876D88;
    }
L_08876D88:
    aot_gpr[31] = (0x08876D90u);
    // nop
    goto L_08876558;
L_08876D90:
    aot_gpr[2] = (0u | 0u);
    goto L_08876D94;
L_08876D94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876DC4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08876E88;
      }
      goto L_08876E08;
    }
L_08876E08:
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08876E44;
      }
      goto L_08876E20;
    }
L_08876E20:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08876E34u);
    aot_gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08876E34u) goto L_08876E34;
    return;
L_08876E34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08876E64;
      }
      goto L_08876E44;
    }
L_08876E44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08876E58u);
    aot_gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08876E58u) goto L_08876E58;
    return;
L_08876E58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_08876E64;
L_08876E64:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08876E78u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 122u, 0x08A48D24u>(ctx, &aot_mem) && ctx.pc == 0x08876E78u) goto L_08876E78;
    return;
L_08876E78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08876E88u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08876E88u) goto L_08876E88;
    return;
L_08876E88:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876EA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[10] & 255u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[7] | 0u);
    aot_gpr[21] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08876EF8;
      }
      goto L_08876EF4;
    }
L_08876EF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    goto L_08876EF8;
L_08876EF8:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] & 32768u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 3u, 0x0887700Cu>(ctx, &aot_mem); return;
      }
      goto L_08876F0C;
    }
L_08876F0C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7268)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876FEC;
      }
      goto L_08876F1C;
    }
L_08876F1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08876F28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 92u, 0x08928934u>(ctx, &aot_mem) && ctx.pc == 0x08876F28u) goto L_08876F28;
    return;
L_08876F28:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08876FE0;
      }
      goto L_08876F34;
    }
L_08876F34:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08876F4Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 100u, 0x089289CCu>(ctx, &aot_mem) && ctx.pc == 0x08876F4Cu) goto L_08876F4C;
    return;
L_08876F4C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08876F58;
      }
      goto L_08876F54;
    }
L_08876F54:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08876F58;
L_08876F58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876FC4;
      }
      goto L_08876F64;
    }
L_08876F64:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876F8C;
      }
      goto L_08876F6C;
    }
L_08876F6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08876F80u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29060)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08876F80u) goto L_08876F80;
    return;
L_08876F80:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08876FAC;
      }
      goto L_08876F8C;
    }
L_08876F8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08876FA4u);
    aot_gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08876FA4u) goto L_08876FA4;
    return;
L_08876FA4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08876FAC;
L_08876FAC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08876FBCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08876FBCu) goto L_08876FBC;
    return;
L_08876FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876FC8;
      }
      goto L_08876FC4;
    }
L_08876FC4:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_08876FC8;
L_08876FC8:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876FD8;
      }
      goto L_08876FD0;
    }
L_08876FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08876FD8;
L_08876FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876FEC;
      }
      goto L_08876FE0;
    }
L_08876FE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876F1C;
      }
      goto L_08876FEC;
    }
L_08876FEC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 2u, 0x08877004u>(ctx, &aot_mem); return;
      }
      goto L_08876FF4;
    }
L_08876FF4:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 2u, 0x08877004u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 1u, 0x08877000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0114(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0114_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_114(Runtime &runtime) {
    runtime.register_generated_unit(114u, 0x08876000u, 4096u, &recomp_unit_0114, &recomp_unit_0114_entry);
    runtime.register_function(0x08876000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887600Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876010u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876018u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876030u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876038u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887604Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876054u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887605Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876068u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876074u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876088u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887609Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088760F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876104u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876114u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876120u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887612Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876138u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876150u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887615Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876168u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876178u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876188u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876198u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088761F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876200u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876204u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887620Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876218u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876228u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876234u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876240u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887624Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876260u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876268u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876280u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876284u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088762B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088762F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088762FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876314u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876318u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876320u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876338u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876340u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887635Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876364u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887636Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876374u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887637Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887638Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876394u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887639Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088763F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887640Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887643Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876488u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088764F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876500u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876510u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887651Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876528u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887658Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876590u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088765ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876600u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876620u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876664u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887666Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876698u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887669Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088766B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088766BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088766C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088766C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088766DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088766E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876700u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876704u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887670Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887671Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876724u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887672Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876758u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876770u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876774u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887677Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876790u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088767A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088767E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088767E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088767F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876800u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887680Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876818u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887681Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876830u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876834u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887683Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876848u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876860u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887686Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876878u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887687Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876884u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876894u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088768ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088768B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088768BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088768D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088768D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088768E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876920u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876924u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876930u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876940u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887694Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876958u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887695Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876970u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876974u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x0887697Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876988u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876990u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x088769FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876A8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876AB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876AD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876AD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876ADCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876AECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876AF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876AFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876B70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876BF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876C98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876CA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876CB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876CB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876CC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876CECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876D94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876DC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876DE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876E88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876EA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876EF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876EF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876F8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x08876FF4u, &recomp_unit_0114, "recomp_unit_0114");
}
} // namespace psprecomp
