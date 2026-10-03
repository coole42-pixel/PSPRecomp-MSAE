#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0299[1015] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 17, 18, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 41, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49,
    50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 58, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 89,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 97, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116,
    0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 120, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 129,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 138, 0, 139, 0, 140, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150,
};
void recomp_unit_0299_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0892F000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0299[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892F000;
    case 2u: goto L_0892F01C;
    case 3u: goto L_0892F030;
    case 4u: goto L_0892F038;
    case 5u: goto L_0892F040;
    case 6u: goto L_0892F044;
    case 7u: goto L_0892F060;
    case 8u: goto L_0892F090;
    case 9u: goto L_0892F098;
    case 10u: goto L_0892F0A0;
    case 11u: goto L_0892F0A8;
    case 12u: goto L_0892F0B0;
    case 13u: goto L_0892F0C8;
    case 14u: goto L_0892F144;
    case 15u: goto L_0892F158;
    case 16u: goto L_0892F160;
    case 17u: goto L_0892F168;
    case 18u: goto L_0892F16C;
    case 19u: goto L_0892F188;
    case 20u: goto L_0892F1B0;
    case 21u: goto L_0892F1B8;
    case 22u: goto L_0892F1C0;
    case 23u: goto L_0892F1C8;
    case 24u: goto L_0892F248;
    case 25u: goto L_0892F250;
    case 26u: goto L_0892F254;
    case 27u: goto L_0892F26C;
    case 28u: goto L_0892F294;
    case 29u: goto L_0892F29C;
    case 30u: goto L_0892F2A4;
    case 31u: goto L_0892F2AC;
    case 32u: goto L_0892F32C;
    case 33u: goto L_0892F334;
    case 34u: goto L_0892F338;
    case 35u: goto L_0892F350;
    case 36u: goto L_0892F378;
    case 37u: goto L_0892F380;
    case 38u: goto L_0892F388;
    case 39u: goto L_0892F390;
    case 40u: goto L_0892F410;
    case 41u: goto L_0892F418;
    case 42u: goto L_0892F41C;
    case 43u: goto L_0892F434;
    case 44u: goto L_0892F45C;
    case 45u: goto L_0892F464;
    case 46u: goto L_0892F46C;
    case 47u: goto L_0892F474;
    case 48u: goto L_0892F4F4;
    case 49u: goto L_0892F4FC;
    case 50u: goto L_0892F500;
    case 51u: goto L_0892F518;
    case 52u: goto L_0892F540;
    case 53u: goto L_0892F548;
    case 54u: goto L_0892F550;
    case 55u: goto L_0892F558;
    case 56u: goto L_0892F5DC;
    case 57u: goto L_0892F5E4;
    case 58u: goto L_0892F5E8;
    case 59u: goto L_0892F600;
    case 60u: goto L_0892F628;
    case 61u: goto L_0892F630;
    case 62u: goto L_0892F638;
    case 63u: goto L_0892F640;
    case 64u: goto L_0892F6C4;
    case 65u: goto L_0892F6CC;
    case 66u: goto L_0892F6D0;
    case 67u: goto L_0892F6E8;
    case 68u: goto L_0892F710;
    case 69u: goto L_0892F718;
    case 70u: goto L_0892F720;
    case 71u: goto L_0892F728;
    case 72u: goto L_0892F79C;
    case 73u: goto L_0892F7A0;
    case 74u: goto L_0892F7C0;
    case 75u: goto L_0892F7C8;
    case 76u: goto L_0892F7D0;
    case 77u: goto L_0892F7D4;
    case 78u: goto L_0892F7EC;
    case 79u: goto L_0892F81C;
    case 80u: goto L_0892F824;
    case 81u: goto L_0892F82C;
    case 82u: goto L_0892F834;
    case 83u: goto L_0892F83C;
    case 84u: goto L_0892F854;
    case 85u: goto L_0892F8D4;
    case 86u: goto L_0892F8E8;
    case 87u: goto L_0892F8F0;
    case 88u: goto L_0892F8F8;
    case 89u: goto L_0892F8FC;
    case 90u: goto L_0892F918;
    case 91u: goto L_0892F940;
    case 92u: goto L_0892F948;
    case 93u: goto L_0892F950;
    case 94u: goto L_0892F958;
    case 95u: goto L_0892F9E0;
    case 96u: goto L_0892F9E8;
    case 97u: goto L_0892F9EC;
    case 98u: goto L_0892FA04;
    case 99u: goto L_0892FA2C;
    case 100u: goto L_0892FA34;
    case 101u: goto L_0892FA3C;
    case 102u: goto L_0892FA44;
    case 103u: goto L_0892FAC4;
    case 104u: goto L_0892FACC;
    case 105u: goto L_0892FAD0;
    case 106u: goto L_0892FAE8;
    case 107u: goto L_0892FB10;
    case 108u: goto L_0892FB18;
    case 109u: goto L_0892FB20;
    case 110u: goto L_0892FB28;
    case 111u: goto L_0892FBA8;
    case 112u: goto L_0892FBB0;
    case 113u: goto L_0892FBB4;
    case 114u: goto L_0892FBCC;
    case 115u: goto L_0892FBF4;
    case 116u: goto L_0892FBFC;
    case 117u: goto L_0892FC04;
    case 118u: goto L_0892FC0C;
    case 119u: goto L_0892FC8C;
    case 120u: goto L_0892FC94;
    case 121u: goto L_0892FC98;
    case 122u: goto L_0892FCB0;
    case 123u: goto L_0892FCD8;
    case 124u: goto L_0892FCE0;
    case 125u: goto L_0892FCE8;
    case 126u: goto L_0892FCF0;
    case 127u: goto L_0892FD70;
    case 128u: goto L_0892FD78;
    case 129u: goto L_0892FD7C;
    case 130u: goto L_0892FD94;
    case 131u: goto L_0892FDC4;
    case 132u: goto L_0892FDCC;
    case 133u: goto L_0892FDD4;
    case 134u: goto L_0892FDDC;
    case 135u: goto L_0892FDE4;
    case 136u: goto L_0892FDFC;
    case 137u: goto L_0892FE78;
    case 138u: goto L_0892FE8C;
    case 139u: goto L_0892FE94;
    case 140u: goto L_0892FE9C;
    case 141u: goto L_0892FEA0;
    case 142u: goto L_0892FEBC;
    case 143u: goto L_0892FEEC;
    case 144u: goto L_0892FEF4;
    case 145u: goto L_0892FEFC;
    case 146u: goto L_0892FF04;
    case 147u: goto L_0892FF34;
    case 148u: goto L_0892FFA8;
    case 149u: goto L_0892FFB0;
    case 150u: goto L_0892FFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892F000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (1025u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892F030;
      }
      goto L_0892F01C;
    }
