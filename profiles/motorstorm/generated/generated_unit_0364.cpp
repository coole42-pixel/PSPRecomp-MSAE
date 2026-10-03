#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0364[1020] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 30, 0, 31, 32, 0, 33, 0, 34, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 42,
    0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0,
    56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0,
    92, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104,
    0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 112, 0, 113, 0, 114, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0,
    0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    128, 0, 129, 130, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 139, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 151, 0, 152, 0, 153, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162,
    0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0,
    0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 186, 0, 187, 0, 188, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 194, 0, 195, 0, 196, 0, 197, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 209,
    0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0,
    238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 260, 0, 261, 0, 0,
    0, 262, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271,
    0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281,
    0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291,
    0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307,
    0, 308, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 315, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0,
    0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334,
};
void recomp_unit_0364_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08970000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0364[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08970000;
    case 2u: goto L_0897000C;
    case 3u: goto L_08970010;
    case 4u: goto L_0897003C;
    case 5u: goto L_08970050;
    case 6u: goto L_0897005C;
    case 7u: goto L_08970068;
    case 8u: goto L_08970070;
    case 9u: goto L_08970078;
    case 10u: goto L_08970080;
    case 11u: goto L_08970090;
    case 12u: goto L_089700A4;
    case 13u: goto L_089700AC;
    case 14u: goto L_089700B4;
    case 15u: goto L_089700C0;
    case 16u: goto L_089700C8;
    case 17u: goto L_089700D0;
    case 18u: goto L_089700DC;
    case 19u: goto L_089700FC;
    case 20u: goto L_08970108;
    case 21u: goto L_08970110;
    case 22u: goto L_08970118;
    case 23u: goto L_08970124;
    case 24u: goto L_0897012C;
    case 25u: goto L_08970134;
    case 26u: goto L_0897013C;
    case 27u: goto L_08970148;
    case 28u: goto L_08970150;
    case 29u: goto L_08970158;
    case 30u: goto L_0897015C;
    case 31u: goto L_08970164;
    case 32u: goto L_08970168;
    case 33u: goto L_08970170;
    case 34u: goto L_08970178;
    case 35u: goto L_08970194;
    case 36u: goto L_089701B4;
    case 37u: goto L_089701BC;
    case 38u: goto L_089701C4;
    case 39u: goto L_089701E0;
    case 40u: goto L_089701E8;
    case 41u: goto L_089701F0;
    case 42u: goto L_089701FC;
    case 43u: goto L_08970204;
    case 44u: goto L_0897020C;
    case 45u: goto L_08970214;
    case 46u: goto L_0897021C;
    case 47u: goto L_08970224;
    case 48u: goto L_0897022C;
    case 49u: goto L_08970238;
    case 50u: goto L_08970240;
    case 51u: goto L_08970248;
    case 52u: goto L_08970258;
    case 53u: goto L_08970260;
    case 54u: goto L_0897026C;
    case 55u: goto L_08970274;
    case 56u: goto L_08970280;
    case 57u: goto L_08970288;
    case 58u: goto L_08970290;
    case 59u: goto L_08970298;
    case 60u: goto L_089702A8;
    case 61u: goto L_089702B0;
    case 62u: goto L_089702B8;
    case 63u: goto L_089702C8;
    case 64u: goto L_089702D0;
    case 65u: goto L_089702DC;
    case 66u: goto L_089702E0;
    case 67u: goto L_089702FC;
    case 68u: goto L_08970314;
    case 69u: goto L_0897031C;
    case 70u: goto L_08970324;
    case 71u: goto L_0897032C;
    case 72u: goto L_08970334;
    case 73u: goto L_0897033C;
    case 74u: goto L_08970344;
    case 75u: goto L_0897034C;
    case 76u: goto L_08970354;
    case 77u: goto L_08970358;
    case 78u: goto L_08970370;
    case 79u: goto L_08970394;
    case 80u: goto L_089703A0;
    case 81u: goto L_089703A8;
    case 82u: goto L_089703B0;
    case 83u: goto L_089703B8;
    case 84u: goto L_089703C0;
    case 85u: goto L_089703C8;
    case 86u: goto L_089703D0;
    case 87u: goto L_089703D8;
    case 88u: goto L_089703E0;
    case 89u: goto L_089703E8;
    case 90u: goto L_089703F0;
    case 91u: goto L_089703F8;
    case 92u: goto L_08970400;
    case 93u: goto L_08970408;
    case 94u: goto L_08970410;
    case 95u: goto L_0897041C;
    case 96u: goto L_08970424;
    case 97u: goto L_08970434;
    case 98u: goto L_0897043C;
    case 99u: goto L_08970444;
    case 100u: goto L_08970450;
    case 101u: goto L_08970458;
    case 102u: goto L_08970460;
    case 103u: goto L_08970474;
    case 104u: goto L_0897047C;
    case 105u: goto L_08970484;
    case 106u: goto L_08970490;
    case 107u: goto L_08970498;
    case 108u: goto L_089704A0;
    case 109u: goto L_089704A8;
    case 110u: goto L_089704B0;
    case 111u: goto L_089704B8;
    case 112u: goto L_089704BC;
    case 113u: goto L_089704C4;
    case 114u: goto L_089704CC;
    case 115u: goto L_089704D0;
    case 116u: goto L_089704E8;
    case 117u: goto L_08970530;
    case 118u: goto L_08970568;
    case 119u: goto L_08970578;
    case 120u: goto L_08970584;
    case 121u: goto L_08970594;
    case 122u: goto L_0897059C;
    case 123u: goto L_089705A8;
    case 124u: goto L_089705B0;
    case 125u: goto L_089705B8;
    case 126u: goto L_089705BC;
    case 127u: goto L_089705E4;
    case 128u: goto L_08970600;
    case 129u: goto L_08970608;
    case 130u: goto L_0897060C;
    case 131u: goto L_08970614;
    case 132u: goto L_08970620;
    case 133u: goto L_08970630;
    case 134u: goto L_08970638;
    case 135u: goto L_08970644;
    case 136u: goto L_08970654;
    case 137u: goto L_0897065C;
    case 138u: goto L_08970664;
    case 139u: goto L_08970668;
    case 140u: goto L_08970678;
    case 141u: goto L_08970694;
    case 142u: goto L_0897069C;
    case 143u: goto L_089706A4;
    case 144u: goto L_089706AC;
    case 145u: goto L_089706B4;
    case 146u: goto L_089706C0;
    case 147u: goto L_089706C8;
    case 148u: goto L_089706D0;
    case 149u: goto L_089706D8;
    case 150u: goto L_089706E8;
    case 151u: goto L_08970704;
    case 152u: goto L_0897070C;
    case 153u: goto L_08970714;
    case 154u: goto L_08970718;
    case 155u: goto L_08970720;
    case 156u: goto L_0897072C;
    case 157u: goto L_08970734;
    case 158u: goto L_08970748;
    case 159u: goto L_0897075C;
    case 160u: goto L_0897076C;
    case 161u: goto L_08970774;
    case 162u: goto L_0897077C;
    case 163u: goto L_08970784;
    case 164u: goto L_0897078C;
    case 165u: goto L_08970798;
    case 166u: goto L_089707A0;
    case 167u: goto L_089707A8;
    case 168u: goto L_089707B0;
    case 169u: goto L_089707B8;
    case 170u: goto L_089707C0;
    case 171u: goto L_089707C8;
    case 172u: goto L_089707D4;
    case 173u: goto L_089707E4;
    case 174u: goto L_089707F0;
    case 175u: goto L_089707F8;
    case 176u: goto L_08970804;
    case 177u: goto L_0897080C;
    case 178u: goto L_08970814;
    case 179u: goto L_0897081C;
    case 180u: goto L_0897082C;
    case 181u: goto L_08970850;
    case 182u: goto L_08970870;
    case 183u: goto L_0897087C;
    case 184u: goto L_08970894;
    case 185u: goto L_08970908;
    case 186u: goto L_08970910;
    case 187u: goto L_08970918;
    case 188u: goto L_08970920;
    case 189u: goto L_08970924;
    case 190u: goto L_08970930;
    case 191u: goto L_0897093C;
    case 192u: goto L_08970948;
    case 193u: goto L_08970958;
    case 194u: goto L_0897095C;
    case 195u: goto L_08970964;
    case 196u: goto L_0897096C;
    case 197u: goto L_08970974;
    case 198u: goto L_0897098C;
    case 199u: goto L_089709A0;
    case 200u: goto L_089709B0;
    case 201u: goto L_089709B8;
    case 202u: goto L_089709C0;
    case 203u: goto L_089709C8;
    case 204u: goto L_089709D0;
    case 205u: goto L_089709D8;
    case 206u: goto L_089709E0;
    case 207u: goto L_089709E8;
    case 208u: goto L_089709F0;
    case 209u: goto L_089709FC;
    case 210u: goto L_08970A08;
    case 211u: goto L_08970A10;
    case 212u: goto L_08970A1C;
    case 213u: goto L_08970A28;
    case 214u: goto L_08970A38;
    case 215u: goto L_08970A40;
    case 216u: goto L_08970A48;
    case 217u: goto L_08970A50;
    case 218u: goto L_08970A60;
    case 219u: goto L_08970A84;
    case 220u: goto L_08970A94;
    case 221u: goto L_08970A9C;
    case 222u: goto L_08970AA4;
    case 223u: goto L_08970AB0;
    case 224u: goto L_08970AC0;
    case 225u: goto L_08970ACC;
    case 226u: goto L_08970AD4;
    case 227u: goto L_08970ADC;
    case 228u: goto L_08970AE4;
    case 229u: goto L_08970AEC;
    case 230u: goto L_08970AFC;
    case 231u: goto L_08970B10;
    case 232u: goto L_08970B30;
    case 233u: goto L_08970B38;
    case 234u: goto L_08970B40;
    case 235u: goto L_08970B50;
    case 236u: goto L_08970B6C;
    case 237u: goto L_08970B78;
    case 238u: goto L_08970B80;
    case 239u: goto L_08970B88;
    case 240u: goto L_08970B90;
    case 241u: goto L_08970B98;
    case 242u: goto L_08970BA0;
    case 243u: goto L_08970BA8;
    case 244u: goto L_08970BB0;
    case 245u: goto L_08970BBC;
    case 246u: goto L_08970BC8;
    case 247u: goto L_08970BD0;
    case 248u: goto L_08970BD8;
    case 249u: goto L_08970BE0;
    case 250u: goto L_08970BE8;
    case 251u: goto L_08970BF8;
    case 252u: goto L_08970C10;
    case 253u: goto L_08970C18;
    case 254u: goto L_08970C20;
    case 255u: goto L_08970C28;
    case 256u: goto L_08970C38;
    case 257u: goto L_08970C50;
    case 258u: goto L_08970C5C;
    case 259u: goto L_08970C68;
    case 260u: goto L_08970C6C;
    case 261u: goto L_08970C74;
    case 262u: goto L_08970C84;
    case 263u: goto L_08970C8C;
    case 264u: goto L_08970C94;
    case 265u: goto L_08970CA4;
    case 266u: goto L_08970CC4;
    case 267u: goto L_08970CCC;
    case 268u: goto L_08970CD4;
    case 269u: goto L_08970CE0;
    case 270u: goto L_08970CEC;
    case 271u: goto L_08970CFC;
    case 272u: goto L_08970D10;
    case 273u: goto L_08970D1C;
    case 274u: goto L_08970D28;
    case 275u: goto L_08970D34;
    case 276u: goto L_08970D44;
    case 277u: goto L_08970D4C;
    case 278u: goto L_08970D5C;
    case 279u: goto L_08970D64;
    case 280u: goto L_08970D74;
    case 281u: goto L_08970D7C;
    case 282u: goto L_08970D88;
    case 283u: goto L_08970D90;
    case 284u: goto L_08970D98;
    case 285u: goto L_08970DA4;
    case 286u: goto L_08970DB0;
    case 287u: goto L_08970DC0;
    case 288u: goto L_08970DC8;
    case 289u: goto L_08970DD4;
    case 290u: goto L_08970DE4;
    case 291u: goto L_08970DFC;
    case 292u: goto L_08970E04;
    case 293u: goto L_08970E0C;
    case 294u: goto L_08970E14;
    case 295u: goto L_08970E1C;
    case 296u: goto L_08970E24;
    case 297u: goto L_08970E2C;
    case 298u: goto L_08970E34;
    case 299u: goto L_08970E3C;
    case 300u: goto L_08970E44;
    case 301u: goto L_08970E4C;
    case 302u: goto L_08970E54;
    case 303u: goto L_08970E5C;
    case 304u: goto L_08970E64;
    case 305u: goto L_08970E6C;
    case 306u: goto L_08970E74;
    case 307u: goto L_08970E7C;
    case 308u: goto L_08970E84;
    case 309u: goto L_08970E8C;
    case 310u: goto L_08970E94;
    case 311u: goto L_08970EA4;
    case 312u: goto L_08970EB0;
    case 313u: goto L_08970EC4;
    case 314u: goto L_08970ECC;
    case 315u: goto L_08970ED4;
    case 316u: goto L_08970ED8;
    case 317u: goto L_08970EE4;
    case 318u: goto L_08970F00;
    case 319u: goto L_08970F0C;
    case 320u: goto L_08970F18;
    case 321u: goto L_08970F24;
    case 322u: goto L_08970F2C;
    case 323u: goto L_08970F40;
    case 324u: goto L_08970F4C;
    case 325u: goto L_08970F5C;
    case 326u: goto L_08970F68;
    case 327u: goto L_08970F78;
    case 328u: goto L_08970F84;
    case 329u: goto L_08970F94;
    case 330u: goto L_08970FA0;
    case 331u: goto L_08970FB0;
    case 332u: goto L_08970FBC;
    case 333u: goto L_08970FD8;
    case 334u: goto L_08970FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08970000:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897000Cu);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0897000Cu) goto L_0897000C;
    return;
