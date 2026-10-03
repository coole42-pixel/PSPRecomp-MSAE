#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0373[1024] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0,
    10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0,
    46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0,
    70, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0,
    87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104,
    0, 105, 0, 106, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120,
    0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148,
    0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 191, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199,
    0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
};
void recomp_unit_0373_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08979000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0373[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08979000;
    case 2u: goto L_08979004;
    case 3u: goto L_08979010;
    case 4u: goto L_08979018;
    case 5u: goto L_08979024;
    case 6u: goto L_08979038;
    case 7u: goto L_08979040;
    case 8u: goto L_08979070;
    case 9u: goto L_08979078;
    case 10u: goto L_08979080;
    case 11u: goto L_0897908C;
    case 12u: goto L_08979098;
    case 13u: goto L_089790A4;
    case 14u: goto L_089790B0;
    case 15u: goto L_089790C8;
    case 16u: goto L_089790E4;
    case 17u: goto L_089790EC;
    case 18u: goto L_089790F4;
    case 19u: goto L_08979114;
    case 20u: goto L_0897911C;
    case 21u: goto L_08979124;
    case 22u: goto L_08979144;
    case 23u: goto L_08979158;
    case 24u: goto L_08979160;
    case 25u: goto L_08979168;
    case 26u: goto L_08979170;
    case 27u: goto L_089791A0;
    case 28u: goto L_089791AC;
    case 29u: goto L_089791BC;
    case 30u: goto L_089791E0;
    case 31u: goto L_08979238;
    case 32u: goto L_0897927C;
    case 33u: goto L_0897928C;
    case 34u: goto L_089792B0;
    case 35u: goto L_089792D8;
    case 36u: goto L_089792F8;
    case 37u: goto L_08979300;
    case 38u: goto L_08979308;
    case 39u: goto L_08979314;
    case 40u: goto L_08979320;
    case 41u: goto L_08979344;
    case 42u: goto L_08979350;
    case 43u: goto L_08979364;
    case 44u: goto L_0897936C;
    case 45u: goto L_08979374;
    case 46u: goto L_08979380;
    case 47u: goto L_0897938C;
    case 48u: goto L_08979398;
    case 49u: goto L_089793A4;
    case 50u: goto L_089793B0;
    case 51u: goto L_089793B8;
    case 52u: goto L_089793D8;
    case 53u: goto L_0897940C;
    case 54u: goto L_0897941C;
    case 55u: goto L_0897942C;
    case 56u: goto L_08979440;
    case 57u: goto L_08979448;
    case 58u: goto L_08979450;
    case 59u: goto L_08979468;
    case 60u: goto L_08979470;
    case 61u: goto L_08979478;
    case 62u: goto L_08979490;
    case 63u: goto L_089794A4;
    case 64u: goto L_089794B0;
    case 65u: goto L_089794C0;
    case 66u: goto L_089794CC;
    case 67u: goto L_089794D8;
    case 68u: goto L_089794EC;
    case 69u: goto L_089794F8;
    case 70u: goto L_08979500;
    case 71u: goto L_08979504;
    case 72u: goto L_08979524;
    case 73u: goto L_08979534;
    case 74u: goto L_08979544;
    case 75u: goto L_08979570;
    case 76u: goto L_08979588;
    case 77u: goto L_08979590;
    case 78u: goto L_08979598;
    case 79u: goto L_089795A0;
    case 80u: goto L_089795A8;
    case 81u: goto L_089795B8;
    case 82u: goto L_089795C8;
    case 83u: goto L_089795D8;
    case 84u: goto L_089795E0;
    case 85u: goto L_089795F0;
    case 86u: goto L_089795F8;
    case 87u: goto L_08979600;
    case 88u: goto L_0897960C;
    case 89u: goto L_08979628;
    case 90u: goto L_08979630;
    case 91u: goto L_08979634;
    case 92u: goto L_08979644;
    case 93u: goto L_08979678;
    case 94u: goto L_08979684;
    case 95u: goto L_08979694;
    case 96u: goto L_0897969C;
    case 97u: goto L_089796B0;
    case 98u: goto L_089796B8;
    case 99u: goto L_089796C8;
    case 100u: goto L_089796D4;
    case 101u: goto L_089796E4;
    case 102u: goto L_089796EC;
    case 103u: goto L_089796F4;
    case 104u: goto L_089796FC;
    case 105u: goto L_08979704;
    case 106u: goto L_0897970C;
    case 107u: goto L_08979710;
    case 108u: goto L_0897971C;
    case 109u: goto L_0897972C;
    case 110u: goto L_08979738;
    case 111u: goto L_08979748;
    case 112u: goto L_08979750;
    case 113u: goto L_08979758;
    case 114u: goto L_0897975C;
    case 115u: goto L_08979768;
    case 116u: goto L_0897979C;
    case 117u: goto L_089797B0;
    case 118u: goto L_089797CC;
    case 119u: goto L_089797F4;
    case 120u: goto L_089797FC;
    case 121u: goto L_08979808;
    case 122u: goto L_08979810;
    case 123u: goto L_08979824;
    case 124u: goto L_08979834;
    case 125u: goto L_08979840;
    case 126u: goto L_08979850;
    case 127u: goto L_0897985C;
    case 128u: goto L_08979884;
    case 129u: goto L_08979894;
    case 130u: goto L_089798A8;
    case 131u: goto L_089798D8;
    case 132u: goto L_089798E8;
    case 133u: goto L_08979900;
    case 134u: goto L_08979930;
    case 135u: goto L_08979944;
    case 136u: goto L_08979958;
    case 137u: goto L_08979960;
    case 138u: goto L_08979968;
    case 139u: goto L_08979974;
    case 140u: goto L_08979990;
    case 141u: goto L_089799A4;
    case 142u: goto L_089799AC;
    case 143u: goto L_089799BC;
    case 144u: goto L_089799C4;
    case 145u: goto L_089799CC;
    case 146u: goto L_089799E0;
    case 147u: goto L_089799F4;
    case 148u: goto L_089799FC;
    case 149u: goto L_08979A08;
    case 150u: goto L_08979A14;
    case 151u: goto L_08979A24;
    case 152u: goto L_08979A34;
    case 153u: goto L_08979A48;
    case 154u: goto L_08979A54;
    case 155u: goto L_08979A64;
    case 156u: goto L_08979A74;
    case 157u: goto L_08979A90;
    case 158u: goto L_08979AA4;
    case 159u: goto L_08979AAC;
    case 160u: goto L_08979AB8;
    case 161u: goto L_08979AC4;
    case 162u: goto L_08979ACC;
    case 163u: goto L_08979AE0;
    case 164u: goto L_08979AFC;
    case 165u: goto L_08979B08;
    case 166u: goto L_08979B14;
    case 167u: goto L_08979B24;
    case 168u: goto L_08979B34;
    case 169u: goto L_08979BF4;
    case 170u: goto L_08979C08;
    case 171u: goto L_08979C10;
    case 172u: goto L_08979C28;
    case 173u: goto L_08979C38;
    case 174u: goto L_08979C40;
    case 175u: goto L_08979C48;
    case 176u: goto L_08979C50;
    case 177u: goto L_08979C5C;
    case 178u: goto L_08979C74;
    case 179u: goto L_08979C8C;
    case 180u: goto L_08979C9C;
    case 181u: goto L_08979CA8;
    case 182u: goto L_08979CB8;
    case 183u: goto L_08979CC4;
    case 184u: goto L_08979CF8;
    case 185u: goto L_08979D00;
    case 186u: goto L_08979D08;
    case 187u: goto L_08979D18;
    case 188u: goto L_08979D40;
    case 189u: goto L_08979D58;
    case 190u: goto L_08979D64;
    case 191u: goto L_08979D84;
    case 192u: goto L_08979D88;
    case 193u: goto L_08979DA0;
    case 194u: goto L_08979DC0;
    case 195u: goto L_08979DD8;
    case 196u: goto L_08979DE0;
    case 197u: goto L_08979DEC;
    case 198u: goto L_08979DF4;
    case 199u: goto L_08979DFC;
    case 200u: goto L_08979E04;
    case 201u: goto L_08979E10;
    case 202u: goto L_08979E1C;
    case 203u: goto L_08979E2C;
    case 204u: goto L_08979E34;
    case 205u: goto L_08979E44;
    case 206u: goto L_08979E4C;
    case 207u: goto L_08979E58;
    case 208u: goto L_08979E6C;
    case 209u: goto L_08979E74;
    case 210u: goto L_08979E88;
    case 211u: goto L_08979EB4;
    case 212u: goto L_08979ED4;
    case 213u: goto L_08979F00;
    case 214u: goto L_08979F0C;
    case 215u: goto L_08979F30;
    case 216u: goto L_08979F3C;
    case 217u: goto L_08979F44;
    case 218u: goto L_08979F68;
    case 219u: goto L_08979F74;
    case 220u: goto L_08979F98;
    case 221u: goto L_08979FA4;
    case 222u: goto L_08979FBC;
    case 223u: goto L_08979FCC;
    case 224u: goto L_08979FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08979000:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08979004;
L_08979004:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1156), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1152), aot_gpr[6]);
    aot_gpr[2] = (0u | 0u);
    goto L_08979010;
