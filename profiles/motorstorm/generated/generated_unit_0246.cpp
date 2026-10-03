#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0246[1021] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 35, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 41, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 90, 0,
    91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0,
    108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0,
    162, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180,
};
void recomp_unit_0246_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088FA000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0246[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FA000;
    case 2u: goto L_088FA00C;
    case 3u: goto L_088FA010;
    case 4u: goto L_088FA028;
    case 5u: goto L_088FA03C;
    case 6u: goto L_088FA048;
    case 7u: goto L_088FA068;
    case 8u: goto L_088FA074;
    case 9u: goto L_088FA08C;
    case 10u: goto L_088FA094;
    case 11u: goto L_088FA0B0;
    case 12u: goto L_088FA0B8;
    case 13u: goto L_088FA0DC;
    case 14u: goto L_088FA0E4;
    case 15u: goto L_088FA0EC;
    case 16u: goto L_088FA110;
    case 17u: goto L_088FA118;
    case 18u: goto L_088FA124;
    case 19u: goto L_088FA12C;
    case 20u: goto L_088FA134;
    case 21u: goto L_088FA138;
    case 22u: goto L_088FA158;
    case 23u: goto L_088FA15C;
    case 24u: goto L_088FA164;
    case 25u: goto L_088FA18C;
    case 26u: goto L_088FA194;
    case 27u: goto L_088FA1B8;
    case 28u: goto L_088FA1C0;
    case 29u: goto L_088FA1DC;
    case 30u: goto L_088FA1E8;
    case 31u: goto L_088FA200;
    case 32u: goto L_088FA224;
    case 33u: goto L_088FA230;
    case 34u: goto L_088FA270;
    case 35u: goto L_088FA274;
    case 36u: goto L_088FA27C;
    case 37u: goto L_088FA29C;
    case 38u: goto L_088FA2A8;
    case 39u: goto L_088FA2E8;
    case 40u: goto L_088FA2F0;
    case 41u: goto L_088FA2F4;
    case 42u: goto L_088FA314;
    case 43u: goto L_088FA320;
    case 44u: goto L_088FA354;
    case 45u: goto L_088FA374;
    case 46u: goto L_088FA3B8;
    case 47u: goto L_088FA3C0;
    case 48u: goto L_088FA3C8;
    case 49u: goto L_088FA3F4;
    case 50u: goto L_088FA404;
    case 51u: goto L_088FA414;
    case 52u: goto L_088FA420;
    case 53u: goto L_088FA428;
    case 54u: goto L_088FA430;
    case 55u: goto L_088FA474;
    case 56u: goto L_088FA488;
    case 57u: goto L_088FA498;
    case 58u: goto L_088FA4A4;
    case 59u: goto L_088FA4AC;
    case 60u: goto L_088FA4B4;
    case 61u: goto L_088FA4C8;
    case 62u: goto L_088FA4D8;
    case 63u: goto L_088FA4E8;
    case 64u: goto L_088FA4F0;
    case 65u: goto L_088FA508;
    case 66u: goto L_088FA524;
    case 67u: goto L_088FA528;
    case 68u: goto L_088FA544;
    case 69u: goto L_088FA564;
    case 70u: goto L_088FA5A4;
    case 71u: goto L_088FA5C8;
    case 72u: goto L_088FA5E0;
    case 73u: goto L_088FA5F0;
    case 74u: goto L_088FA600;
    case 75u: goto L_088FA610;
    case 76u: goto L_088FA624;
    case 77u: goto L_088FA628;
    case 78u: goto L_088FA634;
    case 79u: goto L_088FA644;
    case 80u: goto L_088FA65C;
    case 81u: goto L_088FA664;
    case 82u: goto L_088FA66C;
    case 83u: goto L_088FA67C;
    case 84u: goto L_088FA694;
    case 85u: goto L_088FA6A4;
    case 86u: goto L_088FA6B0;
    case 87u: goto L_088FA6C8;
    case 88u: goto L_088FA6E4;
    case 89u: goto L_088FA6F4;
    case 90u: goto L_088FA6F8;
    case 91u: goto L_088FA700;
    case 92u: goto L_088FA71C;
    case 93u: goto L_088FA72C;
    case 94u: goto L_088FA730;
    case 95u: goto L_088FA738;
    case 96u: goto L_088FA754;
    case 97u: goto L_088FA774;
    case 98u: goto L_088FA78C;
    case 99u: goto L_088FA798;
    case 100u: goto L_088FA7A4;
    case 101u: goto L_088FA7AC;
    case 102u: goto L_088FA7B4;
    case 103u: goto L_088FA7BC;
    case 104u: goto L_088FA7C4;
    case 105u: goto L_088FA7CC;
    case 106u: goto L_088FA7F0;
    case 107u: goto L_088FA7F8;
    case 108u: goto L_088FA800;
    case 109u: goto L_088FA808;
    case 110u: goto L_088FA810;
    case 111u: goto L_088FA818;
    case 112u: goto L_088FA820;
    case 113u: goto L_088FA838;
    case 114u: goto L_088FA840;
    case 115u: goto L_088FA84C;
    case 116u: goto L_088FA854;
    case 117u: goto L_088FA85C;
    case 118u: goto L_088FA864;
    case 119u: goto L_088FA86C;
    case 120u: goto L_088FA874;
    case 121u: goto L_088FA87C;
    case 122u: goto L_088FA8A0;
    case 123u: goto L_088FA8A8;
    case 124u: goto L_088FA8B0;
    case 125u: goto L_088FA8B8;
    case 126u: goto L_088FA8C0;
    case 127u: goto L_088FA8C8;
    case 128u: goto L_088FA8D0;
    case 129u: goto L_088FA8E8;
    case 130u: goto L_088FA90C;
    case 131u: goto L_088FA930;
    case 132u: goto L_088FA948;
    case 133u: goto L_088FA960;
    case 134u: goto L_088FA978;
    case 135u: goto L_088FA99C;
    case 136u: goto L_088FA9BC;
    case 137u: goto L_088FA9E0;
    case 138u: goto L_088FAA00;
    case 139u: goto L_088FAA24;
    case 140u: goto L_088FAA48;
    case 141u: goto L_088FAA68;
    case 142u: goto L_088FAA88;
    case 143u: goto L_088FAAA8;
    case 144u: goto L_088FAACC;
    case 145u: goto L_088FAAEC;
    case 146u: goto L_088FAB0C;
    case 147u: goto L_088FAB30;
    case 148u: goto L_088FAB54;
    case 149u: goto L_088FAB74;
    case 150u: goto L_088FAB90;
    case 151u: goto L_088FABA4;
    case 152u: goto L_088FABAC;
    case 153u: goto L_088FAD5C;
    case 154u: goto L_088FAD7C;
    case 155u: goto L_088FAD90;
    case 156u: goto L_088FAE0C;
    case 157u: goto L_088FAE18;
    case 158u: goto L_088FAE48;
    case 159u: goto L_088FAE58;
    case 160u: goto L_088FAE64;
    case 161u: goto L_088FAE6C;
    case 162u: goto L_088FAE80;
    case 163u: goto L_088FAE84;
    case 164u: goto L_088FAE9C;
    case 165u: goto L_088FAEAC;
    case 166u: goto L_088FAEB8;
    case 167u: goto L_088FAECC;
    case 168u: goto L_088FAEDC;
    case 169u: goto L_088FAEE4;
    case 170u: goto L_088FAF00;
    case 171u: goto L_088FAF0C;
    case 172u: goto L_088FAF28;
    case 173u: goto L_088FAF68;
    case 174u: goto L_088FAF8C;
    case 175u: goto L_088FAF9C;
    case 176u: goto L_088FAFAC;
    case 177u: goto L_088FAFB8;
    case 178u: goto L_088FAFC4;
    case 179u: goto L_088FAFE4;
    case 180u: goto L_088FAFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FA000:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA010;
      }
      goto L_088FA00C;
    }
