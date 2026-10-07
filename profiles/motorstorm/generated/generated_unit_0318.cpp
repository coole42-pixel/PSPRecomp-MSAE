#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0318[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43,
    0, 44, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83,
    0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0,
    104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    117, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0,
    0, 0, 137, 0, 138, 0, 139, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0,
    151, 0, 152, 0, 153, 0, 154, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219,
};
void recomp_unit_0318_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08942000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0318[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08942000;
    case 2u: goto L_08942030;
    case 3u: goto L_0894203C;
    case 4u: goto L_08942044;
    case 5u: goto L_08942054;
    case 6u: goto L_0894205C;
    case 7u: goto L_08942064;
    case 8u: goto L_0894206C;
    case 9u: goto L_08942078;
    case 10u: goto L_08942080;
    case 11u: goto L_089420DC;
    case 12u: goto L_089420E0;
    case 13u: goto L_08942160;
    case 14u: goto L_08942170;
    case 15u: goto L_089421A0;
    case 16u: goto L_089421D4;
    case 17u: goto L_089421DC;
    case 18u: goto L_089421F8;
    case 19u: goto L_08942200;
    case 20u: goto L_0894221C;
    case 21u: goto L_08942228;
    case 22u: goto L_08942234;
    case 23u: goto L_0894224C;
    case 24u: goto L_08942284;
    case 25u: goto L_08942298;
    case 26u: goto L_089422A8;
    case 27u: goto L_089422E4;
    case 28u: goto L_089422F4;
    case 29u: goto L_089422FC;
    case 30u: goto L_08942304;
    case 31u: goto L_08942324;
    case 32u: goto L_08942344;
    case 33u: goto L_08942364;
    case 34u: goto L_08942370;
    case 35u: goto L_0894237C;
    case 36u: goto L_0894238C;
    case 37u: goto L_089423A4;
    case 38u: goto L_089423BC;
    case 39u: goto L_089423CC;
    case 40u: goto L_089423E4;
    case 41u: goto L_089423EC;
    case 42u: goto L_089423F4;
    case 43u: goto L_089423FC;
    case 44u: goto L_08942404;
    case 45u: goto L_08942408;
    case 46u: goto L_08942410;
    case 47u: goto L_08942448;
    case 48u: goto L_08942488;
    case 49u: goto L_08942494;
    case 50u: goto L_089424A4;
    case 51u: goto L_089424B0;
    case 52u: goto L_089424C0;
    case 53u: goto L_089424EC;
    case 54u: goto L_08942570;
    case 55u: goto L_08942578;
    case 56u: goto L_0894258C;
    case 57u: goto L_089425A0;
    case 58u: goto L_089425A8;
    case 59u: goto L_089425B4;
    case 60u: goto L_089425BC;
    case 61u: goto L_089425C8;
    case 62u: goto L_089425D0;
    case 63u: goto L_089425DC;
    case 64u: goto L_089425E8;
    case 65u: goto L_089425F4;
    case 66u: goto L_0894260C;
    case 67u: goto L_0894262C;
    case 68u: goto L_08942648;
    case 69u: goto L_08942660;
    case 70u: goto L_08942674;
    case 71u: goto L_08942684;
    case 72u: goto L_0894269C;
    case 73u: goto L_089426A8;
    case 74u: goto L_089426BC;
    case 75u: goto L_089426CC;
    case 76u: goto L_089426E4;
    case 77u: goto L_089426F0;
    case 78u: goto L_089426FC;
    case 79u: goto L_0894271C;
    case 80u: goto L_08942730;
    case 81u: goto L_08942754;
    case 82u: goto L_08942774;
    case 83u: goto L_0894277C;
    case 84u: goto L_08942784;
    case 85u: goto L_08942790;
    case 86u: goto L_08942798;
    case 87u: goto L_089427A0;
    case 88u: goto L_089427A8;
    case 89u: goto L_089427B4;
    case 90u: goto L_089427B8;
    case 91u: goto L_089427D4;
    case 92u: goto L_08942810;
    case 93u: goto L_08942838;
    case 94u: goto L_08942848;
    case 95u: goto L_08942850;
    case 96u: goto L_08942860;
    case 97u: goto L_08942868;
    case 98u: goto L_08942874;
    case 99u: goto L_08942880;
    case 100u: goto L_08942890;
    case 101u: goto L_089428BC;
    case 102u: goto L_089428E4;
    case 103u: goto L_089428F4;
    case 104u: goto L_08942900;
    case 105u: goto L_0894290C;
    case 106u: goto L_08942920;
    case 107u: goto L_08942930;
    case 108u: goto L_08942958;
    case 109u: goto L_08942978;
    case 110u: goto L_08942988;
    case 111u: goto L_08942998;
    case 112u: goto L_089429A0;
    case 113u: goto L_089429B0;
    case 114u: goto L_089429B8;
    case 115u: goto L_089429E0;
    case 116u: goto L_089429F4;
    case 117u: goto L_08942A00;
    case 118u: goto L_08942A10;
    case 119u: goto L_08942A18;
    case 120u: goto L_08942A24;
    case 121u: goto L_08942A34;
    case 122u: goto L_08942A44;
    case 123u: goto L_08942A50;
    case 124u: goto L_08942A5C;
    case 125u: goto L_08942A68;
    case 126u: goto L_08942A7C;
    case 127u: goto L_08942A8C;
    case 128u: goto L_08942A9C;
    case 129u: goto L_08942AA8;
    case 130u: goto L_08942AB8;
    case 131u: goto L_08942AC0;
    case 132u: goto L_08942AD0;
    case 133u: goto L_08942AD8;
    case 134u: goto L_08942AE0;
    case 135u: goto L_08942AEC;
    case 136u: goto L_08942AF8;
    case 137u: goto L_08942B08;
    case 138u: goto L_08942B10;
    case 139u: goto L_08942B18;
    case 140u: goto L_08942B1C;
    case 141u: goto L_08942B24;
    case 142u: goto L_08942B38;
    case 143u: goto L_08942B44;
    case 144u: goto L_08942B58;
    case 145u: goto L_08942B60;
    case 146u: goto L_08942B90;
    case 147u: goto L_08942BA0;
    case 148u: goto L_08942BB0;
    case 149u: goto L_08942BEC;
    case 150u: goto L_08942BF4;
    case 151u: goto L_08942C00;
    case 152u: goto L_08942C08;
    case 153u: goto L_08942C10;
    case 154u: goto L_08942C18;
    case 155u: goto L_08942C20;
    case 156u: goto L_08942C24;
    case 157u: goto L_08942C2C;
    case 158u: goto L_08942C38;
    case 159u: goto L_08942C40;
    case 160u: goto L_08942C48;
    case 161u: goto L_08942C50;
    case 162u: goto L_08942C58;
    case 163u: goto L_08942C60;
    case 164u: goto L_08942C88;
    case 165u: goto L_08942CA8;
    case 166u: goto L_08942CB4;
    case 167u: goto L_08942CBC;
    case 168u: goto L_08942CC8;
    case 169u: goto L_08942CD4;
    case 170u: goto L_08942CE0;
    case 171u: goto L_08942CF0;
    case 172u: goto L_08942D00;
    case 173u: goto L_08942D14;
    case 174u: goto L_08942D34;
    case 175u: goto L_08942D44;
    case 176u: goto L_08942D50;
    case 177u: goto L_08942D58;
    case 178u: goto L_08942D60;
    case 179u: goto L_08942D70;
    case 180u: goto L_08942D80;
    case 181u: goto L_08942DA8;
    case 182u: goto L_08942DBC;
    case 183u: goto L_08942DC8;
    case 184u: goto L_08942DD8;
    case 185u: goto L_08942DF8;
    case 186u: goto L_08942E04;
    case 187u: goto L_08942E10;
    case 188u: goto L_08942E1C;
    case 189u: goto L_08942E28;
    case 190u: goto L_08942E38;
    case 191u: goto L_08942E48;
    case 192u: goto L_08942E5C;
    case 193u: goto L_08942E7C;
    case 194u: goto L_08942EA8;
    case 195u: goto L_08942EB0;
    case 196u: goto L_08942EB8;
    case 197u: goto L_08942EC4;
    case 198u: goto L_08942ED4;
    case 199u: goto L_08942EDC;
    case 200u: goto L_08942EE4;
    case 201u: goto L_08942EF0;
    case 202u: goto L_08942F00;
    case 203u: goto L_08942F10;
    case 204u: goto L_08942F20;
    case 205u: goto L_08942F28;
    case 206u: goto L_08942F40;
    case 207u: goto L_08942F48;
    case 208u: goto L_08942F50;
    case 209u: goto L_08942F54;
    case 210u: goto L_08942F6C;
    case 211u: goto L_08942F9C;
    case 212u: goto L_08942FA4;
    case 213u: goto L_08942FB0;
    case 214u: goto L_08942FBC;
    case 215u: goto L_08942FD4;
    case 216u: goto L_08942FDC;
    case 217u: goto L_08942FE8;
    case 218u: goto L_08942FF0;
    case 219u: goto L_08942FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08942000:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0894203C;
      }
      goto L_08942030;
    }
