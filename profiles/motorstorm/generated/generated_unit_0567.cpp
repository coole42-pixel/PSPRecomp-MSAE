#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0567[1023] = {
    1, 0, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 8, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 26, 0, 0, 0, 27, 28, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0,
    0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 44, 0, 45,
    0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 56, 0, 57,
    0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0,
    0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109,
    0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 127, 0, 128, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 147,
    0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 154, 0, 155, 0, 0, 156, 157, 0, 158, 0, 0, 159,
    160, 0, 161, 0, 0, 162, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 178, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 200, 0, 201, 0, 202, 203, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 224,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0,
    233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0,
    242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 251,
    0, 252, 253, 0, 0, 0, 0, 254, 0, 255, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 262, 0,
    0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 268, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280,
};
void recomp_unit_0567_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A3B000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0567[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3B000;
    case 2u: goto L_08A3B010;
    case 3u: goto L_08A3B014;
    case 4u: goto L_08A3B01C;
    case 5u: goto L_08A3B030;
    case 6u: goto L_08A3B038;
    case 7u: goto L_08A3B050;
    case 8u: goto L_08A3B054;
    case 9u: goto L_08A3B05C;
    case 10u: goto L_08A3B068;
    case 11u: goto L_08A3B078;
    case 12u: goto L_08A3B084;
    case 13u: goto L_08A3B090;
    case 14u: goto L_08A3B09C;
    case 15u: goto L_08A3B0B0;
    case 16u: goto L_08A3B0B4;
    case 17u: goto L_08A3B0C0;
    case 18u: goto L_08A3B0D0;
    case 19u: goto L_08A3B0DC;
    case 20u: goto L_08A3B0E4;
    case 21u: goto L_08A3B0F4;
    case 22u: goto L_08A3B100;
    case 23u: goto L_08A3B114;
    case 24u: goto L_08A3B120;
    case 25u: goto L_08A3B130;
    case 26u: goto L_08A3B134;
    case 27u: goto L_08A3B144;
    case 28u: goto L_08A3B148;
    case 29u: goto L_08A3B150;
    case 30u: goto L_08A3B15C;
    case 31u: goto L_08A3B16C;
    case 32u: goto L_08A3B174;
    case 33u: goto L_08A3B18C;
    case 34u: goto L_08A3B198;
    case 35u: goto L_08A3B1A0;
    case 36u: goto L_08A3B1AC;
    case 37u: goto L_08A3B1B4;
    case 38u: goto L_08A3B1C0;
    case 39u: goto L_08A3B1C8;
    case 40u: goto L_08A3B1D0;
    case 41u: goto L_08A3B1D8;
    case 42u: goto L_08A3B1E0;
    case 43u: goto L_08A3B1F0;
    case 44u: goto L_08A3B1F4;
    case 45u: goto L_08A3B1FC;
    case 46u: goto L_08A3B204;
    case 47u: goto L_08A3B20C;
    case 48u: goto L_08A3B220;
    case 49u: goto L_08A3B228;
    case 50u: goto L_08A3B240;
    case 51u: goto L_08A3B250;
    case 52u: goto L_08A3B258;
    case 53u: goto L_08A3B260;
    case 54u: goto L_08A3B268;
    case 55u: goto L_08A3B270;
    case 56u: goto L_08A3B274;
    case 57u: goto L_08A3B27C;
    case 58u: goto L_08A3B288;
    case 59u: goto L_08A3B290;
    case 60u: goto L_08A3B29C;
    case 61u: goto L_08A3B2A8;
    case 62u: goto L_08A3B2B0;
    case 63u: goto L_08A3B2C0;
    case 64u: goto L_08A3B2EC;
    case 65u: goto L_08A3B2FC;
    case 66u: goto L_08A3B310;
    case 67u: goto L_08A3B320;
    case 68u: goto L_08A3B32C;
    case 69u: goto L_08A3B334;
    case 70u: goto L_08A3B33C;
    case 71u: goto L_08A3B348;
    case 72u: goto L_08A3B37C;
    case 73u: goto L_08A3B388;
    case 74u: goto L_08A3B39C;
    case 75u: goto L_08A3B3CC;
    case 76u: goto L_08A3B3F0;
    case 77u: goto L_08A3B3FC;
    case 78u: goto L_08A3B404;
    case 79u: goto L_08A3B430;
    case 80u: goto L_08A3B43C;
    case 81u: goto L_08A3B440;
    case 82u: goto L_08A3B44C;
    case 83u: goto L_08A3B458;
    case 84u: goto L_08A3B48C;
    case 85u: goto L_08A3B494;
    case 86u: goto L_08A3B49C;
    case 87u: goto L_08A3B4A4;
    case 88u: goto L_08A3B4A8;
    case 89u: goto L_08A3B4CC;
    case 90u: goto L_08A3B4D4;
    case 91u: goto L_08A3B4D8;
    case 92u: goto L_08A3B4E0;
    case 93u: goto L_08A3B4F0;
    case 94u: goto L_08A3B4F8;
    case 95u: goto L_08A3B504;
    case 96u: goto L_08A3B510;
    case 97u: goto L_08A3B51C;
    case 98u: goto L_08A3B528;
    case 99u: goto L_08A3B530;
    case 100u: goto L_08A3B550;
    case 101u: goto L_08A3B574;
    case 102u: goto L_08A3B580;
    case 103u: goto L_08A3B598;
    case 104u: goto L_08A3B5A0;
    case 105u: goto L_08A3B5A8;
    case 106u: goto L_08A3B5B8;
    case 107u: goto L_08A3B5EC;
    case 108u: goto L_08A3B5F4;
    case 109u: goto L_08A3B5FC;
    case 110u: goto L_08A3B608;
    case 111u: goto L_08A3B620;
    case 112u: goto L_08A3B62C;
    case 113u: goto L_08A3B638;
    case 114u: goto L_08A3B644;
    case 115u: goto L_08A3B650;
    case 116u: goto L_08A3B658;
    case 117u: goto L_08A3B674;
    case 118u: goto L_08A3B694;
    case 119u: goto L_08A3B69C;
    case 120u: goto L_08A3B6B4;
    case 121u: goto L_08A3B6D0;
    case 122u: goto L_08A3B6F0;
    case 123u: goto L_08A3B6F8;
    case 124u: goto L_08A3B6FC;
    case 125u: goto L_08A3B720;
    case 126u: goto L_08A3B728;
    case 127u: goto L_08A3B72C;
    case 128u: goto L_08A3B734;
    case 129u: goto L_08A3B738;
    case 130u: goto L_08A3B750;
    case 131u: goto L_08A3B778;
    case 132u: goto L_08A3B784;
    case 133u: goto L_08A3B7A4;
    case 134u: goto L_08A3B7BC;
    case 135u: goto L_08A3B7CC;
    case 136u: goto L_08A3B7EC;
    case 137u: goto L_08A3B800;
    case 138u: goto L_08A3B810;
    case 139u: goto L_08A3B818;
    case 140u: goto L_08A3B820;
    case 141u: goto L_08A3B834;
    case 142u: goto L_08A3B83C;
    case 143u: goto L_08A3B844;
    case 144u: goto L_08A3B85C;
    case 145u: goto L_08A3B868;
    case 146u: goto L_08A3B870;
    case 147u: goto L_08A3B87C;
    case 148u: goto L_08A3B884;
    case 149u: goto L_08A3B88C;
    case 150u: goto L_08A3B8A4;
    case 151u: goto L_08A3B8B4;
    case 152u: goto L_08A3B8BC;
    case 153u: goto L_08A3B8CC;
    case 154u: goto L_08A3B8D0;
    case 155u: goto L_08A3B8D8;
    case 156u: goto L_08A3B8E4;
    case 157u: goto L_08A3B8E8;
    case 158u: goto L_08A3B8F0;
    case 159u: goto L_08A3B8FC;
    case 160u: goto L_08A3B900;
    case 161u: goto L_08A3B908;
    case 162u: goto L_08A3B914;
    case 163u: goto L_08A3B918;
    case 164u: goto L_08A3B930;
    case 165u: goto L_08A3B94C;
    case 166u: goto L_08A3B958;
    case 167u: goto L_08A3B964;
    case 168u: goto L_08A3B970;
    case 169u: goto L_08A3B988;
    case 170u: goto L_08A3B998;
    case 171u: goto L_08A3B9A8;
    case 172u: goto L_08A3B9B0;
    case 173u: goto L_08A3B9B8;
    case 174u: goto L_08A3B9C0;
    case 175u: goto L_08A3B9D4;
    case 176u: goto L_08A3B9E4;
    case 177u: goto L_08A3B9F0;
    case 178u: goto L_08A3BA0C;
    case 179u: goto L_08A3BA14;
    case 180u: goto L_08A3BA1C;
    case 181u: goto L_08A3BA20;
    case 182u: goto L_08A3BA48;
    case 183u: goto L_08A3BA50;
    case 184u: goto L_08A3BA58;
    case 185u: goto L_08A3BA6C;
    case 186u: goto L_08A3BA80;
    case 187u: goto L_08A3BA8C;
    case 188u: goto L_08A3BAA8;
    case 189u: goto L_08A3BABC;
    case 190u: goto L_08A3BAD8;
    case 191u: goto L_08A3BAE0;
    case 192u: goto L_08A3BAE8;
    case 193u: goto L_08A3BAF4;
    case 194u: goto L_08A3BB14;
    case 195u: goto L_08A3BB1C;
    case 196u: goto L_08A3BB24;
    case 197u: goto L_08A3BB3C;
    case 198u: goto L_08A3BB48;
    case 199u: goto L_08A3BB5C;
    case 200u: goto L_08A3BB60;
    case 201u: goto L_08A3BB68;
    case 202u: goto L_08A3BB70;
    case 203u: goto L_08A3BB74;
    case 204u: goto L_08A3BB90;
    case 205u: goto L_08A3BBAC;
    case 206u: goto L_08A3BBB4;
    case 207u: goto L_08A3BBC4;
    case 208u: goto L_08A3BBD8;
    case 209u: goto L_08A3BBE0;
    case 210u: goto L_08A3BBEC;
    case 211u: goto L_08A3BBF8;
    case 212u: goto L_08A3BC10;
    case 213u: goto L_08A3BC2C;
    case 214u: goto L_08A3BC38;
    case 215u: goto L_08A3BC40;
    case 216u: goto L_08A3BC48;
    case 217u: goto L_08A3BC58;
    case 218u: goto L_08A3BC88;
    case 219u: goto L_08A3BC9C;
    case 220u: goto L_08A3BCB0;
    case 221u: goto L_08A3BCD4;
    case 222u: goto L_08A3BCE8;
    case 223u: goto L_08A3BCF8;
    case 224u: goto L_08A3BCFC;
    case 225u: goto L_08A3BD10;
    case 226u: goto L_08A3BD24;
    case 227u: goto L_08A3BD30;
    case 228u: goto L_08A3BD44;
    case 229u: goto L_08A3BD4C;
    case 230u: goto L_08A3BD60;
    case 231u: goto L_08A3BD6C;
    case 232u: goto L_08A3BD74;
    case 233u: goto L_08A3BD80;
    case 234u: goto L_08A3BD8C;
    case 235u: goto L_08A3BD94;
    case 236u: goto L_08A3BDA8;
    case 237u: goto L_08A3BDBC;
    case 238u: goto L_08A3BDD0;
    case 239u: goto L_08A3BDE4;
    case 240u: goto L_08A3BDEC;
    case 241u: goto L_08A3BDF8;
    case 242u: goto L_08A3BE00;
    case 243u: goto L_08A3BE14;
    case 244u: goto L_08A3BE20;
    case 245u: goto L_08A3BE2C;
    case 246u: goto L_08A3BE40;
    case 247u: goto L_08A3BE44;
    case 248u: goto L_08A3BE58;
    case 249u: goto L_08A3BE60;
    case 250u: goto L_08A3BE74;
    case 251u: goto L_08A3BE7C;
    case 252u: goto L_08A3BE84;
    case 253u: goto L_08A3BE88;
    case 254u: goto L_08A3BE9C;
    case 255u: goto L_08A3BEA4;
    case 256u: goto L_08A3BEA8;
    case 257u: goto L_08A3BEB4;
    case 258u: goto L_08A3BEC0;
    case 259u: goto L_08A3BECC;
    case 260u: goto L_08A3BED8;
    case 261u: goto L_08A3BEF4;
    case 262u: goto L_08A3BEF8;
    case 263u: goto L_08A3BF04;
    case 264u: goto L_08A3BF10;
    case 265u: goto L_08A3BF1C;
    case 266u: goto L_08A3BF28;
    case 267u: goto L_08A3BF34;
    case 268u: goto L_08A3BF38;
    case 269u: goto L_08A3BF48;
    case 270u: goto L_08A3BF54;
    case 271u: goto L_08A3BF5C;
    case 272u: goto L_08A3BF64;
    case 273u: goto L_08A3BF68;
    case 274u: goto L_08A3BF98;
    case 275u: goto L_08A3BFB4;
    case 276u: goto L_08A3BFC0;
    case 277u: goto L_08A3BFD8;
    case 278u: goto L_08A3BFE4;
    case 279u: goto L_08A3BFEC;
    case 280u: goto L_08A3BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3B000:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < 48 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 301u, 0x08A3AFA8u>(ctx, &aot_mem); return;
      }
      goto L_08A3B010;
    }
