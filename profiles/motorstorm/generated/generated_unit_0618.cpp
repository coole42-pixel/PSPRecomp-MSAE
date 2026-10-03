#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0618[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 15, 0, 0, 16, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 31, 32, 0, 0, 0, 33, 34, 0,
    0, 35, 0, 0, 36, 37, 0, 0, 0, 38, 39, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 46, 0, 0, 0, 47,
    48, 0, 0, 0, 49, 0, 0, 0, 50, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 63, 0, 64, 0, 65, 0, 66, 67, 0, 0, 68, 0, 0, 0, 69, 70, 0, 71, 0, 0,
    0, 72, 0, 73, 0, 0, 0, 74, 75, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0,
    87, 0, 88, 0, 89, 90, 0, 91, 0, 92, 0, 93, 94, 0, 0, 0, 0, 0, 0, 95, 96, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 100,
    0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 104, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 116, 0, 117, 0, 0, 118, 0, 0, 119, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134,
    0, 0, 135, 0, 0, 136, 137, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0,
    155, 156, 157, 158, 0, 159, 160, 0, 161, 162, 0, 163, 0, 164, 0, 0, 165, 0, 166, 167, 168, 169, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 177, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    181, 0, 182, 183, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 192, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 225, 0,
    226, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 232, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0,
    236, 0, 237, 0, 0, 238, 0, 239, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 245, 0, 246, 0,
    0, 0, 0, 0, 0, 247, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 262, 0, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 267,
    0, 0, 0, 268, 269, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 288,
};
void recomp_unit_0618_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A6E000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0618[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6E000;
    case 2u: goto L_08A6E014;
    case 3u: goto L_08A6E02C;
    case 4u: goto L_08A6E048;
    case 5u: goto L_08A6E060;
    case 6u: goto L_08A6E098;
    case 7u: goto L_08A6E0B0;
    case 8u: goto L_08A6E0C0;
    case 9u: goto L_08A6E124;
    case 10u: goto L_08A6E12C;
    case 11u: goto L_08A6E130;
    case 12u: goto L_08A6E160;
    case 13u: goto L_08A6E170;
    case 14u: goto L_08A6E180;
    case 15u: goto L_08A6E184;
    case 16u: goto L_08A6E190;
    case 17u: goto L_08A6E194;
    case 18u: goto L_08A6E1A0;
    case 19u: goto L_08A6E1AC;
    case 20u: goto L_08A6E220;
    case 21u: goto L_08A6E234;
    case 22u: goto L_08A6E238;
    case 23u: goto L_08A6E250;
    case 24u: goto L_08A6E260;
    case 25u: goto L_08A6E270;
    case 26u: goto L_08A6E280;
    case 27u: goto L_08A6E290;
    case 28u: goto L_08A6E2C0;
    case 29u: goto L_08A6E2D0;
    case 30u: goto L_08A6E2DC;
    case 31u: goto L_08A6E2E0;
    case 32u: goto L_08A6E2E4;
    case 33u: goto L_08A6E2F4;
    case 34u: goto L_08A6E2F8;
    case 35u: goto L_08A6E304;
    case 36u: goto L_08A6E310;
    case 37u: goto L_08A6E314;
    case 38u: goto L_08A6E324;
    case 39u: goto L_08A6E328;
    case 40u: goto L_08A6E338;
    case 41u: goto L_08A6E340;
    case 42u: goto L_08A6E34C;
    case 43u: goto L_08A6E354;
    case 44u: goto L_08A6E360;
    case 45u: goto L_08A6E368;
    case 46u: goto L_08A6E36C;
    case 47u: goto L_08A6E37C;
    case 48u: goto L_08A6E380;
    case 49u: goto L_08A6E390;
    case 50u: goto L_08A6E3A0;
    case 51u: goto L_08A6E3A4;
    case 52u: goto L_08A6E3B4;
    case 53u: goto L_08A6E3C0;
    case 54u: goto L_08A6E3C8;
    case 55u: goto L_08A6E3D4;
    case 56u: goto L_08A6E3DC;
    case 57u: goto L_08A6E3F0;
    case 58u: goto L_08A6E404;
    case 59u: goto L_08A6E40C;
    case 60u: goto L_08A6E414;
    case 61u: goto L_08A6E420;
    case 62u: goto L_08A6E42C;
    case 63u: goto L_08A6E430;
    case 64u: goto L_08A6E438;
    case 65u: goto L_08A6E440;
    case 66u: goto L_08A6E448;
    case 67u: goto L_08A6E44C;
    case 68u: goto L_08A6E458;
    case 69u: goto L_08A6E468;
    case 70u: goto L_08A6E46C;
    case 71u: goto L_08A6E474;
    case 72u: goto L_08A6E484;
    case 73u: goto L_08A6E48C;
    case 74u: goto L_08A6E49C;
    case 75u: goto L_08A6E4A0;
    case 76u: goto L_08A6E4A4;
    case 77u: goto L_08A6E4B4;
    case 78u: goto L_08A6E4C8;
    case 79u: goto L_08A6E4D0;
    case 80u: goto L_08A6E4D8;
    case 81u: goto L_08A6E4E0;
    case 82u: goto L_08A6E4E4;
    case 83u: goto L_08A6E540;
    case 84u: goto L_08A6E55C;
    case 85u: goto L_08A6E568;
    case 86u: goto L_08A6E574;
    case 87u: goto L_08A6E580;
    case 88u: goto L_08A6E588;
    case 89u: goto L_08A6E590;
    case 90u: goto L_08A6E594;
    case 91u: goto L_08A6E59C;
    case 92u: goto L_08A6E5A4;
    case 93u: goto L_08A6E5AC;
    case 94u: goto L_08A6E5B0;
    case 95u: goto L_08A6E5CC;
    case 96u: goto L_08A6E5D0;
    case 97u: goto L_08A6E5D4;
    case 98u: goto L_08A6E5EC;
    case 99u: goto L_08A6E5F8;
    case 100u: goto L_08A6E5FC;
    case 101u: goto L_08A6E608;
    case 102u: goto L_08A6E618;
    case 103u: goto L_08A6E634;
    case 104u: goto L_08A6E638;
    case 105u: goto L_08A6E63C;
    case 106u: goto L_08A6E648;
    case 107u: goto L_08A6E654;
    case 108u: goto L_08A6E660;
    case 109u: goto L_08A6E670;
    case 110u: goto L_08A6E688;
    case 111u: goto L_08A6E69C;
    case 112u: goto L_08A6E6A8;
    case 113u: goto L_08A6E6B0;
    case 114u: goto L_08A6E6B8;
    case 115u: goto L_08A6E6C4;
    case 116u: goto L_08A6E6C8;
    case 117u: goto L_08A6E6D0;
    case 118u: goto L_08A6E6DC;
    case 119u: goto L_08A6E6E8;
    case 120u: goto L_08A6E6EC;
    case 121u: goto L_08A6E710;
    case 122u: goto L_08A6E718;
    case 123u: goto L_08A6E724;
    case 124u: goto L_08A6E72C;
    case 125u: goto L_08A6E730;
    case 126u: goto L_08A6E738;
    case 127u: goto L_08A6E740;
    case 128u: goto L_08A6E74C;
    case 129u: goto L_08A6E754;
    case 130u: goto L_08A6E75C;
    case 131u: goto L_08A6E764;
    case 132u: goto L_08A6E76C;
    case 133u: goto L_08A6E774;
    case 134u: goto L_08A6E77C;
    case 135u: goto L_08A6E788;
    case 136u: goto L_08A6E794;
    case 137u: goto L_08A6E798;
    case 138u: goto L_08A6E7A0;
    case 139u: goto L_08A6E7A8;
    case 140u: goto L_08A6E7B0;
    case 141u: goto L_08A6E7BC;
    case 142u: goto L_08A6E7D8;
    case 143u: goto L_08A6E7EC;
    case 144u: goto L_08A6E7F0;
    case 145u: goto L_08A6E804;
    case 146u: goto L_08A6E828;
    case 147u: goto L_08A6E82C;
    case 148u: goto L_08A6E834;
    case 149u: goto L_08A6E83C;
    case 150u: goto L_08A6E844;
    case 151u: goto L_08A6E84C;
    case 152u: goto L_08A6E854;
    case 153u: goto L_08A6E860;
    case 154u: goto L_08A6E878;
    case 155u: goto L_08A6E880;
    case 156u: goto L_08A6E884;
    case 157u: goto L_08A6E888;
    case 158u: goto L_08A6E88C;
    case 159u: goto L_08A6E894;
    case 160u: goto L_08A6E898;
    case 161u: goto L_08A6E8A0;
    case 162u: goto L_08A6E8A4;
    case 163u: goto L_08A6E8AC;
    case 164u: goto L_08A6E8B4;
    case 165u: goto L_08A6E8C0;
    case 166u: goto L_08A6E8C8;
    case 167u: goto L_08A6E8CC;
    case 168u: goto L_08A6E8D0;
    case 169u: goto L_08A6E8D4;
    case 170u: goto L_08A6E8D8;
    case 171u: goto L_08A6E8F8;
    case 172u: goto L_08A6E900;
    case 173u: goto L_08A6E910;
    case 174u: goto L_08A6E930;
    case 175u: goto L_08A6E938;
    case 176u: goto L_08A6E944;
    case 177u: goto L_08A6E948;
    case 178u: goto L_08A6E94C;
    case 179u: goto L_08A6E954;
    case 180u: goto L_08A6E96C;
    case 181u: goto L_08A6E980;
    case 182u: goto L_08A6E988;
    case 183u: goto L_08A6E98C;
    case 184u: goto L_08A6E994;
    case 185u: goto L_08A6E99C;
    case 186u: goto L_08A6E9A8;
    case 187u: goto L_08A6E9B0;
    case 188u: goto L_08A6E9B8;
    case 189u: goto L_08A6E9C0;
    case 190u: goto L_08A6E9E4;
    case 191u: goto L_08A6E9EC;
    case 192u: goto L_08A6E9F0;
    case 193u: goto L_08A6E9F8;
    case 194u: goto L_08A6EA88;
    case 195u: goto L_08A6EAA8;
    case 196u: goto L_08A6EAB0;
    case 197u: goto L_08A6EABC;
    case 198u: goto L_08A6EAC4;
    case 199u: goto L_08A6EACC;
    case 200u: goto L_08A6EAD0;
    case 201u: goto L_08A6EAD8;
    case 202u: goto L_08A6EAE8;
    case 203u: goto L_08A6EAF8;
    case 204u: goto L_08A6EB10;
    case 205u: goto L_08A6EB1C;
    case 206u: goto L_08A6EB24;
    case 207u: goto L_08A6EB2C;
    case 208u: goto L_08A6EB34;
    case 209u: goto L_08A6EB38;
    case 210u: goto L_08A6EB68;
    case 211u: goto L_08A6EB88;
    case 212u: goto L_08A6EB90;
    case 213u: goto L_08A6EBA4;
    case 214u: goto L_08A6EBBC;
    case 215u: goto L_08A6EBCC;
    case 216u: goto L_08A6EBDC;
    case 217u: goto L_08A6EBE8;
    case 218u: goto L_08A6EBF4;
    case 219u: goto L_08A6EC04;
    case 220u: goto L_08A6EC14;
    case 221u: goto L_08A6EC28;
    case 222u: goto L_08A6EC40;
    case 223u: goto L_08A6EC54;
    case 224u: goto L_08A6EC74;
    case 225u: goto L_08A6EC78;
    case 226u: goto L_08A6EC80;
    case 227u: goto L_08A6EC84;
    case 228u: goto L_08A6EC90;
    case 229u: goto L_08A6ECA0;
    case 230u: goto L_08A6ECB0;
    case 231u: goto L_08A6ECB8;
    case 232u: goto L_08A6ECBC;
    case 233u: goto L_08A6ECC0;
    case 234u: goto L_08A6ECEC;
    case 235u: goto L_08A6ECF4;
    case 236u: goto L_08A6ED00;
    case 237u: goto L_08A6ED08;
    case 238u: goto L_08A6ED14;
    case 239u: goto L_08A6ED1C;
    case 240u: goto L_08A6ED20;
    case 241u: goto L_08A6ED34;
    case 242u: goto L_08A6ED40;
    case 243u: goto L_08A6ED58;
    case 244u: goto L_08A6ED5C;
    case 245u: goto L_08A6ED70;
    case 246u: goto L_08A6ED78;
    case 247u: goto L_08A6ED94;
    case 248u: goto L_08A6ED98;
    case 249u: goto L_08A6EDA0;
    case 250u: goto L_08A6EDBC;
    case 251u: goto L_08A6EDC4;
    case 252u: goto L_08A6EDCC;
    case 253u: goto L_08A6EDD8;
    case 254u: goto L_08A6EE10;
    case 255u: goto L_08A6EE80;
    case 256u: goto L_08A6EE90;
    case 257u: goto L_08A6EEA0;
    case 258u: goto L_08A6EEAC;
    case 259u: goto L_08A6EEB8;
    case 260u: goto L_08A6EEC0;
    case 261u: goto L_08A6EEC8;
    case 262u: goto L_08A6EECC;
    case 263u: goto L_08A6EED4;
    case 264u: goto L_08A6EEDC;
    case 265u: goto L_08A6EEE8;
    case 266u: goto L_08A6EEF4;
    case 267u: goto L_08A6EEFC;
    case 268u: goto L_08A6EF0C;
    case 269u: goto L_08A6EF10;
    case 270u: goto L_08A6EF18;
    case 271u: goto L_08A6EF20;
    case 272u: goto L_08A6EF28;
    case 273u: goto L_08A6EF34;
    case 274u: goto L_08A6EF40;
    case 275u: goto L_08A6EF48;
    case 276u: goto L_08A6EF54;
    case 277u: goto L_08A6EF5C;
    case 278u: goto L_08A6EF6C;
    case 279u: goto L_08A6EF74;
    case 280u: goto L_08A6EF8C;
    case 281u: goto L_08A6EFA8;
    case 282u: goto L_08A6EFBC;
    case 283u: goto L_08A6EFD0;
    case 284u: goto L_08A6EFD8;
    case 285u: goto L_08A6EFE0;
    case 286u: goto L_08A6EFEC;
    case 287u: goto L_08A6EFF4;
    case 288u: goto L_08A6EFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6E000:
    rt.unsupported(0x08A6E000u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08A6E014:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6E018u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08A6E02C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6E030u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08A6E048:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 100u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<99u, 117u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 116u, 32u, 1u>();
    rt.unsupported(0x08A6E058u, 0x7974706Du, "unknown not lowered yet"); return;
L_08A6E060:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6E064u, 0x756E2072u, "unknown not lowered yet"); return;
L_08A6E098:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6E09Cu, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08A6E0B0:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6E0B4u, 0x68772072u, "unknown not lowered yet"); return;
L_08A6E0C0:
    rt.unsupported(0x08A6E0C0u, 0x75636F44u, "unknown not lowered yet"); return;
