#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0359[1019] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0,
    13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 23, 0, 24, 0, 25, 0, 26,
    0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0,
    38, 0, 0, 39, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0,
    50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 62,
    0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0,
    0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0,
    133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 142, 0, 143, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153,
    154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0,
    0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 234, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0,
    0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0,
    0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0,
    279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286,
};
void recomp_unit_0359_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0896B000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0359[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896B000;
    case 2u: goto L_0896B008;
    case 3u: goto L_0896B010;
    case 4u: goto L_0896B018;
    case 5u: goto L_0896B020;
    case 6u: goto L_0896B028;
    case 7u: goto L_0896B034;
    case 8u: goto L_0896B03C;
    case 9u: goto L_0896B048;
    case 10u: goto L_0896B060;
    case 11u: goto L_0896B068;
    case 12u: goto L_0896B074;
    case 13u: goto L_0896B080;
    case 14u: goto L_0896B088;
    case 15u: goto L_0896B098;
    case 16u: goto L_0896B0A0;
    case 17u: goto L_0896B0A8;
    case 18u: goto L_0896B0B8;
    case 19u: goto L_0896B0C0;
    case 20u: goto L_0896B0CC;
    case 21u: goto L_0896B0D4;
    case 22u: goto L_0896B0E0;
    case 23u: goto L_0896B0E4;
    case 24u: goto L_0896B0EC;
    case 25u: goto L_0896B0F4;
    case 26u: goto L_0896B0FC;
    case 27u: goto L_0896B110;
    case 28u: goto L_0896B118;
    case 29u: goto L_0896B12C;
    case 30u: goto L_0896B134;
    case 31u: goto L_0896B140;
    case 32u: goto L_0896B144;
    case 33u: goto L_0896B14C;
    case 34u: goto L_0896B158;
    case 35u: goto L_0896B160;
    case 36u: goto L_0896B168;
    case 37u: goto L_0896B178;
    case 38u: goto L_0896B180;
    case 39u: goto L_0896B18C;
    case 40u: goto L_0896B190;
    case 41u: goto L_0896B198;
    case 42u: goto L_0896B1A4;
    case 43u: goto L_0896B1B0;
    case 44u: goto L_0896B1BC;
    case 45u: goto L_0896B1C8;
    case 46u: goto L_0896B1D4;
    case 47u: goto L_0896B1DC;
    case 48u: goto L_0896B1EC;
    case 49u: goto L_0896B1F8;
    case 50u: goto L_0896B200;
    case 51u: goto L_0896B208;
    case 52u: goto L_0896B210;
    case 53u: goto L_0896B21C;
    case 54u: goto L_0896B228;
    case 55u: goto L_0896B234;
    case 56u: goto L_0896B240;
    case 57u: goto L_0896B24C;
    case 58u: goto L_0896B258;
    case 59u: goto L_0896B260;
    case 60u: goto L_0896B268;
    case 61u: goto L_0896B274;
    case 62u: goto L_0896B27C;
    case 63u: goto L_0896B288;
    case 64u: goto L_0896B294;
    case 65u: goto L_0896B29C;
    case 66u: goto L_0896B2A4;
    case 67u: goto L_0896B2AC;
    case 68u: goto L_0896B2D8;
    case 69u: goto L_0896B2EC;
    case 70u: goto L_0896B2F8;
    case 71u: goto L_0896B304;
    case 72u: goto L_0896B314;
    case 73u: goto L_0896B320;
    case 74u: goto L_0896B330;
    case 75u: goto L_0896B33C;
    case 76u: goto L_0896B370;
    case 77u: goto L_0896B380;
    case 78u: goto L_0896B390;
    case 79u: goto L_0896B39C;
    case 80u: goto L_0896B3A8;
    case 81u: goto L_0896B3B0;
    case 82u: goto L_0896B3BC;
    case 83u: goto L_0896B3DC;
    case 84u: goto L_0896B3E4;
    case 85u: goto L_0896B3F4;
    case 86u: goto L_0896B424;
    case 87u: goto L_0896B42C;
    case 88u: goto L_0896B434;
    case 89u: goto L_0896B43C;
    case 90u: goto L_0896B448;
    case 91u: goto L_0896B474;
    case 92u: goto L_0896B47C;
    case 93u: goto L_0896B488;
    case 94u: goto L_0896B490;
    case 95u: goto L_0896B498;
    case 96u: goto L_0896B4A4;
    case 97u: goto L_0896B4B8;
    case 98u: goto L_0896B4C0;
    case 99u: goto L_0896B4C8;
    case 100u: goto L_0896B4D0;
    case 101u: goto L_0896B4DC;
    case 102u: goto L_0896B4F0;
    case 103u: goto L_0896B4F8;
    case 104u: goto L_0896B518;
    case 105u: goto L_0896B520;
    case 106u: goto L_0896B528;
    case 107u: goto L_0896B530;
    case 108u: goto L_0896B538;
    case 109u: goto L_0896B540;
    case 110u: goto L_0896B548;
    case 111u: goto L_0896B550;
    case 112u: goto L_0896B558;
    case 113u: goto L_0896B560;
    case 114u: goto L_0896B568;
    case 115u: goto L_0896B570;
    case 116u: goto L_0896B578;
    case 117u: goto L_0896B588;
    case 118u: goto L_0896B5A8;
    case 119u: goto L_0896B5B4;
    case 120u: goto L_0896B5BC;
    case 121u: goto L_0896B5D4;
    case 122u: goto L_0896B5DC;
    case 123u: goto L_0896B5E4;
    case 124u: goto L_0896B5EC;
    case 125u: goto L_0896B608;
    case 126u: goto L_0896B630;
    case 127u: goto L_0896B63C;
    case 128u: goto L_0896B648;
    case 129u: goto L_0896B658;
    case 130u: goto L_0896B660;
    case 131u: goto L_0896B668;
    case 132u: goto L_0896B670;
    case 133u: goto L_0896B680;
    case 134u: goto L_0896B688;
    case 135u: goto L_0896B694;
    case 136u: goto L_0896B6A0;
    case 137u: goto L_0896B6B0;
    case 138u: goto L_0896B6B8;
    case 139u: goto L_0896B6C4;
    case 140u: goto L_0896B6D0;
    case 141u: goto L_0896B6E0;
    case 142u: goto L_0896B6E4;
    case 143u: goto L_0896B6EC;
    case 144u: goto L_0896B708;
    case 145u: goto L_0896B714;
    case 146u: goto L_0896B720;
    case 147u: goto L_0896B730;
    case 148u: goto L_0896B734;
    case 149u: goto L_0896B73C;
    case 150u: goto L_0896B754;
    case 151u: goto L_0896B760;
    case 152u: goto L_0896B76C;
    case 153u: goto L_0896B77C;
    case 154u: goto L_0896B780;
    case 155u: goto L_0896B788;
    case 156u: goto L_0896B798;
    case 157u: goto L_0896B7A8;
    case 158u: goto L_0896B7AC;
    case 159u: goto L_0896B7B4;
    case 160u: goto L_0896B7C0;
    case 161u: goto L_0896B7D0;
    case 162u: goto L_0896B7D4;
    case 163u: goto L_0896B7DC;
    case 164u: goto L_0896B804;
    case 165u: goto L_0896B810;
    case 166u: goto L_0896B81C;
    case 167u: goto L_0896B82C;
    case 168u: goto L_0896B830;
    case 169u: goto L_0896B838;
    case 170u: goto L_0896B848;
    case 171u: goto L_0896B850;
    case 172u: goto L_0896B85C;
    case 173u: goto L_0896B868;
    case 174u: goto L_0896B874;
    case 175u: goto L_0896B890;
    case 176u: goto L_0896B8A4;
    case 177u: goto L_0896B8B0;
    case 178u: goto L_0896B8B8;
    case 179u: goto L_0896B8C8;
    case 180u: goto L_0896B8E0;
    case 181u: goto L_0896B8F0;
    case 182u: goto L_0896B8F8;
    case 183u: goto L_0896B908;
    case 184u: goto L_0896B910;
    case 185u: goto L_0896B920;
    case 186u: goto L_0896B928;
    case 187u: goto L_0896B930;
    case 188u: goto L_0896B938;
    case 189u: goto L_0896B940;
    case 190u: goto L_0896B954;
    case 191u: goto L_0896B990;
    case 192u: goto L_0896B9A4;
    case 193u: goto L_0896B9B8;
    case 194u: goto L_0896B9C0;
    case 195u: goto L_0896B9D8;
    case 196u: goto L_0896B9F8;
    case 197u: goto L_0896BA00;
    case 198u: goto L_0896BA24;
    case 199u: goto L_0896BA38;
    case 200u: goto L_0896BA3C;
    case 201u: goto L_0896BA4C;
    case 202u: goto L_0896BA64;
    case 203u: goto L_0896BA6C;
    case 204u: goto L_0896BA78;
    case 205u: goto L_0896BAAC;
    case 206u: goto L_0896BAB8;
    case 207u: goto L_0896BAE0;
    case 208u: goto L_0896BAE8;
    case 209u: goto L_0896BAF8;
    case 210u: goto L_0896BB10;
    case 211u: goto L_0896BB30;
    case 212u: goto L_0896BB3C;
    case 213u: goto L_0896BB44;
    case 214u: goto L_0896BB4C;
    case 215u: goto L_0896BB58;
    case 216u: goto L_0896BB64;
    case 217u: goto L_0896BB78;
    case 218u: goto L_0896BB98;
    case 219u: goto L_0896BBA0;
    case 220u: goto L_0896BBA8;
    case 221u: goto L_0896BBB0;
    case 222u: goto L_0896BBB8;
    case 223u: goto L_0896BBC0;
    case 224u: goto L_0896BBC8;
    case 225u: goto L_0896BBD0;
    case 226u: goto L_0896BBDC;
    case 227u: goto L_0896BBF4;
    case 228u: goto L_0896BBFC;
    case 229u: goto L_0896BC1C;
    case 230u: goto L_0896BC24;
    case 231u: goto L_0896BC40;
    case 232u: goto L_0896BC50;
    case 233u: goto L_0896BC60;
    case 234u: goto L_0896BC64;
    case 235u: goto L_0896BC78;
    case 236u: goto L_0896BC9C;
    case 237u: goto L_0896BCB0;
    case 238u: goto L_0896BCB8;
    case 239u: goto L_0896BCC0;
    case 240u: goto L_0896BCC8;
    case 241u: goto L_0896BCD4;
    case 242u: goto L_0896BCEC;
    case 243u: goto L_0896BCF8;
    case 244u: goto L_0896BD10;
    case 245u: goto L_0896BD1C;
    case 246u: goto L_0896BD34;
    case 247u: goto L_0896BD40;
    case 248u: goto L_0896BD5C;
    case 249u: goto L_0896BD70;
    case 250u: goto L_0896BD88;
    case 251u: goto L_0896BDA0;
    case 252u: goto L_0896BDB0;
    case 253u: goto L_0896BDD4;
    case 254u: goto L_0896BDE0;
    case 255u: goto L_0896BDE8;
    case 256u: goto L_0896BDF0;
    case 257u: goto L_0896BDF8;
    case 258u: goto L_0896BE04;
    case 259u: goto L_0896BE0C;
    case 260u: goto L_0896BE14;
    case 261u: goto L_0896BE20;
    case 262u: goto L_0896BE28;
    case 263u: goto L_0896BE30;
    case 264u: goto L_0896BE3C;
    case 265u: goto L_0896BE68;
    case 266u: goto L_0896BE80;
    case 267u: goto L_0896BEA0;
    case 268u: goto L_0896BEB8;
    case 269u: goto L_0896BEC0;
    case 270u: goto L_0896BEC8;
    case 271u: goto L_0896BEE0;
    case 272u: goto L_0896BF0C;
    case 273u: goto L_0896BF28;
    case 274u: goto L_0896BF38;
    case 275u: goto L_0896BF5C;
    case 276u: goto L_0896BF68;
    case 277u: goto L_0896BF70;
    case 278u: goto L_0896BF78;
    case 279u: goto L_0896BF80;
    case 280u: goto L_0896BF90;
    case 281u: goto L_0896BF98;
    case 282u: goto L_0896BFA0;
    case 283u: goto L_0896BFAC;
    case 284u: goto L_0896BFC4;
    case 285u: goto L_0896BFDC;
    case 286u: goto L_0896BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896B000:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896B018;
      }
      goto L_0896B008;
    }