L_08942030:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0894203C;
L_0894203C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942044:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942064;
      }
      goto L_08942054;
    }
L_08942054:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0894206C;
      }
      goto L_0894205C;
    }
L_0894205C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942078;
      }
      goto L_08942064;
    }
L_08942064:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08942078;
      }
      goto L_0894206C;
    }
L_0894206C:
    aot_gpr[4] = (aot_gpr[4] >> 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[2] << 1u);
      if (branch_taken) {
          goto L_0894206C;
      }
      goto L_08942078;
    }
L_08942078:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942080:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[10] | 0u);
    aot_gpr[16] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[30] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942170;
      }
      goto L_089420DC;
    }
L_089420DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    goto L_089420E0;
L_089420E0:
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[30]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(45)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[30]);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[9] >> 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[7] >> 3u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x08942160u);
    aot_gpr[6] = (aot_gpr[6] >> 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08942160u) goto L_08942160;
    return;
L_08942160:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[30] < aot_gpr[16] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(40)));
        goto L_089420E0;
    }
    goto L_08942170;
L_08942170:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089421A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[7] == 0u) {
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
        goto L_089421F8;
    }
    goto L_089421D4;
L_089421D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_0894221C;
      }
      goto L_089421DC;
    }
L_089421DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] >> 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08942228;
      }
      goto L_089421F8;
    }