L_08A6E124:
    rt.unsupported(0x08A6E124u, 0x4C4D5653u, "unknown not lowered yet"); return;
L_08A6E12C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08A6E130;
L_08A6E130:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vminmax(47u, 71u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<101u, 67u, 114u, 1u>();
    rt.unsupported(0x08A6E144u, 0x726F7461u, "unknown not lowered yet"); return;
L_08A6E160:
    rt.unsupported(0x08A6E160u, 0x61657263u, "vfpu0 not lowered yet"); return;
L_08A6E170:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6E174u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A6E180:
    aot_gpr[14] = (0u | 0u);
    goto L_08A6E184;
L_08A6E184:
    rt.unsupported(0x08A6E184u, 0x474F5653u, "cop1? not lowered yet"); return;
L_08A6E190:
    aot_gpr[12] = (0u | 0u);
    goto L_08A6E194;
L_08A6E194:
    rt.unsupported(0x08A6E194u, 0x79616C70u, "unknown not lowered yet"); return;
L_08A6E1A0:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    // nop
    goto L_08A6E1AC;
L_08A6E1AC:
    rt.unsupported(0x08A6E1ACu, 0x61657263u, "vfpu0 not lowered yet"); return;
L_08A6E220:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6E224u, 0x616E6942u, "vfpu0 not lowered yet"); return;
L_08A6E234:
    aot_gpr[9] = (ctx.lo);
    goto L_08A6E238;
