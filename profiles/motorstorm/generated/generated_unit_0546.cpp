#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0546[1018] = {
    1, 0, 2, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0,
    0, 0, 20, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58,
    0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101,
    0, 0, 102, 103, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0,
    113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132,
    133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0,
    137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 153, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0,
    177, 0, 0, 178, 0, 179, 0, 180, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0,
    199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0,
    0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228,
};
void recomp_unit_0546_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A26004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0546[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A26004;
    case 2u: goto L_08A2600C;
    case 3u: goto L_08A26010;
    case 4u: goto L_08A26018;
    case 5u: goto L_08A26024;
    case 6u: goto L_08A26040;
    case 7u: goto L_08A26048;
    case 8u: goto L_08A2605C;
    case 9u: goto L_08A26068;
    case 10u: goto L_08A26070;
    case 11u: goto L_08A2607C;
    case 12u: goto L_08A26098;
    case 13u: goto L_08A260A0;
    case 14u: goto L_08A260B4;
    case 15u: goto L_08A260B8;
    case 16u: goto L_08A260C0;
    case 17u: goto L_08A260C8;
    case 18u: goto L_08A260EC;
    case 19u: goto L_08A260F8;
    case 20u: goto L_08A2610C;
    case 21u: goto L_08A26110;
    case 22u: goto L_08A2611C;
    case 23u: goto L_08A2612C;
    case 24u: goto L_08A26134;
    case 25u: goto L_08A2613C;
    case 26u: goto L_08A26160;
    case 27u: goto L_08A26184;
    case 28u: goto L_08A26194;
    case 29u: goto L_08A261E4;
    case 30u: goto L_08A261EC;
    case 31u: goto L_08A261F4;
    case 32u: goto L_08A2620C;
    case 33u: goto L_08A26248;
    case 34u: goto L_08A26250;
    case 35u: goto L_08A26254;
    case 36u: goto L_08A26284;
    case 37u: goto L_08A26290;
    case 38u: goto L_08A262A0;
    case 39u: goto L_08A262A8;
    case 40u: goto L_08A262B8;
    case 41u: goto L_08A262D0;
    case 42u: goto L_08A262EC;
    case 43u: goto L_08A26328;
    case 44u: goto L_08A26358;
    case 45u: goto L_08A26390;
    case 46u: goto L_08A263A0;
    case 47u: goto L_08A263D0;
    case 48u: goto L_08A263E4;
    case 49u: goto L_08A263F8;
    case 50u: goto L_08A26400;
    case 51u: goto L_08A26414;
    case 52u: goto L_08A26430;
    case 53u: goto L_08A26448;
    case 54u: goto L_08A26454;
    case 55u: goto L_08A2645C;
    case 56u: goto L_08A26470;
    case 57u: goto L_08A26478;
    case 58u: goto L_08A26480;
    case 59u: goto L_08A2649C;
    case 60u: goto L_08A264A4;
    case 61u: goto L_08A264B0;
    case 62u: goto L_08A264B8;
    case 63u: goto L_08A264C4;
    case 64u: goto L_08A264D0;
    case 65u: goto L_08A264EC;
    case 66u: goto L_08A26504;
    case 67u: goto L_08A2650C;
    case 68u: goto L_08A26530;
    case 69u: goto L_08A26544;
    case 70u: goto L_08A26564;
    case 71u: goto L_08A26578;
    case 72u: goto L_08A2658C;
    case 73u: goto L_08A2659C;
    case 74u: goto L_08A265BC;
    case 75u: goto L_08A265C4;
    case 76u: goto L_08A265CC;
    case 77u: goto L_08A265D4;
    case 78u: goto L_08A265F8;
    case 79u: goto L_08A2660C;
    case 80u: goto L_08A26618;
    case 81u: goto L_08A26658;
    case 82u: goto L_08A26660;
    case 83u: goto L_08A26684;
    case 84u: goto L_08A26694;
    case 85u: goto L_08A2669C;
    case 86u: goto L_08A266A4;
    case 87u: goto L_08A266AC;
    case 88u: goto L_08A266B4;
    case 89u: goto L_08A266BC;
    case 90u: goto L_08A266C0;
    case 91u: goto L_08A266C8;
    case 92u: goto L_08A266D4;
    case 93u: goto L_08A266DC;
    case 94u: goto L_08A26700;
    case 95u: goto L_08A26710;
    case 96u: goto L_08A26714;
    case 97u: goto L_08A26738;
    case 98u: goto L_08A26758;
    case 99u: goto L_08A26770;
    case 100u: goto L_08A26778;
    case 101u: goto L_08A26780;
    case 102u: goto L_08A2678C;
    case 103u: goto L_08A26790;
    case 104u: goto L_08A267A0;
    case 105u: goto L_08A267A8;
    case 106u: goto L_08A267B0;
    case 107u: goto L_08A267B8;
    case 108u: goto L_08A267C0;
    case 109u: goto L_08A267C8;
    case 110u: goto L_08A267E0;
    case 111u: goto L_08A267EC;
    case 112u: goto L_08A267F8;
    case 113u: goto L_08A26804;
    case 114u: goto L_08A2680C;
    case 115u: goto L_08A26824;
    case 116u: goto L_08A26850;
    case 117u: goto L_08A26864;
    case 118u: goto L_08A26870;
    case 119u: goto L_08A268A8;
    case 120u: goto L_08A268B0;
    case 121u: goto L_08A268CC;
    case 122u: goto L_08A268D8;
    case 123u: goto L_08A268E4;
    case 124u: goto L_08A26900;
    case 125u: goto L_08A26908;
    case 126u: goto L_08A26928;
    case 127u: goto L_08A26944;
    case 128u: goto L_08A26958;
    case 129u: goto L_08A26960;
    case 130u: goto L_08A26968;
    case 131u: goto L_08A26978;
    case 132u: goto L_08A26980;
    case 133u: goto L_08A26984;
    case 134u: goto L_08A2699C;
    case 135u: goto L_08A269F4;
    case 136u: goto L_08A269FC;
    case 137u: goto L_08A26A04;
    case 138u: goto L_08A26A18;
    case 139u: goto L_08A26A20;
    case 140u: goto L_08A26A2C;
    case 141u: goto L_08A26A38;
    case 142u: goto L_08A26A48;
    case 143u: goto L_08A26A50;
    case 144u: goto L_08A26A58;
    case 145u: goto L_08A26A60;
    case 146u: goto L_08A26A6C;
    case 147u: goto L_08A26A78;
    case 148u: goto L_08A26A80;
    case 149u: goto L_08A26A84;
    case 150u: goto L_08A26AAC;
    case 151u: goto L_08A26AB8;
    case 152u: goto L_08A26AD4;
    case 153u: goto L_08A26AD8;
    case 154u: goto L_08A26ADC;
    case 155u: goto L_08A26AE4;
    case 156u: goto L_08A26AFC;
    case 157u: goto L_08A26B20;
    case 158u: goto L_08A26B28;
    case 159u: goto L_08A26B30;
    case 160u: goto L_08A26B34;
    case 161u: goto L_08A26B3C;
    case 162u: goto L_08A26B44;
    case 163u: goto L_08A26B70;
    case 164u: goto L_08A26BA4;
    case 165u: goto L_08A26BB8;
    case 166u: goto L_08A26BC0;
    case 167u: goto L_08A26BC8;
    case 168u: goto L_08A26BD8;
    case 169u: goto L_08A26BE0;
    case 170u: goto L_08A26BEC;
    case 171u: goto L_08A26C14;
    case 172u: goto L_08A26C1C;
    case 173u: goto L_08A26C2C;
    case 174u: goto L_08A26C3C;
    case 175u: goto L_08A26C64;
    case 176u: goto L_08A26C7C;
    case 177u: goto L_08A26C84;
    case 178u: goto L_08A26C90;
    case 179u: goto L_08A26C98;
    case 180u: goto L_08A26CA0;
    case 181u: goto L_08A26CA4;
    case 182u: goto L_08A26CB8;
    case 183u: goto L_08A26CE0;
    case 184u: goto L_08A26CE8;
    case 185u: goto L_08A26CF8;
    case 186u: goto L_08A26D18;
    case 187u: goto L_08A26D24;
    case 188u: goto L_08A26D4C;
    case 189u: goto L_08A26D58;
    case 190u: goto L_08A26D60;
    case 191u: goto L_08A26D70;
    case 192u: goto L_08A26D90;
    case 193u: goto L_08A26D9C;
    case 194u: goto L_08A26DC4;
    case 195u: goto L_08A26DCC;
    case 196u: goto L_08A26DD4;
    case 197u: goto L_08A26DE0;
    case 198u: goto L_08A26DFC;
    case 199u: goto L_08A26E04;
    case 200u: goto L_08A26E10;
    case 201u: goto L_08A26E2C;
    case 202u: goto L_08A26E40;
    case 203u: goto L_08A26E48;
    case 204u: goto L_08A26E64;
    case 205u: goto L_08A26E74;
    case 206u: goto L_08A26E88;
    case 207u: goto L_08A26E90;
    case 208u: goto L_08A26E9C;
    case 209u: goto L_08A26EAC;
    case 210u: goto L_08A26EC4;
    case 211u: goto L_08A26EDC;
    case 212u: goto L_08A26EE4;
    case 213u: goto L_08A26EEC;
    case 214u: goto L_08A26EFC;
    case 215u: goto L_08A26F0C;
    case 216u: goto L_08A26F14;
    case 217u: goto L_08A26F1C;
    case 218u: goto L_08A26F24;
    case 219u: goto L_08A26F2C;
    case 220u: goto L_08A26F38;
    case 221u: goto L_08A26F50;
    case 222u: goto L_08A26F64;
    case 223u: goto L_08A26F70;
    case 224u: goto L_08A26F8C;
    case 225u: goto L_08A26F98;
    case 226u: goto L_08A26FB8;
    case 227u: goto L_08A26FE0;
    case 228u: goto L_08A26FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A26004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A2600C;
    }
