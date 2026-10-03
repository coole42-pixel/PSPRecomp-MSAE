#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0195[1006] = {
    1, 0, 0, 0, 2, 3, 0, 4, 5, 0, 0, 6, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0,
    0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 62, 0, 0, 63, 0, 0,
    64, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78,
    0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0,
    0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 133, 0, 134, 0, 135, 136,
    0, 137, 138, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
};
void recomp_unit_0195_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C7000u;
        entry_id = (entry_delta < 4024u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0195[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C7000;
    case 2u: goto L_088C7010;
    case 3u: goto L_088C7014;
    case 4u: goto L_088C701C;
    case 5u: goto L_088C7020;
    case 6u: goto L_088C702C;
    case 7u: goto L_088C7030;
    case 8u: goto L_088C703C;
    case 9u: goto L_088C704C;
    case 10u: goto L_088C7068;
    case 11u: goto L_088C7074;
    case 12u: goto L_088C7084;
    case 13u: goto L_088C70A4;
    case 14u: goto L_088C70AC;
    case 15u: goto L_088C70B8;
    case 16u: goto L_088C70C0;
    case 17u: goto L_088C70CC;
    case 18u: goto L_088C70E4;
    case 19u: goto L_088C70F8;
    case 20u: goto L_088C7178;
    case 21u: goto L_088C7180;
    case 22u: goto L_088C7194;
    case 23u: goto L_088C71A0;
    case 24u: goto L_088C71A8;
    case 25u: goto L_088C71B0;
    case 26u: goto L_088C71F0;
    case 27u: goto L_088C7208;
    case 28u: goto L_088C7214;
    case 29u: goto L_088C7268;
    case 30u: goto L_088C7278;
    case 31u: goto L_088C7288;
    case 32u: goto L_088C7298;
    case 33u: goto L_088C72A0;
    case 34u: goto L_088C72AC;
    case 35u: goto L_088C72C4;
    case 36u: goto L_088C72FC;
    case 37u: goto L_088C7330;
    case 38u: goto L_088C733C;
    case 39u: goto L_088C7344;
    case 40u: goto L_088C7354;
    case 41u: goto L_088C7364;
    case 42u: goto L_088C736C;
    case 43u: goto L_088C7374;
    case 44u: goto L_088C7388;
    case 45u: goto L_088C7398;
    case 46u: goto L_088C73CC;
    case 47u: goto L_088C73DC;
    case 48u: goto L_088C73E8;
    case 49u: goto L_088C7404;
    case 50u: goto L_088C7424;
    case 51u: goto L_088C7458;
    case 52u: goto L_088C74C4;
    case 53u: goto L_088C74DC;
    case 54u: goto L_088C7520;
    case 55u: goto L_088C7530;
    case 56u: goto L_088C7540;
    case 57u: goto L_088C7570;
    case 58u: goto L_088C75B4;
    case 59u: goto L_088C75D4;
    case 60u: goto L_088C75DC;
    case 61u: goto L_088C75E4;
    case 62u: goto L_088C75E8;
    case 63u: goto L_088C75F4;
    case 64u: goto L_088C7600;
    case 65u: goto L_088C7604;
    case 66u: goto L_088C7610;
    case 67u: goto L_088C761C;
    case 68u: goto L_088C7634;
    case 69u: goto L_088C7640;
    case 70u: goto L_088C7648;
    case 71u: goto L_088C7670;
    case 72u: goto L_088C768C;
    case 73u: goto L_088C76A8;
    case 74u: goto L_088C76C0;
    case 75u: goto L_088C76D4;
    case 76u: goto L_088C76E8;
    case 77u: goto L_088C76F4;
    case 78u: goto L_088C76FC;
    case 79u: goto L_088C770C;
    case 80u: goto L_088C7714;
    case 81u: goto L_088C7734;
    case 82u: goto L_088C7740;
    case 83u: goto L_088C7748;
    case 84u: goto L_088C7758;
    case 85u: goto L_088C7760;
    case 86u: goto L_088C7780;
    case 87u: goto L_088C778C;
    case 88u: goto L_088C7794;
    case 89u: goto L_088C77A0;
    case 90u: goto L_088C77AC;
    case 91u: goto L_088C77F4;
    case 92u: goto L_088C7810;
    case 93u: goto L_088C7840;
    case 94u: goto L_088C7848;
    case 95u: goto L_088C785C;
    case 96u: goto L_088C7870;
    case 97u: goto L_088C7878;
    case 98u: goto L_088C788C;
    case 99u: goto L_088C7894;
    case 100u: goto L_088C78AC;
    case 101u: goto L_088C7904;
    case 102u: goto L_088C7910;
    case 103u: goto L_088C7920;
    case 104u: goto L_088C7940;
    case 105u: goto L_088C7990;
    case 106u: goto L_088C799C;
    case 107u: goto L_088C7A10;
    case 108u: goto L_088C7A18;
    case 109u: goto L_088C7A20;
    case 110u: goto L_088C7A28;
    case 111u: goto L_088C7AB4;
    case 112u: goto L_088C7AE8;
    case 113u: goto L_088C7B00;
    case 114u: goto L_088C7B24;
    case 115u: goto L_088C7B58;
    case 116u: goto L_088C7B5C;
    case 117u: goto L_088C7BEC;
    case 118u: goto L_088C7C38;
    case 119u: goto L_088C7C40;
    case 120u: goto L_088C7C70;
    case 121u: goto L_088C7C90;
    case 122u: goto L_088C7CAC;
    case 123u: goto L_088C7CC0;
    case 124u: goto L_088C7CC4;
    case 125u: goto L_088C7CCC;
    case 126u: goto L_088C7D7C;
    case 127u: goto L_088C7D90;
    case 128u: goto L_088C7DA0;
    case 129u: goto L_088C7DC8;
    case 130u: goto L_088C7DD4;
    case 131u: goto L_088C7DDC;
    case 132u: goto L_088C7DE4;
    case 133u: goto L_088C7DE8;
    case 134u: goto L_088C7DF0;
    case 135u: goto L_088C7DF8;
    case 136u: goto L_088C7DFC;
    case 137u: goto L_088C7E04;
    case 138u: goto L_088C7E08;
    case 139u: goto L_088C7E10;
    case 140u: goto L_088C7E14;
    case 141u: goto L_088C7E34;
    case 142u: goto L_088C7E4C;
    case 143u: goto L_088C7E58;
    case 144u: goto L_088C7EE8;
    case 145u: goto L_088C7EF4;
    case 146u: goto L_088C7F00;
    case 147u: goto L_088C7F0C;
    case 148u: goto L_088C7FB4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C7000:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[16] = aot_fpr[16] + aot_fpr[0];
    { const bool branch_taken = aot_gpr[7] == 0u;
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
      if (branch_taken) {
          goto L_088C7014;
      }
      goto L_088C7010;
    }
L_088C7010:
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    goto L_088C7014;
L_088C7014:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7020;
      }
      goto L_088C701C;
    }
