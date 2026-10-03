#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0581[1014] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0,
    0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 68, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 73, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 84, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 88, 0, 89, 0, 90, 0, 91,
};
void recomp_unit_0581_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A49004u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0581[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A49004;
    case 2u: goto L_08A49010;
    case 3u: goto L_08A49038;
    case 4u: goto L_08A49048;
    case 5u: goto L_08A49064;
    case 6u: goto L_08A4906C;
    case 7u: goto L_08A49070;
    case 8u: goto L_08A49080;
    case 9u: goto L_08A490A0;
    case 10u: goto L_08A490B0;
    case 11u: goto L_08A490CC;
    case 12u: goto L_08A490D4;
    case 13u: goto L_08A490D8;
    case 14u: goto L_08A490E8;
    case 15u: goto L_08A49110;
    case 16u: goto L_08A4911C;
    case 17u: goto L_08A4912C;
    case 18u: goto L_08A49134;
    case 19u: goto L_08A4913C;
    case 20u: goto L_08A49154;
    case 21u: goto L_08A4916C;
    case 22u: goto L_08A49194;
    case 23u: goto L_08A4919C;
    case 24u: goto L_08A49A74;
    case 25u: goto L_08A49A7C;
    case 26u: goto L_08A49A90;
    case 27u: goto L_08A49A98;
    case 28u: goto L_08A49AA0;
    case 29u: goto L_08A49ABC;
    case 30u: goto L_08A49AC4;
    case 31u: goto L_08A49B00;
    case 32u: goto L_08A49B18;
    case 33u: goto L_08A49B8C;
    case 34u: goto L_08A49B98;
    case 35u: goto L_08A49BA0;
    case 36u: goto L_08A49BBC;
    case 37u: goto L_08A49BCC;
    case 38u: goto L_08A49BE4;
    case 39u: goto L_08A49BEC;
    case 40u: goto L_08A49BF8;
    case 41u: goto L_08A49C1C;
    case 42u: goto L_08A49C2C;
    case 43u: goto L_08A49C48;
    case 44u: goto L_08A49C50;
    case 45u: goto L_08A49C5C;
    case 46u: goto L_08A49C8C;
    case 47u: goto L_08A49CA4;
    case 48u: goto L_08A49CAC;
    case 49u: goto L_08A49CB8;
    case 50u: goto L_08A49CC8;
    case 51u: goto L_08A49CD0;
    case 52u: goto L_08A49CD8;
    case 53u: goto L_08A49CE4;
    case 54u: goto L_08A49D04;
    case 55u: goto L_08A49D0C;
    case 56u: goto L_08A49D24;
    case 57u: goto L_08A49D2C;
    case 58u: goto L_08A49D4C;
    case 59u: goto L_08A49D54;
    case 60u: goto L_08A49D5C;
    case 61u: goto L_08A49D84;
    case 62u: goto L_08A49D8C;
    case 63u: goto L_08A49D98;
    case 64u: goto L_08A49DC0;
    case 65u: goto L_08A49DC8;
    case 66u: goto L_08A49DD4;
    case 67u: goto L_08A49E04;
    case 68u: goto L_08A49E0C;
    case 69u: goto L_08A49E10;
    case 70u: goto L_08A49E20;
    case 71u: goto L_08A49E68;
    case 72u: goto L_08A49E70;
    case 73u: goto L_08A49E74;
    case 74u: goto L_08A49E84;
    case 75u: goto L_08A49EA4;
    case 76u: goto L_08A49EC0;
    case 77u: goto L_08A49EC8;
    case 78u: goto L_08A49ED4;
    case 79u: goto L_08A49F14;
    case 80u: goto L_08A49F1C;
    case 81u: goto L_08A49F20;
    case 82u: goto L_08A49F30;
    case 83u: goto L_08A49F80;
    case 84u: goto L_08A49F88;
    case 85u: goto L_08A49F8C;
    case 86u: goto L_08A49F9C;
    case 87u: goto L_08A49FBC;
    case 88u: goto L_08A49FC0;
    case 89u: goto L_08A49FC8;
    case 90u: goto L_08A49FD0;
    case 91u: goto L_08A49FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A49004:
    aot_gpr[17] = (32836u << 16u);
    aot_gpr[3] = (aot_gpr[17] | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 155u, 0x08A48FBCu>(ctx, &aot_mem); return;
L_08A49010:
    aot_gpr[6] = (0u | 65408u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[9] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[5] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (32836u << 16u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 16u);
      if (branch_taken) {
          goto L_08A49070;
      }
      goto L_08A49038;
    }
L_08A49038:
    aot_gpr[3] = (32836u << 16u);
    aot_gpr[4] = (aot_gpr[5] & 63u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[3] | 17u);
      if (branch_taken) {
          goto L_08A49070;
      }
      goto L_08A49048;
    }
L_08A49048:
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[8] << 2u);
    aot_gpr[2] = (32836u << 16u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(-11352));
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[2] | 17u);
      if (branch_taken) {
          goto L_08A49070;
      }
      goto L_08A49064;
    }
