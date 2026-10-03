#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0320[1011] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 33, 0, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 36, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
};
void recomp_unit_0320_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08944000u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0320[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08944000;
    case 2u: goto L_08944040;
    case 3u: goto L_08944068;
    case 4u: goto L_0894407C;
    case 5u: goto L_08944098;
    case 6u: goto L_0894409C;
    case 7u: goto L_089440CC;
    case 8u: goto L_089440E8;
    case 9u: goto L_089440F4;
    case 10u: goto L_08944134;
    case 11u: goto L_0894414C;
    case 12u: goto L_08944194;
    case 13u: goto L_089441A8;
    case 14u: goto L_089441B4;
    case 15u: goto L_089441C0;
    case 16u: goto L_089441D0;
    case 17u: goto L_089441D4;
    case 18u: goto L_089441DC;
    case 19u: goto L_089441F8;
    case 20u: goto L_08944210;
    case 21u: goto L_08944228;
    case 22u: goto L_08944238;
    case 23u: goto L_08944254;
    case 24u: goto L_0894425C;
    case 25u: goto L_08944264;
    case 26u: goto L_08944280;
    case 27u: goto L_0894428C;
    case 28u: goto L_08944298;
    case 29u: goto L_089442B8;
    case 30u: goto L_089442CC;
    case 31u: goto L_089442D8;
    case 32u: goto L_089442EC;
    case 33u: goto L_089442F0;
    case 34u: goto L_08944300;
    case 35u: goto L_08944310;
    case 36u: goto L_0894431C;
    case 37u: goto L_08944320;
    case 38u: goto L_08944334;
    case 39u: goto L_08944340;
    case 40u: goto L_08944348;
    case 41u: goto L_08944354;
    case 42u: goto L_08944358;
    case 43u: goto L_08944360;
    case 44u: goto L_0894437C;
    case 45u: goto L_08944384;
    case 46u: goto L_089443C4;
    case 47u: goto L_089443DC;
    case 48u: goto L_0894445C;
    case 49u: goto L_08944480;
    case 50u: goto L_08944498;
    case 51u: goto L_0894449C;
    case 52u: goto L_0894451C;
    case 53u: goto L_08944598;
    case 54u: goto L_089445F8;
    case 55u: goto L_089446AC;
    case 56u: goto L_08944728;
    case 57u: goto L_08944730;
    case 58u: goto L_08944740;
    case 59u: goto L_08944758;
    case 60u: goto L_0894476C;
    case 61u: goto L_0894477C;
    case 62u: goto L_089447B8;
    case 63u: goto L_089447D0;
    case 64u: goto L_08944850;
    case 65u: goto L_08944860;
    case 66u: goto L_08944884;
    case 67u: goto L_0894489C;
    case 68u: goto L_089448A0;
    case 69u: goto L_08944920;
    case 70u: goto L_0894499C;
    case 71u: goto L_089449FC;
    case 72u: goto L_08944AB0;
    case 73u: goto L_08944B2C;
    case 74u: goto L_08944B34;
    case 75u: goto L_08944B44;
    case 76u: goto L_08944B4C;
    case 77u: goto L_08944B6C;
    case 78u: goto L_08944B90;
    case 79u: goto L_08944BA0;
    case 80u: goto L_08944BA8;
    case 81u: goto L_08944BC8;
    case 82u: goto L_08944BD4;
    case 83u: goto L_08944BEC;
    case 84u: goto L_08944C28;
    case 85u: goto L_08944C34;
    case 86u: goto L_08944C5C;
    case 87u: goto L_08944C7C;
    case 88u: goto L_08944C94;
    case 89u: goto L_08944CB8;
    case 90u: goto L_08944CDC;
    case 91u: goto L_08944CF8;
    case 92u: goto L_08944D20;
    case 93u: goto L_08944D34;
    case 94u: goto L_08944D40;
    case 95u: goto L_08944D4C;
    case 96u: goto L_08944D6C;
    case 97u: goto L_08944DB4;
    case 98u: goto L_08944DF4;
    case 99u: goto L_08944E00;
    case 100u: goto L_08944F38;
    case 101u: goto L_08944FC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08944000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08944040u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08944040u) goto L_08944040;
    return;
L_08944040:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2432));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08944068u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08944068u) goto L_08944068;
    return;
L_08944068:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894409C;
      }
      goto L_0894407C;
    }
