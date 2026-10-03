#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0598[1024] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26,
    0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0,
    36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0,
    0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0,
    0, 55, 56, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66,
    0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0,
    0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107,
    0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116,
    0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0,
    126, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153,
    0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169,
    0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185,
    0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200,
    0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216,
    0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227,
    0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237,
    0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249,
    0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265,
    0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281,
    0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297,
    0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313,
    0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329,
    0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343,
    0, 344, 0, 0, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 351, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359,
    0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373,
};
void recomp_unit_0598_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A5A000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0598[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5A000;
    case 2u: goto L_08A5A008;
    case 3u: goto L_08A5A010;
    case 4u: goto L_08A5A018;
    case 5u: goto L_08A5A020;
    case 6u: goto L_08A5A028;
    case 7u: goto L_08A5A030;
    case 8u: goto L_08A5A038;
    case 9u: goto L_08A5A040;
    case 10u: goto L_08A5A048;
    case 11u: goto L_08A5A050;
    case 12u: goto L_08A5A058;
    case 13u: goto L_08A5A060;
    case 14u: goto L_08A5A068;
    case 15u: goto L_08A5A070;
    case 16u: goto L_08A5A078;
    case 17u: goto L_08A5A080;
    case 18u: goto L_08A5A088;
    case 19u: goto L_08A5A090;
    case 20u: goto L_08A5A0AC;
    case 21u: goto L_08A5A0C4;
    case 22u: goto L_08A5A0D0;
    case 23u: goto L_08A5A0D8;
    case 24u: goto L_08A5A0EC;
    case 25u: goto L_08A5A0F4;
    case 26u: goto L_08A5A0FC;
    case 27u: goto L_08A5A104;
    case 28u: goto L_08A5A10C;
    case 29u: goto L_08A5A128;
    case 30u: goto L_08A5A140;
    case 31u: goto L_08A5A14C;
    case 32u: goto L_08A5A154;
    case 33u: goto L_08A5A168;
    case 34u: goto L_08A5A170;
    case 35u: goto L_08A5A178;
    case 36u: goto L_08A5A180;
    case 37u: goto L_08A5A188;
    case 38u: goto L_08A5A190;
    case 39u: goto L_08A5A198;
    case 40u: goto L_08A5A1A0;
    case 41u: goto L_08A5A1A8;
    case 42u: goto L_08A5A1B0;
    case 43u: goto L_08A5A1CC;
    case 44u: goto L_08A5A1E4;
    case 45u: goto L_08A5A1F0;
    case 46u: goto L_08A5A1F8;
    case 47u: goto L_08A5A20C;
    case 48u: goto L_08A5A214;
    case 49u: goto L_08A5A21C;
    case 50u: goto L_08A5A238;
    case 51u: goto L_08A5A250;
    case 52u: goto L_08A5A25C;
    case 53u: goto L_08A5A268;
    case 54u: goto L_08A5A270;
    case 55u: goto L_08A5A284;
    case 56u: goto L_08A5A288;
    case 57u: goto L_08A5A28C;
    case 58u: goto L_08A5A294;
    case 59u: goto L_08A5A29C;
    case 60u: goto L_08A5A2A4;
    case 61u: goto L_08A5A2AC;
    case 62u: goto L_08A5A2B4;
    case 63u: goto L_08A5A2BC;
    case 64u: goto L_08A5A2D8;
    case 65u: goto L_08A5A2F0;
    case 66u: goto L_08A5A2FC;
    case 67u: goto L_08A5A304;
    case 68u: goto L_08A5A318;
    case 69u: goto L_08A5A320;
    case 70u: goto L_08A5A328;
    case 71u: goto L_08A5A330;
    case 72u: goto L_08A5A34C;
    case 73u: goto L_08A5A364;
    case 74u: goto L_08A5A370;
    case 75u: goto L_08A5A378;
    case 76u: goto L_08A5A38C;
    case 77u: goto L_08A5A394;
    case 78u: goto L_08A5A3B0;
    case 79u: goto L_08A5A3C8;
    case 80u: goto L_08A5A3D4;
    case 81u: goto L_08A5A3DC;
    case 82u: goto L_08A5A3F0;
    case 83u: goto L_08A5A3F8;
    case 84u: goto L_08A5A414;
    case 85u: goto L_08A5A42C;
    case 86u: goto L_08A5A438;
    case 87u: goto L_08A5A440;
    case 88u: goto L_08A5A454;
    case 89u: goto L_08A5A45C;
    case 90u: goto L_08A5A464;
    case 91u: goto L_08A5A480;
    case 92u: goto L_08A5A498;
    case 93u: goto L_08A5A4A4;
    case 94u: goto L_08A5A4AC;
    case 95u: goto L_08A5A4C0;
    case 96u: goto L_08A5A4C8;
    case 97u: goto L_08A5A4D0;
    case 98u: goto L_08A5A4EC;
    case 99u: goto L_08A5A504;
    case 100u: goto L_08A5A510;
    case 101u: goto L_08A5A518;
    case 102u: goto L_08A5A52C;
    case 103u: goto L_08A5A534;
    case 104u: goto L_08A5A550;
    case 105u: goto L_08A5A568;
    case 106u: goto L_08A5A574;
    case 107u: goto L_08A5A57C;
    case 108u: goto L_08A5A590;
    case 109u: goto L_08A5A598;
    case 110u: goto L_08A5A5A0;
    case 111u: goto L_08A5A5A8;
    case 112u: goto L_08A5A5C4;
    case 113u: goto L_08A5A5DC;
    case 114u: goto L_08A5A5E8;
    case 115u: goto L_08A5A5F4;
    case 116u: goto L_08A5A5FC;
    case 117u: goto L_08A5A610;
    case 118u: goto L_08A5A618;
    case 119u: goto L_08A5A620;
    case 120u: goto L_08A5A628;
    case 121u: goto L_08A5A630;
    case 122u: goto L_08A5A638;
    case 123u: goto L_08A5A640;
    case 124u: goto L_08A5A65C;
    case 125u: goto L_08A5A674;
    case 126u: goto L_08A5A680;
    case 127u: goto L_08A5A688;
    case 128u: goto L_08A5A69C;
    case 129u: goto L_08A5A6A4;
    case 130u: goto L_08A5A6B8;
    case 131u: goto L_08A5A6C8;
    case 132u: goto L_08A5A6D0;
    case 133u: goto L_08A5A6D8;
    case 134u: goto L_08A5A6E4;
    case 135u: goto L_08A5A6F4;
    case 136u: goto L_08A5A704;
    case 137u: goto L_08A5A70C;
    case 138u: goto L_08A5A714;
    case 139u: goto L_08A5A720;
    case 140u: goto L_08A5A744;
    case 141u: goto L_08A5A760;
    case 142u: goto L_08A5A778;
    case 143u: goto L_08A5A7F4;
    case 144u: goto L_08A5A814;
    case 145u: goto L_08A5A820;
    case 146u: goto L_08A5A828;
    case 147u: goto L_08A5A82C;
    case 148u: goto L_08A5A854;
    case 149u: goto L_08A5A85C;
    case 150u: goto L_08A5A864;
    case 151u: goto L_08A5A86C;
    case 152u: goto L_08A5A874;
    case 153u: goto L_08A5A87C;
    case 154u: goto L_08A5A884;
    case 155u: goto L_08A5A88C;
    case 156u: goto L_08A5A894;
    case 157u: goto L_08A5A89C;
    case 158u: goto L_08A5A8A4;
    case 159u: goto L_08A5A8AC;
    case 160u: goto L_08A5A8B4;
    case 161u: goto L_08A5A8BC;
    case 162u: goto L_08A5A8C4;
    case 163u: goto L_08A5A8CC;
    case 164u: goto L_08A5A8D4;
    case 165u: goto L_08A5A8DC;
    case 166u: goto L_08A5A8E4;
    case 167u: goto L_08A5A8EC;
    case 168u: goto L_08A5A8F4;
    case 169u: goto L_08A5A8FC;
    case 170u: goto L_08A5A904;
    case 171u: goto L_08A5A90C;
    case 172u: goto L_08A5A914;
    case 173u: goto L_08A5A91C;
    case 174u: goto L_08A5A924;
    case 175u: goto L_08A5A92C;
    case 176u: goto L_08A5A934;
    case 177u: goto L_08A5A93C;
    case 178u: goto L_08A5A944;
    case 179u: goto L_08A5A94C;
    case 180u: goto L_08A5A954;
    case 181u: goto L_08A5A95C;
    case 182u: goto L_08A5A964;
    case 183u: goto L_08A5A96C;
    case 184u: goto L_08A5A974;
    case 185u: goto L_08A5A97C;
    case 186u: goto L_08A5A984;
    case 187u: goto L_08A5A98C;
    case 188u: goto L_08A5A994;
    case 189u: goto L_08A5A99C;
    case 190u: goto L_08A5A9A4;
    case 191u: goto L_08A5A9AC;
    case 192u: goto L_08A5A9B4;
    case 193u: goto L_08A5A9BC;
    case 194u: goto L_08A5A9C4;
    case 195u: goto L_08A5A9CC;
    case 196u: goto L_08A5A9D4;
    case 197u: goto L_08A5A9DC;
    case 198u: goto L_08A5A9EC;
    case 199u: goto L_08A5A9F4;
    case 200u: goto L_08A5A9FC;
    case 201u: goto L_08A5AA04;
    case 202u: goto L_08A5AA0C;
    case 203u: goto L_08A5AA14;
    case 204u: goto L_08A5AA1C;
    case 205u: goto L_08A5AA24;
    case 206u: goto L_08A5AA2C;
    case 207u: goto L_08A5AA34;
    case 208u: goto L_08A5AA3C;
    case 209u: goto L_08A5AA44;
    case 210u: goto L_08A5AA4C;
    case 211u: goto L_08A5AA54;
    case 212u: goto L_08A5AA5C;
    case 213u: goto L_08A5AA64;
    case 214u: goto L_08A5AA6C;
    case 215u: goto L_08A5AA74;
    case 216u: goto L_08A5AA7C;
    case 217u: goto L_08A5AA84;
    case 218u: goto L_08A5AA8C;
    case 219u: goto L_08A5AA94;
    case 220u: goto L_08A5AAB4;
    case 221u: goto L_08A5AABC;
    case 222u: goto L_08A5AAC4;
    case 223u: goto L_08A5AACC;
    case 224u: goto L_08A5AADC;
    case 225u: goto L_08A5AAEC;
    case 226u: goto L_08A5AAF4;
    case 227u: goto L_08A5AAFC;
    case 228u: goto L_08A5AB0C;
    case 229u: goto L_08A5AB14;
    case 230u: goto L_08A5AB1C;
    case 231u: goto L_08A5AB34;
    case 232u: goto L_08A5AB44;
    case 233u: goto L_08A5AB4C;
    case 234u: goto L_08A5AB64;
    case 235u: goto L_08A5AB6C;
    case 236u: goto L_08A5AB74;
    case 237u: goto L_08A5AB7C;
    case 238u: goto L_08A5AB84;
    case 239u: goto L_08A5AB8C;
    case 240u: goto L_08A5AB94;
    case 241u: goto L_08A5AB9C;
    case 242u: goto L_08A5ABA4;
    case 243u: goto L_08A5ABBC;
    case 244u: goto L_08A5ABCC;
    case 245u: goto L_08A5ABD4;
    case 246u: goto L_08A5ABDC;
    case 247u: goto L_08A5ABE4;
    case 248u: goto L_08A5ABF4;
    case 249u: goto L_08A5ABFC;
    case 250u: goto L_08A5AC04;
    case 251u: goto L_08A5AC0C;
    case 252u: goto L_08A5AC14;
    case 253u: goto L_08A5AC1C;
    case 254u: goto L_08A5AC24;
    case 255u: goto L_08A5AC2C;
    case 256u: goto L_08A5AC34;
    case 257u: goto L_08A5AC3C;
    case 258u: goto L_08A5AC44;
    case 259u: goto L_08A5AC4C;
    case 260u: goto L_08A5AC54;
    case 261u: goto L_08A5AC5C;
    case 262u: goto L_08A5AC64;
    case 263u: goto L_08A5AC6C;
    case 264u: goto L_08A5AC74;
    case 265u: goto L_08A5AC7C;
    case 266u: goto L_08A5AC84;
    case 267u: goto L_08A5AC8C;
    case 268u: goto L_08A5AC94;
    case 269u: goto L_08A5AC9C;
    case 270u: goto L_08A5ACA4;
    case 271u: goto L_08A5ACAC;
    case 272u: goto L_08A5ACB4;
    case 273u: goto L_08A5ACBC;
    case 274u: goto L_08A5ACC4;
    case 275u: goto L_08A5ACCC;
    case 276u: goto L_08A5ACD4;
    case 277u: goto L_08A5ACDC;
    case 278u: goto L_08A5ACE4;
    case 279u: goto L_08A5ACEC;
    case 280u: goto L_08A5ACF4;
    case 281u: goto L_08A5ACFC;
    case 282u: goto L_08A5AD04;
    case 283u: goto L_08A5AD0C;
    case 284u: goto L_08A5AD14;
    case 285u: goto L_08A5AD1C;
    case 286u: goto L_08A5AD24;
    case 287u: goto L_08A5AD2C;
    case 288u: goto L_08A5AD34;
    case 289u: goto L_08A5AD3C;
    case 290u: goto L_08A5AD44;
    case 291u: goto L_08A5AD4C;
    case 292u: goto L_08A5AD54;
    case 293u: goto L_08A5AD5C;
    case 294u: goto L_08A5AD64;
    case 295u: goto L_08A5AD6C;
    case 296u: goto L_08A5AD74;
    case 297u: goto L_08A5AD7C;
    case 298u: goto L_08A5AD84;
    case 299u: goto L_08A5AD8C;
    case 300u: goto L_08A5AD94;
    case 301u: goto L_08A5AD9C;
    case 302u: goto L_08A5ADA4;
    case 303u: goto L_08A5ADAC;
    case 304u: goto L_08A5ADB4;
    case 305u: goto L_08A5ADBC;
    case 306u: goto L_08A5ADC4;
    case 307u: goto L_08A5ADCC;
    case 308u: goto L_08A5ADD4;
    case 309u: goto L_08A5ADDC;
    case 310u: goto L_08A5ADE4;
    case 311u: goto L_08A5ADEC;
    case 312u: goto L_08A5ADF4;
    case 313u: goto L_08A5ADFC;
    case 314u: goto L_08A5AE04;
    case 315u: goto L_08A5AE0C;
    case 316u: goto L_08A5AE14;
    case 317u: goto L_08A5AE1C;
    case 318u: goto L_08A5AE24;
    case 319u: goto L_08A5AE2C;
    case 320u: goto L_08A5AE34;
    case 321u: goto L_08A5AE3C;
    case 322u: goto L_08A5AE44;
    case 323u: goto L_08A5AE4C;
    case 324u: goto L_08A5AE54;
    case 325u: goto L_08A5AE5C;
    case 326u: goto L_08A5AE64;
    case 327u: goto L_08A5AE6C;
    case 328u: goto L_08A5AE74;
    case 329u: goto L_08A5AE7C;
    case 330u: goto L_08A5AE84;
    case 331u: goto L_08A5AE8C;
    case 332u: goto L_08A5AE94;
    case 333u: goto L_08A5AE9C;
    case 334u: goto L_08A5AEA4;
    case 335u: goto L_08A5AEAC;
    case 336u: goto L_08A5AEB4;
    case 337u: goto L_08A5AEBC;
    case 338u: goto L_08A5AEC4;
    case 339u: goto L_08A5AECC;
    case 340u: goto L_08A5AED4;
    case 341u: goto L_08A5AEDC;
    case 342u: goto L_08A5AEF4;
    case 343u: goto L_08A5AEFC;
    case 344u: goto L_08A5AF04;
    case 345u: goto L_08A5AF14;
    case 346u: goto L_08A5AF1C;
    case 347u: goto L_08A5AF24;
    case 348u: goto L_08A5AF2C;
    case 349u: goto L_08A5AF34;
    case 350u: goto L_08A5AF3C;
    case 351u: goto L_08A5AF40;
    case 352u: goto L_08A5AF44;
    case 353u: goto L_08A5AF4C;
    case 354u: goto L_08A5AF54;
    case 355u: goto L_08A5AF5C;
    case 356u: goto L_08A5AF64;
    case 357u: goto L_08A5AF6C;
    case 358u: goto L_08A5AF74;
    case 359u: goto L_08A5AF7C;
    case 360u: goto L_08A5AF84;
    case 361u: goto L_08A5AF8C;
    case 362u: goto L_08A5AF94;
    case 363u: goto L_08A5AF9C;
    case 364u: goto L_08A5AFA4;
    case 365u: goto L_08A5AFBC;
    case 366u: goto L_08A5AFC4;
    case 367u: goto L_08A5AFCC;
    case 368u: goto L_08A5AFD4;
    case 369u: goto L_08A5AFDC;
    case 370u: goto L_08A5AFE4;
    case 371u: goto L_08A5AFEC;
    case 372u: goto L_08A5AFF4;
    case 373u: goto L_08A5AFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5A000:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A008:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A010:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A018:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A020:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A028:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A030:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A038:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A040:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A048:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A050:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A058:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A060:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A068:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A070:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A078:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A080:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A088:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A090:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A0D8;
      }
      goto L_08A5A0AC;
    }
