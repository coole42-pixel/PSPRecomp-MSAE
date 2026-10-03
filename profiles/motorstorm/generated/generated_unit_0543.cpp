#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0543[1019] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0,
    0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0,
    0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0,
    46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0,
    70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 92, 0, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 108, 0, 0, 0, 0, 109, 0, 110, 111, 0, 0, 112, 113, 0, 0,
    0, 0, 114, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0,
    0, 0, 0, 123, 0, 124, 125, 0, 0, 0, 0, 126, 127, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 139, 0, 0, 0, 0, 140, 141, 0, 0,
    0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149,
    0, 0, 0, 0, 0, 150, 0, 151, 152, 0, 0, 0, 0, 153, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0,
    165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 170, 0, 0, 0, 0, 171, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 183,
    0, 0, 0, 0, 184, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    257, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266,
};
void recomp_unit_0543_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A23000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0543[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A23000;
    case 2u: goto L_08A23008;
    case 3u: goto L_08A23014;
    case 4u: goto L_08A23028;
    case 5u: goto L_08A23030;
    case 6u: goto L_08A2303C;
    case 7u: goto L_08A23044;
    case 8u: goto L_08A23050;
    case 9u: goto L_08A23058;
    case 10u: goto L_08A23060;
    case 11u: goto L_08A23068;
    case 12u: goto L_08A23084;
    case 13u: goto L_08A23090;
    case 14u: goto L_08A230A4;
    case 15u: goto L_08A230AC;
    case 16u: goto L_08A230B4;
    case 17u: goto L_08A230B8;
    case 18u: goto L_08A230C0;
    case 19u: goto L_08A230C8;
    case 20u: goto L_08A230D0;
    case 21u: goto L_08A230D8;
    case 22u: goto L_08A230E4;
    case 23u: goto L_08A230EC;
    case 24u: goto L_08A23104;
    case 25u: goto L_08A23110;
    case 26u: goto L_08A23118;
    case 27u: goto L_08A23120;
    case 28u: goto L_08A23128;
    case 29u: goto L_08A2313C;
    case 30u: goto L_08A23144;
    case 31u: goto L_08A2314C;
    case 32u: goto L_08A23154;
    case 33u: goto L_08A23160;
    case 34u: goto L_08A2316C;
    case 35u: goto L_08A23174;
    case 36u: goto L_08A2318C;
    case 37u: goto L_08A23198;
    case 38u: goto L_08A231A0;
    case 39u: goto L_08A231A8;
    case 40u: goto L_08A231B8;
    case 41u: goto L_08A231C8;
    case 42u: goto L_08A231D0;
    case 43u: goto L_08A231D8;
    case 44u: goto L_08A231F0;
    case 45u: goto L_08A231F8;
    case 46u: goto L_08A23200;
    case 47u: goto L_08A23208;
    case 48u: goto L_08A23220;
    case 49u: goto L_08A2322C;
    case 50u: goto L_08A23238;
    case 51u: goto L_08A23248;
    case 52u: goto L_08A23250;
    case 53u: goto L_08A23258;
    case 54u: goto L_08A23270;
    case 55u: goto L_08A23278;
    case 56u: goto L_08A23280;
    case 57u: goto L_08A23288;
    case 58u: goto L_08A232A0;
    case 59u: goto L_08A232AC;
    case 60u: goto L_08A232B8;
    case 61u: goto L_08A232C4;
    case 62u: goto L_08A232CC;
    case 63u: goto L_08A232D4;
    case 64u: goto L_08A232E0;
    case 65u: goto L_08A232E8;
    case 66u: goto L_08A232F0;
    case 67u: goto L_08A23320;
    case 68u: goto L_08A2335C;
    case 69u: goto L_08A23374;
    case 70u: goto L_08A23380;
    case 71u: goto L_08A23388;
    case 72u: goto L_08A2339C;
    case 73u: goto L_08A233A8;
    case 74u: goto L_08A233AC;
    case 75u: goto L_08A233B4;
    case 76u: goto L_08A233BC;
    case 77u: goto L_08A233D4;
    case 78u: goto L_08A233DC;
    case 79u: goto L_08A233E4;
    case 80u: goto L_08A2340C;
    case 81u: goto L_08A23424;
    case 82u: goto L_08A23428;
    case 83u: goto L_08A23438;
    case 84u: goto L_08A23444;
    case 85u: goto L_08A2346C;
    case 86u: goto L_08A23488;
    case 87u: goto L_08A23494;
    case 88u: goto L_08A234A0;
    case 89u: goto L_08A234A8;
    case 90u: goto L_08A234C0;
    case 91u: goto L_08A234C8;
    case 92u: goto L_08A234CC;
    case 93u: goto L_08A234E0;
    case 94u: goto L_08A234E4;
    case 95u: goto L_08A234F4;
    case 96u: goto L_08A23508;
    case 97u: goto L_08A23528;
    case 98u: goto L_08A23534;
    case 99u: goto L_08A2353C;
    case 100u: goto L_08A23550;
    case 101u: goto L_08A23560;
    case 102u: goto L_08A23578;
    case 103u: goto L_08A2358C;
    case 104u: goto L_08A23598;
    case 105u: goto L_08A235A0;
    case 106u: goto L_08A235B8;
    case 107u: goto L_08A235C0;
    case 108u: goto L_08A235C4;
    case 109u: goto L_08A235D8;
    case 110u: goto L_08A235E0;
    case 111u: goto L_08A235E4;
    case 112u: goto L_08A235F0;
    case 113u: goto L_08A235F4;
    case 114u: goto L_08A23608;
    case 115u: goto L_08A2360C;
    case 116u: goto L_08A2361C;
    case 117u: goto L_08A23628;
    case 118u: goto L_08A23638;
    case 119u: goto L_08A23650;
    case 120u: goto L_08A23660;
    case 121u: goto L_08A2366C;
    case 122u: goto L_08A23674;
    case 123u: goto L_08A2368C;
    case 124u: goto L_08A23694;
    case 125u: goto L_08A23698;
    case 126u: goto L_08A236AC;
    case 127u: goto L_08A236B0;
    case 128u: goto L_08A236B4;
    case 129u: goto L_08A236C0;
    case 130u: goto L_08A236D4;
    case 131u: goto L_08A236E0;
    case 132u: goto L_08A236FC;
    case 133u: goto L_08A23718;
    case 134u: goto L_08A23724;
    case 135u: goto L_08A23730;
    case 136u: goto L_08A23738;
    case 137u: goto L_08A23750;
    case 138u: goto L_08A23758;
    case 139u: goto L_08A2375C;
    case 140u: goto L_08A23770;
    case 141u: goto L_08A23774;
    case 142u: goto L_08A23784;
    case 143u: goto L_08A23798;
    case 144u: goto L_08A237A4;
    case 145u: goto L_08A237C0;
    case 146u: goto L_08A237DC;
    case 147u: goto L_08A237E8;
    case 148u: goto L_08A237F4;
    case 149u: goto L_08A237FC;
    case 150u: goto L_08A23814;
    case 151u: goto L_08A2381C;
    case 152u: goto L_08A23820;
    case 153u: goto L_08A23834;
    case 154u: goto L_08A23838;
    case 155u: goto L_08A23848;
    case 156u: goto L_08A2385C;
    case 157u: goto L_08A23864;
    case 158u: goto L_08A23880;
    case 159u: goto L_08A23898;
    case 160u: goto L_08A238AC;
    case 161u: goto L_08A238C0;
    case 162u: goto L_08A238CC;
    case 163u: goto L_08A238E8;
    case 164u: goto L_08A238F4;
    case 165u: goto L_08A23900;
    case 166u: goto L_08A2390C;
    case 167u: goto L_08A23914;
    case 168u: goto L_08A2392C;
    case 169u: goto L_08A23934;
    case 170u: goto L_08A23938;
    case 171u: goto L_08A2394C;
    case 172u: goto L_08A23950;
    case 173u: goto L_08A23960;
    case 174u: goto L_08A23974;
    case 175u: goto L_08A23980;
    case 176u: goto L_08A2399C;
    case 177u: goto L_08A239B8;
    case 178u: goto L_08A239C4;
    case 179u: goto L_08A239D0;
    case 180u: goto L_08A239D8;
    case 181u: goto L_08A239F0;
    case 182u: goto L_08A239F8;
    case 183u: goto L_08A239FC;
    case 184u: goto L_08A23A10;
    case 185u: goto L_08A23A14;
    case 186u: goto L_08A23A24;
    case 187u: goto L_08A23A2C;
    case 188u: goto L_08A23A40;
    case 189u: goto L_08A23A48;
    case 190u: goto L_08A23A54;
    case 191u: goto L_08A23A70;
    case 192u: goto L_08A23A7C;
    case 193u: goto L_08A23AA0;
    case 194u: goto L_08A23AA8;
    case 195u: goto L_08A23AD8;
    case 196u: goto L_08A23AE8;
    case 197u: goto L_08A23AF0;
    case 198u: goto L_08A23B10;
    case 199u: goto L_08A23B28;
    case 200u: goto L_08A23B44;
    case 201u: goto L_08A23B50;
    case 202u: goto L_08A23B58;
    case 203u: goto L_08A23B88;
    case 204u: goto L_08A23BBC;
    case 205u: goto L_08A23BD4;
    case 206u: goto L_08A23BDC;
    case 207u: goto L_08A23BE8;
    case 208u: goto L_08A23BF0;
    case 209u: goto L_08A23C10;
    case 210u: goto L_08A23C34;
    case 211u: goto L_08A23C4C;
    case 212u: goto L_08A23C54;
    case 213u: goto L_08A23C60;
    case 214u: goto L_08A23C68;
    case 215u: goto L_08A23C88;
    case 216u: goto L_08A23CAC;
    case 217u: goto L_08A23CC4;
    case 218u: goto L_08A23CCC;
    case 219u: goto L_08A23CD8;
    case 220u: goto L_08A23CE0;
    case 221u: goto L_08A23D00;
    case 222u: goto L_08A23D24;
    case 223u: goto L_08A23D3C;
    case 224u: goto L_08A23D44;
    case 225u: goto L_08A23D50;
    case 226u: goto L_08A23D58;
    case 227u: goto L_08A23D78;
    case 228u: goto L_08A23D9C;
    case 229u: goto L_08A23DB4;
    case 230u: goto L_08A23DBC;
    case 231u: goto L_08A23DC8;
    case 232u: goto L_08A23DD0;
    case 233u: goto L_08A23DF0;
    case 234u: goto L_08A23E14;
    case 235u: goto L_08A23E2C;
    case 236u: goto L_08A23E34;
    case 237u: goto L_08A23E40;
    case 238u: goto L_08A23E48;
    case 239u: goto L_08A23E68;
    case 240u: goto L_08A23E8C;
    case 241u: goto L_08A23E9C;
    case 242u: goto L_08A23EA8;
    case 243u: goto L_08A23EC8;
    case 244u: goto L_08A23ED0;
    case 245u: goto L_08A23ED8;
    case 246u: goto L_08A23EE8;
    case 247u: goto L_08A23F00;
    case 248u: goto L_08A23F08;
    case 249u: goto L_08A23F10;
    case 250u: goto L_08A23F18;
    case 251u: goto L_08A23F28;
    case 252u: goto L_08A23F40;
    case 253u: goto L_08A23F48;
    case 254u: goto L_08A23F50;
    case 255u: goto L_08A23F58;
    case 256u: goto L_08A23F68;
    case 257u: goto L_08A23F80;
    case 258u: goto L_08A23F88;
    case 259u: goto L_08A23F90;
    case 260u: goto L_08A23F98;
    case 261u: goto L_08A23FA8;
    case 262u: goto L_08A23FC0;
    case 263u: goto L_08A23FC8;
    case 264u: goto L_08A23FD0;
    case 265u: goto L_08A23FD8;
    case 266u: goto L_08A23FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A23000:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A23014;
      }
      goto L_08A23008;
    }