L_0897000C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    goto L_08970010;
L_08970010:
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
L_0897003C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08970050u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08970050u) goto L_08970050;
    return;
L_08970050:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897005Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 37u, 0x089F0214u>(ctx, &aot_mem) && ctx.pc == 0x0897005Cu) goto L_0897005C;
    return;
L_0897005C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_08970080;
      }
      goto L_08970068;
    }
L_08970068:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08970080;
      }
      goto L_08970070;
    }
L_08970070:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970080;
      }
      goto L_08970078;
    }
L_08970078:
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08970080;
L_08970080:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970090:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089700B4;
      }
      goto L_089700A4;
    }
L_089700A4:
    aot_gpr[31] = (0x089700ACu);
    aot_gpr[4] = (0u | 258u);
    ctx.pc = 0x08A5AC64u;
    return;
L_089700AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089700C8;
      }
      goto L_089700B4;
    }
L_089700B4:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089700C8;
      }
      goto L_089700C0;
    }
L_089700C0:
    aot_gpr[31] = (0x089700C8u);
    aot_gpr[4] = (0u | 257u);
    ctx.pc = 0x08A5AC64u;
    return;
L_089700C8:
    aot_gpr[31] = (0x089700D0u);
    aot_gpr[4] = (0u | 256u);
    ctx.pc = 0x08A5AC64u;
    return;
