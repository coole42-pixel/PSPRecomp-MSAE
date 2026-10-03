#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0112[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0,
    31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42,
    0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 91,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0,
    101, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0,
    111, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 146,
    0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    157, 158, 0, 0, 0, 159, 0, 160, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 167, 0, 0, 0, 168, 0,
    0, 169, 0, 170, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 179, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0,
    194, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0,
    0, 204, 0, 205, 0, 206, 207, 0, 208, 0, 0, 0, 0, 209, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 216, 0, 217,
    0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0,
    227, 0, 228, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 252, 253, 0, 254, 0, 0, 0, 0,
    255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 270, 0, 271, 0, 0, 0,
    0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287,
};
void recomp_unit_0112_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08874000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0112[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08874000;
    case 2u: goto L_08874008;
    case 3u: goto L_0887402C;
    case 4u: goto L_08874038;
    case 5u: goto L_08874040;
    case 6u: goto L_08874048;
    case 7u: goto L_08874050;
    case 8u: goto L_08874060;
    case 9u: goto L_08874068;
    case 10u: goto L_08874080;
    case 11u: goto L_0887408C;
    case 12u: goto L_0887409C;
    case 13u: goto L_088740A4;
    case 14u: goto L_088740AC;
    case 15u: goto L_088740B0;
    case 16u: goto L_088740B8;
    case 17u: goto L_088740CC;
    case 18u: goto L_088740D8;
    case 19u: goto L_088740F0;
    case 20u: goto L_088740FC;
    case 21u: goto L_0887411C;
    case 22u: goto L_08874128;
    case 23u: goto L_08874160;
    case 24u: goto L_08874180;
    case 25u: goto L_08874194;
    case 26u: goto L_088741AC;
    case 27u: goto L_088741C0;
    case 28u: goto L_088741D4;
    case 29u: goto L_088741E8;
    case 30u: goto L_088741F8;
    case 31u: goto L_08874200;
    case 32u: goto L_08874214;
    case 33u: goto L_0887421C;
    case 34u: goto L_08874228;
    case 35u: goto L_08874234;
    case 36u: goto L_0887424C;
    case 37u: goto L_08874254;
    case 38u: goto L_0887425C;
    case 39u: goto L_08874264;
    case 40u: goto L_0887426C;
    case 41u: goto L_08874274;
    case 42u: goto L_0887427C;
    case 43u: goto L_08874284;
    case 44u: goto L_0887428C;
    case 45u: goto L_08874294;
    case 46u: goto L_0887429C;
    case 47u: goto L_088742A4;
    case 48u: goto L_088742AC;
    case 49u: goto L_088742B4;
    case 50u: goto L_088742BC;
    case 51u: goto L_088742C4;
    case 52u: goto L_088742C8;
    case 53u: goto L_088742D0;
    case 54u: goto L_088742E0;
    case 55u: goto L_088742F0;
    case 56u: goto L_08874304;
    case 57u: goto L_08874310;
    case 58u: goto L_08874330;
    case 59u: goto L_08874338;
    case 60u: goto L_08874340;
    case 61u: goto L_08874358;
    case 62u: goto L_08874360;
    case 63u: goto L_08874368;
    case 64u: goto L_0887437C;
    case 65u: goto L_08874384;
    case 66u: goto L_088743A4;
    case 67u: goto L_088743AC;
    case 68u: goto L_088743C8;
    case 69u: goto L_088743D0;
    case 70u: goto L_088743D8;
    case 71u: goto L_088743EC;
    case 72u: goto L_088743F4;
    case 73u: goto L_08874424;
    case 74u: goto L_08874428;
    case 75u: goto L_08874430;
    case 76u: goto L_08874444;
    case 77u: goto L_0887444C;
    case 78u: goto L_08874460;
    case 79u: goto L_08874468;
    case 80u: goto L_08874470;
    case 81u: goto L_0887447C;
    case 82u: goto L_0887448C;
    case 83u: goto L_088744A0;
    case 84u: goto L_088744B0;
    case 85u: goto L_088744BC;
    case 86u: goto L_088744CC;
    case 87u: goto L_088744E0;
    case 88u: goto L_088744E8;
    case 89u: goto L_088744F0;
    case 90u: goto L_088744F8;
    case 91u: goto L_088744FC;
    case 92u: goto L_08874504;
    case 93u: goto L_08874514;
    case 94u: goto L_08874528;
    case 95u: goto L_08874538;
    case 96u: goto L_08874544;
    case 97u: goto L_08874554;
    case 98u: goto L_08874568;
    case 99u: goto L_08874570;
    case 100u: goto L_08874578;
    case 101u: goto L_08874580;
    case 102u: goto L_08874584;
    case 103u: goto L_0887458C;
    case 104u: goto L_0887459C;
    case 105u: goto L_088745B0;
    case 106u: goto L_088745C4;
    case 107u: goto L_088745D0;
    case 108u: goto L_088745DC;
    case 109u: goto L_088745F0;
    case 110u: goto L_088745F8;
    case 111u: goto L_08874600;
    case 112u: goto L_08874608;
    case 113u: goto L_0887460C;
    case 114u: goto L_08874614;
    case 115u: goto L_08874630;
    case 116u: goto L_08874644;
    case 117u: goto L_08874658;
    case 118u: goto L_08874674;
    case 119u: goto L_08874694;
    case 120u: goto L_088746AC;
    case 121u: goto L_088746B8;
    case 122u: goto L_088746D0;
    case 123u: goto L_088746DC;
    case 124u: goto L_088746E4;
    case 125u: goto L_088746F8;
    case 126u: goto L_08874700;
    case 127u: goto L_08874744;
    case 128u: goto L_0887475C;
    case 129u: goto L_08874774;
    case 130u: goto L_08874790;
    case 131u: goto L_088747B4;
    case 132u: goto L_088747D0;
    case 133u: goto L_088747EC;
    case 134u: goto L_08874800;
    case 135u: goto L_0887480C;
    case 136u: goto L_0887481C;
    case 137u: goto L_08874824;
    case 138u: goto L_0887482C;
    case 139u: goto L_08874830;
    case 140u: goto L_08874838;
    case 141u: goto L_0887484C;
    case 142u: goto L_08874858;
    case 143u: goto L_08874868;
    case 144u: goto L_08874870;
    case 145u: goto L_08874878;
    case 146u: goto L_0887487C;
    case 147u: goto L_08874884;
    case 148u: goto L_08874898;
    case 149u: goto L_088748A4;
    case 150u: goto L_088748B4;
    case 151u: goto L_088748BC;
    case 152u: goto L_088748C4;
    case 153u: goto L_088748C8;
    case 154u: goto L_088748D0;
    case 155u: goto L_088748E0;
    case 156u: goto L_088748F0;
    case 157u: goto L_08874900;
    case 158u: goto L_08874904;
    case 159u: goto L_08874914;
    case 160u: goto L_0887491C;
    case 161u: goto L_08874920;
    case 162u: goto L_08874930;
    case 163u: goto L_0887493C;
    case 164u: goto L_0887494C;
    case 165u: goto L_0887495C;
    case 166u: goto L_08874964;
    case 167u: goto L_08874968;
    case 168u: goto L_08874978;
    case 169u: goto L_08874984;
    case 170u: goto L_0887498C;
    case 171u: goto L_08874990;
    case 172u: goto L_08874998;
    case 173u: goto L_088749B4;
    case 174u: goto L_088749C8;
    case 175u: goto L_088749D0;
    case 176u: goto L_088749DC;
    case 177u: goto L_088749F4;
    case 178u: goto L_08874A04;
    case 179u: goto L_08874A14;
    case 180u: goto L_08874A18;
    case 181u: goto L_08874A2C;
    case 182u: goto L_08874A34;
    case 183u: goto L_08874A50;
    case 184u: goto L_08874A6C;
    case 185u: goto L_08874A80;
    case 186u: goto L_08874A88;
    case 187u: goto L_08874A94;
    case 188u: goto L_08874AAC;
    case 189u: goto L_08874ABC;
    case 190u: goto L_08874ACC;
    case 191u: goto L_08874AD0;
    case 192u: goto L_08874AE4;
    case 193u: goto L_08874AEC;
    case 194u: goto L_08874B00;
    case 195u: goto L_08874B0C;
    case 196u: goto L_08874B1C;
    case 197u: goto L_08874B24;
    case 198u: goto L_08874B2C;
    case 199u: goto L_08874B30;
    case 200u: goto L_08874B38;
    case 201u: goto L_08874B54;
    case 202u: goto L_08874B68;
    case 203u: goto L_08874B74;
    case 204u: goto L_08874B84;
    case 205u: goto L_08874B8C;
    case 206u: goto L_08874B94;
    case 207u: goto L_08874B98;
    case 208u: goto L_08874BA0;
    case 209u: goto L_08874BB4;
    case 210u: goto L_08874BB8;
    case 211u: goto L_08874BC4;
    case 212u: goto L_08874BD0;
    case 213u: goto L_08874BE0;
    case 214u: goto L_08874BE8;
    case 215u: goto L_08874BF0;
    case 216u: goto L_08874BF4;
    case 217u: goto L_08874BFC;
    case 218u: goto L_08874C10;
    case 219u: goto L_08874C18;
    case 220u: goto L_08874C24;
    case 221u: goto L_08874C28;
    case 222u: goto L_08874C38;
    case 223u: goto L_08874C40;
    case 224u: goto L_08874C5C;
    case 225u: goto L_08874C68;
    case 226u: goto L_08874C78;
    case 227u: goto L_08874C80;
    case 228u: goto L_08874C88;
    case 229u: goto L_08874C8C;
    case 230u: goto L_08874C94;
    case 231u: goto L_08874CA8;
    case 232u: goto L_08874CB4;
    case 233u: goto L_08874CC4;
    case 234u: goto L_08874CCC;
    case 235u: goto L_08874CD4;
    case 236u: goto L_08874CD8;
    case 237u: goto L_08874CE0;
    case 238u: goto L_08874CF8;
    case 239u: goto L_08874D08;
    case 240u: goto L_08874D18;
    case 241u: goto L_08874D28;
    case 242u: goto L_08874D34;
    case 243u: goto L_08874D38;
    case 244u: goto L_08874D48;
    case 245u: goto L_08874D50;
    case 246u: goto L_08874D90;
    case 247u: goto L_08874D98;
    case 248u: goto L_08874DAC;
    case 249u: goto L_08874DBC;
    case 250u: goto L_08874DCC;
    case 251u: goto L_08874DD4;
    case 252u: goto L_08874DE0;
    case 253u: goto L_08874DE4;
    case 254u: goto L_08874DEC;
    case 255u: goto L_08874E00;
    case 256u: goto L_08874E10;
    case 257u: goto L_08874E20;
    case 258u: goto L_08874E28;
    case 259u: goto L_08874E44;
    case 260u: goto L_08874E48;
    case 261u: goto L_08874E50;
    case 262u: goto L_08874E64;
    case 263u: goto L_08874E80;
    case 264u: goto L_08874E90;
    case 265u: goto L_08874EB4;
    case 266u: goto L_08874EB8;
    case 267u: goto L_08874EC8;
    case 268u: goto L_08874ED0;
    case 269u: goto L_08874EE4;
    case 270u: goto L_08874EE8;
    case 271u: goto L_08874EF0;
    case 272u: goto L_08874F04;
    case 273u: goto L_08874F14;
    case 274u: goto L_08874F24;
    case 275u: goto L_08874F2C;
    case 276u: goto L_08874F40;
    case 277u: goto L_08874F48;
    case 278u: goto L_08874F50;
    case 279u: goto L_08874F68;
    case 280u: goto L_08874F88;
    case 281u: goto L_08874FBC;
    case 282u: goto L_08874FC4;
    case 283u: goto L_08874FD0;
    case 284u: goto L_08874FD8;
    case 285u: goto L_08874FE4;
    case 286u: goto L_08874FF0;
    case 287u: goto L_08874FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08874000:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874008:
    aot_gpr[6] = (aot_gpr[6] << 6u);
    aot_gpr[8] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0887402C;
L_0887402C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2572)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08874040;
      }
      goto L_08874038;
    }
