#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0538[1022] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0,
    0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0,
    0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0,
    53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67,
    0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0,
    76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 90, 0,
    0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 105, 0, 106,
    0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0,
    0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0,
    0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 175, 0, 0, 176, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198,
};
void recomp_unit_0538_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A1E000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0538[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1E000;
    case 2u: goto L_08A1E010;
    case 3u: goto L_08A1E018;
    case 4u: goto L_08A1E024;
    case 5u: goto L_08A1E028;
    case 6u: goto L_08A1E038;
    case 7u: goto L_08A1E048;
    case 8u: goto L_08A1E05C;
    case 9u: goto L_08A1E064;
    case 10u: goto L_08A1E070;
    case 11u: goto L_08A1E084;
    case 12u: goto L_08A1E08C;
    case 13u: goto L_08A1E094;
    case 14u: goto L_08A1E0B8;
    case 15u: goto L_08A1E15C;
    case 16u: goto L_08A1E16C;
    case 17u: goto L_08A1E190;
    case 18u: goto L_08A1E1A0;
    case 19u: goto L_08A1E1AC;
    case 20u: goto L_08A1E1B4;
    case 21u: goto L_08A1E1CC;
    case 22u: goto L_08A1E1EC;
    case 23u: goto L_08A1E204;
    case 24u: goto L_08A1E210;
    case 25u: goto L_08A1E25C;
    case 26u: goto L_08A1E264;
    case 27u: goto L_08A1E274;
    case 28u: goto L_08A1E2AC;
    case 29u: goto L_08A1E2C4;
    case 30u: goto L_08A1E2D0;
    case 31u: goto L_08A1E2D8;
    case 32u: goto L_08A1E2E4;
    case 33u: goto L_08A1E2EC;
    case 34u: goto L_08A1E2F8;
    case 35u: goto L_08A1E304;
    case 36u: goto L_08A1E30C;
    case 37u: goto L_08A1E318;
    case 38u: goto L_08A1E320;
    case 39u: goto L_08A1E32C;
    case 40u: goto L_08A1E334;
    case 41u: goto L_08A1E340;
    case 42u: goto L_08A1E348;
    case 43u: goto L_08A1E354;
    case 44u: goto L_08A1E35C;
    case 45u: goto L_08A1E388;
    case 46u: goto L_08A1E398;
    case 47u: goto L_08A1E3A0;
    case 48u: goto L_08A1E3B8;
    case 49u: goto L_08A1E3C0;
    case 50u: goto L_08A1E3D8;
    case 51u: goto L_08A1E3E0;
    case 52u: goto L_08A1E3F4;
    case 53u: goto L_08A1E400;
    case 54u: goto L_08A1E418;
    case 55u: goto L_08A1E430;
    case 56u: goto L_08A1E448;
    case 57u: goto L_08A1E48C;
    case 58u: goto L_08A1E494;
    case 59u: goto L_08A1E4A0;
    case 60u: goto L_08A1E4A8;
    case 61u: goto L_08A1E4BC;
    case 62u: goto L_08A1E4C8;
    case 63u: goto L_08A1E4D0;
    case 64u: goto L_08A1E4DC;
    case 65u: goto L_08A1E4E4;
    case 66u: goto L_08A1E4EC;
    case 67u: goto L_08A1E4FC;
    case 68u: goto L_08A1E504;
    case 69u: goto L_08A1E510;
    case 70u: goto L_08A1E518;
    case 71u: goto L_08A1E520;
    case 72u: goto L_08A1E540;
    case 73u: goto L_08A1E564;
    case 74u: goto L_08A1E56C;
    case 75u: goto L_08A1E574;
    case 76u: goto L_08A1E580;
    case 77u: goto L_08A1E588;
    case 78u: goto L_08A1E598;
    case 79u: goto L_08A1E5A8;
    case 80u: goto L_08A1E5B0;
    case 81u: goto L_08A1E5BC;
    case 82u: goto L_08A1E5D8;
    case 83u: goto L_08A1E5F8;
    case 84u: goto L_08A1E600;
    case 85u: goto L_08A1E614;
    case 86u: goto L_08A1E628;
    case 87u: goto L_08A1E68C;
    case 88u: goto L_08A1E6E0;
    case 89u: goto L_08A1E6E4;
    case 90u: goto L_08A1E6F8;
    case 91u: goto L_08A1E704;
    case 92u: goto L_08A1E710;
    case 93u: goto L_08A1E728;
    case 94u: goto L_08A1E740;
    case 95u: goto L_08A1E748;
    case 96u: goto L_08A1E760;
    case 97u: goto L_08A1E77C;
    case 98u: goto L_08A1E78C;
    case 99u: goto L_08A1E798;
    case 100u: goto L_08A1E7A0;
    case 101u: goto L_08A1E7A8;
    case 102u: goto L_08A1E7E0;
    case 103u: goto L_08A1E7E8;
    case 104u: goto L_08A1E7F0;
    case 105u: goto L_08A1E7F4;
    case 106u: goto L_08A1E7FC;
    case 107u: goto L_08A1E804;
    case 108u: goto L_08A1E80C;
    case 109u: goto L_08A1E814;
    case 110u: goto L_08A1E81C;
    case 111u: goto L_08A1E82C;
    case 112u: goto L_08A1E834;
    case 113u: goto L_08A1E86C;
    case 114u: goto L_08A1E874;
    case 115u: goto L_08A1E8B0;
    case 116u: goto L_08A1E8B8;
    case 117u: goto L_08A1E8C0;
    case 118u: goto L_08A1E8E4;
    case 119u: goto L_08A1E8F8;
    case 120u: goto L_08A1E924;
    case 121u: goto L_08A1E92C;
    case 122u: goto L_08A1E934;
    case 123u: goto L_08A1E93C;
    case 124u: goto L_08A1E948;
    case 125u: goto L_08A1E9A0;
    case 126u: goto L_08A1E9AC;
    case 127u: goto L_08A1E9B8;
    case 128u: goto L_08A1E9DC;
    case 129u: goto L_08A1EA2C;
    case 130u: goto L_08A1EA38;
    case 131u: goto L_08A1EA58;
    case 132u: goto L_08A1EA84;
    case 133u: goto L_08A1EA98;
    case 134u: goto L_08A1EAA8;
    case 135u: goto L_08A1EAC4;
    case 136u: goto L_08A1EACC;
    case 137u: goto L_08A1EAD0;
    case 138u: goto L_08A1EB38;
    case 139u: goto L_08A1EB44;
    case 140u: goto L_08A1EB84;
    case 141u: goto L_08A1EB90;
    case 142u: goto L_08A1EBA4;
    case 143u: goto L_08A1EBB0;
    case 144u: goto L_08A1EBC4;
    case 145u: goto L_08A1EBD0;
    case 146u: goto L_08A1EC10;
    case 147u: goto L_08A1EC24;
    case 148u: goto L_08A1EC3C;
    case 149u: goto L_08A1EC50;
    case 150u: goto L_08A1EC5C;
    case 151u: goto L_08A1EC70;
    case 152u: goto L_08A1EC7C;
    case 153u: goto L_08A1ECBC;
    case 154u: goto L_08A1ECC4;
    case 155u: goto L_08A1ECD0;
    case 156u: goto L_08A1ECE4;
    case 157u: goto L_08A1ECF0;
    case 158u: goto L_08A1ED04;
    case 159u: goto L_08A1ED10;
    case 160u: goto L_08A1ED20;
    case 161u: goto L_08A1ED2C;
    case 162u: goto L_08A1ED6C;
    case 163u: goto L_08A1ED88;
    case 164u: goto L_08A1ED98;
    case 165u: goto L_08A1EDAC;
    case 166u: goto L_08A1EDB8;
    case 167u: goto L_08A1EDCC;
    case 168u: goto L_08A1EDD8;
    case 169u: goto L_08A1EDE8;
    case 170u: goto L_08A1EDF4;
    case 171u: goto L_08A1EE08;
    case 172u: goto L_08A1EE18;
    case 173u: goto L_08A1EE28;
    case 174u: goto L_08A1EE3C;
    case 175u: goto L_08A1EE40;
    case 176u: goto L_08A1EE4C;
    case 177u: goto L_08A1EE50;
    case 178u: goto L_08A1EE58;
    case 179u: goto L_08A1EE60;
    case 180u: goto L_08A1EE6C;
    case 181u: goto L_08A1EE7C;
    case 182u: goto L_08A1EED4;
    case 183u: goto L_08A1EED8;
    case 184u: goto L_08A1EEE4;
    case 185u: goto L_08A1EF10;
    case 186u: goto L_08A1EF18;
    case 187u: goto L_08A1EF2C;
    case 188u: goto L_08A1EF34;
    case 189u: goto L_08A1EF44;
    case 190u: goto L_08A1EF54;
    case 191u: goto L_08A1EF68;
    case 192u: goto L_08A1EF78;
    case 193u: goto L_08A1EF80;
    case 194u: goto L_08A1EF90;
    case 195u: goto L_08A1EF98;
    case 196u: goto L_08A1EFD4;
    case 197u: goto L_08A1EFDC;
    case 198u: goto L_08A1EFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1E000:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
        goto L_08A1E018;
    }
    goto L_08A1E010;
