#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0010[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12,
    0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0,
    24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51,
    52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 73, 0, 0, 0, 0, 74, 0,
    0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88,
    0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 93, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
};
void recomp_unit_0010_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0880E000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0010[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880E000;
    case 2u: goto L_0880E008;
    case 3u: goto L_0880E058;
    case 4u: goto L_0880E064;
    case 5u: goto L_0880E070;
    case 6u: goto L_0880E09C;
    case 7u: goto L_0880E0A8;
    case 8u: goto L_0880E0BC;
    case 9u: goto L_0880E0C4;
    case 10u: goto L_0880E0DC;
    case 11u: goto L_0880E0F4;
    case 12u: goto L_0880E0FC;
    case 13u: goto L_0880E104;
    case 14u: goto L_0880E10C;
    case 15u: goto L_0880E114;
    case 16u: goto L_0880E11C;
    case 17u: goto L_0880E124;
    case 18u: goto L_0880E12C;
    case 19u: goto L_0880E134;
    case 20u: goto L_0880E13C;
    case 21u: goto L_0880E15C;
    case 22u: goto L_0880E164;
    case 23u: goto L_0880E16C;
    case 24u: goto L_0880E180;
    case 25u: goto L_0880E188;
    case 26u: goto L_0880E194;
    case 27u: goto L_0880E19C;
    case 28u: goto L_0880E1B0;
    case 29u: goto L_0880E1B8;
    case 30u: goto L_0880E1C0;
    case 31u: goto L_0880E1D4;
    case 32u: goto L_0880E1E0;
    case 33u: goto L_0880E1E8;
    case 34u: goto L_0880E1FC;
    case 35u: goto L_0880E208;
    case 36u: goto L_0880E210;
    case 37u: goto L_0880E224;
    case 38u: goto L_0880E258;
    case 39u: goto L_0880E260;
    case 40u: goto L_0880E284;
    case 41u: goto L_0880E2D0;
    case 42u: goto L_0880E2DC;
    case 43u: goto L_0880E2E8;
    case 44u: goto L_0880E308;
    case 45u: goto L_0880E310;
    case 46u: goto L_0880E32C;
    case 47u: goto L_0880E340;
    case 48u: goto L_0880E348;
    case 49u: goto L_0880E354;
    case 50u: goto L_0880E360;
    case 51u: goto L_0880E37C;
    case 52u: goto L_0880E380;
    case 53u: goto L_0880E388;
    case 54u: goto L_0880E390;
    case 55u: goto L_0880E3AC;
    case 56u: goto L_0880E3C0;
    case 57u: goto L_0880E3D8;
    case 58u: goto L_0880E3F4;
    case 59u: goto L_0880E404;
    case 60u: goto L_0880E41C;
    case 61u: goto L_0880E420;
    case 62u: goto L_0880E438;
    case 63u: goto L_0880E448;
    case 64u: goto L_0880E454;
    case 65u: goto L_0880E458;
    case 66u: goto L_0880E474;
    case 67u: goto L_0880E498;
    case 68u: goto L_0880E4A0;
    case 69u: goto L_0880E4A4;
    case 70u: goto L_0880E4AC;
    case 71u: goto L_0880E4D4;
    case 72u: goto L_0880E4E0;
    case 73u: goto L_0880E4E4;
    case 74u: goto L_0880E4F8;
    case 75u: goto L_0880E504;
    case 76u: goto L_0880E50C;
    case 77u: goto L_0880E514;
    case 78u: goto L_0880E51C;
    case 79u: goto L_0880E524;
    case 80u: goto L_0880E52C;
    case 81u: goto L_0880E534;
    case 82u: goto L_0880E54C;
    case 83u: goto L_0880E554;
    case 84u: goto L_0880E55C;
    case 85u: goto L_0880E564;
    case 86u: goto L_0880E56C;
    case 87u: goto L_0880E574;
    case 88u: goto L_0880E57C;
    case 89u: goto L_0880E584;
    case 90u: goto L_0880E58C;
    case 91u: goto L_0880E594;
    case 92u: goto L_0880E5B0;
    case 93u: goto L_0880E5B4;
    case 94u: goto L_0880E5BC;
    case 95u: goto L_0880E5C8;
    case 96u: goto L_0880E5D0;
    case 97u: goto L_0880E5D8;
    case 98u: goto L_0880E5EC;
    case 99u: goto L_0880E604;
    case 100u: goto L_0880E624;
    case 101u: goto L_0880E634;
    case 102u: goto L_0880E648;
    case 103u: goto L_0880E65C;
    case 104u: goto L_0880E700;
    case 105u: goto L_0880E71C;
    case 106u: goto L_0880E730;
    case 107u: goto L_0880E748;
    case 108u: goto L_0880E754;
    case 109u: goto L_0880E778;
    case 110u: goto L_0880E7BC;
    case 111u: goto L_0880E7D0;
    case 112u: goto L_0880E7E0;
    case 113u: goto L_0880E7EC;
    case 114u: goto L_0880E810;
    case 115u: goto L_0880E82C;
    case 116u: goto L_0880E830;
    case 117u: goto L_0880E874;
    case 118u: goto L_0880E888;
    case 119u: goto L_0880E8A4;
    case 120u: goto L_0880E8AC;
    case 121u: goto L_0880E8F0;
    case 122u: goto L_0880E90C;
    case 123u: goto L_0880E91C;
    case 124u: goto L_0880E944;
    case 125u: goto L_0880E964;
    case 126u: goto L_0880E970;
    case 127u: goto L_0880E97C;
    case 128u: goto L_0880E988;
    case 129u: goto L_0880E9C0;
    case 130u: goto L_0880E9DC;
    case 131u: goto L_0880E9F8;
    case 132u: goto L_0880EA2C;
    case 133u: goto L_0880EA38;
    case 134u: goto L_0880EA78;
    case 135u: goto L_0880EA80;
    case 136u: goto L_0880EAB0;
    case 137u: goto L_0880EB90;
    case 138u: goto L_0880EBA8;
    case 139u: goto L_0880EBC0;
    case 140u: goto L_0880EBD8;
    case 141u: goto L_0880EBF0;
    case 142u: goto L_0880EC08;
    case 143u: goto L_0880EC0C;
    case 144u: goto L_0880EC10;
    case 145u: goto L_0880EC18;
    case 146u: goto L_0880EC3C;
    case 147u: goto L_0880EC5C;
    case 148u: goto L_0880EC7C;
    case 149u: goto L_0880EC84;
    case 150u: goto L_0880EC88;
    case 151u: goto L_0880ECDC;
    case 152u: goto L_0880ECE8;
    case 153u: goto L_0880ED30;
    case 154u: goto L_0880ED60;
    case 155u: goto L_0880ED74;
    case 156u: goto L_0880EE04;
    case 157u: goto L_0880EE18;
    case 158u: goto L_0880EE2C;
    case 159u: goto L_0880EE6C;
    case 160u: goto L_0880EE78;
    case 161u: goto L_0880EE94;
    case 162u: goto L_0880EEAC;
    case 163u: goto L_0880EEC8;
    case 164u: goto L_0880EED8;
    case 165u: goto L_0880EF60;
    case 166u: goto L_0880EF80;
    case 167u: goto L_0880EF9C;
    case 168u: goto L_0880EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880E000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[17] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[9] & 255u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(272), aot_gpr[7]);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1136), aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2032)));
      if (branch_taken) {
          goto L_0880E064;
      }
      goto L_0880E058;
    }