L_08979010:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979018:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1164)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1160)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979024:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20740)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20744)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08979070;
      }
      goto L_08979038;
    }
L_08979038:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_08979070;
      }
      goto L_08979040;
    }
L_08979040:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1160)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1156)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1152)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1164), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1160), aot_gpr[6]);
      if (branch_taken) {
          goto L_08979078;
      }
      goto L_08979070;
    }
L_08979070:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1164), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1160), aot_gpr[6]);
    goto L_08979078;
L_08979078:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979080:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1180)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1176)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897908C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1180), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1176), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979098:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1188)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1184)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089790A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1188), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1184), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089790B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089790C8u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_08979098;
L_089790C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20740)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20744)));
    aot_gpr[11] = (aot_gpr[3] | 0u);
    aot_gpr[10] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[10] != aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_089790EC;
      }
      goto L_089790E4;
    }
L_089790E4:
    { const bool branch_taken = aot_gpr[11] == aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_08979160;
      }
      goto L_089790EC;
    }
L_089790EC:
    aot_gpr[31] = (0x089790F4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08979080;
L_089790F4:
    aot_gpr[4] = (aot_gpr[3] ^ aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[3] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979160;
      }
      goto L_08979114;
    }
L_08979114:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_08979124;
      }
      goto L_0897911C;
    }