L_088C701C:
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    goto L_088C7020;
L_088C7020:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7030;
      }
      goto L_088C702C;
    }
L_088C702C:
    aot_fpr[16] = aot_fpr[16] - aot_fpr[12];
    goto L_088C7030;
L_088C7030:
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_088C7074;
      }
      goto L_088C703C;
    }
L_088C703C:
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7074;
      }
      goto L_088C704C;
    }
L_088C704C:
    aot_gpr[5] = (aot_gpr[3] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5212), aot_gpr[8]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[3]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7084;
      }
      goto L_088C7068;
    }
L_088C7068:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7772), aot_gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_088C70A4;
      }
      goto L_088C7074;
    }
L_088C7074:
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5212), aot_gpr[8]);
    goto L_088C7084;
L_088C7084:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7772)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7772), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5208)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 170u, 0x088C6F94u>(ctx, &aot_mem); return;
      }
      goto L_088C70A4;
    }
L_088C70A4:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C70E4;
      }
      goto L_088C70AC;
    }
L_088C70AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7776)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C70E4;
      }
      goto L_088C70B8;
    }
L_088C70B8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(5212));
      if (branch_taken) {
          goto L_088C70E4;
      }
      goto L_088C70C0;
    }
L_088C70C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088C70CCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 151u, 0x088C6DC4u>(ctx, &aot_mem) && ctx.pc == 0x088C70CCu) goto L_088C70CC;
    return;
L_088C70CC:
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[6] = (2188u << 16u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088C70E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28100));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 36u, 0x08A51300u>(ctx, &aot_mem) && ctx.pc == 0x088C70E4u) goto L_088C70E4;
    return;