L_08A2600C:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A26010;
L_08A26010:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A26024;
      }
      goto L_08A26018;
    }
L_08A26018:
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A26024;
    }
L_08A26024:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    aot_gpr[7] = (ctx.hi);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A26048;
      }
      goto L_08A26040;
    }
L_08A26040:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A26048;
    }
L_08A26048:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A2605C;
    }
L_08A2605C:
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A26068;
    }
L_08A26068:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2607C;
      }
      goto L_08A26070;
    }
L_08A26070:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A2607C;
    }
L_08A2607C:
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    aot_gpr[7] = (ctx.hi);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A260A0;
      }
      goto L_08A26098;
    }
L_08A26098:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A260A0;
    }
L_08A260A0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A260B8;
      }
      goto L_08A260B4;
    }
L_08A260B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[5]);
    goto L_08A260B8;
L_08A260B8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A260EC;
      }
      goto L_08A260C0;
    }
L_08A260C0:
    aot_gpr[31] = (0x08A260C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A260C8u) goto L_08A260C8;
    return;
L_08A260C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2056));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A260ECu);
    aot_gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A260ECu) goto L_08A260EC;
    return;
L_08A260EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A260F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2612C;
      }
      goto L_08A2610C;
    }
L_08A2610C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    goto L_08A26110;
L_08A26110:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A26134;
      }
      goto L_08A2611C;
    }