L_0897911C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_08979158;
      }
      goto L_08979124;
    }
L_08979124:
    aot_gpr[4] = (aot_gpr[9] ^ aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08979168;
      }
      goto L_08979144;
    }
L_08979144:
    aot_gpr[4] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[11] - aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[6] - aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[10] - aot_gpr[8]);
      if (branch_taken) {
          goto L_08979170;
      }
      goto L_08979158;
    }
L_08979158:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089791A0;
      }
      goto L_08979160;
    }
L_08979160:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089791A0;
      }
      goto L_08979168;
    }
L_08979168:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20852)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20856)));
    goto L_08979170;
L_08979170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1152)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1156)));
    aot_gpr[1] = (aot_gpr[4] >> 31u);
    aot_gpr[5] = (aot_gpr[5] << 1u);
    aot_gpr[4] = (aot_gpr[4] << 1u);
    aot_gpr[5] = (aot_gpr[1] | aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[7] ^ aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[2]);
    goto L_089791A0;
L_089791A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089791AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(508), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089791BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089791E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20736));
    goto L_08979FCC;
L_089791E0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7192));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20852)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20856)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[19]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x08979238u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20716));
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 88u, 0x0897E6D8u>(ctx, &aot_mem) && ctx.pc == 0x08979238u) goto L_08979238;
    return;
L_08979238:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1164), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1160), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1172), aot_gpr[19]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1168), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20740)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1176), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1188), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1184), aot_gpr[4]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1192), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1196));
    aot_gpr[31] = (0x0897927Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20704));
    goto L_0897985C;