L_088FA00C:
    aot_gpr[5] = (0u | 1u);
    goto L_088FA010;
L_088FA010:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_088FA314;
      }
      goto L_088FA028;
    }
L_088FA028:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[19] = (2218u << 16u);
    goto L_088FA03C;
L_088FA03C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088FA048u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 24u, 0x088C01E4u>(ctx, &aot_mem) && ctx.pc == 0x088FA048u) goto L_088FA048;
    return;
L_088FA048:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FA2F0;
      }
      goto L_088FA068;
    }
L_088FA068:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_088FA2F0;
      }
      goto L_088FA074;
    }
L_088FA074:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-28952)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FA08C:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088FA118;
      }
      goto L_088FA094;
    }
L_088FA094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA0E4;
      }
      goto L_088FA0B0;
    }
L_088FA0B0:
    { const bool branch_taken = aot_gpr[30] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088FA110;
      }
      goto L_088FA0B8;
    }
L_088FA0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA0DCu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA0DCu) goto L_088FA0DC;
    return;
L_088FA0DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA110;
      }
      goto L_088FA0E4;
    }
L_088FA0E4:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FA110;
      }
      goto L_088FA0EC;
    }
L_088FA0EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA110u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA110u) goto L_088FA110;
    return;
L_088FA110:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FA15C;
      }
      goto L_088FA118;
    }