L_088C70E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C70F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (18306u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2640), 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 512u);
    aot_gpr[17] = (0u | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_088C7178;
L_088C7178:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    goto L_088C7180;
L_088C7180:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C71A0;
      }
      goto L_088C7194;
    }
L_088C7194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C71A8;
      }
      goto L_088C71A0;
    }
L_088C71A0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088C71A8;
L_088C71A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7268;
      }
      goto L_088C71B0;
    }
L_088C71B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = aot_fpr[22] - aot_fpr[14];
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7268;
      }
      goto L_088C71F0;
    }
L_088C71F0:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C7208u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 54u, 0x089404C8u>(ctx, &aot_mem) && ctx.pc == 0x088C7208u) goto L_088C7208;
    return;
L_088C7208:
    aot_gpr[4] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7268;
      }
      goto L_088C7214;
    }
L_088C7214:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2640)));
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2356), static_cast<std::uint16_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2358), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = aot_fpr[22] - aot_fpr[14];
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2352), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2640), aot_gpr[4]);
    goto L_088C7268;
L_088C7268:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088C7180;
      }
      goto L_088C7278;
    }
L_088C7278:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_088C7178;
      }
      goto L_088C7288;
    }
L_088C7288:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2640)));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C72C4;
      }
      goto L_088C7298;
    }
L_088C7298:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2352));
      if (branch_taken) {
          goto L_088C72C4;
      }
      goto L_088C72A0;
    }
L_088C72A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C72ACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 155u, 0x088C6DF0u>(ctx, &aot_mem) && ctx.pc == 0x088C72ACu) goto L_088C72AC;
    return;
L_088C72AC:
    aot_gpr[5] = (aot_gpr[17] << 3u);
    aot_gpr[6] = (2188u << 16u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C72C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28144));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 144u, 0x08A51D10u>(ctx, &aot_mem) && ctx.pc == 0x088C72C4u) goto L_088C72C4;
    return;
L_088C72C4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C72FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7772), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7776), 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    goto L_088C7330;
L_088C7330:
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    goto L_088C733C;
L_088C733C:
    aot_gpr[31] = (0x088C7344u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 120u, 0x088C6B58u>(ctx, &aot_mem) && ctx.pc == 0x088C7344u) goto L_088C7344;
    return;
L_088C7344:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_088C733C;
      }
      goto L_088C7354;
    }
L_088C7354:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088C7330;
      }
      goto L_088C7364;
    }
L_088C7364:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088C736C;
L_088C736C:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_088C7374;
L_088C7374:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8292), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C7374;
      }
      goto L_088C7388;
    }
L_088C7388:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C736C;
      }
      goto L_088C7398;
    }
L_088C7398:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7984), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2644), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8280), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8288), static_cast<std::uint8_t>(0u));
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
L_088C73CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C73DCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_088C72FC;
L_088C73DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C73E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088C7404u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 123u, 0x088CAED4u>(ctx, &aot_mem) && ctx.pc == 0x088C7404u) goto L_088C7404;
    return;
L_088C7404:
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8284), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x088C7458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 102u, 0x0882F8C0u>(ctx, &aot_mem) && ctx.pc == 0x088C7458u) goto L_088C7458;
    return;
L_088C7458:
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16576u << 16u);
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[16];
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[13] = aot_fpr[14] / aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[15] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2340), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = aot_fpr[15] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2348), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088C74C4;
L_088C74C4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[18]);
    aot_fpr[22] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_fpr[22] = aot_fpr[22] + aot_fpr[24];
    goto L_088C74DC;
L_088C74DC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2336)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2340)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[16] + aot_fpr[12];
    aot_gpr[31] = (0x088C7520u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 143u, 0x088C6C98u>(ctx, &aot_mem) && ctx.pc == 0x088C7520u) goto L_088C7520;
    return;
L_088C7520:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_088C74DC;
      }
      goto L_088C7530;
    }
L_088C7530:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088C74C4;
      }
      goto L_088C7540;
    }
L_088C7540:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2640), 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7570:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7772), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7776), 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (7u << 16u);
      if (branch_taken) {
          goto L_088C75DC;
      }
      goto L_088C75B4;
    }
