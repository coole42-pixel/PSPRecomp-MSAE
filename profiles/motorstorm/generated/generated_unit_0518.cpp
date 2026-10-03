#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0518[1018] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0,
    15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 24, 0, 25, 0, 26, 0,
    0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 40, 0,
    41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0,
    0, 50, 0, 51, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0,
    64, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 75, 0, 0, 0, 76, 0, 77, 78, 0, 79, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 89,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117,
    0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 152, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157,
    0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 168,
    0, 169, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192,
    0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0,
    0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240,
    0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0,
    0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260,
    0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 280, 0, 0, 0, 0, 0, 0, 281,
};
void recomp_unit_0518_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A0A000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0518[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0A000;
    case 2u: goto L_08A0A00C;
    case 3u: goto L_08A0A014;
    case 4u: goto L_08A0A020;
    case 5u: goto L_08A0A028;
    case 6u: goto L_08A0A030;
    case 7u: goto L_08A0A038;
    case 8u: goto L_08A0A040;
    case 9u: goto L_08A0A048;
    case 10u: goto L_08A0A058;
    case 11u: goto L_08A0A060;
    case 12u: goto L_08A0A068;
    case 13u: goto L_08A0A070;
    case 14u: goto L_08A0A078;
    case 15u: goto L_08A0A080;
    case 16u: goto L_08A0A094;
    case 17u: goto L_08A0A0A0;
    case 18u: goto L_08A0A0A8;
    case 19u: goto L_08A0A0B0;
    case 20u: goto L_08A0A0C8;
    case 21u: goto L_08A0A0D0;
    case 22u: goto L_08A0A0D8;
    case 23u: goto L_08A0A0E4;
    case 24u: goto L_08A0A0E8;
    case 25u: goto L_08A0A0F0;
    case 26u: goto L_08A0A0F8;
    case 27u: goto L_08A0A104;
    case 28u: goto L_08A0A10C;
    case 29u: goto L_08A0A114;
    case 30u: goto L_08A0A11C;
    case 31u: goto L_08A0A12C;
    case 32u: goto L_08A0A134;
    case 33u: goto L_08A0A13C;
    case 34u: goto L_08A0A144;
    case 35u: goto L_08A0A14C;
    case 36u: goto L_08A0A154;
    case 37u: goto L_08A0A164;
    case 38u: goto L_08A0A16C;
    case 39u: goto L_08A0A174;
    case 40u: goto L_08A0A178;
    case 41u: goto L_08A0A180;
    case 42u: goto L_08A0A188;
    case 43u: goto L_08A0A190;
    case 44u: goto L_08A0A1A0;
    case 45u: goto L_08A0A1B4;
    case 46u: goto L_08A0A1D4;
    case 47u: goto L_08A0A1E4;
    case 48u: goto L_08A0A1EC;
    case 49u: goto L_08A0A1F8;
    case 50u: goto L_08A0A204;
    case 51u: goto L_08A0A20C;
    case 52u: goto L_08A0A210;
    case 53u: goto L_08A0A218;
    case 54u: goto L_08A0A220;
    case 55u: goto L_08A0A22C;
    case 56u: goto L_08A0A238;
    case 57u: goto L_08A0A244;
    case 58u: goto L_08A0A24C;
    case 59u: goto L_08A0A258;
    case 60u: goto L_08A0A260;
    case 61u: goto L_08A0A268;
    case 62u: goto L_08A0A270;
    case 63u: goto L_08A0A278;
    case 64u: goto L_08A0A280;
    case 65u: goto L_08A0A288;
    case 66u: goto L_08A0A294;
    case 67u: goto L_08A0A29C;
    case 68u: goto L_08A0A2A4;
    case 69u: goto L_08A0A2C8;
    case 70u: goto L_08A0A304;
    case 71u: goto L_08A0A30C;
    case 72u: goto L_08A0A328;
    case 73u: goto L_08A0A330;
    case 74u: goto L_08A0A33C;
    case 75u: goto L_08A0A340;
    case 76u: goto L_08A0A350;
    case 77u: goto L_08A0A358;
    case 78u: goto L_08A0A35C;
    case 79u: goto L_08A0A364;
    case 80u: goto L_08A0A36C;
    case 81u: goto L_08A0A38C;
    case 82u: goto L_08A0A398;
    case 83u: goto L_08A0A3B4;
    case 84u: goto L_08A0A3C4;
    case 85u: goto L_08A0A3D0;
    case 86u: goto L_08A0A3D8;
    case 87u: goto L_08A0A3E0;
    case 88u: goto L_08A0A3E8;
    case 89u: goto L_08A0A3FC;
    case 90u: goto L_08A0A408;
    case 91u: goto L_08A0A418;
    case 92u: goto L_08A0A42C;
    case 93u: goto L_08A0A438;
    case 94u: goto L_08A0A444;
    case 95u: goto L_08A0A44C;
    case 96u: goto L_08A0A454;
    case 97u: goto L_08A0A45C;
    case 98u: goto L_08A0A468;
    case 99u: goto L_08A0A478;
    case 100u: goto L_08A0A494;
    case 101u: goto L_08A0A4A0;
    case 102u: goto L_08A0A4AC;
    case 103u: goto L_08A0A4B8;
    case 104u: goto L_08A0A4C0;
    case 105u: goto L_08A0A4CC;
    case 106u: goto L_08A0A4D8;
    case 107u: goto L_08A0A4F4;
    case 108u: goto L_08A0A4FC;
    case 109u: goto L_08A0A50C;
    case 110u: goto L_08A0A520;
    case 111u: goto L_08A0A528;
    case 112u: goto L_08A0A534;
    case 113u: goto L_08A0A540;
    case 114u: goto L_08A0A548;
    case 115u: goto L_08A0A554;
    case 116u: goto L_08A0A564;
    case 117u: goto L_08A0A57C;
    case 118u: goto L_08A0A584;
    case 119u: goto L_08A0A590;
    case 120u: goto L_08A0A59C;
    case 121u: goto L_08A0A5A8;
    case 122u: goto L_08A0A5B0;
    case 123u: goto L_08A0A5C4;
    case 124u: goto L_08A0A5E8;
    case 125u: goto L_08A0A5F0;
    case 126u: goto L_08A0A5F8;
    case 127u: goto L_08A0A608;
    case 128u: goto L_08A0A620;
    case 129u: goto L_08A0A62C;
    case 130u: goto L_08A0A638;
    case 131u: goto L_08A0A640;
    case 132u: goto L_08A0A648;
    case 133u: goto L_08A0A650;
    case 134u: goto L_08A0A658;
    case 135u: goto L_08A0A680;
    case 136u: goto L_08A0A6D4;
    case 137u: goto L_08A0A6E4;
    case 138u: goto L_08A0A6FC;
    case 139u: goto L_08A0A70C;
    case 140u: goto L_08A0A718;
    case 141u: goto L_08A0A720;
    case 142u: goto L_08A0A730;
    case 143u: goto L_08A0A738;
    case 144u: goto L_08A0A740;
    case 145u: goto L_08A0A748;
    case 146u: goto L_08A0A750;
    case 147u: goto L_08A0A758;
    case 148u: goto L_08A0A760;
    case 149u: goto L_08A0A76C;
    case 150u: goto L_08A0A774;
    case 151u: goto L_08A0A77C;
    case 152u: goto L_08A0A79C;
    case 153u: goto L_08A0A7A0;
    case 154u: goto L_08A0A7A8;
    case 155u: goto L_08A0A7DC;
    case 156u: goto L_08A0A7E4;
    case 157u: goto L_08A0A7FC;
    case 158u: goto L_08A0A804;
    case 159u: goto L_08A0A80C;
    case 160u: goto L_08A0A818;
    case 161u: goto L_08A0A820;
    case 162u: goto L_08A0A844;
    case 163u: goto L_08A0A850;
    case 164u: goto L_08A0A858;
    case 165u: goto L_08A0A860;
    case 166u: goto L_08A0A86C;
    case 167u: goto L_08A0A874;
    case 168u: goto L_08A0A87C;
    case 169u: goto L_08A0A884;
    case 170u: goto L_08A0A888;
    case 171u: goto L_08A0A894;
    case 172u: goto L_08A0A89C;
    case 173u: goto L_08A0A8A4;
    case 174u: goto L_08A0A8AC;
    case 175u: goto L_08A0A8B0;
    case 176u: goto L_08A0A8BC;
    case 177u: goto L_08A0A8C4;
    case 178u: goto L_08A0A8CC;
    case 179u: goto L_08A0A8D8;
    case 180u: goto L_08A0A8E0;
    case 181u: goto L_08A0A914;
    case 182u: goto L_08A0A93C;
    case 183u: goto L_08A0A950;
    case 184u: goto L_08A0A968;
    case 185u: goto L_08A0A97C;
    case 186u: goto L_08A0A988;
    case 187u: goto L_08A0A9AC;
    case 188u: goto L_08A0A9C8;
    case 189u: goto L_08A0A9DC;
    case 190u: goto L_08A0A9E8;
    case 191u: goto L_08A0A9F4;
    case 192u: goto L_08A0A9FC;
    case 193u: goto L_08A0AA10;
    case 194u: goto L_08A0AA18;
    case 195u: goto L_08A0AA20;
    case 196u: goto L_08A0AA60;
    case 197u: goto L_08A0AA68;
    case 198u: goto L_08A0AA84;
    case 199u: goto L_08A0AA9C;
    case 200u: goto L_08A0AAA4;
    case 201u: goto L_08A0AAAC;
    case 202u: goto L_08A0AAB4;
    case 203u: goto L_08A0AACC;
    case 204u: goto L_08A0AAE0;
    case 205u: goto L_08A0AAEC;
    case 206u: goto L_08A0AAF4;
    case 207u: goto L_08A0AAFC;
    case 208u: goto L_08A0AB18;
    case 209u: goto L_08A0AB30;
    case 210u: goto L_08A0AB4C;
    case 211u: goto L_08A0AB54;
    case 212u: goto L_08A0AB5C;
    case 213u: goto L_08A0AB78;
    case 214u: goto L_08A0AB98;
    case 215u: goto L_08A0ABAC;
    case 216u: goto L_08A0ABB0;
    case 217u: goto L_08A0ABE0;
    case 218u: goto L_08A0ABF0;
    case 219u: goto L_08A0ABF4;
    case 220u: goto L_08A0AC4C;
    case 221u: goto L_08A0AC54;
    case 222u: goto L_08A0AC5C;
    case 223u: goto L_08A0AC84;
    case 224u: goto L_08A0ACA8;
    case 225u: goto L_08A0ACD8;
    case 226u: goto L_08A0ACEC;
    case 227u: goto L_08A0ACF8;
    case 228u: goto L_08A0AD04;
    case 229u: goto L_08A0AD0C;
    case 230u: goto L_08A0AD14;
    case 231u: goto L_08A0AD20;
    case 232u: goto L_08A0AD28;
    case 233u: goto L_08A0AD30;
    case 234u: goto L_08A0AD3C;
    case 235u: goto L_08A0AD44;
    case 236u: goto L_08A0AD4C;
    case 237u: goto L_08A0AD5C;
    case 238u: goto L_08A0AD68;
    case 239u: goto L_08A0AD70;
    case 240u: goto L_08A0AD7C;
    case 241u: goto L_08A0AD84;
    case 242u: goto L_08A0AD8C;
    case 243u: goto L_08A0AD98;
    case 244u: goto L_08A0ADA0;
    case 245u: goto L_08A0ADA8;
    case 246u: goto L_08A0ADB0;
    case 247u: goto L_08A0ADB8;
    case 248u: goto L_08A0ADC4;
    case 249u: goto L_08A0ADCC;
    case 250u: goto L_08A0ADD4;
    case 251u: goto L_08A0ADDC;
    case 252u: goto L_08A0ADE4;
    case 253u: goto L_08A0ADF0;
    case 254u: goto L_08A0ADF8;
    case 255u: goto L_08A0AE04;
    case 256u: goto L_08A0AE14;
    case 257u: goto L_08A0AE30;
    case 258u: goto L_08A0AE3C;
    case 259u: goto L_08A0AE6C;
    case 260u: goto L_08A0AE7C;
    case 261u: goto L_08A0AE84;
    case 262u: goto L_08A0AE8C;
    case 263u: goto L_08A0AE94;
    case 264u: goto L_08A0AEB8;
    case 265u: goto L_08A0AEC4;
    case 266u: goto L_08A0AEDC;
    case 267u: goto L_08A0AEE4;
    case 268u: goto L_08A0AEEC;
    case 269u: goto L_08A0AF14;
    case 270u: goto L_08A0AF28;
    case 271u: goto L_08A0AF2C;
    case 272u: goto L_08A0AF4C;
    case 273u: goto L_08A0AF7C;
    case 274u: goto L_08A0AF90;
    case 275u: goto L_08A0AF98;
    case 276u: goto L_08A0AFA8;
    case 277u: goto L_08A0AFB0;
    case 278u: goto L_08A0AFBC;
    case 279u: goto L_08A0AFC4;
    case 280u: goto L_08A0AFC8;
    case 281u: goto L_08A0AFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0A000:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A00Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 56u, 0x08A093F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A00Cu) goto L_08A0A00C;
    return;