L_089700D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089700DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089700FCu);
    aot_gpr[18] = (0u | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089700FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[31] = (0x08970108u);
    aot_gpr[4] = (0u | 256u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_08970108:
    aot_gpr[31] = (0x08970110u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970110:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_08970168;
      }
      goto L_08970118;
    }
L_08970118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897013C;
      }
      goto L_08970124;
    }
L_08970124:
    aot_gpr[31] = (0x0897012Cu);
    aot_gpr[4] = (0u | 258u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_0897012C:
    aot_gpr[31] = (0x08970134u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970134:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897015C;
      }
      goto L_0897013C;
    }
L_0897013C:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897015C;
      }
      goto L_08970148;
    }
L_08970148:
    aot_gpr[31] = (0x08970150u);
    aot_gpr[4] = (0u | 257u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_08970150:
    aot_gpr[31] = (0x08970158u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970158:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    goto L_0897015C;
L_0897015C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08970168;
      }
      goto L_08970164;
    }
L_08970164:
    aot_gpr[18] = (0u | 1u);
    goto L_08970168;
L_08970168:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970178;
      }
      goto L_08970170;
    }
L_08970170:
    aot_gpr[31] = (0x08970178u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970090;
L_08970178:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08970194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089701B4u);
    aot_gpr[17] = (0u | 0u);
    goto L_089700DC;
L_089701B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_089701BC;
    }
L_089701BC:
    aot_gpr[31] = (0x089701C4u);
    // nop
    ctx.pc = 0x08A5B16Cu;
    return;
L_089701C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[5] = (0u | 42u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 42u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x089701E0u);
    aot_gpr[4] = (2u << 16u);
    ctx.pc = 0x08A5A884u;
    return;
L_089701E0:
    aot_gpr[31] = (0x089701E8u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089701E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_089701F0;
    }
