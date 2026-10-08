#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0619[999] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 20, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 27, 0,
    28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 35, 0, 36, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 40, 0, 0, 41, 42, 0, 43, 44, 45, 46, 47, 0, 48, 49, 0, 0, 50, 0, 51, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 61, 0,
    0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 93, 94, 0, 0, 0, 0, 0, 0, 95,
    0, 96, 0, 97, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 107, 108, 0, 109, 0,
    0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 125, 0, 0, 0, 126, 0, 127, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132,
    0, 0, 133, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 155, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 168, 0, 169, 170, 0, 0, 0,
    0, 0, 171, 0, 0, 172, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 215,
    0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 223, 0,
    0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 233, 0, 0,
    0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 243, 244,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 250, 0, 0, 0, 251,
    0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 259, 260, 0, 0, 261, 0, 0,
    262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 268, 0, 269, 270, 0, 271, 272, 0, 273, 0, 274, 0, 275, 276, 0,
    277, 278, 0, 279, 280, 0, 281, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 290, 0, 291, 292, 0, 293, 294, 0, 295, 296,
    0, 297, 298, 0, 299, 0, 300,
};
void recomp_unit_0619_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A6F000u;
        entry_id = (entry_delta < 3996u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0619[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6F000;
    case 2u: goto L_08A6F008;
    case 3u: goto L_08A6F028;
    case 4u: goto L_08A6F030;
    case 5u: goto L_08A6F038;
    case 6u: goto L_08A6F040;
    case 7u: goto L_08A6F068;
    case 8u: goto L_08A6F070;
    case 9u: goto L_08A6F078;
    case 10u: goto L_08A6F0A0;
    case 11u: goto L_08A6F0AC;
    case 12u: goto L_08A6F0C0;
    case 13u: goto L_08A6F0C8;
    case 14u: goto L_08A6F118;
    case 15u: goto L_08A6F138;
    case 16u: goto L_08A6F140;
    case 17u: goto L_08A6F158;
    case 18u: goto L_08A6F164;
    case 19u: goto L_08A6F16C;
    case 20u: goto L_08A6F170;
    case 21u: goto L_08A6F190;
    case 22u: goto L_08A6F198;
    case 23u: goto L_08A6F1C0;
    case 24u: goto L_08A6F1C8;
    case 25u: goto L_08A6F1EC;
    case 26u: goto L_08A6F1F4;
    case 27u: goto L_08A6F1F8;
    case 28u: goto L_08A6F200;
    case 29u: goto L_08A6F208;
    case 30u: goto L_08A6F214;
    case 31u: goto L_08A6F220;
    case 32u: goto L_08A6F244;
    case 33u: goto L_08A6F250;
    case 34u: goto L_08A6F268;
    case 35u: goto L_08A6F26C;
    case 36u: goto L_08A6F274;
    case 37u: goto L_08A6F280;
    case 38u: goto L_08A6F2A0;
    case 39u: goto L_08A6F2A8;
    case 40u: goto L_08A6F2AC;
    case 41u: goto L_08A6F2B8;
    case 42u: goto L_08A6F2BC;
    case 43u: goto L_08A6F2C4;
    case 44u: goto L_08A6F2C8;
    case 45u: goto L_08A6F2CC;
    case 46u: goto L_08A6F2D0;
    case 47u: goto L_08A6F2D4;
    case 48u: goto L_08A6F2DC;
    case 49u: goto L_08A6F2E0;
    case 50u: goto L_08A6F2EC;
    case 51u: goto L_08A6F2F4;
    case 52u: goto L_08A6F2F8;
    case 53u: goto L_08A6F320;
    case 54u: goto L_08A6F328;
    case 55u: goto L_08A6F330;
    case 56u: goto L_08A6F338;
    case 57u: goto L_08A6F340;
    case 58u: goto L_08A6F344;
    case 59u: goto L_08A6F364;
    case 60u: goto L_08A6F374;
    case 61u: goto L_08A6F378;
    case 62u: goto L_08A6F394;
    case 63u: goto L_08A6F39C;
    case 64u: goto L_08A6F3A4;
    case 65u: goto L_08A6F3A8;
    case 66u: goto L_08A6F3CC;
    case 67u: goto L_08A6F3D4;
    case 68u: goto L_08A6F3DC;
    case 69u: goto L_08A6F3E8;
    case 70u: goto L_08A6F410;
    case 71u: goto L_08A6F418;
    case 72u: goto L_08A6F420;
    case 73u: goto L_08A6F430;
    case 74u: goto L_08A6F44C;
    case 75u: goto L_08A6F458;
    case 76u: goto L_08A6F460;
    case 77u: goto L_08A6F468;
    case 78u: goto L_08A6F470;
    case 79u: goto L_08A6F498;
    case 80u: goto L_08A6F4A0;
    case 81u: goto L_08A6F4A8;
    case 82u: goto L_08A6F4B4;
    case 83u: goto L_08A6F4B8;
    case 84u: goto L_08A6F4D8;
    case 85u: goto L_08A6F4E8;
    case 86u: goto L_08A6F510;
    case 87u: goto L_08A6F518;
    case 88u: goto L_08A6F520;
    case 89u: goto L_08A6F528;
    case 90u: goto L_08A6F540;
    case 91u: goto L_08A6F54C;
    case 92u: goto L_08A6F558;
    case 93u: goto L_08A6F55C;
    case 94u: goto L_08A6F560;
    case 95u: goto L_08A6F57C;
    case 96u: goto L_08A6F584;
    case 97u: goto L_08A6F58C;
    case 98u: goto L_08A6F590;
    case 99u: goto L_08A6F598;
    case 100u: goto L_08A6F5A0;
    case 101u: goto L_08A6F5A8;
    case 102u: goto L_08A6F5BC;
    case 103u: goto L_08A6F5C8;
    case 104u: goto L_08A6F5D4;
    case 105u: goto L_08A6F5DC;
    case 106u: goto L_08A6F5E4;
    case 107u: goto L_08A6F5EC;
    case 108u: goto L_08A6F5F0;
    case 109u: goto L_08A6F5F8;
    case 110u: goto L_08A6F604;
    case 111u: goto L_08A6F60C;
    case 112u: goto L_08A6F614;
    case 113u: goto L_08A6F61C;
    case 114u: goto L_08A6F628;
    case 115u: goto L_08A6F634;
    case 116u: goto L_08A6F648;
    case 117u: goto L_08A6F65C;
    case 118u: goto L_08A6F668;
    case 119u: goto L_08A6F67C;
    case 120u: goto L_08A6F688;
    case 121u: goto L_08A6F690;
    case 122u: goto L_08A6F698;
    case 123u: goto L_08A6F6A0;
    case 124u: goto L_08A6F6A8;
    case 125u: goto L_08A6F6AC;
    case 126u: goto L_08A6F6BC;
    case 127u: goto L_08A6F6C4;
    case 128u: goto L_08A6F6C8;
    case 129u: goto L_08A6F6D0;
    case 130u: goto L_08A6F6D8;
    case 131u: goto L_08A6F6EC;
    case 132u: goto L_08A6F6FC;
    case 133u: goto L_08A6F708;
    case 134u: goto L_08A6F70C;
    case 135u: goto L_08A6F71C;
    case 136u: goto L_08A6F728;
    case 137u: goto L_08A6F738;
    case 138u: goto L_08A6F748;
    case 139u: goto L_08A6F758;
    case 140u: goto L_08A6F770;
    case 141u: goto L_08A6F788;
    case 142u: goto L_08A6F790;
    case 143u: goto L_08A6F7A0;
    case 144u: goto L_08A6F7AC;
    case 145u: goto L_08A6F7BC;
    case 146u: goto L_08A6F7CC;
    case 147u: goto L_08A6F7DC;
    case 148u: goto L_08A6F7F8;
    case 149u: goto L_08A6F814;
    case 150u: goto L_08A6F820;
    case 151u: goto L_08A6F830;
    case 152u: goto L_08A6F848;
    case 153u: goto L_08A6F864;
    case 154u: goto L_08A6F870;
    case 155u: goto L_08A6F874;
    case 156u: goto L_08A6F880;
    case 157u: goto L_08A6F8A0;
    case 158u: goto L_08A6F8A8;
    case 159u: goto L_08A6F8C8;
    case 160u: goto L_08A6F8D0;
    case 161u: goto L_08A6F8F8;
    case 162u: goto L_08A6F900;
    case 163u: goto L_08A6F908;
    case 164u: goto L_08A6F910;
    case 165u: goto L_08A6F934;
    case 166u: goto L_08A6F940;
    case 167u: goto L_08A6F960;
    case 168u: goto L_08A6F964;
    case 169u: goto L_08A6F96C;
    case 170u: goto L_08A6F970;
    case 171u: goto L_08A6F988;
    case 172u: goto L_08A6F994;
    case 173u: goto L_08A6F998;
    case 174u: goto L_08A6F9A0;
    case 175u: goto L_08A6F9B0;
    case 176u: goto L_08A6F9D0;
    case 177u: goto L_08A6F9DC;
    case 178u: goto L_08A6F9E8;
    case 179u: goto L_08A6F9F0;
    case 180u: goto L_08A6FA08;
    case 181u: goto L_08A6FA14;
    case 182u: goto L_08A6FA20;
    case 183u: goto L_08A6FA28;
    case 184u: goto L_08A6FA30;
    case 185u: goto L_08A6FA3C;
    case 186u: goto L_08A6FA4C;
    case 187u: goto L_08A6FA54;
    case 188u: goto L_08A6FA60;
    case 189u: goto L_08A6FA68;
    case 190u: goto L_08A6FA90;
    case 191u: goto L_08A6FA98;
    case 192u: goto L_08A6FAA0;
    case 193u: goto L_08A6FAB0;
    case 194u: goto L_08A6FABC;
    case 195u: goto L_08A6FAC4;
    case 196u: goto L_08A6FACC;
    case 197u: goto L_08A6FAEC;
    case 198u: goto L_08A6FAF4;
    case 199u: goto L_08A6FB04;
    case 200u: goto L_08A6FB18;
    case 201u: goto L_08A6FB24;
    case 202u: goto L_08A6FB30;
    case 203u: goto L_08A6FB40;
    case 204u: goto L_08A6FB60;
    case 205u: goto L_08A6FB6C;
    case 206u: goto L_08A6FB78;
    case 207u: goto L_08A6FB80;
    case 208u: goto L_08A6FBAC;
    case 209u: goto L_08A6FBB4;
    case 210u: goto L_08A6FBC0;
    case 211u: goto L_08A6FBC4;
    case 212u: goto L_08A6FBD4;
    case 213u: goto L_08A6FBE0;
    case 214u: goto L_08A6FBF8;
    case 215u: goto L_08A6FBFC;
    case 216u: goto L_08A6FC10;
    case 217u: goto L_08A6FC20;
    case 218u: goto L_08A6FC28;
    case 219u: goto L_08A6FC4C;
    case 220u: goto L_08A6FC54;
    case 221u: goto L_08A6FC64;
    case 222u: goto L_08A6FC74;
    case 223u: goto L_08A6FC78;
    case 224u: goto L_08A6FC84;
    case 225u: goto L_08A6FC90;
    case 226u: goto L_08A6FCA0;
    case 227u: goto L_08A6FCB0;
    case 228u: goto L_08A6FCB8;
    case 229u: goto L_08A6FCBC;
    case 230u: goto L_08A6FCC8;
    case 231u: goto L_08A6FCE4;
    case 232u: goto L_08A6FCE8;
    case 233u: goto L_08A6FCF4;
    case 234u: goto L_08A6FD04;
    case 235u: goto L_08A6FD0C;
    case 236u: goto L_08A6FD18;
    case 237u: goto L_08A6FD34;
    case 238u: goto L_08A6FD40;
    case 239u: goto L_08A6FD4C;
    case 240u: goto L_08A6FD5C;
    case 241u: goto L_08A6FD64;
    case 242u: goto L_08A6FD6C;
    case 243u: goto L_08A6FD78;
    case 244u: goto L_08A6FD7C;
    case 245u: goto L_08A6FD88;
    case 246u: goto L_08A6FDA0;
    case 247u: goto L_08A6FDB8;
    case 248u: goto L_08A6FDD0;
    case 249u: goto L_08A6FDE8;
    case 250u: goto L_08A6FDEC;
    case 251u: goto L_08A6FDFC;
    case 252u: goto L_08A6FE0C;
    case 253u: goto L_08A6FE1C;
    case 254u: goto L_08A6FE30;
    case 255u: goto L_08A6FE3C;
    case 256u: goto L_08A6FE4C;
    case 257u: goto L_08A6FE58;
    case 258u: goto L_08A6FE60;
    case 259u: goto L_08A6FE64;
    case 260u: goto L_08A6FE68;
    case 261u: goto L_08A6FE74;
    case 262u: goto L_08A6FE80;
    case 263u: goto L_08A6FE8C;
    case 264u: goto L_08A6FE98;
    case 265u: goto L_08A6FEA8;
    case 266u: goto L_08A6FEB8;
    case 267u: goto L_08A6FEC0;
    case 268u: goto L_08A6FEC4;
    case 269u: goto L_08A6FECC;
    case 270u: goto L_08A6FED0;
    case 271u: goto L_08A6FED8;
    case 272u: goto L_08A6FEDC;
    case 273u: goto L_08A6FEE4;
    case 274u: goto L_08A6FEEC;
    case 275u: goto L_08A6FEF4;
    case 276u: goto L_08A6FEF8;
    case 277u: goto L_08A6FF00;
    case 278u: goto L_08A6FF04;
    case 279u: goto L_08A6FF0C;
    case 280u: goto L_08A6FF10;
    case 281u: goto L_08A6FF18;
    case 282u: goto L_08A6FF1C;
    case 283u: goto L_08A6FF24;
    case 284u: goto L_08A6FF2C;
    case 285u: goto L_08A6FF34;
    case 286u: goto L_08A6FF3C;
    case 287u: goto L_08A6FF44;
    case 288u: goto L_08A6FF4C;
    case 289u: goto L_08A6FF54;
    case 290u: goto L_08A6FF58;
    case 291u: goto L_08A6FF60;
    case 292u: goto L_08A6FF64;
    case 293u: goto L_08A6FF6C;
    case 294u: goto L_08A6FF70;
    case 295u: goto L_08A6FF78;
    case 296u: goto L_08A6FF7C;
    case 297u: goto L_08A6FF84;
    case 298u: goto L_08A6FF88;
    case 299u: goto L_08A6FF90;
    case 300u: goto L_08A6FF98;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6F000:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    // nop
    goto L_08A6F008;
L_08A6F008:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F014u, 0x776F442Fu, "unknown not lowered yet"); return;
L_08A6F028:
    rt.unsupported(0x08A6F028u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F030:
    rt.unsupported(0x08A6F030u, 0x4C4D5653u, "unknown not lowered yet"); return;
L_08A6F038:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    goto L_08A6F040;
L_08A6F040:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F04Cu, 0x6761502Fu, "vfpu1 not lowered yet"); return;
L_08A6F068:
    if (aot_gpr[18] != aot_gpr[19]) {
    rt.unsupported(0x08A6F06Cu, 0x003E4C4Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 156u, 0x08A7AD5Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6F070;
L_08A6F070:
    rt.unsupported(0x08A6F070u, 0x4D582F3Cu, "unknown not lowered yet"); return;
L_08A6F078:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F084u, 0x616D492Fu, "vfpu0 not lowered yet"); return;
L_08A6F0A0:
    aot_gpr[26] = (aot_gpr[25] < static_cast<std::uint32_t>(29477) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] ^ 9519u);
    aot_gpr[12] = (0u | 0u);
    goto L_08A6F0AC;
L_08A6F0AC:
    aot_gpr[26] = (aot_gpr[25] < static_cast<std::uint32_t>(29477) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] ^ 9519u);
    rt.unsupported(0x08A6F0B4u, 0x73256425u, "unknown not lowered yet"); return;