L_08A3B010:
    aot_gpr[9] = (0u | 46u);
    goto L_08A3B014;
L_08A3B014:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    aot_gpr[22] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A3B144;
      }
      goto L_08A3B01C;
    }
L_08A3B01C:
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A3B078;
      }
      goto L_08A3B030;
    }
L_08A3B030:
    if (aot_gpr[8] != aot_gpr[7]) {
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < 49 ? 1u : 0u);
        goto L_08A3B054;
    }
    goto L_08A3B038;
L_08A3B038:
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3B038;
      }
      goto L_08A3B050;
    }
L_08A3B050:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < 49 ? 1u : 0u);
    goto L_08A3B054;
L_08A3B054:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08A3B148;
      }
      goto L_08A3B05C;
    }
L_08A3B05C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08A3B148;
      }
      goto L_08A3B068;
    }
L_08A3B068:
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B090;
      }
      goto L_08A3B078;
    }
L_08A3B078:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08A3B148;
      }
      goto L_08A3B084;
    }
L_08A3B084:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08A3B148;
      }
      goto L_08A3B090;
    }
L_08A3B090:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3B134;
      }
      goto L_08A3B09C;
    }
L_08A3B09C:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[6]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3B0F4;
      }
      goto L_08A3B0B0;
    }
L_08A3B0B0:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[18]) < 9 ? 1u : 0u);
    goto L_08A3B0B4;