L_08A0A00C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0A038;
      }
      goto L_08A0A014;
    }
L_08A0A014:
    aot_gpr[4] = (0u | 39368u);
    aot_gpr[31] = (0x08A0A020u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 148u, 0x08A0CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A0A020u) goto L_08A0A020;
    return;
L_08A0A020:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A028;
    }
L_08A0A028:
    aot_gpr[31] = (0x08A0A030u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 84u, 0x08A09558u>(ctx, &aot_mem) && ctx.pc == 0x08A0A030u) goto L_08A0A030;
    return;
L_08A0A030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A038;
    }
L_08A0A038:
    aot_gpr[31] = (0x08A0A040u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 56u, 0x08A093F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A040u) goto L_08A0A040;
    return;
L_08A0A040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A048;
    }
L_08A0A048:
    aot_gpr[21] = (0u | 39368u);
    aot_gpr[21] = (aot_gpr[16] + aot_gpr[21]);
    aot_gpr[31] = (0x08A0A058u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 148u, 0x08A0CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A0A058u) goto L_08A0A058;
    return;
L_08A0A058:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A070;
      }
      goto L_08A0A060;
    }
L_08A0A060:
    aot_gpr[31] = (0x08A0A068u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 84u, 0x08A09558u>(ctx, &aot_mem) && ctx.pc == 0x08A0A068u) goto L_08A0A068;
    return;