L_0897927C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1380));
    aot_gpr[31] = (0x0897928Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20688));
    goto L_0897985C;
L_0897928C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1564), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1568), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089792B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089793B8;
      }
      goto L_089792D8;
    }
L_089792D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7192));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089792F8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089792F8u) goto L_089792F8;
    return;
L_089792F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08979308;
      }
      goto L_08979300;
    }
L_08979300:
    aot_gpr[31] = (0x08979308u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 273u, 0x08978EC4u>(ctx, &aot_mem) && ctx.pc == 0x08979308u) goto L_08979308;
    return;
L_08979308:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979350;
      }
      goto L_08979314;
    }
L_08979314:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08979320u);
    aot_gpr[5] = (0u | 1u);
    goto L_08979C10;
L_08979320:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08979344u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979344u) goto L_08979344;
    return;
L_08979344:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08979350u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08979350u) goto L_08979350;
    return;
L_08979350:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(504), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897936C;
      }
      goto L_08979364;
    }
L_08979364:
    aot_gpr[31] = (0x0897936Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 198u, 0x0897EEB4u>(ctx, &aot_mem) && ctx.pc == 0x0897936Cu) goto L_0897936C;
    return;
L_0897936C:
    aot_gpr[31] = (0x08979374u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x08979374u) goto L_08979374;
    return;
L_08979374:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1380));
    aot_gpr[31] = (0x08979380u);
    aot_gpr[5] = (0u | 2u);
    goto L_08979A74;
L_08979380:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1196));
    aot_gpr[31] = (0x0897938Cu);
    aot_gpr[5] = (0u | 2u);
    goto L_08979A74;
L_0897938C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08979398u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 104u, 0x0897E828u>(ctx, &aot_mem) && ctx.pc == 0x08979398u) goto L_08979398;
    return;
L_08979398:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089793A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 8u, 0x0897A074u>(ctx, &aot_mem) && ctx.pc == 0x089793A4u) goto L_089793A4;
    return;
L_089793A4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089793B8;
      }
      goto L_089793B0;
    }
L_089793B0:
    aot_gpr[31] = (0x089793B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089793B8u) goto L_089793B8;
    return;
L_089793B8:
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
L_089793D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x0897940Cu);
    aot_gpr[5] = (0u | 1u);
    goto L_08979C10;
L_0897940C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x0897941Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 231u, 0x08978CC8u>(ctx, &aot_mem) && ctx.pc == 0x0897941Cu) goto L_0897941C;
    return;
L_0897941C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08979440;
      }
      goto L_0897942C;
    }
L_0897942C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20672));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1144), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(964), aot_gpr[4]);
      if (branch_taken) {
          goto L_089794A4;
      }
      goto L_08979440;
    }
L_08979440:
    aot_gpr[31] = (0x08979448u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 238u, 0x08978D08u>(ctx, &aot_mem) && ctx.pc == 0x08979448u) goto L_08979448;
    return;
L_08979448:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979468;
      }
      goto L_08979450;
    }
L_08979450:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20656));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(964), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089794A4;
      }
      goto L_08979468;
    }
L_08979468:
    aot_gpr[31] = (0x08979470u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 245u, 0x08978D48u>(ctx, &aot_mem) && ctx.pc == 0x08979470u) goto L_08979470;
    return;
L_08979470:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979490;
      }
      goto L_08979478;
    }
L_08979478:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20640));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(964), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_089794A4;
      }
      goto L_08979490;
    }
L_08979490:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20628));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(964), aot_gpr[4]);
    aot_gpr[16] = (0u | 2u);
    goto L_089794A4;
L_089794A4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089794B0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 193u, 0x0897EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089794B0u) goto L_089794B0;
    return;
L_089794B0:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08979544;
      }
      goto L_089794C0;
    }
L_089794C0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20852)));
    aot_gpr[22] = (0u | 7u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20856)));
    goto L_089794CC;
L_089794CC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089794D8u);
    aot_gpr[5] = (0u | 1u);
    goto L_08979C10;