L_08874038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874060;
      }
      goto L_08874040;
    }
L_08874040:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874050;
      }
      goto L_08874048;
    }
L_08874048:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2572), aot_gpr[4]);
      if (branch_taken) {
          goto L_08874060;
      }
      goto L_08874050;
    }
L_08874050:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887402C;
      }
      goto L_08874060;
    }
L_08874060:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874068:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2572));
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08874080;
L_08874080:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088740A4;
      }
      goto L_0887408C;
    }
L_0887408C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874080;
      }
      goto L_0887409C;
    }
L_0887409C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088740AC;
      }
      goto L_088740A4;
    }
L_088740A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088740B0;
      }
      goto L_088740AC;
    }
L_088740AC:
    aot_gpr[2] = (0u | 16u);
    goto L_088740B0;
L_088740B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088740B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088740D8;
      }
      goto L_088740CC;
    }
L_088740CC:
    aot_gpr[4] = (0u | 9000u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887411C;
      }
      goto L_088740D8;
    }
L_088740D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(524));
      if (branch_taken) {
          goto L_0887411C;
      }
      goto L_088740F0;
    }
L_088740F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088740FCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 253u, 0x08873FBCu>(ctx, &aot_mem) && ctx.pc == 0x088740FCu) goto L_088740FC;
    return;