L_08A1E010:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1E028;
      }
      goto L_08A1E018;
    }
L_08A1E018:
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1E028;
      }
      goto L_08A1E024;
    }
L_08A1E024:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A1E028;
L_08A1E028:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_gpr[31] = (0x08A1E038u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 57u, 0x089F033Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E038u) goto L_08A1E038;
    return;
L_08A1E038:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(344));
    aot_gpr[31] = (0x08A1E048u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1E68C;
L_08A1E048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    aot_gpr[31] = (0x08A1E05Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(384), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1E05Cu) goto L_08A1E05C;
    return;
L_08A1E05C:
    aot_gpr[31] = (0x08A1E064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1E064u) goto L_08A1E064;
    return;
L_08A1E064:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1E070u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A1E9DC;
L_08A1E070:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E084:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E08C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1E0B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E0B8u) goto L_08A1E0B8;
    return;
L_08A1E0B8:
    aot_gpr[4] = (0u | 12288u);
    aot_gpr[5] = (0u | 300u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), aot_gpr[4]);
    aot_gpr[5] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(460), 0u);
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(472), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(468), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(484), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[31] = (0x08A1E15Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E628;
L_08A1E15C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E16C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A1E190u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 132u, 0x08A12914u>(ctx, &aot_mem) && ctx.pc == 0x08A1E190u) goto L_08A1E190;
    return;