L_08A49064:
    aot_gpr[31] = (0x08A4906Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5ABBCu;
    return;
L_08A4906C:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    goto L_08A49070;
L_08A49070:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49080:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (0u | 32768u);
    aot_gpr[2] = (32836u << 16u);
    aot_gpr[11] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[2] | 16u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A490D8;
      }
      goto L_08A490A0;
    }
L_08A490A0:
    aot_gpr[11] = (32836u << 16u);
    aot_gpr[10] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[11] | 10u);
      if (branch_taken) {
          goto L_08A490D8;
      }
      goto L_08A490B0;
    }
L_08A490B0:
    aot_gpr[12] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[4] << 2u);
    aot_gpr[9] = (aot_gpr[12] + static_cast<std::uint32_t>(-11352));
    aot_gpr[4] = (32836u << 16u);
    aot_gpr[3] = (aot_gpr[8] + aot_gpr[9]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[4] | 10u);
      if (branch_taken) {
          goto L_08A490D8;
      }
      goto L_08A490CC;
    }
L_08A490CC:
    aot_gpr[31] = (0x08A490D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5AB8Cu;
    return;
L_08A490D4:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    goto L_08A490D8;
L_08A490D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A490E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[3] = (32836u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-16120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[3] | 2u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A49154;
      }
      goto L_08A49110;
    }
L_08A49110:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[31] = (0x08A4911Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-11372)));
    ctx.pc = 0x08A5AB9Cu;
    return;
L_08A4911C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-11352)));
    aot_gpr[31] = (0x08A4912Cu);
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(-11352));
    ctx.pc = 0x08A5AB9Cu;
    return;
L_08A4912C:
    aot_gpr[31] = (0x08A49134u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5AB9Cu;
    return;
L_08A49134:
    aot_gpr[31] = (0x08A4913Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A5AB9Cu;
    return;
L_08A4913C:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-11360), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-16120), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-11364), 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_08A49154;
L_08A49154:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4916C:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(-11352));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[7] = (32836u << 16u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[7] | 16u);
      if (branch_taken) {
          goto L_08A4919C;
      }
      goto L_08A49194;
    }
L_08A49194:
    aot_gpr[31] = (0x08A4919Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5ABA4u;
    return;
L_08A4919C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49A74:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A49A90;
      }
      goto L_08A49A7C;
    }
L_08A49A7C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[3] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A49A7C;
      }
      goto L_08A49A90;
    }
L_08A49A90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49A98:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A49ABC;
      }
      goto L_08A49AA0;
    }
L_08A49AA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A49AA0;
      }
      goto L_08A49ABC;
    }
L_08A49ABC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49AC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 4u));
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(21056));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[13] = (aot_gpr[3] & 15u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(5))))));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[25] == aot_gpr[3];
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08A49B98;
      }
      goto L_08A49B00;
    }
L_08A49B00:
    aot_gpr[14] = (0u + static_cast<std::uint32_t>(14));
    aot_gpr[24] = (aot_gpr[14] - aot_gpr[13]);
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(10));
    aot_gpr[14] = (0u + static_cast<std::uint32_t>(-32768));
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(32767));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(13));
    goto L_08A49B18;
L_08A49B18:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[10]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    rt.unsupported(0x08A49B2Cu, 0x010B001Cu, "special? not lowered yet"); return;
L_08A49B8C:
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[9] = (aot_gpr[25] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_08A49B98;
L_08A49B98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49BA0:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (32834u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[3] | 256u);
      if (branch_taken) {
          goto L_08A49BEC;
      }
      goto L_08A49BBC;
    }
L_08A49BBC:
    aot_gpr[5] = (32834u << 16u);
    aot_gpr[3] = (aot_gpr[4] & 63u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[5] | 5u);
      if (branch_taken) {
          goto L_08A49BEC;
      }
      goto L_08A49BCC;
    }
