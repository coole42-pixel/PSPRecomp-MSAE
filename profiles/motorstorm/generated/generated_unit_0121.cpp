#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0121[1018] = {
    1, 0, 2, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20,
    0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50,
    0, 0, 51, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0, 100, 101,
    0, 0, 102, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0,
    0, 0, 0, 134, 0, 0, 135, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0,
    154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 171, 0, 0, 0, 0, 0, 0, 172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 179,
};
void recomp_unit_0121_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0887D004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0121[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887D004;
    case 2u: goto L_0887D00C;
    case 3u: goto L_0887D014;
    case 4u: goto L_0887D018;
    case 5u: goto L_0887D020;
    case 6u: goto L_0887D03C;
    case 7u: goto L_0887D050;
    case 8u: goto L_0887D064;
    case 9u: goto L_0887D080;
    case 10u: goto L_0887D09C;
    case 11u: goto L_0887D0BC;
    case 12u: goto L_0887D0D4;
    case 13u: goto L_0887D0E8;
    case 14u: goto L_0887D0FC;
    case 15u: goto L_0887D110;
    case 16u: goto L_0887D12C;
    case 17u: goto L_0887D148;
    case 18u: goto L_0887D164;
    case 19u: goto L_0887D178;
    case 20u: goto L_0887D180;
    case 21u: goto L_0887D188;
    case 22u: goto L_0887D194;
    case 23u: goto L_0887D19C;
    case 24u: goto L_0887D1A4;
    case 25u: goto L_0887D1B0;
    case 26u: goto L_0887D1E0;
    case 27u: goto L_0887D200;
    case 28u: goto L_0887D208;
    case 29u: goto L_0887D234;
    case 30u: goto L_0887D244;
    case 31u: goto L_0887D254;
    case 32u: goto L_0887D268;
    case 33u: goto L_0887D274;
    case 34u: goto L_0887D284;
    case 35u: goto L_0887D298;
    case 36u: goto L_0887D2B4;
    case 37u: goto L_0887D2C4;
    case 38u: goto L_0887D2E0;
    case 39u: goto L_0887D2F8;
    case 40u: goto L_0887D318;
    case 41u: goto L_0887D320;
    case 42u: goto L_0887D328;
    case 43u: goto L_0887D334;
    case 44u: goto L_0887D34C;
    case 45u: goto L_0887D368;
    case 46u: goto L_0887D390;
    case 47u: goto L_0887D3C8;
    case 48u: goto L_0887D3E0;
    case 49u: goto L_0887D3F0;
    case 50u: goto L_0887D400;
    case 51u: goto L_0887D40C;
    case 52u: goto L_0887D410;
    case 53u: goto L_0887D418;
    case 54u: goto L_0887D420;
    case 55u: goto L_0887D428;
    case 56u: goto L_0887D438;
    case 57u: goto L_0887D448;
    case 58u: goto L_0887D458;
    case 59u: goto L_0887D460;
    case 60u: goto L_0887D468;
    case 61u: goto L_0887D4A0;
    case 62u: goto L_0887D4AC;
    case 63u: goto L_0887D4C8;
    case 64u: goto L_0887D4D8;
    case 65u: goto L_0887D4F8;
    case 66u: goto L_0887D518;
    case 67u: goto L_0887D520;
    case 68u: goto L_0887D54C;
    case 69u: goto L_0887D57C;
    case 70u: goto L_0887D598;
    case 71u: goto L_0887D5A8;
    case 72u: goto L_0887D5B8;
    case 73u: goto L_0887D5D4;
    case 74u: goto L_0887D5E4;
    case 75u: goto L_0887D5F4;
    case 76u: goto L_0887D604;
    case 77u: goto L_0887D610;
    case 78u: goto L_0887D620;
    case 79u: goto L_0887D674;
    case 80u: goto L_0887D68C;
    case 81u: goto L_0887D6A4;
    case 82u: goto L_0887D6BC;
    case 83u: goto L_0887D6D8;
    case 84u: goto L_0887D6F0;
    case 85u: goto L_0887D708;
    case 86u: goto L_0887D720;
    case 87u: goto L_0887D740;
    case 88u: goto L_0887D75C;
    case 89u: goto L_0887D768;
    case 90u: goto L_0887D774;
    case 91u: goto L_0887D7B0;
    case 92u: goto L_0887D7B8;
    case 93u: goto L_0887D7E8;
    case 94u: goto L_0887D7F4;
    case 95u: goto L_0887D7FC;
    case 96u: goto L_0887D804;
    case 97u: goto L_0887D834;
    case 98u: goto L_0887D85C;
    case 99u: goto L_0887D860;
    case 100u: goto L_0887D87C;
    case 101u: goto L_0887D880;
    case 102u: goto L_0887D88C;
    case 103u: goto L_0887D890;
    case 104u: goto L_0887D8A4;
    case 105u: goto L_0887D8B8;
    case 106u: goto L_0887D8C0;
    case 107u: goto L_0887D8C4;
    case 108u: goto L_0887D920;
    case 109u: goto L_0887D950;
    case 110u: goto L_0887D998;
    case 111u: goto L_0887D9B0;
    case 112u: goto L_0887D9C8;
    case 113u: goto L_0887D9E0;
    case 114u: goto L_0887DA34;
    case 115u: goto L_0887DA4C;
    case 116u: goto L_0887DA58;
    case 117u: goto L_0887DA78;
    case 118u: goto L_0887DA84;
    case 119u: goto L_0887DA94;
    case 120u: goto L_0887DAA0;
    case 121u: goto L_0887DAAC;
    case 122u: goto L_0887DABC;
    case 123u: goto L_0887DAC4;
    case 124u: goto L_0887DAE4;
    case 125u: goto L_0887DAF0;
    case 126u: goto L_0887DB00;
    case 127u: goto L_0887DB1C;
    case 128u: goto L_0887DB30;
    case 129u: goto L_0887DB3C;
    case 130u: goto L_0887DB44;
    case 131u: goto L_0887DB58;
    case 132u: goto L_0887DB74;
    case 133u: goto L_0887DB7C;
    case 134u: goto L_0887DB90;
    case 135u: goto L_0887DB9C;
    case 136u: goto L_0887DBA0;
    case 137u: goto L_0887DBA8;
    case 138u: goto L_0887DBB0;
    case 139u: goto L_0887DBB8;
    case 140u: goto L_0887DBF0;
    case 141u: goto L_0887DC1C;
    case 142u: goto L_0887DC74;
    case 143u: goto L_0887DC8C;
    case 144u: goto L_0887DCA4;
    case 145u: goto L_0887DCBC;
    case 146u: goto L_0887DCD4;
    case 147u: goto L_0887DCEC;
    case 148u: goto L_0887DD08;
    case 149u: goto L_0887DD3C;
    case 150u: goto L_0887DDB4;
    case 151u: goto L_0887DDD4;
    case 152u: goto L_0887DDE0;
    case 153u: goto L_0887DDEC;
    case 154u: goto L_0887DE04;
    case 155u: goto L_0887DE10;
    case 156u: goto L_0887DE1C;
    case 157u: goto L_0887DE28;
    case 158u: goto L_0887DE30;
    case 159u: goto L_0887DE40;
    case 160u: goto L_0887DE4C;
    case 161u: goto L_0887DE5C;
    case 162u: goto L_0887DEC4;
    case 163u: goto L_0887DED0;
    case 164u: goto L_0887DEE0;
    case 165u: goto L_0887DEF8;
    case 166u: goto L_0887DF0C;
    case 167u: goto L_0887DF14;
    case 168u: goto L_0887DF44;
    case 169u: goto L_0887DF4C;
    case 170u: goto L_0887DF80;
    case 171u: goto L_0887DF88;
    case 172u: goto L_0887DFA4;
    case 173u: goto L_0887DFA8;
    case 174u: goto L_0887DFB0;
    case 175u: goto L_0887DFCC;
    case 176u: goto L_0887DFD4;
    case 177u: goto L_0887DFDC;
    case 178u: goto L_0887DFE4;
    case 179u: goto L_0887DFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887D004:
    aot_gpr[31] = (0x0887D00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887D00Cu) goto L_0887D00C;
    return;
L_0887D00C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D018;
      }
      goto L_0887D014;
    }