L_08A1E190:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1E1A0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1A0u) goto L_08A1E1A0;
    return;
L_08A1E1A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A1E1B4;
      }
      goto L_08A1E1AC;
    }
L_08A1E1AC:
    aot_gpr[31] = (0x08A1E1B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 169u, 0x08A22B24u>(ctx, &aot_mem) && ctx.pc == 0x08A1E1B4u) goto L_08A1E1B4;
    return;
L_08A1E1B4:
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
L_08A1E1CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1E1ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1ECu) goto L_08A1E1EC;
    return;
L_08A1E1EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1E25C;
      }
      goto L_08A1E204;
    }
L_08A1E204:
    aot_gpr[6] = (0u | 65535u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[6] = (0u | 0u);
        goto L_08A1E210;
    }
    goto L_08A1E210;
L_08A1E210:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A1E204;
      }
      goto L_08A1E25C;
    }
L_08A1E25C:
    aot_gpr[31] = (0x08A1E264u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E628;
L_08A1E264:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (0u | 10u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-129));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E2AC;
    }
L_08A1E2AC:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(632)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E2C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E2D0;
    }
L_08A1E2D0:
    aot_gpr[31] = (0x08A1E2D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 146u, 0x08A46810u>(ctx, &aot_mem) && ctx.pc == 0x08A1E2D8u) goto L_08A1E2D8;
    return;
L_08A1E2D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
    aot_gpr[31] = (0x08A1E2E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EDF4;
L_08A1E2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E2EC;
    }