L_08A0A068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A070;
    }
L_08A0A070:
    aot_gpr[31] = (0x08A0A078u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 158u, 0x08A0CBD8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A078u) goto L_08A0A078;
    return;
L_08A0A078:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u | 39500u);
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A080;
    }
L_08A0A080:
    aot_gpr[6] = (0u | 39504u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[31] = (0x08A0A094u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0A2C8;
L_08A0A094:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0A0B0;
      }
      goto L_08A0A0A0;
    }
L_08A0A0A0:
    aot_gpr[31] = (0x08A0A0A8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0A8u) goto L_08A0A0A8;
    return;
L_08A0A0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A0B0;
    }
L_08A0A0B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0A0C8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0A0C8u) goto L_08A0A0C8;
    return;
L_08A0A0C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0A0E8;
      }
      goto L_08A0A0D0;
    }
L_08A0A0D0:
    aot_gpr[31] = (0x08A0A0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0D8u) goto L_08A0A0D8;
    return;
L_08A0A0D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0A0E4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 201u, 0x08A03CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0E4u) goto L_08A0A0E4;
    return;
L_08A0A0E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0A0E8;
L_08A0A0E8:
    aot_gpr[31] = (0x08A0A0F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0F0u) goto L_08A0A0F0;
    return;
L_08A0A0F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0A10C;
      }
      goto L_08A0A0F8;
    }
L_08A0A0F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A104u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A104u) goto L_08A0A104;
    return;
L_08A0A104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A10C;
    }
L_08A0A10C:
    aot_gpr[31] = (0x08A0A114u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A114u) goto L_08A0A114;
    return;
L_08A0A114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A11C;
    }
L_08A0A11C:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A12Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 56u, 0x08A093F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A12Cu) goto L_08A0A12C;
    return;
L_08A0A12C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A134;
    }
L_08A0A134:
    aot_gpr[31] = (0x08A0A13Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 210u, 0x08A08E84u>(ctx, &aot_mem) && ctx.pc == 0x08A0A13Cu) goto L_08A0A13C;
    return;
L_08A0A13C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[20];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A144;
    }
L_08A0A144:
    aot_gpr[31] = (0x08A0A14Cu);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A14Cu) goto L_08A0A14C;
    return;
L_08A0A14C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A154;
    }
L_08A0A154:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(752)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08A0A178;
      }
      goto L_08A0A164;
    }
L_08A0A164:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A16C;
    }
L_08A0A16C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_08A0A188;
      }
      goto L_08A0A174;
    }
L_08A0A174:
    aot_gpr[5] = (0u | 4u);
    goto L_08A0A178;
L_08A0A178:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A180;
    }
L_08A0A180:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(752), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A188;
    }
L_08A0A188:
    aot_gpr[31] = (0x08A0A190u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 235u, 0x08A0BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A190u) goto L_08A0A190;
    return;
L_08A0A190:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0A1A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1A0u) goto L_08A0A1A0;
    return;
L_08A0A1A0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26196)));
    aot_gpr[31] = (0x08A0A1B4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 66u, 0x089F0414u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1B4u) goto L_08A0A1B4;
    return;