L_089701F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970274;
      }
      goto L_089701FC;
    }
L_089701FC:
    aot_gpr[31] = (0x08970204u);
    // nop
    ctx.pc = 0x08A5A8CCu;
    return;
L_08970204:
    aot_gpr[31] = (0x0897020Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_0897020C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_08970214;
    }
L_08970214:
    aot_gpr[31] = (0x0897021Cu);
    // nop
    ctx.pc = 0x08A5A8B4u;
    return;
L_0897021C:
    aot_gpr[31] = (0x08970224u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970224:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_0897022C;
    }
L_0897022C:
    aot_gpr[4] = (0u | 6144u);
    aot_gpr[31] = (0x08970238u);
    aot_gpr[5] = (0u | 48u);
    ctx.pc = 0x08A5A974u;
    return;
L_08970238:
    aot_gpr[31] = (0x08970240u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970240:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_08970248;
    }
L_08970248:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08970258u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3884));
    ctx.pc = 0x08A5A964u;
    return;
L_08970258:
    aot_gpr[31] = (0x08970260u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970260:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[18]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_0897026C;
    }
L_0897026C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_08970274;
    }
L_08970274:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_08970280;
    }
L_08970280:
    aot_gpr[31] = (0x08970288u);
    // nop
    ctx.pc = 0x08A5A9CCu;
    return;
L_08970288:
    aot_gpr[31] = (0x08970290u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970290:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_08970298;
    }
L_08970298:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(280));
    aot_gpr[4] = (0u | 8192u);
    aot_gpr[31] = (0x089702A8u);
    aot_gpr[5] = (0u | 48u);
    ctx.pc = 0x08A5A99Cu;
    return;
L_089702A8:
    aot_gpr[31] = (0x089702B0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089702B0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_089702B8;
    }
L_089702B8:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089702C8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3944));
    ctx.pc = 0x08A5A97Cu;
    return;
L_089702C8:
    aot_gpr[31] = (0x089702D0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089702D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[18]);
      if (branch_taken) {
          goto L_089702E0;
      }
      goto L_089702DC;
    }
L_089702DC:
    aot_gpr[17] = (0u | 1u);
    goto L_089702E0;
L_089702E0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089702FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08970358;
      }
      goto L_08970314;
    }
L_08970314:
    aot_gpr[31] = (0x0897031Cu);
    // nop
    ctx.pc = 0x08A5AD6Cu;
    return;
L_0897031C:
    aot_gpr[31] = (0x08970324u);
    // nop
    ctx.pc = 0x08A5AD9Cu;
    return;
L_08970324:
    aot_gpr[31] = (0x0897032Cu);
    // nop
    ctx.pc = 0x08A5AD84u;
    return;
L_0897032C:
    aot_gpr[31] = (0x08970334u);
    // nop
    ctx.pc = 0x08A5AD5Cu;
    return;
L_08970334:
    aot_gpr[31] = (0x0897033Cu);
    aot_gpr[4] = (0u | 262u);
    ctx.pc = 0x08A5AC64u;
    return;
L_0897033C:
    aot_gpr[31] = (0x08970344u);
    aot_gpr[4] = (0u | 261u);
    ctx.pc = 0x08A5AC64u;
    return;
L_08970344:
    aot_gpr[31] = (0x0897034Cu);
    aot_gpr[4] = (0u | 260u);
    ctx.pc = 0x08A5AC64u;
    return;
L_0897034C:
    aot_gpr[31] = (0x08970354u);
    aot_gpr[4] = (0u | 259u);
    ctx.pc = 0x08A5AC64u;
    return;
L_08970354:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(0u));
    goto L_08970358;
L_08970358:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(265)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089703A8;
      }
      goto L_08970394;
    }
L_08970394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089703B0;
      }
      goto L_089703A0;
    }
L_089703A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897041C;
      }
      goto L_089703A8;
    }
L_089703A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089704D0;
      }
      goto L_089703B0;
    }
L_089703B0:
    aot_gpr[31] = (0x089703B8u);
    aot_gpr[4] = (0u | 259u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_089703B8:
    aot_gpr[31] = (0x089703C0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089703C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897041C;
      }
      goto L_089703C8;
    }
L_089703C8:
    aot_gpr[31] = (0x089703D0u);
    aot_gpr[4] = (0u | 260u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_089703D0:
    aot_gpr[31] = (0x089703D8u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089703D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897041C;
      }
      goto L_089703E0;
    }
L_089703E0:
    aot_gpr[31] = (0x089703E8u);
    aot_gpr[4] = (0u | 261u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_089703E8:
    aot_gpr[31] = (0x089703F0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089703F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897041C;
      }
      goto L_089703F8;
    }
L_089703F8:
    aot_gpr[31] = (0x08970400u);
    aot_gpr[4] = (0u | 262u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_08970400:
    aot_gpr[31] = (0x08970408u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970408:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897041C;
      }
      goto L_08970410;
    }
L_08970410:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (0u | 1u);
    goto L_0897041C;
L_0897041C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089704BC;
      }
      goto L_08970424;
    }
L_08970424:
    aot_gpr[4] = (3u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x08970434u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.pc = 0x08A5AD64u;
    return;
L_08970434:
    aot_gpr[31] = (0x0897043Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_0897043C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089704BC;
      }
      goto L_08970444;
    }
L_08970444:
    aot_gpr[4] = (2u << 16u);
    aot_gpr[31] = (0x08970450u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22528));
    ctx.pc = 0x08A5AD7Cu;
    return;
L_08970450:
    aot_gpr[31] = (0x08970458u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970458:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089704BC;
      }
      goto L_08970460;
    }
L_08970460:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08970474u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5AD8Cu;
    return;
L_08970474:
    aot_gpr[31] = (0x0897047Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_0897047C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089704BC;
      }
      goto L_08970484;
    }