L_08A1E2EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[31] = (0x08A1E2F8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 151u, 0x08A4688Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E2F8u) goto L_08A1E2F8;
    return;
L_08A1E2F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
    aot_gpr[31] = (0x08A1E304u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EDF4;
L_08A1E304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E30C;
    }
L_08A1E30C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1E318u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EC7C;
L_08A1E318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E320;
    }
L_08A1E320:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1E32Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1ED2C;
L_08A1E32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E334;
    }
L_08A1E334:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1E340u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EB44;
L_08A1E340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E348;
    }
L_08A1E348:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1E354u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EBD0;
L_08A1E354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E35C;
    }
L_08A1E35C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(388)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[6]);
    aot_gpr[5] = (0u | 0u);
    if (static_cast<std::int32_t>(aot_gpr[6]) >= 0) {
    aot_gpr[5] = (aot_gpr[6] | 0u);
        goto L_08A1E388;
    }
    goto L_08A1E388;
L_08A1E388:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1E398u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E9DC;
L_08A1E398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E3A0;
    }
L_08A1E3A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    aot_gpr[31] = (0x08A1E3B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E9DC;
L_08A1E3B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E3C0;
    }
L_08A1E3C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E3D8;
    }
L_08A1E3D8:
    aot_gpr[31] = (0x08A1E3E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1E3E0u) goto L_08A1E3E0;
    return;
L_08A1E3E0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E430;
      }
      goto L_08A1E3F4;
    }
L_08A1E3F4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[31] = (0x08A1E400u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1E400u) goto L_08A1E400;
    return;
L_08A1E400:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A1E418u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 155u, 0x08A46904u>(ctx, &aot_mem) && ctx.pc == 0x08A1E418u) goto L_08A1E418;
    return;
L_08A1E418:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[31] = (0x08A1E430u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EDF4;
L_08A1E430:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E448:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(340));
    aot_gpr[19] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 24u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A1E4A0;
      }
      goto L_08A1E48C;
    }
L_08A1E48C:
    aot_gpr[31] = (0x08A1E494u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x08A1E494u) goto L_08A1E494;
    return;
L_08A1E494:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 121 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E4A0;
    }
L_08A1E4A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(340), 0u);
      if (branch_taken) {
          goto L_08A1E518;
      }
      goto L_08A1E4A8;
    }
L_08A1E4A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(384)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E4E4;
      }
      goto L_08A1E4BC;
    }
L_08A1E4BC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(384), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1E4D0;
      }
      goto L_08A1E4C8;
    }
L_08A1E4C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    goto L_08A1E4D0;
L_08A1E4D0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1E4DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1E9DC;
L_08A1E4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E4E4;
    }
L_08A1E4E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E4EC;
    }
L_08A1E4EC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(384), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1E504;
      }
      goto L_08A1E4FC;
    }
L_08A1E4FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    goto L_08A1E504;
L_08A1E504:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1E510u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1E9DC;
L_08A1E510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E518;
    }
L_08A1E518:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E520;
    }
L_08A1E520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(384)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
        goto L_08A1E588;
    }
    goto L_08A1E540;
L_08A1E540:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E564;
    }
L_08A1E564:
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(384), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1E574;
      }
      goto L_08A1E56C;
    }
L_08A1E56C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    goto L_08A1E574;
L_08A1E574:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1E580u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1E9DC;
L_08A1E580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E588;
    }
L_08A1E588:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1E5BC;
      }
      goto L_08A1E598;
    }
L_08A1E598:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(384), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1E5B0;
      }
      goto L_08A1E5A8;
    }
L_08A1E5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    goto L_08A1E5B0;
L_08A1E5B0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1E5BCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1E9DC;
L_08A1E5BC:
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
L_08A1E5D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1E5F8u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1E5F8u) goto L_08A1E5F8;
    return;
L_08A1E5F8:
    aot_gpr[31] = (0x08A1E600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1E600u) goto L_08A1E600;
    return;