L_08A0A1B4:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x08A0A1D4u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 91u, 0x08A086BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A1D4u) goto L_08A0A1D4;
    return;
L_08A0A1D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26196)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0A1E4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A1E4u) goto L_08A0A1E4;
    return;
L_08A0A1E4:
    aot_gpr[31] = (0x08A0A1ECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 201u, 0x08A08DECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A1ECu) goto L_08A0A1EC;
    return;
L_08A0A1EC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0A1F8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 154u, 0x08A0BA48u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1F8u) goto L_08A0A1F8;
    return;
L_08A0A1F8:
    aot_gpr[21] = (0u | 39368u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[16] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08A0A210;
      }
      goto L_08A0A204;
    }
L_08A0A204:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A0A210;
      }
      goto L_08A0A20C;
    }
L_08A0A20C:
    aot_gpr[19] = (0u | 0u);
    goto L_08A0A210;
L_08A0A210:
    aot_gpr[31] = (0x08A0A218u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A218u) goto L_08A0A218;
    return;
L_08A0A218:
    aot_gpr[31] = (0x08A0A220u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 6u, 0x08A09058u>(ctx, &aot_mem) && ctx.pc == 0x08A0A220u) goto L_08A0A220;
    return;
L_08A0A220:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A22Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A22Cu) goto L_08A0A22C;
    return;
L_08A0A22C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0A238u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A238u) goto L_08A0A238;
    return;
L_08A0A238:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0A244u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 237u, 0x08A0BFFCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A244u) goto L_08A0A244;
    return;
L_08A0A244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A24C;
    }
L_08A0A24C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A258u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 56u, 0x08A093F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A258u) goto L_08A0A258;
    return;
L_08A0A258:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 39368u);
      if (branch_taken) {
          goto L_08A0A280;
      }
      goto L_08A0A260;
    }
L_08A0A260:
    aot_gpr[31] = (0x08A0A268u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 148u, 0x08A0CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A0A268u) goto L_08A0A268;
    return;
L_08A0A268:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A270;
    }
L_08A0A270:
    aot_gpr[31] = (0x08A0A278u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 84u, 0x08A09558u>(ctx, &aot_mem) && ctx.pc == 0x08A0A278u) goto L_08A0A278;
    return;
L_08A0A278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A280;
    }
L_08A0A280:
    aot_gpr[31] = (0x08A0A288u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 201u, 0x08A08DECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A288u) goto L_08A0A288;
    return;
L_08A0A288:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0A29C;
      }
      goto L_08A0A294;
    }
L_08A0A294:
    aot_gpr[31] = (0x08A0A29Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A29Cu) goto L_08A0A29C;
    return;
L_08A0A29C:
    aot_gpr[31] = (0x08A0A2A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 119u, 0x08A088D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A2A4u) goto L_08A0A2A4;
    return;
L_08A0A2A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A2C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 39368u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    aot_gpr[31] = (0x08A0A304u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 154u, 0x08A0CBA0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A304u) goto L_08A0A304;
    return;
L_08A0A304:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0A328;
      }
      goto L_08A0A30C;
    }
L_08A0A30C:
    aot_gpr[4] = (0u | 500u);
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(748), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(752), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0A340;
      }
      goto L_08A0A328;
    }
L_08A0A328:
    aot_gpr[31] = (0x08A0A330u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 156u, 0x08A0CBC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A330u) goto L_08A0A330;
    return;
L_08A0A330:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(748), aot_gpr[2]);
    aot_gpr[31] = (0x08A0A33Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 157u, 0x08A0CBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A33Cu) goto L_08A0A33C;
    return;
L_08A0A33C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(752), aot_gpr[2]);
    goto L_08A0A340;
L_08A0A340:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(704), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A35C;
      }
      goto L_08A0A350;
    }
L_08A0A350:
    aot_gpr[31] = (0x08A0A358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A0A358u) goto L_08A0A358;
    return;
L_08A0A358:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08A0A35C;
L_08A0A35C:
    aot_gpr[31] = (0x08A0A364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A364u) goto L_08A0A364;
    return;
L_08A0A364:
    aot_gpr[31] = (0x08A0A36Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 235u, 0x089EFEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A36Cu) goto L_08A0A36C;
    return;
L_08A0A36C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0A38Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0A38Cu) goto L_08A0A38C;
    return;
L_08A0A38C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A0A3B4;
      }
      goto L_08A0A398;
    }
L_08A0A398:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26196)));
    aot_gpr[31] = (0x08A0A3B4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A3B4u) goto L_08A0A3B4;
    return;
L_08A0A3B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(752)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A3C4;
    }
L_08A0A3C4:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A0A44C;
      }
      goto L_08A0A3D0;
    }
L_08A0A3D0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0A548;
      }
      goto L_08A0A3D8;
    }
L_08A0A3D8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A0A5B0;
      }
      goto L_08A0A3E0;
    }
L_08A0A3E0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A0A5B0;
      }
      goto L_08A0A3E8;
    }
L_08A0A3E8:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26188)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A3FC;
    }
L_08A0A3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(752), aot_gpr[4]);
    aot_gpr[31] = (0x08A0A408u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 235u, 0x08A0BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A408u) goto L_08A0A408;
    return;
L_08A0A408:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A418u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A0A418u) goto L_08A0A418;
    return;
L_08A0A418:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08A0A42Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 97u, 0x08A0964Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A42Cu) goto L_08A0A42C;
    return;
L_08A0A42C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A438u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A438u) goto L_08A0A438;
    return;
L_08A0A438:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0A444u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 237u, 0x08A0BFFCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A444u) goto L_08A0A444;
    return;
L_08A0A444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A44C;
    }
L_08A0A44C:
    aot_gpr[31] = (0x08A0A454u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 198u, 0x08A07B84u>(ctx, &aot_mem) && ctx.pc == 0x08A0A454u) goto L_08A0A454;
    return;
L_08A0A454:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A0A4C0;
      }
      goto L_08A0A45C;
    }