L_08970484:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08970490u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5AD74u;
    return;
L_08970490:
    aot_gpr[31] = (0x08970498u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_08970498:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089704BC;
      }
      goto L_089704A0;
    }
L_089704A0:
    aot_gpr[31] = (0x089704A8u);
    // nop
    ctx.pc = 0x08A5AD94u;
    return;
L_089704A8:
    aot_gpr[31] = (0x089704B0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089704B0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089704BC;
      }
      goto L_089704B8;
    }
L_089704B8:
    aot_gpr[17] = (0u | 1u);
    goto L_089704BC;
L_089704BC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089704CC;
      }
      goto L_089704C4;
    }
L_089704C4:
    aot_gpr[31] = (0x089704CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089702FC;
L_089704CC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_089704D0;
L_089704D0:
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
L_089704E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (0u | 68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08970530u);
    aot_gpr[6] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08970530u) goto L_08970530;
    return;
L_08970530:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (0u | 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970578;
      }
      goto L_08970568;
    }
L_08970568:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
      if (branch_taken) {
          goto L_08970594;
      }
      goto L_08970578;
    }
L_08970578:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970594;
      }
      goto L_08970584;
    }
L_08970584:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(268));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    goto L_08970594;
L_08970594:
    aot_gpr[31] = (0x0897059Cu);
    // nop
    ctx.pc = 0x08A5B16Cu;
    return;
L_0897059C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[31] = (0x089705A8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ABF4u;
    return;
L_089705A8:
    aot_gpr[31] = (0x089705B0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B16Cu;
    return;
L_089705B0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089705BC;
      }
      goto L_089705B8;
    }
L_089705B8:
    aot_gpr[18] = (0u | 1u);
    goto L_089705BC;
L_089705BC:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089705E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897060C;
      }
      goto L_08970600;
    }
L_08970600:
    aot_gpr[31] = (0x08970608u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970370;
L_08970608:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897060C;
L_0897060C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970664;
      }
      goto L_08970614;
    }
L_08970614:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08970620u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 133u, 0x08962938u>(ctx, &aot_mem) && ctx.pc == 0x08970620u) goto L_08970620;
    return;
L_08970620:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08970630u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089704E8;
L_08970630:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08970664;
      }
      goto L_08970638;
    }
L_08970638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897065C;
      }
      goto L_08970644;
    }
L_08970644:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897065C;
      }
      goto L_08970654;
    }
L_08970654:
    aot_gpr[31] = (0x0897065Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 55u, 0x0896F248u>(ctx, &aot_mem) && ctx.pc == 0x0897065Cu) goto L_0897065C;
    return;
L_0897065C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970668;
      }
      goto L_08970664;
    }
L_08970664:
    aot_gpr[2] = (0u | 0u);
    goto L_08970668;
L_08970668:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089706B4;
      }
      goto L_08970694;
    }
L_08970694:
    aot_gpr[31] = (0x0897069Cu);
    // nop
    ctx.pc = 0x08A5A94Cu;
    return;
L_0897069C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089706AC;
      }
      goto L_089706A4;
    }
L_089706A4:
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089706AC;
L_089706AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089706D8;
      }
      goto L_089706B4;
    }
L_089706B4:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089706D8;
      }
      goto L_089706C0;
    }
L_089706C0:
    aot_gpr[31] = (0x089706C8u);
    // nop
    ctx.pc = 0x08A5A984u;
    return;
L_089706C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089706D8;
      }
      goto L_089706D0;
    }
L_089706D0:
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089706D8;
L_089706D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089706E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08970704u);
    aot_gpr[17] = (0u | 0u);
    goto L_08970194;
L_08970704:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08970718;
      }
      goto L_0897070C;
    }
L_0897070C:
    aot_gpr[31] = (0x08970714u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089705E4;
L_08970714:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08970718;
L_08970718:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897072C;
      }
      goto L_08970720;
    }
L_08970720:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08970734;
      }
      goto L_0897072C;
    }
L_0897072C:
    aot_gpr[31] = (0x08970734u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970678;
L_08970734:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897075Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5AC04u;
    return;
L_0897075C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897081C;
      }
      goto L_0897076C;
    }
L_0897076C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089707B8;
      }
      goto L_08970774;
    }
L_08970774:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0897078C;
      }
      goto L_0897077C;
    }
L_0897077C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_089707A8;
      }
      goto L_08970784;
    }
L_08970784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897081C;
      }
      goto L_0897078C;
    }
L_0897078C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08970798u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08970798u) goto L_08970798;
    return;
L_08970798:
    aot_gpr[31] = (0x089707A0u);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5AC1Cu;
    return;
L_089707A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897081C;
      }
      goto L_089707A8;
    }
L_089707A8:
    aot_gpr[31] = (0x089707B0u);
    // nop
    ctx.pc = 0x08A5AC7Cu;
    return;
L_089707B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897081C;
      }
      goto L_089707B8;
    }
L_089707B8:
    aot_gpr[31] = (0x089707C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 180u, 0x08942D80u>(ctx, &aot_mem) && ctx.pc == 0x089707C0u) goto L_089707C0;
    return;
L_089707C0:
    aot_gpr[31] = (0x089707C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 184u, 0x08942DD8u>(ctx, &aot_mem) && ctx.pc == 0x089707C8u) goto L_089707C8;
    return;
L_089707C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897080C;
      }
      goto L_089707D4;
    }
L_089707D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(300)));
        goto L_089707F8;
    }
    goto L_089707E4;
L_089707E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(265)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(300)));
        goto L_089707F8;
    }
    goto L_089707F0;
L_089707F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08970804;
      }
      goto L_089707F8;
    }
L_089707F8:
    aot_gpr[4] = (0u | 6u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08970804;
    }
    goto L_08970804;
