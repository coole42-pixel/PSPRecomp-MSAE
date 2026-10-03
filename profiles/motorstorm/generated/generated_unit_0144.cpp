#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0144[1016] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 14, 0, 0, 15, 0, 0, 16, 17, 0, 18, 19, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0,
    31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0,
    0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 57, 0, 0,
    0, 0, 0, 58, 0, 59, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0,
    0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 0, 105, 0,
    106, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0,
    0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
};
void recomp_unit_0144_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08894000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0144[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08894000;
    case 2u: goto L_0889401C;
    case 3u: goto L_08894024;
    case 4u: goto L_0889402C;
    case 5u: goto L_08894030;
    case 6u: goto L_08894044;
    case 7u: goto L_08894078;
    case 8u: goto L_08894084;
    case 9u: goto L_0889408C;
    case 10u: goto L_08894098;
    case 11u: goto L_088940B8;
    case 12u: goto L_088940C0;
    case 13u: goto L_088940C8;
    case 14u: goto L_088940CC;
    case 15u: goto L_088940D8;
    case 16u: goto L_088940E4;
    case 17u: goto L_088940E8;
    case 18u: goto L_088940F0;
    case 19u: goto L_088940F4;
    case 20u: goto L_08894100;
    case 21u: goto L_08894124;
    case 22u: goto L_08894140;
    case 23u: goto L_08894150;
    case 24u: goto L_08894160;
    case 25u: goto L_0889429C;
    case 26u: goto L_088942BC;
    case 27u: goto L_088942D0;
    case 28u: goto L_088942E8;
    case 29u: goto L_088942F0;
    case 30u: goto L_088942F8;
    case 31u: goto L_08894300;
    case 32u: goto L_08894308;
    case 33u: goto L_08894318;
    case 34u: goto L_08894320;
    case 35u: goto L_08894328;
    case 36u: goto L_08894330;
    case 37u: goto L_08894338;
    case 38u: goto L_08894340;
    case 39u: goto L_08894348;
    case 40u: goto L_08894350;
    case 41u: goto L_0889435C;
    case 42u: goto L_08894364;
    case 43u: goto L_0889436C;
    case 44u: goto L_08894384;
    case 45u: goto L_08894390;
    case 46u: goto L_08894398;
    case 47u: goto L_088943A8;
    case 48u: goto L_088943B0;
    case 49u: goto L_088943B8;
    case 50u: goto L_088943C0;
    case 51u: goto L_088943C8;
    case 52u: goto L_088943D0;
    case 53u: goto L_088943D8;
    case 54u: goto L_088943E0;
    case 55u: goto L_088943E8;
    case 56u: goto L_088943F0;
    case 57u: goto L_088943F4;
    case 58u: goto L_0889440C;
    case 59u: goto L_08894414;
    case 60u: goto L_08894418;
    case 61u: goto L_08894420;
    case 62u: goto L_08894440;
    case 63u: goto L_08894464;
    case 64u: goto L_08894470;
    case 65u: goto L_0889447C;
    case 66u: goto L_0889448C;
    case 67u: goto L_088944AC;
    case 68u: goto L_088944CC;
    case 69u: goto L_0889450C;
    case 70u: goto L_08894524;
    case 71u: goto L_088945C0;
    case 72u: goto L_088945DC;
    case 73u: goto L_08894614;
    case 74u: goto L_08894624;
    case 75u: goto L_08894630;
    case 76u: goto L_08894638;
    case 77u: goto L_0889465C;
    case 78u: goto L_0889466C;
    case 79u: goto L_08894674;
    case 80u: goto L_08894684;
    case 81u: goto L_0889468C;
    case 82u: goto L_08894694;
    case 83u: goto L_0889469C;
    case 84u: goto L_088946B0;
    case 85u: goto L_088946D4;
    case 86u: goto L_088946F8;
    case 87u: goto L_08894708;
    case 88u: goto L_08894714;
    case 89u: goto L_08894720;
    case 90u: goto L_08894748;
    case 91u: goto L_08894774;
    case 92u: goto L_08894788;
    case 93u: goto L_08894798;
    case 94u: goto L_088947B4;
    case 95u: goto L_088947D8;
    case 96u: goto L_088947E8;
    case 97u: goto L_088947F0;
    case 98u: goto L_088947F4;
    case 99u: goto L_0889482C;
    case 100u: goto L_08894834;
    case 101u: goto L_08894840;
    case 102u: goto L_0889485C;
    case 103u: goto L_08894860;
    case 104u: goto L_08894868;
    case 105u: goto L_08894878;
    case 106u: goto L_08894880;
    case 107u: goto L_08894884;
    case 108u: goto L_0889488C;
    case 109u: goto L_088948CC;
    case 110u: goto L_08894960;
    case 111u: goto L_08894970;
    case 112u: goto L_08894980;
    case 113u: goto L_08894D38;
    case 114u: goto L_08894D4C;
    case 115u: goto L_08894D70;
    case 116u: goto L_08894DC4;
    case 117u: goto L_08894DD0;
    case 118u: goto L_08894DE0;
    case 119u: goto L_08894DE8;
    case 120u: goto L_08894DF0;
    case 121u: goto L_08894E08;
    case 122u: goto L_08894E14;
    case 123u: goto L_08894E28;
    case 124u: goto L_08894E8C;
    case 125u: goto L_08894EA0;
    case 126u: goto L_08894EBC;
    case 127u: goto L_08894EC4;
    case 128u: goto L_08894ED4;
    case 129u: goto L_08894ED8;
    case 130u: goto L_08894F3C;
    case 131u: goto L_08894F48;
    case 132u: goto L_08894F50;
    case 133u: goto L_08894F60;
    case 134u: goto L_08894F6C;
    case 135u: goto L_08894FB4;
    case 136u: goto L_08894FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08894000:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_0889401C;
L_0889401C:
    aot_gpr[31] = (0x08894024u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 116u, 0x0893CA68u>(ctx, &aot_mem) && ctx.pc == 0x08894024u) goto L_08894024;
    return;
L_08894024:
    aot_gpr[31] = (0x0889402Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 159u, 0x08892D7Cu>(ctx, &aot_mem) && ctx.pc == 0x0889402Cu) goto L_0889402C;
    return;
L_0889402C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), 0u);
    goto L_08894030;