L_08A0A45C:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A0A468u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 34u, 0x08A0C2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A468u) goto L_08A0A468;
    return;
L_08A0A468:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A478u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A0A478u) goto L_08A0A478;
    return;
L_08A0A478:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A0A494u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 91u, 0x08A086BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A494u) goto L_08A0A494;
    return;
L_08A0A494:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0A4A0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4A0u) goto L_08A0A4A0;
    return;
L_08A0A4A0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A4ACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A4ACu) goto L_08A0A4AC;
    return;
L_08A0A4AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A4B8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 36u, 0x08A0C2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A4B8u) goto L_08A0A4B8;
    return;
L_08A0A4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A4C0;
    }
L_08A0A4C0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A4CCu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4CCu) goto L_08A0A4CC;
    return;
L_08A0A4CC:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x08A0A4D8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 10u, 0x08A0C098u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4D8u) goto L_08A0A4D8;
    return;
L_08A0A4D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A0A4F4u);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 91u, 0x08A086BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A4F4u) goto L_08A0A4F4;
    return;
L_08A0A4F4:
    aot_gpr[31] = (0x08A0A4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4FCu) goto L_08A0A4FC;
    return;
L_08A0A4FC:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0A50Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 90u, 0x08A0C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A50Cu) goto L_08A0A50C;
    return;
L_08A0A50C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A520u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 189u, 0x08A03BE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A520u) goto L_08A0A520;
    return;
L_08A0A520:
    aot_gpr[31] = (0x08A0A528u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 73u, 0x08A0C570u>(ctx, &aot_mem) && ctx.pc == 0x08A0A528u) goto L_08A0A528;
    return;
L_08A0A528:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A534u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 12u, 0x08A0C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A534u) goto L_08A0A534;
    return;
L_08A0A534:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A540u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A540u) goto L_08A0A540;
    return;
L_08A0A540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A548;
    }
L_08A0A548:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08A0A554u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 45u, 0x08A0C36Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A554u) goto L_08A0A554;
    return;
L_08A0A554:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A564u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A0A564u) goto L_08A0A564;
    return;
L_08A0A564:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A57Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 17u, 0x08A070CCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A57Cu) goto L_08A0A57C;
    return;
L_08A0A57C:
    aot_gpr[31] = (0x08A0A584u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A584u) goto L_08A0A584;
    return;
L_08A0A584:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0A590u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A0A590u) goto L_08A0A590;
    return;
L_08A0A590:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A59Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A59Cu) goto L_08A0A59C;
    return;
L_08A0A59C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A5A8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 47u, 0x08A0C3A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A5A8u) goto L_08A0A5A8;
    return;
L_08A0A5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A5B0;
    }
L_08A0A5B0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26040)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A0A5F0;
      }
      goto L_08A0A5C4;
    }
L_08A0A5C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0A5E8u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0A5E8u) goto L_08A0A5E8;
    return;
L_08A0A5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A638;
      }
      goto L_08A0A5F0;
    }
L_08A0A5F0:
    aot_gpr[31] = (0x08A0A5F8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 45u, 0x08A0C36Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A5F8u) goto L_08A0A5F8;
    return;
L_08A0A5F8:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A608u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A0A608u) goto L_08A0A608;
    return;
L_08A0A608:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A620u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 17u, 0x08A070CCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A620u) goto L_08A0A620;
    return;
L_08A0A620:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0A62Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A62Cu) goto L_08A0A62C;
    return;
L_08A0A62C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0A638u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 47u, 0x08A0C3A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A638u) goto L_08A0A638;
    return;
L_08A0A638:
    aot_gpr[31] = (0x08A0A640u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A0A640u) goto L_08A0A640;
    return;
L_08A0A640:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A658;
      }
      goto L_08A0A648;
    }
L_08A0A648:
    aot_gpr[31] = (0x08A0A650u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 34u, 0x08A08298u>(ctx, &aot_mem) && ctx.pc == 0x08A0A650u) goto L_08A0A650;
    return;
L_08A0A650:
    aot_gpr[31] = (0x08A0A658u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A658u) goto L_08A0A658;
    return;
L_08A0A658:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(752)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-992));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(948), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(952), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(956), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(960), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(964), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(968), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(976), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(980), aot_gpr[30]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (aot_gpr[10] | 0u);
    aot_gpr[20] = (aot_gpr[9] | 0u);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(972), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(984), aot_gpr[31]);
    aot_gpr[31] = (0x08A0A6D4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 80u, 0x089F143Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A6D4u) goto L_08A0A6D4;
    return;
L_08A0A6D4:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A0A6E4u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0A6E4u) goto L_08A0A6E4;
    return;
L_08A0A6E4:
    aot_gpr[23] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[31] = (0x08A0A6FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 10u, 0x08A07054u>(ctx, &aot_mem) && ctx.pc == 0x08A0A6FCu) goto L_08A0A6FC;
    return;
L_08A0A6FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_08A0A748;
      }
      goto L_08A0A70C;
    }
L_08A0A70C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(944), aot_gpr[30]);
    aot_gpr[31] = (0x08A0A718u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 155u, 0x08A0BA54u>(ctx, &aot_mem) && ctx.pc == 0x08A0A718u) goto L_08A0A718;
    return;
L_08A0A718:
    aot_gpr[31] = (0x08A0A720u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(708));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 155u, 0x08A0BA54u>(ctx, &aot_mem) && ctx.pc == 0x08A0A720u) goto L_08A0A720;
    return;
L_08A0A720:
    aot_gpr[4] = (0u | 39368u);
    aot_gpr[30] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x08A0A730u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A730u) goto L_08A0A730;
    return;
L_08A0A730:
    aot_gpr[31] = (0x08A0A738u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 181u, 0x08A0CD44u>(ctx, &aot_mem) && ctx.pc == 0x08A0A738u) goto L_08A0A738;
    return;
L_08A0A738:
    aot_gpr[31] = (0x08A0A740u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 34u, 0x08A08298u>(ctx, &aot_mem) && ctx.pc == 0x08A0A740u) goto L_08A0A740;
    return;
