#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0522[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 20, 21, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 26, 27, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0,
    81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0,
    0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126,
    0, 127, 0, 128, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0,
    0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164,
    0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0,
    0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 182, 0,
    183, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 188, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 201, 0, 0,
    202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0,
    216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229,
    0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243,
    0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0,
    257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0,
    0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 276, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281,
};
void recomp_unit_0522_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A0E000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0522[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0E000;
    case 2u: goto L_08A0E00C;
    case 3u: goto L_08A0E028;
    case 4u: goto L_08A0E03C;
    case 5u: goto L_08A0E048;
    case 6u: goto L_08A0E054;
    case 7u: goto L_08A0E05C;
    case 8u: goto L_08A0E070;
    case 9u: goto L_08A0E084;
    case 10u: goto L_08A0E08C;
    case 11u: goto L_08A0E0A8;
    case 12u: goto L_08A0E0B8;
    case 13u: goto L_08A0E0CC;
    case 14u: goto L_08A0E0D4;
    case 15u: goto L_08A0E0E0;
    case 16u: goto L_08A0E0F0;
    case 17u: goto L_08A0E114;
    case 18u: goto L_08A0E11C;
    case 19u: goto L_08A0E128;
    case 20u: goto L_08A0E134;
    case 21u: goto L_08A0E138;
    case 22u: goto L_08A0E140;
    case 23u: goto L_08A0E14C;
    case 24u: goto L_08A0E15C;
    case 25u: goto L_08A0E16C;
    case 26u: goto L_08A0E170;
    case 27u: goto L_08A0E174;
    case 28u: goto L_08A0E18C;
    case 29u: goto L_08A0E1A0;
    case 30u: goto L_08A0E1A8;
    case 31u: goto L_08A0E1C4;
    case 32u: goto L_08A0E1D4;
    case 33u: goto L_08A0E1E8;
    case 34u: goto L_08A0E1F0;
    case 35u: goto L_08A0E1FC;
    case 36u: goto L_08A0E20C;
    case 37u: goto L_08A0E21C;
    case 38u: goto L_08A0E224;
    case 39u: goto L_08A0E22C;
    case 40u: goto L_08A0E238;
    case 41u: goto L_08A0E278;
    case 42u: goto L_08A0E284;
    case 43u: goto L_08A0E28C;
    case 44u: goto L_08A0E294;
    case 45u: goto L_08A0E29C;
    case 46u: goto L_08A0E2A4;
    case 47u: goto L_08A0E2AC;
    case 48u: goto L_08A0E2B4;
    case 49u: goto L_08A0E2C0;
    case 50u: goto L_08A0E2DC;
    case 51u: goto L_08A0E2E4;
    case 52u: goto L_08A0E30C;
    case 53u: goto L_08A0E324;
    case 54u: goto L_08A0E334;
    case 55u: goto L_08A0E340;
    case 56u: goto L_08A0E354;
    case 57u: goto L_08A0E35C;
    case 58u: goto L_08A0E368;
    case 59u: goto L_08A0E384;
    case 60u: goto L_08A0E3A0;
    case 61u: goto L_08A0E3AC;
    case 62u: goto L_08A0E3C4;
    case 63u: goto L_08A0E3D0;
    case 64u: goto L_08A0E404;
    case 65u: goto L_08A0E424;
    case 66u: goto L_08A0E42C;
    case 67u: goto L_08A0E448;
    case 68u: goto L_08A0E454;
    case 69u: goto L_08A0E45C;
    case 70u: goto L_08A0E464;
    case 71u: goto L_08A0E480;
    case 72u: goto L_08A0E48C;
    case 73u: goto L_08A0E494;
    case 74u: goto L_08A0E4B0;
    case 75u: goto L_08A0E4B8;
    case 76u: goto L_08A0E4C0;
    case 77u: goto L_08A0E4C8;
    case 78u: goto L_08A0E4E4;
    case 79u: goto L_08A0E4F0;
    case 80u: goto L_08A0E4F8;
    case 81u: goto L_08A0E500;
    case 82u: goto L_08A0E51C;
    case 83u: goto L_08A0E528;
    case 84u: goto L_08A0E530;
    case 85u: goto L_08A0E54C;
    case 86u: goto L_08A0E554;
    case 87u: goto L_08A0E55C;
    case 88u: goto L_08A0E564;
    case 89u: goto L_08A0E580;
    case 90u: goto L_08A0E58C;
    case 91u: goto L_08A0E594;
    case 92u: goto L_08A0E59C;
    case 93u: goto L_08A0E5B8;
    case 94u: goto L_08A0E5C4;
    case 95u: goto L_08A0E5CC;
    case 96u: goto L_08A0E5E8;
    case 97u: goto L_08A0E5F0;
    case 98u: goto L_08A0E5F8;
    case 99u: goto L_08A0E600;
    case 100u: goto L_08A0E61C;
    case 101u: goto L_08A0E628;
    case 102u: goto L_08A0E630;
    case 103u: goto L_08A0E638;
    case 104u: goto L_08A0E654;
    case 105u: goto L_08A0E660;
    case 106u: goto L_08A0E668;
    case 107u: goto L_08A0E684;
    case 108u: goto L_08A0E68C;
    case 109u: goto L_08A0E694;
    case 110u: goto L_08A0E69C;
    case 111u: goto L_08A0E6BC;
    case 112u: goto L_08A0E6C4;
    case 113u: goto L_08A0E6C8;
    case 114u: goto L_08A0E6DC;
    case 115u: goto L_08A0E6E4;
    case 116u: goto L_08A0E7C8;
    case 117u: goto L_08A0E87C;
    case 118u: goto L_08A0E894;
    case 119u: goto L_08A0E8A0;
    case 120u: goto L_08A0E8A8;
    case 121u: goto L_08A0E8B0;
    case 122u: goto L_08A0E8B8;
    case 123u: goto L_08A0E8C0;
    case 124u: goto L_08A0E8D8;
    case 125u: goto L_08A0E8EC;
    case 126u: goto L_08A0E8FC;
    case 127u: goto L_08A0E904;
    case 128u: goto L_08A0E90C;
    case 129u: goto L_08A0E910;
    case 130u: goto L_08A0E920;
    case 131u: goto L_08A0E940;
    case 132u: goto L_08A0E950;
    case 133u: goto L_08A0E95C;
    case 134u: goto L_08A0E970;
    case 135u: goto L_08A0E98C;
    case 136u: goto L_08A0E998;
    case 137u: goto L_08A0E9B4;
    case 138u: goto L_08A0E9BC;
    case 139u: goto L_08A0E9C4;
    case 140u: goto L_08A0E9E0;
    case 141u: goto L_08A0E9E8;
    case 142u: goto L_08A0E9F0;
    case 143u: goto L_08A0E9F8;
    case 144u: goto L_08A0EA14;
    case 145u: goto L_08A0EA3C;
    case 146u: goto L_08A0EA48;
    case 147u: goto L_08A0EA50;
    case 148u: goto L_08A0EA5C;
    case 149u: goto L_08A0EA64;
    case 150u: goto L_08A0EA70;
    case 151u: goto L_08A0EA78;
    case 152u: goto L_08A0EA84;
    case 153u: goto L_08A0EA8C;
    case 154u: goto L_08A0EA94;
    case 155u: goto L_08A0EA9C;
    case 156u: goto L_08A0EAA8;
    case 157u: goto L_08A0EAB8;
    case 158u: goto L_08A0EAC0;
    case 159u: goto L_08A0EACC;
    case 160u: goto L_08A0EAD4;
    case 161u: goto L_08A0EAE0;
    case 162u: goto L_08A0EAE8;
    case 163u: goto L_08A0EAF4;
    case 164u: goto L_08A0EAFC;
    case 165u: goto L_08A0EB04;
    case 166u: goto L_08A0EB0C;
    case 167u: goto L_08A0EB18;
    case 168u: goto L_08A0EB28;
    case 169u: goto L_08A0EB4C;
    case 170u: goto L_08A0EB64;
    case 171u: goto L_08A0EB70;
    case 172u: goto L_08A0EB78;
    case 173u: goto L_08A0EB84;
    case 174u: goto L_08A0EB90;
    case 175u: goto L_08A0EBAC;
    case 176u: goto L_08A0EBB0;
    case 177u: goto L_08A0EBB8;
    case 178u: goto L_08A0EBC4;
    case 179u: goto L_08A0EBCC;
    case 180u: goto L_08A0EBD8;
    case 181u: goto L_08A0EBF4;
    case 182u: goto L_08A0EBF8;
    case 183u: goto L_08A0EC00;
    case 184u: goto L_08A0EC08;
    case 185u: goto L_08A0EC14;
    case 186u: goto L_08A0EC20;
    case 187u: goto L_08A0EC3C;
    case 188u: goto L_08A0EC40;
    case 189u: goto L_08A0EC48;
    case 190u: goto L_08A0EC54;
    case 191u: goto L_08A0EC5C;
    case 192u: goto L_08A0EC68;
    case 193u: goto L_08A0EC84;
    case 194u: goto L_08A0EC98;
    case 195u: goto L_08A0ECAC;
    case 196u: goto L_08A0ECC4;
    case 197u: goto L_08A0ECD0;
    case 198u: goto L_08A0ECD8;
    case 199u: goto L_08A0ECE4;
    case 200u: goto L_08A0ECEC;
    case 201u: goto L_08A0ECF4;
    case 202u: goto L_08A0ED00;
    case 203u: goto L_08A0ED08;
    case 204u: goto L_08A0ED10;
    case 205u: goto L_08A0ED1C;
    case 206u: goto L_08A0ED24;
    case 207u: goto L_08A0ED2C;
    case 208u: goto L_08A0ED38;
    case 209u: goto L_08A0ED40;
    case 210u: goto L_08A0ED48;
    case 211u: goto L_08A0ED54;
    case 212u: goto L_08A0ED5C;
    case 213u: goto L_08A0ED64;
    case 214u: goto L_08A0ED70;
    case 215u: goto L_08A0ED78;
    case 216u: goto L_08A0ED80;
    case 217u: goto L_08A0ED8C;
    case 218u: goto L_08A0ED94;
    case 219u: goto L_08A0ED9C;
    case 220u: goto L_08A0EDA8;
    case 221u: goto L_08A0EDB0;
    case 222u: goto L_08A0EDB8;
    case 223u: goto L_08A0EDC4;
    case 224u: goto L_08A0EDCC;
    case 225u: goto L_08A0EDD4;
    case 226u: goto L_08A0EDE0;
    case 227u: goto L_08A0EDE8;
    case 228u: goto L_08A0EDF0;
    case 229u: goto L_08A0EDFC;
    case 230u: goto L_08A0EE04;
    case 231u: goto L_08A0EE0C;
    case 232u: goto L_08A0EE18;
    case 233u: goto L_08A0EE20;
    case 234u: goto L_08A0EE28;
    case 235u: goto L_08A0EE34;
    case 236u: goto L_08A0EE3C;
    case 237u: goto L_08A0EE44;
    case 238u: goto L_08A0EE50;
    case 239u: goto L_08A0EE58;
    case 240u: goto L_08A0EE60;
    case 241u: goto L_08A0EE6C;
    case 242u: goto L_08A0EE74;
    case 243u: goto L_08A0EE7C;
    case 244u: goto L_08A0EE88;
    case 245u: goto L_08A0EE90;
    case 246u: goto L_08A0EE98;
    case 247u: goto L_08A0EEA4;
    case 248u: goto L_08A0EEAC;
    case 249u: goto L_08A0EEB4;
    case 250u: goto L_08A0EEC0;
    case 251u: goto L_08A0EEC8;
    case 252u: goto L_08A0EED0;
    case 253u: goto L_08A0EEDC;
    case 254u: goto L_08A0EEE4;
    case 255u: goto L_08A0EEEC;
    case 256u: goto L_08A0EEF8;
    case 257u: goto L_08A0EF00;
    case 258u: goto L_08A0EF08;
    case 259u: goto L_08A0EF14;
    case 260u: goto L_08A0EF1C;
    case 261u: goto L_08A0EF24;
    case 262u: goto L_08A0EF30;
    case 263u: goto L_08A0EF38;
    case 264u: goto L_08A0EF40;
    case 265u: goto L_08A0EF4C;
    case 266u: goto L_08A0EF54;
    case 267u: goto L_08A0EF5C;
    case 268u: goto L_08A0EF68;
    case 269u: goto L_08A0EF70;
    case 270u: goto L_08A0EF78;
    case 271u: goto L_08A0EF84;
    case 272u: goto L_08A0EF8C;
    case 273u: goto L_08A0EF94;
    case 274u: goto L_08A0EFA0;
    case 275u: goto L_08A0EFA8;
    case 276u: goto L_08A0EFB0;
    case 277u: goto L_08A0EFB4;
    case 278u: goto L_08A0EFCC;
    case 279u: goto L_08A0EFE0;
    case 280u: goto L_08A0EFEC;
    case 281u: goto L_08A0EFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0E000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E00C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0E05C;
      }
      goto L_08A0E028;
    }