L_088C75B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088C75D4u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C75D4u) goto L_088C75D4;
    return;
L_088C75D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C75E8;
      }
      goto L_088C75DC;
    }
L_088C75DC:
    aot_gpr[31] = (0x088C75E4u);
    aot_gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088C75E4u) goto L_088C75E4;
    return;
L_088C75E4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_088C75E8;
L_088C75E8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (4u << 16u);
      if (branch_taken) {
          goto L_088C7604;
      }
      goto L_088C75F4;
    }
L_088C75F4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088C7600u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 182u, 0x0892EE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7600u) goto L_088C7600;
    return;
L_088C7600:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_088C7604;
L_088C7604:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8804), aot_gpr[19]);
    aot_gpr[31] = (0x088C7610u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 38u, 0x089303E0u>(ctx, &aot_mem) && ctx.pc == 0x088C7610u) goto L_088C7610;
    return;
L_088C7610:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C761Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088C73E8;
L_088C761C:
    aot_gpr[4] = (6u << 16u);
    aot_gpr[5] = (2188u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4096));
    aot_gpr[31] = (0x088C7634u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29644));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 129u, 0x08943908u>(ctx, &aot_mem) && ctx.pc == 0x088C7634u) goto L_088C7634;
    return;
L_088C7634:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7780), aot_gpr[2]);
    aot_gpr[31] = (0x088C7640u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C7424;
L_088C7640:
    aot_gpr[31] = (0x088C7648u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C72FC;
L_088C7648:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7988), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7992), 0u);
    aot_gpr[17] = (0u | 32768u);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7996), 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088C7670u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32288));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x088C7670u) goto L_088C7670;
    return;
L_088C7670:
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7992), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088C768Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32340));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x088C768Cu) goto L_088C768C;
    return;
L_088C768C:
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7988), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088C76A8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32392));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x088C76A8u) goto L_088C76A8;
    return;
L_088C76A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7996), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088C76C0u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 202u, 0x08943F40u>(ctx, &aot_mem) && ctx.pc == 0x088C76C0u) goto L_088C76C0;
    return;
L_088C76C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7992)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088C76D4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 202u, 0x08943F40u>(ctx, &aot_mem) && ctx.pc == 0x088C76D4u) goto L_088C76D4;
    return;
L_088C76D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7988)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088C76E8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 202u, 0x08943F40u>(ctx, &aot_mem) && ctx.pc == 0x088C76E8u) goto L_088C76E8;
    return;
L_088C76E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7992)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7734;
      }
      goto L_088C76F4;
    }
L_088C76F4:
    aot_gpr[31] = (0x088C76FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 81u, 0x0893582Cu>(ctx, &aot_mem) && ctx.pc == 0x088C76FCu) goto L_088C76FC;
    return;
L_088C76FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7992)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8180)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8164), aot_gpr[5]);
      if (branch_taken) {
          goto L_088C7714;
      }
      goto L_088C770C;
    }
L_088C770C:
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8180), aot_gpr[4]);
    goto L_088C7714;
L_088C7714:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8112)));
    aot_gpr[6] = (49024u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 2048u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8112), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8180), aot_gpr[4]);
    goto L_088C7734;
L_088C7734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7988)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7780;
      }
      goto L_088C7740;
    }
L_088C7740:
    aot_gpr[31] = (0x088C7748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 81u, 0x0893582Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7748u) goto L_088C7748;
    return;
L_088C7748:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7988)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8088)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8072), aot_gpr[5]);
      if (branch_taken) {
          goto L_088C7760;
      }
      goto L_088C7758;
    }
L_088C7758:
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8088), aot_gpr[4]);
    goto L_088C7760;
L_088C7760:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8020)));
    aot_gpr[6] = (49024u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 2048u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8020), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8056), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8088), aot_gpr[4]);
    goto L_088C7780;
L_088C7780:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7996)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C77F4;
      }
      goto L_088C778C;
    }
L_088C778C:
    aot_gpr[31] = (0x088C7794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 81u, 0x0893582Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7794u) goto L_088C7794;
    return;
L_088C7794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7996)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8256), aot_gpr[4]);
      if (branch_taken) {
          goto L_088C77AC;
      }
      goto L_088C77A0;
    }
L_088C77A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8272)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8272), aot_gpr[4]);
    goto L_088C77AC;