L_0887D014:
    aot_gpr[16] = (0u | 1u);
    goto L_0887D018;
L_0887D018:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0887D0D4;
      }
      goto L_0887D020;
    }
L_0887D020:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887D03Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D03Cu) goto L_0887D03C;
    return;
L_0887D03C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887D050u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D050u) goto L_0887D050;
    return;
L_0887D050:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887D064u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D064u) goto L_0887D064;
    return;
L_0887D064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887D080u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D080u) goto L_0887D080;
    return;
L_0887D080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887D09Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D09Cu) goto L_0887D09C;
    return;
L_0887D09C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887D0BCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D0BCu) goto L_0887D0BC;
    return;
L_0887D0BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887D178;
      }
      goto L_0887D0D4;
    }
L_0887D0D4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887D0E8u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D0E8u) goto L_0887D0E8;
    return;
L_0887D0E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887D0FCu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D0FCu) goto L_0887D0FC;
    return;
L_0887D0FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887D110u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D110u) goto L_0887D110;
    return;
L_0887D110:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887D12Cu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D12Cu) goto L_0887D12C;
    return;
L_0887D12C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887D148u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D148u) goto L_0887D148;
    return;
L_0887D148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887D164u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D164u) goto L_0887D164;
    return;
L_0887D164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0887D178;
L_0887D178:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D19C;
      }
      goto L_0887D180;
    }