L_0894407C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08944098u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 91u, 0x089427D4u>(ctx, &aot_mem) && ctx.pc == 0x08944098u) goto L_08944098;
    return;
L_08944098:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_0894409C;
L_0894409C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089440CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089440E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 115u, 0x089429E0u>(ctx, &aot_mem) && ctx.pc == 0x089440E8u) goto L_089440E8;
    return;
L_089440E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089440F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 232u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944134:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0894414Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0894414Cu) goto L_0894414C;
    return;
L_0894414C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2432));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08944194u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089440F4;
L_08944194:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089441A8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089441C0;
      }
      goto L_089441B4;
    }
L_089441B4:
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089441B4;
      }
      goto L_089441C0;
    }
L_089441C0:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089441D4;
      }
      goto L_089441D0;
    }
L_089441D0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_089441D4;
L_089441D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089441DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089442B8;
      }
      goto L_089441F8;
    }
L_089441F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2432));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944280;
      }
      goto L_08944210;
    }
L_08944210:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894425C;
      }
      goto L_08944228;
    }
L_08944228:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_08944280;
      }
      goto L_08944238;
    }
L_08944238:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08944254u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944254u) goto L_08944254;
    return;
L_08944254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944280;
      }
      goto L_0894425C;
    }
L_0894425C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944280;
      }
      goto L_08944264;
    }
L_08944264:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08944280u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944280u) goto L_08944280;
    return;
L_08944280:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0894428Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x0894428Cu) goto L_0894428C;
    return;
L_0894428C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089442B8;
      }
      goto L_08944298;
    }
L_08944298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089442B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089442B8u) goto L_089442B8;
    return;
L_089442B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089442CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08944358;
      }
      goto L_089442D8;
    }
L_089442D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(42)));
    aot_gpr[2] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] & 128u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
      if (branch_taken) {
          goto L_089442F0;
      }
      goto L_089442EC;
    }
L_089442EC:
    aot_gpr[2] = (0u | 8u);
    goto L_089442F0;
L_089442F0:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[2] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08944340;
      }
      goto L_08944300;
    }
L_08944300:
    aot_gpr[7] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08944334;
      }
      goto L_08944310;
    }
L_08944310:
    aot_gpr[6] = (aot_gpr[8] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944320;
      }
      goto L_0894431C;
    }
L_0894431C:
    aot_gpr[8] = (aot_gpr[8] >> 1u);
    goto L_08944320;
L_08944320:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[2] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08944310;
      }
      goto L_08944334;
    }
L_08944334:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08944348;
      }
      goto L_08944340;
    }
L_08944340:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    goto L_08944348;
L_08944348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08944358;
      }
      goto L_08944354;
    }
L_08944354:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    goto L_08944358;
L_08944358:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944360:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[10] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894476C;
      }
      goto L_0894437C;
    }
L_0894437C:
    aot_gpr[31] = (0x08944384u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    goto L_089442CC;
L_08944384:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (51968u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[12] = (aot_gpr[7] & 128u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (40960u << 16u);
    aot_gpr[2] = (43008u << 16u);
    aot_gpr[9] = (47104u << 16u);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[7] = (49664u << 16u);
      if (branch_taken) {
          goto L_089443DC;
      }
      goto L_089443C4;
    }
L_089443C4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (52224u << 16u);
    aot_gpr[13] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    goto L_089443DC;
L_089443DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[6]);
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(36)));
    aot_gpr[12] = (aot_gpr[12] >> 24u);
    aot_gpr[12] = (aot_gpr[12] & 15u);
    aot_gpr[12] = (aot_gpr[12] << 16u);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[2]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[12] | aot_gpr[8]);
    aot_gpr[12] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(30)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] << 8u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(33)));
    aot_gpr[12] = (static_cast<std::int32_t>(aot_gpr[8]) < 2 ? 1u : 0u);
    if (aot_gpr[12] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(48)));
        goto L_08944598;
    }
    goto L_0894445C;
L_0894445C:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_gpr[24] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(40)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[24] = (aot_gpr[8] < aot_gpr[24] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[24] == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0894451C;
      }
      goto L_08944480;
    }
L_08944480:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[15] = (aot_gpr[15] >> 1u);
    aot_gpr[24] = (aot_gpr[13] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    aot_gpr[25] = (ctx.lo);
    { const bool branch_taken = aot_gpr[24] != 0u;
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[25]);
      if (branch_taken) {
          goto L_0894449C;
      }
      goto L_08944498;
    }