L_08A1E600:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A1E614u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    goto L_08A1E448;
L_08A1E614:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E628:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(348), 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(384), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(388), 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(404), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(360), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(416), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(432), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(436), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E68C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-560));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[30]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[23] = (0u | 2u);
    aot_gpr[30] = (0u | 3u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[31]);
    goto L_08A1E6E0;
L_08A1E6E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E6E4;
L_08A1E6E4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1E6F8u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 196u, 0x08A1FDB4u>(ctx, &aot_mem) && ctx.pc == 0x08A1E6F8u) goto L_08A1E6F8;
    return;
L_08A1E6F8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) <= 0;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A1E874;
      }
      goto L_08A1E704;
    }
L_08A1E704:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1E710u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E710u) goto L_08A1E710;
    return;
L_08A1E710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[31] = (0x08A1E728u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A1E728u) goto L_08A1E728;
    return;
L_08A1E728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[31] = (0x08A1E740u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1E740u) goto L_08A1E740;
    return;
L_08A1E740:
    aot_gpr[31] = (0x08A1E748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1E748u) goto L_08A1E748;
    return;
L_08A1E748:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1E760u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 13u, 0x08A1F10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E760u) goto L_08A1E760;
    return;
L_08A1E760:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(408)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1E7E0;
      }
      goto L_08A1E77C;
    }
L_08A1E77C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1E78Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A1E8B0;
L_08A1E78C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1E798u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E8E4;
L_08A1E798:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A1E7A8;
    }
    goto L_08A1E7A0;
L_08A1E7A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1E6E0;
      }
      goto L_08A1E7A8;
    }
L_08A1E7A8:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E7E0:
    if (aot_gpr[21] == aot_gpr[23]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A1E7F4;
    }
    goto L_08A1E7E8;
L_08A1E7E8:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A1E86C;
      }
      goto L_08A1E7F0;
    }
L_08A1E7F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A1E7F4;
L_08A1E7F4:
    aot_gpr[31] = (0x08A1E7FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E8E4;
L_08A1E7FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1E834;
      }
      goto L_08A1E804;
    }
L_08A1E804:
    { const bool branch_taken = aot_gpr[21] == aot_gpr[30];
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1E81C;
      }
      goto L_08A1E80C;
    }
L_08A1E80C:
    aot_gpr[31] = (0x08A1E814u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 130u, 0x08A46754u>(ctx, &aot_mem) && ctx.pc == 0x08A1E814u) goto L_08A1E814;
    return;
L_08A1E814:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A1E81C;
L_08A1E81C:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1E6E4;
      }
      goto L_08A1E82C;
    }
L_08A1E82C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1E6E0;
      }
      goto L_08A1E834;
    }
L_08A1E834:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E86C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A1E6E0;
      }
      goto L_08A1E874;
    }
L_08A1E874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E8B0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E8C0;
      }
      goto L_08A1E8B8;
    }
L_08A1E8B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_08A1E8C0;
      }
      goto L_08A1E8C0;
    }
L_08A1E8C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E8E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A1E92C;
      }
      goto L_08A1E8F8;
    }
L_08A1E8F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    aot_gpr[8] = (0u | 32u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08A1E93C;
      }
      goto L_08A1E924;
    }
L_08A1E924:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 10u);
      if (branch_taken) {
          goto L_08A1E934;
      }
      goto L_08A1E92C;
    }
L_08A1E92C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E934:
    if (aot_gpr[7] != aot_gpr[8]) {
    aot_gpr[5] = (aot_gpr[5] & 65535u);
        goto L_08A1E948;
    }
    goto L_08A1E93C;
L_08A1E93C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A1E948;
      }
      goto L_08A1E948;
    }
L_08A1E948:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08A1E9AC;
      }
      goto L_08A1E9A0;
    }
L_08A1E9A0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A1E9B8;
      }
      goto L_08A1E9AC;
    }
L_08A1E9AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    goto L_08A1E9B8;
L_08A1E9B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(348), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(388), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E9DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(480)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A1EA58;
      }
      goto L_08A1EA2C;
    }