L_08A23008:
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A23050;
      }
      goto L_08A23014;
    }
L_08A23014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(328), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A23050;
      }
      goto L_08A23028;
    }
L_08A23028:
    aot_gpr[31] = (0x08A23030u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A23030u) goto L_08A23030;
    return;
L_08A23030:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A23050;
      }
      goto L_08A2303C;
    }
L_08A2303C:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    aot_gpr[23] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A23050;
      }
      goto L_08A23044;
    }
L_08A23044:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(328), aot_gpr[5]);
    goto L_08A23050;
L_08A23050:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 229u, 0x08A22FA4u>(ctx, &aot_mem); return;
      }
      goto L_08A23058;
    }
L_08A23058:
    aot_gpr[31] = (0x08A23060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23060u) goto L_08A23060;
    return;
L_08A23060:
    aot_gpr[31] = (0x08A23068u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23068u) goto L_08A23068;
    return;
L_08A23068:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23084u);
    aot_gpr[7] = (0u | 1118u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23084u) goto L_08A23084;
    return;
L_08A23084:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(23456), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A230AC;
      }
      goto L_08A23090;
    }
L_08A23090:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x08A230A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A230A4u) goto L_08A230A4;
    return;
L_08A230A4:
    aot_gpr[23] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    goto L_08A230AC;