L_088740FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088740F0;
      }
      goto L_0887411C;
    }
L_0887411C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874128:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(208)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[6] = (aot_gpr[6] ^ 2u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08874200;
      }
      goto L_08874160;
    }
L_08874160:
    aot_gpr[5] = (aot_gpr[11] + static_cast<std::uint32_t>(40));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08874194;
      }
      goto L_08874180;
    }
L_08874180:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[10] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088741F8;
      }
      goto L_08874194;
    }
L_08874194:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088741C0;
      }
      goto L_088741AC;
    }
L_088741AC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[10] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088741F8;
      }
      goto L_088741C0;
    }
L_088741C0:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088741E8;
      }
      goto L_088741D4;
    }
L_088741D4:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[10] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088741F8;
      }
      goto L_088741E8;
    }
L_088741E8:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[10] = (0u | 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    goto L_088741F8;
L_088741F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088742E0;
      }
      goto L_08874200;
    }
L_08874200:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088742E0;
      }
      goto L_08874214;
    }
L_08874214:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1900)));
    goto L_0887421C;
L_0887421C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_088742D0;
      }
      goto L_08874228;
    }
L_08874228:
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088742C4;
      }
      goto L_08874234;
    }
L_08874234:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(7416)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887424C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_08874254;
    }
L_08874254:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 2u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_0887425C;
    }