L_08A1EA2C:
    aot_gpr[7] = (0u | 0u);
    if (static_cast<std::int32_t>(aot_gpr[6]) >= 0) {
    aot_gpr[7] = (aot_gpr[6] | 0u);
        goto L_08A1EA38;
    }
    goto L_08A1EA38;
L_08A1EA38:
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[7]);
    goto L_08A1EA58;
L_08A1EA58:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[31] = (0x08A1EA84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 13u, 0x08A1F10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EA84u) goto L_08A1EA84;
    return;
L_08A1EA84:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[31] = (0x08A1EA98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 21u, 0x08A20210u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA98u) goto L_08A1EA98;
    return;
L_08A1EA98:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EAA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1EACC;
      }
      goto L_08A1EAC4;
    }
L_08A1EAC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A1EAD0;
      }
      goto L_08A1EACC;
    }
L_08A1EACC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    goto L_08A1EAD0;
L_08A1EAD0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(492)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(400)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(440)));
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (16384u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1EB38u);
    aot_gpr[9] = (aot_gpr[10] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1EB38u) goto L_08A1EB38;
    return;
L_08A1EB38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EB44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A1EBC4;
      }
      goto L_08A1EB84;
    }
L_08A1EB84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1EBB0;
      }
      goto L_08A1EB90;
    }
L_08A1EB90:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-127));
    aot_gpr[31] = (0x08A1EBA4u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A1E448;
L_08A1EBA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EBB0:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1EBC4u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08A1E9DC;
L_08A1EBC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A1EC70;
      }
      goto L_08A1EC10;
    }
L_08A1EC10:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC70;
      }
      goto L_08A1EC24;
    }
L_08A1EC24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(380)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1EC5C;
      }
      goto L_08A1EC3C;
    }
L_08A1EC3C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 127u);
    aot_gpr[31] = (0x08A1EC50u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A1E448;
L_08A1EC50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EC5C:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1EC70u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08A1E9DC;
L_08A1EC70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A1ED10;
      }
      goto L_08A1ECBC;
    }
L_08A1ECBC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1ED20;
      }
      goto L_08A1ECC4;
    }
L_08A1ECC4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1ECF0;
      }
      goto L_08A1ECD0;
    }
L_08A1ECD0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-127));
    aot_gpr[31] = (0x08A1ECE4u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A1E448;
L_08A1ECE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ECF0:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1ED04u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08A1E9DC;
L_08A1ED04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ED10:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1ED20u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A1E9DC;
L_08A1ED20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ED2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A1EDD8;
      }
      goto L_08A1ED6C;
    }
L_08A1ED6C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(380)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(392)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EDE8;
      }
      goto L_08A1ED88;
    }
L_08A1ED88:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1EDB8;
      }
      goto L_08A1ED98;
    }
L_08A1ED98:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 127u);
    aot_gpr[31] = (0x08A1EDACu);
    aot_gpr[6] = (0u | 1u);
    goto L_08A1E448;
L_08A1EDAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EDB8:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1EDCCu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08A1E9DC;
L_08A1EDCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EDD8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A1EDE8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A1E9DC;
L_08A1EDE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EDF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1EE08u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A1EE7C;
L_08A1EE08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(344));
    aot_gpr[31] = (0x08A1EE18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1E68C;
L_08A1EE18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[31] = (0x08A1EE28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1EF18;
L_08A1EE28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A1EE50;
      }
      goto L_08A1EE3C;
    }
L_08A1EE3C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A1EE40;
L_08A1EE40:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
        goto L_08A1EE40;
    }
    goto L_08A1EE4C;
L_08A1EE4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[4]);
    goto L_08A1EE50;
L_08A1EE50:
    aot_gpr[31] = (0x08A1EE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE58u) goto L_08A1EE58;
    return;
L_08A1EE58:
    aot_gpr[31] = (0x08A1EE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE60u) goto L_08A1EE60;
    return;
L_08A1EE60:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1EE6Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A1E9DC;
L_08A1EE6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EE7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(348), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(360), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(388), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(392), aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(404), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A1EF10;
      }
      goto L_08A1EED4;
    }
L_08A1EED4:
    aot_gpr[5] = (0u | 0u);
    goto L_08A1EED8;