L_08A0E028:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13072));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A0E03Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E03Cu) goto L_08A0E03C;
    return;
L_08A0E03C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0E048u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 95u, 0x08A0C72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0E048u) goto L_08A0E048;
    return;
L_08A0E048:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E05C;
      }
      goto L_08A0E054;
    }
L_08A0E054:
    aot_gpr[31] = (0x08A0E05Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0E0B8;
L_08A0E05C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E084u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0E084u) goto L_08A0E084;
    return;
L_08A0E084:
    aot_gpr[31] = (0x08A0E08Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0E08Cu) goto L_08A0E08C;
    return;
L_08A0E08C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 616u);
    aot_gpr[31] = (0x08A0E0A8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3976));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E0A8u) goto L_08A0E0A8;
    return;
L_08A0E0A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E0B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E0CCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0E0CCu) goto L_08A0E0CC;
    return;
L_08A0E0CC:
    aot_gpr[31] = (0x08A0E0D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0E0D4u) goto L_08A0E0D4;
    return;
L_08A0E0D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0E0E0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0E0E0u) goto L_08A0E0E0;
    return;
L_08A0E0E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E0F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0E128;
      }
      goto L_08A0E114;
    }
L_08A0E114:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0E138;
      }
      goto L_08A0E11C;
    }
L_08A0E11C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0E174;
      }
      goto L_08A0E128;
    }
