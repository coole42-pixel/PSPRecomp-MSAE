#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0354[1020] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 17, 0,
    18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0,
    83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    0, 91, 0, 92, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 120, 0, 121,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 125, 0, 0, 126, 0, 0, 0, 127, 128, 0, 129, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 145, 0, 146,
    0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174,
    0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0,
    248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 259, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264,
};
void recomp_unit_0354_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08966004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0354[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08966004;
    case 2u: goto L_08966020;
    case 3u: goto L_08966034;
    case 4u: goto L_08966038;
    case 5u: goto L_08966040;
    case 6u: goto L_08966058;
    case 7u: goto L_08966064;
    case 8u: goto L_08966074;
    case 9u: goto L_0896608C;
    case 10u: goto L_089660A0;
    case 11u: goto L_089660B0;
    case 12u: goto L_089660CC;
    case 13u: goto L_089660D4;
    case 14u: goto L_089660DC;
    case 15u: goto L_089660E4;
    case 16u: goto L_089660F4;
    case 17u: goto L_089660FC;
    case 18u: goto L_08966104;
    case 19u: goto L_0896610C;
    case 20u: goto L_08966114;
    case 21u: goto L_0896611C;
    case 22u: goto L_0896612C;
    case 23u: goto L_08966134;
    case 24u: goto L_08966144;
    case 25u: goto L_08966154;
    case 26u: goto L_0896615C;
    case 27u: goto L_0896616C;
    case 28u: goto L_08966190;
    case 29u: goto L_0896619C;
    case 30u: goto L_089661A4;
    case 31u: goto L_089661B0;
    case 32u: goto L_089661B8;
    case 33u: goto L_089661C4;
    case 34u: goto L_089661DC;
    case 35u: goto L_0896620C;
    case 36u: goto L_0896621C;
    case 37u: goto L_08966228;
    case 38u: goto L_08966230;
    case 39u: goto L_08966240;
    case 40u: goto L_0896624C;
    case 41u: goto L_08966264;
    case 42u: goto L_0896628C;
    case 43u: goto L_089662A8;
    case 44u: goto L_089662BC;
    case 45u: goto L_089662C8;
    case 46u: goto L_089662D0;
    case 47u: goto L_089662E4;
    case 48u: goto L_08966300;
    case 49u: goto L_08966310;
    case 50u: goto L_0896632C;
    case 51u: goto L_08966340;
    case 52u: goto L_0896634C;
    case 53u: goto L_08966358;
    case 54u: goto L_08966368;
    case 55u: goto L_08966374;
    case 56u: goto L_08966384;
    case 57u: goto L_08966390;
    case 58u: goto L_089663B0;
    case 59u: goto L_089663C0;
    case 60u: goto L_089663D0;
    case 61u: goto L_089663DC;
    case 62u: goto L_089663E8;
    case 63u: goto L_089663F0;
    case 64u: goto L_089663FC;
    case 65u: goto L_08966420;
    case 66u: goto L_08966428;
    case 67u: goto L_08966438;
    case 68u: goto L_08966444;
    case 69u: goto L_0896644C;
    case 70u: goto L_08966454;
    case 71u: goto L_08966458;
    case 72u: goto L_08966460;
    case 73u: goto L_0896648C;
    case 74u: goto L_08966494;
    case 75u: goto L_0896649C;
    case 76u: goto L_089664A4;
    case 77u: goto L_089664AC;
    case 78u: goto L_089664B4;
    case 79u: goto L_089664C0;
    case 80u: goto L_089664E8;
    case 81u: goto L_089664F4;
    case 82u: goto L_089664FC;
    case 83u: goto L_08966504;
    case 84u: goto L_08966510;
    case 85u: goto L_08966530;
    case 86u: goto L_08966538;
    case 87u: goto L_08966548;
    case 88u: goto L_0896655C;
    case 89u: goto L_08966564;
    case 90u: goto L_08966580;
    case 91u: goto L_08966588;
    case 92u: goto L_08966590;
    case 93u: goto L_08966594;
    case 94u: goto L_089665A0;
    case 95u: goto L_089665A8;
    case 96u: goto L_089665BC;
    case 97u: goto L_089665C4;
    case 98u: goto L_089665CC;
    case 99u: goto L_089665D4;
    case 100u: goto L_089665D8;
    case 101u: goto L_089665F8;
    case 102u: goto L_0896661C;
    case 103u: goto L_0896662C;
    case 104u: goto L_08966634;
    case 105u: goto L_08966644;
    case 106u: goto L_0896664C;
    case 107u: goto L_08966654;
    case 108u: goto L_08966664;
    case 109u: goto L_0896666C;
    case 110u: goto L_08966680;
    case 111u: goto L_0896668C;
    case 112u: goto L_08966698;
    case 113u: goto L_089666A8;
    case 114u: goto L_089666AC;
    case 115u: goto L_089666B4;
    case 116u: goto L_089666CC;
    case 117u: goto L_089666D8;
    case 118u: goto L_089666E4;
    case 119u: goto L_089666F4;
    case 120u: goto L_089666F8;
    case 121u: goto L_08966700;
    case 122u: goto L_08966710;
    case 123u: goto L_08966738;
    case 124u: goto L_0896673C;
    case 125u: goto L_08966744;
    case 126u: goto L_08966750;
    case 127u: goto L_08966760;
    case 128u: goto L_08966764;
    case 129u: goto L_0896676C;
    case 130u: goto L_0896677C;
    case 131u: goto L_08966784;
    case 132u: goto L_089667A0;
    case 133u: goto L_089667B0;
    case 134u: goto L_089667B8;
    case 135u: goto L_089667C4;
    case 136u: goto L_089667E4;
    case 137u: goto L_089667EC;
    case 138u: goto L_089667F4;
    case 139u: goto L_0896680C;
    case 140u: goto L_08966818;
    case 141u: goto L_0896682C;
    case 142u: goto L_08966840;
    case 143u: goto L_0896684C;
    case 144u: goto L_08966874;
    case 145u: goto L_08966878;
    case 146u: goto L_08966880;
    case 147u: goto L_08966888;
    case 148u: goto L_08966894;
    case 149u: goto L_089668A0;
    case 150u: goto L_089668A8;
    case 151u: goto L_089668B0;
    case 152u: goto L_089668B8;
    case 153u: goto L_089668BC;
    case 154u: goto L_089668C4;
    case 155u: goto L_089668CC;
    case 156u: goto L_089668E8;
    case 157u: goto L_089668F0;
    case 158u: goto L_089668F8;
    case 159u: goto L_08966914;
    case 160u: goto L_08966934;
    case 161u: goto L_08966940;
    case 162u: goto L_08966948;
    case 163u: goto L_0896694C;
    case 164u: goto L_08966964;
    case 165u: goto L_0896697C;
    case 166u: goto L_08966984;
    case 167u: goto L_08966994;
    case 168u: goto L_089669AC;
    case 169u: goto L_089669BC;
    case 170u: goto L_089669C4;
    case 171u: goto L_089669D4;
    case 172u: goto L_089669E0;
    case 173u: goto L_089669F8;
    case 174u: goto L_08966A00;
    case 175u: goto L_08966A0C;
    case 176u: goto L_08966A24;
    case 177u: goto L_08966A30;
    case 178u: goto L_08966A4C;
    case 179u: goto L_08966A64;
    case 180u: goto L_08966A70;
    case 181u: goto L_08966A80;
    case 182u: goto L_08966A9C;
    case 183u: goto L_08966AA4;
    case 184u: goto L_08966AAC;
    case 185u: goto L_08966AC0;
    case 186u: goto L_08966B20;
    case 187u: goto L_08966B2C;
    case 188u: goto L_08966B34;
    case 189u: goto L_08966B3C;
    case 190u: goto L_08966B4C;
    case 191u: goto L_08966B54;
    case 192u: goto L_08966B5C;
    case 193u: goto L_08966B6C;
    case 194u: goto L_08966B78;
    case 195u: goto L_08966B90;
    case 196u: goto L_08966BC0;
    case 197u: goto L_08966BCC;
    case 198u: goto L_08966BE4;
    case 199u: goto L_08966BF0;
    case 200u: goto L_08966C18;
    case 201u: goto L_08966C20;
    case 202u: goto L_08966C28;
    case 203u: goto L_08966C30;
    case 204u: goto L_08966C3C;
    case 205u: goto L_08966C44;
    case 206u: goto L_08966C4C;
    case 207u: goto L_08966C58;
    case 208u: goto L_08966C80;
    case 209u: goto L_08966C88;
    case 210u: goto L_08966C90;
    case 211u: goto L_08966C98;
    case 212u: goto L_08966CA4;
    case 213u: goto L_08966CAC;
    case 214u: goto L_08966CB4;
    case 215u: goto L_08966CC0;
    case 216u: goto L_08966CD4;
    case 217u: goto L_08966CF4;
    case 218u: goto L_08966D08;
    case 219u: goto L_08966D14;
    case 220u: goto L_08966D20;
    case 221u: goto L_08966D3C;
    case 222u: goto L_08966D48;
    case 223u: goto L_08966D54;
    case 224u: goto L_08966D60;
    case 225u: goto L_08966D6C;
    case 226u: goto L_08966D7C;
    case 227u: goto L_08966D98;
    case 228u: goto L_08966DA0;
    case 229u: goto L_08966DA8;
    case 230u: goto L_08966DBC;
    case 231u: goto L_08966DCC;
    case 232u: goto L_08966DD8;
    case 233u: goto L_08966DF0;
    case 234u: goto L_08966DFC;
    case 235u: goto L_08966E30;
    case 236u: goto L_08966E4C;
    case 237u: goto L_08966E58;
    case 238u: goto L_08966E64;
    case 239u: goto L_08966E70;
    case 240u: goto L_08966E7C;
    case 241u: goto L_08966EA0;
    case 242u: goto L_08966EAC;
    case 243u: goto L_08966EB4;
    case 244u: goto L_08966EBC;
    case 245u: goto L_08966EDC;
    case 246u: goto L_08966EE8;
    case 247u: goto L_08966EFC;
    case 248u: goto L_08966F04;
    case 249u: goto L_08966F0C;
    case 250u: goto L_08966F14;
    case 251u: goto L_08966F2C;
    case 252u: goto L_08966F38;
    case 253u: goto L_08966F40;
    case 254u: goto L_08966F48;
    case 255u: goto L_08966F50;
    case 256u: goto L_08966F58;
    case 257u: goto L_08966F64;
    case 258u: goto L_08966F84;
    case 259u: goto L_08966F90;
    case 260u: goto L_08966F94;
    case 261u: goto L_08966F9C;
    case 262u: goto L_08966FA8;
    case 263u: goto L_08966FD0;
    case 264u: goto L_08966FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08966004:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966020:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08966038;
      }
      goto L_08966034;
    }
