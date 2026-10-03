#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0306[1020] = {
    1, 0, 0, 2, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0,
    0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 70, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
};
void recomp_unit_0306_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08936000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0306[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08936000;
    case 2u: goto L_0893600C;
    case 3u: goto L_08936014;
    case 4u: goto L_0893601C;
    case 5u: goto L_08936020;
    case 6u: goto L_08936038;
    case 7u: goto L_0893605C;
    case 8u: goto L_08936084;
    case 9u: goto L_089360A4;
    case 10u: goto L_089360AC;
    case 11u: goto L_089360C8;
    case 12u: goto L_089360DC;
    case 13u: goto L_089360E8;
    case 14u: goto L_089360F0;
    case 15u: goto L_08936108;
    case 16u: goto L_08936110;
    case 17u: goto L_08936118;
    case 18u: goto L_08936120;
    case 19u: goto L_08936128;
    case 20u: goto L_08936130;
    case 21u: goto L_08936138;
    case 22u: goto L_0893613C;
    case 23u: goto L_08936150;
    case 24u: goto L_08936198;
    case 25u: goto L_089361C8;
    case 26u: goto L_0893620C;
    case 27u: goto L_08936218;
    case 28u: goto L_08936234;
    case 29u: goto L_08936244;
    case 30u: goto L_08936250;
    case 31u: goto L_08936350;
    case 32u: goto L_08936374;
    case 33u: goto L_08936394;
    case 34u: goto L_089364B4;
    case 35u: goto L_08936528;
    case 36u: goto L_08936558;
    case 37u: goto L_08936578;
    case 38u: goto L_089365F0;
    case 39u: goto L_08936624;
    case 40u: goto L_0893662C;
    case 41u: goto L_089366A4;
    case 42u: goto L_089366F4;
    case 43u: goto L_08936708;
    case 44u: goto L_08936710;
    case 45u: goto L_08936718;
    case 46u: goto L_08936720;
    case 47u: goto L_08936728;
    case 48u: goto L_08936730;
    case 49u: goto L_08936740;
    case 50u: goto L_0893675C;
    case 51u: goto L_08936770;
    case 52u: goto L_089367A4;
    case 53u: goto L_089367D8;
    case 54u: goto L_089367E0;
    case 55u: goto L_089367EC;
    case 56u: goto L_08936864;
    case 57u: goto L_08936870;
    case 58u: goto L_089368A4;
    case 59u: goto L_089368B0;
    case 60u: goto L_08936938;
    case 61u: goto L_08936944;
    case 62u: goto L_08936988;
    case 63u: goto L_08936994;
    case 64u: goto L_08936A2C;
    case 65u: goto L_08936A34;
    case 66u: goto L_08936A44;
    case 67u: goto L_08936A5C;
    case 68u: goto L_08936A60;
    case 69u: goto L_08936A84;
    case 70u: goto L_08936A88;
    case 71u: goto L_08936A98;
    case 72u: goto L_08936AA4;
    case 73u: goto L_08936AAC;
    case 74u: goto L_08936ABC;
    case 75u: goto L_08936ACC;
    case 76u: goto L_08936AFC;
    case 77u: goto L_08936B10;
    case 78u: goto L_08936B18;
    case 79u: goto L_08936B1C;
    case 80u: goto L_08936B44;
    case 81u: goto L_08936B64;
    case 82u: goto L_08936B98;
    case 83u: goto L_08936BCC;
    case 84u: goto L_08936C08;
    case 85u: goto L_08936C3C;
    case 86u: goto L_08936C54;
    case 87u: goto L_08936C60;
    case 88u: goto L_08936CE4;
    case 89u: goto L_08936D00;
    case 90u: goto L_08936D1C;
    case 91u: goto L_08936D24;
    case 92u: goto L_08936D7C;
    case 93u: goto L_08936DA8;
    case 94u: goto L_08936DEC;
    case 95u: goto L_08936DF4;
    case 96u: goto L_08936E68;
    case 97u: goto L_08936F04;
    case 98u: goto L_08936F20;
    case 99u: goto L_08936FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08936000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0893600C;
L_0893600C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936020;
      }
      goto L_08936014;
    }