L_08A0E128:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E174;
      }
      goto L_08A0E134;
    }
L_08A0E134:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0E138;
L_08A0E138:
    aot_gpr[31] = (0x08A0E140u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 81u, 0x08A0D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0E140u) goto L_08A0E140;
    return;
L_08A0E140:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0E170;
      }
      goto L_08A0E14C;
    }
L_08A0E14C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0E15Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 73u, 0x08A0D510u>(ctx, &aot_mem) && ctx.pc == 0x08A0E15Cu) goto L_08A0E15C;
    return;
L_08A0E15C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0E16Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 87u, 0x08A0D620u>(ctx, &aot_mem) && ctx.pc == 0x08A0E16Cu) goto L_08A0E16C;
    return;
L_08A0E16C:
    aot_gpr[4] = (0u | 1u);
    goto L_08A0E170;
L_08A0E170:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_08A0E174;
L_08A0E174:
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
L_08A0E18C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E1A0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0E1A0u) goto L_08A0E1A0;
    return;
L_08A0E1A0:
    aot_gpr[31] = (0x08A0E1A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0E1A8u) goto L_08A0E1A8;
    return;
L_08A0E1A8:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 26u);
    aot_gpr[31] = (0x08A0E1C4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3896));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E1C4u) goto L_08A0E1C4;
    return;
L_08A0E1C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E1D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E1E8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0E1E8u) goto L_08A0E1E8;
    return;
L_08A0E1E8:
    aot_gpr[31] = (0x08A0E1F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0E1F0u) goto L_08A0E1F0;
    return;
L_08A0E1F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0E1FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0E1FCu) goto L_08A0E1FC;
    return;
L_08A0E1FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E20C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A0E22C;
      }
      goto L_08A0E21C;
    }
L_08A0E21C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E22C;
      }
      goto L_08A0E224;
    }