L_08A3B0B4:
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3B0D0;
      }
      goto L_08A3B0C0;
    }
L_08A3B0C0:
    aot_gpr[9] = (aot_gpr[19] << 3u);
    aot_gpr[9] = (aot_gpr[19] + aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
      if (branch_taken) {
          goto L_08A3B0E4;
      }
      goto L_08A3B0D0;
    }
L_08A3B0D0:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[16] << 3u);
      if (branch_taken) {
          goto L_08A3B0E4;
      }
      goto L_08A3B0DC;
    }
L_08A3B0DC:
    aot_gpr[9] = (aot_gpr[16] + aot_gpr[9]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[9]);
    goto L_08A3B0E4;
L_08A3B0E4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[18]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B0B4;
      }
      goto L_08A3B0F4;
    }
L_08A3B0F4:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3B114;
      }
      goto L_08A3B100;
    }
L_08A3B100:
    aot_gpr[4] = (aot_gpr[19] << 3u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08A3B130;
      }
      goto L_08A3B114;
    }
L_08A3B114:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B134;
      }
      goto L_08A3B120;
    }
L_08A3B120:
    aot_gpr[4] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[8]);
    goto L_08A3B130;
L_08A3B130:
    aot_gpr[6] = (0u | 0u);
    goto L_08A3B134;
L_08A3B134:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A3B078;
      }
      goto L_08A3B144;
    }
L_08A3B144:
    aot_gpr[7] = (0u | 101u);
    goto L_08A3B148;
L_08A3B148:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B15C;
      }
      goto L_08A3B150;
    }
L_08A3B150:
    aot_gpr[7] = (0u | 69u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3B274;
      }
      goto L_08A3B15C;
    }
L_08A3B15C:
    aot_gpr[4] = (aot_gpr[18] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[12]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[23] | 0u);
        goto L_08A3B174;
    }
    goto L_08A3B16C;
L_08A3B16C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3BF34;
      }
      goto L_08A3B174;
    }
L_08A3B174:
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 44 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B1A0;
      }
      goto L_08A3B18C;
    }
L_08A3B18C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 43 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B1C0;
      }
      goto L_08A3B198;
    }
L_08A3B198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3B1B4;
      }
      goto L_08A3B1A0;
    }
L_08A3B1A0:
    aot_gpr[7] = (0u | 45u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B1C0;
      }
      goto L_08A3B1AC;
    }