L_0887425C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 3u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_08874264;
    }
L_08874264:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 4u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_0887426C;
    }
L_0887426C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 5u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_08874274;
    }
L_08874274:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 6u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_0887427C;
    }
L_0887427C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 7u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_08874284;
    }
L_08874284:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 8u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_0887428C;
    }
L_0887428C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 9u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_08874294;
    }
L_08874294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 10u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_0887429C;
    }
L_0887429C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 11u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_088742A4;
    }
L_088742A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 12u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_088742AC;
    }
L_088742AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 13u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_088742B4;
    }
L_088742B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 14u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_088742BC;
    }
L_088742BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 15u);
      if (branch_taken) {
          goto L_088742C8;
      }
      goto L_088742C4;
    }
L_088742C4:
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088742C8;
L_088742C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088742E0;
      }
      goto L_088742D0;
    }
L_088742D0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887421C;
      }
      goto L_088742E0;
    }
L_088742E0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_088743EC;
      }
      goto L_088742F0;
    }
L_088742F0:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3480));
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(12));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08874304;
L_08874304:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088743D8;
      }
      goto L_08874310;
    }
L_08874310:
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(524));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[13] = (aot_gpr[10] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08874338;
      }
      goto L_08874330;
    }
L_08874330:
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(524), aot_gpr[10]);
    goto L_08874338;
L_08874338:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874360;
      }
      goto L_08874340;
    }
L_08874340:
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(2060));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[12]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874360;
      }
      goto L_08874358;
    }
L_08874358:
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2060), aot_gpr[10]);
    goto L_08874360;
L_08874360:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887437C;
      }
      goto L_08874368;
    }
L_08874368:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x0887437Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_08874008;
L_0887437C:
    { const bool branch_taken = aot_gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_088743D0;
      }
      goto L_08874384;
    }
L_08874384:
    aot_gpr[4] = (aot_gpr[11] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(1036));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088743AC;
      }
      goto L_088743A4;
    }
L_088743A4:
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1036), aot_gpr[4]);
    goto L_088743AC;
L_088743AC:
    aot_gpr[4] = (aot_gpr[9] + static_cast<std::uint32_t>(1548));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088743D0;
      }
      goto L_088743C8;
    }
L_088743C8:
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1548), aot_gpr[4]);
    goto L_088743D0;
L_088743D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088743EC;
      }
      goto L_088743D8;
    }
L_088743D8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874304;
      }
      goto L_088743EC;
    }
L_088743EC:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874468;
      }
      goto L_088743F4;
    }
L_088743F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3480));
    aot_gpr[12] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[12] = (aot_gpr[9] + aot_gpr[12]);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(524), aot_gpr[10]);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08874428;
      }
      goto L_08874424;
    }
L_08874424:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(2060), aot_gpr[10]);
    goto L_08874428;
L_08874428:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08874444;
      }
      goto L_08874430;
    }
L_08874430:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08874444u);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    goto L_08874008;
L_08874444:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874460;
      }
      goto L_0887444C;
    }