L_089794D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x089794ECu);
    aot_gpr[4] = (0u | 56u);
    goto L_08979644;
L_089794EC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08979504;
      }
      goto L_089794F8;
    }
L_089794F8:
    aot_gpr[31] = (0x08979500u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 57u, 0x0897D494u>(ctx, &aot_mem) && ctx.pc == 0x08979500u) goto L_08979500;
    return;
L_08979500:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08979504;
L_08979504:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[22]);
    aot_gpr[31] = (0x08979524u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x08979524u) goto L_08979524;
    return;
L_08979524:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08979534u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 194u, 0x0897EE88u>(ctx, &aot_mem) && ctx.pc == 0x08979534u) goto L_08979534;
    return;
L_08979534:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089794CC;
      }
      goto L_08979544;
    }
L_08979544:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979570:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089795D8;
      }
      goto L_08979588;
    }
L_08979588:
    aot_gpr[31] = (0x08979590u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 249u, 0x08978D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08979590u) goto L_08979590;
    return;
L_08979590:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089795D8;
      }
      goto L_08979598;
    }
L_08979598:
    aot_gpr[31] = (0x089795A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 245u, 0x08978D48u>(ctx, &aot_mem) && ctx.pc == 0x089795A0u) goto L_089795A0;
    return;
L_089795A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089795D8;
      }
      goto L_089795A8;
    }
L_089795A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (0u | 9u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089795D8;
      }
      goto L_089795B8;
    }
L_089795B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089795D8;
      }
      goto L_089795C8;
    }
L_089795C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089795D8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 210u, 0x08978B68u>(ctx, &aot_mem) && ctx.pc == 0x089795D8u) goto L_089795D8;
    return;
L_089795D8:
    aot_gpr[31] = (0x089795E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08979080;
L_089795E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1164), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1160), aot_gpr[2]);
    aot_gpr[31] = (0x089795F0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 122u, 0x0897E948u>(ctx, &aot_mem) && ctx.pc == 0x089795F0u) goto L_089795F0;
    return;
L_089795F0:
    aot_gpr[31] = (0x089795F8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1380));
    goto L_089799E0;
L_089795F8:
    aot_gpr[31] = (0x08979600u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1196));
    goto L_089799E0;
L_08979600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979630;
      }
      goto L_0897960C;
    }
L_0897960C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08979628u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979628u) goto L_08979628;
    return;
L_08979628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979634;
      }
      goto L_08979630;
    }
L_08979630:
    aot_gpr[2] = (0u | 0u);
    goto L_08979634;
L_08979634:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08979678u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979678u) goto L_08979678;
    return;
L_08979678:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979684:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897969C;
      }
      goto L_08979694;
    }
L_08979694:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089796B0;
      }
      goto L_0897969C;
    }
L_0897969C:
    aot_gpr[6] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    goto L_089796B0;
L_089796B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089796B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089796C8u);
    // nop
    goto L_08979684;
L_089796C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089796FC;
      }
      goto L_089796D4;
    }
L_089796D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089796F4;
      }
      goto L_089796E4;
    }
L_089796E4:
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
        goto L_08979704;
    }
    goto L_089796EC;
L_089796EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0897970C;
      }
      goto L_089796F4;
    }
L_089796F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979710;
      }
      goto L_089796FC;
    }
L_089796FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979710;
      }
      goto L_08979704;
    }
L_08979704:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089796F4;
      }
      goto L_0897970C;
    }
L_0897970C:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    goto L_08979710;
L_08979710:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897971C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897972Cu);
    // nop
    goto L_08979684;
L_0897972C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979750;
      }
      goto L_08979738;
    }
L_08979738:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 8u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08979758;
      }
      goto L_08979748;
    }
L_08979748:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0897975C;
      }
      goto L_08979750;
    }
L_08979750:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897975C;
      }
      goto L_08979758;
    }
L_08979758:
    aot_gpr[2] = (0u | 0u);
    goto L_0897975C;