L_08A0A740:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(944)));
      if (branch_taken) {
          goto L_08A0A7DC;
      }
      goto L_08A0A748;
    }
L_08A0A748:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08A0A7DC;
      }
      goto L_08A0A750;
    }
L_08A0A750:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (0u | 39368u);
      if (branch_taken) {
          goto L_08A0A7DC;
      }
      goto L_08A0A758;
    }
L_08A0A758:
    aot_gpr[31] = (0x08A0A760u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 183u, 0x08A0CD58u>(ctx, &aot_mem) && ctx.pc == 0x08A0A760u) goto L_08A0A760;
    return;
L_08A0A760:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A0A7A0;
      }
      goto L_08A0A76C;
    }
L_08A0A76C:
    aot_gpr[31] = (0x08A0A774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0A774u) goto L_08A0A774;
    return;
L_08A0A774:
    aot_gpr[31] = (0x08A0A77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A77Cu) goto L_08A0A77C;
    return;
L_08A0A77C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0A79Cu);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0A79Cu) goto L_08A0A79C;
    return;
L_08A0A79C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08A0A7A0;
L_08A0A7A0:
    aot_gpr[31] = (0x08A0A7A8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A7A8u) goto L_08A0A7A8;
    return;
L_08A0A7A8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(948)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(952)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(956)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(960)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(964)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(968)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(972)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(976)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(980)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(984)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(992));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A7DC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A7FC;
      }
      goto L_08A0A7E4;
    }
L_08A0A7E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 39368u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x08A0A7FCu);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 171u, 0x08A0CC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A7FCu) goto L_08A0A7FC;
    return;
L_08A0A7FC:
    aot_gpr[31] = (0x08A0A804u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A0A804u) goto L_08A0A804;
    return;
L_08A0A804:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A0A8D8;
      }
      goto L_08A0A80C;
    }
L_08A0A80C:
    aot_gpr[4] = (0u | 40708u);
    aot_gpr[31] = (0x08A0A818u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 64u, 0x08A0D440u>(ctx, &aot_mem) && ctx.pc == 0x08A0A818u) goto L_08A0A818;
    return;
L_08A0A818:
    aot_gpr[31] = (0x08A0A820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x08A0A820u) goto L_08A0A820;
    return;
L_08A0A820:
    aot_gpr[6] = (0u | 39368u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x08A0A844u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 91u, 0x089F14F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A844u) goto L_08A0A844;
    return;
L_08A0A844:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0A850u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 33u, 0x08A08288u>(ctx, &aot_mem) && ctx.pc == 0x08A0A850u) goto L_08A0A850;
    return;
L_08A0A850:
    aot_gpr[31] = (0x08A0A858u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A0A858u) goto L_08A0A858;
    return;
L_08A0A858:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A0A8D8;
      }
      goto L_08A0A860;
    }
L_08A0A860:
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0A874;
      }
      goto L_08A0A86C;
    }
L_08A0A86C:
    aot_gpr[31] = (0x08A0A874u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 72u, 0x08A085A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A874u) goto L_08A0A874;
    return;
L_08A0A874:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A0A89C;
      }
      goto L_08A0A87C;
    }
L_08A0A87C:
    if (static_cast<std::int32_t>(aot_gpr[17]) >= 0) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), 0u);
        goto L_08A0A8B0;
    }
    goto L_08A0A884;
L_08A0A884:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), aot_gpr[23]);
    goto L_08A0A888;
L_08A0A888:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A0A894u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0A894u) goto L_08A0A894;
    return;
L_08A0A894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8C4;
      }
      goto L_08A0A89C;
    }
L_08A0A89C:
    if (aot_gpr[17] != aot_gpr[30]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), aot_gpr[23]);
        goto L_08A0A888;
    }
    goto L_08A0A8A4;
L_08A0A8A4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), aot_gpr[23]);
      if (branch_taken) {
          goto L_08A0A8C4;
      }
      goto L_08A0A8AC;
    }
L_08A0A8AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), 0u);
    goto L_08A0A8B0;
L_08A0A8B0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A0A8BCu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8BCu) goto L_08A0A8BC;
    return;
L_08A0A8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8C4;
      }
      goto L_08A0A8C4;
    }
L_08A0A8C4:
    aot_gpr[31] = (0x08A0A8CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 70u, 0x08A0855Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A8CCu) goto L_08A0A8CC;
    return;
L_08A0A8CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1428), aot_gpr[18]);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08A0A8D8;
L_08A0A8D8:
    aot_gpr[31] = (0x08A0A8E0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8E0u) goto L_08A0A8E0;
    return;
L_08A0A8E0:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(948)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(952)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(956)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(960)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(964)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(968)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(972)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(976)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(980)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(984)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(992));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0A93Cu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A93Cu) goto L_08A0A93C;
    return;
L_08A0A93C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12416));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A0A950u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A0AC84;
L_08A0A950:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(308), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x08A0A968u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4480));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A968u) goto L_08A0A968;
    return;
L_08A0A968:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0A97Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0A97Cu) goto L_08A0A97C;
    return;
L_08A0A97C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0A988u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A0AE3C;
L_08A0A988:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(304), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0A9AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0A9FC;
      }
      goto L_08A0A9C8;
    }
L_08A0A9C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12416));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A0A9DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0ACD8;
L_08A0A9DC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0A9E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9E8u) goto L_08A0A9E8;
    return;
L_08A0A9E8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9FC;
      }
      goto L_08A0A9F4;
    }
L_08A0A9F4:
    aot_gpr[31] = (0x08A0A9FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9FCu) goto L_08A0A9FC;
    return;
L_08A0A9FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA10:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA18:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-4464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0AA9C;
      }
      goto L_08A0AA60;
    }
L_08A0AA60:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    goto L_08A0AA68;
L_08A0AA68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[31] = (0x08A0AA84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0AF4C;
L_08A0AA84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A0AA68;
      }
      goto L_08A0AA9C;
    }