L_08A230AC:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A232F0;
      }
      goto L_08A230B4;
    }
L_08A230B4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    goto L_08A230B8;
L_08A230B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A23110;
      }
      goto L_08A230C0;
    }
L_08A230C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A230C8;
    }
L_08A230C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A23128;
      }
      goto L_08A230D0;
    }
L_08A230D0:
    aot_gpr[31] = (0x08A230D8u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A230D8u) goto L_08A230D8;
    return;
L_08A230D8:
    aot_gpr[18] = (aot_gpr[2] - aot_gpr[22]);
    aot_gpr[31] = (0x08A230E4u);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A230E4u) goto L_08A230E4;
    return;
L_08A230E4:
    aot_gpr[31] = (0x08A230ECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A230ECu) goto L_08A230EC;
    return;
L_08A230EC:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23104u);
    aot_gpr[7] = (0u | 1167u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23104u) goto L_08A23104;
    return;
L_08A23104:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A23110;
    }
L_08A23110:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2314C;
      }
      goto L_08A23118;
    }
L_08A23118:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A231A0;
      }
      goto L_08A23120;
    }
L_08A23120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A23128;
    }
L_08A23128:
    aot_gpr[22] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A2313Cu);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A2313Cu) goto L_08A2313C;
    return;
L_08A2313C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u | 1u);
        goto L_08A23144;
    }
    goto L_08A23144;
L_08A23144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A2314C;
    }
L_08A2314C:
    aot_gpr[31] = (0x08A23154u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A23154u) goto L_08A23154;
    return;
L_08A23154:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A23198;
      }
      goto L_08A23160;
    }