L_08A2611C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A26110;
      }
      goto L_08A2612C;
    }
L_08A2612C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26134:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2613C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26160u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2060));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A26160u) goto L_08A26160;
    return;
L_08A26160:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(152));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A26184u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26184u) goto L_08A26184;
    return;
L_08A26184:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A261EC;
      }
      goto L_08A261E4;
    }
L_08A261E4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    goto L_08A261EC;
L_08A261EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A26254;
      }
      goto L_08A261F4;
    }
L_08A261F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(200));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2620Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2620Cu) goto L_08A2620C;
    return;
L_08A2620C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A26250;
      }
      goto L_08A26248;
    }
L_08A26248:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08A26250;
      }
      goto L_08A26250;
    }
L_08A26250:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    goto L_08A26254;
L_08A26254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A26284u);
    aot_gpr[10] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26284u) goto L_08A26284;
    return;
L_08A26284:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A263A0;
      }
      goto L_08A26290;
    }
L_08A26290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A262A8;
      }
      goto L_08A262A0;
    }
L_08A262A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A262A8;
      }
      goto L_08A262A8;
    }
L_08A262A8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A263A0;
      }
      goto L_08A262B8;
    }
L_08A262B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(200));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A262D0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A262D0u) goto L_08A262D0;
    return;
L_08A262D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A262ECu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A262ECu) goto L_08A262EC;
    return;