L_088FA118:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088FA15C;
      }
      goto L_088FA124;
    }
L_088FA124:
    if (aot_gpr[30] == aot_gpr[6]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
        goto L_088FA138;
    }
    goto L_088FA12C;
L_088FA12C:
    { const bool branch_taken = aot_gpr[30] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088FA158;
      }
      goto L_088FA134;
    }
L_088FA134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    goto L_088FA138;
L_088FA138:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA158u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA158u) goto L_088FA158;
    return;
L_088FA158:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    goto L_088FA15C;
L_088FA15C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088FA2F4;
      }
      goto L_088FA164;
    }
L_088FA164:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA18Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA18Cu) goto L_088FA18C;
    return;
L_088FA18C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088FA2F4;
      }
      goto L_088FA194;
    }
L_088FA194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA1B8u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA1B8u) goto L_088FA1B8;
    return;
L_088FA1B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088FA2F4;
      }
      goto L_088FA1C0;
    }
L_088FA1C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 32u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FA2E8;
      }
      goto L_088FA1DC;
    }
L_088FA1DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(140)));
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5272)));
        goto L_088FA27C;
    }
    goto L_088FA1E8;
L_088FA1E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA274;
      }
      goto L_088FA200;
    }
L_088FA200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA224u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA224u) goto L_088FA224;
    return;
L_088FA224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5272)));
    aot_gpr[31] = (0x088FA230u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-32564)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 22u, 0x088B6240u>(ctx, &aot_mem) && ctx.pc == 0x088FA230u) goto L_088FA230;
    return;
L_088FA230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(744)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1064), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FA200;
      }
      goto L_088FA270;
    }
L_088FA270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_088FA274;
L_088FA274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA2E8;
      }
      goto L_088FA27C;
    }
L_088FA27C:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FA29Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA29Cu) goto L_088FA29C;
    return;
L_088FA29C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5272)));
    aot_gpr[31] = (0x088FA2A8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-32564)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 22u, 0x088B6240u>(ctx, &aot_mem) && ctx.pc == 0x088FA2A8u) goto L_088FA2A8;
    return;
L_088FA2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(744)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1048), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    goto L_088FA2E8;
L_088FA2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA2F4;
      }
      goto L_088FA2F0;
    }
L_088FA2F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_088FA2F4;
L_088FA2F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FA03C;
      }
      goto L_088FA314;
    }
L_088FA314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-32564)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-32564), aot_gpr[4]);
    goto L_088FA320;