L_08A3B1AC:
    aot_gpr[3] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A3B1B4;
L_08A3B1B4:
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    goto L_08A3B1C0;
L_08A3B1C0:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B270;
      }
      goto L_08A3B1C8;
    }
L_08A3B1C8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 48u);
      if (branch_taken) {
          goto L_08A3B270;
      }
      goto L_08A3B1D0;
    }
L_08A3B1D0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 49 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B1F4;
      }
      goto L_08A3B1D8;
    }
L_08A3B1D8:
    aot_gpr[7] = (0u | 48u);
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A3B1E0;
L_08A3B1E0:
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] == aot_gpr[7]) {
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08A3B1E0;
    }
    goto L_08A3B1F0;
L_08A3B1F0:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 49 ? 1u : 0u);
    goto L_08A3B1F4;
L_08A3B1F4:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B268;
      }
      goto L_08A3B1FC;
    }
L_08A3B1FC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3B268;
      }
      goto L_08A3B204;
    }
L_08A3B204:
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(-48));
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A3B20C;
L_08A3B20C:
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B240;
      }
      goto L_08A3B220;
    }
L_08A3B220:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[10] << 3u);
      if (branch_taken) {
          goto L_08A3B240;
      }
      goto L_08A3B228;
    }
L_08A3B228:
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3B20C;
      }
      goto L_08A3B240;
    }
L_08A3B240:
    aot_gpr[4] = (aot_gpr[9] - aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B258;
      }
      goto L_08A3B250;
    }
L_08A3B250:
    aot_gpr[10] = (153u << 16u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-27009));
    goto L_08A3B258;
L_08A3B258:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B274;
      }
      goto L_08A3B260;
    }
L_08A3B260:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u - aot_gpr[10]);
      if (branch_taken) {
          goto L_08A3B274;
      }
      goto L_08A3B268;
    }
L_08A3B268:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B274;
      }
      goto L_08A3B270;
    }
L_08A3B270:
    aot_gpr[23] = (aot_gpr[5] | 0u);
    goto L_08A3B274;
L_08A3B274:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[30] = (aot_gpr[10] - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A3B290;
      }
      goto L_08A3B27C;
    }
L_08A3B27C:
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[12]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A3BF38;
    }
    goto L_08A3B288;
L_08A3B288:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3BF34;
      }
      goto L_08A3B290;
    }
L_08A3B290:
    aot_gpr[20] = (static_cast<std::int32_t>(aot_gpr[18]) < 16 ? 1u : 0u);
    if (aot_gpr[22] == 0u) {
    aot_gpr[22] = (aot_gpr[18] | 0u);
        goto L_08A3B29C;
    }
    goto L_08A3B29C;
L_08A3B29C:
    aot_gpr[17] = (0u | 16u);
    if (aot_gpr[20] != 0u) {
    aot_gpr[17] = (aot_gpr[18] | 0u);
        goto L_08A3B2A8;
    }
    goto L_08A3B2A8;
L_08A3B2A8:
    aot_gpr[31] = (0x08A3B2B0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 19u, 0x08A3D164u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2B0u) goto L_08A3B2B0;
    return;
L_08A3B2B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3B320;
      }
      goto L_08A3B2C0;
    }
L_08A3B2C0:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] << 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9816));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-72)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08A3B2ECu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2ECu) goto L_08A3B2EC;
    return;
L_08A3B2EC:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3B2FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 19u, 0x08A3D164u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2FCu) goto L_08A3B2FC;
    return;
L_08A3B2FC:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3B310u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3B310u) goto L_08A3B310;
    return;
L_08A3B310:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08A3B320;
L_08A3B320:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3B43C;
      }
      goto L_08A3B32C;
    }
L_08A3B32C:
    if (aot_gpr[30] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A3BF38;
    }
    goto L_08A3B334;
L_08A3B334:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[30]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < -22 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B3FC;
      }
      goto L_08A3B33C;
    }
L_08A3B33C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < 23 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08A3B388;
      }
      goto L_08A3B348;
    }
L_08A3B348:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[30] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9816));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A3B37Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B37Cu) goto L_08A3B37C;
    return;
L_08A3B37C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3BF34;
      }
      goto L_08A3B388;
    }
L_08A3B388:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(22));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[18] - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A3B440;
      }
      goto L_08A3B39C;
    }
L_08A3B39C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(9816));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[30] - aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A3B3CCu);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3CCu) goto L_08A3B3CC;
    return;
L_08A3B3CC:
    aot_gpr[4] = (aot_gpr[17] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3B3F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3F0u) goto L_08A3B3F0;
    return;
L_08A3B3F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3BF34;
      }
      goto L_08A3B3FC;
    }
L_08A3B3FC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[18] - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A3B440;
      }
      goto L_08A3B404;
    }
L_08A3B404:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9816));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3B430u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A3B430u) goto L_08A3B430;
    return;
L_08A3B430:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3BF34;
      }
      goto L_08A3B43C;
    }
L_08A3B43C:
    aot_gpr[17] = (aot_gpr[18] - aot_gpr[17]);
    goto L_08A3B440;
L_08A3B440:
    aot_gpr[17] = (aot_gpr[30] + aot_gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08A3B5A0;
      }
      goto L_08A3B44C;
    }
L_08A3B44C:
    aot_gpr[4] = (aot_gpr[17] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[17] & aot_gpr[16]);
      if (branch_taken) {
          goto L_08A3B494;
      }
      goto L_08A3B458;
    }
L_08A3B458:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9816));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A3B48Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B48Cu) goto L_08A3B48C;
    return;
L_08A3B48C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_08A3B494;
L_08A3B494:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 309 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B49C;
    }
L_08A3B49C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 4u));
      if (branch_taken) {
          goto L_08A3B4D8;
      }
      goto L_08A3B4A4;
    }