L_08A262EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[23] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[30] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A26328u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26328u) goto L_08A26328;
    return;
L_08A26328:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A26358u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26358u) goto L_08A26358;
    return;
L_08A26358:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A26390u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26390u) goto L_08A26390;
    return;
L_08A26390:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A262B8;
      }
      goto L_08A263A0;
    }
L_08A263A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A263D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A263E4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A263E4u) goto L_08A263E4;
    return;
L_08A263E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19488));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A263F8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(300));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 292u, 0x089FDF94u>(ctx, &aot_mem) && ctx.pc == 0x08A263F8u) goto L_08A263F8;
    return;
L_08A263F8:
    aot_gpr[31] = (0x08A26400u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2650C;
L_08A26400:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2645C;
      }
      goto L_08A26430;
    }
L_08A26430:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19488));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A26448u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A26448u) goto L_08A26448;
    return;
L_08A26448:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2645C;
      }
      goto L_08A26454;
    }
L_08A26454:
    aot_gpr[31] = (0x08A2645Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2645Cu) goto L_08A2645C;
    return;
L_08A2645C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26470:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26478:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26480:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A2649Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A2649Cu) goto L_08A2649C;
    return;
L_08A2649C:
    aot_gpr[31] = (0x08A264A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 81u, 0x089FE658u>(ctx, &aot_mem) && ctx.pc == 0x08A264A4u) goto L_08A264A4;
    return;
L_08A264A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A264EC;
      }
      goto L_08A264B0;
    }
L_08A264B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(300));
      if (branch_taken) {
          goto L_08A264EC;
      }
      goto L_08A264B8;
    }
L_08A264B8:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[31] = (0x08A264C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 294u, 0x089FDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A264C4u) goto L_08A264C4;
    return;
L_08A264C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[31] = (0x08A264D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A264D0u) goto L_08A264D0;
    return;
L_08A264D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A264ECu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A264ECu) goto L_08A264EC;
    return;
L_08A264EC:
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
L_08A26504:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2650C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26530u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2080));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A26530u) goto L_08A26530;
    return;
L_08A26530:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A26564u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A26564u) goto L_08A26564;
    return;
L_08A26564:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19624));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A26578u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A265D4;
L_08A26578:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A2658Cu);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2096));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2658Cu) goto L_08A2658C;
    return;
L_08A2658C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2659Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2659Cu) goto L_08A2659C;
    return;
L_08A2659C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A265BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A265C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A265CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A265D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A265F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2116));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A265F8u) goto L_08A265F8;
    return;
L_08A265F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2660C:
    aot_gpr[2] = (2217u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(29040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2204));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A26658u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2136));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A26658u) goto L_08A26658;
    return;
L_08A26658:
    aot_gpr[31] = (0x08A26660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A26660u) goto L_08A26660;
    return;
L_08A26660:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2276));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2300));
    aot_gpr[31] = (0x08A26684u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2336));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 6u, 0x089F0064u>(ctx, &aot_mem) && ctx.pc == 0x08A26684u) goto L_08A26684;
    return;
L_08A26684:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17936)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A266C0;
      }
      goto L_08A26694;
    }
L_08A26694:
    aot_gpr[31] = (0x08A2669Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2669Cu) goto L_08A2669C;
    return;
L_08A2669C:
    aot_gpr[31] = (0x08A266A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 237u, 0x089EFEB4u>(ctx, &aot_mem) && ctx.pc == 0x08A266A4u) goto L_08A266A4;
    return;
L_08A266A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A266C0;
      }
      goto L_08A266AC;
    }
L_08A266AC:
    aot_gpr[31] = (0x08A266B4u);
    // nop
    goto L_08A26EAC;
L_08A266B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A266DC;
      }
      goto L_08A266BC;
    }
L_08A266BC:
    aot_gpr[20] = (0u | 0u);
    goto L_08A266C0;
L_08A266C0:
    aot_gpr[31] = (0x08A266C8u);
    aot_gpr[4] = (0u | 1084u);
    goto L_08A26E2C;
L_08A266C8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A26700;
      }
      goto L_08A266D4;
    }