L_08A6E238:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6E23Cu, 0x74736F50u, "unknown not lowered yet"); return;
L_08A6E250:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6E254u, 0x696E6946u, "unknown not lowered yet"); return;
L_08A6E260:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6E264u, 0x696E6946u, "unknown not lowered yet"); return;
L_08A6E270:
    rt.unsupported(0x08A6E270u, 0x696E6966u, "unknown not lowered yet"); return;
L_08A6E280:
    rt.unsupported(0x08A6E280u, 0x696E6966u, "unknown not lowered yet"); return;
L_08A6E290:
    rt.unsupported(0x08A6E290u, 0x70632E72u, "unknown not lowered yet"); return;
L_08A6E2C0:
    aot_gpr[4] = (26940u << 16u);
    // nop
    rt.unsupported(0x08A6E2C8u, 0x4D582F3Cu, "unknown not lowered yet"); return;
L_08A6E2D0:
    rt.unsupported(0x08A6E2D0u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E2DC:
    rt.unsupported(0x08A6E2DCu, 0x43435553u, "unknown not lowered yet"); return;
L_08A6E2E0:
    rt.unsupported(0x08A6E2E0u, 0x00535345u, "special? not lowered yet"); return;
L_08A6E2E4:
    rt.unsupported(0x08A6E2E4u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E2F4:
    rt.unsupported(0x08A6E2F4u, 0x00004445u, "special? not lowered yet"); return;
L_08A6E2F8:
    rt.unsupported(0x08A6E2F8u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E304:
    rt.unsupported(0x08A6E304u, 0x44414552u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A6E30Cu, 0x53545349u, "control flow in delay slot"); return;
L_08A6E310:
    // nop
    goto L_08A6E314;
L_08A6E314:
    rt.unsupported(0x08A6E314u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E324:
    rt.unsupported(0x08A6E324u, 0x0044494Cu, "syscall not lowered yet"); return;
L_08A6E328:
    rt.unsupported(0x08A6E328u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E338:
    rt.unsupported(0x08A6E338u, 0x41455243u, "unknown not lowered yet"); return;
L_08A6E340:
    rt.unsupported(0x08A6E340u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E34C:
    rt.unsupported(0x08A6E34Cu, 0x494C4156u, "cop2/vfpu not lowered yet"); return;
L_08A6E354:
    rt.unsupported(0x08A6E354u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E360:
    if (aot_gpr[18] == aot_gpr[3]) {
    rt.unsupported(0x08A6E364u, 0x45544145u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08A860B4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6E368;
L_08A6E368:
    (void)(0u << (0u & 31u));
    goto L_08A6E36C;
L_08A6E36C:
    rt.unsupported(0x08A6E36Cu, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E37C:
    rt.unsupported(0x08A6E37Cu, 0x00535345u, "special? not lowered yet"); return;
L_08A6E380:
    rt.unsupported(0x08A6E380u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E390:
    rt.unsupported(0x08A6E390u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E3A0:
    rt.unsupported(0x08A6E3A0u, 0x00000054u, "special? not lowered yet"); return;
L_08A6E3A4:
    rt.unsupported(0x08A6E3A4u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E3B4:
    rt.unsupported(0x08A6E3B4u, 0x455F544Eu, "cop1? not lowered yet"); return;
L_08A6E3C0:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6E3C4u, 0x494C4156u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 3u, 0x08A820FCu>(ctx, &aot_mem); return;
    }
    goto L_08A6E3C8;
L_08A6E3C8:
    rt.unsupported(0x08A6E3C8u, 0x49545F44u, "cop2/vfpu not lowered yet"); return;
L_08A6E3D4:
    if (aot_gpr[2] != aot_gpr[19]) {
    rt.unsupported(0x08A6E3D8u, 0x4154535Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 4u, 0x08A82118u>(ctx, &aot_mem); return;
    }
    goto L_08A6E3DC;
L_08A6E3DC:
    rt.unsupported(0x08A6E3DCu, 0x415F5354u, "unknown not lowered yet"); return;
L_08A6E3F0:
    rt.unsupported(0x08A6E3F0u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E404:
    if (aot_gpr[10] != aot_gpr[20]) {
    rt.unsupported(0x08A6E408u, 0x475F4E52u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 69u, 0x08A7F950u>(ctx, &aot_mem); return;
    }
    goto L_08A6E40C;
L_08A6E40C:
    rt.unsupported(0x08A6E410u, 0x54415453u, "control flow in delay slot"); return;
L_08A6E414:
    rt.unsupported(0x08A6E414u, 0x4E495F45u, "unknown not lowered yet"); return;
L_08A6E420:
    rt.unsupported(0x08A6E420u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E42C:
    rt.unsupported(0x08A6E42Cu, 0x0044494Cu, "syscall not lowered yet"); return;
L_08A6E430:
    if (aot_gpr[2] != aot_gpr[19]) {
    rt.unsupported(0x08A6E434u, 0x414C505Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 6u, 0x08A82154u>(ctx, &aot_mem); return;
    }
    goto L_08A6E438;
L_08A6E438:
    rt.unsupported(0x08A6E43Cu, 0x5453494Cu, "control flow in delay slot"); return;
L_08A6E440:
    if (aot_gpr[18] != aot_gpr[14]) {
    rt.unsupported(0x08A6E444u, 0x44494C41u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 65u, 0x08A809C0u>(ctx, &aot_mem); return;
    }
    goto L_08A6E448;
L_08A6E448:
    // nop
    goto L_08A6E44C;
L_08A6E44C:
    rt.unsupported(0x08A6E44Cu, 0x4F4D4552u, "unknown not lowered yet"); return;
L_08A6E458:
    rt.unsupported(0x08A6E458u, 0x494C5F52u, "cop2/vfpu not lowered yet"); return;
L_08A6E468:
    rt.unsupported(0x08A6E468u, 0x454D4954u, "cop1? not lowered yet"); return;
L_08A6E46C:
    rt.unsupported(0x08A6E470u, 0x5649445Fu, "control flow in delay slot"); return;
L_08A6E474:
    rt.unsupported(0x08A6E474u, 0x4F495349u, "unknown not lowered yet"); return;
L_08A6E484:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6E488u, 0x49564944u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 62u, 0x08A839C0u>(ctx, &aot_mem); return;
    }
    goto L_08A6E48C;
L_08A6E48C:
    rt.unsupported(0x08A6E48Cu, 0x4E4F4953u, "unknown not lowered yet"); return;
L_08A6E49C:
    if (aot_gpr[18] == aot_gpr[5]) {
    rt.unsupported(0x08A6E4A0u, 0x41475F54u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 10u, 0x08A7F1ECu>(ctx, &aot_mem); return;
    }
    goto L_08A6E4A4;
L_08A6E4A0:
    rt.unsupported(0x08A6E4A0u, 0x41475F54u, "unknown not lowered yet"); return;
L_08A6E4A4:
    rt.unsupported(0x08A6E4A4u, 0x495F454Du, "cop2/vfpu not lowered yet"); return;
L_08A6E4B4:
    rt.unsupported(0x08A6E4B4u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6E4C8:
    rt.unsupported(0x08A6E4CCu, 0x5F544559u, "control flow in delay slot"); return;
L_08A6E4D0:
    rt.unsupported(0x08A6E4D4u, 0x52465F44u, "control flow in delay slot"); return;
L_08A6E4D8:
    if (aot_gpr[26] == aot_gpr[31]) {
    rt.unsupported(0x08A6E4DCu, 0x45565245u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 65u, 0x08A81A18u>(ctx, &aot_mem); return;
    }
    goto L_08A6E4E0;
L_08A6E4E0:
    (void)(ctx.lo);
    goto L_08A6E4E4;
L_08A6E4E4:
    rt.unsupported(0x08A6E4E8u, 0x08A6E2E4u, "control flow in delay slot"); return;
L_08A6E540:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<47u, 67u, 114u, 1u>();
    rt.unsupported(0x08A6E550u, 0x47657461u, "cop1? not lowered yet"); return;
L_08A6E55C:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6E560u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6E568:
    rt.unsupported(0x08A6E568u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A6E574:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6E578u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A6E580:
    rt.unsupported(0x08A6E580u, 0x74617473u, "unknown not lowered yet"); return;
L_08A6E588:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    jump_target = 0u;
    aot_gpr[8] = (0x08A6E594u);
    rt.unsupported(0x08A6E590u, 0x00006469u, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E594u) goto L_08A6E594;
    return;
L_08A6E590:
    rt.unsupported(0x08A6E590u, 0x00006469u, "special? not lowered yet"); return;
L_08A6E594:
    rt.unsupported(0x08A6E594u, 0x7373656Du, "unknown not lowered yet"); return;
L_08A6E59C:
    rt.unsupported(0x08A6E59Cu, 0x69746361u, "unknown not lowered yet"); return;
L_08A6E5A4:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A6E5AC;
L_08A6E5AC:
    rt.unsupported(0x08A6E5ACu, 0x0000003Bu, "special? not lowered yet"); return;
L_08A6E5B0:
    rt.unsupported(0x08A6E5B0u, 0x20676174u, "unknown not lowered yet"); return;
L_08A6E5CC:
    rt.unsupported(0x08A6E5CCu, 0x70747468u, "unknown not lowered yet"); return;
L_08A6E5D0:
    rt.unsupported(0x08A6E5D0u, 0x00003A73u, "special? not lowered yet"); return;
L_08A6E5D4:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6E5E0u, 0x4256532Fu, "unknown not lowered yet"); return;
L_08A6E5EC:
    rt.unsupported(0x08A6E5ECu, 0x00007070u, "special? not lowered yet"); return;
L_08A6E5F8:
    aot_gpr[12] = (0u | 0u);
    goto L_08A6E5FC;
L_08A6E5FC:
    rt.unsupported(0x08A6E5FCu, 0x72657375u, "unknown not lowered yet"); return;
L_08A6E608:
    rt.unsupported(0x08A6E608u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A6E618:
    ctx.execute_vfpu_vcmp_ct<112u, 112u, 1u, 1u>();
    rt.unsupported(0x08A6E61Cu, 0x74616369u, "unknown not lowered yet"); return;
L_08A6E634:
    rt.unsupported(0x08A6E634u, 0x00676973u, "special? not lowered yet"); return;
L_08A6E638:
    rt.unsupported(0x08A6E638u, 0x00000030u, "special? not lowered yet"); return;
L_08A6E63C:
    rt.unsupported(0x08A6E63Cu, 0x63676973u, "vfpu0 not lowered yet"); return;
L_08A6E648:
    ctx.execute_vfpu_vcmp_ct<105u, 103u, 1u, 3u>();
    rt.unsupported(0x08A6E64Cu, 0x74676E65u, "unknown not lowered yet"); return;
L_08A6E654:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<90u, 111u, 110u, 1u>();
    // nop
    goto L_08A6E660;
L_08A6E660:
    rt.unsupported(0x08A6E660u, 0x676E616Cu, "vfpu1 not lowered yet"); return;
L_08A6E670:
    rt.unsupported(0x08A6E670u, 0x00003D74u, "special? not lowered yet"); return;
L_08A6E688:
    aot_gpr[7] = (0u & 0u);
    aot_gpr[4] = (29295u << 16u);
    aot_gpr[14] = (0u | 0u);
    if (aot_gpr[11] != aot_gpr[19]) {
    aot_gpr[9] = (ctx.lo);
        ctx.pc = 0x08A8B81Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6E69C;
L_08A6E69C:
    aot_gpr[14] = (0u | 0u);
    rt.unsupported(0x08A6E6A4u, 0x00000049u, "control flow in delay slot"); return;
L_08A6E6A8:
    rt.unsupported(0x08A6E6ACu, 0x0000004Cu, "control flow in delay slot"); return;
L_08A6E6B0:
    rt.unsupported(0x08A6E6B0u, 0x45534E55u, "cop1? not lowered yet"); return;
L_08A6E6B8:
    ctx.execute_vfpu_vscl_ct<80u, 97u, 103u, 1u>();
    rt.unsupported(0x08A6E6BCu, 0x61544449u, "vfpu0 not lowered yet"); return;
L_08A6E6C4:
    (void)(0u - 0u);
    goto L_08A6E6C8;
L_08A6E6C8:
    rt.unsupported(0x08A6E6C8u, 0x776F7242u, "unknown not lowered yet"); return;
L_08A6E6D0:
    rt.unsupported(0x08A6E6D0u, 0x425F5653u, "unknown not lowered yet"); return;
L_08A6E6DC:
    rt.unsupported(0x08A6E6DCu, 0x444C4955u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A6E6E0u, 0x4E454449u, "unknown not lowered yet"); return;
L_08A6E6E8:
    rt.unsupported(0x08A6E6E8u, 0x00005245u, "special? not lowered yet"); return;
L_08A6E6EC:
    rt.unsupported(0x08A6E6ECu, 0x636F7673u, "vfpu0 not lowered yet"); return;
L_08A6E710:
    rt.unsupported(0x08A6E710u, 0x4D524F4Eu, "unknown not lowered yet"); return;
L_08A6E718:
    rt.unsupported(0x08A6E718u, 0x4E45504Fu, "unknown not lowered yet"); return;
L_08A6E724:
    if (aot_gpr[26] == aot_gpr[15]) {
    rt.unsupported(0x08A6E728u, 0x4F505F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 53u, 0x08A81834u>(ctx, &aot_mem); return;
    }
    goto L_08A6E72C;
L_08A6E72C:
    aot_gpr[10] = (ctx.hi);
    goto L_08A6E730;
L_08A6E730:
    if (aot_gpr[26] == aot_gpr[15]) {
    rt.unsupported(0x08A6E734u, 0x4F505F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 54u, 0x08A81840u>(ctx, &aot_mem); return;
    }
    goto L_08A6E738;
L_08A6E738:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6E73Cu, 0x4B434142u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 76u, 0x08A83C7Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6E740;
L_08A6E740:
    rt.unsupported(0x08A6E740u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A6E74C:
    if (aot_gpr[26] == aot_gpr[15]) {
    rt.unsupported(0x08A6E750u, 0x4F505F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 56u, 0x08A8185Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6E754;
L_08A6E754:
    rt.unsupported(0x08A6E758u, 0x52464552u, "control flow in delay slot"); return;
L_08A6E75C:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6E760u, 0x4E49414Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 31u, 0x08A83474u>(ctx, &aot_mem); return;
    }
    goto L_08A6E764;
L_08A6E764:
    rt.unsupported(0x08A6E764u, 0x4741505Fu, "cop1? not lowered yet"); return;
L_08A6E76C:
    if (aot_gpr[26] == aot_gpr[15]) {
    rt.unsupported(0x08A6E770u, 0x4F505F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 57u, 0x08A8187Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6E774;
L_08A6E774:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6E778u, 0x4B4E494Cu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 78u, 0x08A83CB8u>(ctx, &aot_mem); return;
    }
    goto L_08A6E77C;
L_08A6E77C:
    rt.unsupported(0x08A6E77Cu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A6E788:
    rt.unsupported(0x08A6E788u, 0x45494C43u, "cop1? not lowered yet"); return;
L_08A6E794:
    rt.unsupported(0x08A6E794u, 0x00544345u, "special? not lowered yet"); return;
L_08A6E798:
    rt.unsupported(0x08A6E79Cu, 0x525F5245u, "control flow in delay slot"); return;
L_08A6E7A0:
    if (aot_gpr[18] == aot_gpr[9]) {
    rt.unsupported(0x08A6E7A4u, 0x00544345u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 61u, 0x08A7F8B8u>(ctx, &aot_mem); return;
    }
    goto L_08A6E7A8;
L_08A6E7A8:
    if (aot_gpr[18] == aot_gpr[6]) {
    rt.unsupported(0x08A6E7ACu, 0x00485345u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 90u, 0x08A7FCF4u>(ctx, &aot_mem); return;
    }
    goto L_08A6E7B0;
L_08A6E7B0:
    rt.unsupported(0x08A6E7B0u, 0x4B434142u, "cop2/vfpu not lowered yet"); return;
L_08A6E7BC:
    rt.unsupported(0x08A6E7BCu, 0x746E6563u, "unknown not lowered yet"); return;
L_08A6E7D8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    if (aot_gpr[2] != aot_gpr[22]) {
    rt.unsupported(0x08A6E7E8u, 0x632E6761u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 33u, 0x08A834A4u>(ctx, &aot_mem); return;
    }
    goto L_08A6E7EC;
L_08A6E7EC:
    rt.unsupported(0x08A6E7ECu, 0x00007070u, "special? not lowered yet"); return;
L_08A6E7F0:
    rt.unsupported(0x08A6E7F0u, 0x20676174u, "unknown not lowered yet"); return;
L_08A6E804:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 115u, 1u>();
    rt.unsupported(0x08A6E80Cu, 0x6E697474u, "vfpu3 not lowered yet"); return;
L_08A6E828:
    rt.unsupported(0x08A6E828u, 0x00007075u, "special? not lowered yet"); return;
L_08A6E82C:
    rt.unsupported(0x08A6E82Cu, 0x6E776F64u, "vfpu3 not lowered yet"); return;
L_08A6E834:
    rt.unsupported(0x08A6E834u, 0x7466656Cu, "unknown not lowered yet"); return;
L_08A6E83C:
    rt.unsupported(0x08A6E83Cu, 0x68676972u, "unknown not lowered yet"); return;
L_08A6E844:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A6E84C;
L_08A6E84C:
    ctx.execute_vfpu_compare3(105u, 110u, 102u, 1u, 6u);
    // nop
    goto L_08A6E854;
L_08A6E854:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A6E858u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A6E860:
    rt.unsupported(0x08A6E860u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A6E878:
    rt.unsupported(0x08A6E878u, 0x69736976u, "unknown not lowered yet"); return;
L_08A6E880:
    rt.unsupported(0x08A6E880u, 0x00000078u, "special? not lowered yet"); return;
L_08A6E884:
    rt.unsupported(0x08A6E884u, 0x00000079u, "special? not lowered yet"); return;
L_08A6E888:
    rt.unsupported(0x08A6E888u, 0x0000007Au, "special? not lowered yet"); return;
L_08A6E88C:
    rt.unsupported(0x08A6E88Cu, 0x74646977u, "unknown not lowered yet"); return;
L_08A6E894:
    rt.unsupported(0x08A6E894u, 0x00000077u, "special? not lowered yet"); return;
L_08A6E898:
    rt.unsupported(0x08A6E898u, 0x67696568u, "vfpu1 not lowered yet"); return;
L_08A6E8A0:
    rt.unsupported(0x08A6E8A0u, 0x00000068u, "special? not lowered yet"); return;
L_08A6E8A4:
    rt.unsupported(0x08A6E8A4u, 0x73616C63u, "unknown not lowered yet"); return;
L_08A6E8AC:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 4u>();
    rt.unsupported(0x08A6E8B0u, 0x00706954u, "special? not lowered yet"); return;
L_08A6E8B4:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 4u>();
    if (aot_gpr[3] != aot_gpr[16]) {
    rt.unsupported(0x08A6E8BCu, 0x614E6761u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A88E0Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6E8C0;
L_08A6E8C0:
    aot_gpr[12] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    goto L_08A6E8C8;
L_08A6E8C8:
    // nop
    goto L_08A6E8CC;
L_08A6E8CC:
    if (static_cast<std::int32_t>(aot_gpr[19]) <= 0) {
    rt.unsupported(0x08A6E8D0u, 0x00656E6Fu, "special? not lowered yet"); return;
        ctx.pc = 0x08A86E08u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6E8D4;
L_08A6E8D0:
    rt.unsupported(0x08A6E8D0u, 0x00656E6Fu, "special? not lowered yet"); return;
L_08A6E8D4:
    // nop
    goto L_08A6E8D8;
L_08A6E8D8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_compare3(47u, 71u, 114u, 1u, 6u);
    rt.unsupported(0x08A6E8E8u, 0x61547075u, "vfpu0 not lowered yet"); return;
L_08A6E8F8:
    if (aot_gpr[10] != aot_gpr[15]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 10u, 0x08A83218u>(ctx, &aot_mem); return;
    }
    goto L_08A6E900;
L_08A6E900:
    rt.unsupported(0x08A6E900u, 0x756F7247u, "unknown not lowered yet"); return;
L_08A6E910:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6E91Cu, 0x7461442Fu, "unknown not lowered yet"); return;
L_08A6E930:
    rt.unsupported(0x08A6E930u, 0x41544144u, "unknown not lowered yet"); return;
L_08A6E938:
    rt.unsupported(0x08A6E938u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6E944:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    goto L_08A6E948;
L_08A6E948:
    // nop
    goto L_08A6E94C;
L_08A6E94C:
    rt.unsupported(0x08A6E94Cu, 0x756C6176u, "unknown not lowered yet"); return;
L_08A6E954:
    rt.unsupported(0x08A6E954u, 0x76726553u, "unknown not lowered yet"); return;
L_08A6E96C:
    rt.unsupported(0x08A6E96Cu, 0x61726170u, "vfpu0 not lowered yet"); return;
L_08A6E980:
    rt.unsupported(0x08A6E980u, 0x61726170u, "vfpu0 not lowered yet"); return;
L_08A6E988:
    rt.unsupported(0x08A6E988u, 0x72745365u, "unknown not lowered yet"); return;
L_08A6E98C:
    rt.unsupported(0x08A6E98Cu, 0x746F4E5Fu, "unknown not lowered yet"); return;
L_08A6E994:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6E99C;
L_08A6E99C:
    rt.unsupported(0x08A6E99Cu, 0x6974706Fu, "unknown not lowered yet"); return;
L_08A6E9A8:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    aot_gpr[12] = (~(aot_gpr[3] | aot_gpr[18]));
    goto L_08A6E9B0;
L_08A6E9B0:
    rt.unsupported(0x08A6E9B0u, 0x616F6C66u, "vfpu0 not lowered yet"); return;
L_08A6E9B8:
    rt.unsupported(0x08A6E9B8u, 0x69727473u, "unknown not lowered yet"); return;
L_08A6E9C0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6E9CCu, 0x4C52552Fu, "unknown not lowered yet"); return;
L_08A6E9E4:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6E9E8u, 0x7473694Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 20u, 0x08A8333Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6E9EC;
L_08A6E9EC:
    // nop
    goto L_08A6E9F0;
L_08A6E9F0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    goto L_08A6E9F8;
L_08A6E9F8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vcmp_ct<67u, 80u, 1u, 15u>();
    rt.unsupported(0x08A6EA08u, 0x6E696775u, "vfpu3 not lowered yet"); return;
L_08A6EA88:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EA94u, 0x676F4C2Fu, "vfpu1 not lowered yet"); return;
L_08A6EAA8:
    rt.unsupported(0x08A6EAA8u, 0x69676F4Cu, "unknown not lowered yet"); return;
L_08A6EAB0:
    rt.unsupported(0x08A6EAB0u, 0x4C5F5053u, "unknown not lowered yet"); return;
L_08A6EABC:
    rt.unsupported(0x08A6EABCu, 0x69746361u, "unknown not lowered yet"); return;
L_08A6EAC4:
    rt.unsupported(0x08A6EAC4u, 0x74617473u, "unknown not lowered yet"); return;
L_08A6EACC:
    rt.unsupported(0x08A6EACCu, 0x00006469u, "special? not lowered yet"); return;
L_08A6EAD0:
    ctx.execute_vfpu_compare3(97u, 99u, 99u, 1u, 6u);
    rt.unsupported(0x08A6EAD4u, 0x49746E75u, "cop2/vfpu not lowered yet"); return;
L_08A6EAD8:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A6EADCu, 0x0064726Fu, "special? not lowered yet"); return;
L_08A6EAE8:
    rt.unsupported(0x08A6EAE8u, 0x72657375u, "unknown not lowered yet"); return;
L_08A6EAF8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EB04u, 0x6369542Fu, "vfpu0 not lowered yet"); return;
L_08A6EB10:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(27765) ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[3] - aot_gpr[16]);
    goto L_08A6EB1C;
L_08A6EB1C:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A6EB20u, 0x74616470u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 48u, 0x08A82C6Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6EB24;
L_08A6EB24:
    rt.unsupported(0x08A6EB24u, 0x63695465u, "vfpu0 not lowered yet"); return;
L_08A6EB2C:
    rt.unsupported(0x08A6EB2Cu, 0x74617473u, "unknown not lowered yet"); return;
L_08A6EB34:
    rt.unsupported(0x08A6EB34u, 0x00006469u, "special? not lowered yet"); return;
L_08A6EB38:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EB44u, 0x4456532Fu, "unsupported CFC1 control register"); return;
    ctx.execute_vfpu_vcmp_ct<119u, 110u, 1u, 15u>();
    rt.unsupported(0x08A6EB4Cu, 0x4D64616Fu, "unknown not lowered yet"); return;
L_08A6EB68:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EB74u, 0x4656532Fu, "cop1? not lowered yet"); return;
L_08A6EB88:
    rt.unsupported(0x08A6EB88u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6EB90:
    rt.unsupported(0x08A6EB90u, 0x75716552u, "unknown not lowered yet"); return;
L_08A6EBA4:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EBACu, 0x46746F4Eu, "cop1? not lowered yet"); return;
L_08A6EBBC:
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6EBC0u, 0x6B6F6F4Cu, "unknown not lowered yet"); return;
L_08A6EBCC:
    rt.unsupported(0x08A6EBCCu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A6EBDC:
    rt.unsupported(0x08A6EBDCu, 0x74697257u, "unknown not lowered yet"); return;
L_08A6EBE8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6EBF0u, 0x00000072u, "special? not lowered yet"); return;
L_08A6EBF4:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A6EBF8u, 0x4574756Fu, "cop1? not lowered yet"); return;
L_08A6EC04:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6EC10u, 0x00000072u, "special? not lowered yet"); return;
L_08A6EC14:
    rt.unsupported(0x08A6EC14u, 0x74726543u, "unknown not lowered yet"); return;
L_08A6EC28:
    rt.unsupported(0x08A6EC28u, 0x7373654Du, "unknown not lowered yet"); return;
L_08A6EC40:
    rt.unsupported(0x08A6EC40u, 0x70736552u, "unknown not lowered yet"); return;
L_08A6EC54:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EC60u, 0x7272452Fu, "unknown not lowered yet"); return;
L_08A6EC74:
    ctx.execute_vfpu_vscl_ct<118u, 105u, 100u, 1u>();
    goto L_08A6EC78;
L_08A6EC78:
    rt.unsupported(0x08A6EC78u, 0x70632E72u, "unknown not lowered yet"); return;
L_08A6EC80:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    goto L_08A6EC84;
L_08A6EC84:
    rt.unsupported(0x08A6EC84u, 0x00000072u, "special? not lowered yet"); return;
L_08A6EC90:
    rt.unsupported(0x08A6EC90u, 0x73616C3Fu, "unknown not lowered yet"); return;
L_08A6ECA0:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    aot_gpr[15] = (aot_gpr[25] < static_cast<std::uint32_t>(14962) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[11] + static_cast<std::uint32_t>(9519));
    rt.unsupported(0x08A6ECACu, 0x00000073u, "special? not lowered yet"); return;
L_08A6ECB0:
    ctx.execute_vfpu_vminmax(46u, 115u, 118u, 1u, false);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6ECB8;
L_08A6ECB8:
    aot_gpr[14] = (0u | 0u);
    goto L_08A6ECBC;
L_08A6ECBC:
    // nop
    goto L_08A6ECC0;
L_08A6ECC0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<47u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6ECD0u, 0x67497964u, "vfpu1 not lowered yet"); return;
L_08A6ECEC:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A6ECF0u, 0x74616470u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 59u, 0x08A82E3Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6ECF4;
L_08A6ECF4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6ECF8u, 0x694C7964u, "unknown not lowered yet"); return;
L_08A6ED00:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A6ED04u, 0x74616470u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 61u, 0x08A82E50u>(ctx, &aot_mem); return;
    }
    goto L_08A6ED08;
L_08A6ED08:
    rt.unsupported(0x08A6ED08u, 0x6E674965u, "vfpu3 not lowered yet"); return;
L_08A6ED14:
    rt.unsupported(0x08A6ED14u, 0x74617473u, "unknown not lowered yet"); return;
L_08A6ED1C:
    rt.unsupported(0x08A6ED1Cu, 0x00006469u, "special? not lowered yet"); return;
L_08A6ED20:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    if (aot_gpr[2] != aot_gpr[22]) {
    rt.unsupported(0x08A6ED30u, 0x694C6761u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 65u, 0x08A839ECu>(ctx, &aot_mem); return;
    }
    goto L_08A6ED34;
L_08A6ED34:
    rt.unsupported(0x08A6ED34u, 0x632E7473u, "vfpu0 not lowered yet"); return;
L_08A6ED40:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6ED4Cu, 0x6150432Fu, "vfpu0 not lowered yet"); return;
L_08A6ED58:
    (void)(0u - 0u);
    goto L_08A6ED5C;
L_08A6ED5C:
    aot_gpr[26] = (aot_gpr[25] < static_cast<std::uint32_t>(29477) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] ^ 9519u);
    rt.unsupported(0x08A6ED64u, 0x73256425u, "unknown not lowered yet"); return;
L_08A6ED70:
    rt.unsupported(0x08A6ED70u, 0x0000003Fu, "special? not lowered yet"); return;
L_08A6ED78:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    // nop
    rt.unsupported(0x08A6ED84u, 0x00454741u, "special? not lowered yet"); return;
L_08A6ED94:
    // nop
    goto L_08A6ED98;
L_08A6ED98:
    rt.unsupported(0x08A6ED98u, 0x74617473u, "unknown not lowered yet"); return;
L_08A6EDA0:
    rt.unsupported(0x08A6EDA0u, 0x61776C61u, "vfpu0 not lowered yet"); return;
L_08A6EDBC:
    if (aot_gpr[19] != aot_gpr[20]) {
    rt.unsupported(0x08A6EDC0u, 0x61697261u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A8830Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6EDC4;
L_08A6EDC4:
    if (aot_gpr[3] != aot_gpr[5]) {
    aot_gpr[12] = (0u + 0u);
        ctx.pc = 0x08A89F50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6EDCC;
L_08A6EDCC:
    rt.unsupported(0x08A6EDCCu, 0x4D56533Cu, "unknown not lowered yet"); return;
L_08A6EDD8:
    rt.unsupported(0x08A6EDD8u, 0x20544345u, "unknown not lowered yet"); return;
L_08A6EE10:
    rt.unsupported(0x08A6EE10u, 0x22544345u, "unknown not lowered yet"); return;
L_08A6EE80:
    ctx.execute_vfpu_vminmax(116u, 111u, 112u, 1u, false);
    rt.unsupported(0x08A6EE84u, 0x4774736Fu, "cop1? not lowered yet"); return;
L_08A6EE90:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_compare3(47u, 71u, 114u, 1u, 6u);
    goto L_08A6EEA0;
L_08A6EEA0:
    rt.unsupported(0x08A6EEA0u, 0x61547075u, "vfpu0 not lowered yet"); return;
L_08A6EEAC:
    rt.unsupported(0x08A6EEACu, 0x756F7247u, "unknown not lowered yet"); return;
L_08A6EEB8:
    rt.unsupported(0x08A6EEB8u, 0x4C494843u, "unknown not lowered yet"); return;
L_08A6EEC0:
    rt.unsupported(0x08A6EEC0u, 0x4E676174u, "unknown not lowered yet"); return;
L_08A6EEC8:
    rt.unsupported(0x08A6EEC8u, 0x00495255u, "special? not lowered yet"); return;
L_08A6EECC:
    rt.unsupported(0x08A6EECCu, 0x41544144u, "unknown not lowered yet"); return;
L_08A6EED4:
    rt.unsupported(0x08A6EED4u, 0x454C4946u, "cop1? not lowered yet"); return;
L_08A6EEDC:
    rt.unsupported(0x08A6EEE0u, 0x08A6EECCu, "control flow in delay slot"); return;
L_08A6EEE8:
    rt.unsupported(0x08A6EEE8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6EEF4:
    rt.unsupported(0x08A6EEF4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A6EEFC:
    rt.unsupported(0x08A6EEFCu, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A6EF0C:
    rt.unsupported(0x08A6EF0Cu, 0x00637273u, "special? not lowered yet"); return;
L_08A6EF10:
    if (aot_gpr[2] != aot_gpr[13]) {
    rt.unsupported(0x08A6EF14u, 0x00657079u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 51u, 0x08A83824u>(ctx, &aot_mem); return;
    }
    goto L_08A6EF18;
L_08A6EF18:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A6EF1Cu, 0x45505954u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 52u, 0x08A8382Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6EF20;
L_08A6EF20:
    if (aot_gpr[26] == aot_gpr[14]) {
    rt.unsupported(0x08A6EF24u, 0x00005445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 32u, 0x08A844A0u>(ctx, &aot_mem); return;
    }
    goto L_08A6EF28;
L_08A6EF28:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<112u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6EF2Cu, 0x49746375u, "cop2/vfpu not lowered yet"); return;
L_08A6EF34:
    rt.unsupported(0x08A6EF34u, 0x444F5250u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A6EF3Cu, 0x555F4449u, "control flow in delay slot"); return;
L_08A6EF40:
    if (aot_gpr[2] != aot_gpr[5]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 76u, 0x08A83C7Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6EF48;
L_08A6EF48:
    ctx.execute_vfpu_vscl_ct<100u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A6EF50u, 0x0000006Eu, "special? not lowered yet"); return;
L_08A6EF54:
    ctx.execute_vfpu_compare3(117u, 112u, 108u, 1u, 6u);
    aot_gpr[12] = (0u + 0u);
    goto L_08A6EF5C;
L_08A6EF5C:
    ctx.execute_vfpu_compare3(97u, 108u, 108u, 1u, 6u);
    rt.unsupported(0x08A6EF60u, 0x76614E77u, "unknown not lowered yet"); return;
L_08A6EF6C:
    rt.unsupported(0x08A6EF6Cu, 0x756C6176u, "unknown not lowered yet"); return;
L_08A6EF74:
    rt.unsupported(0x08A6EF74u, 0x76726553u, "unknown not lowered yet"); return;
L_08A6EF8C:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6EF98u, 0x7461442Fu, "unknown not lowered yet"); return;
L_08A6EFA8:
    rt.unsupported(0x08A6EFA8u, 0x61726170u, "vfpu0 not lowered yet"); return;
L_08A6EFBC:
    rt.unsupported(0x08A6EFBCu, 0x61726170u, "vfpu0 not lowered yet"); return;
L_08A6EFD0:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A6EFD8;
L_08A6EFD8:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6EFE0;
L_08A6EFE0:
    rt.unsupported(0x08A6EFE0u, 0x6974706Fu, "unknown not lowered yet"); return;
L_08A6EFEC:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    aot_gpr[12] = (~(aot_gpr[3] | aot_gpr[18]));
    goto L_08A6EFF4;
L_08A6EFF4:
    rt.unsupported(0x08A6EFF4u, 0x616F6C66u, "vfpu0 not lowered yet"); return;
L_08A6EFFC:
    rt.unsupported(0x08A6EFFCu, 0x69727473u, "unknown not lowered yet"); return;
}

void recomp_unit_0618(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0618_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_618(Runtime &runtime) {
    runtime.register_generated_unit(618u, 0x08A6E000u, 4096u, &recomp_unit_0618, &recomp_unit_0618_entry);
    runtime.register_function(0x08A6E000u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E014u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E02Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E048u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E060u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E098u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E0B0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E0C0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E124u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E12Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E130u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E160u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E170u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E180u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E184u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E190u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E194u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E1A0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E1ACu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E220u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E234u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E238u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E250u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E260u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E270u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E280u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E290u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2C0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2D0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2DCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2E0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2E4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2F4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E2F8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E304u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E310u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E314u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E324u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E328u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E338u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E340u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E34Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E354u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E360u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E368u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E36Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E37Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E380u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E390u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3A0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3A4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3B4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3C0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3C8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3D4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3DCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E3F0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E404u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E40Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E414u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E420u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E42Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E430u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E438u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E440u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E448u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E44Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E458u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E468u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E46Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E474u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E484u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E48Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E49Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4A0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4A4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4B4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4C8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4D0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4D8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4E0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E4E4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E540u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E55Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E568u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E574u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E580u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E588u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E590u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E594u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E59Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5A4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5ACu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5B0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5CCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5D0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5D4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5ECu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5F8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E5FCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E608u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E618u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E634u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E638u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E63Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E648u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E654u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E660u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E670u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E688u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E69Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6A8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6B0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6B8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6C4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6C8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6D0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6DCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6E8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E6ECu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E710u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E718u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E724u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E72Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E730u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E738u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E740u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E74Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E754u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E75Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E764u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E76Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E774u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E77Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E788u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E794u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E798u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7A0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7A8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7B0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7BCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7D8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7ECu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E7F0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E804u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E828u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E82Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E834u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E83Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E844u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E84Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E854u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E860u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E878u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E880u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E884u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E888u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E88Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E894u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E898u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8A0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8A4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8ACu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8B4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8C0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8C8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8CCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8D0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8D4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8D8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E8F8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E900u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E910u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E930u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E938u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E944u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E948u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E94Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E954u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E96Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E980u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E988u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E98Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E994u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E99Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9A8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9B0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9B8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9C0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9E4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9ECu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9F0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6E9F8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EA88u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAA8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAB0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EABCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAC4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EACCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAD0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAD8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAE8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EAF8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB10u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB1Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB24u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB2Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB34u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB38u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB68u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB88u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EB90u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EBA4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EBBCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EBCCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EBDCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EBE8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EBF4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC04u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC14u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC28u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC40u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC54u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC74u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC78u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC80u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC84u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EC90u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECA0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECB0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECB8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECBCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECC0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECECu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ECF4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED00u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED08u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED14u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED1Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED20u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED34u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED40u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED58u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED5Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED70u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED78u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED94u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6ED98u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EDA0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EDBCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EDC4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EDCCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EDD8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EE10u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EE80u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EE90u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEA0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEACu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEB8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEC0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEC8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EECCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EED4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEDCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEE8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEF4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EEFCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF0Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF10u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF18u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF20u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF28u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF34u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF40u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF48u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF54u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF5Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF6Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF74u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EF8Cu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFA8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFBCu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFD0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFD8u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFE0u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFECu, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFF4u, &recomp_unit_0618, "recomp_unit_0618");
    runtime.register_function(0x08A6EFFCu, &recomp_unit_0618, "recomp_unit_0618");
}
} // namespace psprecomp