L_0887D180:
    aot_gpr[31] = (0x0887D188u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0887D188u) goto L_0887D188;
    return;
L_0887D188:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887D194u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x0887D194u) goto L_0887D194;
    return;
L_0887D194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D1B0;
      }
      goto L_0887D19C;
    }
L_0887D19C:
    aot_gpr[31] = (0x0887D1A4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0887D1A4u) goto L_0887D1A4;
    return;
L_0887D1A4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887D1B0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x0887D1B0u) goto L_0887D1B0;
    return;
L_0887D1B0:
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
L_0887D1E0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25624), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D200:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D208:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0887D234u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0887D234u) goto L_0887D234;
    return;
L_0887D234:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0887D244u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0887D244u) goto L_0887D244;
    return;
L_0887D244:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887D254u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10040));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0887D254u) goto L_0887D254;
    return;
L_0887D254:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887D268u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10056));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887D268u) goto L_0887D268;
    return;
L_0887D268:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887D274u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0887D274u) goto L_0887D274;
    return;
L_0887D274:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887D284u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0887D284u) goto L_0887D284;
    return;
L_0887D284:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887D298u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10084));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887D298u) goto L_0887D298;
    return;
L_0887D298:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10092));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10116));
    aot_gpr[18] = (49152u << 16u);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[19] = (16384u << 16u);
      if (branch_taken) {
          goto L_0887D334;
      }
      goto L_0887D2B4;
    }
L_0887D2B4:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0887D2C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D2C4u) goto L_0887D2C4;
    return;
L_0887D2C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 73u);
      if (branch_taken) {
          goto L_0887D2F8;
      }
      goto L_0887D2E0;
    }
L_0887D2E0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 73u);
    goto L_0887D2F8;
L_0887D2F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4D8;
      }
      goto L_0887D318;
    }
L_0887D318:
    aot_gpr[31] = (0x0887D320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887D320u) goto L_0887D320;
    return;
L_0887D320:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4D8;
      }
      goto L_0887D328;
    }
L_0887D328:
    aot_gpr[4] = (0u | 75u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887D4D8;
      }
      goto L_0887D334;
    }
L_0887D334:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 27u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x0887D34Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D34Cu) goto L_0887D34C;
    return;
L_0887D34C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887D4D8;
      }
      goto L_0887D368;
    }