L_08A266D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A26714;
      }
      goto L_08A266DC;
    }
L_08A266DC:
    aot_gpr[2] = (0u | 0u);
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
L_08A26700:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A26710u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A26824;
L_08A26710:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A26714;
L_08A26714:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A26738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2680C;
      }
      goto L_08A26758;
    }
L_08A26758:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1020)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A26790;
      }
      goto L_08A26770;
    }
L_08A26770:
    aot_gpr[31] = (0x08A26778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A26778u) goto L_08A26778;
    return;
L_08A26778:
    aot_gpr[31] = (0x08A26780u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26780u) goto L_08A26780;
    return;
L_08A26780:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1020)));
    aot_gpr[31] = (0x08A2678Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2678Cu) goto L_08A2678C;
    return;
L_08A2678C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1020), 0u);
    goto L_08A26790;
L_08A26790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17936)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A267C0;
      }
      goto L_08A267A0;
    }
L_08A267A0:
    aot_gpr[31] = (0x08A267A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A267A8u) goto L_08A267A8;
    return;
L_08A267A8:
    aot_gpr[31] = (0x08A267B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 237u, 0x089EFEB4u>(ctx, &aot_mem) && ctx.pc == 0x08A267B0u) goto L_08A267B0;
    return;
L_08A267B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A267C0;
      }
      goto L_08A267B8;
    }
L_08A267B8:
    aot_gpr[31] = (0x08A267C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 60u, 0x08A2840Cu>(ctx, &aot_mem) && ctx.pc == 0x08A267C0u) goto L_08A267C0;
    return;
L_08A267C0:
    aot_gpr[31] = (0x08A267C8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 186u, 0x08A27A40u>(ctx, &aot_mem) && ctx.pc == 0x08A267C8u) goto L_08A267C8;
    return;
L_08A267C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17936)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1008));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-17936), aot_gpr[5]);
    aot_gpr[31] = (0x08A267E0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x08A267E0u) goto L_08A267E0;
    return;
L_08A267E0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x08A267ECu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A267ECu) goto L_08A267EC;
    return;
L_08A267EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A267F8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 71u, 0x089F139Cu>(ctx, &aot_mem) && ctx.pc == 0x08A267F8u) goto L_08A267F8;
    return;
L_08A267F8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2680C;
      }
      goto L_08A26804;
    }
L_08A26804:
    aot_gpr[31] = (0x08A2680Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A26E74;
L_08A2680C:
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
L_08A26824:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A26850u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 77u, 0x089F13FCu>(ctx, &aot_mem) && ctx.pc == 0x08A26850u) goto L_08A26850;
    return;
L_08A26850:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19760));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A26864u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A26864u) goto L_08A26864;
    return;
L_08A26864:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
    aot_gpr[31] = (0x08A26870u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 3u, 0x08A46010u>(ctx, &aot_mem) && ctx.pc == 0x08A26870u) goto L_08A26870;
    return;
L_08A26870:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1068), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17936)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17936), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1032), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1004), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1036), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[31] = (0x08A268A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1060), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A268A8u) goto L_08A268A8;
    return;
L_08A268A8:
    aot_gpr[31] = (0x08A268B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A268B0u) goto L_08A268B0;
    return;
L_08A268B0:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 67u);
    aot_gpr[31] = (0x08A268CCu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A268CCu) goto L_08A268CC;
    return;
L_08A268CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1020), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A268E4;
      }
      goto L_08A268D8;
    }
L_08A268D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A268E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A268E4u) goto L_08A268E4;
    return;
L_08A268E4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(996), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1064), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A26900u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2400));
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 180u, 0x08A279E8u>(ctx, &aot_mem) && ctx.pc == 0x08A26900u) goto L_08A26900;
    return;
L_08A26900:
    aot_gpr[31] = (0x08A26908u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 241u, 0x08A27D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26908u) goto L_08A26908;
    return;
L_08A26908:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A26984;
      }
      goto L_08A26944;
    }
L_08A26944:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 6u);
    aot_gpr[31] = (0x08A26958u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2408));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A26958u) goto L_08A26958;
    return;
L_08A26958:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A26968;
      }
      goto L_08A26960;
    }
L_08A26960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A26984;
      }
      goto L_08A26968;
    }