L_0896B008:
    aot_gpr[31] = (0x0896B010u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0896B010u) goto L_0896B010;
    return;
L_0896B010:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B020;
      }
      goto L_0896B018;
    }
L_0896B018:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B160;
      }
      goto L_0896B020;
    }
L_0896B020:
    aot_gpr[31] = (0x0896B028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0896B028u) goto L_0896B028;
    return;
L_0896B028:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B034;
    }
L_0896B034:
    aot_gpr[31] = (0x0896B03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B03Cu) goto L_0896B03C;
    return;
L_0896B03C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B048;
    }
L_0896B048:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896B060u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B060u) goto L_0896B060;
    return;
L_0896B060:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B068;
    }
L_0896B068:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896B074u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 6u, 0x0897103Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B074u) goto L_0896B074;
    return;
L_0896B074:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B080;
    }
L_0896B080:
    aot_gpr[31] = (0x0896B088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x0896B088u) goto L_0896B088;
    return;
L_0896B088:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896B098u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21648));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x0896B098u) goto L_0896B098;
    return;
L_0896B098:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0FC;
      }
      goto L_0896B0A0;
    }
L_0896B0A0:
    aot_gpr[31] = (0x0896B0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x0896B0A8u) goto L_0896B0A8;
    return;
L_0896B0A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896B0B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21632));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x0896B0B8u) goto L_0896B0B8;
    return;