L_088FA320:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FA354:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32568), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FA374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(732)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_088FA3C0;
      }
      goto L_088FA3B8;
    }
L_088FA3B8:
    aot_gpr[31] = (0x088FA3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 211u, 0x08862F38u>(ctx, &aot_mem) && ctx.pc == 0x088FA3C0u) goto L_088FA3C0;
    return;
L_088FA3C0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA3F4;
      }
      goto L_088FA3C8;
    }
L_088FA3C8:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(26492)));
      if (branch_taken) {
          goto L_088FA4AC;
      }
      goto L_088FA3F4;
    }
L_088FA3F4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA420;
      }
      goto L_088FA404;
    }
L_088FA404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088FA414;
    }
    goto L_088FA414;
L_088FA414:
    aot_gpr[4] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_088FA420;
L_088FA420:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA498;
      }
      goto L_088FA428;
    }
L_088FA428:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FA474;
      }
      goto L_088FA430;
    }
L_088FA430:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(26492)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088FA4AC;
      }
      goto L_088FA474;
    }
L_088FA474:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(470)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088FA488u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 36u, 0x088BA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA488u) goto L_088FA488;
    return;
L_088FA488:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(26492)));
      if (branch_taken) {
          goto L_088FA4AC;
      }
      goto L_088FA498;
    }
L_088FA498:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[31] = (0x088FA4A4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 10u, 0x088BA0C4u>(ctx, &aot_mem) && ctx.pc == 0x088FA4A4u) goto L_088FA4A4;
    return;
L_088FA4A4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(26492)));
    goto L_088FA4AC;
L_088FA4AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA4F0;
      }
      goto L_088FA4B4;
    }
L_088FA4B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FA4E8;
      }
      goto L_088FA4C8;
    }
L_088FA4C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x088FA4D8u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(105))))));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088FA4D8u) goto L_088FA4D8;
    return;
L_088FA4D8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FA4F0;
      }
      goto L_088FA4E8;
    }
L_088FA4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA544;
      }
      goto L_088FA4F0;
    }
L_088FA4F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FA528;
      }
      goto L_088FA508;
    }
L_088FA508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088FA524u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA524u) goto L_088FA524;
    return;
L_088FA524:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_088FA528;
L_088FA528:
    aot_gpr[7] = (16416u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088FA544u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 33u, 0x088CC30Cu>(ctx, &aot_mem) && ctx.pc == 0x088FA544u) goto L_088FA544;
    return;
L_088FA544:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FA564:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5968));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA738;
      }
      goto L_088FA5A4;
    }
L_088FA5A4:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28888)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_088FA5E0;
      }
      goto L_088FA5C8;
    }
L_088FA5C8:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28884)));
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088FA5F0;
    }
    goto L_088FA5E0;
L_088FA5E0:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088FA5F0;
      }
      goto L_088FA5F0;
    }
L_088FA5F0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA628;
      }
      goto L_088FA600;
    }
L_088FA600:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FA628;
      }
      goto L_088FA610;
    }
L_088FA610:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FA628;
      }
      goto L_088FA624;
    }
L_088FA624:
    aot_gpr[5] = (0u | 1u);
    goto L_088FA628;
L_088FA628:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA644;
      }
      goto L_088FA634;
    }
L_088FA634:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27432)));
      if (branch_taken) {
          goto L_088FA6F8;
      }
      goto L_088FA644;
    }
L_088FA644:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FA664;
      }
      goto L_088FA65C;
    }
L_088FA65C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088FA66C;
      }
      goto L_088FA664;
    }
L_088FA664:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088FA66C;
L_088FA66C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_088FA6B0;
      }
      goto L_088FA67C;
    }
L_088FA67C:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28880)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FA6B0;
      }
      goto L_088FA694;
    }
L_088FA694:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088FA6A4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 36u, 0x088BA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA6A4u) goto L_088FA6A4;
    return;
