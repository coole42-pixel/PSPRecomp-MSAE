#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0566[1024] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13,
    14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 21, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 35, 36, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44,
    0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 54, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 64, 0, 0, 0, 0,
    0, 0, 0, 65, 66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0,
    0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 81, 82, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 85, 86, 0,
    0, 0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 110, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 122, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0,
    128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0,
    138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 147, 0, 148, 0, 149, 150, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 172, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0,
    0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201,
    0, 202, 0, 203, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210,
    0, 211, 0, 0, 212, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 221, 0, 0, 0,
    222, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 230, 0, 0, 0, 0, 231, 0, 232, 0, 233,
    0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0,
    0, 244, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0,
    256, 0, 257, 0, 258, 0, 0, 0, 259, 260, 0, 0, 261, 0, 0, 0, 262, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0,
    0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 279, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 290, 0, 0, 0, 291, 0, 292, 0, 0, 293, 294, 0, 0, 295, 0, 0, 0, 296, 297, 0,
    0, 298, 0, 0, 299, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307,
};
void recomp_unit_0566_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A3A000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0566[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3A000;
    case 2u: goto L_08A3A004;
    case 3u: goto L_08A3A010;
    case 4u: goto L_08A3A018;
    case 5u: goto L_08A3A028;
    case 6u: goto L_08A3A030;
    case 7u: goto L_08A3A040;
    case 8u: goto L_08A3A048;
    case 9u: goto L_08A3A050;
    case 10u: goto L_08A3A05C;
    case 11u: goto L_08A3A064;
    case 12u: goto L_08A3A074;
    case 13u: goto L_08A3A07C;
    case 14u: goto L_08A3A080;
    case 15u: goto L_08A3A088;
    case 16u: goto L_08A3A0A0;
    case 17u: goto L_08A3A0A8;
    case 18u: goto L_08A3A0B0;
    case 19u: goto L_08A3A0D0;
    case 20u: goto L_08A3A0D8;
    case 21u: goto L_08A3A0DC;
    case 22u: goto L_08A3A0E0;
    case 23u: goto L_08A3A100;
    case 24u: goto L_08A3A104;
    case 25u: goto L_08A3A118;
    case 26u: goto L_08A3A120;
    case 27u: goto L_08A3A130;
    case 28u: goto L_08A3A13C;
    case 29u: goto L_08A3A144;
    case 30u: goto L_08A3A14C;
    case 31u: goto L_08A3A160;
    case 32u: goto L_08A3A168;
    case 33u: goto L_08A3A170;
    case 34u: goto L_08A3A190;
    case 35u: goto L_08A3A198;
    case 36u: goto L_08A3A19C;
    case 37u: goto L_08A3A1A0;
    case 38u: goto L_08A3A1C0;
    case 39u: goto L_08A3A1C4;
    case 40u: goto L_08A3A1D0;
    case 41u: goto L_08A3A1D8;
    case 42u: goto L_08A3A1E8;
    case 43u: goto L_08A3A1F4;
    case 44u: goto L_08A3A1FC;
    case 45u: goto L_08A3A204;
    case 46u: goto L_08A3A218;
    case 47u: goto L_08A3A220;
    case 48u: goto L_08A3A22C;
    case 49u: goto L_08A3A24C;
    case 50u: goto L_08A3A254;
    case 51u: goto L_08A3A258;
    case 52u: goto L_08A3A260;
    case 53u: goto L_08A3A280;
    case 54u: goto L_08A3A284;
    case 55u: goto L_08A3A288;
    case 56u: goto L_08A3A290;
    case 57u: goto L_08A3A298;
    case 58u: goto L_08A3A2A0;
    case 59u: goto L_08A3A2B4;
    case 60u: goto L_08A3A2BC;
    case 61u: goto L_08A3A2C0;
    case 62u: goto L_08A3A2E0;
    case 63u: goto L_08A3A2E8;
    case 64u: goto L_08A3A2EC;
    case 65u: goto L_08A3A30C;
    case 66u: goto L_08A3A310;
    case 67u: goto L_08A3A320;
    case 68u: goto L_08A3A328;
    case 69u: goto L_08A3A33C;
    case 70u: goto L_08A3A340;
    case 71u: goto L_08A3A348;
    case 72u: goto L_08A3A350;
    case 73u: goto L_08A3A360;
    case 74u: goto L_08A3A368;
    case 75u: goto L_08A3A370;
    case 76u: goto L_08A3A384;
    case 77u: goto L_08A3A38C;
    case 78u: goto L_08A3A394;
    case 79u: goto L_08A3A3B4;
    case 80u: goto L_08A3A3BC;
    case 81u: goto L_08A3A3C0;
    case 82u: goto L_08A3A3C4;
    case 83u: goto L_08A3A3E4;
    case 84u: goto L_08A3A3E8;
    case 85u: goto L_08A3A3F4;
    case 86u: goto L_08A3A3F8;
    case 87u: goto L_08A3A408;
    case 88u: goto L_08A3A410;
    case 89u: goto L_08A3A414;
    case 90u: goto L_08A3A434;
    case 91u: goto L_08A3A43C;
    case 92u: goto L_08A3A444;
    case 93u: goto L_08A3A44C;
    case 94u: goto L_08A3A458;
    case 95u: goto L_08A3A478;
    case 96u: goto L_08A3A480;
    case 97u: goto L_08A3A488;
    case 98u: goto L_08A3A4A8;
    case 99u: goto L_08A3A4AC;
    case 100u: goto L_08A3A4B4;
    case 101u: goto L_08A3A4BC;
    case 102u: goto L_08A3A4C4;
    case 103u: goto L_08A3A4D0;
    case 104u: goto L_08A3A4D4;
    case 105u: goto L_08A3A4F4;
    case 106u: goto L_08A3A4FC;
    case 107u: goto L_08A3A51C;
    case 108u: goto L_08A3A520;
    case 109u: goto L_08A3A528;
    case 110u: goto L_08A3A540;
    case 111u: goto L_08A3A544;
    case 112u: goto L_08A3A54C;
    case 113u: goto L_08A3A594;
    case 114u: goto L_08A3A5C8;
    case 115u: goto L_08A3A5DC;
    case 116u: goto L_08A3A5F8;
    case 117u: goto L_08A3A604;
    case 118u: goto L_08A3A618;
    case 119u: goto L_08A3A620;
    case 120u: goto L_08A3A62C;
    case 121u: goto L_08A3A634;
    case 122u: goto L_08A3A640;
    case 123u: goto L_08A3A644;
    case 124u: goto L_08A3A64C;
    case 125u: goto L_08A3A65C;
    case 126u: goto L_08A3A664;
    case 127u: goto L_08A3A674;
    case 128u: goto L_08A3A680;
    case 129u: goto L_08A3A690;
    case 130u: goto L_08A3A6B4;
    case 131u: goto L_08A3A6BC;
    case 132u: goto L_08A3A6C8;
    case 133u: goto L_08A3A6D0;
    case 134u: goto L_08A3A6E0;
    case 135u: goto L_08A3A6E8;
    case 136u: goto L_08A3A6F0;
    case 137u: goto L_08A3A6F8;
    case 138u: goto L_08A3A700;
    case 139u: goto L_08A3A708;
    case 140u: goto L_08A3A710;
    case 141u: goto L_08A3A718;
    case 142u: goto L_08A3A728;
    case 143u: goto L_08A3A740;
    case 144u: goto L_08A3A748;
    case 145u: goto L_08A3A754;
    case 146u: goto L_08A3A75C;
    case 147u: goto L_08A3A760;
    case 148u: goto L_08A3A768;
    case 149u: goto L_08A3A770;
    case 150u: goto L_08A3A774;
    case 151u: goto L_08A3A77C;
    case 152u: goto L_08A3A79C;
    case 153u: goto L_08A3A7A8;
    case 154u: goto L_08A3A7C0;
    case 155u: goto L_08A3A7CC;
    case 156u: goto L_08A3A7DC;
    case 157u: goto L_08A3A7E4;
    case 158u: goto L_08A3A7EC;
    case 159u: goto L_08A3A800;
    case 160u: goto L_08A3A810;
    case 161u: goto L_08A3A828;
    case 162u: goto L_08A3A830;
    case 163u: goto L_08A3A838;
    case 164u: goto L_08A3A850;
    case 165u: goto L_08A3A870;
    case 166u: goto L_08A3A878;
    case 167u: goto L_08A3A88C;
    case 168u: goto L_08A3A89C;
    case 169u: goto L_08A3A8B0;
    case 170u: goto L_08A3A8D0;
    case 171u: goto L_08A3A8D8;
    case 172u: goto L_08A3A8DC;
    case 173u: goto L_08A3A8E4;
    case 174u: goto L_08A3A904;
    case 175u: goto L_08A3A90C;
    case 176u: goto L_08A3A920;
    case 177u: goto L_08A3A938;
    case 178u: goto L_08A3A940;
    case 179u: goto L_08A3A950;
    case 180u: goto L_08A3A958;
    case 181u: goto L_08A3A968;
    case 182u: goto L_08A3A970;
    case 183u: goto L_08A3A988;
    case 184u: goto L_08A3A990;
    case 185u: goto L_08A3A998;
    case 186u: goto L_08A3A9A8;
    case 187u: goto L_08A3A9AC;
    case 188u: goto L_08A3A9C8;
    case 189u: goto L_08A3A9D0;
    case 190u: goto L_08A3A9E4;
    case 191u: goto L_08A3A9F0;
    case 192u: goto L_08A3A9F8;
    case 193u: goto L_08A3AA08;
    case 194u: goto L_08A3AA18;
    case 195u: goto L_08A3AA30;
    case 196u: goto L_08A3AA4C;
    case 197u: goto L_08A3AA54;
    case 198u: goto L_08A3AA60;
    case 199u: goto L_08A3AA68;
    case 200u: goto L_08A3AA70;
    case 201u: goto L_08A3AA7C;
    case 202u: goto L_08A3AA84;
    case 203u: goto L_08A3AA8C;
    case 204u: goto L_08A3AA90;
    case 205u: goto L_08A3AA98;
    case 206u: goto L_08A3AAA4;
    case 207u: goto L_08A3AAB4;
    case 208u: goto L_08A3AAC0;
    case 209u: goto L_08A3AAE0;
    case 210u: goto L_08A3AAFC;
    case 211u: goto L_08A3AB04;
    case 212u: goto L_08A3AB10;
    case 213u: goto L_08A3AB14;
    case 214u: goto L_08A3AB20;
    case 215u: goto L_08A3AB28;
    case 216u: goto L_08A3AB34;
    case 217u: goto L_08A3AB44;
    case 218u: goto L_08A3AB54;
    case 219u: goto L_08A3AB64;
    case 220u: goto L_08A3AB6C;
    case 221u: goto L_08A3AB70;
    case 222u: goto L_08A3AB80;
    case 223u: goto L_08A3AB88;
    case 224u: goto L_08A3AB90;
    case 225u: goto L_08A3ABA0;
    case 226u: goto L_08A3ABA8;
    case 227u: goto L_08A3ABB4;
    case 228u: goto L_08A3ABCC;
    case 229u: goto L_08A3ABD4;
    case 230u: goto L_08A3ABD8;
    case 231u: goto L_08A3ABEC;
    case 232u: goto L_08A3ABF4;
    case 233u: goto L_08A3ABFC;
    case 234u: goto L_08A3AC04;
    case 235u: goto L_08A3AC0C;
    case 236u: goto L_08A3AC14;
    case 237u: goto L_08A3AC24;
    case 238u: goto L_08A3AC28;
    case 239u: goto L_08A3AC44;
    case 240u: goto L_08A3AC4C;
    case 241u: goto L_08A3AC60;
    case 242u: goto L_08A3AC6C;
    case 243u: goto L_08A3AC74;
    case 244u: goto L_08A3AC84;
    case 245u: goto L_08A3AC88;
    case 246u: goto L_08A3AC94;
    case 247u: goto L_08A3ACA0;
    case 248u: goto L_08A3ACB4;
    case 249u: goto L_08A3ACBC;
    case 250u: goto L_08A3ACC4;
    case 251u: goto L_08A3ACCC;
    case 252u: goto L_08A3ACD4;
    case 253u: goto L_08A3ACDC;
    case 254u: goto L_08A3ACE4;
    case 255u: goto L_08A3ACF0;
    case 256u: goto L_08A3AD00;
    case 257u: goto L_08A3AD08;
    case 258u: goto L_08A3AD10;
    case 259u: goto L_08A3AD20;
    case 260u: goto L_08A3AD24;
    case 261u: goto L_08A3AD30;
    case 262u: goto L_08A3AD40;
    case 263u: goto L_08A3AD44;
    case 264u: goto L_08A3AD5C;
    case 265u: goto L_08A3AD64;
    case 266u: goto L_08A3AD70;
    case 267u: goto L_08A3AD88;
    case 268u: goto L_08A3AD90;
    case 269u: goto L_08A3ADB4;
    case 270u: goto L_08A3ADC4;
    case 271u: goto L_08A3ADD8;
    case 272u: goto L_08A3ADEC;
    case 273u: goto L_08A3ADF4;
    case 274u: goto L_08A3AE04;
    case 275u: goto L_08A3AE0C;
    case 276u: goto L_08A3AE14;
    case 277u: goto L_08A3AE20;
    case 278u: goto L_08A3AE30;
    case 279u: goto L_08A3AE38;
    case 280u: goto L_08A3AE3C;
    case 281u: goto L_08A3AE44;
    case 282u: goto L_08A3AE50;
    case 283u: goto L_08A3AE5C;
    case 284u: goto L_08A3AE64;
    case 285u: goto L_08A3AE74;
    case 286u: goto L_08A3AE7C;
    case 287u: goto L_08A3AF08;
    case 288u: goto L_08A3AF14;
    case 289u: goto L_08A3AF2C;
    case 290u: goto L_08A3AF30;
    case 291u: goto L_08A3AF40;
    case 292u: goto L_08A3AF48;
    case 293u: goto L_08A3AF54;
    case 294u: goto L_08A3AF58;
    case 295u: goto L_08A3AF64;
    case 296u: goto L_08A3AF74;
    case 297u: goto L_08A3AF78;
    case 298u: goto L_08A3AF84;
    case 299u: goto L_08A3AF90;
    case 300u: goto L_08A3AF94;
    case 301u: goto L_08A3AFA8;
    case 302u: goto L_08A3AFB4;
    case 303u: goto L_08A3AFC0;
    case 304u: goto L_08A3AFCC;
    case 305u: goto L_08A3AFE4;
    case 306u: goto L_08A3AFEC;
    case 307u: goto L_08A3AFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3A000:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A3A004;
L_08A3A004:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A3A010u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A010u) goto L_08A3A010;
    return;