L_0880E058:
    aot_gpr[5] = (aot_gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0880E070;
      }
      goto L_0880E064;
    }
L_0880E064:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_0880E070;
L_0880E070:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(2032), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 4u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22188), aot_gpr[7]);
      if (branch_taken) {
          goto L_0880E0BC;
      }
      goto L_0880E09C;
    }
L_0880E09C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880E0A8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 156u, 0x08A4AB80u>(ctx, &aot_mem) && ctx.pc == 0x0880E0A8u) goto L_0880E0A8;
    return;
L_0880E0A8:
    aot_gpr[6] = (2213u << 16u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880E0BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-21632));
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 150u, 0x08A4AB00u>(ctx, &aot_mem) && ctx.pc == 0x0880E0BCu) goto L_0880E0BC;
    return;
L_0880E0BC:
    aot_gpr[31] = (0x0880E0C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 144u, 0x0880CC24u>(ctx, &aot_mem) && ctx.pc == 0x0880E0C4u) goto L_0880E0C4;
    return;
L_0880E0C4:
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
L_0880E0DC:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
      if (branch_taken) {
          goto L_0880E0FC;
      }
      goto L_0880E0F4;
    }
L_0880E0F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | 1u);
      if (branch_taken) {
          goto L_0880E104;
      }
      goto L_0880E0FC;
    }