L_08936014:
    aot_gpr[31] = (0x0893601Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 95u, 0x08A546ACu>(ctx, &aot_mem) && ctx.pc == 0x0893601Cu) goto L_0893601C;
    return;
L_0893601C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_08936020;
L_08936020:
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
L_08936038:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0893605Cu);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0893605Cu) goto L_0893605C;
    return;
L_0893605C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1872));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08936084u);
    aot_gpr[6] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08936084u) goto L_08936084;
    return;
L_08936084:
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_089360AC;
      }
      goto L_089360A4;
    }
L_089360A4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089360AC;
L_089360AC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089360C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(92));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089360E8;
      }
      goto L_089360DC;
    }
L_089360DC:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089360E8;
L_089360E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089360F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (0u | 72u);
      if (branch_taken) {
          goto L_0893613C;
      }
      goto L_08936108;
    }
L_08936108:
    aot_gpr[31] = (0x08936110u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 21u, 0x08A53158u>(ctx, &aot_mem) && ctx.pc == 0x08936110u) goto L_08936110;
    return;
L_08936110:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936128;
      }
      goto L_08936118;
    }
L_08936118:
    aot_gpr[31] = (0x08936120u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08936120u) goto L_08936120;
    return;
L_08936120:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08936128;
      }
      goto L_08936128;
    }
L_08936128:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893613C;
      }
      goto L_08936130;
    }
L_08936130:
    aot_gpr[31] = (0x08936138u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 30u, 0x089442CCu>(ctx, &aot_mem) && ctx.pc == 0x08936138u) goto L_08936138;
    return;
L_08936138:
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(72));
    goto L_0893613C;
L_0893613C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x08936198u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    goto L_089360F0;
L_08936198:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(82)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (2u << 16u);
    aot_gpr[18] = (8704u << 16u);
    aot_gpr[22] = (18944u << 16u);
    aot_gpr[30] = (19200u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (4u << 16u);
      if (branch_taken) {
          goto L_0893620C;
      }
      goto L_089361C8;
    }
L_089361C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(82));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[19] = (0u < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] | aot_gpr[18]);
      if (branch_taken) {
          goto L_08936234;
      }
      goto L_0893620C;
    }
L_0893620C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08936218u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25312));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08936218u) goto L_08936218;
    return;
L_08936218:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[19] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] | aot_gpr[18]);
    goto L_08936234;
L_08936234:
    aot_gpr[5] = (aot_gpr[4] >> 24u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08936250;
      }
      goto L_08936244;
    }
L_08936244:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08936250;
L_08936250:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (2u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (8448u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (7424u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(41)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] << 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (57088u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    aot_gpr[7] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    aot_gpr[7] = (57600u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08936374;
    }
    goto L_08936350;
L_08936350:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (21248u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] >> 2u);
      if (branch_taken) {
          goto L_08936394;
      }
      goto L_08936374;
    }
L_08936374:
    aot_gpr[6] = (21248u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    goto L_08936394;
L_08936394:
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28956), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    aot_gpr[7] = (21760u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    aot_gpr[7] = (22016u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] >> 24u);
    aot_gpr[7] = (22528u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (22272u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[6] = (23296u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (7680u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 2048u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (5888u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28968), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 8192u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08936528;
      }
      goto L_089364B4;
    }
L_089364B4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28948)));
    aot_gpr[4] = (18304u << 16u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (14208u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[4] - aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] >> 2u);
      if (branch_taken) {
          goto L_08936558;
      }
      goto L_08936528;
    }
L_08936528:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[4] - aot_gpr[21]);
    aot_gpr[22] = (aot_gpr[22] >> 2u);
    goto L_08936558;
L_08936558:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28964), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 16384u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089365F0;
      }
      goto L_08936578;
    }