L_08A49BCC:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[7] = (32834u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[7] | 5u);
      if (branch_taken) {
          goto L_08A49BEC;
      }
      goto L_08A49BE4;
    }
L_08A49BE4:
    aot_gpr[31] = (0x08A49BECu);
    // nop
    ctx.pc = 0x08A5AB14u;
    return;
L_08A49BEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49BF8:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (32834u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[2] = (aot_gpr[3] | 256u);
      if (branch_taken) {
          goto L_08A49C50;
      }
      goto L_08A49C1C;
    }
L_08A49C1C:
    aot_gpr[5] = (32834u << 16u);
    aot_gpr[3] = (aot_gpr[4] & 63u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[5] | 5u);
      if (branch_taken) {
          goto L_08A49C50;
      }
      goto L_08A49C2C;
    }
L_08A49C2C:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[8] + 0u);
    aot_gpr[8] = (32834u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[8] | 5u);
      if (branch_taken) {
          goto L_08A49C50;
      }
      goto L_08A49C48;
    }
L_08A49C48:
    aot_gpr[31] = (0x08A49C50u);
    // nop
    ctx.pc = 0x08A5AACCu;
    return;
L_08A49C50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49C5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[2] = (32834u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-11340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[2] | 257u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A49CE4;
      }
      goto L_08A49C8C;
    }
L_08A49C8C:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-11328));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (0x08A49CA4u);
    aot_gpr[8] = (0u | 44100u);
    ctx.pc = 0x08A5AABCu;
    return;
L_08A49CA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A49CE4;
      }
      goto L_08A49CAC;
    }
L_08A49CAC:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[19] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-11340)));
    goto L_08A49CB8;
L_08A49CB8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_08A49D04;
      }
      goto L_08A49CC8;
    }
L_08A49CC8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 32 ? 1u : 0u);
    goto L_08A49CD0;
L_08A49CD0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-11340)));
      if (branch_taken) {
          goto L_08A49CB8;
      }
      goto L_08A49CD8;
    }
L_08A49CD8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-11340), aot_gpr[5]);
    aot_gpr[3] = (0u + 0u);
    goto L_08A49CE4;
L_08A49CE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A49D04:
    aot_gpr[31] = (0x08A49D0Cu);
    // nop
    ctx.pc = 0x08A5AB1Cu;
    return;
L_08A49D0C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-11328));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(24512));
      if (branch_taken) {
          goto L_08A49CC8;
      }
      goto L_08A49D24;
    }
L_08A49D24:
    aot_gpr[31] = (0x08A49D2Cu);
    // nop
    ctx.pc = 0x08A5AB34u;
    return;
L_08A49D2C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-11328));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08A49CC8;
      }
      goto L_08A49D4C;
    }
L_08A49D4C:
    aot_gpr[31] = (0x08A49D54u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5AAC4u;
    return;
L_08A49D54:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 32 ? 1u : 0u);
    goto L_08A49CD0;
L_08A49D5C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (32834u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[3] | 256u);
      if (branch_taken) {
          goto L_08A49D8C;
      }
      goto L_08A49D84;
    }
L_08A49D84:
    aot_gpr[31] = (0x08A49D8Cu);
    // nop
    ctx.pc = 0x08A5AAECu;
    return;
L_08A49D8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49D98:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (32834u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[3] | 256u);
      if (branch_taken) {
          goto L_08A49DC8;
      }
      goto L_08A49DC0;
    }
L_08A49DC0:
    aot_gpr[31] = (0x08A49DC8u);
    // nop
    ctx.pc = 0x08A5AB0Cu;
    return;
L_08A49DC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49DD4:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (32834u << 16u);
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[3] | 256u);
      if (branch_taken) {
          goto L_08A49E10;
      }
      goto L_08A49E04;
    }
L_08A49E04:
    aot_gpr[31] = (0x08A49E0Cu);
    // nop
    ctx.pc = 0x08A5AAF4u;
    return;