L_08A23160:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[31] = (0x08A2316Cu);
    aot_gpr[18] = (aot_gpr[17] - aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2316Cu) goto L_08A2316C;
    return;
L_08A2316C:
    aot_gpr[31] = (0x08A23174u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23174u) goto L_08A23174;
    return;
L_08A23174:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A2318Cu);
    aot_gpr[7] = (0u | 1183u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A2318Cu) goto L_08A2318C;
    return;
L_08A2318C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A23198;
    }
L_08A23198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A231A0;
    }
L_08A231A0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A232E8;
      }
      goto L_08A231A8;
    }
L_08A231A8:
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A231B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A231B8u) goto L_08A231B8;
    return;
L_08A231B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A231C8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08A231C8u) goto L_08A231C8;
    return;
L_08A231C8:
    aot_gpr[31] = (0x08A231D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A231D0u) goto L_08A231D0;
    return;
L_08A231D0:
    aot_gpr[31] = (0x08A231D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A231D8u) goto L_08A231D8;
    return;
L_08A231D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A231F0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A231F0u) goto L_08A231F0;
    return;
L_08A231F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23248;
      }
      goto L_08A231F8;
    }
L_08A231F8:
    aot_gpr[31] = (0x08A23200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A23200u) goto L_08A23200;
    return;
L_08A23200:
    aot_gpr[31] = (0x08A23208u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23208u) goto L_08A23208;
    return;
L_08A23208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23220u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23220u) goto L_08A23220;
    return;
L_08A23220:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A2322Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 138u, 0x08A00954u>(ctx, &aot_mem) && ctx.pc == 0x08A2322Cu) goto L_08A2322C;
    return;
L_08A2322C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232C4;
      }
      goto L_08A23238;
    }
L_08A23238:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(23456)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A232C4;
      }
      goto L_08A23248;
    }
L_08A23248:
    aot_gpr[31] = (0x08A23250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A23250u) goto L_08A23250;
    return;
L_08A23250:
    aot_gpr[31] = (0x08A23258u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 7u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x08A23258u) goto L_08A23258;
    return;
L_08A23258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23270u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23270u) goto L_08A23270;
    return;
L_08A23270:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232C4;
      }
      goto L_08A23278;
    }
L_08A23278:
    aot_gpr[31] = (0x08A23280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A23280u) goto L_08A23280;
    return;
L_08A23280:
    aot_gpr[31] = (0x08A23288u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 7u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x08A23288u) goto L_08A23288;
    return;
L_08A23288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A232A0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A232A0u) goto L_08A232A0;
    return;
L_08A232A0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A232ACu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 138u, 0x08A00954u>(ctx, &aot_mem) && ctx.pc == 0x08A232ACu) goto L_08A232AC;
    return;
L_08A232AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232C4;
      }
      goto L_08A232B8;
    }
L_08A232B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(23456)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A232C4;
L_08A232C4:
    aot_gpr[31] = (0x08A232CCu);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A232CCu) goto L_08A232CC;
    return;
L_08A232CC:
    aot_gpr[31] = (0x08A232D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A232D4u) goto L_08A232D4;
    return;
L_08A232D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A232E0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A232E0u) goto L_08A232E0;
    return;
L_08A232E0:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    goto L_08A232E8;
L_08A232E8:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A230B8;
      }
      goto L_08A232F0;
    }
L_08A232F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23320:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08A2335Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A2335Cu) goto L_08A2335C;
    return;
L_08A2335C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1508));
    aot_gpr[31] = (0x08A23374u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1524));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23374u) goto L_08A23374;
    return;
L_08A23374:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(856)));
        goto L_08A233AC;
    }
    goto L_08A23380;
L_08A23380:
    aot_gpr[31] = (0x08A23388u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A23AD8;
L_08A23388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(860), 0u);
    aot_gpr[31] = (0x08A2339Cu);
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(860));
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 216u, 0x08A17F14u>(ctx, &aot_mem) && ctx.pc == 0x08A2339Cu) goto L_08A2339C;
    return;
L_08A2339C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(856), aot_gpr[2]);
    aot_gpr[31] = (0x08A233A8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A23EA8;
L_08A233A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(856)));
    goto L_08A233AC;
L_08A233AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23AA8;
      }
      goto L_08A233B4;
    }
L_08A233B4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (aot_gpr[21] + static_cast<std::uint32_t>(23464));
      if (branch_taken) {
          goto L_08A23424;
      }
      goto L_08A233BC;
    }
L_08A233BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A233D4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A233D4u) goto L_08A233D4;
    return;
L_08A233D4:
    aot_gpr[31] = (0x08A233DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A233DCu) goto L_08A233DC;
    return;
L_08A233DC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
        goto L_08A23428;
    }
    goto L_08A233E4;
L_08A233E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(1480));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2340Cu);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(1544));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2340Cu) goto L_08A2340C;
    return;
L_08A2340C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 508u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A23424u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23424u) goto L_08A23424;
    return;
L_08A23424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
    goto L_08A23428;