L_08966034:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26984), 0u);
    goto L_08966038;
L_08966038:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08966058u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08966058u) goto L_08966058;
    return;
L_08966058:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[31] = (0x08966064u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 82u, 0x08964524u>(ctx, &aot_mem) && ctx.pc == 0x08966064u) goto L_08966064;
    return;
L_08966064:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896608Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896608Cu) goto L_0896608C;
    return;
L_0896608C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089660A0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 66u, 0x08964438u>(ctx, &aot_mem) && ctx.pc == 0x089660A0u) goto L_089660A0;
    return;
L_089660A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089660B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    aot_gpr[6] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089660E4;
      }
      goto L_089660CC;
    }
L_089660CC:
    aot_gpr[31] = (0x089660D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089660D4u) goto L_089660D4;
    return;
L_089660D4:
    aot_gpr[31] = (0x089660DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 85u, 0x08964564u>(ctx, &aot_mem) && ctx.pc == 0x089660DCu) goto L_089660DC;
    return;
L_089660DC:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    goto L_089660E4;
L_089660E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089660F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089660FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966104:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896610C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966114:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896611C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896612Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896612Cu) goto L_0896612C;
    return;
L_0896612C:
    aot_gpr[31] = (0x08966134u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x08966134u) goto L_08966134;
    return;