L_0887444C:
    aot_gpr[4] = (aot_gpr[11] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(1036), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(1548), aot_gpr[4]);
    goto L_08874460;
L_08874460:
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08874468;
L_08874468:
    aot_gpr[31] = (0x08874470u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    goto L_088740B8;
L_08874470:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887447C:
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(2272)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088744F8;
      }
      goto L_0887448C;
    }
L_0887448C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088744F0;
      }
      goto L_088744A0;
    }
L_088744A0:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3480));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1548));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088744B0;
L_088744B0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088744CC;
      }
      goto L_088744BC;
    }
L_088744BC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088744E8;
      }
      goto L_088744CC;
    }
L_088744CC:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088744B0;
      }
      goto L_088744E0;
    }
L_088744E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088744F0;
      }
      goto L_088744E8;
    }
L_088744E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088744FC;
      }
      goto L_088744F0;
    }
L_088744F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088744FC;
      }
      goto L_088744F8;
    }
L_088744F8:
    aot_gpr[2] = (0u | 0u);
    goto L_088744FC;
L_088744FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874504:
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874580;
      }
      goto L_08874514;
    }
L_08874514:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_08874578;
      }
      goto L_08874528;
    }
L_08874528:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3480));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1036));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08874538;
L_08874538:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874554;
      }
      goto L_08874544;
    }
L_08874544:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874570;
      }
      goto L_08874554;
    }
L_08874554:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874538;
      }
      goto L_08874568;
    }
L_08874568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874578;
      }
      goto L_08874570;
    }
L_08874570:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08874584;
      }
      goto L_08874578;
    }
L_08874578:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08874584;
      }
      goto L_08874580;
    }
L_08874580:
    aot_gpr[2] = (0u | 0u);
    goto L_08874584;
L_08874584:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887458C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2280)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874608;
      }
      goto L_0887459C;
    }
L_0887459C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_08874600;
      }
      goto L_088745B0;
    }
L_088745B0:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(524));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3480));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_088745C4;
L_088745C4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088745DC;
      }
      goto L_088745D0;
    }
L_088745D0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088745F8;
      }
      goto L_088745DC;
    }
L_088745DC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088745C4;
      }
      goto L_088745F0;
    }
L_088745F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874600;
      }
      goto L_088745F8;
    }
L_088745F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887460C;
      }
      goto L_08874600;
    }
L_08874600:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887460C;
      }
      goto L_08874608;
    }
L_08874608:
    aot_gpr[2] = (0u | 0u);
    goto L_0887460C;
L_0887460C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874614:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08874630u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08874630u) goto L_08874630;
    return;
L_08874630:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2696)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887475C;
      }
      goto L_08874644;
    }
L_08874644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4460)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088746F8;
      }
      goto L_08874658;
    }
L_08874658:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4464)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2688)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088746E4;
      }
      goto L_08874674;
    }
L_08874674:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (0x08874694u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 83u, 0x088BC5F8u>(ctx, &aot_mem) && ctx.pc == 0x08874694u) goto L_08874694;
    return;
L_08874694:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4528)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088746B8;
      }
      goto L_088746AC;
    }
L_088746AC:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4528), aot_gpr[18]);
    goto L_088746B8;
L_088746B8:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4592)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088746DC;
      }
      goto L_088746D0;
    }
L_088746D0:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4592), aot_gpr[4]);
    goto L_088746DC;
L_088746DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088746F8;
      }
      goto L_088746E4;
    }
L_088746E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4460)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874658;
      }
      goto L_088746F8;
    }
L_088746F8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887475C;
      }
      goto L_08874700;
    }
L_08874700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4460)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2688)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4464), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4528), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x08874744u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 83u, 0x088BC5F8u>(ctx, &aot_mem) && ctx.pc == 0x08874744u) goto L_08874744;
    return;
L_08874744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4460)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4592), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4460), aot_gpr[4]);
    goto L_0887475C;
L_0887475C:
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
L_08874774:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3084)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(3088), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3084), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874790:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3152)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(3156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(3220), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3152), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088747B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3284)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(3288), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3284), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088747D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4200)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4204), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4200), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088747EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887482C;
      }
      goto L_08874800;
    }
L_08874800:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08874824;
      }
      goto L_0887480C;
    }
L_0887480C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874800;
      }
      goto L_0887481C;
    }
L_0887481C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887482C;
      }
      goto L_08874824;
    }
L_08874824:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
      if (branch_taken) {
          goto L_08874830;
      }
      goto L_0887482C;
    }