L_08A0E224:
    aot_gpr[31] = (0x08A0E22Cu);
    // nop
    goto L_08A0E1D4;
L_08A0E22C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[20] = (aot_gpr[5] | 0u);
        goto L_08A0E278;
    }
    goto L_08A0E278;
L_08A0E278:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[19] = (aot_gpr[6] | 0u);
        goto L_08A0E284;
    }
    goto L_08A0E284;
L_08A0E284:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E2E4;
      }
      goto L_08A0E28C;
    }
L_08A0E28C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E2E4;
      }
      goto L_08A0E294;
    }
L_08A0E294:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E2E4;
      }
      goto L_08A0E29C;
    }
L_08A0E29C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E2E4;
      }
      goto L_08A0E2A4;
    }
L_08A0E2A4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E2E4;
      }
      goto L_08A0E2AC;
    }
L_08A0E2AC:
    aot_gpr[31] = (0x08A0E2B4u);
    aot_gpr[4] = (0u | 20u);
    goto L_08A0E18C;
L_08A0E2B4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0E2E4;
      }
      goto L_08A0E2C0;
    }
L_08A0E2C0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0E2DCu);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    goto L_08A0E368;
L_08A0E2DC:
    aot_gpr[18] = (aot_gpr[22] | 0u);
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_08A0E2E4;
L_08A0E2E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E30C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A0E334;
      }
      goto L_08A0E324;
    }
L_08A0E324:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0E334u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A0E6DC;
L_08A0E334:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E340:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E35C;
      }
      goto L_08A0E354;
    }
L_08A0E354:
    aot_gpr[31] = (0x08A0E35Cu);
    // nop
    goto L_08A0E3AC;
L_08A0E35C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E368:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E3A0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 162u, 0x08A469B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0E3A0u) goto L_08A0E3A0;
    return;
L_08A0E3A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E3AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E3C4u);
    aot_gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A0E3C4u) goto L_08A0E3C4;
    return;
L_08A0E3C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E3D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A0E694;
      }
      goto L_08A0E404;
    }
L_08A0E404:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(232)));
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[9]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-3864)));
    jump_target = aot_gpr[1];
    aot_gpr[8] = (1u << 16u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E424:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (2u << 16u);
      if (branch_taken) {
          goto L_08A0E45C;
      }
      goto L_08A0E42C;
    }
L_08A0E42C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E448u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E448u) goto L_08A0E448;
    return;
L_08A0E448:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E454;
    }
L_08A0E454:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E45C;
    }
L_08A0E45C:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0E494;
      }
      goto L_08A0E464;
    }
L_08A0E464:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E480u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E480u) goto L_08A0E480;
    return;
L_08A0E480:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E48C;
    }
L_08A0E48C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E494;
    }
L_08A0E494:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0E4B0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E4B0u) goto L_08A0E4B0;
    return;
L_08A0E4B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E4B8;
    }
L_08A0E4B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-127));
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E4C0;
    }
L_08A0E4C0:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (2u << 16u);
      if (branch_taken) {
          goto L_08A0E4F8;
      }
      goto L_08A0E4C8;
    }
L_08A0E4C8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E4E4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E4E4u) goto L_08A0E4E4;
    return;
L_08A0E4E4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E4F0;
    }
L_08A0E4F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E4F8;
    }
L_08A0E4F8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0E530;
      }
      goto L_08A0E500;
    }
L_08A0E500:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E51Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E51Cu) goto L_08A0E51C;
    return;
L_08A0E51C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E528;
    }
L_08A0E528:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E530;
    }
L_08A0E530:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0E54Cu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E54Cu) goto L_08A0E54C;
    return;
L_08A0E54C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E554;
    }
L_08A0E554:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 127u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E55C;
    }
L_08A0E55C:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (2u << 16u);
      if (branch_taken) {
          goto L_08A0E594;
      }
      goto L_08A0E564;
    }
L_08A0E564:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E580u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E580u) goto L_08A0E580;
    return;
L_08A0E580:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E58C;
    }
L_08A0E58C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E594;
    }
L_08A0E594:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0E5CC;
      }
      goto L_08A0E59C;
    }
L_08A0E59C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E5B8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E5B8u) goto L_08A0E5B8;
    return;
L_08A0E5B8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E5C4;
    }
L_08A0E5C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E5CC;
    }
L_08A0E5CC:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0E5E8u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E5E8u) goto L_08A0E5E8;
    return;
L_08A0E5E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E5F0;
    }
L_08A0E5F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-127));
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E5F8;
    }
L_08A0E5F8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (2u << 16u);
      if (branch_taken) {
          goto L_08A0E630;
      }
      goto L_08A0E600;
    }
L_08A0E600:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E61Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E61Cu) goto L_08A0E61C;
    return;
L_08A0E61C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E628;
    }
L_08A0E628:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E630;
    }
L_08A0E630:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0E668;
      }
      goto L_08A0E638;
    }
L_08A0E638:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0E654u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E654u) goto L_08A0E654;
    return;
L_08A0E654:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E660;
    }
L_08A0E660:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E668;
    }
L_08A0E668:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0E684u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E684u) goto L_08A0E684;
    return;
L_08A0E684:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E68C;
    }
L_08A0E68C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 127u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E694;
    }
L_08A0E694:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E69C;
    }
L_08A0E69C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(232)));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0E6BCu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E6BCu) goto L_08A0E6BC;
    return;
L_08A0E6BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E6C8;
      }
      goto L_08A0E6C4;
    }
L_08A0E6C4:
    aot_gpr[16] = (0u | 1u);
    goto L_08A0E6C8;