L_088FA6A4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    goto L_088FA6B0;
L_088FA6B0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28872)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FA6F4;
      }
      goto L_088FA6C8;
    }
L_088FA6C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_088FA6E4;
    }
    goto L_088FA6E4;
L_088FA6E4:
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FA6F4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088FA374;
L_088FA6F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27432)));
    goto L_088FA6F8;
L_088FA6F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FA738;
      }
      goto L_088FA700;
    }
L_088FA700:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28876)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088FA730;
      }
      goto L_088FA71C;
    }
L_088FA71C:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FA730;
      }
      goto L_088FA72C;
    }
L_088FA72C:
    aot_gpr[5] = (0u | 1u);
    goto L_088FA730;
L_088FA730:
    aot_gpr[31] = (0x088FA738u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 53u, 0x088B4524u>(ctx, &aot_mem) && ctx.pc == 0x088FA738u) goto L_088FA738;
    return;
L_088FA738:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FA754:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(496), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(516), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FA774:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 19001 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FA838;
      }
      goto L_088FA78C;
    }
L_088FA78C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 12000u);
      if (branch_taken) {
          goto L_088FA7F0;
      }
      goto L_088FA798;
    }
L_088FA798:
    aot_gpr[7] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 5000u);
      if (branch_taken) {
          goto L_088FA930;
      }
      goto L_088FA7A4;
    }
L_088FA7A4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 4000u);
      if (branch_taken) {
          goto L_088FA90C;
      }
      goto L_088FA7AC;
    }
L_088FA7AC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 3000u);
      if (branch_taken) {
          goto L_088FA8E8;
      }
      goto L_088FA7B4;
    }
L_088FA7B4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 2000u);
      if (branch_taken) {
          goto L_088FA9BC;
      }
      goto L_088FA7BC;
    }
L_088FA7BC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 1000u);
      if (branch_taken) {
          goto L_088FA99C;
      }
      goto L_088FA7C4;
    }
L_088FA7C4:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088FAB90;
      }
      goto L_088FA7CC;
    }
L_088FA7CC:
    aot_gpr[5] = (48588u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA7F0;
    }
L_088FA7F0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 11000u);
      if (branch_taken) {
          goto L_088FA978;
      }
      goto L_088FA7F8;
    }
L_088FA7F8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 10000u);
      if (branch_taken) {
          goto L_088FA960;
      }
      goto L_088FA800;
    }
L_088FA800:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 9000u);
      if (branch_taken) {
          goto L_088FA948;
      }
      goto L_088FA808;
    }
L_088FA808:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 8000u);
      if (branch_taken) {
          goto L_088FAA00;
      }
      goto L_088FA810;
    }
L_088FA810:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 7000u);
      if (branch_taken) {
          goto L_088FA9E0;
      }
      goto L_088FA818;
    }
L_088FA818:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088FAB90;
      }
      goto L_088FA820;
    }
L_088FA820:
    aot_gpr[5] = (16153u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA838;
    }
L_088FA838:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 25000u);
      if (branch_taken) {
          goto L_088FA8A0;
      }
      goto L_088FA840;
    }
L_088FA840:
    aot_gpr[7] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 18000u);
      if (branch_taken) {
          goto L_088FAA88;
      }
      goto L_088FA84C;
    }
L_088FA84C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 17000u);
      if (branch_taken) {
          goto L_088FAB74;
      }
      goto L_088FA854;
    }
L_088FA854:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 16000u);
      if (branch_taken) {
          goto L_088FAB54;
      }
      goto L_088FA85C;
    }
L_088FA85C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 15000u);
      if (branch_taken) {
          goto L_088FAB30;
      }
      goto L_088FA864;
    }
L_088FA864:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 14000u);
      if (branch_taken) {
          goto L_088FAA48;
      }
      goto L_088FA86C;
    }
L_088FA86C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 13000u);
      if (branch_taken) {
          goto L_088FAA24;
      }
      goto L_088FA874;
    }
L_088FA874:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088FAB90;
      }
      goto L_088FA87C;
    }