L_08A5A0AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15824));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A0C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 54u, 0x08A032E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A0C4u) goto L_08A5A0C4;
    return;
L_08A5A0C4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A0D8;
      }
      goto L_08A5A0D0;
    }
L_08A5A0D0:
    aot_gpr[31] = (0x08A5A0D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0532_entry, 532u, 3u, 0x08A18028u>(ctx, &aot_mem) && ctx.pc == 0x08A5A0D8u) goto L_08A5A0D8;
    return;
L_08A5A0D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A0EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A0F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A0FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A104:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A10C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A154;
      }
      goto L_08A5A128;
    }
L_08A5A128:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16048));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A140u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A140u) goto L_08A5A140;
    return;
L_08A5A140:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A154;
      }
      goto L_08A5A14C;
    }
L_08A5A14C:
    aot_gpr[31] = (0x08A5A154u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A154u) goto L_08A5A154;
    return;
L_08A5A154:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A168:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A170:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A178:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A180:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A188:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A190:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A198:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A1A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A1A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A1B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A1F8;
      }
      goto L_08A5A1CC;
    }
L_08A5A1CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A1E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A1E4u) goto L_08A5A1E4;
    return;
L_08A5A1E4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A1F8;
      }
      goto L_08A5A1F0;
    }
L_08A5A1F0:
    aot_gpr[31] = (0x08A5A1F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A1F8u) goto L_08A5A1F8;
    return;