L_08A3B4A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A3B4A8;
L_08A3B4A8:
    aot_gpr[5] = (0u | 34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8652)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8648)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3B4CC;
    }
L_08A3B4CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A3BF38;
      }
      goto L_08A3B4D4;
    }
L_08A3B4D4:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 4u));
    goto L_08A3B4D8;
L_08A3B4D8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B4E0;
    }
L_08A3B4E0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10016));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (848u << 16u);
      if (branch_taken) {
          goto L_08A3B530;
      }
      goto L_08A3B4F0;
    }
L_08A3B4F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A3B4F8;
L_08A3B4F8:
    aot_gpr[6] = (aot_gpr[16] & 1u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 1u));
        goto L_08A3B51C;
    }
    goto L_08A3B504;
L_08A3B504:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3B510u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B510u) goto L_08A3B510;
    return;
L_08A3B510:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 1u));
    goto L_08A3B51C;
L_08A3B51C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3B4F8;
      }
      goto L_08A3B528;
    }
L_08A3B528:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A3B530;
L_08A3B530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08A3B550u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B550u) goto L_08A3B550;
    return;
L_08A3B550:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (32752u << 16u);
    aot_gpr[17] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[5] = (31904u << 16u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (31888u << 16u);
      if (branch_taken) {
          goto L_08A3B4A4;
      }
      goto L_08A3B574;
    }
L_08A3B574:
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A3B598;
      }
      goto L_08A3B580;
    }
L_08A3B580:
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B598;
    }
L_08A3B598:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B5A0;
    }
L_08A3B5A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[16] = (0u - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B5A8;
    }
L_08A3B5A8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[17] = (aot_gpr[16] & 15u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3B5F4;
      }
      goto L_08A3B5B8;
    }
L_08A3B5B8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9816));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A3B5ECu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5ECu) goto L_08A3B5EC;
    return;
L_08A3B5EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_08A3B5F4;
L_08A3B5F4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 4u));
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B5FC;
    }
L_08A3B5FC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3B6FC;
      }
      goto L_08A3B608;
    }
L_08A3B608:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10056));
      if (branch_taken) {
          goto L_08A3B658;
      }
      goto L_08A3B620;
    }
L_08A3B620:
    aot_gpr[6] = (aot_gpr[16] & 1u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 1u));
        goto L_08A3B644;
    }
    goto L_08A3B62C;
L_08A3B62C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3B638u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B638u) goto L_08A3B638;
    return;
L_08A3B638:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 1u));
    goto L_08A3B644;
L_08A3B644:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3B620;
      }
      goto L_08A3B650;
    }
L_08A3B650:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A3B658;
L_08A3B658:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3B674u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B674u) goto L_08A3B674;
    return;
L_08A3B674:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9396)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9392)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3B694u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3B694u) goto L_08A3B694;
    return;
L_08A3B694:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3B738;
    }
    goto L_08A3B69C;
L_08A3B69C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(9404)));
    aot_gpr[31] = (0x08A3B6B4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(9400)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6B4u) goto L_08A3B6B4;
    return;
L_08A3B6B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3B6D0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6D0u) goto L_08A3B6D0;
    return;
L_08A3B6D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9396)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9392)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3B6F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3B6F0u) goto L_08A3B6F0;
    return;
L_08A3B6F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3B72C;
      }
      goto L_08A3B6F8;
    }
L_08A3B6F8:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A3B6FC;
L_08A3B6FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9396)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9392)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (0u | 34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3B720;
    }
L_08A3B720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A3BF38;
      }
      goto L_08A3B728;
    }
L_08A3B728:
    aot_gpr[4] = (0u | 1u);
    goto L_08A3B72C;
L_08A3B72C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A3B734;
L_08A3B734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A3B738;
L_08A3B738:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3B750u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 103u, 0x08A3D798u>(ctx, &aot_mem) && ctx.pc == 0x08A3B750u) goto L_08A3B750;
    return;
L_08A3B750:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u - aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    goto L_08A3B778;
L_08A3B778:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A3B784u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 79u, 0x08A3D5A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B784u) goto L_08A3B784;
    return;
L_08A3B784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x08A3B7A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7A4u) goto L_08A3B7A4;
    return;
L_08A3B7A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A3B7BCu);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 27u, 0x08A3E290u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7BCu) goto L_08A3B7BC;
    return;
L_08A3B7BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[31] = (0x08A3B7CCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 147u, 0x08A3D9F8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7CCu) goto L_08A3B7CC;
    return;
L_08A3B7CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) < 0;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A3B800;
      }
      goto L_08A3B7EC;
    }
L_08A3B7EC:
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A3B810;
      }
      goto L_08A3B800;
    }
L_08A3B800:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_08A3B810;
L_08A3B810:
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[4]);
        goto L_08A3B820;
    }
    goto L_08A3B818;
L_08A3B818:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3B820;
      }
      goto L_08A3B820;
    }
L_08A3B820:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < -1022 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3B83C;
      }
      goto L_08A3B834;
    }
L_08A3B834:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1075));
      if (branch_taken) {
          goto L_08A3B844;
      }
      goto L_08A3B83C;
    }
L_08A3B83C:
    aot_gpr[4] = (0u | 54u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_08A3B844;
L_08A3B844:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_08A3B85C;
    }
    goto L_08A3B85C;
L_08A3B85C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (aot_gpr[18] | 0u);
        goto L_08A3B868;
    }
    goto L_08A3B868;
L_08A3B868:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3B87C;
      }
      goto L_08A3B870;
    }
L_08A3B870:
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[4]);
    goto L_08A3B87C;
L_08A3B87C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A3B8B4;
      }
      goto L_08A3B884;
    }