L_08936578:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28948)));
    aot_gpr[4] = (18304u << 16u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (14208u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[30] = (0u < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[30] & 255u);
      if (branch_taken) {
          goto L_08936624;
      }
      goto L_089365F0;
    }
L_089365F0:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[30] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[30] = (aot_gpr[30] & 255u);
    goto L_08936624;
L_08936624:
    if (aot_gpr[30] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089366A4;
    }
    goto L_0893662C;
L_0893662C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[4] = (17792u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (50560u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[14] = aot_fpr[15] / aot_fpr[14];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (15872u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 2u);
      if (branch_taken) {
          goto L_089366F4;
      }
      goto L_089366A4;
    }
L_089366A4:
    aot_gpr[5] = (15872u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (48896u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 1024u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (16128u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    goto L_089366F4;
L_089366F4:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28960), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936740;
      }
      goto L_08936708;
    }
L_08936708:
    aot_gpr[31] = (0x08936710u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 21u, 0x08A53158u>(ctx, &aot_mem) && ctx.pc == 0x08936710u) goto L_08936710;
    return;
L_08936710:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936728;
      }
      goto L_08936718;
    }
L_08936718:
    aot_gpr[31] = (0x08936720u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08936720u) goto L_08936720;
    return;
L_08936720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08936728;
      }
      goto L_08936728;
    }
L_08936728:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936740;
      }
      goto L_08936730;
    }
L_08936730:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08936740u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 43u, 0x08944360u>(ctx, &aot_mem) && ctx.pc == 0x08936740u) goto L_08936740;
    return;
L_08936740:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[17] ^ aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936770;
      }
      goto L_0893675C;
    }
L_0893675C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08936770u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25232));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08936770u) goto L_08936770;
    return;
L_08936770:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089367A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08936B1C;
      }
      goto L_089367D8;
    }
L_089367D8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936B1C;
      }
      goto L_089367E0;
    }
L_089367E0:
    aot_gpr[6] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08936864;
      }
      goto L_089367EC;
    }
L_089367EC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28948)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (18304u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[5] = (14208u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28968)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[7]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[6] = (18944u << 16u);
    aot_gpr[5] = (0u | 1u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
      if (branch_taken) {
          goto L_089368A4;
      }
      goto L_08936864;
    }
L_08936864:
    aot_gpr[6] = (aot_gpr[17] & 4u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089368A4;
      }
      goto L_08936870;
    }
L_08936870:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28968)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] >> 8u);
    aot_gpr[6] = (18944u << 16u);
    aot_gpr[6] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[6]);
    goto L_089368A4;
L_089368A4:
    aot_gpr[6] = (aot_gpr[17] & 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936938;
      }
      goto L_089368B0;
    }
L_089368B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28948)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (18304u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[6] = (14208u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28964)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (19200u << 16u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[8] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[29] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[6]);
      if (branch_taken) {
          goto L_08936988;
      }
      goto L_08936938;
    }
L_08936938:
    aot_gpr[6] = (aot_gpr[17] & 8u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936988;
      }
      goto L_08936944;
    }
L_08936944:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28964)));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[8] >> 8u);
    aot_gpr[7] = (19200u << 16u);
    aot_gpr[8] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[6]);
    goto L_08936988;
L_08936988:
    aot_gpr[6] = (aot_gpr[17] & 32u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936A2C;
      }
      goto L_08936994;
    }
L_08936994:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-28956)));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[9] = (256u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[9]);
    aot_gpr[9] = (21760u << 16u);
    aot_gpr[10] = (aot_gpr[5] << 2u);
    aot_gpr[9] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[29] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[5] << 2u);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[9] = (22016u << 16u);
    aot_gpr[10] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] >> 24u);
    aot_gpr[6] = (22528u << 16u);
    aot_gpr[8] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[6]);
    goto L_08936A2C;
L_08936A2C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936A98;
      }
      goto L_08936A34;
    }
L_08936A34:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08936A98;
      }
      goto L_08936A44;
    }
L_08936A44:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08936A88;
      }
      goto L_08936A5C;
    }
L_08936A5C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08936A60;
L_08936A60:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936A60;
      }
      goto L_08936A84;
    }
L_08936A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08936A88;
L_08936A88:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936A44;
      }
      goto L_08936A98;
    }
L_08936A98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[17] & 16u);
      if (branch_taken) {
          goto L_08936B18;
      }
      goto L_08936AA4;
    }
L_08936AA4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936B18;
      }
      goto L_08936AAC;
    }
L_08936AAC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08936B10;
      }
      goto L_08936ABC;
    }
L_08936ABC:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (2216u << 16u);
    goto L_08936ACC;
L_08936ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28960)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08936AFCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 43u, 0x08944360u>(ctx, &aot_mem) && ctx.pc == 0x08936AFCu) goto L_08936AFC;
    return;