L_08A49E0C:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08A49E10;
L_08A49E10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49E20:
    aot_gpr[14] = (2218u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[12] = (2218u << 16u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (32834u << 16u);
    aot_gpr[4] = (aot_gpr[12] + static_cast<std::uint32_t>(-11328));
    aot_gpr[7] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[5] = (aot_gpr[10] + 0u);
    aot_gpr[6] = (aot_gpr[3] + 0u);
    aot_gpr[8] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[12] = (aot_gpr[11] | 256u);
      if (branch_taken) {
          goto L_08A49E74;
      }
      goto L_08A49E68;
    }
L_08A49E68:
    aot_gpr[31] = (0x08A49E70u);
    // nop
    ctx.pc = 0x08A5AAC4u;
    return;
L_08A49E70:
    aot_gpr[12] = (aot_gpr[2] + 0u);
    goto L_08A49E74;
L_08A49E74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49E84:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (32834u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[3] | 256u);
      if (branch_taken) {
          goto L_08A49EC8;
      }
      goto L_08A49EA4;
    }
L_08A49EA4:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[8] = (32834u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[8] | 18u);
      if (branch_taken) {
          goto L_08A49EC8;
      }
      goto L_08A49EC0;
    }
L_08A49EC0:
    aot_gpr[31] = (0x08A49EC8u);
    // nop
    ctx.pc = 0x08A5AB1Cu;
    return;
L_08A49EC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49ED4:
    aot_gpr[11] = (2218u << 16u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[6] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (32834u << 16u);
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[9] + static_cast<std::uint32_t>(-11328));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[11] = (aot_gpr[10] | 256u);
      if (branch_taken) {
          goto L_08A49F20;
      }
      goto L_08A49F14;
    }
L_08A49F14:
    aot_gpr[31] = (0x08A49F1Cu);
    // nop
    ctx.pc = 0x08A5AAFCu;
    return;
L_08A49F1C:
    aot_gpr[11] = (aot_gpr[2] + 0u);
    goto L_08A49F20;
L_08A49F20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[11] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49F30:
    aot_gpr[24] = (2218u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[12] = (aot_gpr[5] + 0u);
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[14] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (aot_gpr[8] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (32834u << 16u);
    aot_gpr[15] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[12] + 0u);
    aot_gpr[7] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[10] = (aot_gpr[9] + 0u);
    aot_gpr[4] = (aot_gpr[15] + static_cast<std::uint32_t>(-11328));
    aot_gpr[5] = (aot_gpr[14] + 0u);
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[9] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[12] = (aot_gpr[11] | 256u);
      if (branch_taken) {
          goto L_08A49F8C;
      }
      goto L_08A49F80;
    }
L_08A49F80:
    aot_gpr[31] = (0x08A49F88u);
    // nop
    ctx.pc = 0x08A5AA94u;
    return;
L_08A49F88:
    aot_gpr[12] = (aot_gpr[2] + 0u);
    goto L_08A49F8C;
L_08A49F8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49F9C:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A49FC8;
      }
      goto L_08A49FBC;
    }
L_08A49FBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A49FC0;
L_08A49FC0:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49FC8:
    aot_gpr[31] = (0x08A49FD0u);
    // nop
    ctx.pc = 0x08A5AADCu;
    return;
L_08A49FD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A49FC0;
L_08A49FD8:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (32834u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[2] | 256u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 5u, 0x08A4A044u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 1u, 0x08A4A004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0581(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0581_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_581(Runtime &runtime) {
    runtime.register_generated_unit(581u, 0x08A49000u, 4096u, &recomp_unit_0581, &recomp_unit_0581_entry);
    runtime.register_function(0x08A49004u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49010u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49038u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49048u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49064u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A4906Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49070u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49080u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A490A0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A490B0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A490CCu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A490D4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A490D8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A490E8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49110u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A4911Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A4912Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49134u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A4913Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49154u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A4916Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49194u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A4919Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49A74u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49A7Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49A90u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49A98u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49AA0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49ABCu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49AC4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49B00u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49B18u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49B8Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49B98u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49BA0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49BBCu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49BCCu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49BE4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49BECu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49BF8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49C1Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49C2Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49C48u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49C50u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49C5Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49C8Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CA4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CACu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CB8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CC8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CD0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CD8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49CE4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D04u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D0Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D24u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D2Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D4Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D54u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D5Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D84u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D8Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49D98u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49DC0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49DC8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49DD4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E04u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E0Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E10u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E20u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E68u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E70u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E74u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49E84u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49EA4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49EC0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49EC8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49ED4u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F14u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F1Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F20u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F30u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F80u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F88u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F8Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49F9Cu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49FBCu, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49FC0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49FC8u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49FD0u, &recomp_unit_0581, "recomp_unit_0581");
    runtime.register_function(0x08A49FD8u, &recomp_unit_0581, "recomp_unit_0581");
}
} // namespace psprecomp