L_08A0AA9C:
    if (aot_gpr[17] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[17]);
        goto L_08A0AAEC;
    }
    goto L_08A0AAA4;
L_08A0AAA4:
    aot_gpr[31] = (0x08A0AAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AAACu) goto L_08A0AAAC;
    return;
L_08A0AAAC:
    aot_gpr[31] = (0x08A0AAB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AAB4u) goto L_08A0AAB4;
    return;
L_08A0AAB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 187u);
    aot_gpr[31] = (0x08A0AACCu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AACCu) goto L_08A0AACC;
    return;
L_08A0AACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0AAE0u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AAE0u) goto L_08A0AAE0;
    return;
L_08A0AAE0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0AAEC;
      }
      goto L_08A0AAEC;
    }
L_08A0AAEC:
    aot_gpr[31] = (0x08A0AAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AAF4u) goto L_08A0AAF4;
    return;
L_08A0AAF4:
    aot_gpr[31] = (0x08A0AAFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AAFCu) goto L_08A0AAFC;
    return;
L_08A0AAFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 197u);
    aot_gpr[31] = (0x08A0AB18u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AB18u) goto L_08A0AB18;
    return;
L_08A0AB18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(316), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0AB30u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB30u) goto L_08A0AB30;
    return;
L_08A0AB30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[31] = (0x08A0AB4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08A0AE14;
L_08A0AB4C:
    aot_gpr[31] = (0x08A0AB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB54u) goto L_08A0AB54;
    return;
L_08A0AB54:
    aot_gpr[31] = (0x08A0AB5Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB5Cu) goto L_08A0AB5C;
    return;
L_08A0AB5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 208u);
    aot_gpr[31] = (0x08A0AB78u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AB78u) goto L_08A0AB78;
    return;
L_08A0AB78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A0AB98u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB98u) goto L_08A0AB98;
    return;
L_08A0AB98:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0ABE0;
      }
      goto L_08A0ABAC;
    }
L_08A0ABAC:
    aot_gpr[6] = (0u | 0u);
    goto L_08A0ABB0;
L_08A0ABB0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0ABB0;
      }
      goto L_08A0ABE0;
    }
L_08A0ABE0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0AC4C;
      }
      goto L_08A0ABF0;
    }
L_08A0ABF0:
    aot_gpr[6] = (0u | 0u);
    goto L_08A0ABF4;
L_08A0ABF4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A0ABF4;
      }
      goto L_08A0AC4C;
    }
L_08A0AC4C:
    aot_gpr[31] = (0x08A0AC54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0AFE4;
L_08A0AC54:
    aot_gpr[31] = (0x08A0AC5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 8u, 0x08A0B074u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC5Cu) goto L_08A0AC5C;
    return;
L_08A0AC5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AC84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0ACA8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4436));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACA8u) goto L_08A0ACA8;
    return;
L_08A0ACA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(312), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(316), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0ACD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0ACECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 19u, 0x08A0B13Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ACECu) goto L_08A0ACEC;
    return;
L_08A0ACEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AE04;
      }
      goto L_08A0ACF8;
    }
L_08A0ACF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
        goto L_08A0AD28;
    }
    goto L_08A0AD04;
L_08A0AD04:
    aot_gpr[31] = (0x08A0AD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD0Cu) goto L_08A0AD0C;
    return;
L_08A0AD0C:
    aot_gpr[31] = (0x08A0AD14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD14u) goto L_08A0AD14;
    return;
L_08A0AD14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    aot_gpr[31] = (0x08A0AD20u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD20u) goto L_08A0AD20;
    return;
L_08A0AD20:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(312), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    goto L_08A0AD28;
L_08A0AD28:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
        goto L_08A0AD68;
    }
    goto L_08A0AD30;
L_08A0AD30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
        goto L_08A0AD68;
    }
    goto L_08A0AD3C;
L_08A0AD3C:
    aot_gpr[31] = (0x08A0AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD44u) goto L_08A0AD44;
    return;
L_08A0AD44:
    aot_gpr[31] = (0x08A0AD4Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD4Cu) goto L_08A0AD4C;
    return;
L_08A0AD4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0AD5Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD5Cu) goto L_08A0AD5C;
    return;
L_08A0AD5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    goto L_08A0AD68;
L_08A0AD68:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
        goto L_08A0ADA0;
    }
    goto L_08A0AD70;
L_08A0AD70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
        goto L_08A0ADA0;
    }
    goto L_08A0AD7C;
L_08A0AD7C:
    aot_gpr[31] = (0x08A0AD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD84u) goto L_08A0AD84;
    return;
L_08A0AD84:
    aot_gpr[31] = (0x08A0AD8Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD8Cu) goto L_08A0AD8C;
    return;
L_08A0AD8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[31] = (0x08A0AD98u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD98u) goto L_08A0AD98;
    return;
L_08A0AD98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    goto L_08A0ADA0;
L_08A0ADA0:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
        goto L_08A0ADCC;
    }
    goto L_08A0ADA8;
L_08A0ADA8:
    aot_gpr[31] = (0x08A0ADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADB0u) goto L_08A0ADB0;
    return;
L_08A0ADB0:
    aot_gpr[31] = (0x08A0ADB8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADB8u) goto L_08A0ADB8;
    return;
L_08A0ADB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[31] = (0x08A0ADC4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0ADC4u) goto L_08A0ADC4;
    return;
L_08A0ADC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(316), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    goto L_08A0ADCC;
L_08A0ADCC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0ADF8;
      }
      goto L_08A0ADD4;
    }
L_08A0ADD4:
    aot_gpr[31] = (0x08A0ADDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADDCu) goto L_08A0ADDC;
    return;
L_08A0ADDC:
    aot_gpr[31] = (0x08A0ADE4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADE4u) goto L_08A0ADE4;
    return;
L_08A0ADE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[31] = (0x08A0ADF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0ADF0u) goto L_08A0ADF0;
    return;
L_08A0ADF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[4] = (0u | 1u);
    goto L_08A0ADF8;