L_08A23428:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A234F4;
      }
      goto L_08A23438;
    }
L_08A23438:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1480));
    goto L_08A23444;
L_08A23444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(23456)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2346Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2346Cu) goto L_08A2346C;
    return;
L_08A2346C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23488u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23488u) goto L_08A23488;
    return;
L_08A23488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A234C8;
      }
      goto L_08A23494;
    }
L_08A23494:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A234A0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A234A0u) goto L_08A234A0;
    return;
L_08A234A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A234CC;
      }
      goto L_08A234A8;
    }
L_08A234A8:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 522u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A234C0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A234C0u) goto L_08A234C0;
    return;
L_08A234C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
      if (branch_taken) {
          goto L_08A234E4;
      }
      goto L_08A234C8;
    }
L_08A234C8:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A234CC;
L_08A234CC:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 526u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A234E0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A234E0u) goto L_08A234E0;
    return;
L_08A234E0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(328)));
    goto L_08A234E4;
L_08A234E4:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A23444;
      }
      goto L_08A234F4;
    }
L_08A234F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(296)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A23608;
      }
      goto L_08A23508;
    }
L_08A23508:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1352));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[23] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(1120));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1480));
    goto L_08A23528;
L_08A23528:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A23534u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23534u) goto L_08A23534;
    return;
L_08A23534:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(300)));
        goto L_08A2360C;
    }
    goto L_08A2353C;
L_08A2353C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1188)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A235F0;
      }
      goto L_08A23550;
    }
L_08A23550:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(864)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A235E4;
      }
      goto L_08A23560;
    }
L_08A23560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23578u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23578u) goto L_08A23578;
    return;
L_08A23578:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(428));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1184), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A235C0;
      }
      goto L_08A2358C;
    }
L_08A2358C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A23598u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A23598u) goto L_08A23598;
    return;
L_08A23598:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A235C4;
      }
      goto L_08A235A0;
    }
L_08A235A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 559u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A235B8u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A235B8u) goto L_08A235B8;
    return;
L_08A235B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08A235F4;
      }
      goto L_08A235C0;
    }
L_08A235C0:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A235C4;
L_08A235C4:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 563u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A235D8u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A235D8u) goto L_08A235D8;
    return;
L_08A235D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08A235F4;
      }
      goto L_08A235E0;
    }
L_08A235E0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A235E4;
L_08A235E4:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A23550;
      }
      goto L_08A235F0;
    }
L_08A235F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(296)));
    goto L_08A235F4;
L_08A235F4:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A23528;
      }
      goto L_08A23608;
    }
L_08A23608:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(300)));
    goto L_08A2360C;
L_08A2360C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A236C0;
      }
      goto L_08A2361C;
    }
L_08A2361C:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1480));
    goto L_08A23628;
L_08A23628:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(21856)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A236B4;
    }
    goto L_08A23638;
L_08A23638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23650u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23650u) goto L_08A23650;
    return;
L_08A23650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(532)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(428));
      if (branch_taken) {
          goto L_08A23694;
      }
      goto L_08A23660;
    }
L_08A23660:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A2366Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2366Cu) goto L_08A2366C;
    return;
L_08A2366C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A23698;
      }
      goto L_08A23674;
    }
L_08A23674:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 594u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A2368Cu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A2368Cu) goto L_08A2368C;
    return;
L_08A2368C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(300)));
      if (branch_taken) {
          goto L_08A236B0;
      }
      goto L_08A23694;
    }
L_08A23694:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A23698;
L_08A23698:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 598u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A236ACu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A236ACu) goto L_08A236AC;
    return;
L_08A236AC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(300)));
    goto L_08A236B0;
L_08A236B0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A236B4;
L_08A236B4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A23628;
      }
      goto L_08A236C0;
    }
L_08A236C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(304)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A23784;
      }
      goto L_08A236D4;
    }
L_08A236D4:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1480));
    goto L_08A236E0;
L_08A236E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22112)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A236FCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A236FCu) goto L_08A236FC;
    return;
L_08A236FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23718u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23718u) goto L_08A23718;
    return;
L_08A23718:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(904)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A23758;
      }
      goto L_08A23724;
    }
L_08A23724:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A23730u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A23730u) goto L_08A23730;
    return;
L_08A23730:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A2375C;
      }
      goto L_08A23738;
    }
L_08A23738:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 615u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A23750u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23750u) goto L_08A23750;
    return;
L_08A23750:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_08A23774;
      }
      goto L_08A23758;
    }
L_08A23758:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A2375C;
L_08A2375C:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 619u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A23770u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23770u) goto L_08A23770;
    return;
L_08A23770:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(304)));
    goto L_08A23774;
L_08A23774:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A236E0;
      }
      goto L_08A23784;
    }
L_08A23784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A23848;
      }
      goto L_08A23798;
    }
L_08A23798:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1480));
    goto L_08A237A4;
L_08A237A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22368)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A237C0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A237C0u) goto L_08A237C0;
    return;
L_08A237C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A237DCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A237DCu) goto L_08A237DC;
    return;