L_088FA87C:
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16204u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA8A0;
    }
L_088FA8A0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 24000u);
      if (branch_taken) {
          goto L_088FAA68;
      }
      goto L_088FA8A8;
    }
L_088FA8A8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 23000u);
      if (branch_taken) {
          goto L_088FAB0C;
      }
      goto L_088FA8B0;
    }
L_088FA8B0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 22000u);
      if (branch_taken) {
          goto L_088FAAEC;
      }
      goto L_088FA8B8;
    }
L_088FA8B8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 21000u);
      if (branch_taken) {
          goto L_088FAACC;
      }
      goto L_088FA8C0;
    }
L_088FA8C0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 20000u);
      if (branch_taken) {
          goto L_088FAAA8;
      }
      goto L_088FA8C8;
    }
L_088FA8C8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088FAB90;
      }
      goto L_088FA8D0;
    }
L_088FA8D0:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA8E8;
    }
L_088FA8E8:
    aot_gpr[5] = (15948u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16076u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA90C;
    }
L_088FA90C:
    aot_gpr[5] = (16025u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16076u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA930;
    }
L_088FA930:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA948;
    }
L_088FA948:
    aot_gpr[5] = (16025u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA960;
    }
L_088FA960:
    aot_gpr[5] = (16025u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA978;
    }
L_088FA978:
    aot_gpr[5] = (16076u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15948u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA99C;
    }
L_088FA99C:
    aot_gpr[5] = (48793u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA9BC;
    }
L_088FA9BC:
    aot_gpr[5] = (48588u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FA9E0;
    }
L_088FA9E0:
    aot_gpr[5] = (16294u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAA00;
    }
L_088FAA00:
    aot_gpr[5] = (16307u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16294u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAA24;
    }
L_088FAA24:
    aot_gpr[5] = (15897u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16179u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAA48;
    }
L_088FAA48:
    aot_gpr[5] = (15948u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAA68;
    }
L_088FAA68:
    aot_gpr[5] = (15948u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAA88;
    }
L_088FAA88:
    aot_gpr[5] = (15948u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAAA8;
    }
L_088FAAA8:
    aot_gpr[5] = (16076u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16025u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAACC;
    }
L_088FAACC:
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16204u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAAEC;
    }
L_088FAAEC:
    aot_gpr[5] = (16076u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAB0C;
    }
L_088FAB0C:
    aot_gpr[5] = (16076u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16268u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAB30;
    }
L_088FAB30:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16268u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAB54;
    }
L_088FAB54:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16358u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAB74;
    }
L_088FAB74:
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAB90;
    }
L_088FAB90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FABA4;
L_088FABA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FABAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u | 1u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(492), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(0u));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(256);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (17096u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(272);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(485), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (16672u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(416), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(486), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(489), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(490), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(491), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088FAD5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088FA754;
L_088FAD5C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(444)));
    aot_gpr[5] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    goto L_088FAD7C;
L_088FAD7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(456), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FAD7C;
      }
      goto L_088FAD90;
    }
L_088FAD90:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(471), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(484), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (18804u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] | 9216u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(487), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16268u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = aot_fpr[16] - aot_fpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088FAE0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088FA774;
L_088FAE0C:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(428), aot_gpr[4]);
      if (branch_taken) {
          goto L_088FAEB8;
      }
      goto L_088FAE18;
    }
L_088FAE18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088FAE64;
      }
      goto L_088FAE48;
    }
L_088FAE48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088FAE58;
    }
    goto L_088FAE58;
L_088FAE58:
    aot_gpr[6] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    goto L_088FAE64;
L_088FAE64:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088FAE84;
      }
      goto L_088FAE6C;
    }
L_088FAE6C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(352));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(356));
    aot_gpr[31] = (0x088FAE80u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 62u, 0x088BA5F0u>(ctx, &aot_mem) && ctx.pc == 0x088FAE80u) goto L_088FAE80;
    return;