L_08A3A010:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[16] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A3A050;
      }
      goto L_08A3A018;
    }
L_08A3A018:
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A3A028u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A028u) goto L_08A3A028;
    return;
L_08A3A028:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3A048;
      }
      goto L_08A3A030;
    }
L_08A3A030:
    aot_gpr[16] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A3A040u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A040u) goto L_08A3A040;
    return;
L_08A3A040:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[22] | 0u);
        goto L_08A3A048;
    }
    goto L_08A3A048;
L_08A3A048:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3A080;
      }
      goto L_08A3A050;
    }
L_08A3A050:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A3A05Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A05Cu) goto L_08A3A05C;
    return;
L_08A3A05C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3A080;
      }
      goto L_08A3A064;
    }
L_08A3A064:
    aot_gpr[16] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A3A074u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A074u) goto L_08A3A074;
    return;
L_08A3A074:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[20] | 0u);
        goto L_08A3A07C;
    }
    goto L_08A3A07C;
L_08A3A07C:
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_08A3A080;
L_08A3A080:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A0A0;
      }
      goto L_08A3A088;
    }
L_08A3A088:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3A100;
      }
      goto L_08A3A0A0;
    }
L_08A3A0A0:
    if (aot_gpr[30] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A3A0DC;
    }
    goto L_08A3A0A8;