L_08A237DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(904)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2381C;
      }
      goto L_08A237E8;
    }
L_08A237E8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A237F4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A237F4u) goto L_08A237F4;
    return;
L_08A237F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A23820;
      }
      goto L_08A237FC;
    }
L_08A237FC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 633u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A23814u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23814u) goto L_08A23814;
    return;
L_08A23814:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08A23838;
      }
      goto L_08A2381C;
    }
L_08A2381C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A23820;
L_08A23820:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 637u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A23834u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23834u) goto L_08A23834;
    return;
L_08A23834:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(308)));
    goto L_08A23838;
L_08A23838:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A237A4;
      }
      goto L_08A23848;
    }
L_08A23848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(312)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A238AC;
      }
      goto L_08A2385C;
    }
L_08A2385C:
    aot_gpr[16] = (aot_gpr[21] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1480));
    goto L_08A23864;
L_08A23864:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A23880u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23880u) goto L_08A23880;
    return;
L_08A23880:
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(296));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 649u);
    aot_gpr[31] = (0x08A23898u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23898u) goto L_08A23898;
    return;
L_08A23898:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(312)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A23864;
      }
      goto L_08A238AC;
    }
L_08A238AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(316)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A23960;
      }
      goto L_08A238C0;
    }
L_08A238C0:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1480));
    goto L_08A238CC;
L_08A238CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22944)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A238E8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A238E8u) goto L_08A238E8;
    return;
L_08A238E8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A238F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 117u, 0x08A1D7BCu>(ctx, &aot_mem) && ctx.pc == 0x08A238F4u) goto L_08A238F4;
    return;
L_08A238F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A23934;
      }
      goto L_08A23900;
    }
L_08A23900:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A2390Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2390Cu) goto L_08A2390C;
    return;
L_08A2390C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A23938;
      }
      goto L_08A23914;
    }
L_08A23914:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 662u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A2392Cu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A2392Cu) goto L_08A2392C;
    return;
L_08A2392C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A23950;
      }
      goto L_08A23934;
    }
L_08A23934:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A23938;
L_08A23938:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 666u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A2394Cu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A2394Cu) goto L_08A2394C;
    return;
L_08A2394C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(316)));
    goto L_08A23950;
L_08A23950:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A238CC;
      }
      goto L_08A23960;
    }
L_08A23960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(320)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A23A24;
      }
      goto L_08A23974;
    }
L_08A23974:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(24492));
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1480));
    goto L_08A23980;
L_08A23980:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(23200)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2399Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2399Cu) goto L_08A2399C;
    return;
L_08A2399C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A239B8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A239B8u) goto L_08A239B8;
    return;
L_08A239B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A239F8;
      }
      goto L_08A239C4;
    }
L_08A239C4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A239D0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 224u, 0x08A22EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A239D0u) goto L_08A239D0;
    return;
L_08A239D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A239FC;
      }
      goto L_08A239D8;
    }
L_08A239D8:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 680u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A239F0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A239F0u) goto L_08A239F0;
    return;
L_08A239F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08A23A14;
      }
      goto L_08A239F8;
    }
L_08A239F8:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A239FC;
L_08A239FC:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 684u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A23A10u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x08A23A10u) goto L_08A23A10;
    return;
L_08A23A10:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(320)));
    goto L_08A23A14;
L_08A23A14:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A23980;
      }
      goto L_08A23A24;
    }
L_08A23A24:
    aot_gpr[31] = (0x08A23A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A23A2Cu) goto L_08A23A2C;
    return;
L_08A23A2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A23A40u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 182u, 0x08A03B48u>(ctx, &aot_mem) && ctx.pc == 0x08A23A40u) goto L_08A23A40;
    return;
L_08A23A40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23AA0;
      }
      goto L_08A23A48;
    }
L_08A23A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23AA0;
      }
      goto L_08A23A54;
    }
L_08A23A54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[21] + static_cast<std::uint32_t>(25524));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A23A70u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A23A70u) goto L_08A23A70;
    return;
L_08A23A70:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A23A7Cu);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A23A7Cu) goto L_08A23A7C;
    return;
L_08A23A7C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(848)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A23AA0u);
    aot_gpr[9] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A23AA0u) goto L_08A23AA0;
    return;
L_08A23AA0:
    aot_gpr[31] = (0x08A23AA8u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 10u, 0x089EF094u>(ctx, &aot_mem) && ctx.pc == 0x08A23AA8u) goto L_08A23AA8;
    return;
L_08A23AA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23AD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A23AE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23AE8u) goto L_08A23AE8;
    return;
L_08A23AE8:
    aot_gpr[31] = (0x08A23AF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23AF0u) goto L_08A23AF0;
    return;
L_08A23AF0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1480));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 60u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23B10u);
    aot_gpr[7] = (0u | 742u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23B10u) goto L_08A23B10;
    return;
L_08A23B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25520), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A23B28u);
    aot_gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23B28u) goto L_08A23B28;
    return;
L_08A23B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
        goto L_08A23BD4;
    }
    goto L_08A23B44;