L_08A0E6C8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E6DC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (0u | 4096u);
        goto L_08A0E7C8;
    }
    goto L_08A0E6E4;
L_08A0E6E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E7C8:
    aot_gpr[6] = (0u | 16384u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[5] = (2u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[5] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[7]);
    aot_gpr[8] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[9] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[9]);
    aot_gpr[10] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[10]);
    aot_gpr[8] = (0u | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    aot_gpr[5] = (0u | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[9]);
    aot_gpr[6] = (0u | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[6]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E87C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E894u);
    aot_gpr[17] = (0u | 0u);
    goto L_08A0E920;
L_08A0E894:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0E8A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0ECAC;
L_08A0E8A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E8C0;
      }
      goto L_08A0E8A8;
    }
L_08A0E8A8:
    aot_gpr[31] = (0x08A0E8B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0EA14;
L_08A0E8B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E8C0;
      }
      goto L_08A0E8B8;
    }
L_08A0E8B8:
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A0E8C0;
L_08A0E8C0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E8D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0E8ECu);
    // nop
    goto L_08A0E920;
L_08A0E8EC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E910;
      }
      goto L_08A0E8FC;
    }
L_08A0E8FC:
    aot_gpr[31] = (0x08A0E904u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0EFCC;
L_08A0E904:
    aot_gpr[31] = (0x08A0E90Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0EB4C;
L_08A0E90C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A0E910;
L_08A0E910:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29024)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(29028));
      if (branch_taken) {
          goto L_08A0E95C;
      }
      goto L_08A0E940;
    }
L_08A0E940:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(29024), aot_gpr[5]);
    aot_gpr[31] = (0x08A0E950u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0EC98;
L_08A0E950:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08A0E95Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18232));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0E95Cu) goto L_08A0E95C;
    return;
L_08A0E95C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0E9F8;
      }
      goto L_08A0E98C;
    }
L_08A0E98C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A0E9BC;
    }
    goto L_08A0E998;
L_08A0E998:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0E9B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E9B4u) goto L_08A0E9B4;
    return;
L_08A0E9B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A0E9BC;
L_08A0E9BC:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[16] & 1u);
        goto L_08A0E9E8;
    }
    goto L_08A0E9C4;
L_08A0E9C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0E9E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0E9E0u) goto L_08A0E9E0;
    return;
L_08A0E9E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A0E9E8;
L_08A0E9E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E9F8;
      }
      goto L_08A0E9F0;
    }
L_08A0E9F0:
    aot_gpr[31] = (0x08A0E9F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0E9F8u) goto L_08A0E9F8;
    return;
L_08A0E9F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EA14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A0EA3Cu);
    aot_gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA3Cu) goto L_08A0EA3C;
    return;
L_08A0EA3C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EB28;
      }
      goto L_08A0EA48;
    }
L_08A0EA48:
    aot_gpr[31] = (0x08A0EA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 191u, 0x08A19D90u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA50u) goto L_08A0EA50;
    return;
L_08A0EA50:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0EA5Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EA5Cu) goto L_08A0EA5C;
    return;
L_08A0EA5C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u | 0u);
        goto L_08A0EA64;
    }
    goto L_08A0EA64;
L_08A0EA64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0EA94;
      }
      goto L_08A0EA70;
    }
L_08A0EA70:
    aot_gpr[31] = (0x08A0EA78u);
    aot_gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 228u, 0x08A17FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA78u) goto L_08A0EA78;
    return;
L_08A0EA78:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (aot_gpr[19] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[20]);
        goto L_08A0EA94;
    }
    goto L_08A0EA84;
L_08A0EA84:
    aot_gpr[31] = (0x08A0EA8Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 203u, 0x08A17E58u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA8Cu) goto L_08A0EA8C;
    return;
L_08A0EA8C:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    goto L_08A0EA94;
L_08A0EA94:
    aot_gpr[31] = (0x08A0EA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 191u, 0x08A19D90u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA9Cu) goto L_08A0EA9C;
    return;
L_08A0EA9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A0EAA8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 222u, 0x08A19F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0EAA8u) goto L_08A0EAA8;
    return;
L_08A0EAA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0EAB8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 4u, 0x089FE06Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0EAB8u) goto L_08A0EAB8;
    return;
L_08A0EAB8:
    aot_gpr[31] = (0x08A0EAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 2u, 0x08A1A008u>(ctx, &aot_mem) && ctx.pc == 0x08A0EAC0u) goto L_08A0EAC0;
    return;
L_08A0EAC0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0EACCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EACCu) goto L_08A0EACC;
    return;
L_08A0EACC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u | 0u);
        goto L_08A0EAD4;
    }
    goto L_08A0EAD4;
L_08A0EAD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0EB04;
      }
      goto L_08A0EAE0;
    }
L_08A0EAE0:
    aot_gpr[31] = (0x08A0EAE8u);
    aot_gpr[4] = (0u | 59592u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 59u, 0x08A1A498u>(ctx, &aot_mem) && ctx.pc == 0x08A0EAE8u) goto L_08A0EAE8;
    return;
L_08A0EAE8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (aot_gpr[19] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[20]);
        goto L_08A0EB04;
    }
    goto L_08A0EAF4;
L_08A0EAF4:
    aot_gpr[31] = (0x08A0EAFCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 50u, 0x08A1A3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0EAFCu) goto L_08A0EAFC;
    return;