L_08A3A0A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3A0B0;
L_08A3A0B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A0B0;
      }
      goto L_08A3A0D0;
    }
L_08A3A0D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A3A104;
      }
      goto L_08A3A0D8;
    }
L_08A3A0D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3A0DC;
L_08A3A0DC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A3A0E0;
L_08A3A0E0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A0E0;
      }
      goto L_08A3A100;
    }
L_08A3A100:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A3A104;
L_08A3A104:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (aot_gpr[19] | 0u);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[17] < aot_gpr[22] ? 1u : 0u);
    goto L_08A3A118;
L_08A3A118:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A290;
      }
      goto L_08A3A120;
    }
L_08A3A120:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A3A130u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A130u) goto L_08A3A130;
    return;
L_08A3A130:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A1D0;
      }
      goto L_08A3A13C;
    }
L_08A3A13C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A1C4;
      }
      goto L_08A3A144;
    }
L_08A3A144:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A160;
      }
      goto L_08A3A14C;
    }
L_08A3A14C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3A1C0;
      }
      goto L_08A3A160;
    }
L_08A3A160:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[5] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A3A19C;
      }
      goto L_08A3A168;
    }
L_08A3A168:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[22] | 0u);
    goto L_08A3A170;
L_08A3A170:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A190;
    }