L_08A26968:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x08A26978u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2416));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A26978u) goto L_08A26978;
    return;
L_08A26978:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A26984;
      }
      goto L_08A26980;
    }
L_08A26980:
    aot_gpr[17] = (0u | 1u);
    goto L_08A26984;
L_08A26984:
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
L_08A2699C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1072), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[30] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A269FC;
      }
      goto L_08A269F4;
    }
L_08A269F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A26A84;
      }
      goto L_08A269FC;
    }
L_08A269FC:
    aot_gpr[31] = (0x08A26A04u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A26A04u) goto L_08A26A04;
    return;
L_08A26A04:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 6u);
    aot_gpr[31] = (0x08A26A18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2408));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A26A18u) goto L_08A26A18;
    return;
L_08A26A18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A26A58;
      }
      goto L_08A26A20;
    }
L_08A26A20:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08A26A2Cu);
    aot_gpr[4] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 171u, 0x08A29B50u>(ctx, &aot_mem) && ctx.pc == 0x08A26A2Cu) goto L_08A26A2C;
    return;
L_08A26A2C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[18]);
        goto L_08A26A50;
    }
    goto L_08A26A38;
L_08A26A38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1032)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A26A48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 179u, 0x08A29BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A26A48u) goto L_08A26A48;
    return;
L_08A26A48:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    goto L_08A26A50;
L_08A26A50:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[21]);
      if (branch_taken) {
          goto L_08A26A84;
      }
      goto L_08A26A58;
    }
L_08A26A58:
    aot_gpr[31] = (0x08A26A60u);
    aot_gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 43u, 0x08A292ECu>(ctx, &aot_mem) && ctx.pc == 0x08A26A60u) goto L_08A26A60;
    return;
L_08A26A60:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[18]);
        goto L_08A26A80;
    }
    goto L_08A26A6C;
L_08A26A6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1032)));
    aot_gpr[31] = (0x08A26A78u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 51u, 0x08A2936Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26A78u) goto L_08A26A78;
    return;
L_08A26A78:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    goto L_08A26A80;
L_08A26A80:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
    goto L_08A26A84;
L_08A26A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1004), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1000), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1040), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1052), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(676)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1076), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[20] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(996), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A26AD8;
      }
      goto L_08A26AAC;
    }
L_08A26AAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1036)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08A26ADC;
      }
      goto L_08A26AB8;
    }
L_08A26AB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A26AD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26AD4u) goto L_08A26AD4;
    return;
L_08A26AD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1036), 0u);
    goto L_08A26AD8;
L_08A26AD8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    goto L_08A26ADC;
L_08A26ADC:
    aot_gpr[31] = (0x08A26AE4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A26AE4u) goto L_08A26AE4;
    return;
L_08A26AE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[17] + static_cast<std::uint32_t>(728));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(992), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(680));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 33u);
    goto L_08A26AFC;
L_08A26AFC:
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[22] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A26AFC;
      }
      goto L_08A26B20;
    }
L_08A26B20:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_08A26B34;
      }
      goto L_08A26B28;
    }
L_08A26B28:
    aot_gpr[31] = (0x08A26B30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 43u, 0x08A272B0u>(ctx, &aot_mem) && ctx.pc == 0x08A26B30u) goto L_08A26B30;
    return;
L_08A26B30:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(1008));
    goto L_08A26B34;
L_08A26B34:
    aot_gpr[31] = (0x08A26B3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26B3Cu) goto L_08A26B3C;
    return;
L_08A26B3C:
    aot_gpr[31] = (0x08A26B44u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A26B44u) goto L_08A26B44;
    return;
L_08A26B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1068), aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A26B70u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26B70u) goto L_08A26B70;
    return;
L_08A26B70:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26BA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26BB8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A26BB8u) goto L_08A26BB8;
    return;
L_08A26BB8:
    aot_gpr[31] = (0x08A26BC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 213u, 0x08A27BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A26BC0u) goto L_08A26BC0;
    return;
L_08A26BC0:
    aot_gpr[31] = (0x08A26BC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 42u, 0x08A272A8u>(ctx, &aot_mem) && ctx.pc == 0x08A26BC8u) goto L_08A26BC8;
    return;
L_08A26BC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A26BE0;
      }
      goto L_08A26BD8;
    }
