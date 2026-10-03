#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0426[991] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 6, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0, 11, 12, 0, 13, 0, 0,
    0, 14, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0,
    0, 0, 0, 25, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 52, 53, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62,
    0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    90, 91, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 137, 138, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0,
    0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151,
    152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 161, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 170, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185,
    0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203,
};
void recomp_unit_0426_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089AE000u;
        entry_id = (entry_delta < 3964u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0426[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AE000;
    case 2u: goto L_089AE010;
    case 3u: goto L_089AE018;
    case 4u: goto L_089AE02C;
    case 5u: goto L_089AE034;
    case 6u: goto L_089AE03C;
    case 7u: goto L_089AE040;
    case 8u: goto L_089AE048;
    case 9u: goto L_089AE050;
    case 10u: goto L_089AE05C;
    case 11u: goto L_089AE068;
    case 12u: goto L_089AE06C;
    case 13u: goto L_089AE074;
    case 14u: goto L_089AE084;
    case 15u: goto L_089AE088;
    case 16u: goto L_089AE090;
    case 17u: goto L_089AE098;
    case 18u: goto L_089AE0A0;
    case 19u: goto L_089AE0C0;
    case 20u: goto L_089AE0D0;
    case 21u: goto L_089AE0D8;
    case 22u: goto L_089AE0E4;
    case 23u: goto L_089AE0F0;
    case 24u: goto L_089AE0F8;
    case 25u: goto L_089AE10C;
    case 26u: goto L_089AE110;
    case 27u: goto L_089AE11C;
    case 28u: goto L_089AE148;
    case 29u: goto L_089AE17C;
    case 30u: goto L_089AE188;
    case 31u: goto L_089AE1A0;
    case 32u: goto L_089AE1AC;
    case 33u: goto L_089AE1BC;
    case 34u: goto L_089AE1C4;
    case 35u: goto L_089AE1EC;
    case 36u: goto L_089AE224;
    case 37u: goto L_089AE244;
    case 38u: goto L_089AE24C;
    case 39u: goto L_089AE258;
    case 40u: goto L_089AE278;
    case 41u: goto L_089AE280;
    case 42u: goto L_089AE288;
    case 43u: goto L_089AE2A4;
    case 44u: goto L_089AE2AC;
    case 45u: goto L_089AE2C8;
    case 46u: goto L_089AE2FC;
    case 47u: goto L_089AE328;
    case 48u: goto L_089AE330;
    case 49u: goto L_089AE338;
    case 50u: goto L_089AE35C;
    case 51u: goto L_089AE378;
    case 52u: goto L_089AE384;
    case 53u: goto L_089AE388;
    case 54u: goto L_089AE38C;
    case 55u: goto L_089AE3A4;
    case 56u: goto L_089AE3AC;
    case 57u: goto L_089AE3C8;
    case 58u: goto L_089AE3D0;
    case 59u: goto L_089AE3DC;
    case 60u: goto L_089AE3E8;
    case 61u: goto L_089AE3F0;
    case 62u: goto L_089AE3FC;
    case 63u: goto L_089AE404;
    case 64u: goto L_089AE414;
    case 65u: goto L_089AE41C;
    case 66u: goto L_089AE438;
    case 67u: goto L_089AE454;
    case 68u: goto L_089AE458;
    case 69u: goto L_089AE460;
    case 70u: goto L_089AE48C;
    case 71u: goto L_089AE4A8;
    case 72u: goto L_089AE4D0;
    case 73u: goto L_089AE4D8;
    case 74u: goto L_089AE504;
    case 75u: goto L_089AE51C;
    case 76u: goto L_089AE548;
    case 77u: goto L_089AE580;
    case 78u: goto L_089AE5B0;
    case 79u: goto L_089AE5E8;
    case 80u: goto L_089AE600;
    case 81u: goto L_089AE60C;
    case 82u: goto L_089AE638;
    case 83u: goto L_089AE65C;
    case 84u: goto L_089AE684;
    case 85u: goto L_089AE68C;
    case 86u: goto L_089AE6A4;
    case 87u: goto L_089AE6AC;
    case 88u: goto L_089AE6D8;
    case 89u: goto L_089AE6E4;
    case 90u: goto L_089AE700;
    case 91u: goto L_089AE704;
    case 92u: goto L_089AE70C;
    case 93u: goto L_089AE720;
    case 94u: goto L_089AE728;
    case 95u: goto L_089AE730;
    case 96u: goto L_089AE738;
    case 97u: goto L_089AE77C;
    case 98u: goto L_089AE7A8;
    case 99u: goto L_089AE7B4;
    case 100u: goto L_089AE7CC;
    case 101u: goto L_089AE7D8;
    case 102u: goto L_089AE7FC;
    case 103u: goto L_089AE810;
    case 104u: goto L_089AE818;
    case 105u: goto L_089AE830;
    case 106u: goto L_089AE838;
    case 107u: goto L_089AE840;
    case 108u: goto L_089AE85C;
    case 109u: goto L_089AE86C;
    case 110u: goto L_089AE884;
    case 111u: goto L_089AE88C;
    case 112u: goto L_089AE894;
    case 113u: goto L_089AE89C;
    case 114u: goto L_089AE8A4;
    case 115u: goto L_089AE8C0;
    case 116u: goto L_089AE8DC;
    case 117u: goto L_089AE8EC;
    case 118u: goto L_089AE904;
    case 119u: goto L_089AE90C;
    case 120u: goto L_089AE914;
    case 121u: goto L_089AE91C;
    case 122u: goto L_089AE924;
    case 123u: goto L_089AE940;
    case 124u: goto L_089AE964;
    case 125u: goto L_089AE96C;
    case 126u: goto L_089AE988;
    case 127u: goto L_089AE9A4;
    case 128u: goto L_089AE9B0;
    case 129u: goto L_089AE9BC;
    case 130u: goto L_089AE9C4;
    case 131u: goto L_089AE9CC;
    case 132u: goto L_089AE9D4;
    case 133u: goto L_089AE9DC;
    case 134u: goto L_089AE9E4;
    case 135u: goto L_089AE9EC;
    case 136u: goto L_089AEA24;
    case 137u: goto L_089AEA28;
    case 138u: goto L_089AEA2C;
    case 139u: goto L_089AEA30;
    case 140u: goto L_089AEA50;
    case 141u: goto L_089AEA58;
    case 142u: goto L_089AEA60;
    case 143u: goto L_089AEA68;
    case 144u: goto L_089AEA70;
    case 145u: goto L_089AEA78;
    case 146u: goto L_089AEA84;
    case 147u: goto L_089AEA9C;
    case 148u: goto L_089AEAC4;
    case 149u: goto L_089AEAD4;
    case 150u: goto L_089AEAF4;
    case 151u: goto L_089AEAFC;
    case 152u: goto L_089AEB00;
    case 153u: goto L_089AEB14;
    case 154u: goto L_089AEB1C;
    case 155u: goto L_089AEB24;
    case 156u: goto L_089AEB2C;
    case 157u: goto L_089AEB54;
    case 158u: goto L_089AEB5C;
    case 159u: goto L_089AEB64;
    case 160u: goto L_089AEB98;
    case 161u: goto L_089AEBA0;
    case 162u: goto L_089AEBA4;
    case 163u: goto L_089AEBAC;
    case 164u: goto L_089AEBB8;
    case 165u: goto L_089AEBC0;
    case 166u: goto L_089AEBCC;
    case 167u: goto L_089AEBD4;
    case 168u: goto L_089AEC28;
    case 169u: goto L_089AEC3C;
    case 170u: goto L_089AEC40;
    case 171u: goto L_089AEC44;
    case 172u: goto L_089AEC78;
    case 173u: goto L_089AEC84;
    case 174u: goto L_089AEC90;
    case 175u: goto L_089AECAC;
    case 176u: goto L_089AECC0;
    case 177u: goto L_089AECC8;
    case 178u: goto L_089AECD4;
    case 179u: goto L_089AECE4;
    case 180u: goto L_089AED04;
    case 181u: goto L_089AED48;
    case 182u: goto L_089AED50;
    case 183u: goto L_089AED60;
    case 184u: goto L_089AED6C;
    case 185u: goto L_089AED7C;
    case 186u: goto L_089AED84;
    case 187u: goto L_089AED90;
    case 188u: goto L_089AEDD4;
    case 189u: goto L_089AEE18;
    case 190u: goto L_089AEE70;
    case 191u: goto L_089AEE78;
    case 192u: goto L_089AEE94;
    case 193u: goto L_089AEEB0;
    case 194u: goto L_089AEEBC;
    case 195u: goto L_089AEED0;
    case 196u: goto L_089AEED4;
    case 197u: goto L_089AEF34;
    case 198u: goto L_089AEF3C;
    case 199u: goto L_089AEF48;
    case 200u: goto L_089AEF54;
    case 201u: goto L_089AEF60;
    case 202u: goto L_089AEF6C;
    case 203u: goto L_089AEF78;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AE000:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AE010u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE010u) goto L_089AE010;
    return;
L_089AE010:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 163u, 0x089ADF18u>(ctx, &aot_mem); return;
L_089AE018:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-15600));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(-15636));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_089AE02C;
L_089AE02C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AE040;
      }
      goto L_089AE034;
    }