L_08A3A190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A1C4;
      }
      goto L_08A3A198;
    }
L_08A3A198:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_08A3A19C;
L_08A3A19C:
    aot_gpr[6] = (aot_gpr[22] | 0u);
    goto L_08A3A1A0;
L_08A3A1A0:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A1A0;
      }
      goto L_08A3A1C0;
    }
L_08A3A1C0:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[21]);
    goto L_08A3A1C4;
L_08A3A1C4:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A118;
      }
      goto L_08A3A1D0;
    }
L_08A3A1D0:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A290;
      }
      goto L_08A3A1D8;
    }
L_08A3A1D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A3A1E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A1E8u) goto L_08A3A1E8;
    return;
L_08A3A1E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3A290;
      }
      goto L_08A3A1F4;
    }
L_08A3A1F4:
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[21]);
        goto L_08A3A288;
    }
    goto L_08A3A1FC;
L_08A3A1FC:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A218;
      }
      goto L_08A3A204;
    }
L_08A3A204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3A280;
      }
      goto L_08A3A218;
    }
L_08A3A218:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A3A258;
      }
      goto L_08A3A220;
    }
L_08A3A220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A3A22C;
L_08A3A22C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A22C;
      }
      goto L_08A3A24C;
    }
L_08A3A24C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A284;
      }
      goto L_08A3A254;
    }
L_08A3A254:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A3A258;
L_08A3A258:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A3A260;
L_08A3A260:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A260;
      }
      goto L_08A3A280;
    }
L_08A3A280:
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[21]);
    goto L_08A3A284;
L_08A3A284:
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[21]);
    goto L_08A3A288;
L_08A3A288:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A1D0;
      }
      goto L_08A3A290;
    }
L_08A3A290:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A320;
      }
      goto L_08A3A298;
    }
L_08A3A298:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A2B4;
      }
      goto L_08A3A2A0;
    }
L_08A3A2A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3A30C;
      }
      goto L_08A3A2B4;
    }
L_08A3A2B4:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[6] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A3A2EC;
      }
      goto L_08A3A2BC;
    }
L_08A3A2BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A3A2C0;
L_08A3A2C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A2C0;
      }
      goto L_08A3A2E0;
    }
L_08A3A2E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2E8;
    }
L_08A3A2E8:
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_08A3A2EC;
L_08A3A2EC:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A2EC;
      }
      goto L_08A3A30C;
    }
L_08A3A30C:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_08A3A310;
L_08A3A310:
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A118;
      }
      goto L_08A3A320;
    }
L_08A3A320:
    if (aot_gpr[20] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A3A414;
    }
    goto L_08A3A328;
L_08A3A328:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 224u, 0x08A39DB4u>(ctx, &aot_mem); return;
      }
      goto L_08A3A33C;
    }
L_08A3A33C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3A340;
L_08A3A340:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    goto L_08A3A348;
L_08A3A348:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A3F4;
      }
      goto L_08A3A350;
    }
L_08A3A350:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A3A360u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A360u) goto L_08A3A360;
    return;
L_08A3A360:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A3A3F8;
    }
    goto L_08A3A368;
L_08A3A368:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A384;
      }
      goto L_08A3A370;
    }
L_08A3A370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3A3E4;
      }
      goto L_08A3A384;
    }
L_08A3A384:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A3A3C0;
      }
      goto L_08A3A38C;
    }
L_08A3A38C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A3A394;
L_08A3A394:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A394;
      }
      goto L_08A3A3B4;
    }
L_08A3A3B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A3A3E8;
      }
      goto L_08A3A3BC;
    }
L_08A3A3BC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A3A3C0;
L_08A3A3C0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A3A3C4;
L_08A3A3C4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A3C4;
      }
      goto L_08A3A3E4;
    }
L_08A3A3E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3A3E8;
L_08A3A3E8:
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A348;
      }
      goto L_08A3A3F4;
    }
L_08A3A3F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A3A3F8;
L_08A3A3F8:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A3A340;
    }
    goto L_08A3A408;
L_08A3A408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 224u, 0x08A39DB4u>(ctx, &aot_mem); return;
      }
      goto L_08A3A410;
    }
L_08A3A410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3A414;
L_08A3A414:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[19] - aot_gpr[22]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[18]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[22] = (aot_gpr[18] - aot_gpr[17]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3A43C;
      }
      goto L_08A3A434;
    }
L_08A3A434:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A43C;
      }
      goto L_08A3A43C;
    }
L_08A3A43C:
    if (static_cast<std::int32_t>(aot_gpr[4]) <= 0) {
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[6] ? 1u : 0u);
        goto L_08A3A4AC;
    }
    goto L_08A3A444;
L_08A3A444:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[7] = (aot_gpr[19] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3A480;
      }
      goto L_08A3A44C;
    }
L_08A3A44C:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    goto L_08A3A458;
L_08A3A458:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A458;
      }
      goto L_08A3A478;
    }
L_08A3A478:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A4AC;
      }
      goto L_08A3A480;
    }
L_08A3A480:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3A488;
L_08A3A488:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A488;
      }
      goto L_08A3A4A8;
    }