L_08A26BD8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A26C1C;
      }
      goto L_08A26BE0;
    }
L_08A26BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A26C1C;
      }
      goto L_08A26BEC;
    }
L_08A26BEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A26C14u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26C14u) goto L_08A26C14;
    return;
L_08A26C14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1004), 0u);
    goto L_08A26C1C;
L_08A26C1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26C2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A26C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 42u, 0x08A272A8u>(ctx, &aot_mem) && ctx.pc == 0x08A26C3Cu) goto L_08A26C3C;
    return;
L_08A26C3C:
    aot_gpr[4] = (aot_gpr[2] ^ 2u);
    aot_gpr[5] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1076)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A26CA4;
      }
      goto L_08A26C7C;
    }
L_08A26C7C:
    aot_gpr[31] = (0x08A26C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 42u, 0x08A272A8u>(ctx, &aot_mem) && ctx.pc == 0x08A26C84u) goto L_08A26C84;
    return;
L_08A26C84:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A26CA0;
      }
      goto L_08A26C90;
    }
L_08A26C90:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A26CA0;
      }
      goto L_08A26C98;
    }
L_08A26C98:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A26CA4;
      }
      goto L_08A26CA0;
    }
L_08A26CA0:
    aot_gpr[16] = (0u | 1u);
    goto L_08A26CA4;
L_08A26CA4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26CB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A26CE0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26CE0u) goto L_08A26CE0;
    return;
L_08A26CE0:
    aot_gpr[31] = (0x08A26CE8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 241u, 0x08A27D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26CE8u) goto L_08A26CE8;
    return;
L_08A26CE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26CF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26D18u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26D18u) goto L_08A26D18;
    return;
L_08A26D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_08A26D58;
    }
    goto L_08A26D24;
L_08A26D24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A26D4Cu);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26D4Cu) goto L_08A26D4C;
    return;
L_08A26D4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1004), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A26D58;
L_08A26D58:
    aot_gpr[31] = (0x08A26D60u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 39u, 0x08A27254u>(ctx, &aot_mem) && ctx.pc == 0x08A26D60u) goto L_08A26D60;
    return;
L_08A26D60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26D70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26D90u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26D90u) goto L_08A26D90;
    return;
L_08A26D90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A26DCC;
      }
      goto L_08A26D9C;
    }
L_08A26D9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A26DC4u);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26DC4u) goto L_08A26DC4;
    return;
L_08A26DC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1004), 0u);
    goto L_08A26DCC;
L_08A26DCC:
    aot_gpr[31] = (0x08A26DD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A26F50;
L_08A26DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1028), 0u);
        goto L_08A26E04;
    }
    goto L_08A26DE0;
L_08A26DE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A26DFCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26DFCu) goto L_08A26DFC;
    return;
L_08A26DFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1028), 0u);
    goto L_08A26E04;
L_08A26E04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A26E10u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 39u, 0x08A27254u>(ctx, &aot_mem) && ctx.pc == 0x08A26E10u) goto L_08A26E10;
    return;
L_08A26E10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1076), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26E40u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A26E40u) goto L_08A26E40;
    return;
L_08A26E40:
    aot_gpr[31] = (0x08A26E48u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26E48u) goto L_08A26E48;
    return;
L_08A26E48:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 38u);
    aot_gpr[31] = (0x08A26E64u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A26E64u) goto L_08A26E64;
    return;
L_08A26E64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26E74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A26E88u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A26E88u) goto L_08A26E88;
    return;
L_08A26E88:
    aot_gpr[31] = (0x08A26E90u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26E90u) goto L_08A26E90;
    return;
L_08A26E90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A26E9Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A26E9Cu) goto L_08A26E9C;
    return;
L_08A26E9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26EAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A26EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 184u, 0x0898DD28u>(ctx, &aot_mem) && ctx.pc == 0x08A26EC4u) goto L_08A26EC4;
    return;
L_08A26EC4:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2424));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A26EDCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26EDCu) goto L_08A26EDC;
    return;
L_08A26EDC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A26F14;
      }
      goto L_08A26EE4;
    }
L_08A26EE4:
    aot_gpr[31] = (0x08A26EECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2468));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A26EECu) goto L_08A26EEC;
    return;