L_089AE034:
    if (aot_gpr[3] != aot_gpr[4]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_089AE02C;
    }
    goto L_089AE03C;
L_089AE03C:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-15636));
    goto L_089AE040;
L_089AE040:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE048:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089AE088;
      }
      goto L_089AE050;
    }
L_089AE050:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089AE084;
      }
      goto L_089AE05C;
    }
L_089AE05C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3072));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089AE090;
      }
      goto L_089AE068;
    }
L_089AE068:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089AE06C;
L_089AE06C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE084;
      }
      goto L_089AE074;
    }
L_089AE074:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE088;
      }
      goto L_089AE084;
    }
L_089AE084:
    aot_gpr[3] = (0u + 0u);
    goto L_089AE088;
L_089AE088:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE090:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089AE06C;
    }
    goto L_089AE098;
L_089AE098:
    aot_gpr[3] = (0u + 0u);
    goto L_089AE088;
L_089AE0A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(3188), 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem); return;
L_089AE0C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089AE10C;
      }
      goto L_089AE0D0;
    }
L_089AE0D0:
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089AE110;
    }
    goto L_089AE0D8;
L_089AE0D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089AE10C;
      }
      goto L_089AE0E4;
    }
L_089AE0E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089AE0F8;
      }
      goto L_089AE0F0;
    }