L_0887482C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08874830;
L_08874830:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874838:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874878;
      }
      goto L_0887484C;
    }
L_0887484C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08874870;
      }
      goto L_08874858;
    }
L_08874858:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887484C;
      }
      goto L_08874868;
    }
L_08874868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874878;
      }
      goto L_08874870;
    }
L_08874870:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1036)));
      if (branch_taken) {
          goto L_0887487C;
      }
      goto L_08874878;
    }
L_08874878:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0887487C;
L_0887487C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874884:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088748C4;
      }
      goto L_08874898;
    }
L_08874898:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088748BC;
      }
      goto L_088748A4;
    }
L_088748A4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874898;
      }
      goto L_088748B4;
    }
L_088748B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088748C4;
      }
      goto L_088748BC;
    }
L_088748BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1548)));
      if (branch_taken) {
          goto L_088748C8;
      }
      goto L_088748C4;
    }
L_088748C4:
    aot_gpr[2] = (0u | 0u);
    goto L_088748C8;
L_088748C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088748D0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[11] < static_cast<std::uint32_t>(90) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887498C;
      }
      goto L_088748E0;
    }
L_088748E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4460)));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887498C;
      }
      goto L_088748F0;
    }
L_088748F0:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08874930;
      }
      goto L_08874900;
    }
L_08874900:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_08874904;
L_08874904:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(524)));
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08874920;
      }
      goto L_08874914;
    }
L_08874914:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874920;
      }
      goto L_0887491C;
    }
L_0887491C:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08874920;
L_08874920:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874904;
      }
      goto L_08874930;
    }
L_08874930:
    aot_gpr[7] = (0u | 90u);
    { const bool branch_taken = aot_gpr[10] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0887498C;
      }
      goto L_0887493C;
    }
L_0887493C:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08874978;
      }
      goto L_0887494C;
    }
L_0887494C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4592)));
    aot_gpr[10] = (aot_gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
      if (branch_taken) {
          goto L_08874968;
      }
      goto L_0887495C;
    }
L_0887495C:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874968;
      }
      goto L_08874964;
    }
L_08874964:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08874968;
L_08874968:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887494C;
      }
      goto L_08874978;
    }
L_08874978:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887498C;
      }
      goto L_08874984;
    }
L_08874984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08874990;
      }
      goto L_0887498C;
    }
L_0887498C:
    aot_gpr[2] = (0u | 0u);
    goto L_08874990;
L_08874990:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874998:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3352)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(3356), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3352), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088749B4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3352)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3352), 0u);
      if (branch_taken) {
          goto L_08874A04;
      }
      goto L_088749C8;
    }
L_088749C8:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(3352));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_088749D0;
L_088749D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(3356)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088749F4;
      }
      goto L_088749DC;
    }
L_088749DC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[11] << 2u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(3356), aot_gpr[7]);
    goto L_088749F4;
L_088749F4:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088749D0;
      }
      goto L_08874A04;
    }
L_08874A04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3352)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08874A2C;
      }
      goto L_08874A14;
    }
L_08874A14:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    goto L_08874A18;
L_08874A18:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3356), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874A18;
      }
      goto L_08874A2C;
    }
L_08874A2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874A34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3484)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(3488), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3484), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874A50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3552)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(3556), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3552), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874A6C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3552)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3552), 0u);
      if (branch_taken) {
          goto L_08874ABC;
      }
      goto L_08874A80;
    }
L_08874A80:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(3552));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_08874A88;
L_08874A88:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(3556)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874AAC;
      }
      goto L_08874A94;
    }
L_08874A94:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[11] << 2u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(3556), aot_gpr[7]);
    goto L_08874AAC;
L_08874AAC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874A88;
      }
      goto L_08874ABC;
    }
L_08874ABC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3552)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08874AE4;
      }
      goto L_08874ACC;
    }
L_08874ACC:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    goto L_08874AD0;
L_08874AD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3556), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874AD0;
      }
      goto L_08874AE4;
    }
L_08874AE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874AEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3552)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874B2C;
      }
      goto L_08874B00;
    }
L_08874B00:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3556)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874B24;
      }
      goto L_08874B0C;
    }
L_08874B0C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874B00;
      }
      goto L_08874B1C;
    }
L_08874B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874B2C;
      }
      goto L_08874B24;
    }
L_08874B24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08874B30;
      }
      goto L_08874B2C;
    }
L_08874B2C:
    aot_gpr[2] = (0u | 0u);
    goto L_08874B30;
L_08874B30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874B38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4068)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4072), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4068), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874B54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4068)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874B94;
      }
      goto L_08874B68;
    }