L_08966134:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966144:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08966154u) goto L_08966154;
    return;
L_08966154:
    aot_gpr[31] = (0x0896615Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896615Cu) goto L_0896615C;
    return;
L_0896615C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896616C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08966190u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08966190u) goto L_08966190;
    return;
L_08966190:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896619Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 201u, 0x08964E40u>(ctx, &aot_mem) && ctx.pc == 0x0896619Cu) goto L_0896619C;
    return;
L_0896619C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089661B8;
      }
      goto L_089661A4;
    }
L_089661A4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089661B0u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089661B0u) goto L_089661B0;
    return;
L_089661B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089661C4;
      }
      goto L_089661B8;
    }
L_089661B8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089661C4u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089661C4u) goto L_089661C4;
    return;
L_089661C4:
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
L_089661DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0896620Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896620Cu) goto L_0896620C;
    return;
L_0896620C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896621Cu);
    aot_gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0896621Cu) goto L_0896621C;
    return;
L_0896621C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), 0u);
    aot_gpr[31] = (0x08966228u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5A86Cu;
    return;
L_08966228:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966240;
      }
      goto L_08966230;
    }
L_08966230:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(196));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x08966240u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08966240u) goto L_08966240;
    return;
L_08966240:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896624Cu);
    aot_gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 166u, 0x089838BCu>(ctx, &aot_mem) && ctx.pc == 0x0896624Cu) goto L_0896624C;
    return;