L_08A3A4A8:
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[6] ? 1u : 0u);
    goto L_08A3A4AC;
L_08A3A4AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A4BC;
      }
      goto L_08A3A4B4;
    }
L_08A3A4B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A3A4BC;
      }
      goto L_08A3A4BC;
    }
L_08A3A4BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A520;
      }
      goto L_08A3A4C4;
    }
L_08A3A4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3A4FC;
      }
      goto L_08A3A4D0;
    }
L_08A3A4D0:
    aot_gpr[6] = (aot_gpr[6] >> 2u);
    goto L_08A3A4D4;
L_08A3A4D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A4D4;
      }
      goto L_08A3A4F4;
    }
L_08A3A4F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A520;
      }
      goto L_08A3A4FC;
    }
L_08A3A4FC:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3A4FC;
      }
      goto L_08A3A51C;
    }
L_08A3A51C:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[5] ? 1u : 0u);
    goto L_08A3A520;
L_08A3A520:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A544;
      }
      goto L_08A3A528;
    }
L_08A3A528:
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x08A3A540u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A540u) goto L_08A3A540;
    return;
L_08A3A540:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[22] ? 1u : 0u);
    goto L_08A3A544;
L_08A3A544:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 224u, 0x08A39DB4u>(ctx, &aot_mem); return;
      }
      goto L_08A3A54C;
    }
L_08A3A54C:
    { const std::uint32_t dividend = aot_gpr[22]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] & 3u);
    aot_gpr[22] = (aot_gpr[22] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 203u, 0x08A39CC0u>(ctx, &aot_mem); return;
      }
      goto L_08A3A594;
    }
L_08A3A594:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[5] = (16838u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20077));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12345));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A5C8:
    aot_gpr[9] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8160));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A3A5DC;
L_08A3A5DC:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] & 8u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A3A5DC;
      }
      goto L_08A3A5F8;
    }
L_08A3A5F8:
    aot_gpr[2] = (0u | 45u);
    { const bool branch_taken = aot_gpr[10] != aot_gpr[2];
    aot_gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08A3A618;
      }
      goto L_08A3A604;
    }
L_08A3A604:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A3A62C;
      }
      goto L_08A3A618;
    }
L_08A3A618:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3A62C;
      }
      goto L_08A3A620;
    }
L_08A3A620:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[3] | 0u);
    goto L_08A3A62C;
L_08A3A62C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08A3A644;
      }
      goto L_08A3A634;
    }
L_08A3A634:
    aot_gpr[2] = (0u | 16u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[14] = (aot_gpr[9] + aot_gpr[10]);
      if (branch_taken) {
          goto L_08A3A674;
      }
      goto L_08A3A640;
    }
L_08A3A640:
    aot_gpr[2] = (0u | 48u);
    goto L_08A3A644;
L_08A3A644:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[2];
    aot_gpr[14] = (aot_gpr[9] + aot_gpr[10]);
      if (branch_taken) {
          goto L_08A3A674;
      }
      goto L_08A3A64C;
    }
L_08A3A64C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[12] = (0u | 120u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[12];
    aot_gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08A3A664;
      }
      goto L_08A3A65C;
    }
L_08A3A65C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[12];
    aot_gpr[14] = (aot_gpr[9] + aot_gpr[10]);
      if (branch_taken) {
          goto L_08A3A674;
      }
      goto L_08A3A664;
    }
L_08A3A664:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u | 16u);
    aot_gpr[14] = (aot_gpr[9] + aot_gpr[10]);
    goto L_08A3A674;
L_08A3A674:
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[15] = (aot_gpr[14] & 4u);
      if (branch_taken) {
          goto L_08A3A690;
      }
      goto L_08A3A680;
    }
L_08A3A680:
    aot_gpr[7] = (0u | 10u);
    aot_gpr[2] = (0u | 48u);
    if (aot_gpr[10] == aot_gpr[2]) {
    aot_gpr[7] = (0u | 8u);
        goto L_08A3A690;
    }
    goto L_08A3A690;
L_08A3A690:
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[3] = (0u | 0u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[13] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[12] = (ctx.hi);
    goto L_08A3A6B4;
L_08A3A6B4:
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[15] = (aot_gpr[14] & 3u);
      if (branch_taken) {
          goto L_08A3A6C8;
      }
      goto L_08A3A6BC;
    }
L_08A3A6BC:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A6E8;
      }
      goto L_08A3A6C8;
    }
L_08A3A6C8:
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[15] = (aot_gpr[14] | 0u);
      if (branch_taken) {
          goto L_08A3A740;
      }
      goto L_08A3A6D0;
    }
L_08A3A6D0:
    aot_gpr[14] = (0u | 87u);
    aot_gpr[15] = (aot_gpr[15] & 1u);
    if (aot_gpr[15] != 0u) {
    aot_gpr[14] = (0u | 55u);
        goto L_08A3A6E0;
    }
    goto L_08A3A6E0;
L_08A3A6E0:
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[14]);
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    goto L_08A3A6E8;
L_08A3A6E8:
    { const bool branch_taken = aot_gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A740;
      }
      goto L_08A3A6F0;
    }
L_08A3A6F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[13] < aot_gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A710;
      }
      goto L_08A3A6F8;
    }
L_08A3A6F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A710;
      }
      goto L_08A3A700;
    }
L_08A3A700:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[13];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A718;
      }
      goto L_08A3A708;
    }
L_08A3A708:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A718;
      }
      goto L_08A3A710;
    }
L_08A3A710:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3A728;
      }
      goto L_08A3A718;
    }
L_08A3A718:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (0u | 1u);
    aot_gpr[3] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[10]);
    goto L_08A3A728;