L_089AE0F0:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE0F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE0F8u) goto L_089AE0F8;
    return;
L_089AE0F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089AE0A0;
L_089AE10C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089AE110;
L_089AE110:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE11C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089AE1C4;
      }
      goto L_089AE148;
    }
L_089AE148:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-15696)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(13056));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-937));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(3072));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[16] = (aot_gpr[19] + aot_gpr[17]);
    goto L_089AE17C;
L_089AE17C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AE188u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE188u) goto L_089AE188;
    return;
L_089AE188:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089AE1AC;
      }
      goto L_089AE1A0;
    }
L_089AE1A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE1ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE1ACu) goto L_089AE1AC;
    return;
L_089AE1AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089AE1BCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE1BCu) goto L_089AE1BC;
    return;
L_089AE1BC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[20];
    aot_gpr[16] = (aot_gpr[19] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089AE17C;
      }
      goto L_089AE1C4;
    }
L_089AE1C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE1EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14928));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16460)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE224u);
    aot_gpr[16] = (aot_gpr[3] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE224u) goto L_089AE224;
    return;
L_089AE224:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16460)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089AE244u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE244u) goto L_089AE244;
    return;
L_089AE244:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AE2AC;
      }
      goto L_089AE24C;
    }
L_089AE24C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE258u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16460)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE258u) goto L_089AE258;
    return;
L_089AE258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16460)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089AE278u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE278u) goto L_089AE278;
    return;
L_089AE278:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AE288;
      }
      goto L_089AE280;
    }
L_089AE280:
    aot_gpr[31] = (0x089AE288u);
    // nop
    goto L_089AE11C;