L_08A3B884:
    aot_gpr[31] = (0x08A3B88Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 171u, 0x08A3DC40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B88Cu) goto L_08A3B88C;
    return;
L_08A3B88C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A3B8A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 149u, 0x08A3DA34u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8A4u) goto L_08A3B8A4;
    return;
L_08A3B8A4:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A3B8B4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8B4u) goto L_08A3B8B4;
    return;
L_08A3B8B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
      if (branch_taken) {
          goto L_08A3B8D0;
      }
      goto L_08A3B8BC;
    }
L_08A3B8BC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A3B8CCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 188u, 0x08A3DD54u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8CCu) goto L_08A3B8CC;
    return;
L_08A3B8CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    goto L_08A3B8D0;
L_08A3B8D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A3B8E8;
      }
      goto L_08A3B8D8;
    }
L_08A3B8D8:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A3B8E4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 171u, 0x08A3DC40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8E4u) goto L_08A3B8E4;
    return;
L_08A3B8E4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    goto L_08A3B8E8;
L_08A3B8E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A3B900;
      }
      goto L_08A3B8F0;
    }
L_08A3B8F0:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A3B8FCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 188u, 0x08A3DD54u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8FCu) goto L_08A3B8FC;
    return;
L_08A3B8FC:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    goto L_08A3B900;
L_08A3B900:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A3B918;
      }
      goto L_08A3B908;
    }
L_08A3B908:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A3B914u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 188u, 0x08A3DD54u>(ctx, &aot_mem) && ctx.pc == 0x08A3B914u) goto L_08A3B914;
    return;
L_08A3B914:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08A3B918;
L_08A3B918:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A3B930u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 210u, 0x08A3DF10u>(ctx, &aot_mem) && ctx.pc == 0x08A3B930u) goto L_08A3B930;
    return;
L_08A3B930:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A3B94Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 201u, 0x08A3DE88u>(ctx, &aot_mem) && ctx.pc == 0x08A3B94Cu) goto L_08A3B94C;
    return;
L_08A3B94C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3B9B8;
      }
      goto L_08A3B958;
    }
L_08A3B958:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    { const bool branch_taken = aot_gpr[30] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3B964;
    }
L_08A3B964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3BEF8;
    }
    goto L_08A3B970;
L_08A3B970:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (16u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3BEF8;
    }
    goto L_08A3B988;
L_08A3B988:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A3B998u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 188u, 0x08A3DD54u>(ctx, &aot_mem) && ctx.pc == 0x08A3B998u) goto L_08A3B998;
    return;
L_08A3B998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[31] = (0x08A3B9A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 201u, 0x08A3DE88u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9A8u) goto L_08A3B9A8;
    return;
L_08A3B9A8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (32752u << 16u);
      if (branch_taken) {
          goto L_08A3BA20;
      }
      goto L_08A3B9B0;
    }
L_08A3B9B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A3BEF8;
      }
      goto L_08A3B9B8;
    }
L_08A3B9B8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A3BAE8;
      }
      goto L_08A3B9C0;
    }
L_08A3B9C0:
    aot_gpr[4] = (16u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3BA0C;
      }
      goto L_08A3B9D4;
    }
L_08A3B9D4:
    aot_gpr[6] = (16u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A3BA48;
      }
      goto L_08A3B9E4;
    }
L_08A3B9E4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A3BA48;
      }
      goto L_08A3B9F0;
    }
L_08A3B9F0:
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
    aot_gpr[5] = (16u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3BA0C;
    }
L_08A3BA0C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A3BA48;
      }
      goto L_08A3BA14;
    }
L_08A3BA14:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A3BA48;
      }
      goto L_08A3BA1C;
    }
L_08A3BA1C:
    aot_gpr[4] = (32752u << 16u);
    goto L_08A3BA20;
L_08A3BA20:
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
    aot_gpr[5] = (16u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3BA48;
    }
L_08A3BA48:
    if (aot_gpr[4] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3BEF8;
    }
    goto L_08A3BA50;
L_08A3BA50:
    if (aot_gpr[30] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A3BA8C;
    }
    goto L_08A3BA58;
L_08A3BA58:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BA6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 8u, 0x08A3E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA6Cu) goto L_08A3BA6C;
    return;
L_08A3BA6C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BA80u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA80u) goto L_08A3BA80;
    return;
L_08A3BA80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3BA8C;
    }
L_08A3BA8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9396)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9392)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BAA8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 8u, 0x08A3E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAA8u) goto L_08A3BAA8;
    return;
L_08A3BAA8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BABCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BABCu) goto L_08A3BABC;
    return;
L_08A3BABC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3BAD8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BAD8u) goto L_08A3BAD8;
    return;
L_08A3BAD8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3B6FC;
      }
      goto L_08A3BAE0;
    }
L_08A3BAE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A3BEF8;
      }
      goto L_08A3BAE8;
    }
L_08A3BAE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08A3BAF4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 43u, 0x08A3E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAF4u) goto L_08A3BAF4;
    return;
L_08A3BAF4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9404)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9400)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BB14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB14u) goto L_08A3BB14;
    return;
L_08A3BB14:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[5] = (32752u << 16u);
      if (branch_taken) {
          goto L_08A3BBF8;
      }
      goto L_08A3BB1C;
    }
L_08A3BB1C:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BB3C;
      }
      goto L_08A3BB24;
    }
L_08A3BB24:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9412)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9408)));
    aot_gpr[20] = (aot_gpr[21] & aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3BC48;
      }
      goto L_08A3BB3C;
    }
L_08A3BB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BB60;
      }
      goto L_08A3BB48;
    }
L_08A3BB48:
    aot_gpr[6] = (16u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[21] & aot_gpr[6]);
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_08A3BB90;
    }
    goto L_08A3BB5C;
L_08A3BB5C:
    aot_gpr[6] = (0u | 1u);
    goto L_08A3BB60;