L_0887D368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4808));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
      if (branch_taken) {
          goto L_0887D460;
      }
      goto L_0887D390;
    }
L_0887D390:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(25353)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(25360)));
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(212));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0887D3C8u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 81u, 0x08873568u>(ctx, &aot_mem) && ctx.pc == 0x0887D3C8u) goto L_0887D3C8;
    return;
L_0887D3C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4808));
    aot_gpr[31] = (0x0887D3E0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 112u, 0x08873760u>(ctx, &aot_mem) && ctx.pc == 0x0887D3E0u) goto L_0887D3E0;
    return;
L_0887D3E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x0887D3F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 171u, 0x08873AD8u>(ctx, &aot_mem) && ctx.pc == 0x0887D3F0u) goto L_0887D3F0;
    return;
L_0887D3F0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25748)));
    aot_gpr[31] = (0x0887D400u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 108u, 0x0887F92Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D400u) goto L_0887D400;
    return;
L_0887D400:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D40C;
    }
L_0887D40C:
    aot_gpr[18] = (0u | 1u);
    goto L_0887D410;
L_0887D410:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D448;
      }
      goto L_0887D418;
    }
L_0887D418:
    aot_gpr[31] = (0x0887D420u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 111u, 0x0887F944u>(ctx, &aot_mem) && ctx.pc == 0x0887D420u) goto L_0887D420;
    return;
L_0887D420:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D448;
      }
      goto L_0887D428;
    }
L_0887D428:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887D438u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10120));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887D438u) goto L_0887D438;
    return;
L_0887D438:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887D458;
      }
      goto L_0887D448;
    }
L_0887D448:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x0887D458u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x0887D458u) goto L_0887D458;
    return;
L_0887D458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4D8;
      }
      goto L_0887D460;
    }
L_0887D460:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4AC;
      }
      goto L_0887D468;
    }
L_0887D468:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(25353)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(25360)));
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(212));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0887D4A0u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 81u, 0x08873568u>(ctx, &aot_mem) && ctx.pc == 0x0887D4A0u) goto L_0887D4A0;
    return;
L_0887D4A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4808));
    goto L_0887D4AC;
L_0887D4AC:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2696));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[31] = (0x0887D4C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 112u, 0x08873760u>(ctx, &aot_mem) && ctx.pc == 0x0887D4C8u) goto L_0887D4C8;
    return;
L_0887D4C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x0887D4D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x0887D4D8u) goto L_0887D4D8;
    return;
L_0887D4D8:
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
L_0887D4F8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25632), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D518:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10136));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0887D54Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10160));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D54Cu) goto L_0887D54C;
    return;
L_0887D54C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26500)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D610;
      }
      goto L_0887D57C;
    }
L_0887D57C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5B8;
      }
      goto L_0887D598;
    }
L_0887D598:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887D5A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10172));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887D5A8u) goto L_0887D5A8;
    return;
L_0887D5A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887D610;
      }
      goto L_0887D5B8;
    }
L_0887D5B8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5F4;
      }
      goto L_0887D5D4;
    }
L_0887D5D4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887D5E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10200));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887D5E4u) goto L_0887D5E4;
    return;
L_0887D5E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887D610;
      }
      goto L_0887D5F4;
    }
L_0887D5F4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887D604u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10216));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887D604u) goto L_0887D604;
    return;
L_0887D604:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0887D610;
L_0887D610:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    aot_gpr[21] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(10136));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x0887D674u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10232));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D674u) goto L_0887D674;
    return;
L_0887D674:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887D68Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10252));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D68Cu) goto L_0887D68C;
    return;
L_0887D68C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887D6A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10272));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D6A4u) goto L_0887D6A4;
    return;
L_0887D6A4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887D6BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10292));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D6BCu) goto L_0887D6BC;
    return;
L_0887D6BC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(10312));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[31] = (0x0887D6D8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D6D8u) goto L_0887D6D8;
    return;
L_0887D6D8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887D6F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10328));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D6F0u) goto L_0887D6F0;
    return;