L_089AE288:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16460)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089AE2A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE2A4u) goto L_089AE2A4;
    return;
L_089AE2A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AE24C;
      }
      goto L_089AE2AC;
    }
L_089AE2AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE2C8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14928)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16460));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3216));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2203u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE2FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE2FCu) goto L_089AE2FC;
    return;
L_089AE2FC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(16476));
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(16464));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16476), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16464), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089AE328u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 164u, 0x089AFB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE328u) goto L_089AE328;
    return;
L_089AE328:
    aot_gpr[31] = (0x089AE330u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16464), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 164u, 0x089AFB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE330u) goto L_089AE330;
    return;
L_089AE330:
    aot_gpr[31] = (0x089AE338u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 164u, 0x089AFB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE338u) goto L_089AE338;
    return;
L_089AE338:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3272));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2456));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(34));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089AE35Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089AE35Cu) goto L_089AE35C;
    return;
L_089AE35C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(752));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE3A4;
      }
      goto L_089AE378;
    }
L_089AE378:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1002));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AE3A4;
      }
      goto L_089AE384;
    }
L_089AE384:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089AE388;
L_089AE388:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089AE38C;
L_089AE38C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE3A4:
    aot_gpr[31] = (0x089AE3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089AE3ACu) goto L_089AE3AC;
    return;
L_089AE3AC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(752));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(33));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE3F0;
      }
      goto L_089AE3C8;
    }
L_089AE3C8:
    aot_gpr[31] = (0x089AE3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089AE3D0u) goto L_089AE3D0;
    return;
L_089AE3D0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089AE388;
      }
      goto L_089AE3DC;
    }
L_089AE3DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1002));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089AE388;
    }
    goto L_089AE3E8;
L_089AE3E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089AE38C;
L_089AE3F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1002));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089AE388;
    }
    goto L_089AE3FC;
L_089AE3FC:
    // nop
    goto L_089AE3C8;
L_089AE404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089AE414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 168u, 0x089AFBC8u>(ctx, &aot_mem) && ctx.pc == 0x089AE414u) goto L_089AE414;
    return;
L_089AE414:
    aot_gpr[31] = (0x089AE41Cu);
    // nop
    goto L_089AE1EC;
L_089AE41C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14924)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16460));
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE438:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(16476));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE458;
      }
      goto L_089AE454;
    }
L_089AE454:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_089AE458;
L_089AE458:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE460:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-26));
      if (branch_taken) {
          goto L_089AE4A8;
      }
      goto L_089AE48C;
    }
L_089AE48C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE4A8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[10] = (aot_gpr[2] << (aot_gpr[10] & 31u));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089AE4D0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0428_entry, 428u, 34u, 0x089B0278u>(ctx, &aot_mem) && ctx.pc == 0x089AE4D0u) goto L_089AE4D0;
    return;
L_089AE4D0:
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    goto L_089AE4D8;
L_089AE4D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AE4D8;
      }
      goto L_089AE504;
    }
L_089AE504:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[7] = (aot_gpr[9] + 0u);
    goto L_089AE51C;
L_089AE51C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AE51C;
      }
      goto L_089AE548;
    }
L_089AE548:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15108)));
    aot_gpr[3] = (2203u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-8000));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE580u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE580u) goto L_089AE580;
    return;
L_089AE580:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE5B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-15120));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AE5E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE5E8u) goto L_089AE5E8;
    return;
L_089AE5E8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AE600u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE600u) goto L_089AE600;
    return;
L_089AE600:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089AE60Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE60Cu) goto L_089AE60C;
    return;
L_089AE60C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15148)));
    aot_gpr[5] = (aot_gpr[5] & 15u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE638u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE638u) goto L_089AE638;
    return;
L_089AE638:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089AE684;
      }
      goto L_089AE65C;
    }
L_089AE65C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE684:
    aot_gpr[31] = (0x089AE68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 147u, 0x089AFAB0u>(ctx, &aot_mem) && ctx.pc == 0x089AE68Cu) goto L_089AE68C;
    return;