L_08A3A728:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[15] = (aot_gpr[14] & 4u);
      if (branch_taken) {
          goto L_08A3A6B4;
      }
      goto L_08A3A740;
    }
L_08A3A740:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[7] = (0u | 34u);
      if (branch_taken) {
          goto L_08A3A754;
      }
      goto L_08A3A748;
    }
L_08A3A748:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3A760;
      }
      goto L_08A3A754;
    }
L_08A3A754:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A760;
      }
      goto L_08A3A75C;
    }
L_08A3A75C:
    aot_gpr[3] = (0u - aot_gpr[3]);
    goto L_08A3A760;
L_08A3A760:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A774;
      }
      goto L_08A3A768;
    }
L_08A3A768:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08A3A770;
    }
    goto L_08A3A770;
L_08A3A770:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A3A774;
L_08A3A774:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A77C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3A79Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    goto L_08A3A5C8;
L_08A3A79C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A7A8:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A7DC;
      }
      goto L_08A3A7C0;
    }
L_08A3A7C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A7E4;
      }
      goto L_08A3A7CC;
    }
L_08A3A7CC:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A7C0;
      }
      goto L_08A3A7DC;
    }
L_08A3A7DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A7E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A7EC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A828;
      }
      goto L_08A3A800;
    }
L_08A3A800:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A3A830;
      }
      goto L_08A3A810;
    }
L_08A3A810:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A800;
      }
      goto L_08A3A828;
    }
L_08A3A828:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A830:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] - aot_gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A838:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A870;
      }
      goto L_08A3A850;
    }
L_08A3A850:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3A850;
      }
      goto L_08A3A870;
    }
L_08A3A870:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A878:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3A8D8;
      }
      goto L_08A3A88C;
    }
L_08A3A88C:
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    if (aot_gpr[10] == 0u) {
    aot_gpr[9] = (aot_gpr[6] | 0u);
        goto L_08A3A8DC;
    }
    goto L_08A3A89C;
L_08A3A89C:
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A904;
      }
      goto L_08A3A8B0;
    }
L_08A3A8B0:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A8B0;
      }
      goto L_08A3A8D0;
    }
L_08A3A8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A904;
      }
      goto L_08A3A8D8;
    }
L_08A3A8D8:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    goto L_08A3A8DC;
L_08A3A8DC:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A904;
      }
      goto L_08A3A8E4;
    }
L_08A3A8E4:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A904;
    }
L_08A3A904:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A90C:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3A938;
      }
      goto L_08A3A920;
    }
L_08A3A920:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3A920;
      }
      goto L_08A3A938;
    }
L_08A3A938:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A940:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8160));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3A950;
L_08A3A950:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3A9A8;
      }
      goto L_08A3A958;
    }
L_08A3A958:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[8] & 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A970;
      }
      goto L_08A3A968;
    }
L_08A3A968:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3A970;
      }
      goto L_08A3A970;
    }
L_08A3A970:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (aot_gpr[9] & 1u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A990;
      }
      goto L_08A3A988;
    }
L_08A3A988:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3A990;
      }
      goto L_08A3A990;
    }
L_08A3A990:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3A9AC;
      }
      goto L_08A3A998;
    }
L_08A3A998:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A3A950;
      }
      goto L_08A3A9A8;
    }
L_08A3A9A8:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    goto L_08A3A9AC;
L_08A3A9AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[8] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A9D0;
      }
      goto L_08A3A9C8;
    }
L_08A3A9C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3A9D0;
      }
      goto L_08A3A9D0;
    }
L_08A3A9D0:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3A9F0;
      }
      goto L_08A3A9E4;
    }
L_08A3A9E4:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A9F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A9F8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3AA18;
      }
      goto L_08A3AA08;
    }
L_08A3AA08:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3AA08;
      }
      goto L_08A3AA18;
    }
L_08A3AA18:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3AA4C;
      }
      goto L_08A3AA30;
    }
L_08A3AA30:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3AA30;
      }
      goto L_08A3AA4C;
    }
L_08A3AA4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AA54:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3AA60;
L_08A3AA60:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA7C;
      }
      goto L_08A3AA68;
    }
L_08A3AA68:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3AA7C;
      }
      goto L_08A3AA70;
    }
L_08A3AA70:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3AA60;
      }
      goto L_08A3AA7C;
    }
L_08A3AA7C:
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[2] = (0u | 0u);
        goto L_08A3AA84;
    }
    goto L_08A3AA84;
L_08A3AA84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AA8C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A3AA90;
L_08A3AA90:
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A3AAB4;
    }
    goto L_08A3AA98;
L_08A3AA98:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[6] != aot_gpr[7]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A3AAB4;
    }
    goto L_08A3AAA4;
L_08A3AAA4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A3AA90;
      }
      goto L_08A3AAB4;
    }
L_08A3AAB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AAC0:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A3AAFC;
      }
      goto L_08A3AAE0;
    }
L_08A3AAE0:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A3AAE0;
      }
      goto L_08A3AAFC;
    }
L_08A3AAFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AB04:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3AB20;
      }
      goto L_08A3AB10;
    }
L_08A3AB10:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A3AB14;
L_08A3AB14:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A3AB14;
    }
    goto L_08A3AB20;
L_08A3AB20:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AB28:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3AB80;
      }
      goto L_08A3AB34;
    }
L_08A3AB34:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8160));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08A3AB44;
L_08A3AB44:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3AB70;
      }
      goto L_08A3AB54;
    }
L_08A3AB54:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AB6C;
      }
      goto L_08A3AB64;
    }
L_08A3AB64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3AB6C;
      }
      goto L_08A3AB6C;
    }
L_08A3AB6C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08A3AB70;
L_08A3AB70:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3AB44;
      }
      goto L_08A3AB80;
    }