L_08A5A1F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A20C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A214:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A21C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A270;
      }
      goto L_08A5A238;
    }
L_08A5A238:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16816));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(304));
    aot_gpr[31] = (0x08A5A250u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A5A250u) goto L_08A5A250;
    return;
L_08A5A250:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A25Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A25Cu) goto L_08A5A25C;
    return;
L_08A5A25C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A270;
      }
      goto L_08A5A268;
    }
L_08A5A268:
    aot_gpr[31] = (0x08A5A270u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A270u) goto L_08A5A270;
    return;
L_08A5A270:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A284:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A288:
    // nop
    goto L_08A5A28C;
L_08A5A28C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A294:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A29C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A2A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A2AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A2B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(444)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A2BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A304;
      }
      goto L_08A5A2D8;
    }
L_08A5A2D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A2F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A2F0u) goto L_08A5A2F0;
    return;
L_08A5A2F0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A304;
      }
      goto L_08A5A2FC;
    }
L_08A5A2FC:
    aot_gpr[31] = (0x08A5A304u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A304u) goto L_08A5A304;
    return;
L_08A5A304:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A318:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A320:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(844)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A328:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A378;
      }
      goto L_08A5A34C;
    }
L_08A5A34C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A364u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A364u) goto L_08A5A364;
    return;