L_0887D6F0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887D708u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10340));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D708u) goto L_0887D708;
    return;
L_0887D708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887D720u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10356));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D720u) goto L_0887D720;
    return;
L_0887D720:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[6] = (aot_gpr[6] ^ 4u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887D8C0;
      }
      goto L_0887D740;
    }
L_0887D740:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[6] = (aot_gpr[6] ^ 2u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (8192u << 16u);
      if (branch_taken) {
          goto L_0887D8C4;
      }
      goto L_0887D75C;
    }
L_0887D75C:
    aot_gpr[6] = (aot_gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (8192u << 16u);
      if (branch_taken) {
          goto L_0887D8C4;
      }
      goto L_0887D768;
    }
L_0887D768:
    aot_gpr[6] = (aot_gpr[22] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (8192u << 16u);
      if (branch_taken) {
          goto L_0887D8C4;
      }
      goto L_0887D774;
    }
L_0887D774:
    aot_gpr[8] = (57344u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25364)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D7E8;
      }
      goto L_0887D7B0;
    }
L_0887D7B0:
    if (static_cast<std::int32_t>(aot_gpr[22]) <= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
        goto L_0887D860;
    }
    goto L_0887D7B8;
L_0887D7B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 100u);
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[9]);
      if (branch_taken) {
          goto L_0887D85C;
      }
      goto L_0887D7E8;
    }
L_0887D7E8:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887D804;
      }
      goto L_0887D7F4;
    }
L_0887D7F4:
    if (aot_gpr[9] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_0887D834;
    }
    goto L_0887D7FC;
L_0887D7FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887D860;
      }
      goto L_0887D804;
    }
L_0887D804:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 75u);
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[9]);
      if (branch_taken) {
          goto L_0887D85C;
      }
      goto L_0887D834;
    }
L_0887D834:
    aot_gpr[9] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 50u);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    goto L_0887D85C;
L_0887D85C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    goto L_0887D860;
L_0887D860:
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887D880;
      }
      goto L_0887D87C;
    }
L_0887D87C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(25364), aot_gpr[5]);
    goto L_0887D880;
L_0887D880:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0887D890;
      }
      goto L_0887D88C;
    }
L_0887D88C:
    aot_gpr[5] = (0u | 0u);
    goto L_0887D890;
L_0887D890:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0887D8A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10372));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887D8A4u) goto L_0887D8A4;
    return;
L_0887D8A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0887D8B8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0887D8B8u) goto L_0887D8B8;
    return;
L_0887D8B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D920;
      }
      goto L_0887D8C0;
    }
L_0887D8C0:
    aot_gpr[6] = (8192u << 16u);
    goto L_0887D8C4;
L_0887D8C4:
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0887D920;
L_0887D920:
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
L_0887D950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(10136));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0887D998u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10376));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D998u) goto L_0887D998;
    return;
L_0887D998:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887D9B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10392));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D9B0u) goto L_0887D9B0;
    return;
L_0887D9B0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887D9C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10408));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D9C8u) goto L_0887D9C8;
    return;
L_0887D9C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887D9E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10428));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D9E0u) goto L_0887D9E0;
    return;
L_0887D9E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887DBF0;
      }
      goto L_0887DA34;
    }
L_0887DA34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_0887DBF0;
      }
      goto L_0887DA4C;
    }
L_0887DA4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(25368)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DBF0;
      }
      goto L_0887DA58;
    }
L_0887DA58:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2272)));
    aot_gpr[21] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0887DAAC;
      }
      goto L_0887DA78;
    }
L_0887DA78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DA84;
    }
L_0887DA84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0887DA94u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x0887DA94u) goto L_0887DA94;
    return;
L_0887DA94:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DAA0;
    }
L_0887DAA0:
    aot_gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(25368), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DAAC;
    }
L_0887DAAC:
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DAF0;
      }
      goto L_0887DABC;
    }
L_0887DABC:
    aot_gpr[31] = (0x0887DAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887DAC4u) goto L_0887DAC4;
    return;
