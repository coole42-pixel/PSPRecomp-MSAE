#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0635[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0,
    0, 0, 17, 0, 0, 18, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 64, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 73, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
};
void recomp_unit_0635_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A7F000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0635[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7F000;
    case 2u: goto L_08A7F030;
    case 3u: goto L_08A7F060;
    case 4u: goto L_08A7F090;
    case 5u: goto L_08A7F0C0;
    case 6u: goto L_08A7F0F0;
    case 7u: goto L_08A7F120;
    case 8u: goto L_08A7F150;
    case 9u: goto L_08A7F180;
    case 10u: goto L_08A7F1EC;
    case 11u: goto L_08A7F208;
    case 12u: goto L_08A7F218;
    case 13u: goto L_08A7F258;
    case 14u: goto L_08A7F260;
    case 15u: goto L_08A7F268;
    case 16u: goto L_08A7F278;
    case 17u: goto L_08A7F288;
    case 18u: goto L_08A7F294;
    case 19u: goto L_08A7F298;
    case 20u: goto L_08A7F2A8;
    case 21u: goto L_08A7F2B8;
    case 22u: goto L_08A7F2C4;
    case 23u: goto L_08A7F2C8;
    case 24u: goto L_08A7F2D8;
    case 25u: goto L_08A7F30C;
    case 26u: goto L_08A7F348;
    case 27u: goto L_08A7F360;
    case 28u: goto L_08A7F37C;
    case 29u: goto L_08A7F3AC;
    case 30u: goto L_08A7F3B0;
    case 31u: goto L_08A7F3E0;
    case 32u: goto L_08A7F414;
    case 33u: goto L_08A7F448;
    case 34u: goto L_08A7F468;
    case 35u: goto L_08A7F47C;
    case 36u: goto L_08A7F4A8;
    case 37u: goto L_08A7F4F0;
    case 38u: goto L_08A7F540;
    case 39u: goto L_08A7F570;
    case 40u: goto L_08A7F5A0;
    case 41u: goto L_08A7F5D0;
    case 42u: goto L_08A7F600;
    case 43u: goto L_08A7F630;
    case 44u: goto L_08A7F660;
    case 45u: goto L_08A7F684;
    case 46u: goto L_08A7F690;
    case 47u: goto L_08A7F6C0;
    case 48u: goto L_08A7F6F0;
    case 49u: goto L_08A7F720;
    case 50u: goto L_08A7F750;
    case 51u: goto L_08A7F780;
    case 52u: goto L_08A7F7B0;
    case 53u: goto L_08A7F7E0;
    case 54u: goto L_08A7F810;
    case 55u: goto L_08A7F840;
    case 56u: goto L_08A7F870;
    case 57u: goto L_08A7F884;
    case 58u: goto L_08A7F898;
    case 59u: goto L_08A7F8A0;
    case 60u: goto L_08A7F8B4;
    case 61u: goto L_08A7F8B8;
    case 62u: goto L_08A7F8DC;
    case 63u: goto L_08A7F904;
    case 64u: goto L_08A7F908;
    case 65u: goto L_08A7F914;
    case 66u: goto L_08A7F924;
    case 67u: goto L_08A7F928;
    case 68u: goto L_08A7F938;
    case 69u: goto L_08A7F950;
    case 70u: goto L_08A7F978;
    case 71u: goto L_08A7F990;
    case 72u: goto L_08A7F9A0;
    case 73u: goto L_08A7F9A4;
    case 74u: goto L_08A7F9A8;
    case 75u: goto L_08A7F9BC;
    case 76u: goto L_08A7F9C0;
    case 77u: goto L_08A7F9D0;
    case 78u: goto L_08A7F9F4;
    case 79u: goto L_08A7FA58;
    case 80u: goto L_08A7FAA8;
    case 81u: goto L_08A7FB38;
    case 82u: goto L_08A7FB50;
    case 83u: goto L_08A7FB78;
    case 84u: goto L_08A7FBC8;
    case 85u: goto L_08A7FC40;
    case 86u: goto L_08A7FC90;
    case 87u: goto L_08A7FCA0;
    case 88u: goto L_08A7FCB8;
    case 89u: goto L_08A7FCE8;
    case 90u: goto L_08A7FCF4;
    case 91u: goto L_08A7FD30;
    case 92u: goto L_08A7FDC0;
    case 93u: goto L_08A7FE60;
    case 94u: goto L_08A7FE90;
    case 95u: goto L_08A7FF24;
    case 96u: goto L_08A7FF30;
    case 97u: goto L_08A7FF60;
    case 98u: goto L_08A7FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7F000:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022C7BF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F030:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022C8850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F060:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022CA480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F090:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022CC3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F0C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022CE320u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F0F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022CFB90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F120:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022D0500u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F150:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022D0CE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F180:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0293F590u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F1EC:
    // nop
    ctx.pc = 0x02302150u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F208:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022D9C60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F218:
    // nop
    // nop
    ctx.pc = 0x022D90E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F258:
    // nop
    // nop
    goto L_08A7F260;
L_08A7F260:
    // nop
    // nop
    ctx.pc = 0x022E2A80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F268:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022E2DC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F278:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022E34E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F288:
    // nop
    // nop
    // nop
    goto L_08A7F294;
L_08A7F294:
    // nop
    ctx.pc = 0x022E6020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F298:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022EF800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F2A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022F49E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F2B8:
    // nop
    // nop
    // nop
    goto L_08A7F2C4;
L_08A7F2C4:
    // nop
    ctx.pc = 0x022F99C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F2C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022FB160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F2D8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02942520u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F30C:
    // nop
    ctx.pc = 0x02300A00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F348:
    // nop
    // nop
    ctx.pc = 0x02942500u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F360:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022FDA90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F37C:
    // nop
    ctx.pc = 0x022FD550u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F3AC:
    // nop
    ctx.pc = 0x022FD860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F3B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022FDC30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F3E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292B240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F414:
    // nop
    ctx.pc = 0x02300A00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F448:
    // nop
    // nop
    ctx.pc = 0x02302150u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F468:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02942700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F47C:
    // nop
    ctx.pc = 0x02303130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F4A8:
    // nop
    // nop
    ctx.pc = 0x02302BA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F4F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02303760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F540:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02306050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F570:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023064F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F5A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02306670u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F5D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02306DF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F600:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02308630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F630:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02932B60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F660:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02309230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F684:
    // nop
    ctx.pc = 0x0230A050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F690:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02932B60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F6C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0230B7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F6F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0230C1C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F720:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0230CD50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F750:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0230E880u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F780:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02310730u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F7B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02311BE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F7E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02312980u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F810:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02932B60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F840:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02314D40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F870:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023155C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F884:
    // nop
    ctx.pc = 0x02315100u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F898:
    // nop
    // nop
    ctx.pc = 0x02315280u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F8A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029428C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F8B4:
    // nop
    ctx.pc = 0x02318670u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F8B8:
    // nop
    // nop
    ctx.pc = 0x02317FD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F8DC:
    // nop
    ctx.pc = 0x02317FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F904:
    // nop
    ctx.pc = 0x02301E90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F908:
    // nop
    // nop
    ctx.pc = 0x02302150u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F914:
    // nop
    ctx.pc = 0x02318070u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F924:
    // nop
    ctx.pc = 0x02302780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F928:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02319030u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F938:
    // nop
    // nop
    ctx.pc = 0x02318B30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F950:
    // nop
    // nop
    ctx.pc = 0x02318B90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F978:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0232D050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F990:
    // nop
    // nop
    aot_gpr[31] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    aot_gpr[31] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    ctx.pc = 0x0232D050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F9A0:
    aot_gpr[31] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A7F9A4;
L_08A7F9A4:
    // nop
    ctx.pc = 0x02332700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F9A8:
    // nop
    // nop
    ctx.pc = 0x02928890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F9BC:
    // nop
    ctx.pc = 0x022FDEA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F9C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023353A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F9D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02947C60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7F9F4:
    // nop
    ctx.pc = 0x022FDD90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FA58:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02339820u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FAA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294A5F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FB38:
    // nop
    // nop
    rt.unsupported(0x08A7FB40u, 0x0000FFF0u, "special? not lowered yet"); return;
L_08A7FB50:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023899E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FB78:
    // nop
    // nop
    ctx.pc = 0x0238DA00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FBC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0239E620u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FC40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0239F190u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FC90:
    // nop
    // nop
    ctx.pc = 0x023A0180u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FCA0:
    // nop
    // nop
    ctx.pc = 0x023A1210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FCB8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023A4610u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FCE8:
    // nop
    // nop
    ctx.pc = 0x023A46A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FCF4:
    // nop
    ctx.pc = 0x02394140u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FD30:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294A980u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FDC0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294AA60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FE60:
    // nop
    // nop
    rt.unsupported(0x08A7FE68u, 0x0000F430u, "special? not lowered yet"); return;
L_08A7FE90:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294AD00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FF24:
    // nop
    ctx.pc = 0x023DB090u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FF30:
    // nop
    // nop
    rt.unsupported(0x08A7FF38u, 0x0000F430u, "special? not lowered yet"); return;
L_08A7FF60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294AFA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7FFF4:
    // nop
    ctx.pc = 0x023E62B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0635(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0635_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_635(Runtime &runtime) {
    runtime.register_generated_unit(635u, 0x08A7F000u, 4096u, &recomp_unit_0635, &recomp_unit_0635_entry);
    runtime.register_function(0x08A7F000u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F030u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F060u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F090u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F0C0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F0F0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F120u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F150u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F180u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F1ECu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F208u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F218u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F258u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F260u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F268u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F278u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F288u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F294u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F298u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F2A8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F2B8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F2C4u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F2C8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F2D8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F30Cu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F348u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F360u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F37Cu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F3ACu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F3B0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F3E0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F414u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F448u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F468u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F47Cu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F4A8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F4F0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F540u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F570u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F5A0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F5D0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F600u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F630u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F660u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F684u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F690u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F6C0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F6F0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F720u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F750u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F780u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F7B0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F7E0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F810u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F840u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F870u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F884u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F898u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F8A0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F8B4u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F8B8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F8DCu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F904u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F908u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F914u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F924u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F928u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F938u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F950u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F978u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F990u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9A0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9A4u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9A8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9BCu, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9C0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9D0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7F9F4u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FA58u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FAA8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FB38u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FB50u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FB78u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FBC8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FC40u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FC90u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FCA0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FCB8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FCE8u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FCF4u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FD30u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FDC0u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FE60u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FE90u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FF24u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FF30u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FF60u, &recomp_unit_0635, "recomp_unit_0635");
    runtime.register_function(0x08A7FFF4u, &recomp_unit_0635, "recomp_unit_0635");
}
} // namespace psprecomp