L_0896624C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(164));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896628Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0896628Cu) goto L_0896628C;
    return;
L_0896628C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089662A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(288)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089662BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[6]);
    goto L_089661DC;
L_089662BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089662C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089662D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089662E4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 188u, 0x08962D0Cu>(ctx, &aot_mem) && ctx.pc == 0x089662E4u) goto L_089662E4;
    return;
L_089662E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5072));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08966300u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08966300u) goto L_08966300;
    return;
L_08966300:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08966310u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08966310u) goto L_08966310;
    return;
L_08966310:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896632C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966340u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    goto L_089662D0;
L_08966340:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896634Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26880));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896634Cu) goto L_0896634C;
    return;
L_0896634C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08966368u) goto L_08966368;
    return;
L_08966368:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08966384u) goto L_08966384;
    return;
L_08966384:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966390:
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5200));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089663B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089663F0;
      }
      goto L_089663C0;
    }
L_089663C0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5200));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_089663DC;
      }
      goto L_089663D0;
    }
L_089663D0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25904));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_089663DC;
L_089663DC:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089663F0;
      }
      goto L_089663E8;
    }
L_089663E8:
    aot_gpr[31] = (0x089663F0u);
    // nop
    goto L_08966374;
L_089663F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089663FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[31]);
    aot_gpr[31] = (0x08966420u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 15u, 0x08986150u>(ctx, &aot_mem) && ctx.pc == 0x08966420u) goto L_08966420;
    return;
L_08966420:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_0896644C;
      }
      goto L_08966428;
    }
L_08966428:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08966438u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08966438u) goto L_08966438;
    return;
L_08966438:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08966454;
      }
      goto L_08966444;
    }
L_08966444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966458;
      }
      goto L_0896644C;
    }
L_0896644C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_08966454;
    }
L_08966454:
    aot_gpr[4] = (0u | 2u);
    goto L_08966458;
L_08966458:
    aot_gpr[31] = (0x08966460u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    ctx.pc = 0x08A5B0CCu;
    return;
L_08966460:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (0u | 20000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[31] = (0x0896648Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 79u, 0x089EB4C8u>(ctx, &aot_mem) && ctx.pc == 0x0896648Cu) goto L_0896648C;
    return;
L_0896648C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089664AC;
      }
      goto L_08966494;
    }
L_08966494:
    aot_gpr[31] = (0x0896649Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0444_entry, 444u, 181u, 0x089C0E7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896649Cu) goto L_0896649C;
    return;
L_0896649C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089664B4;
      }
      goto L_089664A4;
    }
L_089664A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_089664AC;
    }
L_089664AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_089664B4;
    }
L_089664B4:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x089664C0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 178u, 0x08994CB4u>(ctx, &aot_mem) && ctx.pc == 0x089664C0u) goto L_089664C0;
    return;
L_089664C0:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24852));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_gpr[19] = (2186u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-25144));
    aot_gpr[4] = (2186u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25132));
    aot_gpr[31] = (0x089664E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 199u, 0x08962DACu>(ctx, &aot_mem) && ctx.pc == 0x089664E8u) goto L_089664E8;
    return;
L_089664E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[2]);
    aot_gpr[31] = (0x089664F4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 140u, 0x089967CCu>(ctx, &aot_mem) && ctx.pc == 0x089664F4u) goto L_089664F4;
    return;
L_089664F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966504;
      }
      goto L_089664FC;
    }
L_089664FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_08966504;
    }
L_08966504:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x08966510u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 174u, 0x0898392Cu>(ctx, &aot_mem) && ctx.pc == 0x08966510u) goto L_08966510;
    return;
L_08966510:
    aot_gpr[4] = (0u | 3659u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[31] = (0x08966530u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 217u, 0x089DBC64u>(ctx, &aot_mem) && ctx.pc == 0x08966530u) goto L_08966530;
    return;
L_08966530:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966588;
      }
      goto L_08966538;
    }
L_08966538:
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08966548u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 187u, 0x08982C78u>(ctx, &aot_mem) && ctx.pc == 0x08966548u) goto L_08966548;
    return;
L_08966548:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[6] = (0u | 72u);
    aot_gpr[31] = (0x0896655Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24952));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0896655Cu) goto L_0896655C;
    return;
L_0896655C:
    aot_gpr[31] = (0x08966564u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 132u, 0x0896292Cu>(ctx, &aot_mem) && ctx.pc == 0x08966564u) goto L_08966564;
    return;
L_08966564:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08966590;
      }
      goto L_08966580;
    }
L_08966580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966594;
      }
      goto L_08966588;
    }
L_08966588:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_08966590;
    }