L_08970804:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08970814;
      }
      goto L_0897080C;
    }
L_0897080C:
    aot_gpr[31] = (0x08970814u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970678;
L_08970814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897081C;
      }
      goto L_0897081C;
    }
L_0897081C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897082C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08970850u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 133u, 0x08962938u>(ctx, &aot_mem) && ctx.pc == 0x08970850u) goto L_08970850;
    return;
L_08970850:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (128u << 16u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21376));
    aot_gpr[31] = (0x08970870u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(256));
    ctx.pc = 0x08A5B07Cu;
    return;
L_08970870:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_08970924;
      }
      goto L_0897087C;
    }
L_0897087C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[18] = (0u | 168u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08970894u);
    aot_gpr[6] = (0u | 168u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08970894u) goto L_08970894;
    return;
L_08970894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), aot_gpr[4]);
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[4] = (0u | 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    aot_gpr[4] = (128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08970908u);
    aot_gpr[5] = (128u << 16u);
    ctx.pc = 0x08A5B104u;
    return;
L_08970908:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08970924;
      }
      goto L_08970910;
    }
L_08970910:
    aot_gpr[31] = (0x08970918u);
    // nop
    ctx.pc = 0x08A5AC44u;
    return;
L_08970918:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08970924;
      }
      goto L_08970920;
    }
L_08970920:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    goto L_08970924;
L_08970924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08970974;
      }
      goto L_08970930;
    }
L_08970930:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897096C;
      }
      goto L_0897093C;
    }
L_0897093C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897095C;
      }
      goto L_08970948;
    }
L_08970948:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08970958u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = 0x08A5B0F4u;
    return;
L_08970958:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0897095C;
L_0897095C:
    aot_gpr[31] = (0x08970964u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = 0x08A5B0C4u;
    return;
L_08970964:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    goto L_0897096C;
L_0897096C:
    aot_gpr[31] = (0x08970974u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970678;
L_08970974:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897098C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089709A0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5AC3Cu;
    return;
L_089709A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A50;
      }
      goto L_089709B0;
    }
L_089709B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089709F0;
      }
      goto L_089709B8;
    }
L_089709B8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089709D0;
      }
      goto L_089709C0;
    }
L_089709C0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_089709E0;
      }
      goto L_089709C8;
    }
L_089709C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A50;
      }
      goto L_089709D0;
    }
L_089709D0:
    aot_gpr[31] = (0x089709D8u);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5ABD4u;
    return;
L_089709D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A50;
      }
      goto L_089709E0;
    }
L_089709E0:
    aot_gpr[31] = (0x089709E8u);
    // nop
    ctx.pc = 0x08A5AC74u;
    return;
L_089709E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A50;
      }
      goto L_089709F0;
    }
L_089709F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A1C;
      }
      goto L_089709FC;
    }
L_089709FC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08970A08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.pc = 0x08A5B0F4u;
    return;
L_08970A08:
    aot_gpr[31] = (0x08970A10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.pc = 0x08A5B0C4u;
    return;
L_08970A10:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), 0u);
    goto L_08970A1C;
L_08970A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970A40;
      }
      goto L_08970A28;
    }
L_08970A28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (0u | 6u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08970A38;
    }
    goto L_08970A38;
L_08970A38:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08970A48;
      }
      goto L_08970A40;
    }
L_08970A40:
    aot_gpr[31] = (0x08970A48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970678;
L_08970A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A50;
      }
      goto L_08970A50;
    }
L_08970A50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08970A84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 160u, 0x0896E98Cu>(ctx, &aot_mem) && ctx.pc == 0x08970A84u) goto L_08970A84;
    return;
L_08970A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (4096u << 16u);
      if (branch_taken) {
          goto L_08970AB0;
      }
      goto L_08970A94;
    }
L_08970A94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08970AFC;
      }
      goto L_08970A9C;
    }
L_08970A9C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970AFC;
      }
      goto L_08970AA4;
    }
L_08970AA4:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08970AFC;
      }
      goto L_08970AB0;
    }
L_08970AB0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (4096u << 16u);
      if (branch_taken) {
          goto L_08970AEC;
      }
      goto L_08970AC0;
    }
L_08970AC0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970AFC;
      }
      goto L_08970ACC;
    }
L_08970ACC:
    aot_gpr[31] = (0x08970AD4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 69u, 0x0896F2F0u>(ctx, &aot_mem) && ctx.pc == 0x08970AD4u) goto L_08970AD4;
    return;
L_08970AD4:
    aot_gpr[31] = (0x08970ADCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970678;
L_08970ADC:
    aot_gpr[31] = (0x08970AE4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 194u, 0x0896EB44u>(ctx, &aot_mem) && ctx.pc == 0x08970AE4u) goto L_08970AE4;
    return;
L_08970AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970AFC;
      }
      goto L_08970AEC;
    }
L_08970AEC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970AFC;
      }
      goto L_08970AFC;
    }
L_08970AFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970B10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970B38;
      }
      goto L_08970B30;
    }
L_08970B30:
    aot_gpr[31] = (0x08970B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 69u, 0x0896F2F0u>(ctx, &aot_mem) && ctx.pc == 0x08970B38u) goto L_08970B38;
    return;
L_08970B38:
    aot_gpr[31] = (0x08970B40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089702FC;
L_08970B40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970BB0;
      }
      goto L_08970B6C;
    }
L_08970B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08970B88;
      }
      goto L_08970B78;
    }
L_08970B78:
    aot_gpr[31] = (0x08970B80u);
    // nop
    ctx.pc = 0x08A5A95Cu;
    return;
L_08970B80:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_08970B88;
L_08970B88:
    aot_gpr[31] = (0x08970B90u);
    // nop
    ctx.pc = 0x08A5A96Cu;
    return;