L_0880E0FC:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[8]);
    goto L_0880E104;
L_0880E104:
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2096), aot_gpr[5]);
      if (branch_taken) {
          goto L_0880E114;
      }
      goto L_0880E10C;
    }
L_0880E10C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | 2u);
      if (branch_taken) {
          goto L_0880E11C;
      }
      goto L_0880E114;
    }
L_0880E114:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    goto L_0880E11C;
L_0880E11C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2096), aot_gpr[5]);
      if (branch_taken) {
          goto L_0880E12C;
      }
      goto L_0880E124;
    }
L_0880E124:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | 4u);
      if (branch_taken) {
          goto L_0880E134;
      }
      goto L_0880E12C;
    }
L_0880E12C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    goto L_0880E134;
L_0880E134:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2096), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880E188;
      }
      goto L_0880E15C;
    }
L_0880E15C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880E210;
      }
      goto L_0880E164;
    }
L_0880E164:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_0880E1B8;
      }
      goto L_0880E16C;
    }
L_0880E16C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2100), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E180u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 145u, 0x0880CC58u>(ctx, &aot_mem) && ctx.pc == 0x0880E180u) goto L_0880E180;
    return;
L_0880E180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E210;
      }
      goto L_0880E188;
    }
L_0880E188:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E1E8;
      }
      goto L_0880E194;
    }
L_0880E194:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E210;
      }
      goto L_0880E19C;
    }
L_0880E19C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2100), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E1B0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 145u, 0x0880CC58u>(ctx, &aot_mem) && ctx.pc == 0x0880E1B0u) goto L_0880E1B0;
    return;
L_0880E1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E210;
      }
      goto L_0880E1B8;
    }
L_0880E1B8:
    aot_gpr[31] = (0x0880E1C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 159u, 0x0880DDE4u>(ctx, &aot_mem) && ctx.pc == 0x0880E1C0u) goto L_0880E1C0;
    return;
L_0880E1C0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2100), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E1D4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 145u, 0x0880CC58u>(ctx, &aot_mem) && ctx.pc == 0x0880E1D4u) goto L_0880E1D4;
    return;
L_0880E1D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E1E0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 51u, 0x0880D2E8u>(ctx, &aot_mem) && ctx.pc == 0x0880E1E0u) goto L_0880E1E0;
    return;
L_0880E1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E210;
      }
      goto L_0880E1E8;
    }
L_0880E1E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2100), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E1FCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 145u, 0x0880CC58u>(ctx, &aot_mem) && ctx.pc == 0x0880E1FCu) goto L_0880E1FC;
    return;
L_0880E1FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E208u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 51u, 0x0880D2E8u>(ctx, &aot_mem) && ctx.pc == 0x0880E208u) goto L_0880E208;
    return;
L_0880E208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E210;
      }
      goto L_0880E210;
    }
L_0880E210:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E224:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2103))))));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[22])) && aot_fpr[12] == aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880E310;
      }
      goto L_0880E258;
    }
L_0880E258:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_0880E310;
      }
      goto L_0880E260;
    }
L_0880E260:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22164)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22168)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22172)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (0u | 15u);
    aot_gpr[31] = (0x0880E284u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22176)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 134u, 0x088639D8u>(ctx, &aot_mem) && ctx.pc == 0x0880E284u) goto L_0880E284;
    return;