L_08A3BB60:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BB74;
      }
      goto L_08A3BB68;
    }
L_08A3BB68:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3B6FC;
      }
      goto L_08A3BB70;
    }
L_08A3BB70:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A3BB74;
L_08A3BB74:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9408)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9420)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9416)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[21] & aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3BC48;
      }
      goto L_08A3BB90;
    }
L_08A3BB90:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9412)));
    aot_gpr[20] = (32752u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9408)));
    aot_gpr[20] = (aot_gpr[21] & aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BBACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BBACu) goto L_08A3BBAC;
    return;
L_08A3BBAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BBC4;
      }
      goto L_08A3BBB4;
    }
L_08A3BBB4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9428)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9424)));
      if (branch_taken) {
          goto L_08A3BBE0;
      }
      goto L_08A3BBC4;
    }
L_08A3BBC4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9428)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9424)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BBD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3BBD8u) goto L_08A3BBD8;
    return;
L_08A3BBD8:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A3BBE0;
L_08A3BBE0:
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3BBECu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 220u, 0x08A3FFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BBECu) goto L_08A3BBEC;
    return;
L_08A3BBEC:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3BC48;
      }
      goto L_08A3BBF8;
    }
L_08A3BBF8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9428)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9424)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BC10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC10u) goto L_08A3BC10;
    return;
L_08A3BC10:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (32752u << 16u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[20] = (aot_gpr[21] & aot_gpr[20]);
      if (branch_taken) {
          goto L_08A3BC40;
      }
      goto L_08A3BC2C;
    }
L_08A3BC2C:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A3BC38u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 220u, 0x08A3FFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC38u) goto L_08A3BC38;
    return;
L_08A3BC38:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A3BC40;
L_08A3BC40:
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A3BC48;
L_08A3BC48:
    aot_gpr[22] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (32736u << 16u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    aot_gpr[4] = (832u << 16u);
      if (branch_taken) {
          goto L_08A3BD24;
      }
      goto L_08A3BC58;
    }
L_08A3BC58:
    aot_gpr[4] = (848u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[21] - aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A3BC88u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 8u, 0x08A3E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC88u) goto L_08A3BC88;
    return;
L_08A3BC88:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BC9Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC9Cu) goto L_08A3BC9C;
    return;
L_08A3BC9C:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BCB0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3BCB0u) goto L_08A3BCB0;
    return;
L_08A3BCB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
    aot_gpr[5] = (31904u << 16u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (848u << 16u);
      if (branch_taken) {
          goto L_08A3BD10;
      }
      goto L_08A3BCD4;
    }
L_08A3BCD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (32752u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (32752u << 16u);
      if (branch_taken) {
          goto L_08A3BCFC;
      }
      goto L_08A3BCE8;
    }
L_08A3BCE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3B4A8;
    }
    goto L_08A3BCF8;
L_08A3BCF8:
    aot_gpr[5] = (32752u << 16u);
    goto L_08A3BCFC;
L_08A3BCFC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3BEA4;
      }
      goto L_08A3BD10;
    }
L_08A3BD10:
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (32752u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3BDE4;
      }
      goto L_08A3BD24;
    }
L_08A3BD24:
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BD94;
      }
      goto L_08A3BD30;
    }
L_08A3BD30:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9412)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9408)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A3BD44u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BD44u) goto L_08A3BD44;
    return;
L_08A3BD44:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BD94;
      }
      goto L_08A3BD4C;
    }
L_08A3BD4C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9428)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9424)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A3BD60u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD60u) goto L_08A3BD60;
    return;
L_08A3BD60:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BD6Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD6Cu) goto L_08A3BD6C;
    return;
L_08A3BD6C:
    aot_gpr[31] = (0x08A3BD74u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD74u) goto L_08A3BD74;
    return;
L_08A3BD74:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3BD94;
      }
      goto L_08A3BD80;
    }
L_08A3BD80:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BD8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 220u, 0x08A3FFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD8Cu) goto L_08A3BD8C;
    return;
L_08A3BD8C:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08A3BD94;
L_08A3BD94:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A3BDA8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 8u, 0x08A3E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDA8u) goto L_08A3BDA8;
    return;
L_08A3BDA8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BDBCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDBCu) goto L_08A3BDBC;
    return;
L_08A3BDBC:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3BDD0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDD0u) goto L_08A3BDD0;
    return;
L_08A3BDD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
    goto L_08A3BDE4;
L_08A3BDE4:
    if (aot_gpr[22] != aot_gpr[4]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3BEA8;
    }
    goto L_08A3BDEC;
L_08A3BDEC:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A3BDF8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDF8u) goto L_08A3BDF8;
    return;
L_08A3BDF8:
    aot_gpr[31] = (0x08A3BE00u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE00u) goto L_08A3BE00;
    return;
L_08A3BE00:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3BE14u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BE14u) goto L_08A3BE14;
    return;
L_08A3BE14:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3BE40;
      }
      goto L_08A3BE20;
    }
L_08A3BE20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BE44;
      }
      goto L_08A3BE2C;
    }
L_08A3BE2C:
    aot_gpr[4] = (16u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BE88;
      }
      goto L_08A3BE40;
    }
L_08A3BE40:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A3BE44;
L_08A3BE44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9436)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9432)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BE58u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BE58u) goto L_08A3BE58;
    return;
L_08A3BE58:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3BEF4;
      }
      goto L_08A3BE60;
    }
L_08A3BE60:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9444)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9440)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BE74u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BE74u) goto L_08A3BE74;
    return;
L_08A3BE74:
    if (static_cast<std::int32_t>(aot_gpr[2]) > 0) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3BEF8;
    }
    goto L_08A3BE7C;
L_08A3BE7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A3BEA8;
      }
      goto L_08A3BE84;
    }