L_0897975C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7368));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897979Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 78u, 0x08A4249Cu>(ctx, &aot_mem) && ctx.pc == 0x0897979Cu) goto L_0897979C;
    return;
L_0897979C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089797B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08979810;
      }
      goto L_089797CC;
    }
L_089797CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7368));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(156), aot_gpr[5]);
      if (branch_taken) {
          goto L_089797FC;
      }
      goto L_089797F4;
    }
L_089797F4:
    aot_gpr[31] = (0x089797FCu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 63u, 0x08A423B4u>(ctx, &aot_mem) && ctx.pc == 0x089797FCu) goto L_089797FC;
    return;
L_089797FC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979810;
      }
      goto L_08979808;
    }
L_08979808:
    aot_gpr[31] = (0x08979810u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08979810u) goto L_08979810;
    return;
L_08979810:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979824:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08979834u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 164u, 0x08A4291Cu>(ctx, &aot_mem) && ctx.pc == 0x08979834u) goto L_08979834;
    return;
L_08979834:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08979850u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 166u, 0x08A42978u>(ctx, &aot_mem) && ctx.pc == 0x08979850u) goto L_08979850;
    return;
L_08979850:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897985C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7384));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08979884u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08979768;
L_08979884:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[31] = (0x08979894u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 173u, 0x08A41BA0u>(ctx, &aot_mem) && ctx.pc == 0x08979894u) goto L_08979894;
    return;
L_08979894:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089798A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7384));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089798D8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08979768;
L_089798D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[31] = (0x089798E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 173u, 0x08A41BA0u>(ctx, &aot_mem) && ctx.pc == 0x089798E8u) goto L_089798E8;
    return;
L_089798E8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979900:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7576));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08979930u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08979824;
L_08979930:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979944:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08979968;
      }
      goto L_08979958;
    }
L_08979958:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979968;
      }
      goto L_08979960;
    }
L_08979960:
    aot_gpr[31] = (0x08979968u);
    aot_gpr[5] = (0u | 0u);
    goto L_08979840;
L_08979968:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089799CC;
      }
      goto L_08979990;
    }
L_08979990:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7576));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x089799A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08979944;
L_089799A4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_089799BC;
      }
      goto L_089799AC;
    }
L_089799AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26000));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_089799BC;
L_089799BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089799CC;
      }
      goto L_089799C4;
    }
L_089799C4:
    aot_gpr[31] = (0x089799CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089799CCu) goto L_089799CC;
    return;
L_089799CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089799E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089799F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5B01Cu;
    return;
L_089799F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08979A14;
      }
      goto L_089799FC;
    }
L_089799FC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08979A08u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08979900;
L_08979A08:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08979A14u);
    aot_gpr[5] = (0u | 2u);
    goto L_08979974;
L_08979A14:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[31] = (0x08979A24u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x08979A24u) goto L_08979A24;
    return;
L_08979A24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979A34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08979A48u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_089799E0;
L_08979A48:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08979A54u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08979900;
L_08979A54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08979A64u);
    aot_gpr[5] = (0u | 2u);
    goto L_08979974;
L_08979A64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979A74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08979ACC;
      }
      goto L_08979A90;
    }
L_08979A90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7384));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_gpr[31] = (0x08979AA4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08979A34;
L_08979AA4:
    aot_gpr[31] = (0x08979AACu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 194u, 0x08A41CD0u>(ctx, &aot_mem) && ctx.pc == 0x08979AACu) goto L_08979AAC;
    return;
L_08979AAC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08979AB8u);
    aot_gpr[5] = (0u | 2u);
    goto L_089797B0;
L_08979AB8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979ACC;
      }
      goto L_08979AC4;
    }
L_08979AC4:
    aot_gpr[31] = (0x08979ACCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08979ACCu) goto L_08979ACC;
    return;
L_08979ACC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979AE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08979AFCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08979900;
L_08979AFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979B14;
      }
      goto L_08979B08;
    }
L_08979B08:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    aot_gpr[31] = (0x08979B14u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 23u, 0x08A42140u>(ctx, &aot_mem) && ctx.pc == 0x08979B14u) goto L_08979B14;
    return;