L_08A23B44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23B50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23B50u) goto L_08A23B50;
    return;
L_08A23B50:
    aot_gpr[31] = (0x08A23B58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23B58u) goto L_08A23B58;
    return;
L_08A23B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23B88u);
    aot_gpr[7] = (0u | 754u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23B88u) goto L_08A23B88;
    return;
L_08A23B88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[6] << 6u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(864));
    aot_gpr[31] = (0x08A23BBCu);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23BBCu) goto L_08A23BBC;
    return;
L_08A23BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    goto L_08A23BD4;
L_08A23BD4:
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
        goto L_08A23C4C;
    }
    goto L_08A23BDC;
L_08A23BDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23BE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23BE8u) goto L_08A23BE8;
    return;
L_08A23BE8:
    aot_gpr[31] = (0x08A23BF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23BF0u) goto L_08A23BF0;
    return;
L_08A23BF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(300)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23C10u);
    aot_gpr[7] = (0u | 765u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23C10u) goto L_08A23C10;
    return;
L_08A23C10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21856));
    aot_gpr[31] = (0x08A23C34u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23C34u) goto L_08A23C34;
    return;
L_08A23C34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    goto L_08A23C4C;
L_08A23C4C:
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
        goto L_08A23CC4;
    }
    goto L_08A23C54;
L_08A23C54:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23C60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23C60u) goto L_08A23C60;
    return;
L_08A23C60:
    aot_gpr[31] = (0x08A23C68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23C68u) goto L_08A23C68;
    return;
L_08A23C68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23C88u);
    aot_gpr[7] = (0u | 776u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23C88u) goto L_08A23C88;
    return;
L_08A23C88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22112));
    aot_gpr[31] = (0x08A23CACu);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23CACu) goto L_08A23CAC;
    return;
L_08A23CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    goto L_08A23CC4;
L_08A23CC4:
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
        goto L_08A23D3C;
    }
    goto L_08A23CCC;
L_08A23CCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23CD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23CD8u) goto L_08A23CD8;
    return;
L_08A23CD8:
    aot_gpr[31] = (0x08A23CE0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23CE0u) goto L_08A23CE0;
    return;
L_08A23CE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(308)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23D00u);
    aot_gpr[7] = (0u | 788u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23D00u) goto L_08A23D00;
    return;
L_08A23D00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22368));
    aot_gpr[31] = (0x08A23D24u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23D24u) goto L_08A23D24;
    return;
L_08A23D24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    goto L_08A23D3C;
L_08A23D3C:
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
        goto L_08A23DB4;
    }
    goto L_08A23D44;
L_08A23D44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23D50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23D50u) goto L_08A23D50;
    return;
L_08A23D50:
    aot_gpr[31] = (0x08A23D58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23D58u) goto L_08A23D58;
    return;
L_08A23D58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(312)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23D78u);
    aot_gpr[7] = (0u | 800u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23D78u) goto L_08A23D78;
    return;
L_08A23D78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(312)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22688));
    aot_gpr[31] = (0x08A23D9Cu);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23D9Cu) goto L_08A23D9C;
    return;
L_08A23D9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    goto L_08A23DB4;
L_08A23DB4:
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
        goto L_08A23E2C;
    }
    goto L_08A23DBC;
L_08A23DBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23DC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23DC8u) goto L_08A23DC8;
    return;
L_08A23DC8:
    aot_gpr[31] = (0x08A23DD0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23DD0u) goto L_08A23DD0;
    return;
L_08A23DD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(316)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23DF0u);
    aot_gpr[7] = (0u | 812u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23DF0u) goto L_08A23DF0;
    return;
L_08A23DF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(316)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22944));
    aot_gpr[31] = (0x08A23E14u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23E14u) goto L_08A23E14;
    return;
L_08A23E14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    goto L_08A23E2C;
L_08A23E2C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A23E9C;
      }
      goto L_08A23E34;
    }
L_08A23E34:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A23E40u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23E40u) goto L_08A23E40;
    return;
L_08A23E40:
    aot_gpr[31] = (0x08A23E48u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23E48u) goto L_08A23E48;
    return;
L_08A23E48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(320)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A23E68u);
    aot_gpr[7] = (0u | 824u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23E68u) goto L_08A23E68;
    return;
L_08A23E68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(23200));
    aot_gpr[31] = (0x08A23E8Cu);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A23E8Cu) goto L_08A23E8C;
    return;
L_08A23E8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    goto L_08A23E9C;
L_08A23E9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23EA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08A23F00;
    }
    goto L_08A23EC8;
L_08A23EC8:
    aot_gpr[31] = (0x08A23ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23ED0u) goto L_08A23ED0;
    return;
L_08A23ED0:
    aot_gpr[31] = (0x08A23ED8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23ED8u) goto L_08A23ED8;
    return;
L_08A23ED8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A23EE8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A23EE8u) goto L_08A23EE8;
    return;
L_08A23EE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A23F00;
L_08A23F00:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08A23F40;
    }
    goto L_08A23F08;