L_089421F8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 32u);
      if (branch_taken) {
          goto L_0894221C;
      }
      goto L_08942200;
    }
L_08942200:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] >> 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08942228;
      }
      goto L_0894221C;
    }
L_0894221C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    goto L_08942228;
L_08942228:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894224C;
      }
      goto L_08942234;
    }
L_08942234:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | 32896u);
      if (branch_taken) {
          goto L_08942298;
      }
      goto L_0894224C;
    }
L_0894224C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(38)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[8] & 256u);
    aot_gpr[6] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] & 4096u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[7] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[31] = (0x08942284u);
    aot_gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 152u, 0x08931F20u>(ctx, &aot_mem) && ctx.pc == 0x08942284u) goto L_08942284;
    return;
L_08942284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[5] = (aot_gpr[5] | 32896u);
    goto L_08942298;
L_08942298:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089422A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[10]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089422E4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08942044;
L_089422E4:
    aot_gpr[4] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08942364;
      }
      goto L_089422F4;
    }
L_089422F4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08942344;
      }
      goto L_089422FC;
    }
L_089422FC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08942324;
      }
      goto L_08942304;
    }
L_08942304:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] >> 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08942370;
      }
      goto L_08942324;
    }
L_08942324:
    aot_gpr[4] = (0u | 32u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] >> 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08942370;
      }
      goto L_08942344;
    }
L_08942344:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] >> 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08942370;
      }
      goto L_08942364;
    }