L_0880E284:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (0u | 15u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0880E2D0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 133u, 0x088639ACu>(ctx, &aot_mem) && ctx.pc == 0x0880E2D0u) goto L_0880E2D0;
    return;
L_0880E2D0:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x0880E2DCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0880E2DCu) goto L_0880E2DC;
    return;
L_0880E2DC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E308;
      }
      goto L_0880E2E8;
    }
L_0880E2E8:
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (0u | 15u);
    aot_gpr[31] = (0x0880E308u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0880E308u) goto L_0880E308;
    return;
L_0880E308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E458;
      }
      goto L_0880E310;
    }
L_0880E310:
    aot_gpr[5] = (16281u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (16320u << 16u);
      if (branch_taken) {
          goto L_0880E388;
      }
      goto L_0880E32C;
    }
L_0880E32C:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880E388;
      }
      goto L_0880E340;
    }
L_0880E340:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880E388;
      }
      goto L_0880E348;
    }
L_0880E348:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x0880E354u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0880E354u) goto L_0880E354;
    return;
L_0880E354:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E380;
      }
      goto L_0880E360;
    }
L_0880E360:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 15u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0880E37Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0880E37Cu) goto L_0880E37C;
    return;
L_0880E37C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0880E380;
L_0880E380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E458;
      }
      goto L_0880E388;
    }
L_0880E388:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880E458;
      }
      goto L_0880E390;
    }
L_0880E390:
    aot_gpr[5] = (16345u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0880E3C0;
      }
      goto L_0880E3AC;
    }
L_0880E3AC:
    aot_fpr[20] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0880E3F4;
      }
      goto L_0880E3C0;
    }
L_0880E3C0:
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880E3F4;
      }
      goto L_0880E3D8;
    }
L_0880E3D8:
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[20] = aot_fpr[20] - aot_fpr[13];
    goto L_0880E3F4;
L_0880E3F4:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880E420;
      }
      goto L_0880E404;
    }
L_0880E404:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x0880E41Cu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x0880E41Cu) goto L_0880E41C;
    return;
L_0880E41C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
    goto L_0880E420;
L_0880E420:
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880E458;
      }
      goto L_0880E438;
    }
L_0880E438:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880E458;
      }
      goto L_0880E448;
    }
L_0880E448:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2103))))));
    aot_gpr[31] = (0x0880E454u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0880E454u) goto L_0880E454;
    return;
L_0880E454:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_0880E458;
L_0880E458:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2101)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880E4A4;
      }
      goto L_0880E498;
    }
L_0880E498:
    aot_gpr[31] = (0x0880E4A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880E13C;
L_0880E4A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    goto L_0880E4A4;
L_0880E4A4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    goto L_0880E4AC;
L_0880E4AC:
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2032)));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E4E4;
      }
      goto L_0880E4D4;
    }
L_0880E4D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E4E0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 126u, 0x0880DA60u>(ctx, &aot_mem) && ctx.pc == 0x0880E4E0u) goto L_0880E4E0;
    return;
L_0880E4E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    goto L_0880E4E4;
L_0880E4E4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880E4AC;
      }
      goto L_0880E4F8;
    }
L_0880E4F8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E51C;
      }
      goto L_0880E504;
    }
L_0880E504:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880E5D8;
      }
      goto L_0880E50C;
    }
L_0880E50C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0880E534;
      }
      goto L_0880E514;
    }
L_0880E514:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880E5D8;
      }
      goto L_0880E51C;
    }
L_0880E51C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E574;
      }
      goto L_0880E524;
    }
L_0880E524:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E594;
      }
      goto L_0880E52C;
    }
L_0880E52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5D8;
      }
      goto L_0880E534;
    }
L_0880E534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E554;
      }
      goto L_0880E54C;
    }
L_0880E54C:
    aot_gpr[31] = (0x0880E554u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880E224;
L_0880E554:
    aot_gpr[31] = (0x0880E55Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 80u, 0x0880D674u>(ctx, &aot_mem) && ctx.pc == 0x0880E55Cu) goto L_0880E55C;
    return;
L_0880E55C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E56C;
      }
      goto L_0880E564;
    }
L_0880E564:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0880E56C;
L_0880E56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5D8;
      }
      goto L_0880E574;
    }