L_08A23F08:
    aot_gpr[31] = (0x08A23F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23F10u) goto L_08A23F10;
    return;
L_08A23F10:
    aot_gpr[31] = (0x08A23F18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23F18u) goto L_08A23F18;
    return;
L_08A23F18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A23F28u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A23F28u) goto L_08A23F28;
    return;
L_08A23F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A23F40;
L_08A23F40:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A23F80;
    }
    goto L_08A23F48;
L_08A23F48:
    aot_gpr[31] = (0x08A23F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23F50u) goto L_08A23F50;
    return;
L_08A23F50:
    aot_gpr[31] = (0x08A23F58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23F58u) goto L_08A23F58;
    return;
L_08A23F58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A23F68u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A23F68u) goto L_08A23F68;
    return;
L_08A23F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A23F80;
L_08A23F80:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A23FC0;
    }
    goto L_08A23F88;
L_08A23F88:
    aot_gpr[31] = (0x08A23F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23F90u) goto L_08A23F90;
    return;
L_08A23F90:
    aot_gpr[31] = (0x08A23F98u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23F98u) goto L_08A23F98;
    return;
L_08A23F98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A23FA8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A23FA8u) goto L_08A23FA8;
    return;
L_08A23FA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A23FC0;
L_08A23FC0:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
        (void)rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 1u, 0x08A24000u>(ctx, &aot_mem); return;
    }
    goto L_08A23FC8;
L_08A23FC8:
    aot_gpr[31] = (0x08A23FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A23FD0u) goto L_08A23FD0;
    return;
L_08A23FD0:
    aot_gpr[31] = (0x08A23FD8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23FD8u) goto L_08A23FD8;
    return;
L_08A23FD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A23FE8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A23FE8u) goto L_08A23FE8;
    return;
L_08A23FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x08A24000u; return;
}

void recomp_unit_0543(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0543_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_543(Runtime &runtime) {
    runtime.register_generated_unit(543u, 0x08A23000u, 4096u, &recomp_unit_0543, &recomp_unit_0543_entry);
    runtime.register_function(0x08A23000u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23008u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23014u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23028u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23030u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2303Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23044u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23050u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23058u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23060u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23068u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23084u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23090u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230A4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230ACu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230B4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230B8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230C0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230C8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230D0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230D8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230E4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A230ECu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23104u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23110u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23118u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23120u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23128u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2313Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23144u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2314Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23154u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23160u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2316Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23174u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2318Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23198u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231A0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231A8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231B8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231C8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231D0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231D8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231F0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A231F8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23200u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23208u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23220u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2322Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23238u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23248u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23250u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23258u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23270u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23278u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23280u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23288u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232A0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232ACu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232B8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232C4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232CCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232D4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232E0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232E8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A232F0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23320u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2335Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23374u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23380u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23388u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2339Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233A8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233ACu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233B4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233BCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233D4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233DCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A233E4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2340Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23424u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23428u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23438u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23444u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2346Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23488u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23494u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234A0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234A8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234C0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234C8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234CCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234E0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234E4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A234F4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23508u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23528u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23534u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2353Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23550u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23560u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23578u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2358Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23598u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235A0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235B8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235C0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235C4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235D8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235E0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235E4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235F0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A235F4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23608u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2360Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2361Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23628u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23638u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23650u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23660u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2366Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23674u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2368Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23694u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23698u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236ACu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236B0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236B4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236C0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236D4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236E0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A236FCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23718u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23724u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23730u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23738u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23750u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23758u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2375Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23770u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23774u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23784u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23798u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A237A4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A237C0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A237DCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A237E8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A237F4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A237FCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23814u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2381Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23820u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23834u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23838u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23848u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2385Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23864u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23880u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23898u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A238ACu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A238C0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A238CCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A238E8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A238F4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23900u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2390Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23914u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2392Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23934u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23938u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2394Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23950u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23960u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23974u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23980u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A2399Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239B8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239C4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239D0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239D8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239F0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239F8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A239FCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A10u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A14u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A24u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A2Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A40u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A48u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A54u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A70u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23A7Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23AA0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23AA8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23AD8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23AE8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23AF0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23B10u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23B28u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23B44u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23B50u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23B58u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23B88u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23BBCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23BD4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23BDCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23BE8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23BF0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C10u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C34u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C4Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C54u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C60u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C68u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23C88u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23CACu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23CC4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23CCCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23CD8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23CE0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D00u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D24u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D3Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D44u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D50u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D58u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D78u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23D9Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23DB4u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23DBCu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23DC8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23DD0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23DF0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E14u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E2Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E34u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E40u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E48u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E68u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E8Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23E9Cu, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23EA8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23EC8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23ED0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23ED8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23EE8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F00u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F08u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F10u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F18u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F28u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F40u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F48u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F50u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F58u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F68u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F80u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F88u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F90u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23F98u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23FA8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23FC0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23FC8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23FD0u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23FD8u, &recomp_unit_0543, "recomp_unit_0543");
    runtime.register_function(0x08A23FE8u, &recomp_unit_0543, "recomp_unit_0543");
}
} // namespace psprecomp