L_08A3AB80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AB88:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3ABA0;
      }
      goto L_08A3AB90;
    }
L_08A3AB90:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8160));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3ABA8;
      }
      goto L_08A3ABA0;
    }
L_08A3ABA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3ABA8:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3AC24;
      }
      goto L_08A3ABB4;
    }
L_08A3ABB4:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[8] & 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A3ABD4;
      }
      goto L_08A3ABCC;
    }
L_08A3ABCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[11] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3ABD8;
      }
      goto L_08A3ABD4;
    }
L_08A3ABD4:
    aot_gpr[10] = (aot_gpr[11] | 0u);
    goto L_08A3ABD8;
L_08A3ABD8:
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[8] & 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3ABF4;
      }
      goto L_08A3ABEC;
    }
L_08A3ABEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3ABF4;
      }
      goto L_08A3ABF4;
    }
L_08A3ABF4:
    if (aot_gpr[10] != aot_gpr[8]) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08A3AC28;
    }
    goto L_08A3ABFC;
L_08A3ABFC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08A3AC28;
    }
    goto L_08A3AC04;
L_08A3AC04:
    if (aot_gpr[11] == 0u) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08A3AC28;
    }
    goto L_08A3AC0C;
L_08A3AC0C:
    if (aot_gpr[9] == 0u) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08A3AC28;
    }
    goto L_08A3AC14;
L_08A3AC14:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3ABA8;
      }
      goto L_08A3AC24;
    }
L_08A3AC24:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    goto L_08A3AC28;
L_08A3AC28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[8] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC4C;
      }
      goto L_08A3AC44;
    }
L_08A3AC44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3AC4C;
      }
      goto L_08A3AC4C;
    }
L_08A3AC4C:
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3AC6C;
      }
      goto L_08A3AC60;
    }
L_08A3AC60:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AC6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AC74:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3AC94;
      }
      goto L_08A3AC84;
    }
L_08A3AC84:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A3AC88;
L_08A3AC88:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[8] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A3AC88;
    }
    goto L_08A3AC94;
L_08A3AC94:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3ACC4;
      }
      goto L_08A3ACA0;
    }
L_08A3ACA0:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3ACC4;
      }
      goto L_08A3ACB4;
    }
L_08A3ACB4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3AC94;
      }
      goto L_08A3ACBC;
    }
L_08A3ACBC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A3AC94;
      }
      goto L_08A3ACC4;
    }
L_08A3ACC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3ACCC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ACDC;
      }
      goto L_08A3ACD4;
    }
L_08A3ACD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3ACE4;
      }
      goto L_08A3ACDC;
    }
L_08A3ACDC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3ACE4:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A3AD20;
      }
      goto L_08A3ACF0;
    }
L_08A3ACF0:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[7] != aot_gpr[9]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A3AD24;
    }
    goto L_08A3AD00;
L_08A3AD00:
    if (aot_gpr[8] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A3AD24;
    }
    goto L_08A3AD08;
L_08A3AD08:
    if (aot_gpr[7] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A3AD24;
    }
    goto L_08A3AD10;
L_08A3AD10:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3ACE4;
      }
      goto L_08A3AD20;
    }
L_08A3AD20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3AD24;
L_08A3AD24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AD30:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3AD64;
      }
      goto L_08A3AD40;
    }
L_08A3AD40:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_08A3AD44;
L_08A3AD44:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3AD64;
      }
      goto L_08A3AD5C;
    }
L_08A3AD5C:
    if (aot_gpr[6] != 0u) {
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
        goto L_08A3AD44;
    }
    goto L_08A3AD64;
L_08A3AD64:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3AD88;
      }
      goto L_08A3AD70;
    }
L_08A3AD70:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3AD70;
      }
      goto L_08A3AD88;
    }
L_08A3AD88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AD90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3ADB4u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_08A3A7A8;
L_08A3ADB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (aot_gpr[17] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[16]);
        goto L_08A3ADC4;
    }
    goto L_08A3ADC4;
L_08A3ADC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3ADD8:
    aot_gpr[6] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08A3AE04;
      }
      goto L_08A3ADEC;
    }
L_08A3ADEC:
    if (aot_gpr[5] == aot_gpr[6]) {
    aot_gpr[2] = (aot_gpr[4] | 0u);
        goto L_08A3ADF4;
    }
    goto L_08A3ADF4;
L_08A3ADF4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ADEC;
      }
      goto L_08A3AE04;
    }
L_08A3AE04:
    if (aot_gpr[5] == aot_gpr[6]) {
    aot_gpr[2] = (aot_gpr[4] | 0u);
        goto L_08A3AE0C;
    }
    goto L_08A3AE0C;
L_08A3AE0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AE14:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AE38;
      }
      goto L_08A3AE20;
    }
L_08A3AE20:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u | 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (aot_gpr[4] | 0u);
        goto L_08A3AE30;
    }
    goto L_08A3AE30;
L_08A3AE30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AE38:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08A3AE3C;
L_08A3AE3C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3AE5C;
      }
      goto L_08A3AE44;
    }
L_08A3AE44:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3AE64;
      }
      goto L_08A3AE50;
    }
L_08A3AE50:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A3AE3C;
      }
      goto L_08A3AE5C;
    }
L_08A3AE5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AE64:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AE38;
      }
      goto L_08A3AE74;
    }
L_08A3AE74:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AE7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[9]);
    aot_gpr[10] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[11]);
    aot_gpr[9] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(9396)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(9392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[8]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[12] = (0u | 0u);
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    goto L_08A3AF08;
L_08A3AF08:
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
        goto L_08A3AF58;
    }
    goto L_08A3AF14;