L_0880E574:
    aot_gpr[31] = (0x0880E57Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 80u, 0x0880D674u>(ctx, &aot_mem) && ctx.pc == 0x0880E57Cu) goto L_0880E57C;
    return;
L_0880E57C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E58C;
      }
      goto L_0880E584;
    }
L_0880E584:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0880E58C;
L_0880E58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5D8;
      }
      goto L_0880E594;
    }
L_0880E594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2103))))));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880E5B4;
      }
      goto L_0880E5B0;
    }
L_0880E5B0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(0u));
    goto L_0880E5B4;
L_0880E5B4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880E5D0;
      }
      goto L_0880E5BC;
    }
L_0880E5BC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0880E5C8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0880E5C8u) goto L_0880E5C8;
    return;
L_0880E5C8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0880E5D0;
L_0880E5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5D8;
      }
      goto L_0880E5D8;
    }
L_0880E5D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E5EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    goto L_0880E604;
L_0880E604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E634;
      }
      goto L_0880E624;
    }
L_0880E624:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0880E634u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0880E634u) goto L_0880E634;
    return;
L_0880E634:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E604;
      }
      goto L_0880E648;
    }
L_0880E648:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E65C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[30]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[30] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2096)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(2096), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E700u);
    aot_gpr[9] = (0u | 0u);
    goto L_0880E008;
L_0880E700:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0880E71Cu);
    aot_gpr[9] = (0u | 0u);
    goto L_0880E008;
L_0880E71C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0880E730u);
    aot_gpr[7] = (0u | 0u);
    goto L_0880E0DC;
L_0880E730:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_0880E7D0;
      }
      goto L_0880E748;
    }
L_0880E748:
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0880E754;
L_0880E754:
    aot_gpr[9] = (aot_gpr[4] & 255u);
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1776)));
    aot_gpr[9] = (aot_gpr[7] << (aot_gpr[9] & 31u));
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1776), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880E7BC;
      }
      goto L_0880E778;
    }
L_0880E778:
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1520)));
    aot_gpr[9] = (aot_gpr[7] << (aot_gpr[9] & 31u));
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    aot_gpr[11] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1520), aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[11] << 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1904)));
    aot_gpr[10] = (aot_gpr[6] << (aot_gpr[10] & 31u));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1904), aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[11] << 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1776)));
    aot_gpr[10] = (aot_gpr[6] << (aot_gpr[10] & 31u));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1776), aot_gpr[9]);
    goto L_0880E7BC;
L_0880E7BC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E754;
      }
      goto L_0880E7D0;
    }
L_0880E7D0:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_0880E888;
      }
      goto L_0880E7E0;
    }
L_0880E7E0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[16] = (aot_gpr[30] | 0u);
    goto L_0880E7EC;
L_0880E7EC:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0880E810u);
    aot_gpr[9] = (0u | 0u);
    goto L_0880E008;
L_0880E810:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E874;
      }
      goto L_0880E82C;
    }
L_0880E82C:
    aot_gpr[5] = (aot_gpr[21] & 255u);
    goto L_0880E830;
L_0880E830:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 1u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1776)));
    aot_gpr[6] = (aot_gpr[18] << (aot_gpr[6] & 31u));
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1776), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[21] & 255u);
      if (branch_taken) {
          goto L_0880E830;
      }
      goto L_0880E874;
    }
L_0880E874:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880E7EC;
      }
      goto L_0880E888;
    }
L_0880E888:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0880E8F0;
      }
      goto L_0880E8A4;
    }
L_0880E8A4:
    aot_gpr[6] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[21] & 255u);
    goto L_0880E8AC;
L_0880E8AC:
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] << 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1520)));
    aot_gpr[8] = (aot_gpr[4] << (aot_gpr[8] & 31u));
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1520), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[21] & 255u);
      if (branch_taken) {
          goto L_0880E8AC;
      }
      goto L_0880E8F0;
    }
L_0880E8F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(2102), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(2102)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E964;
      }
      goto L_0880E90C;
    }
L_0880E90C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[22] | 0u);
    goto L_0880E91C;