L_0896B0B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0FC;
      }
      goto L_0896B0C0;
    }
L_0896B0C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896B0CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 58u, 0x0896A3B4u>(ctx, &aot_mem) && ctx.pc == 0x0896B0CCu) goto L_0896B0CC;
    return;
L_0896B0CC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0E4;
      }
      goto L_0896B0D4;
    }
L_0896B0D4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896B0E0u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896B0E0u) goto L_0896B0E0;
    return;
L_0896B0E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0896B0E4;
L_0896B0E4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0F4;
      }
      goto L_0896B0EC;
    }
L_0896B0EC:
    aot_gpr[31] = (0x0896B0F4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896B0F4u) goto L_0896B0F4;
    return;
L_0896B0F4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B0FC;
    }
L_0896B0FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0896B110u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 138u, 0x089FB9E4u>(ctx, &aot_mem) && ctx.pc == 0x0896B110u) goto L_0896B110;
    return;
L_0896B110:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B12C;
      }
      goto L_0896B118;
    }
L_0896B118:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B12C;
    }
L_0896B12C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B144;
      }
      goto L_0896B134;
    }
L_0896B134:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896B140u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896B140u) goto L_0896B140;
    return;
L_0896B140:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0896B144;
L_0896B144:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B158;
      }
      goto L_0896B14C;
    }
L_0896B14C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896B158u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B158u) goto L_0896B158;
    return;
L_0896B158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B160;
    }
L_0896B160:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B168;
    }
L_0896B168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    aot_gpr[17] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B178;
    }
L_0896B178:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B190;
      }
      goto L_0896B180;
    }
L_0896B180:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896B18Cu);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896B18Cu) goto L_0896B18C;
    return;
L_0896B18C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0896B190;
L_0896B190:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B198;
    }
L_0896B198:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896B1A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30632));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 146u, 0x08961C54u>(ctx, &aot_mem) && ctx.pc == 0x0896B1A4u) goto L_0896B1A4;
    return;
L_0896B1A4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B1B0;
    }
L_0896B1B0:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896B1BCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 6u, 0x0897103Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B1BCu) goto L_0896B1BC;
    return;
L_0896B1BC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B1C8;
    }
L_0896B1C8:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896B1D4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 149u, 0x089FBABCu>(ctx, &aot_mem) && ctx.pc == 0x0896B1D4u) goto L_0896B1D4;
    return;