L_0892F01C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892F030;
L_0892F030:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F044;
      }
      goto L_0892F038;
    }
L_0892F038:
    aot_gpr[31] = (0x0892F040u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F040u) goto L_0892F040;
    return;
L_0892F040:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F044;
L_0892F044:
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
L_0892F060:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F098;
      }
      goto L_0892F090;
    }
L_0892F090:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F0A8;
      }
      goto L_0892F098;
    }
L_0892F098:
    aot_gpr[31] = (0x0892F0A0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F0A0u) goto L_0892F0A0;
    return;
L_0892F0A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_0892F0A8;
L_0892F0A8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          goto L_0892F0C8;
      }
      goto L_0892F0B0;
    }
L_0892F0B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892F0C8;
L_0892F0C8:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1026u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892F158;
      }
      goto L_0892F144;
    }
L_0892F144:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892F158;
L_0892F158:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F16C;
      }
      goto L_0892F160;
    }
L_0892F160:
    aot_gpr[31] = (0x0892F168u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F168u) goto L_0892F168;
    return;
L_0892F168:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F16C;
L_0892F16C:
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
L_0892F188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F1B8;
      }
      goto L_0892F1B0;
    }
L_0892F1B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F1C8;
      }
      goto L_0892F1B8;
    }
L_0892F1B8:
    aot_gpr[31] = (0x0892F1C0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F1C0u) goto L_0892F1C0;
    return;
L_0892F1C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F1C8;
L_0892F1C8:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1028u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892F254;
      }
      goto L_0892F248;
    }