L_08874B68:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4072)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874B8C;
      }
      goto L_08874B74;
    }
L_08874B74:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874B84;
    }
L_08874B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874B94;
      }
      goto L_08874B8C;
    }
L_08874B8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08874B98;
      }
      goto L_08874B94;
    }
L_08874B94:
    aot_gpr[2] = (0u | 0u);
    goto L_08874B98;
L_08874B98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874BA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4460)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08874BF0;
      }
      goto L_08874BB4;
    }
L_08874BB4:
    aot_gpr[4] = (0u | 1u);
    goto L_08874BB8;
L_08874BB8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4464)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874BD0;
      }
      goto L_08874BC4;
    }
L_08874BC4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4592)));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08874BE8;
      }
      goto L_08874BD0;
    }
L_08874BD0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874BB8;
      }
      goto L_08874BE0;
    }
L_08874BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874BF0;
      }
      goto L_08874BE8;
    }
L_08874BE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08874BF4;
      }
      goto L_08874BF0;
    }
L_08874BF0:
    aot_gpr[2] = (0u | 0u);
    goto L_08874BF4;
L_08874BF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874BFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4460)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08874C38;
      }
      goto L_08874C10;
    }
L_08874C10:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4592));
    aot_gpr[4] = (0u | 1u);
    goto L_08874C18;
L_08874C18:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08874C28;
      }
      goto L_08874C24;
    }
L_08874C24:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08874C28;
L_08874C28:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874C18;
      }
      goto L_08874C38;
    }
L_08874C38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874C40:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3104)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874C88;
      }
      goto L_08874C5C;
    }
L_08874C5C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3108)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874C80;
      }
      goto L_08874C68;
    }
L_08874C68:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874C5C;
      }
      goto L_08874C78;
    }
L_08874C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874C88;
      }
      goto L_08874C80;
    }
L_08874C80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08874C8C;
      }
      goto L_08874C88;
    }
L_08874C88:
    aot_gpr[2] = (0u | 0u);
    goto L_08874C8C;
L_08874C8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874C94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4460)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874CD4;
      }
      goto L_08874CA8;
    }
L_08874CA8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4464)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08874CCC;
      }
      goto L_08874CB4;
    }
L_08874CB4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874CA8;
      }
      goto L_08874CC4;
    }
L_08874CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874CD4;
      }
      goto L_08874CCC;
    }
L_08874CCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4592)));
      if (branch_taken) {
          goto L_08874CD8;
      }
      goto L_08874CD4;
    }
L_08874CD4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08874CD8;
L_08874CD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874CE0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[10] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08874D48;
      }
      goto L_08874CF8;
    }
L_08874CF8:
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[8] << (aot_gpr[7] & 31u));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_08874D08;
L_08874D08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4660)));
    aot_gpr[3] = (aot_gpr[3] & 32767u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874D18;
    }
L_08874D18:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(4662)));
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[7]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874D34;
      }
      goto L_08874D28;
    }
L_08874D28:
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(4662), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[2] = (0u | 1u);
    goto L_08874D34;
L_08874D34:
    aot_gpr[11] = (0u | 1u);
    goto L_08874D38;
L_08874D38:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[10] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874D08;
      }
      goto L_08874D48;
    }
L_08874D48:
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[7] = (aot_gpr[9] << 2u);
      if (branch_taken) {
          goto L_08874D90;
      }
      goto L_08874D50;
    }
L_08874D50:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4660)));
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-32768));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] & 32767u);
    aot_gpr[5] = (aot_gpr[8] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4660), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[2] << (aot_gpr[5] & 31u));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(4662), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4660)));
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4660), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4656), aot_gpr[6]);
    goto L_08874D90;
L_08874D90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874D98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4660));
      if (branch_taken) {
          goto L_08874DE0;
      }
      goto L_08874DAC;
    }
L_08874DAC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] & 32767u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874DD4;
      }
      goto L_08874DBC;
    }
L_08874DBC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874DAC;
      }
      goto L_08874DCC;
    }
L_08874DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874DE0;
      }
      goto L_08874DD4;
    }
L_08874DD4:
    aot_gpr[2] = (aot_gpr[8] & 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08874DE4;
      }
      goto L_08874DE0;
    }
L_08874DE0:
    aot_gpr[2] = (0u | 0u);
    goto L_08874DE4;
L_08874DE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874DEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4660));
      if (branch_taken) {
          goto L_08874E44;
      }
      goto L_08874E00;
    }