L_08A26EEC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A26EFCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2588));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A26EFCu) goto L_08A26EFC;
    return;
L_08A26EFC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A26F0Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2648));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A26F0Cu) goto L_08A26F0C;
    return;
L_08A26F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A26F0C;
      }
      goto L_08A26F14;
    }
L_08A26F14:
    aot_gpr[31] = (0x08A26F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 214u, 0x0898DF50u>(ctx, &aot_mem) && ctx.pc == 0x08A26F1Cu) goto L_08A26F1C;
    return;
L_08A26F1C:
    aot_gpr[31] = (0x08A26F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A26F24u) goto L_08A26F24;
    return;
L_08A26F24:
    aot_gpr[31] = (0x08A26F2Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 202u, 0x0898DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A26F2Cu) goto L_08A26F2C;
    return;
L_08A26F2C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A26F38u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A26F38u) goto L_08A26F38;
    return;
L_08A26F38:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A26F8C;
      }
      goto L_08A26F64;
    }
L_08A26F64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1036)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A26F8C;
      }
      goto L_08A26F70;
    }
L_08A26F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1036), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A26F8Cu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26F8Cu) goto L_08A26F8C;
    return;
L_08A26F8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A26F98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A26FE8;
      }
      goto L_08A26FB8;
    }
L_08A26FB8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A26FE0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A26FE0u) goto L_08A26FE0;
    return;
L_08A26FE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1004), 0u);
    goto L_08A26FE8;
L_08A26FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A27000u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0546(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0546_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_546(Runtime &runtime) {
    runtime.register_generated_unit(546u, 0x08A26000u, 4096u, &recomp_unit_0546, &recomp_unit_0546_entry);
    runtime.register_function(0x08A26004u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2600Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26010u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26018u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26024u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26040u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26048u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2605Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26068u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26070u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2607Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26098u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260A0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260B4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260B8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260C0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260C8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260ECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A260F8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2610Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26110u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2611Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2612Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26134u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2613Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26160u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26184u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26194u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A261E4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A261ECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A261F4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2620Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26248u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26250u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26254u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26284u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26290u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A262A0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A262A8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A262B8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A262D0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A262ECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26328u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26358u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26390u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A263A0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A263D0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A263E4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A263F8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26400u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26414u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26430u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26448u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26454u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2645Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26470u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26478u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26480u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2649Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A264A4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A264B0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A264B8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A264C4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A264D0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A264ECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26504u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2650Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26530u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26544u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26564u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26578u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2658Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2659Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A265BCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A265C4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A265CCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A265D4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A265F8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2660Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26618u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26658u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26660u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26684u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26694u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2669Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266A4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266ACu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266B4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266BCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266C0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266C8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266D4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A266DCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26700u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26710u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26714u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26738u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26758u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26770u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26778u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26780u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2678Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26790u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267A0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267A8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267B0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267B8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267C0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267C8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267E0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267ECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A267F8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26804u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2680Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26824u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26850u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26864u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26870u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A268A8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A268B0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A268CCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A268D8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A268E4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26900u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26908u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26928u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26944u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26958u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26960u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26968u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26978u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26980u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26984u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A2699Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A269F4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A269FCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A04u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A18u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A20u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A2Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A38u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A48u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A50u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A58u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A60u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A6Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A78u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A80u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26A84u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26AACu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26AB8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26AD4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26AD8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26ADCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26AE4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26AFCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B20u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B28u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B30u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B34u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B3Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B44u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26B70u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BA4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BB8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BC0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BC8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BD8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BE0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26BECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C14u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C1Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C2Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C3Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C64u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C7Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C84u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C90u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26C98u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26CA0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26CA4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26CB8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26CE0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26CE8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26CF8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D18u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D24u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D4Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D58u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D60u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D70u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D90u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26D9Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26DC4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26DCCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26DD4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26DE0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26DFCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E04u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E10u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E2Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E40u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E48u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E64u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E74u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E88u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E90u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26E9Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26EACu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26EC4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26EDCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26EE4u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26EECu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26EFCu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F0Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F14u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F1Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F24u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F2Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F38u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F50u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F64u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F70u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F8Cu, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26F98u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26FB8u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26FE0u, &recomp_unit_0546, "recomp_unit_0546");
    runtime.register_function(0x08A26FE8u, &recomp_unit_0546, "recomp_unit_0546");
}
} // namespace psprecomp