L_088C77AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8204)));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[4] = (aot_gpr[4] | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8204), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8204), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8224), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8225), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8226), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8228), 0u);
    aot_gpr[5] = (4u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8232), 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8204), aot_gpr[4]);
    aot_gpr[4] = (48588u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8252), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088C77F4;
L_088C77F4:
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
L_088C7810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7848;
      }
      goto L_088C7840;
    }
L_088C7840:
    aot_gpr[31] = (0x088C7848u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 167u, 0x088C6EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C7848u) goto L_088C7848;
    return;
L_088C7848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7984)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(7792));
      if (branch_taken) {
          goto L_088C788C;
      }
      goto L_088C785C;
    }
L_088C785C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7878;
      }
      goto L_088C7870;
    }
L_088C7870:
    aot_gpr[31] = (0x088C7878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 147u, 0x088C6D64u>(ctx, &aot_mem) && ctx.pc == 0x088C7878u) goto L_088C7878;
    return;
L_088C7878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7984)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C785C;
      }
      goto L_088C788C;
    }
L_088C788C:
    aot_gpr[31] = (0x088C7894u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C70F8;
L_088C7894:
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
L_088C78AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 4u, 0x088C8034u>(ctx, &aot_mem); return;
      }
      goto L_088C7904;
    }
L_088C7904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8808)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 4u, 0x088C8034u>(ctx, &aot_mem); return;
      }
      goto L_088C7910;
    }
L_088C7910:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 4u, 0x088C8034u>(ctx, &aot_mem); return;
      }
      goto L_088C7920;
    }
L_088C7920:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8280), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2644)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8288), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2644), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5208)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 4u, 0x088C8034u>(ctx, &aot_mem); return;
      }
      goto L_088C7940;
    }
L_088C7940:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7872)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7872));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (17280u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088C7990u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x088C7990u) goto L_088C7990;
    return;
L_088C7990:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088C799Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088C799Cu) goto L_088C799C;
    return;
L_088C799C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[29]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29052)));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[16] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C7A18;
      }
      goto L_088C7A10;
    }
L_088C7A10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7A28;
      }
      goto L_088C7A18;
    }
L_088C7A18:
    aot_gpr[31] = (0x088C7A20u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x088C7A20u) goto L_088C7A20;
    return;
L_088C7A20:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[8] = (0u | 1u);
    goto L_088C7A28;
L_088C7A28:
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(-29052));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (7168u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (18432u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (18688u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C7AB4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x088C7AB4u) goto L_088C7AB4;
    return;
L_088C7AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088C7AE8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C7AE8u) goto L_088C7AE8;
    return;
L_088C7AE8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (16128u << 16u);
      if (branch_taken) {
          goto L_088C7E34;
      }
      goto L_088C7B00;
    }
L_088C7B00:
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (16896u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (17060u << 16u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[17]);
    goto L_088C7B24;
L_088C7B24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2358)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2356)));
    aot_gpr[6] = (aot_gpr[6] << 7u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E14;
      }
      goto L_088C7B58;
    }
L_088C7B58:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    goto L_088C7B5C;
L_088C7B5C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(570))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(576))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (0u | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088C7C40;
      }
      goto L_088C7BEC;
    }
L_088C7BEC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7CC4;
      }
      goto L_088C7C38;
    }
L_088C7C38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7CC4;
      }
      goto L_088C7C40;
    }
L_088C7C40:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(596)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[6]);
      if (branch_taken) {
          goto L_088C7C90;
      }
      goto L_088C7C70;
    }
L_088C7C70:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(196));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
      if (branch_taken) {
          goto L_088C7CAC;
      }
      goto L_088C7C90;
    }
L_088C7C90:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[26];
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    goto L_088C7CAC;
L_088C7CAC:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7CC4;
      }
      goto L_088C7CC0;
    }
L_088C7CC0:
    aot_gpr[4] = (0u | 1u);
    goto L_088C7CC4;
L_088C7CC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E04;
      }
      goto L_088C7CCC;
    }
L_088C7CCC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(570))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<80u>(aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(576))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<80u>(aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C7D7Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 54u, 0x089404C8u>(ctx, &aot_mem) && ctx.pc == 0x088C7D7Cu) goto L_088C7D7C;
    return;
L_088C7D7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(594), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(594)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DFC;
      }
      goto L_088C7D90;
    }