L_08A6F0C0:
    rt.unsupported(0x08A6F0C0u, 0x0000003Fu, "special? not lowered yet"); return;
L_08A6F0C8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F0D4u, 0x4D56532Fu, "unknown not lowered yet"); return;
L_08A6F118:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F124u, 0x7865542Fu, "unknown not lowered yet"); return;
L_08A6F138:
    if (aot_gpr[2] != aot_gpr[24]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 38u, 0x08A8068Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6F140;
L_08A6F140:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F14Cu, 0x7475422Fu, "unknown not lowered yet"); return;
L_08A6F158:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6F15Cu, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F164:
    if (aot_gpr[2] != aot_gpr[20]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 44u, 0x08A84670u>(ctx, &aot_mem); return;
    }
    goto L_08A6F16C;
L_08A6F16C:
    // nop
    goto L_08A6F170;
L_08A6F170:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F17Cu, 0x6E694C2Fu, "vfpu3 not lowered yet"); return;
L_08A6F190:
    rt.unsupported(0x08A6F190u, 0x454E494Cu, "cop1? not lowered yet"); return;
L_08A6F198:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F1A4u, 0x7465532Fu, "unknown not lowered yet"); return;
L_08A6F1C0:
    ctx.lo = aot_gpr[2];
    // nop
    goto L_08A6F1C8;