L_08874E00:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] & 32767u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874E28;
      }
      goto L_08874E10;
    }
L_08874E10:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874E00;
      }
      goto L_08874E20;
    }
L_08874E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874E44;
      }
      goto L_08874E28;
    }
L_08874E28:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08874E48;
      }
      goto L_08874E44;
    }
L_08874E44:
    aot_gpr[2] = (0u | 1u);
    goto L_08874E48;
L_08874E48:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874E50:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874EE4;
      }
      goto L_08874E64;
    }
L_08874E64:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4660));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] & 32767u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874ED0;
      }
      goto L_08874E80;
    }
L_08874E80:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08874EC8;
      }
      goto L_08874E90;
    }
L_08874E90:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4660));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[8] << (aot_gpr[5] & 31u));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874EB8;
      }
      goto L_08874EB4;
    }
L_08874EB4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08874EB8;
L_08874EB8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874E90;
      }
      goto L_08874EC8;
    }
L_08874EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874EE8;
      }
      goto L_08874ED0;
    }
L_08874ED0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08874E64;
      }
      goto L_08874EE4;
    }
L_08874EE4:
    aot_gpr[2] = (0u | 0u);
    goto L_08874EE8;
L_08874EE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874EF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08874F40;
      }
      goto L_08874F04;
    }
L_08874F04:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4660)));
    aot_gpr[9] = (aot_gpr[8] & 32767u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08874F2C;
      }
      goto L_08874F14;
    }
L_08874F14:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874F04;
      }
      goto L_08874F24;
    }
L_08874F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08874F40;
      }
      goto L_08874F2C;
    }
L_08874F2C:
    aot_gpr[5] = (65535u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32767));
    aot_gpr[5] = (aot_gpr[8] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4660), aot_gpr[5]);
      if (branch_taken) {
          goto L_08874F40;
      }
      goto L_08874F40;
    }
L_08874F40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874F48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4656)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874F50:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4660));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & 32767u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874F68:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874F88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(20));
    goto L_08874FBC;
L_08874FBC:
    aot_gpr[31] = (0x08874FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x08874FC4u) goto L_08874FC4;
    return;
L_08874FC4:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 12u, 0x08875070u>(ctx, &aot_mem); return;
      }
      goto L_08874FD0;
    }
L_08874FD0:
    aot_gpr[31] = (0x08874FD8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x08874FD8u) goto L_08874FD8;
    return;
L_08874FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 11u, 0x08875068u>(ctx, &aot_mem); return;
      }
      goto L_08874FE4;
    }
L_08874FE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 3u, 0x08875014u>(ctx, &aot_mem); return;
      }
      goto L_08874FF0;
    }
L_08874FF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08874FFCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08874838;
L_08874FFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08875000u; return;
}

void recomp_unit_0112(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0112_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_112(Runtime &runtime) {
    runtime.register_generated_unit(112u, 0x08874000u, 4096u, &recomp_unit_0112, &recomp_unit_0112_entry);
    runtime.register_function(0x08874000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874008u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887402Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874038u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874040u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874048u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874050u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874060u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874068u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874080u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887408Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887409Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088740FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887411Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874128u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874160u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874180u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874194u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088741ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088741C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088741D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088741E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088741F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874200u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887421Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874228u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874234u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887424Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874254u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887425Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874264u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887426Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874274u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887427Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874284u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887428Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874294u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887429Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088742F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874304u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874310u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874330u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874338u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874340u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874358u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874368u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887437Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088743F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874424u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874430u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874444u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887444Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874468u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874470u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887447Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887448Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088744FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874504u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874514u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874528u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874538u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874568u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874580u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874584u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887458Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887459Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088745B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088745C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088745D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088745DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088745F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088745F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874600u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874608u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887460Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874614u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874630u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874644u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874658u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874694u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088746ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088746B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088746D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088746DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088746E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088746F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874700u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874744u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887475Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874774u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088747B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088747D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088747ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874800u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887480Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887481Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874824u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887482Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874830u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887484Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874868u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874870u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887487Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874884u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088748F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874900u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874904u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874914u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887491Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874920u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874930u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887493Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887494Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887495Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874964u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874968u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874978u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874984u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x0887498Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874990u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874998u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088749B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088749C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088749D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088749DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x088749F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874A94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874AACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874ABCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874ACCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874AD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874AE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874AECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874B98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874BFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874C94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874CF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874D98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874E90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874EB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874EB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874EC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874ED0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874EE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874EE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874EF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874F88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x08874FFCu, &recomp_unit_0112, "recomp_unit_0112");
}
} // namespace psprecomp