L_089AE68C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AE65C;
      }
      goto L_089AE6A4;
    }
L_089AE6A4:
    aot_gpr[31] = (0x089AE6ACu);
    // nop
    goto L_089AE460;
L_089AE6AC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE6D8:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 5u);
      if (branch_taken) {
          goto L_089AE730;
      }
      goto L_089AE6E4;
    }
L_089AE6E4:
    aot_gpr[2] = (aot_gpr[5] << 7u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
    goto L_089AE70C;
L_089AE700:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089AE704;
L_089AE704:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089AE730;
      }
      goto L_089AE70C;
    }
L_089AE70C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] << (aot_gpr[5] & 31u));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
      if (branch_taken) {
          goto L_089AE700;
      }
      goto L_089AE720;
    }
L_089AE720:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089AE704;
    }
    goto L_089AE728;
L_089AE728:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE730:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-11));
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-15120));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AE7A8;
      }
      goto L_089AE77C;
    }
L_089AE77C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE7A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089AE7B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE7B4u) goto L_089AE7B4;
    return;
L_089AE7B4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089AE7CCu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE7CCu) goto L_089AE7CC;
    return;
L_089AE7CC:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089AE7D8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE7D8u) goto L_089AE7D8;
    return;
L_089AE7D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15148)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AE7FCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[19]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE7FCu) goto L_089AE7FC;
    return;
L_089AE7FC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AE77C;
      }
      goto L_089AE810;
    }
L_089AE810:
    aot_gpr[31] = (0x089AE818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 118u, 0x089AF95Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE818u) goto L_089AE818;
    return;
L_089AE818:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(33));
      if (branch_taken) {
          goto L_089AE77C;
      }
      goto L_089AE830;
    }
L_089AE830:
    aot_gpr[31] = (0x089AE838u);
    // nop
    goto L_089AE460;
L_089AE838:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089AE77C;
L_089AE840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089AE85Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_089AE048;
L_089AE85C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AE884;
      }
      goto L_089AE86C;
    }
L_089AE86C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE884:
    aot_gpr[31] = (0x089AE88Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_089AE738;
L_089AE88C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AE89C;
      }
      goto L_089AE894;
    }
L_089AE894:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089AE89C;
L_089AE89C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089AE86C;
      }
      goto L_089AE8A4;
    }
L_089AE8A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089AE8DCu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_089AE048;
L_089AE8DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AE904;
      }
      goto L_089AE8EC;
    }
L_089AE8EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE904:
    aot_gpr[31] = (0x089AE90Cu);
    // nop
    goto L_089AE738;
L_089AE90C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AE91C;
      }
      goto L_089AE914;
    }
L_089AE914:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089AE91C;
L_089AE91C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE8EC;
      }
      goto L_089AE924;
    }
L_089AE924:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089AE964u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    goto L_089AE048;
L_089AE964:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AE988;
      }
      goto L_089AE96C;
    }
L_089AE96C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (aot_gpr[16] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] & 15u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    aot_gpr[3] = ((aot_gpr[3] & ~0x0000000Fu) | ((aot_gpr[16] & 0x0000000Fu) << 0u));
      if (branch_taken) {
          goto L_089AE9A4;
      }
      goto L_089AE988;
    }
L_089AE988:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE9A4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[3]);
      if (branch_taken) {
          goto L_089AE9E4;
      }
      goto L_089AE9B0;
    }
L_089AE9B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089AE988;
      }
      goto L_089AE9BC;
    }
L_089AE9BC:
    aot_gpr[31] = (0x089AE9C4u);
    // nop
    goto L_089AE5B0;
L_089AE9C4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AE9D4;
      }
      goto L_089AE9CC;
    }
L_089AE9CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089AE9D4;
L_089AE9D4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE988;
      }
      goto L_089AE9DC;
    }
L_089AE9DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089AE988;
L_089AE9E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(80), 0u);
    goto L_089AE9B0;
L_089AE9EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089AEA50;
      }
      goto L_089AEA24;
    }
L_089AEA24:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AEA28;
L_089AEA28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089AEA2C;
L_089AEA2C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089AEA30;
L_089AEA30:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEA50:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AEA28;
      }
      goto L_089AEA58;
    }