L_08966590:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[19]);
    goto L_08966594;
L_08966594:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    aot_gpr[31] = (0x089665A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 193u, 0x08982CDCu>(ctx, &aot_mem) && ctx.pc == 0x089665A0u) goto L_089665A0;
    return;
L_089665A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089665CC;
      }
      goto L_089665A8;
    }
L_089665A8:
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089665BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(26564));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 200u, 0x08983B40u>(ctx, &aot_mem) && ctx.pc == 0x089665BCu) goto L_089665BC;
    return;
L_089665BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089665D4;
      }
      goto L_089665C4;
    }
L_089665C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_089665CC;
    }
L_089665CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089665D8;
      }
      goto L_089665D4;
    }
L_089665D4:
    aot_gpr[2] = (0u | 0u);
    goto L_089665D8;
L_089665D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089665F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    aot_gpr[31] = (0x0896661Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896661Cu) goto L_0896661C;
    return;
L_0896661C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896664C;
      }
      goto L_0896662C;
    }
L_0896662C:
    aot_gpr[31] = (0x08966634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 101u, 0x08983560u>(ctx, &aot_mem) && ctx.pc == 0x08966634u) goto L_08966634;
    return;
L_08966634:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x08966644u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x08966644u) goto L_08966644;
    return;
L_08966644:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0896664C;
L_0896664C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966784;
      }
      goto L_08966654;
    }
L_08966654:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x08966664u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x08966664u) goto L_08966664;
    return;
L_08966664:
    aot_gpr[31] = (0x0896666Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896666Cu) goto L_0896666C;
    return;
L_0896666C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08966680u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 154u, 0x08964B48u>(ctx, &aot_mem) && ctx.pc == 0x08966680u) goto L_08966680;
    return;
L_08966680:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089666AC;
      }
      goto L_0896668C;
    }
L_0896668C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08966698u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08966698u) goto L_08966698;
    return;
L_08966698:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x089666A8u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089666A8u) goto L_089666A8;
    return;
L_089666A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089666AC;
L_089666AC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966784;
      }
      goto L_089666B4;
    }
L_089666B4:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089666CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29136));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 179u, 0x0895FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089666CCu) goto L_089666CC;
    return;
L_089666CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089666F8;
      }
      goto L_089666D8;
    }
L_089666D8:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089666E4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x089666E4u) goto L_089666E4;
    return;
L_089666E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x089666F4u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089666F4u) goto L_089666F4;
    return;
L_089666F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089666F8;
L_089666F8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966784;
      }
      goto L_08966700;
    }
L_08966700:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26984)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896673C;
      }
      goto L_08966710;
    }
L_08966710:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08966738u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966738u) goto L_08966738;
    return;
L_08966738:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0896673C;
L_0896673C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966764;
      }
      goto L_08966744;
    }
L_08966744:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x08966750u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08966750u) goto L_08966750;
    return;
L_08966750:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x08966760u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08966760u) goto L_08966760;
    return;
L_08966760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08966764;
L_08966764:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966784;
      }
      goto L_0896676C;
    }
L_0896676C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896677Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28648));
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 236u, 0x08960DC4u>(ctx, &aot_mem) && ctx.pc == 0x0896677Cu) goto L_0896677C;
    return;
L_0896677C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08966784;
L_08966784:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089667A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089667B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 215u, 0x08982E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089667B0u) goto L_089667B0;
    return;
L_089667B0:
    aot_gpr[31] = (0x089667B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 76u, 0x089EB4A8u>(ctx, &aot_mem) && ctx.pc == 0x089667B8u) goto L_089667B8;
    return;
L_089667B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089667C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896680C;
      }
      goto L_089667E4;
    }
L_089667E4:
    aot_gpr[31] = (0x089667ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089667ECu) goto L_089667EC;
    return;
L_089667EC:
    aot_gpr[31] = (0x089667F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x089667F4u) goto L_089667F4;
    return;
L_089667F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u | 300u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08966818;
      }
      goto L_0896680C;
    }
L_0896680C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08966818;
L_08966818:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896682C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966840u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08966840u) goto L_08966840;
    return;
L_08966840:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896684C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[18] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08966878;
      }
      goto L_08966874;
    }
L_08966874:
    aot_gpr[16] = (0u | 0u);
    goto L_08966878;
L_08966878:
    aot_gpr[31] = (0x08966880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 124u, 0x08982690u>(ctx, &aot_mem) && ctx.pc == 0x08966880u) goto L_08966880;
    return;
L_08966880:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089668A8;
      }
      goto L_08966888;
    }