L_08A0EAFC:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_08A0EB04;
L_08A0EB04:
    aot_gpr[31] = (0x08A0EB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 2u, 0x08A1A008u>(ctx, &aot_mem) && ctx.pc == 0x08A0EB0Cu) goto L_08A0EB0C;
    return;
L_08A0EB0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A0EB18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 30u, 0x08A1A228u>(ctx, &aot_mem) && ctx.pc == 0x08A0EB18u) goto L_08A0EB18;
    return;
L_08A0EB18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0EB28u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 4u, 0x089FE06Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0EB28u) goto L_08A0EB28;
    return;
L_08A0EB28:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0EB4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A0EB64u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0EB64u) goto L_08A0EB64;
    return;
L_08A0EB64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A0EBB0;
      }
      goto L_08A0EB70;
    }
L_08A0EB70:
    aot_gpr[31] = (0x08A0EB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0EB78u) goto L_08A0EB78;
    return;
L_08A0EB78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A0EB84u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 7u, 0x089FE0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0EB84u) goto L_08A0EB84;
    return;
L_08A0EB84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
        goto L_08A0EBB0;
    }
    goto L_08A0EB90;
L_08A0EB90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0EBACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0EBACu) goto L_08A0EBAC;
    return;
L_08A0EBAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A0EBB0;
L_08A0EBB0:
    aot_gpr[31] = (0x08A0EBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 191u, 0x08A19D90u>(ctx, &aot_mem) && ctx.pc == 0x08A0EBB8u) goto L_08A0EBB8;
    return;
L_08A0EBB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EBC4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0EBC4u) goto L_08A0EBC4;
    return;
L_08A0EBC4:
    aot_gpr[31] = (0x08A0EBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 191u, 0x08A19D90u>(ctx, &aot_mem) && ctx.pc == 0x08A0EBCCu) goto L_08A0EBCC;
    return;
L_08A0EBCC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A0EBF8;
    }
    goto L_08A0EBD8;
L_08A0EBD8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0EBF4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0EBF4u) goto L_08A0EBF4;
    return;
L_08A0EBF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A0EBF8;
L_08A0EBF8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EC40;
      }
      goto L_08A0EC00;
    }
L_08A0EC00:
    aot_gpr[31] = (0x08A0EC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC08u) goto L_08A0EC08;
    return;
L_08A0EC08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A0EC14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 7u, 0x089FE0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0EC14u) goto L_08A0EC14;
    return;
L_08A0EC14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
        goto L_08A0EC40;
    }
    goto L_08A0EC20;
L_08A0EC20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0EC3Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0EC3Cu) goto L_08A0EC3C;
    return;
L_08A0EC3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A0EC40;
L_08A0EC40:
    aot_gpr[31] = (0x08A0EC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 2u, 0x08A1A008u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC48u) goto L_08A0EC48;
    return;
L_08A0EC48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EC54u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC54u) goto L_08A0EC54;
    return;
L_08A0EC54:
    aot_gpr[31] = (0x08A0EC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 2u, 0x08A1A008u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC5Cu) goto L_08A0EC5C;
    return;
L_08A0EC5C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EC84;
      }
      goto L_08A0EC68;
    }
L_08A0EC68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0EC84u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0EC84u) goto L_08A0EC84;
    return;
L_08A0EC84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EC98:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0ECAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A0ECC4u);
    aot_gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0ECC4u) goto L_08A0ECC4;
    return;
L_08A0ECC4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EFB4;
      }
      goto L_08A0ECD0;
    }
L_08A0ECD0:
    aot_gpr[31] = (0x08A0ECD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 177u, 0x08A17C90u>(ctx, &aot_mem) && ctx.pc == 0x08A0ECD8u) goto L_08A0ECD8;
    return;
L_08A0ECD8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ECE4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ECE4u) goto L_08A0ECE4;
    return;
L_08A0ECE4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ECEC;
    }
    goto L_08A0ECEC;
L_08A0ECEC:
    aot_gpr[31] = (0x08A0ECF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0523_entry, 523u, 166u, 0x08A0F974u>(ctx, &aot_mem) && ctx.pc == 0x08A0ECF4u) goto L_08A0ECF4;
    return;
L_08A0ECF4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ED00u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED00u) goto L_08A0ED00;
    return;
L_08A0ED00:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ED08;
    }
    goto L_08A0ED08;
L_08A0ED08:
    aot_gpr[31] = (0x08A0ED10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 95u, 0x08A12684u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED10u) goto L_08A0ED10;
    return;
L_08A0ED10:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ED1Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED1Cu) goto L_08A0ED1C;
    return;
L_08A0ED1C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ED24;
    }
    goto L_08A0ED24;
L_08A0ED24:
    aot_gpr[31] = (0x08A0ED2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 132u, 0x08A12914u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED2Cu) goto L_08A0ED2C;
    return;
L_08A0ED2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ED38u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED38u) goto L_08A0ED38;
    return;
L_08A0ED38:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ED40;
    }
    goto L_08A0ED40;
L_08A0ED40:
    aot_gpr[31] = (0x08A0ED48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 70u, 0x08A174D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED48u) goto L_08A0ED48;
    return;
L_08A0ED48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ED54u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED54u) goto L_08A0ED54;
    return;
L_08A0ED54:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ED5C;
    }
    goto L_08A0ED5C;
L_08A0ED5C:
    aot_gpr[31] = (0x08A0ED64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 76u, 0x08A16648u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED64u) goto L_08A0ED64;
    return;
L_08A0ED64:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ED70u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED70u) goto L_08A0ED70;
    return;