L_08A1EED8:
    aot_gpr[6] = (0u | 65535u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[6] = (0u | 0u);
        goto L_08A1EEE4;
    }
    goto L_08A1EEE4;
L_08A1EEE4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A1EED8;
      }
      goto L_08A1EF10;
    }
L_08A1EF10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EF18:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EF90;
      }
      goto L_08A1EF2C;
    }
L_08A1EF2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (0u | 0u);
    goto L_08A1EF34;
L_08A1EF34:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    if (aot_gpr[10] != 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A1EF80;
    }
    goto L_08A1EF44;
L_08A1EF44:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1EF80;
      }
      goto L_08A1EF54;
    }
L_08A1EF54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EF78;
      }
      goto L_08A1EF68;
    }
L_08A1EF68:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_08A1EF78;
L_08A1EF78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EF80:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A1EF34;
      }
      goto L_08A1EF90;
    }
L_08A1EF90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1EF98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A1EFD4u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1EFD4u) goto L_08A1EFD4;
    return;
L_08A1EFD4:
    aot_gpr[31] = (0x08A1EFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1EFDCu) goto L_08A1EFDC;
    return;
L_08A1EFDC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1EFF4u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 13u, 0x08A1F10Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EFF4u) goto L_08A1EFF4;
    return;
L_08A1EFF4:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[16] = (0u | 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 1u, 0x08A1F004u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 1u, 0x08A1F004u>(ctx, &aot_mem); return;
}

void recomp_unit_0538(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0538_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_538(Runtime &runtime) {
    runtime.register_generated_unit(538u, 0x08A1E000u, 4096u, &recomp_unit_0538, &recomp_unit_0538_entry);
    runtime.register_function(0x08A1E000u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E010u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E018u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E024u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E028u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E038u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E048u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E05Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E064u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E070u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E084u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E08Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E094u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E0B8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E15Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E16Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E190u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E1A0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E1ACu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E1B4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E1CCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E1ECu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E204u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E210u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E25Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E264u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E274u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2ACu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2C4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2D0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2D8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2E4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2ECu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E2F8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E304u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E30Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E318u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E320u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E32Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E334u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E340u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E348u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E354u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E35Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E388u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E398u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E3A0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E3B8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E3C0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E3D8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E3E0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E3F4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E400u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E418u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E430u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E448u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E48Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E494u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4A0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4A8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4BCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4C8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4D0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4DCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4E4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4ECu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E4FCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E504u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E510u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E518u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E520u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E540u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E564u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E56Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E574u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E580u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E588u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E598u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E5A8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E5B0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E5BCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E5D8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E5F8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E600u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E614u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E628u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E68Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E6E0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E6E4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E6F8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E704u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E710u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E728u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E740u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E748u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E760u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E77Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E78Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E798u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7A0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7A8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7E0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7E8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7F0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7F4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E7FCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E804u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E80Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E814u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E81Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E82Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E834u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E86Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E874u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E8B0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E8B8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E8C0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E8E4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E8F8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E924u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E92Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E934u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E93Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E948u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E9A0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E9ACu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E9B8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1E9DCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EA2Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EA38u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EA58u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EA84u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EA98u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EAA8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EAC4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EACCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EAD0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EB38u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EB44u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EB84u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EB90u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EBA4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EBB0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EBC4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EBD0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC10u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC24u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC3Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC50u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC5Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC70u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EC7Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ECBCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ECC4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ECD0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ECE4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ECF0u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED04u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED10u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED20u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED2Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED6Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED88u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1ED98u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EDACu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EDB8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EDCCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EDD8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EDE8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EDF4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE08u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE18u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE28u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE3Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE40u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE4Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE50u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE58u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE60u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE6Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EE7Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EED4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EED8u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EEE4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF10u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF18u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF2Cu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF34u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF44u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF54u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF68u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF78u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF80u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF90u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EF98u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EFD4u, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EFDCu, &recomp_unit_0538, "recomp_unit_0538");
    runtime.register_function(0x08A1EFF4u, &recomp_unit_0538, "recomp_unit_0538");
}
} // namespace psprecomp