L_0880E91C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(944), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1072), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1072)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1008), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0880E944u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 67u, 0x0894B4C8u>(ctx, &aot_mem) && ctx.pc == 0x0880E944u) goto L_0880E944;
    return;
L_0880E944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(2102)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880E91C;
      }
      goto L_0880E964;
    }
L_0880E964:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EA78;
      }
      goto L_0880E970;
    }
L_0880E970:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EA78;
      }
      goto L_0880E97C;
    }
L_0880E97C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EA78;
      }
      goto L_0880E988;
    }
L_0880E988:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(912), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880E9C0u);
    aot_gpr[9] = (0u | 0u);
    goto L_0880E008;
L_0880E9C0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0880E9DCu);
    aot_gpr[9] = (0u | 0u);
    goto L_0880E008;
L_0880E9DC:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0880E9F8u);
    aot_gpr[9] = (0u | 0u);
    goto L_0880E008;
L_0880E9F8:
    aot_gpr[4] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2032)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2032), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0880EA78;
      }
      goto L_0880EA2C;
    }
L_0880EA2C:
    aot_gpr[6] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[21] & 255u);
    goto L_0880EA38;
L_0880EA38:
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[4] & 255u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1648)));
    aot_gpr[9] = (aot_gpr[5] << (aot_gpr[9] & 31u));
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1648), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[21] & 255u);
      if (branch_taken) {
          goto L_0880EA38;
      }
      goto L_0880EA78;
    }
L_0880EA78:
    aot_gpr[31] = (0x0880EA80u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 145u, 0x0880CC58u>(ctx, &aot_mem) && ctx.pc == 0x0880EA80u) goto L_0880EA80;
    return;
L_0880EA80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880EAB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (16512u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = aot_fpr[13] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[16] = aot_fpr[12] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[17] = aot_fpr[14] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2064)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[20]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[19] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0880EC0C;
      }
      goto L_0880EB90;
    }
L_0880EB90:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2080)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (aot_gpr[5] & 255u);
        goto L_0880EC10;
    }
    goto L_0880EBA8;
L_0880EBA8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2068)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (aot_gpr[5] & 255u);
        goto L_0880EC10;
    }
    goto L_0880EBC0;
L_0880EBC0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2084)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (aot_gpr[5] & 255u);
        goto L_0880EC10;
    }
    goto L_0880EBD8;
L_0880EBD8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2072)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (aot_gpr[5] & 255u);
        goto L_0880EC10;
    }
    goto L_0880EBF0;
L_0880EBF0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2088)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0880EC10;
      }
      goto L_0880EC08;
    }
L_0880EC08:
    aot_gpr[5] = (0u | 1u);
    goto L_0880EC0C;
L_0880EC0C:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_0880EC10;
L_0880EC10:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 6u, 0x0880F0E0u>(ctx, &aot_mem); return;
      }
      goto L_0880EC18;
    }
L_0880EC18:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    aot_gpr[6] = (16320u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0880EC84;
      }
      goto L_0880EC3C;
    }
L_0880EC3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(704)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7456));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0880EC88;
    }
    goto L_0880EC5C;
L_0880EC5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (aot_gpr[5] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0880EC88;
    }
    goto L_0880EC7C;
L_0880EC7C:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22292), aot_gpr[21]);
    goto L_0880EC84;
L_0880EC84:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880EC88;
L_0880EC88:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (16968u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[16] - aot_fpr[12];
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 9u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x0880ECDCu);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 113u, 0x0894AD80u>(ctx, &aot_mem) && ctx.pc == 0x0880ECDCu) goto L_0880ECDC;
    return;
L_0880ECDC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 6u, 0x0880F0E0u>(ctx, &aot_mem); return;
      }
      goto L_0880ECE8;
    }
L_0880ECE8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, 0u);
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    aot_fpr[26] = aot_fpr[26] + aot_fpr[13];
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[23] = (2218u << 16u);
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_0880ED60;
      }
      goto L_0880ED30;
    }
L_0880ED30:
    aot_fpr[13] = aot_fpr[26] - aot_fpr[12];
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
      if (branch_taken) {
          goto L_0880ED74;
      }
      goto L_0880ED60;
    }