L_08A0ADF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), aot_gpr[4]);
    aot_gpr[31] = (0x08A0AE04u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0AC84;
L_08A0AE04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AE14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0AE30u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 143u, 0x08A068A4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE30u) goto L_08A0AE30;
    return;
L_08A0AE30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AE3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A0AE6Cu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4424));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE6Cu) goto L_08A0AE6C;
    return;
L_08A0AE6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0AE7Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0AE7Cu) goto L_08A0AE7C;
    return;
L_08A0AE7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AF2C;
      }
      goto L_08A0AE84;
    }
L_08A0AE84:
    aot_gpr[31] = (0x08A0AE8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE8Cu) goto L_08A0AE8C;
    return;
L_08A0AE8C:
    aot_gpr[31] = (0x08A0AE94u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE94u) goto L_08A0AE94;
    return;
L_08A0AE94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4464));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 136u);
    aot_gpr[31] = (0x08A0AEB8u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AEB8u) goto L_08A0AEB8;
    return;
L_08A0AEB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[31] = (0x08A0AEC4u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0AEC4u) goto L_08A0AEC4;
    return;
L_08A0AEC4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0AEDCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0AEDCu) goto L_08A0AEDC;
    return;
L_08A0AEDC:
    aot_gpr[31] = (0x08A0AEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AEE4u) goto L_08A0AEE4;
    return;
L_08A0AEE4:
    aot_gpr[31] = (0x08A0AEECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AEECu) goto L_08A0AEEC;
    return;
L_08A0AEEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 141u);
    aot_gpr[31] = (0x08A0AF14u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF14u) goto L_08A0AF14;
    return;
L_08A0AF14:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(312), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0AF28u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF28u) goto L_08A0AF28;
    return;
L_08A0AF28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A0AF2C;
L_08A0AF2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AF4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0AF7Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4416));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF7Cu) goto L_08A0AF7C;
    return;
L_08A0AF7C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0AF90u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0AF90u) goto L_08A0AF90;
    return;
L_08A0AF90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AFC8;
      }
      goto L_08A0AF98;
    }
L_08A0AF98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A0AFA8u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 143u, 0x08A068A4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AFA8u) goto L_08A0AFA8;
    return;
L_08A0AFA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0AFC4;
      }
      goto L_08A0AFB0;
    }
L_08A0AFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (0x08A0AFBCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A0AFBCu) goto L_08A0AFBC;
    return;
L_08A0AFBC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A0AFC8;
      }
      goto L_08A0AFC4;
    }
L_08A0AFC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A0AFC8;
L_08A0AFC8:
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
L_08A0AFE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    ctx.pc = 0x08A0B000u; return;
}

void recomp_unit_0518(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0518_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_518(Runtime &runtime) {
    runtime.register_generated_unit(518u, 0x08A0A000u, 4096u, &recomp_unit_0518, &recomp_unit_0518_entry);
    runtime.register_function(0x08A0A000u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A00Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A014u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A020u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A028u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A030u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A038u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A040u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A048u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A058u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A060u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A068u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A070u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A078u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A080u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A094u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0A0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0A8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0B0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0C8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0D0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0D8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0E4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0E8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0F0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A0F8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A104u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A10Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A114u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A11Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A12Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A134u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A13Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A144u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A14Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A154u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A164u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A16Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A174u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A178u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A180u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A188u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A190u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A1A0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A1B4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A1D4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A1E4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A1ECu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A1F8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A204u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A20Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A210u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A218u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A220u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A22Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A238u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A244u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A24Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A258u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A260u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A268u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A270u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A278u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A280u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A288u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A294u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A29Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A2A4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A2C8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A304u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A30Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A328u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A330u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A33Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A340u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A350u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A358u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A35Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A364u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A36Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A38Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A398u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3B4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3C4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3D0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3D8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3E0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3E8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A3FCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A408u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A418u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A42Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A438u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A444u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A44Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A454u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A45Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A468u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A478u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A494u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4A0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4ACu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4B8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4C0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4CCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4D8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4F4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A4FCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A50Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A520u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A528u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A534u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A540u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A548u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A554u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A564u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A57Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A584u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A590u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A59Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A5A8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A5B0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A5C4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A5E8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A5F0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A5F8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A608u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A620u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A62Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A638u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A640u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A648u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A650u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A658u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A680u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A6D4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A6E4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A6FCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A70Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A718u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A720u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A730u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A738u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A740u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A748u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A750u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A758u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A760u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A76Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A774u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A77Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A79Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A7A0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A7A8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A7DCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A7E4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A7FCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A804u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A80Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A818u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A820u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A844u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A850u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A858u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A860u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A86Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A874u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A87Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A884u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A888u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A894u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A89Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8A4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8ACu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8B0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8BCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8C4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8CCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8D8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A8E0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A914u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A93Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A950u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A968u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A97Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A988u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A9ACu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A9C8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A9DCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A9E8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A9F4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0A9FCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA10u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA18u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA20u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA60u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA68u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA84u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AA9Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAA4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAACu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAB4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AACCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAE0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAECu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAF4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AAFCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB18u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB30u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB4Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB54u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB5Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB78u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AB98u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ABACu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ABB0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ABE0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ABF0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ABF4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AC4Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AC54u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AC5Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AC84u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ACA8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ACD8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ACECu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ACF8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD04u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD0Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD14u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD20u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD28u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD30u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD3Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD44u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD4Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD5Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD68u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD70u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD7Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD84u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD8Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AD98u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADA0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADA8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADB0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADB8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADC4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADCCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADD4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADDCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADE4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADF0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0ADF8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE04u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE14u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE30u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE3Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE6Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE7Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE84u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE8Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AE94u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AEB8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AEC4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AEDCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AEE4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AEECu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF14u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF28u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF2Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF4Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF7Cu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF90u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AF98u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AFA8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AFB0u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AFBCu, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AFC4u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AFC8u, &recomp_unit_0518, "recomp_unit_0518");
    runtime.register_function(0x08A0AFE4u, &recomp_unit_0518, "recomp_unit_0518");
}
} // namespace psprecomp