L_08966888:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x08966894u);
    aot_gpr[4] = (0u | 16u);
    goto L_08966358;
L_08966894:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089668B0;
      }
      goto L_089668A0;
    }
L_089668A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089668BC;
      }
      goto L_089668A8;
    }
L_089668A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0896694C;
      }
      goto L_089668B0;
    }
L_089668B0:
    aot_gpr[31] = (0x089668B8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08966390;
L_089668B8:
    aot_gpr[17] = (aot_gpr[7] | 0u);
    goto L_089668BC;
L_089668BC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966948;
      }
      goto L_089668C4;
    }
L_089668C4:
    aot_gpr[31] = (0x089668CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 191u, 0x08962D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089668CCu) goto L_089668CC;
    return;
L_089668CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089668E8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089668E8u) goto L_089668E8;
    return;
L_089668E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_089668F8;
      }
      goto L_089668F0;
    }
L_089668F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896694C;
      }
      goto L_089668F8;
    }
L_089668F8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29136));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08966914u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966914u) goto L_08966914;
    return;
L_08966914:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08966934u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966934u) goto L_08966934;
    return;
L_08966934:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x08966940u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28648));
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 228u, 0x08960D34u>(ctx, &aot_mem) && ctx.pc == 0x08966940u) goto L_08966940;
    return;
L_08966940:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896694C;
      }
      goto L_08966948;
    }
L_08966948:
    aot_gpr[2] = (0u | 1u);
    goto L_0896694C;
L_0896694C:
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
L_08966964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29136));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966984;
      }
      goto L_0896697C;
    }
L_0896697C:
    aot_gpr[31] = (0x08966984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 224u, 0x0895FD34u>(ctx, &aot_mem) && ctx.pc == 0x08966984u) goto L_08966984;
    return;
L_08966984:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089669AC;
      }
      goto L_08966994;
    }
L_08966994:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089669ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089669ACu) goto L_089669AC;
    return;
L_089669AC:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28648));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089669C4;
      }
      goto L_089669BC;
    }
L_089669BC:
    aot_gpr[31] = (0x089669C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 260u, 0x08960F48u>(ctx, &aot_mem) && ctx.pc == 0x089669C4u) goto L_089669C4;
    return;
L_089669C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089669F8;
      }
      goto L_089669D4;
    }
L_089669D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089669F8;
      }
      goto L_089669E0;
    }
L_089669E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089669F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089669F8u) goto L_089669F8;
    return;
L_089669F8:
    aot_gpr[31] = (0x08966A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 194u, 0x08962D58u>(ctx, &aot_mem) && ctx.pc == 0x08966A00u) goto L_08966A00;
    return;
L_08966A00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966A0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966A24u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    goto L_089661DC;
L_08966A24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08966AAC;
      }
      goto L_08966A4C;
    }
L_08966A4C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5248));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08966A64u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 220u, 0x08960CC0u>(ctx, &aot_mem) && ctx.pc == 0x08966A64u) goto L_08966A64;
    return;
L_08966A64:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08966AAC;
      }
      goto L_08966A70;
    }
L_08966A70:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966AA4;
      }
      goto L_08966A80;
    }
L_08966A80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08966A9Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966A9Cu) goto L_08966A9C;
    return;
L_08966A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966AAC;
      }
      goto L_08966AA4;
    }
L_08966AA4:
    aot_gpr[31] = (0x08966AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08966AACu) goto L_08966AAC;
    return;
L_08966AAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966AC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30968));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08966B20u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x08966B20u) goto L_08966B20;
    return;
L_08966B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08966B4C;
      }
      goto L_08966B2C;
    }
L_08966B2C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08966B6C;
      }
      goto L_08966B34;
    }
L_08966B34:
    aot_gpr[31] = (0x08966B3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 124u, 0x08971704u>(ctx, &aot_mem) && ctx.pc == 0x08966B3Cu) goto L_08966B3C;
    return;
L_08966B3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08966B78;
      }
      goto L_08966B4C;
    }
L_08966B4C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08966B6C;
      }
      goto L_08966B54;
    }
L_08966B54:
    aot_gpr[31] = (0x08966B5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 186u, 0x08971B30u>(ctx, &aot_mem) && ctx.pc == 0x08966B5Cu) goto L_08966B5C;
    return;
L_08966B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08966B78;
      }
      goto L_08966B6C;
    }
L_08966B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08966B78;
L_08966B78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966B90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30968));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966BE4;
      }
      goto L_08966BC0;
    }
L_08966BC0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_08966BE4;
      }
      goto L_08966BCC;
    }