L_08894030:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894044:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] & 255u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889408C;
      }
      goto L_08894078;
    }
L_08894078:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08894084u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08894084u) goto L_08894084;
    return;
L_08894084:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    goto L_0889408C;
L_0889408C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088940C0;
      }
      goto L_08894098;
    }
L_08894098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088940B8u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088940B8u) goto L_088940B8;
    return;
L_088940B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088940CC;
      }
      goto L_088940C0;
    }
L_088940C0:
    aot_gpr[31] = (0x088940C8u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088940C8u) goto L_088940C8;
    return;
L_088940C8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_088940CC;
L_088940CC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 64u);
      if (branch_taken) {
          goto L_088940E8;
      }
      goto L_088940D8;
    }
L_088940D8:
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088940E4u);
    aot_gpr[6] = (72u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 124u, 0x088C586Cu>(ctx, &aot_mem) && ctx.pc == 0x088940E4u) goto L_088940E4;
    return;
L_088940E4:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_088940E8;
L_088940E8:
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26076), aot_gpr[18]);
      if (branch_taken) {
          goto L_088940F4;
      }
      goto L_088940F0;
    }
L_088940F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-30480), aot_gpr[20]);
    goto L_088940F4;
L_088940F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26076)));
    aot_gpr[31] = (0x08894100u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 26u, 0x0893C170u>(ctx, &aot_mem) && ctx.pc == 0x08894100u) goto L_08894100;
    return;
L_08894100:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26076)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08894140u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 139u, 0x088C598Cu>(ctx, &aot_mem) && ctx.pc == 0x08894140u) goto L_08894140;
    return;
L_08894140:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26076), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08894150u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 26u, 0x0893C170u>(ctx, &aot_mem) && ctx.pc == 0x08894150u) goto L_08894150;
    return;
L_08894150:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894160:
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889429C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088942BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(61) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088943F0;
      }
      goto L_088942D0;
    }
L_088942D0:
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[7]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(13256)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088942E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 12u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088942F0;
    }
L_088942F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 32u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088942F8;
    }
L_088942F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 132u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894300;
    }
L_08894300:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 16u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894308;
    }
L_08894308:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[7] << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894318;
    }
L_08894318:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894320;
    }
L_08894320:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 12u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894328;
    }
L_08894328:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 16u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894330;
    }
L_08894330:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 24u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894338;
    }
L_08894338:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 28u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894340;
    }
L_08894340:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 32u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894348;
    }
L_08894348:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894350;
    }
L_08894350:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_0889435C;
    }
L_0889435C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894364;
    }
L_08894364:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 36u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_0889436C;
    }
L_0889436C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(12))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08894390;
      }
      goto L_08894384;
    }
L_08894384:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    goto L_08894390;
L_08894390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_08894398;
    }
L_08894398:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12))))));
    aot_gpr[8] = (aot_gpr[7] << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943A8;
    }
L_088943A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 128u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943B0;
    }
L_088943B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 64u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943B8;
    }
L_088943B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 64u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943C0;
    }
L_088943C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943C8;
    }
L_088943C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 8u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943D0;
    }
L_088943D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 12u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943D8;
    }
L_088943D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 16u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943E0;
    }
L_088943E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943E8;
    }