L_08A6F1C8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F1D4u, 0x6365522Fu, "vfpu0 not lowered yet"); return;
L_08A6F1EC:
    if (aot_gpr[2] != aot_gpr[3]) {
    rt.unsupported(0x08A6F1F0u, 0x4C474E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 45u, 0x08A80738u>(ctx, &aot_mem); return;
    }
    goto L_08A6F1F4;
L_08A6F1F4:
    rt.unsupported(0x08A6F1F4u, 0x00000045u, "special? not lowered yet"); return;
L_08A6F1F8:
    if (static_cast<std::int32_t>(aot_gpr[3]) <= 0) {
    // nop
        ctx.pc = 0x08A8AB90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F200;
L_08A6F200:
    if (static_cast<std::int32_t>(aot_gpr[11]) <= 0) {
    // nop
        ctx.pc = 0x08A8AB98u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F208;
L_08A6F208:
    rt.unsupported(0x08A6F208u, 0x63696874u, "vfpu0 not lowered yet"); return;
L_08A6F214:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 110u, 1u>();
    rt.unsupported(0x08A6F218u, 0x00676154u, "special? not lowered yet"); return;
L_08A6F220:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F22Cu, 0x6975512Fu, "unknown not lowered yet"); return;
L_08A6F244:
    rt.unsupported(0x08A6F244u, 0x43495551u, "unknown not lowered yet"); return;
L_08A6F250:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    if (aot_gpr[3] != aot_gpr[20]) {
    ctx.execute_vfpu_compare3(97u, 103u, 77u, 1u, 6u);
        ctx.pc = 0x08A87FF8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F268;
L_08A6F268:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    goto L_08A6F26C;
L_08A6F26C:
    rt.unsupported(0x08A6F26Cu, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F274:
    rt.unsupported(0x08A6F274u, 0x454C4553u, "cop1? not lowered yet"); return;
L_08A6F280:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F28Cu, 0x616D492Fu, "vfpu0 not lowered yet"); return;
L_08A6F2A0:
    rt.unsupported(0x08A6F2A0u, 0x47414D49u, "cop1? not lowered yet"); return;
L_08A6F2A8:
    // nop
    goto L_08A6F2AC;
L_08A6F2AC:
    rt.unsupported(0x08A6F2ACu, 0x67616D49u, "vfpu1 not lowered yet"); return;
L_08A6F2B8:
    rt.unsupported(0x08A6F2B8u, 0x00006469u, "special? not lowered yet"); return;
L_08A6F2BC:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    goto L_08A6F2C4;
L_08A6F2C4:
    rt.unsupported(0x08A6F2C4u, 0x00003075u, "special? not lowered yet"); return;
L_08A6F2C8:
    rt.unsupported(0x08A6F2C8u, 0x00003076u, "special? not lowered yet"); return;
L_08A6F2CC:
    rt.unsupported(0x08A6F2CCu, 0x00003175u, "special? not lowered yet"); return;
L_08A6F2D0:
    rt.unsupported(0x08A6F2D0u, 0x00003176u, "special? not lowered yet"); return;
L_08A6F2D4:
    rt.unsupported(0x08A6F2D4u, 0x68706C61u, "unknown not lowered yet"); return;
L_08A6F2DC:
    rt.unsupported(0x08A6F2DCu, 0x00637273u, "special? not lowered yet"); return;
L_08A6F2E0:
    rt.unsupported(0x08A6F2E0u, 0x6E776F64u, "vfpu3 not lowered yet"); return;
L_08A6F2EC:
    rt.unsupported(0x08A6F2ECu, 0x74736F70u, "unknown not lowered yet"); return;
L_08A6F2F4:
    rt.unsupported(0x08A6F2F4u, 0x00657270u, "special? not lowered yet"); return;
L_08A6F2F8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F304u, 0x6174532Fu, "vfpu0 not lowered yet"); return;
L_08A6F320:
    if (aot_gpr[2] != aot_gpr[1]) {
    rt.unsupported(0x08A6F324u, 0x4D494349u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 31u, 0x08A84470u>(ctx, &aot_mem); return;
    }
    goto L_08A6F328;
L_08A6F328:
    rt.unsupported(0x08A6F328u, 0x00454741u, "special? not lowered yet"); return;
L_08A6F330:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 100u, 1u>();
    rt.unsupported(0x08A6F334u, 0x00000078u, "special? not lowered yet"); return;
L_08A6F338:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    goto L_08A6F340;
L_08A6F340:
    // nop
    goto L_08A6F344;
L_08A6F344:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F350u, 0x6174532Fu, "vfpu0 not lowered yet"); return;
L_08A6F364:
    rt.unsupported(0x08A6F364u, 0x74617453u, "unknown not lowered yet"); return;
L_08A6F374:
    // nop
    goto L_08A6F378;
L_08A6F378:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F384u, 0x7865542Fu, "unknown not lowered yet"); return;
L_08A6F394:
    rt.unsupported(0x08A6F394u, 0x632E656Cu, "vfpu0 not lowered yet"); return;
L_08A6F39C:
    if (aot_gpr[2] != aot_gpr[24]) {
    rt.unsupported(0x08A6F3A0u, 0x41455241u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 57u, 0x08A808F0u>(ctx, &aot_mem); return;
    }
    goto L_08A6F3A4;
L_08A6F3A4:
    // nop
    goto L_08A6F3A8;
L_08A6F3A8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F3B4u, 0x7865542Fu, "unknown not lowered yet"); return;
L_08A6F3CC:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6F3D4;
L_08A6F3D4:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6F3D8u, 0x00000054u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 50u, 0x08A82CFCu>(ctx, &aot_mem); return;
    }
    goto L_08A6F3DC;