L_08A0ED70:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ED78;
    }
    goto L_08A0ED78;
L_08A0ED78:
    aot_gpr[31] = (0x08A0ED80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 138u, 0x08A16AA0u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED80u) goto L_08A0ED80;
    return;
L_08A0ED80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0ED8Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED8Cu) goto L_08A0ED8C;
    return;
L_08A0ED8C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0ED94;
    }
    goto L_08A0ED94;
L_08A0ED94:
    aot_gpr[31] = (0x08A0ED9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 114u, 0x08A1083Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED9Cu) goto L_08A0ED9C;
    return;
L_08A0ED9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EDA8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EDA8u) goto L_08A0EDA8;
    return;
L_08A0EDA8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EDB0;
    }
    goto L_08A0EDB0;
L_08A0EDB0:
    aot_gpr[31] = (0x08A0EDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0523_entry, 523u, 197u, 0x08A0FBA0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EDB8u) goto L_08A0EDB8;
    return;
L_08A0EDB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EDC4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EDC4u) goto L_08A0EDC4;
    return;
L_08A0EDC4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EDCC;
    }
    goto L_08A0EDCC;
L_08A0EDCC:
    aot_gpr[31] = (0x08A0EDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 206u, 0x08A16F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0EDD4u) goto L_08A0EDD4;
    return;
L_08A0EDD4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EDE0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EDE0u) goto L_08A0EDE0;
    return;
L_08A0EDE0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EDE8;
    }
    goto L_08A0EDE8;
L_08A0EDE8:
    aot_gpr[31] = (0x08A0EDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 224u, 0x08A12F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0EDF0u) goto L_08A0EDF0;
    return;
L_08A0EDF0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EDFCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EDFCu) goto L_08A0EDFC;
    return;
L_08A0EDFC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EE04;
    }
    goto L_08A0EE04;
L_08A0EE04:
    aot_gpr[31] = (0x08A0EE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 22u, 0x08A17188u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE0Cu) goto L_08A0EE0C;
    return;
L_08A0EE0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EE18u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EE18u) goto L_08A0EE18;
    return;
L_08A0EE18:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EE20;
    }
    goto L_08A0EE20;
L_08A0EE20:
    aot_gpr[31] = (0x08A0EE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 21u, 0x08A12164u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE28u) goto L_08A0EE28;
    return;
L_08A0EE28:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EE34u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EE34u) goto L_08A0EE34;
    return;
L_08A0EE34:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EE3C;
    }
    goto L_08A0EE3C;
L_08A0EE3C:
    aot_gpr[31] = (0x08A0EE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 107u, 0x08A16874u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE44u) goto L_08A0EE44;
    return;
L_08A0EE44:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EE50u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EE50u) goto L_08A0EE50;
    return;
L_08A0EE50:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EE58;
    }
    goto L_08A0EE58;
L_08A0EE58:
    aot_gpr[31] = (0x08A0EE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 47u, 0x08A103ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0EE60u) goto L_08A0EE60;
    return;
L_08A0EE60:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EE6Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EE6Cu) goto L_08A0EE6C;
    return;
L_08A0EE6C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EE74;
    }
    goto L_08A0EE74;
L_08A0EE74:
    aot_gpr[31] = (0x08A0EE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 58u, 0x08A123F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE7Cu) goto L_08A0EE7C;
    return;
L_08A0EE7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EE88u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EE88u) goto L_08A0EE88;
    return;
L_08A0EE88:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EE90;
    }
    goto L_08A0EE90;
L_08A0EE90:
    aot_gpr[31] = (0x08A0EE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 1u, 0x08A10000u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE98u) goto L_08A0EE98;
    return;
L_08A0EE98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EEA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EEA4u) goto L_08A0EEA4;
    return;
L_08A0EEA4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EEAC;
    }
    goto L_08A0EEAC;
L_08A0EEAC:
    aot_gpr[31] = (0x08A0EEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 175u, 0x08A16D30u>(ctx, &aot_mem) && ctx.pc == 0x08A0EEB4u) goto L_08A0EEB4;
    return;
L_08A0EEB4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EEC0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EEC0u) goto L_08A0EEC0;
    return;
L_08A0EEC0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EEC8;
    }
    goto L_08A0EEC8;
L_08A0EEC8:
    aot_gpr[31] = (0x08A0EED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 78u, 0x08A105D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0EED0u) goto L_08A0EED0;
    return;
L_08A0EED0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EEDCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EEDCu) goto L_08A0EEDC;
    return;
L_08A0EEDC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EEE4;
    }
    goto L_08A0EEE4;
L_08A0EEE4:
    aot_gpr[31] = (0x08A0EEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0523_entry, 523u, 228u, 0x08A0FDCCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EEECu) goto L_08A0EEEC;
    return;
L_08A0EEEC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EEF8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EEF8u) goto L_08A0EEF8;
    return;
L_08A0EEF8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EF00;
    }
    goto L_08A0EF00;
L_08A0EF00:
    aot_gpr[31] = (0x08A0EF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 66u, 0x08A11580u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF08u) goto L_08A0EF08;
    return;
L_08A0EF08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EF14u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EF14u) goto L_08A0EF14;
    return;
L_08A0EF14:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EF1C;
    }
    goto L_08A0EF1C;
L_08A0EF1C:
    aot_gpr[31] = (0x08A0EF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 187u, 0x08A12C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0EF24u) goto L_08A0EF24;
    return;
L_08A0EF24:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EF30u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EF30u) goto L_08A0EF30;
    return;