L_088943E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_088943F4;
      }
      goto L_088943F0;
    }
L_088943F0:
    aot_gpr[8] = (0u | 0u);
    goto L_088943F4;
L_088943F4:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894414;
      }
      goto L_0889440C;
    }
L_0889440C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08894418;
      }
      goto L_08894414;
    }
L_08894414:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    goto L_08894418;
L_08894418:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894420:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26080), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08894464u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08894464u) goto L_08894464;
    return;
L_08894464:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08894470u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08894470u) goto L_08894470;
    return;
L_08894470:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0889447Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0889447Cu) goto L_0889447C;
    return;
L_0889447C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889448C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26088), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088944AC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26096), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088944CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0889450Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0889450Cu) goto L_0889450C;
    return;
L_0889450C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08894524u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x08894524u) goto L_08894524;
    return;
L_08894524:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[19]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[18]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[6] = (37120u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5183));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x088945C0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x088945C0u) goto L_088945C0;
    return;
L_088945C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088945DC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9928), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9932), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9933), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26108), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894614:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08894624u);
    // nop
    goto L_088945DC;
L_08894624:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894630:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894638:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7932)));
    aot_gpr[4] = (aot_gpr[4] ^ 9u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894694;
      }
      goto L_0889465C;
    }
L_0889465C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26112))))));
    aot_gpr[31] = (0x0889466Cu);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889466Cu) goto L_0889466C;
    return;
L_0889466C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889468C;
      }
      goto L_08894674;
    }
L_08894674:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889469C;
      }
      goto L_08894684;
    }
L_08894684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894714;
      }
      goto L_0889468C;
    }
L_0889468C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894714;
      }
      goto L_08894694;
    }
L_08894694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894714;
      }
      goto L_0889469C;
    }
L_0889469C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(9928)));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08894714;
      }
      goto L_088946B0;
    }
L_088946B0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (15820u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9936)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (2218u << 16u);
        goto L_08894708;
    }
    goto L_088946D4;
L_088946D4:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(26108)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6976));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(4))))));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894714;
      }
      goto L_088946F8;
    }
L_088946F8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2196), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08894714;
      }
      goto L_08894708;
    }
L_08894708:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08894714;
L_08894714:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2196)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08894788;
      }
      goto L_08894748;
    }
L_08894748:
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(9933), static_cast<std::uint8_t>(0u));
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(9932), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(2196), aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(9928), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08894774u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9160));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08894774u) goto L_08894774;
    return;
L_08894774:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26108), aot_gpr[16]);
    goto L_08894788;
L_08894788:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894798:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7932)));
    aot_gpr[4] = (aot_gpr[4] ^ 9u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889482C;
      }
      goto L_088947B4;
    }
L_088947B4:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(26108)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[7] = (aot_gpr[7] & 1u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[4] = (0u | 1u);
        goto L_088947F4;
    }
    goto L_088947D8;
L_088947D8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894840;
      }
      goto L_088947E8;
    }
L_088947E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1))))));
      if (branch_taken) {
          goto L_08894834;
      }
      goto L_088947F0;
    }
L_088947F0:
    aot_gpr[4] = (0u | 1u);
    goto L_088947F4;
L_088947F4:
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(9933), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-6544));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(9932)));
    aot_gpr[5] = (0u | 128u);
    aot_gpr[2] = (aot_gpr[6] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_08894860;
      }
      goto L_0889482C;
    }
L_0889482C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08894860;
      }
      goto L_08894834;
    }
L_08894834:
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_08894840;
    }
L_08894840:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(9932)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(9932), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0889485C;
L_0889485C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08894860;
L_08894860:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894868:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894880;
      }
      goto L_08894878;
    }
L_08894878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08894884;
      }
      goto L_08894880;
    }
L_08894880:
    aot_gpr[2] = (0u | 0u);
    goto L_08894884;
L_08894884:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889488C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x088948CCu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x088948CCu) goto L_088948CC;
    return;
L_088948CC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (48648u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2056));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[31] = (0x08894960u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08894960u) goto L_08894960;
    return;
L_08894960:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08894970u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x08894970u) goto L_08894970;
    return;
L_08894970:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08894980u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 9u, 0x08A4B070u>(ctx, &aot_mem) && ctx.pc == 0x08894980u) goto L_08894980;
    return;
L_08894980:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (51263u << 16u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(-17676));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = aot_fpr[16] + aot_fpr[12];
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(72), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(114), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(108), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(116), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(120), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(132), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(144), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(156), aot_gpr[7]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(164), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(172), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(174), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(168), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(180), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08894D38u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(aot_gpr[8]));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08894D38u) goto L_08894D38;
    return;
L_08894D38:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[31] = (0x08894D4Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 196u, 0x0892EF34u>(ctx, &aot_mem) && ctx.pc == 0x08894D4Cu) goto L_08894D4C;
    return;