L_08A6F3DC:
    rt.unsupported(0x08A6F3DCu, 0x74786574u, "unknown not lowered yet"); return;
L_08A6F3E8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F3F4u, 0x7361502Fu, "unknown not lowered yet"); return;
L_08A6F410:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6F418;
L_08A6F418:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6F41Cu, 0x00000054u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 52u, 0x08A82D40u>(ctx, &aot_mem); return;
    }
    goto L_08A6F420;
L_08A6F420:
    rt.unsupported(0x08A6F420u, 0x73736170u, "unknown not lowered yet"); return;
L_08A6F430:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<47u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F440u, 0x6E496F69u, "vfpu3 not lowered yet"); return;
L_08A6F44C:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6F450u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F458:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6F460;
L_08A6F460:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6F464u, 0x00000054u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 54u, 0x08A82D88u>(ctx, &aot_mem); return;
    }
    goto L_08A6F468;
L_08A6F468:
    rt.unsupported(0x08A6F468u, 0x69646172u, "unknown not lowered yet"); return;
L_08A6F470:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<47u, 67u, 104u, 1u>();
    ctx.execute_vfpu_compare3(99u, 107u, 98u, 1u, 6u);
    rt.unsupported(0x08A6F484u, 0x706E4978u, "unknown not lowered yet"); return;
L_08A6F498:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6F4A0;
L_08A6F4A0:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6F4A4u, 0x00000054u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 56u, 0x08A82DC8u>(ctx, &aot_mem); return;
    }
    goto L_08A6F4A8;
L_08A6F4A8:
    rt.unsupported(0x08A6F4A8u, 0x63656863u, "vfpu0 not lowered yet"); return;
L_08A6F4B4:
    // nop
    goto L_08A6F4B8;
L_08A6F4B8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F4C4u, 0x726F462Fu, "unknown not lowered yet"); return;
L_08A6F4D8:
    rt.unsupported(0x08A6F4D8u, 0x4D524F46u, "unknown not lowered yet"); return;
L_08A6F4E8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F4F4u, 0x6275532Fu, "vfpu0 not lowered yet"); return;
L_08A6F510:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6F518;
L_08A6F518:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6F51Cu, 0x00000054u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 60u, 0x08A82E40u>(ctx, &aot_mem); return;
    }
    goto L_08A6F520;
L_08A6F520:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A6F524u, 0x00007469u, "special? not lowered yet"); return;
L_08A6F528:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F534u, 0x676F4C2Fu, "vfpu1 not lowered yet"); return;
L_08A6F540:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6F544u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F54C:
    rt.unsupported(0x08A6F54Cu, 0x4F474F4Cu, "unknown not lowered yet"); return;
L_08A6F558:
    // nop
    goto L_08A6F55C;
L_08A6F55C:
    (void)(0u - 0u);
    goto L_08A6F560;
L_08A6F560:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F56Cu, 0x6972472Fu, "unknown not lowered yet"); return;
L_08A6F57C:
    if (aot_gpr[26] == aot_gpr[23]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 18u, 0x08A832C8u>(ctx, &aot_mem); return;
    }
    goto L_08A6F584;