L_0896B1D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1EC;
      }
      goto L_0896B1DC;
    }
L_0896B1DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[17]);
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896B1F8;
      }
      goto L_0896B1EC;
    }
L_0896B1EC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896B1F8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B1F8u) goto L_0896B1F8;
    return;
L_0896B1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2A4;
      }
      goto L_0896B200;
    }
L_0896B200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2A4;
      }
      goto L_0896B208;
    }
L_0896B208:
    aot_gpr[31] = (0x0896B210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B210u) goto L_0896B210;
    return;
L_0896B210:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B274;
      }
      goto L_0896B21C;
    }
L_0896B21C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896B228u);
    aot_gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896B228u) goto L_0896B228;
    return;
L_0896B228:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B274;
      }
      goto L_0896B234;
    }
L_0896B234:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896B240u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 6u, 0x0897103Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B240u) goto L_0896B240;
    return;
L_0896B240:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B274;
      }
      goto L_0896B24C;
    }
L_0896B24C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896B258u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 157u, 0x089FBB58u>(ctx, &aot_mem) && ctx.pc == 0x0896B258u) goto L_0896B258;
    return;
L_0896B258:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B268;
      }
      goto L_0896B260;
    }
L_0896B260:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[20]);
      if (branch_taken) {
          goto L_0896B274;
      }
      goto L_0896B268;
    }
L_0896B268:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896B274u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B274u) goto L_0896B274;
    return;
L_0896B274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2A4;
      }
      goto L_0896B27C;
    }
L_0896B27C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896B288u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27984));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 6u, 0x0897103Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B288u) goto L_0896B288;
    return;
L_0896B288:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B29C;
      }
      goto L_0896B294;
    }
L_0896B294:
    aot_gpr[31] = (0x0896B29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 21u, 0x089FC130u>(ctx, &aot_mem) && ctx.pc == 0x0896B29Cu) goto L_0896B29C;
    return;
L_0896B29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2A4;
      }
      goto L_0896B2A4;
    }
L_0896B2A4:
    aot_gpr[31] = (0x0896B2ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 160u, 0x0896A97Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B2ACu) goto L_0896B2AC;
    return;
L_0896B2AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B2D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896B2ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28104));
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 203u, 0x0896AC58u>(ctx, &aot_mem) && ctx.pc == 0x0896B2ECu) goto L_0896B2EC;
    return;
L_0896B2EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896B2F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26744));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B2F8u) goto L_0896B2F8;
    return;
L_0896B2F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896B314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0896B314u) goto L_0896B314;
    return;
L_0896B314:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B320:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896B330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B330u) goto L_0896B330;
    return;
L_0896B330:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B33C:
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5680));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B3B0;
      }
      goto L_0896B380;
    }
L_0896B380:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5680));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_0896B39C;
      }
      goto L_0896B390;
    }
L_0896B390:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25904));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_0896B39C;
L_0896B39C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B3B0;
      }
      goto L_0896B3A8;
    }
L_0896B3A8:
    aot_gpr[31] = (0x0896B3B0u);
    // nop
    goto L_0896B320;
L_0896B3B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B3BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[31]);
    aot_gpr[31] = (0x0896B3DCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 15u, 0x08986150u>(ctx, &aot_mem) && ctx.pc == 0x0896B3DCu) goto L_0896B3DC;
    return;
L_0896B3DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_0896B570;
      }
      goto L_0896B3E4;
    }
L_0896B3E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896B3F4u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B3F4u) goto L_0896B3F4;
    return;
L_0896B3F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (0u | 40u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (0u | 20000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[31] = (0x0896B424u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 79u, 0x089EB4C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B424u) goto L_0896B424;
    return;
L_0896B424:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B568;
      }
      goto L_0896B42C;
    }
L_0896B42C:
    aot_gpr[31] = (0x0896B434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 124u, 0x08982690u>(ctx, &aot_mem) && ctx.pc == 0x0896B434u) goto L_0896B434;
    return;
L_0896B434:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B560;
      }
      goto L_0896B43C;
    }
L_0896B43C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x0896B448u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 178u, 0x08994CB4u>(ctx, &aot_mem) && ctx.pc == 0x0896B448u) goto L_0896B448;
    return;
L_0896B448:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24852));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25132));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x0896B474u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 140u, 0x089967CCu>(ctx, &aot_mem) && ctx.pc == 0x0896B474u) goto L_0896B474;
    return;
L_0896B474:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B558;
      }
      goto L_0896B47C;
    }
L_0896B47C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x0896B488u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 135u, 0x0899FB30u>(ctx, &aot_mem) && ctx.pc == 0x0896B488u) goto L_0896B488;
    return;
L_0896B488:
    aot_gpr[31] = (0x0896B490u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 136u, 0x0899FB48u>(ctx, &aot_mem) && ctx.pc == 0x0896B490u) goto L_0896B490;
    return;
L_0896B490:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B550;
      }
      goto L_0896B498;
    }
L_0896B498:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x0896B4A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 174u, 0x0898392Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B4A4u) goto L_0896B4A4;
    return;
L_0896B4A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[31] = (0x0896B4B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 217u, 0x089DBC64u>(ctx, &aot_mem) && ctx.pc == 0x0896B4B8u) goto L_0896B4B8;
    return;
L_0896B4B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B548;
      }
      goto L_0896B4C0;
    }