L_08942364:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    goto L_08942370;
L_08942370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(38)));
        goto L_0894238C;
    }
    goto L_0894237C;
L_0894237C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_089423A4;
      }
      goto L_0894238C;
    }
L_0894238C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_089423A4;
L_089423A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(42)));
    aot_gpr[4] = (aot_gpr[4] | 32896u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089423BC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942404;
      }
      goto L_089423CC;
    }
L_089423CC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-24080)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089423E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 16u);
      if (branch_taken) {
          goto L_08942408;
      }
      goto L_089423EC;
    }
L_089423EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08942408;
      }
      goto L_089423F4;
    }
L_089423F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08942408;
      }
      goto L_089423FC;
    }
L_089423FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_08942408;
      }
      goto L_08942404;
    }
L_08942404:
    aot_gpr[2] = (0u | 0u);
    goto L_08942408;
L_08942408:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942410:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[4] | 0u);
    aot_gpr[11] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[8] | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08942448u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_089423BC;
L_08942448:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(38)));
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] >> 3u);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(40)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), aot_gpr[10]);
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942488:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089424A4u);
    // nop
    goto L_08942080;
L_089424A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089424B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[7] = (aot_gpr[7] & 32768u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
        goto L_089424EC;
    }
    goto L_089424C0;
L_089424C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] >> 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08942570;
      }
      goto L_089424EC;
    }
L_089424EC:
    aot_gpr[8] = (0u | 128u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[6] >> 3u);
    aot_gpr[6] = (aot_gpr[6] & 7u);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[10] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] >> 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08942570;
      }
      goto L_08942570;
    }
L_08942570:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0894258Cu);
    aot_gpr[3] = (aot_gpr[4] | 0u);
    goto L_089424B0;
L_0894258C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(45)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u | 32u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_089425A0;
    }
L_089425A0:
    { const bool branch_taken = 0u == 0u;
    // Original PSP pixel query; preserve instruction metadata for VRAM tracing.
    aot_gpr[2] = aot_mem.aot_load32_at(aot_gpr[4], 0x089425A4u, aot_gpr[31]);
      if (branch_taken) {
          goto L_089425E8;
      }
      goto L_089425A8;
    }
L_089425A8:
    aot_gpr[6] = (0u | 16u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089425BC;
      }
      goto L_089425B4;
    }
L_089425B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089425E8;
      }
      goto L_089425BC;
    }
L_089425BC:
    aot_gpr[6] = (0u | 8u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089425D0;
      }
      goto L_089425C8;
    }
L_089425C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089425E8;
      }
      goto L_089425D0;
    }
L_089425D0:
    aot_gpr[5] = (aot_gpr[11] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[4] & 15u);
      if (branch_taken) {
          goto L_089425E8;
      }
      goto L_089425DC;
    }
L_089425DC:
    aot_gpr[2] = (aot_gpr[4] & 240u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] >> 4u);
      if (branch_taken) {
          goto L_089425E8;
      }
      goto L_089425E8;
    }
L_089425E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089425F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0894260Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0894260Cu) goto L_0894260C;
    return;
L_0894260C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2416));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894262C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894271C;
      }
      goto L_08942648;
    }
L_08942648:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2416));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894269C;
      }
      goto L_08942660;
    }
L_08942660:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894269C;
      }
      goto L_08942674;
    }
L_08942674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894269C;
      }
      goto L_08942684;
    }
L_08942684:
    aot_gpr[4] = (aot_gpr[4] & 256u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0894269Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 160u, 0x08931F84u>(ctx, &aot_mem) && ctx.pc == 0x0894269Cu) goto L_0894269C;
    return;
L_0894269C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089426E4;
      }
      goto L_089426A8;
    }
L_089426A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089426E4;
      }
      goto L_089426BC;
    }
L_089426BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089426E4;
      }
      goto L_089426CC;
    }
L_089426CC:
    aot_gpr[4] = (aot_gpr[4] & 256u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089426E4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 160u, 0x08931F84u>(ctx, &aot_mem) && ctx.pc == 0x089426E4u) goto L_089426E4;
    return;