L_08A5A364:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A378;
      }
      goto L_08A5A370;
    }
L_08A5A370:
    aot_gpr[31] = (0x08A5A378u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A378u) goto L_08A5A378;
    return;
L_08A5A378:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A38C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A394:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A3DC;
      }
      goto L_08A5A3B0;
    }
L_08A5A3B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A3C8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A3C8u) goto L_08A5A3C8;
    return;
L_08A5A3C8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A3DC;
      }
      goto L_08A5A3D4;
    }
L_08A5A3D4:
    aot_gpr[31] = (0x08A5A3DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A3DCu) goto L_08A5A3DC;
    return;
L_08A5A3DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A3F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A440;
      }
      goto L_08A5A414;
    }
L_08A5A414:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A42Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A42Cu) goto L_08A5A42C;
    return;
L_08A5A42C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A440;
      }
      goto L_08A5A438;
    }
L_08A5A438:
    aot_gpr[31] = (0x08A5A440u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A440u) goto L_08A5A440;
    return;
L_08A5A440:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A454:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A45C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(468));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A4AC;
      }
      goto L_08A5A480;
    }
L_08A5A480:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18440));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A498u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A498u) goto L_08A5A498;
    return;
L_08A5A498:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A4AC;
      }
      goto L_08A5A4A4;
    }