L_08A3AF14:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(9456)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3AF2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    goto L_08A3AF30;
L_08A3AF30:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] != 0u) {
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
        goto L_08A3AF58;
    }
    goto L_08A3AF40;
L_08A3AF40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 267u, 0x08A3BF34u>(ctx, &aot_mem); return;
      }
      goto L_08A3AF48;
    }
L_08A3AF48:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A3AF08;
      }
      goto L_08A3AF54;
    }
L_08A3AF54:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    goto L_08A3AF58;
L_08A3AF58:
    aot_gpr[7] = (0u | 48u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    aot_gpr[21] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A3AF94;
      }
      goto L_08A3AF64;
    }
L_08A3AF64:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[12] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3AF84;
      }
      goto L_08A3AF74;
    }
L_08A3AF74:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A3AF78;
L_08A3AF78:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] == aot_gpr[7]) {
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08A3AF78;
    }
    goto L_08A3AF84;
L_08A3AF84:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[8] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
        (void)rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 268u, 0x08A3BF38u>(ctx, &aot_mem); return;
    }
    goto L_08A3AF90;
L_08A3AF90:
    aot_gpr[21] = (aot_gpr[23] | 0u);
    goto L_08A3AF94;
L_08A3AF94:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < 48 ? 1u : 0u);
    goto L_08A3AFA8;
L_08A3AFA8:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 2u, 0x08A3B010u>(ctx, &aot_mem); return;
      }
      goto L_08A3AFB4;
    }
L_08A3AFB4:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (0u | 46u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 3u, 0x08A3B014u>(ctx, &aot_mem); return;
      }
      goto L_08A3AFC0;
    }
L_08A3AFC0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3AFE4;
      }
      goto L_08A3AFCC;
    }
L_08A3AFCC:
    aot_gpr[4] = (aot_gpr[19] << 3u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08A3AFFC;
      }
      goto L_08A3AFE4;
    }
L_08A3AFE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] << 3u);
      if (branch_taken) {
          goto L_08A3AFFC;
      }
      goto L_08A3AFEC;
    }
L_08A3AFEC:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    goto L_08A3AFFC;
L_08A3AFFC:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A3B000u; return;
}

void recomp_unit_0566(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0566_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_566(Runtime &runtime) {
    runtime.register_generated_unit(566u, 0x08A3A000u, 4096u, &recomp_unit_0566, &recomp_unit_0566_entry);
    runtime.register_function(0x08A3A000u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A004u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A010u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A018u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A028u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A030u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A040u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A048u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A050u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A05Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A064u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A074u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A07Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A080u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A088u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0A0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0A8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0B0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0D0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0D8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0DCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A0E0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A100u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A104u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A118u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A120u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A130u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A13Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A144u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A14Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A160u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A168u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A170u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A190u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A198u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A19Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1A0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1C0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1C4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1D0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1D8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1E8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1F4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A1FCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A204u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A218u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A220u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A22Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A24Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A254u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A258u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A260u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A280u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A284u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A288u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A290u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A298u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2A0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2B4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2BCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2C0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2E0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2E8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A2ECu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A30Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A310u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A320u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A328u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A33Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A340u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A348u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A350u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A360u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A368u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A370u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A384u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A38Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A394u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3B4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3BCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3C0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3C4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3E4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3E8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3F4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A3F8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A408u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A410u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A414u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A434u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A43Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A444u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A44Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A458u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A478u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A480u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A488u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4A8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4ACu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4B4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4BCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4C4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4D0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4D4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4F4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A4FCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A51Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A520u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A528u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A540u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A544u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A54Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A594u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A5C8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A5DCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A5F8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A604u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A618u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A620u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A62Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A634u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A640u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A644u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A64Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A65Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A664u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A674u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A680u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A690u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6B4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6BCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6C8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6D0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6E0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6E8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6F0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A6F8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A700u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A708u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A710u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A718u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A728u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A740u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A748u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A754u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A75Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A760u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A768u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A770u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A774u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A77Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A79Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A7A8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A7C0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A7CCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A7DCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A7E4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A7ECu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A800u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A810u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A828u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A830u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A838u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A850u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A870u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A878u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A88Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A89Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A8B0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A8D0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A8D8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A8DCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A8E4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A904u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A90Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A920u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A938u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A940u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A950u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A958u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A968u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A970u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A988u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A990u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A998u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9A8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9ACu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9C8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9D0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9E4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9F0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3A9F8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA08u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA18u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA30u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA4Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA54u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA60u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA68u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA70u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA7Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA84u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA8Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA90u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AA98u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AAA4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AAB4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AAC0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AAE0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AAFCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB04u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB10u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB14u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB20u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB28u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB34u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB44u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB54u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB64u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB6Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB70u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB80u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB88u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AB90u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABA0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABA8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABB4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABCCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABD4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABD8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABECu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABF4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ABFCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC04u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC0Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC14u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC24u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC28u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC44u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC4Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC60u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC6Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC74u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC84u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC88u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AC94u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACA0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACB4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACBCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACC4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACCCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACD4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACDCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACE4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ACF0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD00u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD08u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD10u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD20u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD24u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD30u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD40u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD44u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD5Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD64u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD70u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD88u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AD90u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ADB4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ADC4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ADD8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ADECu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3ADF4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE04u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE0Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE14u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE20u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE30u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE38u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE3Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE44u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE50u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE5Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE64u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE74u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AE7Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF08u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF14u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF2Cu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF30u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF40u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF48u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF54u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF58u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF64u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF74u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF78u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF84u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF90u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AF94u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFA8u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFB4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFC0u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFCCu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFE4u, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFECu, &recomp_unit_0566, "recomp_unit_0566");
    runtime.register_function(0x08A3AFFCu, &recomp_unit_0566, "recomp_unit_0566");
}
} // namespace psprecomp