L_089AEA58:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089AEA2C;
      }
      goto L_089AEA60;
    }
L_089AEA60:
    if (aot_gpr[4] == 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089AEA30;
    }
    goto L_089AEA68;
L_089AEA68:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089AEA2C;
      }
      goto L_089AEA70;
    }
L_089AEA70:
    aot_gpr[31] = (0x089AEA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 23u, 0x089AD1D0u>(ctx, &aot_mem) && ctx.pc == 0x089AEA78u) goto L_089AEA78;
    return;
L_089AEA78:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(104));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089AEA28;
      }
      goto L_089AEA84;
    }
L_089AEA84:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16460)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AEA9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEA9Cu) goto L_089AEA9C;
    return;
L_089AEA9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(3168), aot_gpr[19]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(3168));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AEAC4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEAC4u) goto L_089AEAC4;
    return;
L_089AEAC4:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089AEA28;
L_089AEAD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089AEAF4u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    goto L_089AE048;
L_089AEAF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEB14;
      }
      goto L_089AEAFC;
    }
L_089AEAFC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AEB00;
L_089AEB00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEB14:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089AEAFC;
      }
      goto L_089AEB1C;
    }
L_089AEB1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    goto L_089AEB00;
L_089AEB24:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEB2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[11] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] & 15u);
      if (branch_taken) {
          goto L_089AEBAC;
      }
      goto L_089AEB54;
    }
L_089AEB54:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089AEBC0;
      }
      goto L_089AEB5C;
    }
L_089AEB5C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089AEBA4;
      }
      goto L_089AEB64;
    }
L_089AEB64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[12] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(56), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_089AEBA0;
      }
      goto L_089AEB98;
    }
L_089AEB98:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AEBA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEBA0u) goto L_089AEBA0;
    return;
L_089AEBA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089AEBA4;
L_089AEBA4:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEBAC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089AEB64;
      }
      goto L_089AEBB8;
    }
L_089AEBB8:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEBC0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089AEB64;
      }
      goto L_089AEBCC;
    }
L_089AEBCC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEBD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[22] + static_cast<std::uint32_t>(-14808));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AEC28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEC28u) goto L_089AEC28;
    return;
L_089AEC28:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[19] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089AEC78;
      }
      goto L_089AEC3C;
    }
L_089AEC3C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AEC40;
L_089AEC40:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089AEC44;
L_089AEC44:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEC78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AEC40;
      }
      goto L_089AEC84;
    }
L_089AEC84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AEC40;
      }
      goto L_089AEC90;
    }
L_089AEC90:
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-15188));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(21)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-14808)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AECACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AECACu) goto L_089AECAC;
    return;
L_089AECAC:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089AECC0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AECC0u) goto L_089AECC0;
    return;
L_089AECC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AEC40;
      }
      goto L_089AECC8;
    }
L_089AECC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 2u, 0x089AF010u>(ctx, &aot_mem); return;
      }
      goto L_089AECD4;
    }
L_089AECD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    goto L_089AECE4;
L_089AECE4:
    aot_gpr[23] = (aot_gpr[22] + static_cast<std::uint32_t>(-14808));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AED04u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AED04u) goto L_089AED04;
    return;
L_089AED04:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(40), aot_gpr[9]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AED48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(44), aot_gpr[10]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AED48u) goto L_089AED48;
    return;
L_089AED48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AEC3C;
      }
      goto L_089AED50;
    }
L_089AED50:
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-15188));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AED60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AED60u) goto L_089AED60;
    return;
L_089AED60:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089AEC3C;
      }
      goto L_089AED6C;
    }
L_089AED6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AED7Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AED7Cu) goto L_089AED7C;
    return;
L_089AED7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AEC40;
      }
      goto L_089AED84;
    }
L_089AED84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AED90u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AED90u) goto L_089AED90;
    return;
L_089AED90:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AEDD4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEDD4u) goto L_089AEDD4;
    return;
L_089AEDD4:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(64), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(68), aot_gpr[8]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AEE18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(72), aot_gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEE18u) goto L_089AEE18;
    return;
