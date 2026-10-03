#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0196[1008] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 15, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 21, 0, 22, 0, 23, 0, 0, 24,
    25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91,
    92, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 120, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
};
void recomp_unit_0196_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C8000u;
        entry_id = (entry_delta < 4032u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0196[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C8000;
    case 2u: goto L_088C8024;
    case 3u: goto L_088C8030;
    case 4u: goto L_088C8034;
    case 5u: goto L_088C8074;
    case 6u: goto L_088C8094;
    case 7u: goto L_088C80A0;
    case 8u: goto L_088C80AC;
    case 9u: goto L_088C80B8;
    case 10u: goto L_088C80C0;
    case 11u: goto L_088C80C4;
    case 12u: goto L_088C80D4;
    case 13u: goto L_088C80E0;
    case 14u: goto L_088C80E8;
    case 15u: goto L_088C80EC;
    case 16u: goto L_088C80F4;
    case 17u: goto L_088C810C;
    case 18u: goto L_088C8148;
    case 19u: goto L_088C8150;
    case 20u: goto L_088C815C;
    case 21u: goto L_088C8160;
    case 22u: goto L_088C8168;
    case 23u: goto L_088C8170;
    case 24u: goto L_088C817C;
    case 25u: goto L_088C8180;
    case 26u: goto L_088C81A0;
    case 27u: goto L_088C81B4;
    case 28u: goto L_088C81C4;
    case 29u: goto L_088C81CC;
    case 30u: goto L_088C81D4;
    case 31u: goto L_088C81DC;
    case 32u: goto L_088C81E8;
    case 33u: goto L_088C8214;
    case 34u: goto L_088C822C;
    case 35u: goto L_088C8240;
    case 36u: goto L_088C82B4;
    case 37u: goto L_088C82B8;
    case 38u: goto L_088C835C;
    case 39u: goto L_088C8364;
    case 40u: goto L_088C8380;
    case 41u: goto L_088C8390;
    case 42u: goto L_088C8398;
    case 43u: goto L_088C83B0;
    case 44u: goto L_088C83C0;
    case 45u: goto L_088C83C8;
    case 46u: goto L_088C83E0;
    case 47u: goto L_088C83F0;
    case 48u: goto L_088C83F8;
    case 49u: goto L_088C8408;
    case 50u: goto L_088C845C;
    case 51u: goto L_088C84A8;
    case 52u: goto L_088C851C;
    case 53u: goto L_088C8520;
    case 54u: goto L_088C8544;
    case 55u: goto L_088C8548;
    case 56u: goto L_088C8550;
    case 57u: goto L_088C855C;
    case 58u: goto L_088C8614;
    case 59u: goto L_088C863C;
    case 60u: goto L_088C86CC;
    case 61u: goto L_088C86D4;
    case 62u: goto L_088C8708;
    case 63u: goto L_088C8710;
    case 64u: goto L_088C8718;
    case 65u: goto L_088C8720;
    case 66u: goto L_088C8754;
    case 67u: goto L_088C877C;
    case 68u: goto L_088C8804;
    case 69u: goto L_088C8818;
    case 70u: goto L_088C8838;
    case 71u: goto L_088C8848;
    case 72u: goto L_088C8878;
    case 73u: goto L_088C8890;
    case 74u: goto L_088C88A4;
    case 75u: goto L_088C88BC;
    case 76u: goto L_088C88C4;
    case 77u: goto L_088C88FC;
    case 78u: goto L_088C8900;
    case 79u: goto L_088C8908;
    case 80u: goto L_088C8968;
    case 81u: goto L_088C897C;
    case 82u: goto L_088C8984;
    case 83u: goto L_088C89A8;
    case 84u: goto L_088C89C0;
    case 85u: goto L_088C89D8;
    case 86u: goto L_088C89EC;
    case 87u: goto L_088C8A20;
    case 88u: goto L_088C8A28;
    case 89u: goto L_088C8A30;
    case 90u: goto L_088C8A74;
    case 91u: goto L_088C8A7C;
    case 92u: goto L_088C8A80;
    case 93u: goto L_088C8A88;
    case 94u: goto L_088C8A90;
    case 95u: goto L_088C8A9C;
    case 96u: goto L_088C8B08;
    case 97u: goto L_088C8B14;
    case 98u: goto L_088C8B24;
    case 99u: goto L_088C8B2C;
    case 100u: goto L_088C8B50;
    case 101u: goto L_088C8B84;
    case 102u: goto L_088C8B94;
    case 103u: goto L_088C8BB0;
    case 104u: goto L_088C8C14;
    case 105u: goto L_088C8C48;
    case 106u: goto L_088C8C5C;
    case 107u: goto L_088C8C8C;
    case 108u: goto L_088C8CA4;
    case 109u: goto L_088C8CF4;
    case 110u: goto L_088C8CF8;
    case 111u: goto L_088C8D6C;
    case 112u: goto L_088C8D74;
    case 113u: goto L_088C8D90;
    case 114u: goto L_088C8DA0;
    case 115u: goto L_088C8DA8;
    case 116u: goto L_088C8DC0;
    case 117u: goto L_088C8DD0;
    case 118u: goto L_088C8DD8;
    case 119u: goto L_088C8DDC;
    case 120u: goto L_088C8DF4;
    case 121u: goto L_088C8DF8;
    case 122u: goto L_088C8E34;
    case 123u: goto L_088C8E88;
    case 124u: goto L_088C8ED8;
    case 125u: goto L_088C8EE0;
    case 126u: goto L_088C8EF0;
    case 127u: goto L_088C8EF8;
    case 128u: goto L_088C8F50;
    case 129u: goto L_088C8F5C;
    case 130u: goto L_088C8FBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C8000:
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[6] = (18688u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8034;
      }
      goto L_088C8024;
    }
L_088C8024:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x088C8030u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x088C8030u) goto L_088C8030;
    return;