L_08944498:
    aot_gpr[13] = (aot_gpr[13] >> 1u);
    goto L_0894449C;
L_0894449C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[12] & aot_gpr[6]);
    aot_gpr[24] = (aot_gpr[8] << 24u);
    aot_gpr[25] = (aot_gpr[25] | aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[31] + static_cast<std::uint32_t>(4));
    aot_gpr[25] = (aot_gpr[24] + aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[31] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    aot_gpr[25] = (aot_gpr[12] >> 24u);
    aot_gpr[25] = (aot_gpr[25] & 15u);
    aot_gpr[25] = (aot_gpr[25] << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[25] | aot_gpr[2]);
    aot_gpr[25] = (aot_gpr[25] | aot_gpr[15]);
    aot_gpr[16] = (aot_gpr[31] + static_cast<std::uint32_t>(4));
    aot_gpr[25] = (aot_gpr[24] + aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[31] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    aot_gpr[25] = (aot_gpr[14] << 8u);
    aot_gpr[25] = (aot_gpr[25] | aot_gpr[9]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[25] | aot_gpr[14]);
    aot_gpr[24] = (aot_gpr[24] + aot_gpr[25]);
    aot_gpr[25] = (aot_gpr[31] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[31] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(33)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[24] = (aot_gpr[8] < aot_gpr[24] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944480;
      }
      goto L_0894451C;
    }
L_0894451C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (50688u << 16u);
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1285));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(33)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(42)));
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[9] & 32768u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (51200u << 16u);
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(51)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089445F8;
      }
      goto L_08944598;
    }
L_08944598:
    aot_gpr[2] = (50688u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 8u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(47)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(42)));
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] & 32768u);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (51200u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    goto L_089445F8;
L_089445F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (49920u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(35)));
    aot_gpr[9] = (51456u << 16u);
    aot_gpr[7] = (aot_gpr[7] & 128u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(256));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(55)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(45)));
    aot_gpr[9] = (50944u << 16u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(54)));
    aot_gpr[2] = (49152u << 16u);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 4u));
    aot_gpr[9] = (aot_gpr[9] << 8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] & 15u);
    aot_gpr[7] = (aot_gpr[9] | aot_gpr[7]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944740;
      }
      goto L_089446AC;
    }
L_089446AC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (50433u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-253));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (45056u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[9] = (45312u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (50176u << 16u);
    aot_gpr[8] = (0u | 5u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08944730;
      }
      goto L_08944728;
    }
L_08944728:
    aot_gpr[6] = (50176u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    goto L_08944730;
L_08944730:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08944740;
L_08944740:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[10] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894476C;
      }
      goto L_08944758;
    }
L_08944758:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x0894476Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23864));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0894476Cu) goto L_0894476C;
    return;
L_0894476C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894477C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (51968u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[7] & 128u);
    aot_gpr[10] = (40960u << 16u);
    aot_gpr[9] = (43008u << 16u);
    aot_gpr[8] = (47104u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (49664u << 16u);
      if (branch_taken) {
          goto L_089447D0;
      }
      goto L_089447B8;
    }
L_089447B8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (52224u << 16u);
    aot_gpr[3] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089447D0;
L_089447D0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] >> 24u);
    aot_gpr[2] = (aot_gpr[2] & 15u);
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[9]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[2] | aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(30)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[11] = (aot_gpr[11] << 8u);
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (2216u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(-28648)));
    if (aot_gpr[11] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48)));
        goto L_0894499C;
    }
    goto L_08944850;
L_08944850:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[11]) < 2 ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48)));
        goto L_0894499C;
    }
    goto L_08944860;
L_08944860:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (0u | 1u);
    aot_gpr[14] = (aot_gpr[11] < aot_gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08944920;
      }
      goto L_08944884;
    }
L_08944884:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[13] = (aot_gpr[13] >> 1u);
    aot_gpr[14] = (aot_gpr[3] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    aot_gpr[15] = (ctx.lo);
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[15]);
      if (branch_taken) {
          goto L_089448A0;
      }
      goto L_0894489C;
    }
L_0894489C:
    aot_gpr[3] = (aot_gpr[3] >> 1u);
    goto L_089448A0;