L_08A5A4A4:
    aot_gpr[31] = (0x08A5A4ACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4ACu) goto L_08A5A4AC;
    return;
L_08A5A4AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A4C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A4C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A4D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A518;
      }
      goto L_08A5A4EC;
    }
L_08A5A4EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A504u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A504u) goto L_08A5A504;
    return;
L_08A5A504:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A518;
      }
      goto L_08A5A510;
    }
L_08A5A510:
    aot_gpr[31] = (0x08A5A518u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A518u) goto L_08A5A518;
    return;
L_08A5A518:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A52C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A57C;
      }
      goto L_08A5A550;
    }
L_08A5A550:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18712));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A568u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A568u) goto L_08A5A568;
    return;
L_08A5A568:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A57C;
      }
      goto L_08A5A574;
    }
L_08A5A574:
    aot_gpr[31] = (0x08A5A57Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A57Cu) goto L_08A5A57C;
    return;
L_08A5A57C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A590:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A598:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A5A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A5A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A5FC;
      }
      goto L_08A5A5C4;
    }
L_08A5A5C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18848));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x08A5A5DCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A5A5DCu) goto L_08A5A5DC;
    return;
L_08A5A5DC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A5E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A5E8u) goto L_08A5A5E8;
    return;
L_08A5A5E8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A5FC;
      }
      goto L_08A5A5F4;
    }