L_088C8030:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_088C8034;
L_088C8034:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088C8094u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8804)));
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 49u, 0x08930470u>(ctx, &aot_mem) && ctx.pc == 0x088C8094u) goto L_088C8094;
    return;
L_088C8094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8804)));
    aot_gpr[31] = (0x088C80A0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 185u, 0x0892EE94u>(ctx, &aot_mem) && ctx.pc == 0x088C80A0u) goto L_088C80A0;
    return;
L_088C80A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8804), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088C80AC;
L_088C80AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(7988)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C80C4;
      }
      goto L_088C80B8;
    }
L_088C80B8:
    aot_gpr[31] = (0x088C80C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088C80C0u) goto L_088C80C0;
    return;
L_088C80C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(7988), 0u);
    goto L_088C80C4;
L_088C80C4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C80AC;
      }
      goto L_088C80D4;
    }
L_088C80D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7996)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C80EC;
      }
      goto L_088C80E0;
    }
L_088C80E0:
    aot_gpr[31] = (0x088C80E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088C80E8u) goto L_088C80E8;
    return;
L_088C80E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7996), 0u);
    goto L_088C80EC;
L_088C80EC:
    aot_gpr[31] = (0x088C80F4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(7780));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 141u, 0x08942B24u>(ctx, &aot_mem) && ctx.pc == 0x088C80F4u) goto L_088C80F4;
    return;
L_088C80F4:
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
L_088C810C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2344)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2348)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[16];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088C8150;
      }
      goto L_088C8148;
    }
L_088C8148:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088C8160;
      }
      goto L_088C8150;
    }
L_088C8150:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8160;
      }
      goto L_088C815C;
    }
L_088C815C:
    aot_gpr[6] = (0u | 5u);
    goto L_088C8160;
L_088C8160:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088C8170;
      }
      goto L_088C8168;
    }
L_088C8168:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088C8180;
      }
      goto L_088C8170;
    }
L_088C8170:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8180;
      }
      goto L_088C817C;
    }
L_088C817C:
    aot_gpr[5] = (0u | 5u);
    goto L_088C8180;
L_088C8180:
    aot_gpr[5] = (aot_gpr[5] << 7u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] << 6u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C81A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C81B4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_088C810C;
L_088C81B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C81D4;
      }
      goto L_088C81C4;
    }
L_088C81C4:
    aot_gpr[31] = (0x088C81CCu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 123u, 0x088C6BD0u>(ctx, &aot_mem) && ctx.pc == 0x088C81CCu) goto L_088C81CC;
    return;
L_088C81CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C81DC;
      }
      goto L_088C81D4;
    }
L_088C81D4:
    aot_gpr[31] = (0x088C81DCu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 133u, 0x088C6C34u>(ctx, &aot_mem) && ctx.pc == 0x088C81DCu) goto L_088C81DC;
    return;
L_088C81DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C81E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8292));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C822C;
      }
      goto L_088C8214;
    }
L_088C8214:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(591)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088C822Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 101u, 0x088CAD30u>(ctx, &aot_mem) && ctx.pc == 0x088C822Cu) goto L_088C822C;
    return;