L_089426E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089426F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x089426F0u) goto L_089426F0;
    return;
L_089426F0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0894271C;
      }
      goto L_089426FC;
    }
L_089426FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0894271Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894271Cu) goto L_0894271C;
    return;
L_0894271C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942730:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08942754u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08942754u) goto L_08942754;
    return;
L_08942754:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2416));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(42)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 256u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08942798;
      }
      goto L_08942774;
    }
L_08942774:
    aot_gpr[31] = (0x0894277Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x0894277Cu) goto L_0894277C;
    return;
L_0894277C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
      if (branch_taken) {
          goto L_089427B8;
      }
      goto L_08942784;
    }
L_08942784:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08942790u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08942790u) goto L_08942790;
    return;
L_08942790:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
      if (branch_taken) {
          goto L_089427B8;
      }
      goto L_08942798;
    }
L_08942798:
    aot_gpr[31] = (0x089427A0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x089427A0u) goto L_089427A0;
    return;
L_089427A0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
      if (branch_taken) {
          goto L_089427B8;
      }
      goto L_089427A8;
    }
L_089427A8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089427B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x089427B4u) goto L_089427B4;
    return;
L_089427B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_089427B8;
L_089427B8:
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
L_089427D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08942810u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08942810u) goto L_08942810;
    return;
L_08942810:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2416));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08942838u);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08942838u) goto L_08942838;
    return;
L_08942838:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 127u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08942850;
      }
      goto L_08942848;
    }
L_08942848:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08942850;
L_08942850:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 127u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08942868;
      }
      goto L_08942860;
    }
L_08942860:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08942868;
L_08942868:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089428F4;
      }
      goto L_08942874;
    }
L_08942874:
    aot_gpr[4] = (aot_gpr[19] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089428F4;
      }
      goto L_08942880;
    }
L_08942880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[4] = (aot_gpr[4] & 256u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089428BC;
      }
      goto L_08942890;
    }
L_08942890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089428E4;
      }
      goto L_089428BC;
    }
L_089428BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089428E4;
L_089428E4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089428F4u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089428F4u) goto L_089428F4;
    return;
L_089428F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942988;
      }
      goto L_08942900;
    }
L_08942900:
    aot_gpr[4] = (aot_gpr[19] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942988;
      }
      goto L_0894290C;
    }
L_0894290C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 1024u);
    aot_gpr[6] = (0u | 4u);
    if (aot_gpr[5] == aot_gpr[6]) {
    aot_gpr[4] = (0u | 64u);
        goto L_08942920;
    }
    goto L_08942920;
L_08942920:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[5] = (aot_gpr[5] & 256u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08942958;
    }
    goto L_08942930;
L_08942930:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08942978;
      }
      goto L_08942958;
    }
L_08942958:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08942978;
L_08942978:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08942988u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08942988u) goto L_08942988;
    return;
L_08942988:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] & 127u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
      if (branch_taken) {
          goto L_089429A0;
      }
      goto L_08942998;
    }
L_08942998:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089429A0;
L_089429A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] & 127u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
      if (branch_taken) {
          goto L_089429B8;
      }
      goto L_089429B0;
    }
L_089429B0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089429B8;
L_089429B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_089429E0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(48));
    aot_gpr[8] = (aot_gpr[9] & 127u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[9]);
      if (branch_taken) {
          goto L_08942A00;
      }
      goto L_089429F4;
    }
L_089429F4:
    aot_gpr[8] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    goto L_08942A00;
L_08942A00:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[9] & 127u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[9] - aot_gpr[8]);
      if (branch_taken) {
          goto L_08942A18;
      }
      goto L_08942A10;
    }
L_08942A10:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    goto L_08942A18;
L_08942A18:
    aot_gpr[8] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942A50;
      }
      goto L_08942A24;
    }
L_08942A24:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[9] = (aot_gpr[9] & 256u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08942A44;
      }
      goto L_08942A34;
    }
L_08942A34:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08942A50;
      }
      goto L_08942A44;
    }