L_0896B4C0:
    aot_gpr[31] = (0x0896B4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0444_entry, 444u, 181u, 0x089C0E7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B4C8u) goto L_0896B4C8;
    return;
L_0896B4C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B4D0;
    }
L_0896B4D0:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x0896B4DCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 187u, 0x08982C78u>(ctx, &aot_mem) && ctx.pc == 0x0896B4DCu) goto L_0896B4DC;
    return;
L_0896B4DC:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (0u | 72u);
    aot_gpr[31] = (0x0896B4F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24952));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0896B4F0u) goto L_0896B4F0;
    return;
L_0896B4F0:
    aot_gpr[31] = (0x0896B4F8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 132u, 0x0896292Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B4F8u) goto L_0896B4F8;
    return;
L_0896B4F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x0896B518u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 193u, 0x08982CDCu>(ctx, &aot_mem) && ctx.pc == 0x0896B518u) goto L_0896B518;
    return;
L_0896B518:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B538;
      }
      goto L_0896B520;
    }
L_0896B520:
    aot_gpr[31] = (0x0896B528u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 205u, 0x089ACE78u>(ctx, &aot_mem) && ctx.pc == 0x0896B528u) goto L_0896B528;
    return;
L_0896B528:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B578;
      }
      goto L_0896B530;
    }
L_0896B530:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B538;
    }
L_0896B538:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B540;
    }
L_0896B540:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B548;
    }
L_0896B548:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B550;
    }
L_0896B550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B558;
    }
L_0896B558:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B560;
    }
L_0896B560:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B568;
    }
L_0896B568:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B570;
    }
L_0896B570:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0896B5EC;
      }
      goto L_0896B578;
    }
L_0896B578:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0896B588u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 104u, 0x0896C714u>(ctx, &aot_mem) && ctx.pc == 0x0896B588u) goto L_0896B588;
    return;
L_0896B588:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896B5A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B5A8u) goto L_0896B5A8;
    return;
L_0896B5A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0896B5B4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10232));
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 228u, 0x08960D34u>(ctx, &aot_mem) && ctx.pc == 0x0896B5B4u) goto L_0896B5B4;
    return;
L_0896B5B4:
    aot_gpr[31] = (0x0896B5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x0896B5BCu) goto L_0896B5BC;
    return;
L_0896B5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896B5D4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B5D4u) goto L_0896B5D4;
    return;
L_0896B5D4:
    aot_gpr[31] = (0x0896B5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 156u, 0x0896E954u>(ctx, &aot_mem) && ctx.pc == 0x0896B5DCu) goto L_0896B5DC;
    return;
L_0896B5DC:
    aot_gpr[31] = (0x0896B5E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 132u, 0x0896E800u>(ctx, &aot_mem) && ctx.pc == 0x0896B5E4u) goto L_0896B5E4;
    return;
L_0896B5E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (0u | 0u);
    goto L_0896B5EC;
L_0896B5EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B608:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896B660;
      }
      goto L_0896B630;
    }
L_0896B630:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0896B63Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896B63Cu) goto L_0896B63C;
    return;
L_0896B63C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0896B648u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B648u) goto L_0896B648;
    return;
L_0896B648:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0896B668;
      }
      goto L_0896B658;
    }
L_0896B658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B688;
      }
      goto L_0896B660;
    }
L_0896B660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B668;
    }
L_0896B668:
    aot_gpr[31] = (0x0896B670u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 224u, 0x089ACFB8u>(ctx, &aot_mem) && ctx.pc == 0x0896B670u) goto L_0896B670;
    return;
L_0896B670:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x0896B680u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x0896B680u) goto L_0896B680;
    return;
L_0896B680:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (2216u << 16u);
    goto L_0896B688;
L_0896B688:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26728)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B6B8;
      }
      goto L_0896B694;
    }
L_0896B694:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896B6A0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B6A0u) goto L_0896B6A0;
    return;
L_0896B6A0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x0896B6B0u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B6B0u) goto L_0896B6B0;
    return;
L_0896B6B0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26728), static_cast<std::uint8_t>(0u));
    goto L_0896B6B8;
L_0896B6B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B6E4;
      }
      goto L_0896B6C4;
    }
L_0896B6C4:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x0896B6D0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B6D0u) goto L_0896B6D0;
    return;
L_0896B6D0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x0896B6E0u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B6E0u) goto L_0896B6E0;
    return;
L_0896B6E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0896B6E4;
L_0896B6E4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B6EC;
    }
L_0896B6EC:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896B708u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 244u, 0x0896CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B708u) goto L_0896B708;
    return;
L_0896B708:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B734;
      }
      goto L_0896B714;
    }
L_0896B714:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x0896B720u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B720u) goto L_0896B720;
    return;
L_0896B720:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 15u);
    aot_gpr[31] = (0x0896B730u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B730u) goto L_0896B730;
    return;
L_0896B730:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0896B734;
L_0896B734:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B73C;
    }
L_0896B73C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896B754u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 179u, 0x0895FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B754u) goto L_0896B754;
    return;
L_0896B754:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B780;
      }
      goto L_0896B760;
    }
L_0896B760:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x0896B76Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B76Cu) goto L_0896B76C;
    return;
L_0896B76C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x0896B77Cu);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B77Cu) goto L_0896B77C;
    return;
L_0896B77C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0896B780;
L_0896B780:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B788;
    }
L_0896B788:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7AC;
      }
      goto L_0896B798;
    }
L_0896B798:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896B7A8u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 179u, 0x0895FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B7A8u) goto L_0896B7A8;
    return;