L_088C822C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[11] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[31]);
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) & 0x7FFFFFFFu);
    aot_gpr[11] = (16256u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[17] = aot_fpr[22] - aot_fpr[17];
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(596)));
    aot_gpr[11] = (16128u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(590)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[11] = (16640u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[19] = (aot_gpr[19] << 5u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    ctx.set_fpu_condition((aot_fpr[18] < aot_fpr[17]));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[18] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_088C82B8;
      }
      goto L_088C82B4;
    }
L_088C82B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(596), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_088C82B8;
L_088C82B8:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (16040u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] | 62915u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[17] = aot_fpr[17] + aot_fpr[19];
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[19] = aot_fpr[13] + aot_fpr[19];
    ctx.execute_vfpu_vscl_ct<20u, 22u, 16u, 3u>();
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[19]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088C8364;
      }
      goto L_088C835C;
    }
L_088C835C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_088C8380;
      }
      goto L_088C8364;
    }
L_088C8364:
    aot_gpr[5] = (49408u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088C8380;
    }
    goto L_088C8380;
L_088C8380:
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (49408u << 16u);
      if (branch_taken) {
          goto L_088C8398;
      }
      goto L_088C8390;
    }
L_088C8390:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_088C83B0;
      }
      goto L_088C8398;
    }
L_088C8398:
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[2] < aot_fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
        goto L_088C83B0;
    }
    goto L_088C83B0;
L_088C83B0:
    ctx.set_fpu_condition((aot_fpr[18] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (49408u << 16u);
      if (branch_taken) {
          goto L_088C83C8;
      }
      goto L_088C83C0;
    }
L_088C83C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C83E0;
      }
      goto L_088C83C8;
    }
L_088C83C8:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
        goto L_088C83E0;
    }
    goto L_088C83E0;
L_088C83E0:
    ctx.set_fpu_condition((aot_fpr[19] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C83F8;
      }
      goto L_088C83F0;
    }
L_088C83F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_088C8408;
      }
      goto L_088C83F8;
    }
L_088C83F8:
    ctx.set_fpu_condition((aot_fpr[19] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088C8408;
    }
    goto L_088C8408;
L_088C8408:
    aot_gpr[5] = (16766u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[5] = (17150u << 16u);
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[2] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[2]));
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088C84A8;
      }
      goto L_088C845C;
    }
L_088C845C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[16] - aot_fpr[12];
    aot_fpr[19] = aot_fpr[19] - aot_fpr[0];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[19];
    aot_fpr[12] = std::sqrt(aot_fpr[12]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20)));
    aot_fpr[12] = aot_fpr[16] + aot_fpr[12];
    goto L_088C84A8;
L_088C84A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<21u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C8520;
      }
      goto L_088C851C;
    }
L_088C851C:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088C8520;
L_088C8520:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C8548;
      }
      goto L_088C8544;
    }
L_088C8544:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088C8548;
L_088C8548:
    aot_gpr[31] = (0x088C8550u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 126u, 0x08884E70u>(ctx, &aot_mem) && ctx.pc == 0x088C8550u) goto L_088C8550;
    return;
L_088C8550:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088C855Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 131u, 0x08884EB0u>(ctx, &aot_mem) && ctx.pc == 0x088C855Cu) goto L_088C855C;
    return;
L_088C855C:
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[20] / aot_fpr[12];
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[18]);
    ctx.execute_vfpu_vx2i(20u, 16u, 1u, 0u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[2]);
    ctx.execute_vfpu_vx2i(21u, 16u, 1u, 0u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 4u>(vfpu_d); }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    ctx.execute_vfpu_vscl_ct<22u, 21u, 16u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 4u>(vfpu_d); }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<118u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(22u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(48u, 22u, 4u, 0u);
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<48u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<22u, 21u, 48u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<118u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(22u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(48u, 22u, 4u, 0u);
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<48u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<21u, 21u, 48u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<116u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(20u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(16u, 20u, 4u, 0u);
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(590)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088C8614u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 44u, 0x088CA61Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8614u) goto L_088C8614;
    return;
L_088C8614:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C863C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (aot_gpr[6] << 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_088C8710;
      }
      goto L_088C86CC;
    }
L_088C86CC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8710;
      }
      goto L_088C86D4;
    }
L_088C86D4:
    aot_gpr[4] = (aot_gpr[6] << 5u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (0u | 6u);
    aot_gpr[6] = (15948u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[31] = (0x088C8708u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 122u, 0x088CAE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8708u) goto L_088C8708;
    return;
L_088C8708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8754;
      }
      goto L_088C8710;
    }
L_088C8710:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8754;
      }
      goto L_088C8718;
    }
L_088C8718:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8754;
      }
      goto L_088C8720;
    }