L_08A6F584:
    if (aot_gpr[10] != aot_gpr[12]) {
    rt.unsupported(0x08A6F588u, 0x00534E4Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 16u, 0x08A83294u>(ctx, &aot_mem); return;
    }
    goto L_08A6F58C;
L_08A6F58C:
    aot_gpr[9] = (ctx.lo);
    goto L_08A6F590;
L_08A6F590:
    rt.unsupported(0x08A6F594u, 0x524F4345u, "control flow in delay slot"); return;
L_08A6F598:
    rt.unsupported(0x08A6F598u, 0x4F525F44u, "unknown not lowered yet"); return;
L_08A6F5A0:
    if (aot_gpr[10] != aot_gpr[12]) {
    rt.unsupported(0x08A6F5A4u, 0x00004E4Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 17u, 0x08A832B0u>(ctx, &aot_mem); return;
    }
    goto L_08A6F5A8;
L_08A6F5A8:
    rt.unsupported(0x08A6F5A8u, 0x63617073u, "vfpu0 not lowered yet"); return;
L_08A6F5BC:
    rt.unsupported(0x08A6F5BCu, 0x74786574u, "unknown not lowered yet"); return;
L_08A6F5C8:
    aot_gpr[23] = (ctx.vfpu_scalar_bits_ct<114u>());
    rt.unsupported(0x08A6F5CCu, 0x68676965u, "unknown not lowered yet"); return;
L_08A6F5D4:
    rt.unsupported(0x08A6F5D4u, 0x73616C63u, "unknown not lowered yet"); return;
L_08A6F5DC:
    rt.unsupported(0x08A6F5DCu, 0x4C4C4543u, "unknown not lowered yet"); return;
L_08A6F5E4:
    if (aot_gpr[27] != aot_gpr[12]) {
    rt.unsupported(0x08A6F5E8u, 0x68746469u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8B374u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F5EC;
L_08A6F5EC:
    // nop
    goto L_08A6F5F0;
L_08A6F5F0:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    goto L_08A6F5F8;
L_08A6F5F8:
    rt.unsupported(0x08A6F5F8u, 0x6B6E696Cu, "unknown not lowered yet"); return;
L_08A6F604:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 4u>();
    rt.unsupported(0x08A6F608u, 0x00706954u, "special? not lowered yet"); return;
L_08A6F60C:
    rt.unsupported(0x08A6F60Cu, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A6F614:
    rt.unsupported(0x08A6F614u, 0x67696568u, "vfpu1 not lowered yet"); return;
L_08A6F61C:
    rt.unsupported(0x08A6F61Cu, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A6F628:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A6F630u, 0x00000072u, "special? not lowered yet"); return;
L_08A6F634:
    rt.unsupported(0x08A6F634u, 0x68676968u, "unknown not lowered yet"); return;
L_08A6F648:
    rt.unsupported(0x08A6F648u, 0x68676968u, "unknown not lowered yet"); return;
L_08A6F65C:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 6u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A6F664u, 0x00000072u, "special? not lowered yet"); return;
L_08A6F668:
    rt.unsupported(0x08A6F668u, 0x68676968u, "unknown not lowered yet"); return;
L_08A6F67C:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A6F680u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A6F688:
    rt.unsupported(0x08A6F688u, 0x436D756Eu, "unknown not lowered yet"); return;
L_08A6F690:
    if (aot_gpr[3] != aot_gpr[13]) {
    ctx.execute_vfpu_vcmp_ct<116u, 97u, 1u, 15u>();
        ctx.pc = 0x08A8CC4Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F698;
L_08A6F698:
    rt.unsupported(0x08A6F698u, 0x736C6F43u, "unknown not lowered yet"); return;
L_08A6F6A0:
    if (aot_gpr[19] != aot_gpr[13]) {
    ctx.execute_vfpu_compare3(105u, 115u, 67u, 1u, 6u);
        ctx.pc = 0x08A8CC5Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F6A8;
L_08A6F6A8:
    aot_gpr[14] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6F6AC;
L_08A6F6AC:
    rt.unsupported(0x08A6F6ACu, 0x4C6D756Eu, "unknown not lowered yet"); return;
L_08A6F6BC:
    if (aot_gpr[19] != aot_gpr[13]) {
    ctx.execute_vfpu_compare3(105u, 115u, 82u, 1u, 6u);
        ctx.pc = 0x08A8CC78u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F6C4;
L_08A6F6C4:
    rt.unsupported(0x08A6F6C4u, 0x00007377u, "special? not lowered yet"); return;
L_08A6F6C8:
    if (aot_gpr[3] != aot_gpr[13]) {
    ctx.execute_vfpu_vcmp_ct<116u, 97u, 1u, 15u>();
        ctx.pc = 0x08A8CC84u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F6D0;
L_08A6F6D0:
    rt.unsupported(0x08A6F6D0u, 0x73776F52u, "unknown not lowered yet"); return;
L_08A6F6D8:
    rt.unsupported(0x08A6F6D8u, 0x74726576u, "unknown not lowered yet"); return;
L_08A6F6EC:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 100u, 1u>();
    rt.unsupported(0x08A6F6F0u, 0x70617257u, "unknown not lowered yet"); return;
L_08A6F6FC:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 4u>();
    if (aot_gpr[3] != aot_gpr[16]) {
    rt.unsupported(0x08A6F704u, 0x614E6761u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A89C54u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6F708;
L_08A6F708:
    aot_gpr[12] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6F70C;
L_08A6F70C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    rt.unsupported(0x08A6F710u, 0x746E6F46u, "unknown not lowered yet"); return;
L_08A6F71C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    rt.unsupported(0x08A6F720u, 0x67696C41u, "vfpu1 not lowered yet"); return;
L_08A6F728:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    rt.unsupported(0x08A6F72Cu, 0x74786554u, "unknown not lowered yet"); return;
L_08A6F738:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    ctx.execute_vfpu_vscl_ct<76u, 105u, 110u, 1u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A6F744u, 0x00000072u, "special? not lowered yet"); return;
L_08A6F748:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 6u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A6F754u, 0x00000072u, "special? not lowered yet"); return;
L_08A6F758:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    rt.unsupported(0x08A6F75Cu, 0x68676948u, "unknown not lowered yet"); return;
L_08A6F770:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    rt.unsupported(0x08A6F774u, 0x68676948u, "unknown not lowered yet"); return;
L_08A6F788:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 3u>();
    rt.unsupported(0x08A6F78Cu, 0x68676948u, "unknown not lowered yet"); return;
L_08A6F790:
    rt.unsupported(0x08A6F790u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08A6F7A0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F7A4u, 0x69577265u, "unknown not lowered yet"); return;
L_08A6F7AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<101u, 114u, 72u, 1u>();
    rt.unsupported(0x08A6F7B4u, 0x74686769u, "unknown not lowered yet"); return;
L_08A6F7BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F7C0u, 0x694C7265u, "unknown not lowered yet"); return;
L_08A6F7CC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F7D0u, 0x69467265u, "unknown not lowered yet"); return;
L_08A6F7DC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F7E0u, 0x69487265u, "unknown not lowered yet"); return;
L_08A6F7F8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F7FCu, 0x69487265u, "unknown not lowered yet"); return;
L_08A6F814:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<114u, 67u, 1u, 5u>();
    aot_gpr[14] = (aot_gpr[3] + aot_gpr[19]);
    goto L_08A6F820;
L_08A6F820:
    ctx.execute_vfpu_compare3(115u, 99u, 114u, 1u, 6u);
    rt.unsupported(0x08A6F824u, 0x61626C6Cu, "vfpu0 not lowered yet"); return;
L_08A6F830:
    rt.unsupported(0x08A6F830u, 0x74726576u, "unknown not lowered yet"); return;
L_08A6F848:
    rt.unsupported(0x08A6F848u, 0x69726F68u, "unknown not lowered yet"); return;
L_08A6F864:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<71u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(73u, 115u, 77u, 1u, 6u);
    aot_gpr[12] = (aot_gpr[3] & aot_gpr[12]);
    goto L_08A6F870;
L_08A6F870:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6F870u, 0x00000020u); return; } }
    goto L_08A6F874;
L_08A6F874:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<71u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F878u, 0x00676154u, "special? not lowered yet"); return;
L_08A6F880:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F88Cu, 0x6972472Fu, "unknown not lowered yet"); return;
L_08A6F8A0:
    rt.unsupported(0x08A6F8A0u, 0x44495247u, "unsupported CFC1 control register"); return;
    // nop
    goto L_08A6F8A8;