L_0896B7A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0896B7AC;
L_0896B7AC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7D4;
      }
      goto L_0896B7B4;
    }
L_0896B7B4:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x0896B7C0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B7C0u) goto L_0896B7C0;
    return;
L_0896B7C0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x0896B7D0u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B7D0u) goto L_0896B7D0;
    return;
L_0896B7D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0896B7D4;
L_0896B7D4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B7DC;
    }
L_0896B7DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0896B804u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B804u) goto L_0896B804;
    return;
L_0896B804:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B830;
      }
      goto L_0896B810;
    }
L_0896B810:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x0896B81Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896B81Cu) goto L_0896B81C;
    return;
L_0896B81C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x0896B82Cu);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B82Cu) goto L_0896B82C;
    return;
L_0896B82C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0896B830;
L_0896B830:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B838;
    }
L_0896B838:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896B848u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10232));
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 236u, 0x08960DC4u>(ctx, &aot_mem) && ctx.pc == 0x0896B848u) goto L_0896B848;
    return;
L_0896B848:
    aot_gpr[31] = (0x0896B850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 156u, 0x0896E954u>(ctx, &aot_mem) && ctx.pc == 0x0896B850u) goto L_0896B850;
    return;
L_0896B850:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896B85Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 133u, 0x0896E80Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B85Cu) goto L_0896B85C;
    return;
L_0896B85C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B874;
      }
      goto L_0896B868;
    }
L_0896B868:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896B874u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B874u) goto L_0896B874;
    return;
L_0896B874:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B890:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896B8A4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 156u, 0x0896E954u>(ctx, &aot_mem) && ctx.pc == 0x0896B8A4u) goto L_0896B8A4;
    return;
L_0896B8A4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8B8;
      }
      goto L_0896B8B0;
    }
L_0896B8B0:
    aot_gpr[31] = (0x0896B8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 139u, 0x0896E840u>(ctx, &aot_mem) && ctx.pc == 0x0896B8B8u) goto L_0896B8B8;
    return;
L_0896B8B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8E0;
      }
      goto L_0896B8C8;
    }
L_0896B8C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896B8E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B8E0u) goto L_0896B8E0;
    return;
L_0896B8E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10232));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8F8;
      }
      goto L_0896B8F0;
    }
L_0896B8F0:
    aot_gpr[31] = (0x0896B8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 260u, 0x08960F48u>(ctx, &aot_mem) && ctx.pc == 0x0896B8F8u) goto L_0896B8F8;
    return;
L_0896B8F8:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B910;
      }
      goto L_0896B908;
    }
L_0896B908:
    aot_gpr[31] = (0x0896B910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 224u, 0x0895FD34u>(ctx, &aot_mem) && ctx.pc == 0x0896B910u) goto L_0896B910;
    return;
L_0896B910:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B928;
      }
      goto L_0896B920;
    }
L_0896B920:
    aot_gpr[31] = (0x0896B928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 112u, 0x0896C7B0u>(ctx, &aot_mem) && ctx.pc == 0x0896B928u) goto L_0896B928;
    return;
L_0896B928:
    aot_gpr[31] = (0x0896B930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 146u, 0x089ADD98u>(ctx, &aot_mem) && ctx.pc == 0x0896B930u) goto L_0896B930;
    return;
L_0896B930:
    aot_gpr[31] = (0x0896B938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 215u, 0x08982E4Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B938u) goto L_0896B938;
    return;
L_0896B938:
    aot_gpr[31] = (0x0896B940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 76u, 0x089EB4A8u>(ctx, &aot_mem) && ctx.pc == 0x0896B940u) goto L_0896B940;
    return;
L_0896B940:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B954:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-26711), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896B990u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 7u, 0x0896705Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B990u) goto L_0896B990;
    return;
L_0896B990:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x0896B9A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26708));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896B9A4u) goto L_0896B9A4;
    return;
L_0896B9A4:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26720), aot_gpr[17]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[31] = (0x0896B9B8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17648));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0896B9B8u) goto L_0896B9B8;
    return;
L_0896B9B8:
    aot_gpr[31] = (0x0896B9C0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896B9C0u) goto L_0896B9C0;
    return;
L_0896B9C0:
    aot_gpr[2] = (0u | 6u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896B9D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-26712)));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896BA3C;
      }
      goto L_0896B9F8;
    }
L_0896B9F8:
    aot_gpr[31] = (0x0896BA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896BA00u) goto L_0896BA00;
    return;
L_0896BA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896BA24u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896BA24u) goto L_0896BA24;
    return;
L_0896BA24:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26720), 0u);
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x0896BA38u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 54u, 0x08962384u>(ctx, &aot_mem) && ctx.pc == 0x0896BA38u) goto L_0896BA38;
    return;
L_0896BA38:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-26712), static_cast<std::uint8_t>(0u));
    goto L_0896BA3C;
L_0896BA3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BA4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896BA64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(316), aot_gpr[4]);
    goto L_0896B9D8;
L_0896BA64:
    aot_gpr[31] = (0x0896BA6Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BA6Cu) goto L_0896BA6C;
    return;
L_0896BA6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BA78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26708)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26708));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0896BAACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896BAACu) goto L_0896BAAC;
    return;
L_0896BAAC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BAE8;
      }
      goto L_0896BAB8;
    }
L_0896BAB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 6u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896BAE0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896BAE0u) goto L_0896BAE0;
    return;