L_088C8720:
    aot_gpr[4] = (aot_gpr[6] << 5u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[6] = (48665u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] | 39322u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[31] = (0x088C8754u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 121u, 0x088CAE70u>(ctx, &aot_mem) && ctx.pc == 0x088C8754u) goto L_088C8754;
    return;
L_088C8754:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(548), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(544), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), aot_gpr[17]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C877C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[30]);
    aot_fpr[28] = __builtin_bit_cast(float, 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[23] = (aot_gpr[6] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[30] = (aot_gpr[7] | 0u);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_gpr[16] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_088C8C5C;
      }
      goto L_088C8804;
    }
L_088C8804:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C8818u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 121u, 0x08884E14u>(ctx, &aot_mem) && ctx.pc == 0x088C8818u) goto L_088C8818;
    return;
L_088C8818:
    aot_gpr[4] = (aot_gpr[17] << 4u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8292)));
    aot_gpr[19] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[4]);
      if (branch_taken) {
          goto L_088C8900;
      }
      goto L_088C8838;
    }
L_088C8838:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C88BC;
      }
      goto L_088C8848;
    }
L_088C8848:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    aot_gpr[7] = (16128u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[5]);
      if (branch_taken) {
          goto L_088C8890;
      }
      goto L_088C8878;
    }
L_088C8878:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088C88A4;
      }
      goto L_088C8890;
    }
L_088C8890:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088C88A4;
L_088C88A4:
    aot_gpr[4] = (16968u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C88C4;
      }
      goto L_088C88BC;
    }
L_088C88BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C8900;
      }
      goto L_088C88C4;
    }
L_088C88C4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(532)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C8900;
      }
      goto L_088C88FC;
    }
L_088C88FC:
    aot_gpr[16] = (0u | 0u);
    goto L_088C8900;
L_088C8900:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A80;
      }
      goto L_088C8908;
    }
L_088C8908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(590)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C897C;
      }
      goto L_088C8968;
    }
L_088C8968:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088C8984;
      }
      goto L_088C897C;
    }
L_088C897C:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088C8984;
L_088C8984:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088C8A28;
      }
      goto L_088C89A8;
    }
L_088C89A8:
    aot_gpr[5] = (16768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16252u << 16u);
      if (branch_taken) {
          goto L_088C89EC;
      }
      goto L_088C89C0;
    }
L_088C89C0:
    aot_gpr[5] = (aot_gpr[5] | 10486u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16144u << 16u);
      if (branch_taken) {
          goto L_088C8A28;
      }
      goto L_088C89D8;
    }
L_088C89D8:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C8A28;
      }
      goto L_088C89EC;
    }
L_088C89EC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[31] = (0x088C8A20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C8240;
L_088C8A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A80;
      }
      goto L_088C8A28;
    }
L_088C8A28:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A7C;
      }
      goto L_088C8A30;
    }
L_088C8A30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(590)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[2] = (0u | 1u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[31] = (0x088C8A74u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088C8240;
L_088C8A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A80;
      }
      goto L_088C8A7C;
    }
L_088C8A7C:
    aot_gpr[16] = (0u | 0u);
    goto L_088C8A80;
L_088C8A80:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C5C;
      }
      goto L_088C8A88;
    }
L_088C8A88:
    aot_gpr[31] = (0x088C8A90u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 159u, 0x088C6E1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8A90u) goto L_088C8A90;
    return;
L_088C8A90:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C5C;
      }
      goto L_088C8A9C;
    }
L_088C8A9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (0u | 32767u);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(568), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(570), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-32767));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(574), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(576), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(578), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(544), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(532), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(592), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C8B14;
      }
      goto L_088C8B08;
    }
L_088C8B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C8B14;
L_088C8B14:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C8B24u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    goto L_088C81A0;
L_088C8B24:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088C8BB0;
      }
      goto L_088C8B2C;
    }
L_088C8B2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(548), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C8B50u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_088C863C;
L_088C8B50:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[31] = (0x088C8B84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_088C8240;
L_088C8B84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C48;
      }
      goto L_088C8B94;
    }
L_088C8B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_088C8C48;
      }
      goto L_088C8BB0;
    }
L_088C8BB0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[4] = (15692u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x088C8C14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_088C8240;
L_088C8C14:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[31] = (0x088C8C48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_088C8240;
L_088C8C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8292), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C8C5C;
L_088C8C5C:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_088C8C8C;
L_088C8C8C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8CA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_gpr[10] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[15] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(596)));
    aot_gpr[11] = (16128u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(590)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] << 5u);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[11] = (16640u << 16u);
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[11]);
      if (branch_taken) {
          goto L_088C8CF8;
      }
      goto L_088C8CF4;
    }