L_08A5A5F4:
    aot_gpr[31] = (0x08A5A5FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A5FCu) goto L_08A5A5FC;
    return;
L_08A5A5FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A610:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A618:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A620:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A628:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(756)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A630:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(760)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A638:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A640:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A688;
      }
      goto L_08A5A65C;
    }
L_08A5A65C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19624));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A674u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A5A674u) goto L_08A5A674;
    return;
L_08A5A674:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A688;
      }
      goto L_08A5A680;
    }
L_08A5A680:
    aot_gpr[31] = (0x08A5A688u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A688u) goto L_08A5A688;
    return;
L_08A5A688:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A69C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A6A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A5A6E4;
      }
      goto L_08A5A6B8;
    }
L_08A5A6B8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26464));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A5A6E4;
      }
      goto L_08A5A6C8;
    }
L_08A5A6C8:
    aot_gpr[31] = (0x08A5A6D0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A6D0u) goto L_08A5A6D0;
    return;
L_08A5A6D0:
    aot_gpr[31] = (0x08A5A6D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A6D8u) goto L_08A5A6D8;
    return;
L_08A5A6D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A5A6E4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A6E4u) goto L_08A5A6E4;
    return;
L_08A5A6E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A6F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A5A714;
      }
      goto L_08A5A704;
    }
L_08A5A704:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A714;
      }
      goto L_08A5A70C;
    }
L_08A5A70C:
    aot_gpr[31] = (0x08A5A714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A714u) goto L_08A5A714;
    return;
L_08A5A714:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A5A744u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A744u) goto L_08A5A744;
    return;
L_08A5A744:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A760:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17672));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-17704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[29]);
    aot_gpr[4] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A828;
      }
      goto L_08A5A7F4;
    }
L_08A5A7F4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(26480));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5A814u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 151u, 0x08A2DB20u>(ctx, &aot_mem) && ctx.pc == 0x08A5A814u) goto L_08A5A814;
    return;
L_08A5A814:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_08A5A82C;
    }
    goto L_08A5A820;
L_08A5A820:
    aot_gpr[31] = (0x08A5A828u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A828u) goto L_08A5A828;
    return;
L_08A5A828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_08A5A82C;
L_08A5A82C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A854:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A85C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A864:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A86C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A874:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A87C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A884:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A88C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A894:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A89C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A8FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A904:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A90C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A914:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A91C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A924:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A92C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A934:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A93C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A944:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A94C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A954:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A95C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A964:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A96C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A974:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A97C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A984:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A98C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A994:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A99C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A9FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA3C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AA94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AAB4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AABC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AAC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AACC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AADC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AAEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AAF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AAFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AB9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ABFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC3C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AC9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACAC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACB4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD3C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADAC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADB4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ADFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE3C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AE9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEAC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEB4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AECC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AED4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AEFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF3C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF40:
    // nop
    goto L_08A5AF44;