L_08942A44:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    goto L_08942A50;
L_08942A50:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_08942A5C;
    }
L_08942A5C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_08942A68;
    }
L_08942A68:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1024u);
    aot_gpr[9] = (0u | 4u);
    if (aot_gpr[8] == aot_gpr[9]) {
    aot_gpr[5] = (0u | 64u);
        goto L_08942A7C;
    }
    goto L_08942A7C;
L_08942A7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[4] = (aot_gpr[4] & 256u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942A9C;
      }
      goto L_08942A8C;
    }
L_08942A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_08942A9C;
    }
L_08942A9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08942AA8;
L_08942AA8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[9] & 127u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[9] - aot_gpr[8]);
      if (branch_taken) {
          goto L_08942AC0;
      }
      goto L_08942AB8;
    }
L_08942AB8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08942AC0;
L_08942AC0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[9] & 127u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[9] - aot_gpr[8]);
      if (branch_taken) {
          goto L_08942AD8;
      }
      goto L_08942AD0;
    }
L_08942AD0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08942AD8;
L_08942AD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942AE0:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(23864));
    aot_gpr[2] = (0u | 0u);
    goto L_08942AEC;
L_08942AEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08942B10;
      }
      goto L_08942AF8;
    }
L_08942AF8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08942AEC;
      }
      goto L_08942B08;
    }
L_08942B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942B18;
      }
      goto L_08942B10;
    }
L_08942B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942B1C;
      }
      goto L_08942B18;
    }
L_08942B18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08942B1C;
L_08942B1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08942B38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08942AE0;
L_08942B38:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08942BA0;
      }
      goto L_08942B44;
    }
L_08942B44:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 63 ? 1u : 0u);
    aot_gpr[6] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(23864));
      if (branch_taken) {
          goto L_08942B90;
      }
      goto L_08942B58;
    }
L_08942B58:
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    goto L_08942B60;
L_08942B60:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 63 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08942B60;
      }
      goto L_08942B90;
    }
L_08942B90:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1008), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1012), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1016), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1020), 0u);
    goto L_08942BA0;
L_08942BA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21337)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (2219u << 16u);
      if (branch_taken) {
          goto L_08942BF4;
      }
      goto L_08942BEC;
    }
L_08942BEC:
    aot_gpr[31] = (0x08942BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 7u, 0x08932060u>(ctx, &aot_mem) && ctx.pc == 0x08942BF4u) goto L_08942BF4;
    return;
L_08942BF4:
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24908)));
    goto L_08942C00;
L_08942C00:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C18;
      }
      goto L_08942C08;
    }
L_08942C08:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08942C10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942C10u) goto L_08942C10;
    return;
L_08942C10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(24912)));
      if (branch_taken) {
          goto L_08942C24;
      }
      goto L_08942C18;
    }
L_08942C18:
    aot_gpr[31] = (0x08942C20u);
    // nop
    ctx.pc = 0x08A5AF34u;
    return;
L_08942C20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(24912)));
    goto L_08942C24;
L_08942C24:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C50;
      }
      goto L_08942C2C;
    }
L_08942C2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24913)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C50;
      }
      goto L_08942C38;
    }
L_08942C38:
    aot_gpr[31] = (0x08942C40u);
    // nop
    ctx.pc = 0x08A5AF34u;
    return;
L_08942C40:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942C58;
      }
      goto L_08942C48;
    }
L_08942C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C60;
      }
      goto L_08942C50;
    }
L_08942C50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24908)));
      if (branch_taken) {
          goto L_08942C00;
      }
      goto L_08942C58;
    }
L_08942C58:
    aot_gpr[31] = (0x08942C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 4u, 0x0893202Cu>(ctx, &aot_mem) && ctx.pc == 0x08942C60u) goto L_08942C60;
    return;
L_08942C60:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[21]));
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
L_08942C88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08942D00;
      }
      goto L_08942CA8;
    }
L_08942CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28708)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942D00;
      }
      goto L_08942CB4;
    }