L_08A0EF30:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EF38;
    }
    goto L_08A0EF38;
L_08A0EF38:
    aot_gpr[31] = (0x08A0EF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0523_entry, 523u, 135u, 0x08A0F748u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF40u) goto L_08A0EF40;
    return;
L_08A0EF40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EF4Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EF4Cu) goto L_08A0EF4C;
    return;
L_08A0EF4C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EF54;
    }
    goto L_08A0EF54;
L_08A0EF54:
    aot_gpr[31] = (0x08A0EF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 162u, 0x08A11C94u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF5Cu) goto L_08A0EF5C;
    return;
L_08A0EF5C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EF68u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EF68u) goto L_08A0EF68;
    return;
L_08A0EF68:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EF70;
    }
    goto L_08A0EF70;
L_08A0EF70:
    aot_gpr[31] = (0x08A0EF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 193u, 0x08A11ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF78u) goto L_08A0EF78;
    return;
L_08A0EF78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EF84u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EF84u) goto L_08A0EF84;
    return;
L_08A0EF84:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EF8C;
    }
    goto L_08A0EF8C;
L_08A0EF8C:
    aot_gpr[31] = (0x08A0EF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 101u, 0x08A17704u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF94u) goto L_08A0EF94;
    return;
L_08A0EF94:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0EFA0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0EFA0u) goto L_08A0EFA0;
    return;
L_08A0EFA0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A0EFA8;
    }
    goto L_08A0EFA8;
L_08A0EFA8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EFB4;
      }
      goto L_08A0EFB0;
    }
L_08A0EFB0:
    aot_gpr[17] = (0u | 1u);
    goto L_08A0EFB4;
L_08A0EFB4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EFCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0EFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0EFE0u) goto L_08A0EFE0;
    return;
L_08A0EFE0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0523_entry, 523u, 129u, 0x08A0F6D4u>(ctx, &aot_mem); return;
      }
      goto L_08A0EFEC;
    }
L_08A0EFEC:
    aot_gpr[31] = (0x08A0EFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 177u, 0x08A17C90u>(ctx, &aot_mem) && ctx.pc == 0x08A0EFF4u) goto L_08A0EFF4;
    return;
L_08A0EFF4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F000u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0522(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0522_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_522(Runtime &runtime) {
    runtime.register_generated_unit(522u, 0x08A0E000u, 4096u, &recomp_unit_0522, &recomp_unit_0522_entry);
    runtime.register_function(0x08A0E000u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E00Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E028u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E03Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E048u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E054u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E05Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E070u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E084u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E08Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E0A8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E0B8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E0CCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E0D4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E0E0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E0F0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E114u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E11Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E128u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E134u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E138u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E140u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E14Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E15Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E16Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E170u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E174u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E18Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1A0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1A8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1C4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1D4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1E8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1F0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E1FCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E20Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E21Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E224u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E22Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E238u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E278u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E284u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E28Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E294u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E29Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E2A4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E2ACu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E2B4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E2C0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E2DCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E2E4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E30Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E324u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E334u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E340u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E354u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E35Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E368u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E384u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E3A0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E3ACu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E3C4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E3D0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E404u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E424u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E42Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E448u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E454u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E45Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E464u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E480u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E48Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E494u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4B0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4B8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4C0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4C8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4E4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4F0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E4F8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E500u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E51Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E528u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E530u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E54Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E554u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E55Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E564u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E580u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E58Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E594u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E59Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E5B8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E5C4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E5CCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E5E8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E5F0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E5F8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E600u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E61Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E628u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E630u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E638u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E654u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E660u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E668u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E684u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E68Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E694u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E69Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E6BCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E6C4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E6C8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E6DCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E6E4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E7C8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E87Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E894u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8A0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8A8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8B0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8B8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8C0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8D8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8ECu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E8FCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E904u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E90Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E910u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E920u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E940u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E950u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E95Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E970u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E98Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E998u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9B4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9BCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9C4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9E0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9E8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9F0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0E9F8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA14u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA3Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA48u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA50u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA5Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA64u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA70u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA78u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA84u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA8Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA94u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EA9Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAA8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAB8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAC0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EACCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAD4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAE0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAE8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAF4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EAFCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB04u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB0Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB18u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB28u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB4Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB64u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB70u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB78u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB84u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EB90u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBACu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBB0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBB8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBC4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBCCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBD8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBF4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EBF8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC00u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC08u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC14u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC20u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC3Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC40u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC48u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC54u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC5Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC68u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC84u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EC98u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECACu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECC4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECD0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECD8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECE4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECECu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ECF4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED00u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED08u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED10u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED1Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED24u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED2Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED38u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED40u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED48u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED54u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED5Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED64u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED70u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED78u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED80u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED8Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED94u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0ED9Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDA8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDB0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDB8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDC4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDCCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDD4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDE0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDE8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDF0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EDFCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE04u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE0Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE18u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE20u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE28u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE34u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE3Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE44u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE50u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE58u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE60u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE6Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE74u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE7Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE88u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE90u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EE98u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEA4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEACu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEB4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEC0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEC8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EED0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEDCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEE4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEECu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EEF8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF00u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF08u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF14u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF1Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF24u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF30u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF38u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF40u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF4Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF54u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF5Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF68u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF70u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF78u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF84u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF8Cu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EF94u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFA0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFA8u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFB0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFB4u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFCCu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFE0u, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFECu, &recomp_unit_0522, "recomp_unit_0522");
    runtime.register_function(0x08A0EFF4u, &recomp_unit_0522, "recomp_unit_0522");
}
} // namespace psprecomp