L_0896BAE0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26716), aot_gpr[2]);
    goto L_0896BAE8;
L_0896BAE8:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 6u);
    aot_gpr[31] = (0x0896BAF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17444));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 52u, 0x08962354u>(ctx, &aot_mem) && ctx.pc == 0x0896BAF8u) goto L_0896BAF8;
    return;
L_0896BAF8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-26712), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BB10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-24824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896BB30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 26u, 0x08967154u>(ctx, &aot_mem) && ctx.pc == 0x0896BB30u) goto L_0896BB30;
    return;
L_0896BB30:
    aot_gpr[16] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0896BB64;
      }
      goto L_0896BB3C;
    }
L_0896BB3C:
    aot_gpr[31] = (0x0896BB44u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 20u, 0x08967120u>(ctx, &aot_mem) && ctx.pc == 0x0896BB44u) goto L_0896BB44;
    return;
L_0896BB44:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0896BB64;
      }
      goto L_0896BB4C;
    }
L_0896BB4C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0896BB58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 185u, 0x08968B18u>(ctx, &aot_mem) && ctx.pc == 0x0896BB58u) goto L_0896BB58;
    return;
L_0896BB58:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[31] = (0x0896BB64u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17544));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0896BB64u) goto L_0896BB64;
    return;
L_0896BB64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BB78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896BBB8;
      }
      goto L_0896BB98;
    }
L_0896BB98:
    aot_gpr[31] = (0x0896BBA0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0896BBA0u) goto L_0896BBA0;
    return;
L_0896BBA0:
    aot_gpr[31] = (0x0896BBA8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BBA8u) goto L_0896BBA8;
    return;
L_0896BBA8:
    aot_gpr[31] = (0x0896BBB0u);
    // nop
    goto L_0896BA78;
L_0896BBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBD0;
      }
      goto L_0896BBB8;
    }
L_0896BBB8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBD0;
      }
      goto L_0896BBC0;
    }
L_0896BBC0:
    aot_gpr[31] = (0x0896BBC8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0896BBC8u) goto L_0896BBC8;
    return;
L_0896BBC8:
    aot_gpr[31] = (0x0896BBD0u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BBD0u) goto L_0896BBD0;
    return;
L_0896BBD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BBDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0896BBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896BBF4u) goto L_0896BBF4;
    return;
L_0896BBF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC64;
      }
      goto L_0896BBFC;
    }
L_0896BBFC:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(288));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26716)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896BC64;
      }
      goto L_0896BC1C;
    }
L_0896BC1C:
    aot_gpr[31] = (0x0896BC24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896BC24u) goto L_0896BC24;
    return;
L_0896BC24:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0896BC40u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x0896BC40u) goto L_0896BC40;
    return;
L_0896BC40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26720)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC60;
      }
      goto L_0896BC50;
    }
L_0896BC50:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896BC60u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896BC60u) goto L_0896BC60;
    return;
L_0896BC60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26716), aot_gpr[17]);
    goto L_0896BC64;
L_0896BC64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BC78:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26708), 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26708));
    aot_gpr[6] = (0u | 5000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BC9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BCC0;
      }
      goto L_0896BCB0;
    }
L_0896BCB0:
    aot_gpr[31] = (0x0896BCB8u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BCB8u) goto L_0896BCB8;
    return;
L_0896BCB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BCC8;
      }
      goto L_0896BCC0;
    }
L_0896BCC0:
    aot_gpr[31] = (0x0896BCC8u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BCC8u) goto L_0896BCC8;
    return;
L_0896BCC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BCD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896BCECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21616));
    goto L_0896BC9C;
L_0896BCEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BCF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896BD10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21592));
    goto L_0896BC9C;
L_0896BD10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BD1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896BD34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21568));
    goto L_0896BC9C;
L_0896BD34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BD40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-624));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896BE28;
      }
      goto L_0896BD5C;
    }
L_0896BD5C:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0896BD70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x0896BD70u) goto L_0896BD70;
    return;
L_0896BD70:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896BD88u);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896BD88u) goto L_0896BD88;
    return;
L_0896BD88:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896BDA0u);
    aot_gpr[6] = (0u | 316u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896BDA0u) goto L_0896BDA0;
    return;
L_0896BDA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(588), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(592));
    aot_gpr[31] = (0x0896BDB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896BDB0u) goto L_0896BDB0;
    return;
L_0896BDB0:
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(604), static_cast<std::uint8_t>(0u));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(604));
    aot_gpr[5] = (0u | 24u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896BDD4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x0896BDD4u) goto L_0896BDD4;
    return;
L_0896BDD4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDF8;
      }
      goto L_0896BDE0;
    }
L_0896BDE0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0896BE0C;
      }
      goto L_0896BDE8;
    }
L_0896BDE8:
    aot_gpr[31] = (0x0896BDF0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x0896BDF0u) goto L_0896BDF0;
    return;
L_0896BDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE30;
      }
      goto L_0896BDF8;
    }
L_0896BDF8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896BE04u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x0896BE04u) goto L_0896BE04;
    return;
L_0896BE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE30;
      }
      goto L_0896BE0C;
    }
L_0896BE0C:
    aot_gpr[31] = (0x0896BE14u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BE14u) goto L_0896BE14;
    return;
L_0896BE14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896BE20u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x0896BE20u) goto L_0896BE20;
    return;
L_0896BE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE30;
      }
      goto L_0896BE28;
    }