L_08942CB4:
    aot_gpr[31] = (0x08942CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 130u, 0x0892C97Cu>(ctx, &aot_mem) && ctx.pc == 0x08942CBCu) goto L_08942CBC;
    return;
L_08942CBC:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(23864));
    goto L_08942CC8;
L_08942CC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942CF0;
      }
      goto L_08942CD4;
    }
L_08942CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08942CF0;
      }
      goto L_08942CE0;
    }
L_08942CE0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08942CF0u);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942CF0u) goto L_08942CF0;
    return;
L_08942CF0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08942CC8;
      }
      goto L_08942D00;
    }
L_08942D00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942D14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08942D60;
      }
      goto L_08942D34;
    }
L_08942D34:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28708)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942D60;
      }
      goto L_08942D44;
    }
L_08942D44:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28695), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x08942D50u);
    // nop
    ctx.pc = 0x08A5AFA4u;
    return;
L_08942D50:
    aot_gpr[31] = (0x08942D58u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF8Cu;
    return;
L_08942D58:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28708), 0u);
      if (branch_taken) {
          goto L_08942D70;
      }
      goto L_08942D60;
    }
L_08942D60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28695)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28695), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08942D70;
L_08942D70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942D80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28708)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942DC8;
      }
      goto L_08942DA8;
    }
L_08942DA8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-28708));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28700));
    aot_gpr[31] = (0x08942DBCu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF84u;
    return;
L_08942DBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28708)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28704), aot_gpr[4]);
    goto L_08942DC8;
L_08942DC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942DD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08942E48;
      }
      goto L_08942DF8;
    }
L_08942DF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28708)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E48;
      }
      goto L_08942E04;
    }
L_08942E04:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(23864));
    goto L_08942E10;
L_08942E10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E38;
      }
      goto L_08942E1C;
    }
L_08942E1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08942E38;
      }
      goto L_08942E28;
    }
L_08942E28:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08942E38u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942E38u) goto L_08942E38;
    return;
L_08942E38:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08942E10;
      }
      goto L_08942E48;
    }
L_08942E48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942E5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-28656)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942F54;
      }
      goto L_08942E7C;
    }
L_08942E7C:
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-28656), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24916)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24916), aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942EC4;
      }
      goto L_08942EA8;
    }
L_08942EA8:
    aot_gpr[31] = (0x08942EB0u);
    // nop
    goto L_08942C88;
L_08942EB0:
    aot_gpr[31] = (0x08942EB8u);
    aot_gpr[4] = (0u | 0u);
    goto L_08942D14;
L_08942EB8:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28696), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_08942F50;
      }
      goto L_08942EC4;
    }
L_08942EC4:
    aot_gpr[5] = (8u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942EF0;
      }
      goto L_08942ED4;
    }
L_08942ED4:
    aot_gpr[31] = (0x08942EDCu);
    // nop
    goto L_08942C88;
L_08942EDC:
    aot_gpr[31] = (0x08942EE4u);
    aot_gpr[4] = (0u | 0u);
    goto L_08942D14;
L_08942EE4:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28696), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_08942F50;
      }
      goto L_08942EF0;
    }
L_08942EF0:
    aot_gpr[5] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942F50;
      }
      goto L_08942F00;
    }
L_08942F00:
    aot_gpr[5] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942F50;
      }
      goto L_08942F10;
    }
L_08942F10:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(10108)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942F28;
      }
      goto L_08942F20;
    }
L_08942F20:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08942F28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942F28u) goto L_08942F28;
    return;
L_08942F28:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28696), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28695)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942F50;
      }
      goto L_08942F40;
    }
L_08942F40:
    aot_gpr[31] = (0x08942F48u);
    // nop
    goto L_08942D80;
L_08942F48:
    aot_gpr[31] = (0x08942F50u);
    // nop
    goto L_08942DD8;
L_08942F50:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-28656), static_cast<std::uint8_t>(0u));
    goto L_08942F54;
L_08942F54:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[21] = (aot_gpr[5] & 63u);
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 9u, 0x08943048u>(ctx, &aot_mem); return;
      }
      goto L_08942F9C;
    }