L_0880ED60:
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (0u | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    goto L_0880ED74;
L_0880ED74:
    aot_fpr[14] = aot_fpr[30] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x0880EE04u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EE04u) goto L_0880EE04;
    return;
L_0880EE04:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0880EE18u);
    aot_fpr[22] = aot_fpr[12] - aot_fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EE18u) goto L_0880EE18;
    return;
L_0880EE18:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0880EE2Cu);
    aot_fpr[26] = aot_fpr[13] - aot_fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EE2Cu) goto L_0880EE2C;
    return;
L_0880EE2C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[24];
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1168)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[18] = (0u | 1u);
        goto L_0880EE6C;
    }
    goto L_0880EE6C;
L_0880EE6C:
    aot_gpr[18] = (aot_gpr[18] & 255u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EE94;
      }
      goto L_0880EE78;
    }
L_0880EE78:
    aot_fpr[12] = std::sqrt(aot_fpr[22]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0880EE94u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 124u, 0x088CB888u>(ctx, &aot_mem) && ctx.pc == 0x0880EE94u) goto L_0880EE94;
    return;
L_0880EE94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 6u, 0x0880F0E0u>(ctx, &aot_mem); return;
      }
      goto L_0880EEAC;
    }
L_0880EEAC:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 6u, 0x0880F0E0u>(ctx, &aot_mem); return;
      }
      goto L_0880EEC8;
    }
L_0880EEC8:
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 6u, 0x0880F0E0u>(ctx, &aot_mem); return;
      }
      goto L_0880EED8;
    }
L_0880EED8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = std::sqrt(aot_fpr[22]);
    aot_fpr[13] = aot_fpr[30] / aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16243u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (15861u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
    aot_fpr[30] = aot_fpr[13] + aot_fpr[30];
    ctx.execute_vfpu_vscl_ct<22u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(256);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { const bool branch_taken = aot_gpr[18] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0880EF80;
      }
      goto L_0880EF60;
    }
L_0880EF60:
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0880EF9C;
      }
      goto L_0880EF80;
    }
L_0880EF80:
    aot_gpr[4] = (16250u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 57672u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0880EF9C;
L_0880EF9C:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(256);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(489), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (49696u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7516)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[31] = (0x0880EFF8u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EFF8u) goto L_0880EFF8;
    return;
L_0880EFF8:
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.pc = 0x0880F000u; return;
}

void recomp_unit_0010(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0010_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_10(Runtime &runtime) {
    runtime.register_generated_unit(10u, 0x0880E000u, 4096u, &recomp_unit_0010, &recomp_unit_0010_entry);
    runtime.register_function(0x0880E000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E008u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E058u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E064u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E070u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E09Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E0A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E0BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E0C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E0DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E0F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E0FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E104u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E10Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E114u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E11Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E124u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E12Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E134u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E13Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E15Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E164u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E16Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E180u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E188u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E194u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E19Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E208u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E210u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E224u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E258u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E260u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E284u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E2D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E2DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E2E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E32Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E348u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E354u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E360u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E380u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E388u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E390u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E3ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E3C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E3D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E3F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E404u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E41Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E438u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E448u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E454u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E458u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E474u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E498u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E4F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E504u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E50Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E514u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E51Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E524u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E52Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E534u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E54Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E554u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E55Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E564u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E56Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E574u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E57Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E584u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E594u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E5ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E604u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E634u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E648u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E700u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E71Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E730u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E748u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E754u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E778u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E7BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E7D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E7E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E7ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E810u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E82Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E830u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E874u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E888u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E8A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E8ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E8F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E90Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E91Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E944u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E964u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E970u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E97Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E988u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E9C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E9DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880E9F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EA2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EA38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EA78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EA80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EAB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EB90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EBA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EBC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EBD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EBF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EC88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880ECDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880ECE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880ED30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880ED60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880ED74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EE04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EE18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EE2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EE6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EE78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EE94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EEACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EEC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EED8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EF60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EF80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EF9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0880EFF8u, &recomp_unit_0010, "recomp_unit_0010");
}
} // namespace psprecomp