L_0892F248:
    aot_gpr[31] = (0x0892F250u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F250u) goto L_0892F250;
    return;
L_0892F250:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F254;
L_0892F254:
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
L_0892F26C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F29C;
      }
      goto L_0892F294;
    }
L_0892F294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F2AC;
      }
      goto L_0892F29C;
    }
L_0892F29C:
    aot_gpr[31] = (0x0892F2A4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F2A4u) goto L_0892F2A4;
    return;
L_0892F2A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F2AC;
L_0892F2AC:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(286));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1028u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892F338;
      }
      goto L_0892F32C;
    }
L_0892F32C:
    aot_gpr[31] = (0x0892F334u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F334u) goto L_0892F334;
    return;
L_0892F334:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F338;
L_0892F338:
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
L_0892F350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F380;
      }
      goto L_0892F378;
    }
L_0892F378:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F390;
      }
      goto L_0892F380;
    }
L_0892F380:
    aot_gpr[31] = (0x0892F388u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F388u) goto L_0892F388;
    return;
L_0892F388:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F390;
L_0892F390:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1029u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892F41C;
      }
      goto L_0892F410;
    }
L_0892F410:
    aot_gpr[31] = (0x0892F418u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F418u) goto L_0892F418;
    return;
L_0892F418:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F41C;
L_0892F41C:
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
L_0892F434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F464;
      }
      goto L_0892F45C;
    }
L_0892F45C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F474;
      }
      goto L_0892F464;
    }
L_0892F464:
    aot_gpr[31] = (0x0892F46Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F46Cu) goto L_0892F46C;
    return;
L_0892F46C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F474;
L_0892F474:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(286));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1029u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892F500;
      }
      goto L_0892F4F4;
    }
L_0892F4F4:
    aot_gpr[31] = (0x0892F4FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F4FCu) goto L_0892F4FC;
    return;
L_0892F4FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F500;
L_0892F500:
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
L_0892F518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F548;
      }
      goto L_0892F540;
    }
L_0892F540:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F558;
      }
      goto L_0892F548;
    }
L_0892F548:
    aot_gpr[31] = (0x0892F550u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F550u) goto L_0892F550;
    return;
L_0892F550:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F558;
L_0892F558:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (1030u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892F5E8;
      }
      goto L_0892F5DC;
    }
L_0892F5DC:
    aot_gpr[31] = (0x0892F5E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F5E4u) goto L_0892F5E4;
    return;
L_0892F5E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F5E8;
L_0892F5E8:
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
L_0892F600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F630;
      }
      goto L_0892F628;
    }
L_0892F628:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F640;
      }
      goto L_0892F630;
    }
L_0892F630:
    aot_gpr[31] = (0x0892F638u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F638u) goto L_0892F638;
    return;
L_0892F638:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F640;
L_0892F640:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(286));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (1030u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892F6D0;
      }
      goto L_0892F6C4;
    }
L_0892F6C4:
    aot_gpr[31] = (0x0892F6CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F6CCu) goto L_0892F6CC;
    return;
L_0892F6CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F6D0;
L_0892F6D0:
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
L_0892F6E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F718;
      }
      goto L_0892F710;
    }
L_0892F710:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F728;
      }
      goto L_0892F718;
    }
L_0892F718:
    aot_gpr[31] = (0x0892F720u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F720u) goto L_0892F720;
    return;
L_0892F720:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_0892F728;
L_0892F728:
    aot_gpr[6] = (aot_gpr[18] >> 24u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[18] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(286));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (1029u << 16u);
      if (branch_taken) {
          goto L_0892F7C0;
      }
      goto L_0892F79C;
    }
L_0892F79C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    goto L_0892F7A0;
L_0892F7A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F7A0;
      }
      goto L_0892F7C0;
    }
L_0892F7C0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F7D4;
      }
      goto L_0892F7C8;
    }
L_0892F7C8:
    aot_gpr[31] = (0x0892F7D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F7D0u) goto L_0892F7D0;
    return;
L_0892F7D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F7D4;
L_0892F7D4:
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
L_0892F7EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F824;
      }
      goto L_0892F81C;
    }
L_0892F81C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F834;
      }
      goto L_0892F824;
    }