L_08966BCC:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 5000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08966BE4u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x08966BE4u) goto L_08966BE4;
    return;
L_08966BE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966BF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08966C30;
      }
      goto L_08966C18;
    }
L_08966C18:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08966C4C;
      }
      goto L_08966C20;
    }
L_08966C20:
    aot_gpr[31] = (0x08966C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 157u, 0x08971974u>(ctx, &aot_mem) && ctx.pc == 0x08966C28u) goto L_08966C28;
    return;
L_08966C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966C4C;
      }
      goto L_08966C30;
    }
L_08966C30:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08966C4C;
      }
      goto L_08966C3C;
    }
L_08966C3C:
    aot_gpr[31] = (0x08966C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 204u, 0x08971C80u>(ctx, &aot_mem) && ctx.pc == 0x08966C44u) goto L_08966C44;
    return;
L_08966C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966C4C;
      }
      goto L_08966C4C;
    }
L_08966C4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966C58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08966C98;
      }
      goto L_08966C80;
    }
L_08966C80:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08966CB4;
      }
      goto L_08966C88;
    }
L_08966C88:
    aot_gpr[31] = (0x08966C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 179u, 0x08971AE4u>(ctx, &aot_mem) && ctx.pc == 0x08966C90u) goto L_08966C90;
    return;
L_08966C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966CB4;
      }
      goto L_08966C98;
    }
L_08966C98:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08966CB4;
      }
      goto L_08966CA4;
    }
L_08966CA4:
    aot_gpr[31] = (0x08966CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 217u, 0x08971D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08966CACu) goto L_08966CAC;
    return;
L_08966CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966CB4;
      }
      goto L_08966CB4;
    }
L_08966CB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08966CD4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 3u, 0x0896102Cu>(ctx, &aot_mem) && ctx.pc == 0x08966CD4u) goto L_08966CD4;
    return;
L_08966CD4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5248));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966D08u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28648));
    goto L_08966CC0;
L_08966D08:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08966D14u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26864));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D14u) goto L_08966D14;
    return;
L_08966D14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966D20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08966DA8;
      }
      goto L_08966D3C;
    }
L_08966D3C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(376));
    aot_gpr[31] = (0x08966D48u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 118u, 0x08967744u>(ctx, &aot_mem) && ctx.pc == 0x08966D48u) goto L_08966D48;
    return;
L_08966D48:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    aot_gpr[31] = (0x08966D54u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 129u, 0x08967840u>(ctx, &aot_mem) && ctx.pc == 0x08966D54u) goto L_08966D54;
    return;
L_08966D54:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x08966D60u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 5u, 0x0896904Cu>(ctx, &aot_mem) && ctx.pc == 0x08966D60u) goto L_08966D60;
    return;
L_08966D60:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08966DA8;
      }
      goto L_08966D6C;
    }
L_08966D6C:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966DA0;
      }
      goto L_08966D7C;
    }
L_08966D7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08966D98u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966D98u) goto L_08966D98;
    return;
L_08966D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966DA8;
      }
      goto L_08966DA0;
    }
L_08966DA0:
    aot_gpr[31] = (0x08966DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08966DA8u) goto L_08966DA8;
    return;
L_08966DA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966DBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08966DCCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x08966DCCu) goto L_08966DCC;
    return;
L_08966DCC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966DF0;
      }
      goto L_08966DD8;
    }
L_08966DD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08966DF0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966DF0u) goto L_08966DF0;
    return;
L_08966DF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966DFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08966F14;
      }
      goto L_08966E30;
    }
L_08966E30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08966E4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966E4Cu) goto L_08966E4C;
    return;
L_08966E4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08966E64;
      }
      goto L_08966E58;
    }
L_08966E58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_08966EBC;
    }
    goto L_08966E64;
L_08966E64:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08966EB4;
      }
      goto L_08966E70;
    }
L_08966E70:
    aot_gpr[4] = (0u | 2u);
    if (aot_gpr[20] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_08966EBC;
    }
    goto L_08966E7C;
L_08966E7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08966EA0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966EA0u) goto L_08966EA0;
    return;
L_08966EA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966FD0;
      }
      goto L_08966EAC;
    }
L_08966EAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08966EBC;
      }
      goto L_08966EB4;
    }
L_08966EB4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08966FD0;
      }
      goto L_08966EBC;
    }
L_08966EBC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08966EDCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966EDCu) goto L_08966EDC;
    return;
L_08966EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F04;
      }
      goto L_08966EE8;
    }
L_08966EE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08966F04;
      }
      goto L_08966EFC;
    }