L_08936AFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936ACC;
      }
      goto L_08936B10;
    }
L_08936B10:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[4]);
    goto L_08936B18;
L_08936B18:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    goto L_08936B1C;
L_08936B1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936B44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-28940)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 14u, 0x089373B4u>(ctx, &aot_mem); return;
      }
      goto L_08936B64;
    }
L_08936B64:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-28912)));
    aot_gpr[3] = (256u << 16u);
    aot_gpr[8] = (15872u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(14));
    aot_gpr[13] = (2216u << 16u);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[11] = (18944u << 16u);
    aot_gpr[10] = (19200u << 16u);
    aot_gpr[9] = (4u << 16u);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[7] = (16128u << 16u);
      if (branch_taken) {
          goto L_08936C3C;
      }
      goto L_08936B98;
    }
L_08936B98:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (9216u << 16u);
    aot_gpr[15] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (64u << 16u);
    aot_gpr[12] = (aot_gpr[12] & aot_gpr[14]);
    aot_gpr[12] = (0u < aot_gpr[12] ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[12] & 255u);
    if (aot_gpr[12] == 0u) {
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08936C08;
    }
    goto L_08936BCC;
L_08936BCC:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (56576u << 16u);
    aot_gpr[15] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(39)));
    aot_gpr[15] = (56575u << 16u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] << 8u);
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(2));
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[12]);
      if (branch_taken) {
          goto L_08936C3C;
      }
      goto L_08936C08;
    }
L_08936C08:
    aot_gpr[14] = (56578u << 16u);
    aot_gpr[15] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(39)));
    aot_gpr[15] = (56575u << 16u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] << 8u);
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    goto L_08936C3C;
L_08936C3C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[15] = (aot_gpr[12] >> 24u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[15]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[15]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08936C60;
      }
      goto L_08936C54;
    }
L_08936C54:
    aot_gpr[15] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[15]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08936C60;
L_08936C60:
    aot_gpr[14] = (aot_gpr[14] & 2u);
    aot_gpr[14] = (0u < aot_gpr[14] ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[14] & 255u);
    aot_gpr[14] = (aot_gpr[14] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (7424u << 16u);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[3]);
    aot_gpr[24] = (57344u << 16u);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[3]);
    aot_gpr[24] = (57600u << 16u);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[15] = (1u << 16u);
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[15]);
    aot_gpr[14] = (0u < aot_gpr[14] ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[14] & 255u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936D00;
      }
      goto L_08936CE4;
    }
L_08936CE4:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (21248u << 16u);
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(-28935)));
      if (branch_taken) {
          goto L_08936D1C;
      }
      goto L_08936D00;
    }
L_08936D00:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (21248u << 16u);
    aot_gpr[24] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(-28935)));
    goto L_08936D1C;
L_08936D1C:
    if (aot_gpr[13] == 0u) {
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08936F20;
    }
    goto L_08936D24;
L_08936D24:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (8704u << 16u);
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (8448u << 16u);
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (5888u << 16u);
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(43)));
    aot_gpr[24] = (0u | 5u);
    aot_gpr[14] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[15] != aot_gpr[24];
    aot_gpr[13] = (23808u << 16u);
      if (branch_taken) {
          goto L_08936DA8;
      }
      goto L_08936D7C;
    }
L_08936D7C:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (57088u << 16u);
    aot_gpr[25] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(50));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[15] = (aot_gpr[15] & 2048u);
    aot_gpr[15] = (0u < aot_gpr[15] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[15] = (aot_gpr[15] & 255u);
      if (branch_taken) {
          goto L_08936DEC;
      }
      goto L_08936DA8;
    }
L_08936DA8:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(41)));
    aot_gpr[15] = (aot_gpr[15] << 4u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[25] << 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (57088u << 16u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[25]);
    aot_gpr[25] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[15] = (aot_gpr[15] & 2048u);
    aot_gpr[15] = (0u < aot_gpr[15] ? 1u : 0u);
    aot_gpr[15] = (aot_gpr[15] & 255u);
    goto L_08936DEC;
L_08936DEC:
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[24] = (2219u << 16u);
      if (branch_taken) {
          goto L_08936E68;
      }
      goto L_08936DF4;
    }