L_08970B90:
    aot_gpr[31] = (0x08970B98u);
    // nop
    ctx.pc = 0x08A5A8A4u;
    return;
L_08970B98:
    aot_gpr[31] = (0x08970BA0u);
    // nop
    ctx.pc = 0x08A5A91Cu;
    return;
L_08970BA0:
    aot_gpr[31] = (0x08970BA8u);
    // nop
    ctx.pc = 0x08A5A87Cu;
    return;
L_08970BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970BE8;
      }
      goto L_08970BB0;
    }
L_08970BB0:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970BE8;
      }
      goto L_08970BBC;
    }
L_08970BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08970BD8;
      }
      goto L_08970BC8;
    }
L_08970BC8:
    aot_gpr[31] = (0x08970BD0u);
    // nop
    ctx.pc = 0x08A5A98Cu;
    return;
L_08970BD0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_08970BD8;
L_08970BD8:
    aot_gpr[31] = (0x08970BE0u);
    // nop
    ctx.pc = 0x08A5A994u;
    return;
L_08970BE0:
    aot_gpr[31] = (0x08970BE8u);
    // nop
    ctx.pc = 0x08A5A87Cu;
    return;
L_08970BE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08970C18;
      }
      goto L_08970C10;
    }
L_08970C10:
    aot_gpr[31] = (0x08970C18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970B10;
L_08970C18:
    aot_gpr[31] = (0x08970C20u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970B50;
L_08970C20:
    aot_gpr[31] = (0x08970C28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970090;
L_08970C28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970C38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08970C84;
      }
      goto L_08970C50;
    }
L_08970C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08970C6C;
      }
      goto L_08970C5C;
    }
L_08970C5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970C84;
      }
      goto L_08970C68;
    }
L_08970C68:
    aot_gpr[5] = (0u | 1u);
    goto L_08970C6C;
L_08970C6C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970C94;
      }
      goto L_08970C74;
    }
L_08970C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970C94;
      }
      goto L_08970C84;
    }
L_08970C84:
    aot_gpr[31] = (0x08970C8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970BF8;
L_08970C8C:
    aot_gpr[4] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08970C94;
L_08970C94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970CA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 10 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970DC8;
      }
      goto L_08970CC4;
    }
L_08970CC4:
    aot_gpr[31] = (0x08970CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08970CCCu) goto L_08970CCC;
    return;
L_08970CCC:
    aot_gpr[31] = (0x08970CD4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 236u, 0x089EFEACu>(ctx, &aot_mem) && ctx.pc == 0x08970CD4u) goto L_08970CD4;
    return;
L_08970CD4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08970DC8;
      }
      goto L_08970CE0;
    }
L_08970CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970DC8;
      }
      goto L_08970CEC;
    }
L_08970CEC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[31] = (0x08970CFCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08970CFCu) goto L_08970CFC;
    return;
L_08970CFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (32833u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3340));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[4] = (32833u << 16u);
      if (branch_taken) {
          goto L_08970D34;
      }
      goto L_08970D10;
    }
L_08970D10:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2819));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[4] = (32833u << 16u);
      if (branch_taken) {
          goto L_08970D34;
      }
      goto L_08970D1C;
    }
L_08970D1C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2570));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[4] = (32833u << 16u);
      if (branch_taken) {
          goto L_08970D4C;
      }
      goto L_08970D28;
    }
L_08970D28:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2566));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08970D64;
      }
      goto L_08970D34;
    }
L_08970D34:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 14u);
    aot_gpr[31] = (0x08970D44u);
    aot_gpr[6] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08970D44u) goto L_08970D44;
    return;
L_08970D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D74;
      }
      goto L_08970D4C;
    }
L_08970D4C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08970D5Cu);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08970D5Cu) goto L_08970D5C;
    return;
L_08970D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D74;
      }
      goto L_08970D64;
    }
L_08970D64:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 14u);
    aot_gpr[31] = (0x08970D74u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08970D74u) goto L_08970D74;
    return;
L_08970D74:
    aot_gpr[31] = (0x08970D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08970D7Cu) goto L_08970D7C;
    return;
L_08970D7C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970DA4;
      }
      goto L_08970D88;
    }
L_08970D88:
    aot_gpr[31] = (0x08970D90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 138u, 0x089FE928u>(ctx, &aot_mem) && ctx.pc == 0x08970D90u) goto L_08970D90;
    return;
L_08970D90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970DA4;
      }
      goto L_08970D98;
    }
L_08970D98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08970DA4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 131u, 0x089FE8C8u>(ctx, &aot_mem) && ctx.pc == 0x08970DA4u) goto L_08970DA4;
    return;
L_08970DA4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08970DB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08970DB0u) goto L_08970DB0;
    return;
L_08970DB0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x08970DC0u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08970DC0u) goto L_08970DC0;
    return;
L_08970DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970DC8;
    }
L_08970DC8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08970DD4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 8u, 0x0896F040u>(ctx, &aot_mem) && ctx.pc == 0x08970DD4u) goto L_08970DD4;
    return;
L_08970DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970DE4;
    }
L_08970DE4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-21352)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E04;
    }
L_08970E04:
    aot_gpr[31] = (0x08970E0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089706E8;
L_08970E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E14;
    }
L_08970E14:
    aot_gpr[31] = (0x08970E1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970748;
L_08970E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E24;
    }
L_08970E24:
    aot_gpr[31] = (0x08970E2Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897082C;
L_08970E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E34;
    }
L_08970E34:
    aot_gpr[31] = (0x08970E3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897098C;
L_08970E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E44;
    }
L_08970E44:
    aot_gpr[31] = (0x08970E4Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970A60;
L_08970E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E54;
    }
L_08970E54:
    aot_gpr[31] = (0x08970E5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089702FC;
L_08970E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E64;
    }
L_08970E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E6C;
    }