L_0887DAC4:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2276)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DAE4;
    }
L_0887DAE4:
    aot_gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(25368), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DAF0;
    }
L_0887DAF0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2280)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DB00;
    }
L_0887DB00:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[6] = (aot_gpr[5] ^ 3u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_0887DB44;
      }
      goto L_0887DB1C;
    }
L_0887DB1C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0887DB30u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 90u, 0x088BC654u>(ctx, &aot_mem) && ctx.pc == 0x0887DB30u) goto L_0887DB30;
    return;
L_0887DB30:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887DBA0;
      }
      goto L_0887DB3C;
    }
L_0887DB3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DBA0;
      }
      goto L_0887DB44;
    }
L_0887DB44:
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DB7C;
      }
      goto L_0887DB58;
    }
L_0887DB58:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBA0;
      }
      goto L_0887DB74;
    }
L_0887DB74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DBA0;
      }
      goto L_0887DB7C;
    }
L_0887DB7C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0887DB90u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x0887DB90u) goto L_0887DB90;
    return;
L_0887DB90:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887DBA0;
      }
      goto L_0887DB9C;
    }
L_0887DB9C:
    aot_gpr[23] = (0u | 1u);
    goto L_0887DBA0;
L_0887DBA0:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DBB0;
      }
      goto L_0887DBA8;
    }
L_0887DBA8:
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(25368), static_cast<std::uint8_t>(0u));
    goto L_0887DBB0;
L_0887DBB0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DBF0;
      }
      goto L_0887DBB8;
    }
L_0887DBB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0887DBF0;
L_0887DBF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DC1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    aot_gpr[22] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(10136));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[31] = (0x0887DC74u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10440));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DC74u) goto L_0887DC74;
    return;
L_0887DC74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887DC8Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10456));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DC8Cu) goto L_0887DC8C;
    return;
L_0887DC8C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887DCA4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10464));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DCA4u) goto L_0887DCA4;
    return;
L_0887DCA4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887DCBCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10484));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DCBCu) goto L_0887DCBC;
    return;
L_0887DCBC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887DCD4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10508));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DCD4u) goto L_0887DCD4;
    return;
L_0887DCD4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887DCECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10524));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DCECu) goto L_0887DCEC;
    return;
L_0887DCEC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(10556));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[31] = (0x0887DD08u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DD08u) goto L_0887DD08;
    return;
L_0887DD08:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[6] = (aot_gpr[6] ^ 2u);
    aot_gpr[19] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (8192u << 16u);
      if (branch_taken) {
          goto L_0887DF4C;
      }
      goto L_0887DD3C;
    }
L_0887DD3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887DF14;
      }
      goto L_0887DDB4;
    }
L_0887DDB4:
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17530u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0887DDEC;
      }
      goto L_0887DDD4;
    }
L_0887DDD4:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887DDE0u);
    aot_gpr[5] = (0u | 1u);
    goto L_0887D620;
L_0887DDE0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0887DE30;
      }
      goto L_0887DDEC;
    }
L_0887DDEC:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DE1C;
      }
      goto L_0887DE04;
    }
L_0887DE04:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887DE10u);
    aot_gpr[5] = (0u | 2u);
    goto L_0887D620;
L_0887DE10:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0887DE30;
      }
      goto L_0887DE1C;
    }
L_0887DE1C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887DE28u);
    aot_gpr[5] = (0u | 3u);
    goto L_0887D620;
L_0887DE28:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0887DE30;
L_0887DE30:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[20] - aot_fpr[22];
        goto L_0887DE4C;
    }
    goto L_0887DE40;
L_0887DE40:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0887DE5C;
      }
      goto L_0887DE4C;
    }
L_0887DE4C:
    aot_gpr[18] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    goto L_0887DE5C;
L_0887DE5C:
    aot_gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[18]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 10u);
    aot_gpr[5] = (0u | 60000u);
    aot_gpr[6] = (0u | 60u);
    aot_gpr[7] = (0u | 100u);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[18]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[18]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[17] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DED0;
      }
      goto L_0887DEC4;
    }