L_088C8CF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(596), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_088C8CF8;
L_088C8CF8:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[7]);
    ctx.execute_vfpu_vscl_ct<20u, 22u, 16u, 3u>();
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[10]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088C8D74;
      }
      goto L_088C8D6C;
    }
L_088C8D6C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_088C8D90;
      }
      goto L_088C8D74;
    }
L_088C8D74:
    aot_gpr[8] = (49408u << 16u);
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[19] < aot_fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088C8D90;
    }
    goto L_088C8D90;
L_088C8D90:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[8] = (49408u << 16u);
      if (branch_taken) {
          goto L_088C8DA8;
      }
      goto L_088C8DA0;
    }
L_088C8DA0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_088C8DC0;
      }
      goto L_088C8DA8;
    }
L_088C8DA8:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088C8DC0;
    }
    goto L_088C8DC0;
L_088C8DC0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[8] = (49408u << 16u);
      if (branch_taken) {
          goto L_088C8DDC;
      }
      goto L_088C8DD0;
    }
L_088C8DD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (16766u << 16u);
      if (branch_taken) {
          goto L_088C8DF8;
      }
      goto L_088C8DD8;
    }
L_088C8DD8:
    aot_gpr[8] = (49408u << 16u);
    goto L_088C8DDC;
L_088C8DDC:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088C8DF4;
    }
    goto L_088C8DF4;
L_088C8DF4:
    aot_gpr[8] = (16766u << 16u);
    goto L_088C8DF8;
L_088C8DF8:
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[8]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_088C8E88;
      }
      goto L_088C8E34;
    }
L_088C8E34:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(590)));
    aot_gpr[10] = (aot_gpr[8] << 5u);
    aot_gpr[8] = (aot_gpr[8] << 5u);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(-32));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = aot_fpr[18] - aot_fpr[16];
    aot_fpr[19] = aot_fpr[19] - aot_fpr[0];
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[16] = aot_fpr[16] + aot_fpr[19];
    aot_fpr[16] = std::sqrt(aot_fpr[16]);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[10]);
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-20)));
    aot_gpr[8] = (16000u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[8]);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[18] = aot_fpr[18] + aot_fpr[16];
    goto L_088C8E88;
L_088C8E88:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C8EE0;
      }
      goto L_088C8ED8;
    }
L_088C8ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8EE0;
      }
      goto L_088C8EE0;
    }
L_088C8EE0:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (0u | 128u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088C8EF8;
      }
      goto L_088C8EF0;
    }
L_088C8EF0:
    aot_gpr[8] = (0u | 255u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_088C8EF8;
L_088C8EF8:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[4] << 16u);
    aot_gpr[10] = (65280u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[4] << 8u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[11] = (aot_gpr[6] << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[11] | aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[6] << 8u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[31] = (0x088C8F50u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 44u, 0x088CA61Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8F50u) goto L_088C8F50;
    return;
L_088C8F50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8F5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u < aot_gpr[10] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[19]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 33u, 0x088C935Cu>(ctx, &aot_mem); return;
      }
      goto L_088C8FBC;
    }
L_088C8FBC:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    aot_gpr[4] = (aot_gpr[20] << 4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[21] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[9] << 2u);
    ctx.pc = 0x088C9000u; return;
}

void recomp_unit_0196(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0196_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_196(Runtime &runtime) {
    runtime.register_generated_unit(196u, 0x088C8000u, 4096u, &recomp_unit_0196, &recomp_unit_0196_entry);
    runtime.register_function(0x088C8000u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8024u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8030u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8034u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8074u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8094u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C80F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C810Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8148u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8150u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C815Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8160u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8168u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8170u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C817Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8180u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C81E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8214u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C822Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8240u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C82B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C82B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C835Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8364u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8380u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8390u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8398u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C83B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C83C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C83C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C83E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C83F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C83F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8408u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C845Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C84A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C851Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8520u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8544u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8548u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8550u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C855Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8614u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C863Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C86CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C86D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8708u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8710u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8718u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8720u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8754u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C877Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8804u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8818u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8838u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8848u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8878u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8890u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C88A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C88BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C88C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C88FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8900u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8908u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8968u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C897Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8984u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C89A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C89C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C89D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C89ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8A9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8B94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8BB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8C14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8C48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8C5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8C8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8CA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8CF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8CF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8D6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8D74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8D90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8DF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8E34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8E88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8ED8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8EE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8EF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8F50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8F5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x088C8FBCu, &recomp_unit_0196, "recomp_unit_0196");
}
} // namespace psprecomp