L_08A3BE84:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A3BE88;
L_08A3BE88:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9452)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9448)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3BE9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3BE9Cu) goto L_08A3BE9C;
    return;
L_08A3BE9C:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A3BEF8;
    }
    goto L_08A3BEA4;
L_08A3BEA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A3BEA8;
L_08A3BEA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08A3BEB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BEB4u) goto L_08A3BEB4;
    return;
L_08A3BEB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08A3BEC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BEC0u) goto L_08A3BEC0;
    return;
L_08A3BEC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08A3BECCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BECCu) goto L_08A3BECC;
    return;
L_08A3BECC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08A3BED8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BED8u) goto L_08A3BED8;
    return;
L_08A3BED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3B778;
      }
      goto L_08A3BEF4;
    }
L_08A3BEF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A3BEF8;
L_08A3BEF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08A3BF04u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF04u) goto L_08A3BF04;
    return;
L_08A3BF04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08A3BF10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF10u) goto L_08A3BF10;
    return;
L_08A3BF10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08A3BF1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF1Cu) goto L_08A3BF1C;
    return;
L_08A3BF1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08A3BF28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF28u) goto L_08A3BF28;
    return;
L_08A3BF28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08A3BF34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 90u, 0x08A3D664u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF34u) goto L_08A3BF34;
    return;
L_08A3BF34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A3BF38;
L_08A3BF38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[23]);
        goto L_08A3BF48;
    }
    goto L_08A3BF48;
L_08A3BF48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[3] = (aot_gpr[5] | 0u);
        goto L_08A3BF64;
    }
    goto L_08A3BF54;
L_08A3BF54:
    aot_gpr[31] = (0x08A3BF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 220u, 0x08A3FFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF5Cu) goto L_08A3BF5C;
    return;
L_08A3BF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF68;
      }
      goto L_08A3BF64;
    }
L_08A3BF64:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_08A3BF68;
L_08A3BF68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3BF98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3BFB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 286u, 0x08A3AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BFB4u) goto L_08A3BFB4;
    return;
L_08A3BFB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3BFC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3BFD8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(92));
    goto L_08A3BFE4;
L_08A3BFD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3BFE4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFF8;
      }
      goto L_08A3BFEC;
    }
L_08A3BFEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 1u, 0x08A3C000u>(ctx, &aot_mem); return;
      }
      goto L_08A3BFF8;
    }
L_08A3BFF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 2u, 0x08A3C008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 1u, 0x08A3C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0567(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0567_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_567(Runtime &runtime) {
    runtime.register_generated_unit(567u, 0x08A3B000u, 4096u, &recomp_unit_0567, &recomp_unit_0567_entry);
    runtime.register_function(0x08A3B000u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B010u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B014u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B01Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B030u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B038u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B050u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B054u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B05Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B068u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B078u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B084u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B090u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B09Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0B0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0B4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0C0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0D0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0DCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0E4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B0F4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B100u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B114u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B120u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B130u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B134u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B144u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B148u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B150u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B15Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B16Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B174u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B18Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B198u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1A0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1ACu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1B4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1C0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1C8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1D0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1D8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1E0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1F0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1F4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B1FCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B204u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B20Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B220u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B228u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B240u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B250u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B258u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B260u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B268u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B270u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B274u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B27Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B288u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B290u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B29Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B2A8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B2B0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B2C0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B2ECu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B2FCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B310u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B320u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B32Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B334u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B33Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B348u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B37Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B388u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B39Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B3CCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B3F0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B3FCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B404u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B430u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B43Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B440u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B44Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B458u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B48Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B494u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B49Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4A4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4A8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4CCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4D4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4D8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4E0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4F0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B4F8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B504u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B510u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B51Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B528u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B530u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B550u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B574u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B580u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B598u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B5A0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B5A8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B5B8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B5ECu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B5F4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B5FCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B608u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B620u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B62Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B638u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B644u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B650u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B658u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B674u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B694u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B69Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B6B4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B6D0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B6F0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B6F8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B6FCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B720u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B728u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B72Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B734u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B738u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B750u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B778u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B784u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B7A4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B7BCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B7CCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B7ECu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B800u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B810u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B818u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B820u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B834u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B83Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B844u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B85Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B868u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B870u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B87Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B884u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B88Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8A4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8B4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8BCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8CCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8D0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8D8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8E4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8E8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8F0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B8FCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B900u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B908u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B914u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B918u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B930u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B94Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B958u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B964u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B970u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B988u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B998u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9A8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9B0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9B8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9C0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9D4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9E4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3B9F0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA0Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA14u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA1Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA20u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA48u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA50u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA58u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA6Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA80u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BA8Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BAA8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BABCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BAD8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BAE0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BAE8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BAF4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB14u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB1Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB24u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB3Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB48u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB5Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB60u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB68u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB70u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB74u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BB90u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBACu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBB4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBC4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBD8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBE0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBECu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BBF8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC10u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC2Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC38u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC40u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC48u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC58u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC88u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BC9Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BCB0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BCD4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BCE8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BCF8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BCFCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD10u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD24u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD30u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD44u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD4Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD60u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD6Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD74u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD80u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD8Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BD94u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BDA8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BDBCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BDD0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BDE4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BDECu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BDF8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE00u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE14u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE20u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE2Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE40u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE44u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE58u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE60u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE74u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE7Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE84u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE88u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BE9Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BEA4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BEA8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BEB4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BEC0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BECCu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BED8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BEF4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BEF8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF04u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF10u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF1Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF28u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF34u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF38u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF48u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF54u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF5Cu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF64u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF68u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BF98u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BFB4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BFC0u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BFD8u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BFE4u, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BFECu, &recomp_unit_0567, "recomp_unit_0567");
    runtime.register_function(0x08A3BFF8u, &recomp_unit_0567, "recomp_unit_0567");
}
} // namespace psprecomp