L_0887DEC4:
    aot_gpr[18] = (0u | 99u);
    aot_gpr[17] = (0u | 59u);
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_0887DED0;
L_0887DED0:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x0887DEE0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887DEE0u) goto L_0887DEE0;
    return;
L_0887DEE0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887DEF8u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887DEF8u) goto L_0887DEF8;
    return;
L_0887DEF8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887DF0Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0887DF0Cu) goto L_0887DF0C;
    return;
L_0887DF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DF44;
      }
      goto L_0887DF14;
    }
L_0887DF14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0887DF44u);
    aot_gpr[5] = (0u | 0u);
    goto L_0887D620;
L_0887DF44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 10u, 0x0887E0F8u>(ctx, &aot_mem); return;
      }
      goto L_0887DF4C;
    }
L_0887DF4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DFA8;
      }
      goto L_0887DF80;
    }
L_0887DF80:
    aot_gpr[31] = (0x0887DF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887DF88u) goto L_0887DF88;
    return;
L_0887DF88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DFA8;
      }
      goto L_0887DFA4;
    }
L_0887DFA4:
    aot_gpr[16] = (0u | 0u);
    goto L_0887DFA8;
L_0887DFA8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 9u, 0x0887E0A8u>(ctx, &aot_mem); return;
      }
      goto L_0887DFB0;
    }
L_0887DFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1900)));
      if (branch_taken) {
          goto L_0887DFDC;
      }
      goto L_0887DFCC;
    }
L_0887DFCC:
    aot_gpr[31] = (0x0887DFD4u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 90u, 0x088BC654u>(ctx, &aot_mem) && ctx.pc == 0x0887DFD4u) goto L_0887DFD4;
    return;
L_0887DFD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887DFE8;
      }
      goto L_0887DFDC;
    }
L_0887DFDC:
    aot_gpr[31] = (0x0887DFE4u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x0887DFE4u) goto L_0887DFE4;
    return;
L_0887DFE4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_0887DFE8;
L_0887DFE8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(10372));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887E000u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0121(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0121_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_121(Runtime &runtime) {
    runtime.register_generated_unit(121u, 0x0887D000u, 4096u, &recomp_unit_0121, &recomp_unit_0121_entry);
    runtime.register_function(0x0887D004u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D00Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D014u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D018u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D020u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D03Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D050u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D064u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D080u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D09Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D0BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D0D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D0E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D0FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D110u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D12Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D148u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D164u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D178u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D180u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D188u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D194u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D19Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D1A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D1B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D1E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D200u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D208u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D234u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D244u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D254u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D268u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D274u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D284u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D298u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D2B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D2C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D2E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D2F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D318u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D320u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D328u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D334u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D34Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D368u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D390u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D3C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D3E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D3F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D400u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D40Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D410u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D418u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D420u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D428u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D438u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D448u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D458u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D460u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D468u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D4A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D4ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D4C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D4D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D4F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D518u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D520u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D54Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D57Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D598u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D5A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D5B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D5D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D5E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D5F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D604u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D610u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D620u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D674u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D68Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D6A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D6BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D6D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D6F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D708u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D720u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D740u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D75Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D768u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D774u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D7B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D7B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D7E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D7F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D7FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D804u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D834u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D85Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D860u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D87Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D880u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D88Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D890u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D8A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D8B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D8C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D8C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D920u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D950u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D998u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D9B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D9C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887D9E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DA34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DA4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DA58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DA78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DA84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DA94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DAA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DAACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DABCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DAC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DAE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DAF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB90u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DB9Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DBA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DBA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DBB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DBB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DBF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DC1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DC74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DC8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DCA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DCBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DCD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DCECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DD08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DD3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DDB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DDD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DDE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DDECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DE5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DEC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DED0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DEE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DEF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DF0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DF14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DF44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DF4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DF80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DF88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x0887DFE8u, &recomp_unit_0121, "recomp_unit_0121");
}
} // namespace psprecomp