L_089AEE18:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(40)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (0x089AEE70u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_089AEB2C;
L_089AEE70:
    aot_gpr[31] = (0x089AEE78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089AE438;
L_089AEE78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[23] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089AEED4;
      }
      goto L_089AEE94;
    }
L_089AEE94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (aot_gpr[4] << 4u);
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(3168));
    aot_gpr[16] = (aot_gpr[3] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089AEED4;
      }
      goto L_089AEEB0;
    }
L_089AEEB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089AEED4;
      }
      goto L_089AEEBC;
    }
L_089AEEBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] & aot_gpr[2]);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089AEF3C;
    }
    goto L_089AEED0;
L_089AEED0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
    goto L_089AEED4;
L_089AEED4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(80)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(92)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(68)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[10]);
      if (branch_taken) {
          goto L_089AECE4;
      }
      goto L_089AEF34;
    }
L_089AEF34:
    aot_gpr[16] = (0u + 0u);
    goto L_089AEC40;
L_089AEF3C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089AEF6C;
      }
      goto L_089AEF48;
    }
L_089AEF48:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089AEED4;
      }
      goto L_089AEF54;
    }
L_089AEF54:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089AEED4;
      }
      goto L_089AEF60;
    }
L_089AEF60:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089AEED4;
      }
      goto L_089AEF6C;
    }
L_089AEF6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AEF78u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEF78u) goto L_089AEF78;
    return;
L_089AEF78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(36)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(40)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[12] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32), aot_gpr[12]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AF004u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0426(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0426_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_426(Runtime &runtime) {
    runtime.register_generated_unit(426u, 0x089AE000u, 4096u, &recomp_unit_0426, &recomp_unit_0426_entry);
    runtime.register_function(0x089AE000u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE010u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE018u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE02Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE034u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE03Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE040u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE048u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE050u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE05Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE068u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE06Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE074u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE084u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE088u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE090u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE098u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0A0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0C0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0D0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0D8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0E4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0F0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE0F8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE10Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE110u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE11Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE148u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE17Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE188u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE1A0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE1ACu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE1BCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE1C4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE1ECu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE224u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE244u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE24Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE258u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE278u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE280u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE288u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE2A4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE2ACu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE2C8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE2FCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE328u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE330u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE338u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE35Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE378u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE384u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE388u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE38Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3A4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3ACu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3C8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3D0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3DCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3E8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3F0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE3FCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE404u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE414u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE41Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE438u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE454u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE458u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE460u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE48Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE4A8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE4D0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE4D8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE504u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE51Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE548u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE580u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE5B0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE5E8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE600u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE60Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE638u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE65Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE684u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE68Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE6A4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE6ACu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE6D8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE6E4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE700u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE704u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE70Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE720u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE728u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE730u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE738u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE77Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE7A8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE7B4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE7CCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE7D8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE7FCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE810u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE818u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE830u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE838u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE840u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE85Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE86Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE884u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE88Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE894u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE89Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE8A4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE8C0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE8DCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE8ECu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE904u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE90Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE914u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE91Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE924u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE940u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE964u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE96Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE988u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9A4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9B0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9BCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9C4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9CCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9D4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9DCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9E4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AE9ECu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA24u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA28u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA2Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA30u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA50u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA58u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA60u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA68u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA70u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA78u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA84u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEA9Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEAC4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEAD4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEAF4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEAFCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB00u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB14u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB1Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB24u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB2Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB54u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB5Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB64u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEB98u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBA0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBA4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBACu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBB8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBC0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBCCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEBD4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC28u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC3Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC40u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC44u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC78u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC84u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEC90u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AECACu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AECC0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AECC8u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AECD4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AECE4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED04u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED48u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED50u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED60u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED6Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED7Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED84u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AED90u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEDD4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEE18u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEE70u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEE78u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEE94u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEEB0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEEBCu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEED0u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEED4u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF34u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF3Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF48u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF54u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF60u, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF6Cu, &recomp_unit_0426, "recomp_unit_0426");
    runtime.register_function(0x089AEF78u, &recomp_unit_0426, "recomp_unit_0426");
}
} // namespace psprecomp