L_08A5AF44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AF9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AFFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0598(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0598_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_598(Runtime &runtime) {
    runtime.register_generated_unit(598u, 0x08A5A000u, 4096u, &recomp_unit_0598, &recomp_unit_0598_entry);
    runtime.register_function(0x08A5A000u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A008u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A010u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A018u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A020u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A028u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A030u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A038u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A040u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A048u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A050u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A058u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A060u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A068u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A070u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A078u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A080u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A088u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A090u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0ACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0C4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0D0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0D8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0ECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0F4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A0FCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A104u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A10Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A128u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A140u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A14Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A154u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A168u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A170u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A178u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A180u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A188u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A190u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A198u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1A0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1A8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1B0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1CCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1E4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1F0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A1F8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A20Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A214u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A21Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A238u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A250u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A25Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A268u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A270u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A284u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A288u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A28Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A294u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A29Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2A4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2ACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2B4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2BCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2D8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2F0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A2FCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A304u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A318u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A320u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A328u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A330u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A34Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A364u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A370u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A378u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A38Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A394u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A3B0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A3C8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A3D4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A3DCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A3F0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A3F8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A414u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A42Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A438u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A440u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A454u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A45Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A464u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A480u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A498u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A4A4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A4ACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A4C0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A4C8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A4D0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A4ECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A504u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A510u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A518u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A52Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A534u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A550u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A568u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A574u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A57Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A590u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A598u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5A0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5A8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5C4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5DCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5E8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5F4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A5FCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A610u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A618u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A620u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A628u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A630u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A638u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A640u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A65Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A674u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A680u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A688u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A69Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6A4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6B8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6C8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6D0u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6D8u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6E4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A6F4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A704u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A70Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A714u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A720u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A744u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A760u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A778u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A7F4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A814u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A820u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A828u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A82Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A854u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A85Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A864u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A86Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A874u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A87Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A884u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A88Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A894u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A89Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8A4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8ACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8B4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8BCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8C4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8CCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8D4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8DCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8E4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8ECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8F4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A8FCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A904u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A90Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A914u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A91Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A924u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A92Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A934u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A93Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A944u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A94Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A954u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A95Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A964u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A96Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A974u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A97Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A984u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A98Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A994u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A99Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9A4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9ACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9B4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9BCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9C4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9CCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9D4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9DCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9ECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9F4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5A9FCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA04u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA0Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA14u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA1Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA24u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA2Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA34u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA3Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA44u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA4Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA54u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA5Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA64u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA6Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA74u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA7Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA84u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA8Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AA94u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AAB4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AABCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AAC4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AACCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AADCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AAECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AAF4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AAFCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB0Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB14u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB1Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB34u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB44u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB4Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB64u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB6Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB74u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB7Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB84u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB8Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB94u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AB9Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABA4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABBCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABCCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABD4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABDCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABE4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABF4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ABFCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC04u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC0Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC14u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC1Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC24u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC2Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC34u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC3Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC44u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC4Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC54u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC5Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC64u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC6Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC74u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC7Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC84u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC8Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC94u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AC9Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACA4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACB4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACBCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACC4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACCCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACD4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACDCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACE4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACF4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ACFCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD04u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD0Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD14u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD1Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD24u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD2Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD34u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD3Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD44u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD4Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD54u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD5Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD64u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD6Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD74u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD7Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD84u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD8Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD94u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AD9Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADA4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADB4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADBCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADC4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADCCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADD4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADDCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADE4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADF4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5ADFCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE04u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE0Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE14u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE1Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE24u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE2Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE34u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE3Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE44u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE4Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE54u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE5Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE64u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE6Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE74u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE7Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE84u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE8Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE94u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AE9Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEA4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEACu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEB4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEBCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEC4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AECCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AED4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEDCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEF4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AEFCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF04u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF14u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF1Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF24u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF2Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF34u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF3Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF40u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF44u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF4Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF54u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF5Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF64u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF6Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF74u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF7Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF84u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF8Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF94u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AF9Cu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFA4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFBCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFC4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFCCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFD4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFDCu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFE4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFECu, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFF4u, &recomp_unit_0598, "recomp_unit_0598");
    runtime.register_function(0x08A5AFFCu, &recomp_unit_0598, "recomp_unit_0598");
}
} // namespace psprecomp