L_08A6F8A8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F8B4u, 0x706F502Fu, "unknown not lowered yet"); return;
L_08A6F8C8:
    if (aot_gpr[10] != aot_gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 42u, 0x08A8360Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6F8D0;
L_08A6F8D0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<72u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<47u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F8E0u, 0x496E6564u, "cop2/vfpu not lowered yet"); return;
L_08A6F8F8:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6F900;
L_08A6F900:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6F904u, 0x00000054u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 11u, 0x08A83228u>(ctx, &aot_mem); return;
    }
    goto L_08A6F908;
L_08A6F908:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    aot_gpr[13] = (0u | 0u);
    goto L_08A6F910;
L_08A6F910:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<47u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6F920u, 0x63657269u, "vfpu0 not lowered yet"); return;
L_08A6F934:
    rt.unsupported(0x08A6F934u, 0x49444552u, "cop2/vfpu not lowered yet"); return;
L_08A6F940:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F94Cu, 0x73694C2Fu, "unknown not lowered yet"); return;
L_08A6F960:
    rt.unsupported(0x08A6F960u, 0x00000070u, "special? not lowered yet"); return;
L_08A6F964:
    if (aot_gpr[2] != aot_gpr[19]) {
    aot_gpr[9] = (aot_gpr[24] >> 29u);
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 85u, 0x08A81E98u>(ctx, &aot_mem); return;
    }
    goto L_08A6F96C;
L_08A6F96C:
    // nop
    goto L_08A6F970;
L_08A6F970:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F97Cu, 0x6761502Fu, "vfpu1 not lowered yet"); return;
L_08A6F988:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6F98Cu, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F994:
    rt.unsupported(0x08A6F994u, 0x45474150u, "cop1? not lowered yet"); return;
L_08A6F998:
    jump_target = 0u;
    aot_gpr[8] = (0x08A6F9A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6F9A0u) goto L_08A6F9A0;
    return;
L_08A6F9A0:
    ctx.execute_vfpu_vscl_ct<80u, 97u, 103u, 1u>();
    rt.unsupported(0x08A6F9A4u, 0x61544449u, "vfpu0 not lowered yet"); return;
L_08A6F9B0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F9BCu, 0x6E65472Fu, "vfpu3 not lowered yet"); return;
L_08A6F9D0:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6F9D4u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6F9DC:
    rt.unsupported(0x08A6F9DCu, 0x454E4547u, "cop1? not lowered yet"); return;
L_08A6F9E8:
    aot_gpr[9] = (aot_gpr[24] >> 29u);
    // nop
    goto L_08A6F9F0;
L_08A6F9F0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6F9FCu, 0x6369542Fu, "vfpu0 not lowered yet"); return;
L_08A6FA08:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6FA0Cu, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6FA14:
    rt.unsupported(0x08A6FA14u, 0x4B434954u, "cop2/vfpu not lowered yet"); return;
L_08A6FA20:
    rt.unsupported(0x08A6FA20u, 0x4F524353u, "unknown not lowered yet"); return;
L_08A6FA28:
    rt.unsupported(0x08A6FA28u, 0x45444146u, "cop1? not lowered yet"); return;