L_0896BE28:
    aot_gpr[31] = (0x0896BE30u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BE30u) goto L_0896BE30;
    return;
L_0896BE30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BE3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896BE68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17124));
    goto L_0896BD40;
L_0896BE68:
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
L_0896BE80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BEC0;
      }
      goto L_0896BEA0;
    }
L_0896BEA0:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0896BEB8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17196));
    goto L_0896BD40;
L_0896BEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BEC8;
      }
      goto L_0896BEC0;
    }
L_0896BEC0:
    aot_gpr[31] = (0x0896BEC8u);
    // nop
    goto L_0896BE3C;
L_0896BEC8:
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
L_0896BEE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (0x0896BF0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x0896BF0Cu) goto L_0896BF0C;
    return;
L_0896BF0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896BF28u);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896BF28u) goto L_0896BF28;
    return;
L_0896BF28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(280));
    aot_gpr[31] = (0x0896BF38u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896BF38u) goto L_0896BF38;
    return;
L_0896BF38:
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(292), static_cast<std::uint8_t>(0u));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(292));
    aot_gpr[5] = (0u | 23u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896BF5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x0896BF5Cu) goto L_0896BF5C;
    return;
L_0896BF5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF80;
      }
      goto L_0896BF68;
    }
L_0896BF68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0896BF98;
      }
      goto L_0896BF70;
    }
L_0896BF70:
    aot_gpr[31] = (0x0896BF78u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x0896BF78u) goto L_0896BF78;
    return;
L_0896BF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFAC;
      }
      goto L_0896BF80;
    }
L_0896BF80:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(292), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896BF90u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x0896BF90u) goto L_0896BF90;
    return;
L_0896BF90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFAC;
      }
      goto L_0896BF98;
    }
L_0896BF98:
    aot_gpr[31] = (0x0896BFA0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896BFA0u) goto L_0896BFA0;
    return;
L_0896BFA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896BFACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x0896BFACu) goto L_0896BFAC;
    return;
L_0896BFAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BFC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896BFDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17160));
    goto L_0896BEE0;
L_0896BFDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896BFE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 7u, 0x0896C064u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 1u, 0x0896C004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0359(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0359_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_359(Runtime &runtime) {
    runtime.register_generated_unit(359u, 0x0896B000u, 4096u, &recomp_unit_0359, &recomp_unit_0359_entry);
    runtime.register_function(0x0896B000u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B008u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B010u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B018u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B020u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B028u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B034u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B03Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B048u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B060u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B068u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B074u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B080u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B088u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B098u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0A0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0A8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0B8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0C0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0CCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0D4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0E0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0E4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0ECu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0F4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B0FCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B110u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B118u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B12Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B134u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B140u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B144u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B14Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B158u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B160u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B168u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B178u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B180u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B18Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B190u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B198u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1A4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1B0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1BCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1C8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1D4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1DCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1ECu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B1F8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B200u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B208u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B210u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B21Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B228u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B234u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B240u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B24Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B258u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B260u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B268u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B274u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B27Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B288u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B294u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B29Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B2A4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B2ACu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B2D8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B2ECu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B2F8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B304u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B314u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B320u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B330u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B33Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B370u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B380u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B390u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B39Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B3A8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B3B0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B3BCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B3DCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B3E4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B3F4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B424u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B42Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B434u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B43Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B448u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B474u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B47Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B488u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B490u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B498u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4A4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4B8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4C0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4C8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4D0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4DCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4F0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B4F8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B518u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B520u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B528u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B530u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B538u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B540u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B548u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B550u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B558u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B560u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B568u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B570u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B578u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B588u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5A8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5B4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5BCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5D4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5DCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5E4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B5ECu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B608u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B630u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B63Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B648u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B658u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B660u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B668u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B670u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B680u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B688u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B694u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6A0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6B0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6B8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6C4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6D0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6E0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6E4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B6ECu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B708u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B714u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B720u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B730u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B734u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B73Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B754u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B760u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B76Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B77Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B780u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B788u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B798u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7A8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7ACu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7B4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7C0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7D0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7D4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B7DCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B804u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B810u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B81Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B82Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B830u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B838u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B848u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B850u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B85Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B868u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B874u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B890u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8A4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8B0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8B8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8C8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8E0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8F0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B8F8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B908u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B910u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B920u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B928u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B930u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B938u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B940u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B954u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B990u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B9A4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B9B8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B9C0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B9D8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896B9F8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA00u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA24u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA38u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA3Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA4Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA64u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA6Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BA78u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BAACu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BAB8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BAE0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BAE8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BAF8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB10u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB30u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB3Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB44u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB4Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB58u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB64u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB78u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BB98u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBA0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBA8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBB0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBB8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBC0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBC8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBD0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBDCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBF4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BBFCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC1Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC24u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC40u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC50u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC60u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC64u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC78u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BC9Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCB0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCB8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCC0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCC8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCD4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCECu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BCF8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD10u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD1Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD34u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD40u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD5Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD70u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BD88u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDA0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDB0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDD4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDE0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDE8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDF0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BDF8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE04u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE0Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE14u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE20u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE28u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE30u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE3Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE68u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BE80u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BEA0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BEB8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BEC0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BEC8u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BEE0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF0Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF28u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF38u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF5Cu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF68u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF70u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF78u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF80u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF90u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BF98u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BFA0u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BFACu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BFC4u, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BFDCu, &recomp_unit_0359, "recomp_unit_0359");
    runtime.register_function(0x0896BFE8u, &recomp_unit_0359, "recomp_unit_0359");
}
} // namespace psprecomp