L_08894D4C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894D70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26112))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    aot_gpr[31] = (0x08894DC4u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x08894DC4u) goto L_08894DC4;
    return;
L_08894DC4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894DE8;
      }
      goto L_08894DD0;
    }
L_08894DD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894DF0;
      }
      goto L_08894DE0;
    }
L_08894DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 113u, 0x08895A48u>(ctx, &aot_mem); return;
      }
      goto L_08894DE8;
    }
L_08894DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 115u, 0x08895A68u>(ctx, &aot_mem); return;
      }
      goto L_08894DF0;
    }
L_08894DF0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[24] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[24])));
      if (branch_taken) {
          goto L_08894E14;
      }
      goto L_08894E08;
    }
L_08894E08:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
    goto L_08894E14;
L_08894E14:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(9160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x08894E28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08894E28u) goto L_08894E28;
    return;
L_08894E28:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16672u << 16u);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26112))))));
    aot_gpr[31] = (0x08894E8Cu);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x08894E8Cu) goto L_08894E8C;
    return;
L_08894E8C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08894EA0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x08894EA0u) goto L_08894EA0;
    return;
L_08894EA0:
    aot_gpr[4] = (17292u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[30] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894EC4;
      }
      goto L_08894EBC;
    }
L_08894EBC:
    aot_gpr[4] = (17292u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08894EC4;
L_08894EC4:
    aot_gpr[23] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 113u, 0x08895A48u>(ctx, &aot_mem); return;
      }
      goto L_08894ED4;
    }
L_08894ED4:
    aot_gpr[4] = (16128u << 16u);
    goto L_08894ED8;
L_08894ED8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (16025u << 16u);
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_gpr[4] = (17102u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[22] - aot_fpr[13];
    aot_fpr[16] = aot_fpr[16] - aot_fpr[15];
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_fpr[15] = aot_fpr[17] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = aot_gpr[23] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08894F50;
      }
      goto L_08894F3C;
    }
L_08894F3C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08894F48u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0889488C;
L_08894F48:
    aot_gpr[16] = (65409u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-32640));
    goto L_08894F50;
L_08894F50:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26112))))));
    aot_gpr[31] = (0x08894F60u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x08894F60u) goto L_08894F60;
    return;
L_08894F60:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26112))))));
    aot_gpr[31] = (0x08894F6Cu);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x08894F6Cu) goto L_08894F6C;
    return;
L_08894F6C:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-6992))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] ^ 15u);
    aot_gpr[11] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (17292u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 33u);
    aot_gpr[31] = (0x08894FB4u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(9160));
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 105u, 0x0891B844u>(ctx, &aot_mem) && ctx.pc == 0x08894FB4u) goto L_08894FB4;
    return;
L_08894FB4:
    aot_fpr[20] = aot_fpr[20] + aot_fpr[0];
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(9932)));
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_fpr[26] = aot_fpr[26] + aot_fpr[20];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 14u, 0x088951A0u>(ctx, &aot_mem); return;
      }
      goto L_08894FDC;
    }
L_08894FDC:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3212)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (17194u << 16u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.pc = 0x08895000u; return;
}

void recomp_unit_0144(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0144_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_144(Runtime &runtime) {
    runtime.register_generated_unit(144u, 0x08894000u, 4096u, &recomp_unit_0144, &recomp_unit_0144_entry);
    runtime.register_function(0x08894000u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889401Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894024u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889402Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894030u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894044u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894078u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894084u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889408Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894098u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940C0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088940F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894100u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894124u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894140u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894150u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894160u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889429Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088942BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088942D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088942E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088942F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088942F8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894300u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894308u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894318u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894320u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894328u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894330u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894338u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894340u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894348u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894350u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889435Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894364u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889436Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894384u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894390u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894398u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943A8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943C0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088943F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889440Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894414u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894418u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894420u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894440u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894464u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894470u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889447Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889448Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088944ACu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088944CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889450Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894524u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088945C0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088945DCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894614u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894624u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894630u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894638u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889465Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889466Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894674u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894684u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889468Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894694u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889469Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088946B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088946D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088946F8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894708u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894714u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894720u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894748u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894774u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894788u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894798u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088947B4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088947D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088947E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088947F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088947F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889482Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894834u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894840u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889485Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894860u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894868u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894878u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894880u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894884u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x0889488Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x088948CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894960u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894970u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894980u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894D38u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894D4Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894D70u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894DC4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894DD0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894DE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894DE8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894DF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894E08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894E14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894E28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894E8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894EA0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894EBCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894EC4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894ED4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894ED8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894F3Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894F48u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894F50u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894F60u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894F6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894FB4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08894FDCu, &recomp_unit_0144, "recomp_unit_0144");
}
} // namespace psprecomp