L_08979B14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08979B24u);
    aot_gpr[5] = (0u | 2u);
    goto L_08979974;
L_08979B24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979B34:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7608));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(440), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (0u | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[8] = (0u | 6u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-20584));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(248), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20588)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20592)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(404), aot_gpr[7]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(408), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(412), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(432), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(436), 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08979BF4;
L_08979BF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(224), aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08979BF4;
      }
      goto L_08979C08;
    }
L_08979C08:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979C10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (2216u << 16u);
      if (branch_taken) {
          goto L_08979C38;
      }
      goto L_08979C28;
    }
L_08979C28:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26316)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08979C48;
      }
      goto L_08979C38;
    }
L_08979C38:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (2216u << 16u);
      if (branch_taken) {
          goto L_08979C50;
      }
      goto L_08979C40;
    }
L_08979C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979CB8;
      }
      goto L_08979C48;
    }
L_08979C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979CB8;
      }
      goto L_08979C50;
    }
L_08979C50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26316)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979CB8;
      }
      goto L_08979C5C;
    }
L_08979C5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08979C74u);
    aot_gpr[4] = (0u | 448u);
    goto L_08979644;
L_08979C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08979CA8;
      }
      goto L_08979C8C;
    }
L_08979C8C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[31] = (0x08979C9Cu);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08979B34;
L_08979C9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[6] = (2216u << 16u);
    goto L_08979CA8;
L_08979CA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26304), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-26316), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[5] | 0u);
    goto L_08979CB8;
L_08979CB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979CF8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979CF8u) goto L_08979CF8;
    return;
L_08979CF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979D08;
      }
      goto L_08979D00;
    }
L_08979D00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 147u);
      if (branch_taken) {
          goto L_08979D88;
      }
      goto L_08979D08;
    }
L_08979D08:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08979D18u);
    aot_gpr[5] = (0u | 1u);
    goto L_08979C10;
L_08979D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979D40u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979D40u) goto L_08979D40;
    return;
L_08979D40:
    aot_gpr[6] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(356));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08979D58u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24096));
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 26u, 0x08A411C8u>(ctx, &aot_mem) && ctx.pc == 0x08979D58u) goto L_08979D58;
    return;
L_08979D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[31] = (0x08979D64u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 55u, 0x08A4153Cu>(ctx, &aot_mem) && ctx.pc == 0x08979D64u) goto L_08979D64;
    return;
L_08979D64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979D84u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979D84u) goto L_08979D84;
    return;
L_08979D84:
    aot_gpr[2] = (0u | 0u);
    goto L_08979D88;
L_08979D88:
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
L_08979DA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08979DFC;
      }
      goto L_08979DC0;
    }
L_08979DC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979DD8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979DD8u) goto L_08979DD8;
    return;
L_08979DD8:
    aot_gpr[31] = (0x08979DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 14u, 0x08A41114u>(ctx, &aot_mem) && ctx.pc == 0x08979DE0u) goto L_08979DE0;
    return;
L_08979DE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[31] = (0x08979DECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 24u, 0x08A41190u>(ctx, &aot_mem) && ctx.pc == 0x08979DECu) goto L_08979DEC;
    return;
L_08979DEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_08979E04;
      }
      goto L_08979DF4;
    }
L_08979DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979E44;
      }
      goto L_08979DFC;
    }
L_08979DFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979E74;
      }
      goto L_08979E04;
    }
L_08979E04:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08979E10u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 82u, 0x08A416A8u>(ctx, &aot_mem) && ctx.pc == 0x08979E10u) goto L_08979E10;
    return;
L_08979E10:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979E34;
      }
      goto L_08979E1C;
    }
L_08979E1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08979E2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20560));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08979E2Cu) goto L_08979E2C;
    return;
L_08979E2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 145u);
      if (branch_taken) {
          goto L_08979E74;
      }
      goto L_08979E34;
    }
L_08979E34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08979E58;
      }
      goto L_08979E44;
    }