L_088FAE80:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088FAE84;
L_088FAE84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAEB8;
      }
      goto L_088FAE9C;
    }
L_088FAE9C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088FAEACu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 225u, 0x088BCFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FAEACu) goto L_088FAEAC;
    return;
L_088FAEAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(216), aot_gpr[2]);
      if (branch_taken) {
          goto L_088FAEB8;
      }
      goto L_088FAEB8;
    }
L_088FAEB8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAEE4;
      }
      goto L_088FAECC;
    }
L_088FAECC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088FAEE4;
      }
      goto L_088FAEDC;
    }
L_088FAEDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_088FAEE4;
L_088FAEE4:
    aot_gpr[4] = (17402u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAF0C;
      }
      goto L_088FAF00;
    }
L_088FAF00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FAF0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 65u, 0x088044F0u>(ctx, &aot_mem) && ctx.pc == 0x088FAF0Cu) goto L_088FAF0C;
    return;
L_088FAF0C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088FAF28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088FAF68u);
    aot_gpr[5] = (0u | 0u);
    goto L_088FABAC;
L_088FAF68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(424), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FAF8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAFE4;
      }
      goto L_088FAF9C;
    }
L_088FAF9C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_088FAFB8;
      }
      goto L_088FAFAC;
    }
L_088FAFAC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_088FAFB8;
L_088FAFB8:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FAFE4;
      }
      goto L_088FAFC4;
    }
L_088FAFC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088FAFE4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FAFE4u) goto L_088FAFE4;
    return;
L_088FAFE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FAFF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 6u, 0x088FB10Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 1u, 0x088FB000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0246(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0246_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_246(Runtime &runtime) {
    runtime.register_generated_unit(246u, 0x088FA000u, 4096u, &recomp_unit_0246, &recomp_unit_0246_entry);
    runtime.register_function(0x088FA000u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA00Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA010u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA028u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA03Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA048u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA068u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA074u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA08Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA094u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA0B0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA0B8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA0DCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA0E4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA0ECu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA110u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA118u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA124u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA12Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA134u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA138u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA158u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA15Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA164u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA18Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA194u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA1B8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA1C0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA1DCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA1E8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA200u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA224u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA230u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA270u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA274u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA27Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA29Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA2A8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA2E8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA2F0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA2F4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA314u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA320u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA354u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA374u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA3B8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA3C0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA3C8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA3F4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA404u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA414u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA420u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA428u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA430u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA474u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA488u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA498u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4A4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4ACu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4B4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4C8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4D8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4E8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA4F0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA508u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA524u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA528u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA544u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA564u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA5A4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA5C8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA5E0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA5F0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA600u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA610u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA624u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA628u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA634u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA644u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA65Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA664u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA66Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA67Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA694u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA6A4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA6B0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA6C8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA6E4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA6F4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA6F8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA700u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA71Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA72Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA730u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA738u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA754u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA774u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA78Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA798u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7A4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7ACu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7B4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7BCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7C4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7CCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7F0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA7F8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA800u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA808u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA810u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA818u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA820u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA838u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA840u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA84Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA854u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA85Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA864u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA86Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA874u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA87Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8A0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8A8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8B0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8B8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8C0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8C8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8D0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA8E8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA90Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA930u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA948u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA960u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA978u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA99Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA9BCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FA9E0u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAA00u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAA24u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAA48u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAA68u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAA88u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAAA8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAACCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAAECu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAB0Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAB30u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAB54u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAB74u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAB90u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FABA4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FABACu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAD5Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAD7Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAD90u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE0Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE18u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE48u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE58u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE64u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE6Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE80u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE84u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAE9Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAEACu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAEB8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAECCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAEDCu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAEE4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAF00u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAF0Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAF28u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAF68u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAF8Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAF9Cu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAFACu, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAFB8u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAFC4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAFE4u, &recomp_unit_0246, "recomp_unit_0246");
    runtime.register_function(0x088FAFF0u, &recomp_unit_0246, "recomp_unit_0246");
}
} // namespace psprecomp