L_08A6FA30:
    rt.unsupported(0x08A6FA30u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A6FA3C:
    rt.unsupported(0x08A6FA3Cu, 0x70736964u, "unknown not lowered yet"); return;
L_08A6FA4C:
    rt.unsupported(0x08A6FA4Cu, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A6FA54:
    rt.unsupported(0x08A6FA54u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A6FA60:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08A6FA68;
L_08A6FA68:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_compare3(47u, 66u, 114u, 1u, 6u);
    rt.unsupported(0x08A6FA78u, 0x72657377u, "unknown not lowered yet"); return;
L_08A6FA90:
    rt.unsupported(0x08A6FA94u, 0x5F524553u, "control flow in delay slot"); return;
L_08A6FA98:
    if (aot_gpr[2] != aot_gpr[9]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 23u, 0x08A833C0u>(ctx, &aot_mem); return;
    }
    goto L_08A6FAA0;
L_08A6FAA0:
    ctx.execute_vfpu_vminmax(102u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A6FAA4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A6FAB0:
    ctx.execute_vfpu_vminmax(70u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A6FAB4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A6FABC:
    rt.unsupported(0x08A6FABCu, 0x61546E69u, "vfpu0 not lowered yet"); return;
L_08A6FAC4:
    rt.unsupported(0x08A6FAC4u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6FACC:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6FAD8u, 0x726F462Fu, "unknown not lowered yet"); return;
L_08A6FAEC:
    ctx.execute_vfpu_vminmax(70u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A6FAF0u, 0x00676154u, "special? not lowered yet"); return;
L_08A6FAF4:
    rt.unsupported(0x08A6FAF4u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6FB04:
    rt.unsupported(0x08A6FB04u, 0x73736150u, "unknown not lowered yet"); return;
L_08A6FB18:
    ctx.execute_vfpu_vscl_ct<83u, 101u, 108u, 1u>();
    rt.unsupported(0x08A6FB1Cu, 0x61547463u, "vfpu0 not lowered yet"); return;
L_08A6FB24:
    rt.unsupported(0x08A6FB24u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6FB30:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6FB34u, 0x6E496E65u, "vfpu3 not lowered yet"); return;
L_08A6FB40:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6FB4Cu, 0x726F462Fu, "unknown not lowered yet"); return;
L_08A6FB60:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A6FB64u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6FB6C:
    rt.unsupported(0x08A6FB6Cu, 0x4D524F46u, "unknown not lowered yet"); return;
L_08A6FB78:
    rt.unsupported(0x08A6FB78u, 0x4E494755u, "unknown not lowered yet"); return;
L_08A6FB80:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vcmp_ct<77u, 117u, 1u, 15u>();
    rt.unsupported(0x08A6FB90u, 0x63536974u, "vfpu0 not lowered yet"); return;
L_08A6FBAC:
    if (aot_gpr[2] != aot_gpr[12]) {
    rt.unsupported(0x08A6FBB0u, 0x43535F49u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A850E4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FBB4;
L_08A6FBB4:
    rt.unsupported(0x08A6FBB4u, 0x4E454552u, "unknown not lowered yet"); return;
L_08A6FBC0:
    rt.unsupported(0x08A6FBC0u, 0x00637273u, "special? not lowered yet"); return;
L_08A6FBC4:
    rt.unsupported(0x08A6FBC4u, 0x6B636162u, "unknown not lowered yet"); return;
L_08A6FBD4:
    rt.unsupported(0x08A6FBD4u, 0x6B6E696Cu, "unknown not lowered yet"); return;
L_08A6FBE0:
    rt.unsupported(0x08A6FBE0u, 0x42637273u, "unknown not lowered yet"); return;
L_08A6FBF8:
    rt.unsupported(0x08A6FBF8u, 0x00000074u, "special? not lowered yet"); return;
L_08A6FBFC:
    rt.unsupported(0x08A6FBFCu, 0x47747364u, "cop1? not lowered yet"); return;
L_08A6FC10:
    rt.unsupported(0x08A6FC10u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A6FC20:
    rt.unsupported(0x08A6FC20u, 0x6761546Eu, "vfpu1 not lowered yet"); return;
L_08A6FC28:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vcmp_ct<77u, 117u, 1u, 15u>();
    rt.unsupported(0x08A6FC38u, 0x63536974u, "vfpu0 not lowered yet"); return;
L_08A6FC4C:
    rt.unsupported(0x08A6FC4Cu, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08A6FC54:
    rt.unsupported(0x08A6FC54u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A6FC64:
    rt.unsupported(0x08A6FC64u, 0x6761546Eu, "vfpu1 not lowered yet"); return;
L_08A6FC74:
    (void)(0u - 0u);
    goto L_08A6FC78;
L_08A6FC78:
    ctx.execute_vfpu_vscl_ct<83u, 101u, 108u, 1u>();
    rt.unsupported(0x08A6FC7Cu, 0x61547463u, "vfpu0 not lowered yet"); return;
L_08A6FC84:
    ctx.execute_vfpu_vscl_ct<80u, 97u, 103u, 1u>();
    rt.unsupported(0x08A6FC88u, 0x61544449u, "vfpu0 not lowered yet"); return;
L_08A6FC90:
    rt.unsupported(0x08A6FC90u, 0x63697551u, "vfpu0 not lowered yet"); return;
L_08A6FCA0:
    rt.unsupported(0x08A6FCA0u, 0x61697274u, "vfpu0 not lowered yet"); return;
L_08A6FCB0:
    rt.unsupported(0x08A6FCB0u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A6FCB8:
    aot_gpr[12] = (0u + 0u);
    goto L_08A6FCBC;
L_08A6FCBC:
    rt.unsupported(0x08A6FCBCu, 0x74747542u, "unknown not lowered yet"); return;
L_08A6FCC8:
    rt.unsupported(0x08A6FCC8u, 0x69486E6Fu, "unknown not lowered yet"); return;
L_08A6FCE4:
    // nop
    goto L_08A6FCE8;
L_08A6FCE8:
    rt.unsupported(0x08A6FCE8u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A6FCF4:
    rt.unsupported(0x08A6FCF4u, 0x70736964u, "unknown not lowered yet"); return;
L_08A6FD04:
    rt.unsupported(0x08A6FD04u, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A6FD0C:
    rt.unsupported(0x08A6FD0Cu, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A6FD18:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6FD24u, 0x7865542Fu, "unknown not lowered yet"); return;
L_08A6FD34:
    rt.unsupported(0x08A6FD34u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6FD40:
    rt.unsupported(0x08A6FD40u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A6FD4C:
    rt.unsupported(0x08A6FD4Cu, 0x70736964u, "unknown not lowered yet"); return;
L_08A6FD5C:
    rt.unsupported(0x08A6FD5Cu, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A6FD64:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    aot_gpr[14] = (0u | 0u);
    goto L_08A6FD6C;
L_08A6FD6C:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A6FD70u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A6FD78:
    // nop
    goto L_08A6FD7C;
L_08A6FD7C:
    rt.unsupported(0x08A6FD7Cu, 0x74747542u, "unknown not lowered yet"); return;
L_08A6FD88:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6FD8Cu, 0x746E6569u, "unknown not lowered yet"); return;
L_08A6FDA0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6FDA4u, 0x746E6569u, "unknown not lowered yet"); return;
L_08A6FDB8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6FDBCu, 0x746E6569u, "unknown not lowered yet"); return;
L_08A6FDD0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6FDD4u, 0x746E6569u, "unknown not lowered yet"); return;
L_08A6FDE8:
    // nop
    goto L_08A6FDEC;
L_08A6FDEC:
    rt.unsupported(0x08A6FDF0u, 0x08A6FDA0u, "control flow in delay slot"); return;
L_08A6FDFC:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08A6FE00u, 0x63696854u, "vfpu0 not lowered yet"); return;
L_08A6FE0C:
    rt.unsupported(0x08A6FE0Cu, 0x6E726F63u, "vfpu3 not lowered yet"); return;
L_08A6FE1C:
    rt.unsupported(0x08A6FE1Cu, 0x74636552u, "unknown not lowered yet"); return;
L_08A6FE30:
    ctx.execute_vfpu_compare3(97u, 117u, 116u, 1u, 6u);
    rt.unsupported(0x08A6FE34u, 0x72666552u, "unknown not lowered yet"); return;
L_08A6FE3C:
    ctx.execute_vfpu_vscl_ct<110u, 101u, 118u, 1u>();
    rt.unsupported(0x08A6FE40u, 0x63614272u, "vfpu0 not lowered yet"); return;
L_08A6FE4C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6FE50u, 0x73657264u, "unknown not lowered yet"); return;
L_08A6FE58:
    if (aot_gpr[19] != aot_gpr[20]) {
    rt.unsupported(0x08A6FE5Cu, 0x61697261u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A893A8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FE60;
L_08A6FE60:
    if (aot_gpr[3] != aot_gpr[5]) {
    aot_gpr[12] = (0u + 0u);
        ctx.pc = 0x08A8AFECu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FE68;
L_08A6FE64:
    aot_gpr[12] = (0u + 0u);
    goto L_08A6FE68;
L_08A6FE68:
    ctx.execute_vfpu_compare3(116u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08A6FE6Cu, 0x72656262u, "unknown not lowered yet"); return;
L_08A6FE74:
    ctx.execute_vfpu_compare3(116u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08A6FE78u, 0x72656262u, "unknown not lowered yet"); return;
L_08A6FE80:
    ctx.execute_vfpu_compare3(116u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08A6FE84u, 0x72656262u, "unknown not lowered yet"); return;
L_08A6FE8C:
    ctx.execute_vfpu_compare3(116u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08A6FE90u, 0x72656262u, "unknown not lowered yet"); return;
L_08A6FE98:
    ctx.execute_vfpu_compare3(116u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08A6FE9Cu, 0x72656262u, "unknown not lowered yet"); return;
L_08A6FEA8:
    rt.unsupported(0x08A6FEA8u, 0x676E616Cu, "vfpu1 not lowered yet"); return;
L_08A6FEB8:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FEBCu, 0x754C4441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85808u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FEC0;
L_08A6FEC0:
    rt.unsupported(0x08A6FEC0u, 0x00000070u, "special? not lowered yet"); return;
L_08A6FEC4:
    if (aot_gpr[2] == aot_gpr[31]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<68u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_d); }
        ctx.pc = 0x08A85814u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FECC;
L_08A6FECC:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[14]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6FED0;
L_08A6FED0:
    if (aot_gpr[2] == aot_gpr[31]) {
    ctx.execute_vfpu_vcmp_ct<68u, 76u, 1u, 1u>();
        ctx.pc = 0x08A85820u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FED8;
L_08A6FED8:
    aot_gpr[12] = (aot_gpr[3] | aot_gpr[20]);
    goto L_08A6FEDC;
L_08A6FEDC:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FEE0u, 0x724C4441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8582Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FEE4;
L_08A6FEE4:
    rt.unsupported(0x08A6FEE4u, 0x74686769u, "unknown not lowered yet"); return;
L_08A6FEEC:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FEF0u, 0x425F4441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8583Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FEF4;
L_08A6FEF4:
    rt.unsupported(0x08A6FEF4u, 0x004B4341u, "special? not lowered yet"); return;
L_08A6FEF8:
    if (aot_gpr[2] == aot_gpr[31]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<68u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_d); }
        ctx.pc = 0x08A85848u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF00;
L_08A6FF00:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[14]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6FF04;
L_08A6FF04:
    rt.unsupported(0x08A6FF08u, 0x585F4441u, "control flow in delay slot"); return;
L_08A6FF0C:
    // nop
    goto L_08A6FF10;
L_08A6FF10:
    if (aot_gpr[2] == aot_gpr[31]) {
    ctx.execute_vfpu_vcmp_ct<68u, 82u, 1u, 1u>();
        ctx.pc = 0x08A85860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF18;
L_08A6FF18:
    aot_gpr[12] = (aot_gpr[3] | aot_gpr[20]);
    goto L_08A6FF1C;
L_08A6FF1C:
    rt.unsupported(0x08A6FF20u, 0x535F4441u, "control flow in delay slot"); return;
L_08A6FF24:
    if (aot_gpr[18] == aot_gpr[1]) {
    rt.unsupported(0x08A6FF28u, 0x00000045u, "special? not lowered yet"); return;
        ctx.pc = 0x08A8546Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF2C;
L_08A6FF2C:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FF30u, 0x72524441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8587Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF34;
L_08A6FF34:
    rt.unsupported(0x08A6FF34u, 0x74686769u, "unknown not lowered yet"); return;
L_08A6FF3C:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FF40u, 0x435F4441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8588Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF44;
L_08A6FF44:
    rt.unsupported(0x08A6FF44u, 0x4C435249u, "unknown not lowered yet"); return;
L_08A6FF4C:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FF50u, 0x4C5F4441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8589Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF54;
L_08A6FF54:
    rt.unsupported(0x08A6FF54u, 0x00000031u, "special? not lowered yet"); return;
L_08A6FF58:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FF5Cu, 0x4C5F4441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A858A8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF60;
L_08A6FF60:
    rt.unsupported(0x08A6FF60u, 0x00000032u, "special? not lowered yet"); return;
L_08A6FF64:
    rt.unsupported(0x08A6FF68u, 0x525F4441u, "control flow in delay slot"); return;
L_08A6FF6C:
    rt.unsupported(0x08A6FF6Cu, 0x00000031u, "special? not lowered yet"); return;
L_08A6FF70:
    rt.unsupported(0x08A6FF74u, 0x525F4441u, "control flow in delay slot"); return;
L_08A6FF78:
    rt.unsupported(0x08A6FF78u, 0x00000032u, "special? not lowered yet"); return;
L_08A6FF7C:
    if (aot_gpr[2] == aot_gpr[31]) {
    rt.unsupported(0x08A6FF80u, 0x74734441u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A858CCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF84;
L_08A6FF84:
    aot_gpr[14] = (aot_gpr[3] + aot_gpr[20]);
    goto L_08A6FF88;
L_08A6FF88:
    if (aot_gpr[2] == aot_gpr[31]) {
    ctx.execute_vfpu_vscl_ct<65u, 68u, 115u, 1u>();
        ctx.pc = 0x08A858D8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6FF90;
L_08A6FF90:
    rt.unsupported(0x08A6FF90u, 0x7463656Cu, "unknown not lowered yet"); return;
L_08A6FF98:
    // nop
    ctx.pc = 0x029BFAE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0619(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0619_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_619(Runtime &runtime) {
    runtime.register_generated_unit(619u, 0x08A6F000u, 4096u, &recomp_unit_0619, &recomp_unit_0619_entry);
    runtime.register_function(0x08A6F000u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F008u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F028u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F030u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F038u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F040u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F068u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F070u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F078u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F0A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F0ACu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F0C0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F0C8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F118u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F138u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F140u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F158u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F164u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F16Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F170u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F190u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F198u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F1C0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F1C8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F1ECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F1F4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F1F8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F200u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F208u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F214u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F220u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F244u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F250u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F268u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F26Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F274u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F280u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2A8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2ACu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2B8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2BCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2C4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2C8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2CCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2D0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2D4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2DCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2E0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2ECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2F4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F2F8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F320u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F328u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F330u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F338u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F340u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F344u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F364u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F374u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F378u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F394u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F39Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F3A4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F3A8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F3CCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F3D4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F3DCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F3E8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F410u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F418u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F420u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F430u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F44Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F458u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F460u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F468u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F470u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F498u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F4A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F4A8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F4B4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F4B8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F4D8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F4E8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F510u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F518u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F520u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F528u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F540u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F54Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F558u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F55Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F560u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F57Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F584u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F58Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F590u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F598u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5A8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5BCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5C8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5D4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5DCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5E4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5ECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5F0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F5F8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F604u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F60Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F614u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F61Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F628u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F634u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F648u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F65Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F668u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F67Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F688u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F690u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F698u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6A8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6ACu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6BCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6C4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6C8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6D0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6D8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6ECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F6FCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F708u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F70Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F71Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F728u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F738u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F748u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F758u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F770u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F788u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F790u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F7A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F7ACu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F7BCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F7CCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F7DCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F7F8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F814u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F820u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F830u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F848u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F864u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F870u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F874u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F880u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F8A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F8A8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F8C8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F8D0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F8F8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F900u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F908u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F910u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F934u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F940u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F960u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F964u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F96Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F970u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F988u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F994u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F998u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F9A0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F9B0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F9D0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F9DCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F9E8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6F9F0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA08u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA14u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA20u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA28u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA30u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA3Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA4Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA54u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA60u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA68u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA90u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FA98u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FAA0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FAB0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FABCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FAC4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FACCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FAECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FAF4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB04u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB18u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB24u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB30u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB40u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB60u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB6Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB78u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FB80u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBACu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBB4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBC0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBC4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBD4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBE0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBF8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FBFCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC10u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC20u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC28u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC4Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC54u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC64u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC74u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC78u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC84u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FC90u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCA0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCB0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCB8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCBCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCC8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCE4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCE8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FCF4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD04u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD0Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD18u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD34u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD40u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD4Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD5Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD64u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD6Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD78u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD7Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FD88u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FDA0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FDB8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FDD0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FDE8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FDECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FDFCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE0Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE1Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE30u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE3Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE4Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE58u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE60u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE64u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE68u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE74u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE80u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE8Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FE98u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEA8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEB8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEC0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEC4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FECCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FED0u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FED8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEDCu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEE4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEECu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEF4u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FEF8u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF00u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF04u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF0Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF10u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF18u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF1Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF24u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF2Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF34u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF3Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF44u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF4Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF54u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF58u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF60u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF64u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF6Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF70u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF78u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF7Cu, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF84u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF88u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF90u, &recomp_unit_0619, "recomp_unit_0619");
    runtime.register_function(0x08A6FF98u, &recomp_unit_0619, "recomp_unit_0619");
}
} // namespace psprecomp