L_08979E44:
    aot_gpr[31] = (0x08979E4Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 129u, 0x08A4190Cu>(ctx, &aot_mem) && ctx.pc == 0x08979E4Cu) goto L_08979E4C;
    return;
L_08979E4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    goto L_08979E58;
L_08979E58:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979E6Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979E6Cu) goto L_08979E6C;
    return;
L_08979E6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), aot_gpr[17]);
    aot_gpr[2] = (0u | 0u);
    goto L_08979E74;
L_08979E74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979E88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08979EB4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979EB4u) goto L_08979EB4;
    return;
L_08979EB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979ED4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08979F00u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979F00u) goto L_08979F00;
    return;
L_08979F00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08979F30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979F30u) goto L_08979F30;
    return;
L_08979F30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979F68u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979F68u) goto L_08979F68;
    return;
L_08979F68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08979F98u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979F98u) goto L_08979F98;
    return;
L_08979F98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08979FBCu);
    aot_gpr[5] = (256u << 16u);
    goto L_08979AE0;
L_08979FBC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979FCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7400));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 2u, 0x0897A004u>(ctx, &aot_mem); return;
      }
      goto L_08979FFC;
    }
L_08979FFC:
    aot_gpr[4] = (2215u << 16u);
    ctx.pc = 0x0897A000u; return;
}

void recomp_unit_0373(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0373_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_373(Runtime &runtime) {
    runtime.register_generated_unit(373u, 0x08979000u, 4096u, &recomp_unit_0373, &recomp_unit_0373_entry);
    runtime.register_function(0x08979000u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979004u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979010u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979018u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979024u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979038u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979040u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979070u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979078u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979080u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897908Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979098u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089790A4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089790B0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089790C8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089790E4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089790ECu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089790F4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979114u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897911Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979124u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979144u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979158u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979160u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979168u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979170u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089791A0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089791ACu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089791BCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089791E0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979238u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897927Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897928Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089792B0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089792D8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089792F8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979300u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979308u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979314u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979320u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979344u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979350u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979364u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897936Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979374u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979380u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897938Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979398u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089793A4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089793B0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089793B8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089793D8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897940Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897941Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897942Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979440u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979448u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979450u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979468u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979470u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979478u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979490u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794A4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794B0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794C0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794CCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794D8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794ECu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089794F8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979500u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979504u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979524u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979534u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979544u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979570u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979588u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979590u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979598u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795A0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795A8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795B8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795C8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795D8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795E0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795F0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089795F8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979600u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897960Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979628u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979630u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979634u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979644u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979678u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979684u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979694u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897969Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796B0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796B8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796C8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796D4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796E4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796ECu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796F4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089796FCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979704u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897970Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979710u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897971Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897972Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979738u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979748u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979750u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979758u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897975Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979768u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897979Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089797B0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089797CCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089797F4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089797FCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979808u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979810u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979824u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979834u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979840u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979850u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x0897985Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979884u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979894u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089798A8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089798D8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089798E8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979900u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979930u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979944u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979958u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979960u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979968u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979974u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979990u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799A4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799ACu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799BCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799C4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799CCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799E0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799F4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x089799FCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A08u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A14u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A24u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A34u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A48u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A54u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A64u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A74u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979A90u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979AA4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979AACu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979AB8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979AC4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979ACCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979AE0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979AFCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979B08u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979B14u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979B24u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979B34u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979BF4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C08u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C10u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C28u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C38u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C40u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C48u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C50u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C5Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C74u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C8Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979C9Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979CA8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979CB8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979CC4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979CF8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D00u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D08u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D18u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D40u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D58u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D64u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D84u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979D88u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DA0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DC0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DD8u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DE0u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DECu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DF4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979DFCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E04u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E10u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E1Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E2Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E34u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E44u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E4Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E58u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E6Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E74u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979E88u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979EB4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979ED4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F00u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F0Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F30u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F3Cu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F44u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F68u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F74u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979F98u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979FA4u, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979FBCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979FCCu, &recomp_unit_0373, "recomp_unit_0373");
    runtime.register_function(0x08979FFCu, &recomp_unit_0373, "recomp_unit_0373");
}
} // namespace psprecomp