L_0892F824:
    aot_gpr[31] = (0x0892F82Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F82Cu) goto L_0892F82C;
    return;
L_0892F82C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_0892F834;
L_0892F834:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          goto L_0892F854;
      }
      goto L_0892F83C;
    }
L_0892F83C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892F854;
L_0892F854:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(412));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (1025u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892F8E8;
      }
      goto L_0892F8D4;
    }
L_0892F8D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892F8E8;
L_0892F8E8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F8FC;
      }
      goto L_0892F8F0;
    }
L_0892F8F0:
    aot_gpr[31] = (0x0892F8F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F8F8u) goto L_0892F8F8;
    return;
L_0892F8F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F8FC;
L_0892F8FC:
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
L_0892F918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892F948;
      }
      goto L_0892F940;
    }
L_0892F940:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892F958;
      }
      goto L_0892F948;
    }
L_0892F948:
    aot_gpr[31] = (0x0892F950u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892F950u) goto L_0892F950;
    return;
L_0892F950:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892F958;
L_0892F958:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(415));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (1027u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892F9EC;
      }
      goto L_0892F9E0;
    }
L_0892F9E0:
    aot_gpr[31] = (0x0892F9E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892F9E8u) goto L_0892F9E8;
    return;
L_0892F9E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892F9EC;
L_0892F9EC:
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
L_0892FA04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892FA34;
      }
      goto L_0892FA2C;
    }
L_0892FA2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FA44;
      }
      goto L_0892FA34;
    }
L_0892FA34:
    aot_gpr[31] = (0x0892FA3Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892FA3Cu) goto L_0892FA3C;
    return;
L_0892FA3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892FA44;
L_0892FA44:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(412));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1028u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892FAD0;
      }
      goto L_0892FAC4;
    }
L_0892FAC4:
    aot_gpr[31] = (0x0892FACCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892FACCu) goto L_0892FACC;
    return;
L_0892FACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892FAD0;
L_0892FAD0:
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
L_0892FAE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892FB18;
      }
      goto L_0892FB10;
    }
L_0892FB10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FB28;
      }
      goto L_0892FB18;
    }
L_0892FB18:
    aot_gpr[31] = (0x0892FB20u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892FB20u) goto L_0892FB20;
    return;
L_0892FB20:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892FB28;
L_0892FB28:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(415));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1028u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892FBB4;
      }
      goto L_0892FBA8;
    }
L_0892FBA8:
    aot_gpr[31] = (0x0892FBB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892FBB0u) goto L_0892FBB0;
    return;
L_0892FBB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892FBB4;
L_0892FBB4:
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
L_0892FBCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892FBFC;
      }
      goto L_0892FBF4;
    }
L_0892FBF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FC0C;
      }
      goto L_0892FBFC;
    }
L_0892FBFC:
    aot_gpr[31] = (0x0892FC04u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892FC04u) goto L_0892FC04;
    return;
L_0892FC04:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892FC0C;
L_0892FC0C:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(511));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1029u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892FC98;
      }
      goto L_0892FC8C;
    }
L_0892FC8C:
    aot_gpr[31] = (0x0892FC94u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892FC94u) goto L_0892FC94;
    return;
L_0892FC94:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892FC98;
L_0892FC98:
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
L_0892FCB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892FCE0;
      }
      goto L_0892FCD8;
    }
L_0892FCD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FCF0;
      }
      goto L_0892FCE0;
    }
L_0892FCE0:
    aot_gpr[31] = (0x0892FCE8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892FCE8u) goto L_0892FCE8;
    return;
L_0892FCE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0892FCF0;
L_0892FCF0:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2047));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1029u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892FD7C;
      }
      goto L_0892FD70;
    }
L_0892FD70:
    aot_gpr[31] = (0x0892FD78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892FD78u) goto L_0892FD78;
    return;
L_0892FD78:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892FD7C;
L_0892FD7C:
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
L_0892FD94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892FDCC;
      }
      goto L_0892FDC4;
    }
L_0892FDC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FDDC;
      }
      goto L_0892FDCC;
    }
L_0892FDCC:
    aot_gpr[31] = (0x0892FDD4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892FDD4u) goto L_0892FDD4;
    return;