L_08936DF4:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6144u << 16u);
    aot_gpr[25] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6400u << 16u);
    aot_gpr[25] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6656u << 16u);
    aot_gpr[25] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6912u << 16u);
    aot_gpr[25] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (23808u << 16u);
    aot_gpr[25] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(-28933)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[13]);
      if (branch_taken) {
          goto L_08936F04;
      }
      goto L_08936E68;
    }
L_08936E68:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(22336));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (6144u << 16u);
    aot_gpr[25] = (aot_gpr[25] | aot_gpr[31]);
    aot_gpr[31] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(133)));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (6400u << 16u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[31]);
    aot_gpr[31] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(134)));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (6656u << 16u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[31]);
    aot_gpr[31] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(135)));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (6912u << 16u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[31]);
    aot_gpr[31] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(136)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[15] & aot_gpr[3]);
    aot_gpr[25] = (23552u << 16u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[25]);
    aot_gpr[25] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(-28933)));
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[13]);
    goto L_08936F04;
L_08936F04:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (0u | 1u);
    aot_gpr[24] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-28934), static_cast<std::uint8_t>(aot_gpr[15]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 2u, 0x089370B4u>(ctx, &aot_mem); return;
      }
      goto L_08936F20;
    }
L_08936F20:
    aot_gpr[14] = (2u << 16u);
    aot_gpr[13] = (aot_gpr[13] & aot_gpr[14]);
    aot_gpr[13] = (0u < aot_gpr[13] ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[13] & 255u);
    aot_gpr[13] = (0u < aot_gpr[13] ? 1u : 0u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (8704u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (2u << 16u);
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(8));
    aot_gpr[13] = (aot_gpr[13] & aot_gpr[14]);
    aot_gpr[13] = (0u < aot_gpr[13] ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[13] & 255u);
    aot_gpr[13] = (0u < aot_gpr[13] ? 1u : 0u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (8448u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[13] & 2048u);
    aot_gpr[13] = (0u < aot_gpr[13] ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[13] & 255u);
    aot_gpr[13] = (aot_gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[15] = (5888u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(41)));
    aot_gpr[13] = (aot_gpr[13] << 4u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[15] << 8u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (57088u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(-28934)));
    if (aot_gpr[13] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        (void)rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 3u, 0x089370B8u>(ctx, &aot_mem); return;
    }
    goto L_08936FEC;
L_08936FEC:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[13] = (aot_gpr[13] & 2048u);
    aot_gpr[13] = (0u < aot_gpr[13] ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[13] & 255u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[14] = (2219u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 2u, 0x089370B4u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 1u, 0x08937004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0306(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0306_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_306(Runtime &runtime) {
    runtime.register_generated_unit(306u, 0x08936000u, 4096u, &recomp_unit_0306, &recomp_unit_0306_entry);
    runtime.register_function(0x08936000u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893600Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936014u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893601Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936020u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936038u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893605Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936084u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089360A4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089360ACu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089360C8u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089360DCu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089360E8u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089360F0u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936108u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936110u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936118u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936120u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936128u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936130u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936138u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893613Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936150u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936198u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089361C8u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893620Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936218u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936234u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936244u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936250u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936350u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936374u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936394u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089364B4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936528u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936558u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936578u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089365F0u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936624u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893662Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089366A4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089366F4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936708u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936710u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936718u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936720u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936728u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936730u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936740u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x0893675Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936770u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089367A4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089367D8u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089367E0u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089367ECu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936864u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936870u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089368A4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x089368B0u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936938u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936944u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936988u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936994u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A2Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A34u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A44u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A5Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A60u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A84u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A88u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936A98u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936AA4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936AACu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936ABCu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936ACCu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936AFCu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936B10u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936B18u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936B1Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936B44u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936B64u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936B98u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936BCCu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936C08u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936C3Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936C54u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936C60u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936CE4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936D00u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936D1Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936D24u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936D7Cu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936DA8u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936DECu, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936DF4u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936E68u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936F04u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936F20u, &recomp_unit_0306, "recomp_unit_0306");
    runtime.register_function(0x08936FECu, &recomp_unit_0306, "recomp_unit_0306");
}
} // namespace psprecomp