L_089448A0:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[14] = (aot_gpr[11] << 24u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[10]);
    aot_gpr[25] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[14] + aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[2] >> 24u);
    aot_gpr[15] = (aot_gpr[15] & 15u);
    aot_gpr[15] = (aot_gpr[15] << 16u);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[9]);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[13]);
    aot_gpr[25] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[14] + aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[12] << 8u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[8]);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[12]);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[11] < aot_gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944884;
      }
      goto L_08944920;
    }
L_08944920:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (50688u << 16u);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1285));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(42)));
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[9] & 32768u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (51200u << 16u);
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(51)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089449FC;
      }
      goto L_0894499C;
    }
L_0894499C:
    aot_gpr[10] = (50688u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 8u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(47)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(42)));
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] & 32768u);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (51200u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089449FC;
L_089449FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (49920u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(35)));
    aot_gpr[9] = (51456u << 16u);
    aot_gpr[7] = (aot_gpr[7] & 128u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(256));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(55)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    aot_gpr[9] = (50944u << 16u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(54)));
    aot_gpr[10] = (49152u << 16u);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 4u));
    aot_gpr[9] = (aot_gpr[9] << 8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] & 15u);
    aot_gpr[7] = (aot_gpr[9] | aot_gpr[7]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944B44;
      }
      goto L_08944AB0;
    }
L_08944AB0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (50433u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-253));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (45056u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[9] = (45312u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (50176u << 16u);
    aot_gpr[7] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08944B34;
      }
      goto L_08944B2C;
    }
L_08944B2C:
    aot_gpr[6] = (50176u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    goto L_08944B34;
L_08944B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08944B44;
L_08944B44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08944B6Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B2FCu;
    return;
L_08944B6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08944BC8;
      }
      goto L_08944BA0;
    }
L_08944BA0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08944BC8;
      }
      goto L_08944BA8;
    }
L_08944BA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08944BC8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944BC8u) goto L_08944BC8;
    return;
L_08944BC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944BD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08944BECu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B2FCu;
    return;
L_08944BEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[5] - aot_gpr[7]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[9] - aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08944C34;
      }
      goto L_08944C28;
    }
L_08944C28:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08944C34;
L_08944C34:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944C5C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[0] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[0] = std::sqrt(aot_fpr[0]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944C7C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[13];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944C94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944CB8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944CDC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944CF8:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08944D34u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08944C5C;
L_08944D34:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08944D40u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08944CF8;
L_08944D40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D4C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[14];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D6C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944DB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08944DF4u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08944DF4u) goto L_08944DF4;
    return;
L_08944DF4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08944E00u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08944E00u) goto L_08944E00;
    return;
L_08944E00:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[0];
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944F38:
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[5]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<44u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[5]);
    ctx.execute_vfpu_matrix_init(4u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<44u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<38u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<38u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<69u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<70u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vmmov(0u, 8u, 4u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[5]);
    ctx.execute_vfpu_matrix_init(4u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<44u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vmmov(0u, 8u, 4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944FC8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x08945000u; return;
}

void recomp_unit_0320(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0320_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_320(Runtime &runtime) {
    runtime.register_generated_unit(320u, 0x08944000u, 4096u, &recomp_unit_0320, &recomp_unit_0320_entry);
    runtime.register_function(0x08944000u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944040u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944068u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894407Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944098u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894409Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089440CCu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089440E8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089440F4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944134u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894414Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944194u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441A8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441B4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441C0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441D0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441D4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441DCu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089441F8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944210u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944228u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944238u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944254u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894425Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944264u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944280u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894428Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944298u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089442B8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089442CCu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089442D8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089442ECu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089442F0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944300u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944310u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894431Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944320u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944334u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944340u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944348u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944354u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944358u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944360u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894437Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944384u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089443C4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089443DCu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894445Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944480u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944498u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894449Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894451Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944598u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089445F8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089446ACu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944728u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944730u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944740u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944758u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894476Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894477Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089447B8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089447D0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944850u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944860u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944884u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894489Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089448A0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944920u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x0894499Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x089449FCu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944AB0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944B2Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944B34u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944B44u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944B4Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944B6Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944B90u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944BA0u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944BA8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944BC8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944BD4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944BECu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944C28u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944C34u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944C5Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944C7Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944C94u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944CB8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944CDCu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944CF8u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944D20u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944D34u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944D40u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944D4Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944D6Cu, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944DB4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944DF4u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944E00u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944F38u, &recomp_unit_0320, "recomp_unit_0320");
    runtime.register_function(0x08944FC8u, &recomp_unit_0320, "recomp_unit_0320");
}
} // namespace psprecomp