L_08966EFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08966F04;
L_08966F04:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966FD0;
      }
      goto L_08966F0C;
    }
L_08966F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F94;
      }
      goto L_08966F14;
    }
L_08966F14:
    aot_gpr[20] = (2220u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-28640));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08966F2Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 80u, 0x08967518u>(ctx, &aot_mem) && ctx.pc == 0x08966F2Cu) goto L_08966F2C;
    return;
L_08966F2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F40;
      }
      goto L_08966F38;
    }
L_08966F38:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08966F40;
L_08966F40:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966FD0;
      }
      goto L_08966F48;
    }
L_08966F48:
    aot_gpr[31] = (0x08966F50u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 65u, 0x089673C8u>(ctx, &aot_mem) && ctx.pc == 0x08966F50u) goto L_08966F50;
    return;
L_08966F50:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F94;
      }
      goto L_08966F58;
    }
L_08966F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08966F94;
      }
      goto L_08966F64;
    }
L_08966F64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08966F84u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966F84u) goto L_08966F84;
    return;
L_08966F84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966FD0;
      }
      goto L_08966F90;
    }
L_08966F90:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), 0u);
    goto L_08966F94;
L_08966F94:
    aot_gpr[31] = (0x08966F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x08966F9Cu) goto L_08966F9C;
    return;
L_08966F9C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966FD0;
      }
      goto L_08966FA8;
    }
L_08966FA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08966FD0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966FD0u) goto L_08966FD0;
    return;
L_08966FD0:
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
L_08966FF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08967004u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0354(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0354_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_354(Runtime &runtime) {
    runtime.register_generated_unit(354u, 0x08966000u, 4096u, &recomp_unit_0354, &recomp_unit_0354_entry);
    runtime.register_function(0x08966004u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966020u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966034u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966038u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966040u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966058u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966064u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966074u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896608Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660A0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660B0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660CCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660D4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660DCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660E4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660F4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089660FCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966104u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896610Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966114u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896611Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896612Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966134u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966144u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966154u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896615Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896616Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966190u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896619Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089661A4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089661B0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089661B8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089661C4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089661DCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896620Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896621Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966228u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966230u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966240u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896624Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966264u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896628Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089662A8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089662BCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089662C8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089662D0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089662E4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966300u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966310u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896632Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966340u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896634Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966358u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966368u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966374u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966384u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966390u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663B0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663C0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663D0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663DCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663E8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663F0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089663FCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966420u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966428u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966438u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966444u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896644Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966454u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966458u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966460u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896648Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966494u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896649Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664A4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664ACu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664B4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664C0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664E8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664F4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089664FCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966504u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966510u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966530u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966538u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966548u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896655Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966564u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966580u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966588u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966590u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966594u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665A0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665A8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665BCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665C4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665CCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665D4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665D8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089665F8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896661Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896662Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966634u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966644u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896664Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966654u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966664u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896666Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966680u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896668Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966698u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666A8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666ACu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666B4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666CCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666D8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666E4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666F4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089666F8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966700u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966710u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966738u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896673Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966744u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966750u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966760u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966764u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896676Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896677Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966784u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667A0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667B0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667B8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667C4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667E4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667ECu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089667F4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896680Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966818u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896682Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966840u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896684Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966874u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966878u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966880u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966888u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966894u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668A0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668A8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668B0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668B8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668BCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668C4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668CCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668E8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668F0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089668F8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966914u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966934u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966940u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966948u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896694Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966964u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x0896697Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966984u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966994u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089669ACu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089669BCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089669C4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089669D4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089669E0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x089669F8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A00u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A0Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A24u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A30u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A4Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A64u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A70u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A80u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966A9Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966AA4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966AACu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966AC0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B20u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B2Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B34u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B3Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B4Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B54u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B5Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B6Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B78u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966B90u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966BC0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966BCCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966BE4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966BF0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C18u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C20u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C28u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C30u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C3Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C44u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C4Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C58u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C80u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C88u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C90u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966C98u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966CA4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966CACu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966CB4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966CC0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966CD4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966CF4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D08u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D14u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D20u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D3Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D48u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D54u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D60u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D6Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D7Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966D98u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DA0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DA8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DBCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DCCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DD8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DF0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966DFCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966E30u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966E4Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966E58u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966E64u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966E70u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966E7Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EA0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EACu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EB4u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EBCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EDCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EE8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966EFCu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F04u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F0Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F14u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F2Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F38u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F40u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F48u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F50u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F58u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F64u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F84u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F90u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F94u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966F9Cu, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966FA8u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966FD0u, &recomp_unit_0354, "recomp_unit_0354");
    runtime.register_function(0x08966FF0u, &recomp_unit_0354, "recomp_unit_0354");
}
} // namespace psprecomp