L_08970E6C:
    aot_gpr[31] = (0x08970E74u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970678;
L_08970E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E7C;
    }
L_08970E7C:
    aot_gpr[31] = (0x08970E84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08970C38;
L_08970E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E8C;
    }
L_08970E8C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08970E94;
      }
      goto L_08970E94;
    }
L_08970E94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970EA4:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970EB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970ED4;
      }
      goto L_08970EC4;
    }
L_08970EC4:
    aot_gpr[31] = (0x08970ECCu);
    // nop
    goto L_0897003C;
L_08970ECC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970ED8;
      }
      goto L_08970ED4;
    }
L_08970ED4:
    aot_gpr[2] = (0u | 0u);
    goto L_08970ED8;
L_08970ED8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970EE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (32833u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3340));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (32833u << 16u);
      if (branch_taken) {
          goto L_08970F18;
      }
      goto L_08970F00;
    }
L_08970F00:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2819));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (32833u << 16u);
      if (branch_taken) {
          goto L_08970F18;
      }
      goto L_08970F0C;
    }
L_08970F0C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2566));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08970F24;
      }
      goto L_08970F18;
    }
L_08970F18:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08970F24;
      }
      goto L_08970F24;
    }
L_08970F24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970F2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08970F40u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08970F40u) goto L_08970F40;
    return;
L_08970F40:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970F5C;
      }
      goto L_08970F4C;
    }
L_08970F4C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08970F5Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_08970EE4;
L_08970F5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970F68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08970F78u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08970F78u) goto L_08970F78;
    return;
L_08970F78:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970F94;
      }
      goto L_08970F84;
    }
L_08970F84:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08970F94u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_08970EE4;
L_08970F94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970FA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08970FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08970FB0u) goto L_08970FB0;
    return;
L_08970FB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970FBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08970FD8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 128u, 0x089FB938u>(ctx, &aot_mem) && ctx.pc == 0x08970FD8u) goto L_08970FD8;
    return;
L_08970FD8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970FEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    ctx.pc = 0x08971000u; return;
}

void recomp_unit_0364(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0364_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_364(Runtime &runtime) {
    runtime.register_generated_unit(364u, 0x08970000u, 4096u, &recomp_unit_0364, &recomp_unit_0364_entry);
    runtime.register_function(0x08970000u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897000Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970010u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897003Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970050u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897005Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970068u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970070u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970078u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970080u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970090u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700A4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700ACu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700B4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700C0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700C8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700D0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700DCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089700FCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970108u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970110u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970118u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970124u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897012Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970134u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897013Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970148u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970150u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970158u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897015Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970164u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970168u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970170u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970178u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970194u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701B4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701BCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701C4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701E0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701E8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701F0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089701FCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970204u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897020Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970214u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897021Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970224u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897022Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970238u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970240u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970248u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970258u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970260u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897026Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970274u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970280u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970288u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970290u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970298u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702A8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702B0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702B8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702C8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702D0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702DCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702E0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089702FCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970314u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897031Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970324u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897032Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970334u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897033Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970344u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897034Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970354u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970358u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970370u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970394u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703A0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703A8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703B0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703B8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703C0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703C8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703D0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703D8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703E0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703E8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703F0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089703F8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970400u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970408u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970410u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897041Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970424u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970434u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897043Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970444u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970450u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970458u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970460u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970474u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897047Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970484u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970490u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970498u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704A0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704A8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704B0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704B8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704BCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704C4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704CCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704D0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089704E8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970530u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970568u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970578u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970584u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970594u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897059Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089705A8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089705B0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089705B8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089705BCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089705E4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970600u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970608u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897060Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970614u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970620u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970630u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970638u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970644u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970654u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897065Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970664u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970668u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970678u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970694u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897069Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706A4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706ACu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706B4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706C0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706C8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706D0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706D8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089706E8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970704u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897070Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970714u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970718u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970720u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897072Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970734u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970748u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897075Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897076Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970774u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897077Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970784u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897078Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970798u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707A0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707A8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707B0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707B8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707C0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707C8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707D4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707E4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707F0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089707F8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970804u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897080Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970814u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897081Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897082Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970850u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970870u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897087Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970894u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970908u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970910u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970918u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970920u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970924u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970930u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897093Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970948u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970958u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897095Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970964u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897096Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970974u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x0897098Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709A0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709B0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709B8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709C0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709C8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709D0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709D8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709E0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709E8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709F0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x089709FCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A08u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A10u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A1Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A28u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A38u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A40u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A48u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A50u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A60u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A84u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A94u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970A9Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AA4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AB0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AC0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970ACCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AD4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970ADCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AE4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AECu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970AFCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B10u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B30u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B38u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B40u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B50u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B6Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B78u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B80u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B88u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B90u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970B98u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BA0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BA8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BB0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BBCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BC8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BD0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BD8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BE0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BE8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970BF8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C10u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C18u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C20u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C28u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C38u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C50u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C5Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C68u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C6Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C74u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C84u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C8Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970C94u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CA4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CC4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CCCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CD4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CE0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CECu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970CFCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D10u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D1Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D28u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D34u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D44u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D4Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D5Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D64u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D74u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D7Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D88u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D90u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970D98u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DA4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DB0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DC0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DC8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DD4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DE4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970DFCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E04u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E0Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E14u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E1Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E24u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E2Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E34u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E3Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E44u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E4Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E54u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E5Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E64u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E6Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E74u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E7Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E84u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E8Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970E94u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970EA4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970EB0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970EC4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970ECCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970ED4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970ED8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970EE4u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F00u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F0Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F18u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F24u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F2Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F40u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F4Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F5Cu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F68u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F78u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F84u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970F94u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970FA0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970FB0u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970FBCu, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970FD8u, &recomp_unit_0364, "recomp_unit_0364");
    runtime.register_function(0x08970FECu, &recomp_unit_0364, "recomp_unit_0364");
}
} // namespace psprecomp