L_0892FDD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_0892FDDC;
L_0892FDDC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          goto L_0892FDFC;
      }
      goto L_0892FDE4;
    }
L_0892FDE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892FDFC;
L_0892FDFC:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(412));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1026u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892FE8C;
      }
      goto L_0892FE78;
    }
L_0892FE78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892FE8C;
L_0892FE8C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FEA0;
      }
      goto L_0892FE94;
    }
L_0892FE94:
    aot_gpr[31] = (0x0892FE9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892FE9Cu) goto L_0892FE9C;
    return;
L_0892FE9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0892FEA0;
L_0892FEA0:
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
L_0892FEBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892FEF4;
      }
      goto L_0892FEEC;
    }
L_0892FEEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0892FF04;
      }
      goto L_0892FEF4;
    }
L_0892FEF4:
    aot_gpr[31] = (0x0892FEFCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892FEFCu) goto L_0892FEFC;
    return;
L_0892FEFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[9] = (0u | 1u);
    goto L_0892FF04;
L_0892FF04:
    aot_gpr[10] = (aot_gpr[19] + static_cast<std::uint32_t>(-29052));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<16u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<17u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<18u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<19u, 4u>(vfpu_value); }
    aot_gpr[6] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892FF34u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 32u, 0x08A4C268u>(ctx, &aot_mem) && ctx.pc == 0x0892FF34u) goto L_0892FF34;
    return;
L_0892FF34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] >> 24u);
    aot_gpr[4] = (aot_gpr[4] & 15u);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[4]);
    aot_gpr[5] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (4608u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(415));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (1028u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 4u, 0x089300E4u>(ctx, &aot_mem); return;
      }
      goto L_0892FFA8;
    }
L_0892FFA8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0892FFB0;
L_0892FFB0:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<13u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<77u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 2u, 0x08930024u>(ctx, &aot_mem); return;
      }
      goto L_0892FFD8;
    }
L_0892FFD8:
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<38u, 3u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<1u, 64u, 13u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<45u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<45u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<34u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 2u>(vfpu_d); }
    ctx.pc = 0x08930000u; return;
}

void recomp_unit_0299(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0299_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_299(Runtime &runtime) {
    runtime.register_generated_unit(299u, 0x0892F000u, 4096u, &recomp_unit_0299, &recomp_unit_0299_entry);
    runtime.register_function(0x0892F000u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F01Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F030u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F038u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F040u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F044u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F060u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F090u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F098u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F0A0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F0A8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F0B0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F0C8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F144u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F158u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F160u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F168u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F16Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F188u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F1B0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F1B8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F1C0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F1C8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F248u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F250u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F254u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F26Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F294u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F29Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F2A4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F2ACu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F32Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F334u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F338u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F350u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F378u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F380u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F388u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F390u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F410u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F418u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F41Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F434u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F45Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F464u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F46Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F474u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F4F4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F4FCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F500u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F518u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F540u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F548u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F550u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F558u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F5DCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F5E4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F5E8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F600u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F628u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F630u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F638u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F640u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F6C4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F6CCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F6D0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F6E8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F710u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F718u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F720u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F728u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F79Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F7A0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F7C0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F7C8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F7D0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F7D4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F7ECu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F81Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F824u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F82Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F834u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F83Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F854u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F8D4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F8E8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F8F0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F8F8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F8FCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F918u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F940u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F948u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F950u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F958u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F9E0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F9E8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892F9ECu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FA04u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FA2Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FA34u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FA3Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FA44u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FAC4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FACCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FAD0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FAE8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FB10u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FB18u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FB20u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FB28u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FBA8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FBB0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FBB4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FBCCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FBF4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FBFCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FC04u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FC0Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FC8Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FC94u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FC98u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FCB0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FCD8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FCE0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FCE8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FCF0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FD70u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FD78u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FD7Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FD94u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FDC4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FDCCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FDD4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FDDCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FDE4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FDFCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FE78u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FE8Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FE94u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FE9Cu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FEA0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FEBCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FEECu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FEF4u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FEFCu, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FF04u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FF34u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FFA8u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FFB0u, &recomp_unit_0299, "recomp_unit_0299");
    runtime.register_function(0x0892FFD8u, &recomp_unit_0299, "recomp_unit_0299");
}
} // namespace psprecomp