L_08942F9C:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[20] = (2219u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 9u, 0x08943048u>(ctx, &aot_mem); return;
      }
      goto L_08942FA4;
    }
L_08942FA4:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[17] = (2219u << 16u);
    goto L_08942FB0;
L_08942FB0:
    aot_gpr[4] = (aot_gpr[21] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FDC;
      }
      goto L_08942FBC;
    }
L_08942FBC:
    aot_gpr[21] = (aot_gpr[21] ^ 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(24912), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(24913), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(10112)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FDC;
      }
      goto L_08942FD4;
    }
L_08942FD4:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08942FDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942FDCu) goto L_08942FDC;
    return;
L_08942FDC:
    aot_gpr[4] = (aot_gpr[21] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FF0;
      }
      goto L_08942FE8;
    }
L_08942FE8:
    aot_gpr[21] = (aot_gpr[21] ^ 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(24912), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_08942FF0;
L_08942FF0:
    aot_gpr[4] = (aot_gpr[21] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 2u, 0x08943004u>(ctx, &aot_mem); return;
      }
      goto L_08942FFC;
    }
L_08942FFC:
    aot_gpr[21] = (aot_gpr[21] ^ 8u);
    ctx.pc = 0x08943000u; return;
}

void recomp_unit_0318(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0318_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_318(Runtime &runtime) {
    runtime.register_generated_unit(318u, 0x08942000u, 4096u, &recomp_unit_0318, &recomp_unit_0318_entry);
    runtime.register_function(0x08942000u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942030u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894203Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942044u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942054u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894205Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942064u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894206Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942078u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942080u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089420DCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089420E0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942160u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942170u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089421A0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089421D4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089421DCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089421F8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942200u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894221Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942228u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942234u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894224Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942284u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942298u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089422A8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089422E4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089422F4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089422FCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942304u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942324u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942344u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942364u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942370u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894237Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894238Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423A4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423BCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423CCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423E4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423ECu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423F4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089423FCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942404u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942408u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942410u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942448u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942488u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942494u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089424A4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089424B0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089424C0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089424ECu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942570u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942578u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894258Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425A0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425A8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425B4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425BCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425C8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425D0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425DCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425E8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089425F4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894260Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894262Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942648u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942660u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942674u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942684u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894269Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089426A8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089426BCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089426CCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089426E4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089426F0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089426FCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894271Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942730u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942754u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942774u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894277Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942784u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942790u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942798u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089427A0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089427A8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089427B4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089427B8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089427D4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942810u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942838u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942848u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942850u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942860u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942868u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942874u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942880u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942890u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089428BCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089428E4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089428F4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942900u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x0894290Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942920u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942930u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942958u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942978u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942988u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942998u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089429A0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089429B0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089429B8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089429E0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x089429F4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A00u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A10u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A18u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A24u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A34u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A44u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A50u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A5Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A68u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A7Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A8Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942A9Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AA8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AB8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AC0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AD0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AD8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AE0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AECu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942AF8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B08u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B10u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B18u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B1Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B24u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B38u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B44u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B58u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B60u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942B90u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942BA0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942BB0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942BECu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942BF4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C00u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C08u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C10u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C18u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C20u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C24u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C2Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C38u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C40u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C48u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C50u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C58u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C60u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942C88u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CA8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CB4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CBCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CC8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CD4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CE0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942CF0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D00u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D14u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D34u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D44u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D50u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D58u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D60u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D70u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942D80u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942DA8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942DBCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942DC8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942DD8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942DF8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E04u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E10u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E1Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E28u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E38u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E48u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E5Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942E7Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EA8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EB0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EB8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EC4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942ED4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EDCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EE4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942EF0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F00u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F10u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F20u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F28u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F40u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F48u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F50u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F54u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F6Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942F9Cu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FA4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FB0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FBCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FD4u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FDCu, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FE8u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FF0u, &recomp_unit_0318, "recomp_unit_0318");
    runtime.register_function(0x08942FFCu, &recomp_unit_0318, "recomp_unit_0318");
}
} // namespace psprecomp