L_088C7D90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8284)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DF8;
      }
      goto L_088C7DA0;
    }
L_088C7DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8280)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8280), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2644)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088C7DC8u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 19u, 0x088CA354u>(ctx, &aot_mem) && ctx.pc == 0x088C7DC8u) goto L_088C7DC8;
    return;
L_088C7DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
      if (branch_taken) {
          goto L_088C7DF0;
      }
      goto L_088C7DD4;
    }
L_088C7DD4:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DE4;
      }
      goto L_088C7DDC;
    }
L_088C7DDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C7DE8;
      }
      goto L_088C7DE4;
    }
L_088C7DE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(560), aot_gpr[16]);
    goto L_088C7DE8;
L_088C7DE8:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(560), 0u);
    goto L_088C7DF0;
L_088C7DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DFC;
      }
      goto L_088C7DF8;
    }
L_088C7DF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8288), static_cast<std::uint8_t>(aot_gpr[21]));
    goto L_088C7DFC;
L_088C7DFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
      if (branch_taken) {
          goto L_088C7E08;
      }
      goto L_088C7E04;
    }
L_088C7E04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    goto L_088C7E08;
L_088C7E08:
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
        goto L_088C7B5C;
    }
    goto L_088C7E10;
L_088C7E10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2640)));
    goto L_088C7E14;
L_088C7E14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[6]);
      if (branch_taken) {
          goto L_088C7B24;
      }
      goto L_088C7E34;
    }
L_088C7E34:
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[18] = (64u << 16u);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[19] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[23] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C7F0C;
      }
      goto L_088C7E4C;
    }
L_088C7E4C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8184));
    aot_gpr[31] = (0x088C7E58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088C7E58u) goto L_088C7E58;
    return;
L_088C7E58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (2u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 255u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[23] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[31] = (0x088C7EE8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C7EE8u) goto L_088C7EE8;
    return;
L_088C7EE8:
    aot_gpr[16] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F0C;
      }
      goto L_088C7EF4;
    }
L_088C7EF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[31] = (0x088C7F00u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 99u, 0x088CAD04u>(ctx, &aot_mem) && ctx.pc == 0x088C7F00u) goto L_088C7F00;
    return;
L_088C7F00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EF4;
      }
      goto L_088C7F0C;
    }
L_088C7F0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[18]);
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[6] = (~(aot_gpr[6] | 0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[7] = (aot_gpr[6] & 8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[23] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[9] = (~(aot_gpr[7] | 0u));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[6] = (aot_gpr[6] & 2u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (2u << 16u);
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[31] = (0x088C7FB4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C7FB4u) goto L_088C7FB4;
    return;
L_088C7FB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (7168u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (18432u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x088C8000u; return;
}

void recomp_unit_0195(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0195_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_195(Runtime &runtime) {
    runtime.register_generated_unit(195u, 0x088C7000u, 4096u, &recomp_unit_0195, &recomp_unit_0195_entry);
    runtime.register_function(0x088C7000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7010u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7014u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C701Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7020u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C702Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7030u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C703Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C704Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7074u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7084u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C70F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7178u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7180u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7194u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C71A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C71A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C71B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C71F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7208u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7214u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7268u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7278u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7288u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7298u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C72A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C72ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C72C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C72FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7330u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C733Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7344u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7354u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7364u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C736Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7374u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7388u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7398u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C73CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C73DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C73E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7404u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7424u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7458u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C74C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C74DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7520u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7530u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7540u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7570u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C75B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C75D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C75DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C75E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C75E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C75F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7600u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7604u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7610u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C761Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7634u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7640u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7648u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7670u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C768Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C76A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C76C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C76D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C76E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C76F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C76FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C770Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7714u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7734u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7740u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7748u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7758u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7760u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7780u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C778Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7794u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C77A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C77ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C77F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7810u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7840u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7848u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C785Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7870u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7878u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C788Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7894u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C78ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7904u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7910u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7920u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7940u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7990u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C799Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7A10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7A18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7A20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7A28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7AB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7AE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7B00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7B24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7B58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7B5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7BECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7C38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7C40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7C70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7C90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7CACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7CC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7CC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7CCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7D7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7D90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7DFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7E58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7EE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7EF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7F00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7F0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x088C7FB4u, &recomp_unit_0195, "recomp_unit_0195");
}
} // namespace psprecomp
