#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0637[1007] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 78,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90,
};
void recomp_unit_0637_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A81000u;
        entry_id = (entry_delta < 4028u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0637[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A81000;
    case 2u: goto L_08A81010;
    case 3u: goto L_08A81014;
    case 4u: goto L_08A81068;
    case 5u: goto L_08A810A8;
    case 6u: goto L_08A810B0;
    case 7u: goto L_08A810C0;
    case 8u: goto L_08A8111C;
    case 9u: goto L_08A8112C;
    case 10u: goto L_08A81144;
    case 11u: goto L_08A81148;
    case 12u: goto L_08A8114C;
    case 13u: goto L_08A81198;
    case 14u: goto L_08A811B8;
    case 15u: goto L_08A811C4;
    case 16u: goto L_08A811D0;
    case 17u: goto L_08A81200;
    case 18u: goto L_08A81208;
    case 19u: goto L_08A81234;
    case 20u: goto L_08A81240;
    case 21u: goto L_08A81260;
    case 22u: goto L_08A81290;
    case 23u: goto L_08A812F0;
    case 24u: goto L_08A812F8;
    case 25u: goto L_08A81370;
    case 26u: goto L_08A81380;
    case 27u: goto L_08A813B8;
    case 28u: goto L_08A813D0;
    case 29u: goto L_08A813EC;
    case 30u: goto L_08A81450;
    case 31u: goto L_08A81480;
    case 32u: goto L_08A814B0;
    case 33u: goto L_08A814EC;
    case 34u: goto L_08A814F0;
    case 35u: goto L_08A81530;
    case 36u: goto L_08A81570;
    case 37u: goto L_08A815A0;
    case 38u: goto L_08A815B0;
    case 39u: goto L_08A81630;
    case 40u: goto L_08A81648;
    case 41u: goto L_08A81660;
    case 42u: goto L_08A81690;
    case 43u: goto L_08A816C0;
    case 44u: goto L_08A816F0;
    case 45u: goto L_08A81708;
    case 46u: goto L_08A81748;
    case 47u: goto L_08A81760;
    case 48u: goto L_08A81790;
    case 49u: goto L_08A817B0;
    case 50u: goto L_08A817C0;
    case 51u: goto L_08A817F0;
    case 52u: goto L_08A81820;
    case 53u: goto L_08A81834;
    case 54u: goto L_08A81840;
    case 55u: goto L_08A81850;
    case 56u: goto L_08A8185C;
    case 57u: goto L_08A8187C;
    case 58u: goto L_08A81880;
    case 59u: goto L_08A818B0;
    case 60u: goto L_08A818E0;
    case 61u: goto L_08A81910;
    case 62u: goto L_08A81914;
    case 63u: goto L_08A81940;
    case 64u: goto L_08A81950;
    case 65u: goto L_08A81A18;
    case 66u: goto L_08A81A90;
    case 67u: goto L_08A81BE0;
    case 68u: goto L_08A81C04;
    case 69u: goto L_08A81C18;
    case 70u: goto L_08A81C28;
    case 71u: goto L_08A81C48;
    case 72u: goto L_08A81C7C;
    case 73u: goto L_08A81CC8;
    case 74u: goto L_08A81CD8;
    case 75u: goto L_08A81CE8;
    case 76u: goto L_08A81D5C;
    case 77u: goto L_08A81D78;
    case 78u: goto L_08A81D7C;
    case 79u: goto L_08A81D98;
    case 80u: goto L_08A81DB8;
    case 81u: goto L_08A81DD0;
    case 82u: goto L_08A81E08;
    case 83u: goto L_08A81E40;
    case 84u: goto L_08A81E78;
    case 85u: goto L_08A81E98;
    case 86u: goto L_08A81F18;
    case 87u: goto L_08A81F2C;
    case 88u: goto L_08A81F90;
    case 89u: goto L_08A81FA4;
    case 90u: goto L_08A81FB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A81000:
    // nop
    // nop
    ctx.pc = 0x02573E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81010:
    // nop
    goto L_08A81014;
L_08A81014:
    // nop
    // nop
    // nop
    ctx.pc = 0x0257C240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81068:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0257C6C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A810A8:
    // nop
    // nop
    goto L_08A810B0;
L_08A810B0:
    // nop
    // nop
    ctx.pc = 0x0257E350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A810C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025823D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8111C:
    // nop
    ctx.pc = 0x02581F80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8112C:
    // nop
    ctx.pc = 0x02803A40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81144:
    // nop
    ctx.pc = 0x02581FE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81148:
    // nop
    goto L_08A8114C;
L_08A8114C:
    // nop
    // nop
    // nop
    ctx.pc = 0x02582C40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81198:
    // nop
    // nop
    ctx.pc = 0x02582670u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A811B8:
    // nop
    // nop
    ctx.pc = 0x025826D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A811C4:
    // nop
    ctx.pc = 0x02803F40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A811D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02583300u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81200:
    // nop
    // nop
    goto L_08A81208;
L_08A81208:
    // nop
    // nop
    ctx.pc = 0x02964440u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81234:
    // nop
    ctx.pc = 0x02584CA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81240:
    // nop
    // nop
    ctx.pc = 0x02585270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81260:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029647D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81290:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02964BC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A812F0:
    // nop
    // nop
    goto L_08A812F8;
L_08A812F8:
    // nop
    // nop
    ctx.pc = 0x0258B290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81370:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0258B890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81380:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0258C080u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A813B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0258C8A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A813D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02597650u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A813EC:
    // nop
    ctx.pc = 0x025979A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81450:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02598EC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81480:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0259A8C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A814B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0259DD10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A814EC:
    // nop
    ctx.pc = 0x0259F860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A814F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0259E100u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81530:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0259E4E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81570:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025A4130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A815A0:
    // nop
    // nop
    ctx.pc = 0x0259F790u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A815B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025A8240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81630:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025ACDC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81648:
    // nop
    // nop
    ctx.pc = 0x025AD820u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81660:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025AFFA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81690:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C4270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A816C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C4D90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A816F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C56A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81708:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C7780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81748:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C7B00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81760:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C8440u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81790:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C8960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A817B0:
    // nop
    // nop
    ctx.pc = 0x025C8BF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A817C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C8CE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A817F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025CA090u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81820:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025CA3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81834:
    // nop
    ctx.pc = 0x025CA5B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81840:
    // nop
    // nop
    ctx.pc = 0x025CA660u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81850:
    // nop
    // nop
    // nop
    goto L_08A8185C;
L_08A8185C:
    // nop
    ctx.pc = 0x025CA6F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8187C:
    // nop
    ctx.pc = 0x025CBEC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81880:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025CC700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A818B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025CD870u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A818E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025CDC60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81910:
    // nop
    goto L_08A81914;
L_08A81914:
    // nop
    // nop
    // nop
    ctx.pc = 0x025CE020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81940:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025D37A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81950:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81A18:
    // nop
    // nop
    ctx.pc = 0x028B4250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81A90:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81BE0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E2890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81C04:
    // nop
    ctx.pc = 0x025E2C00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81C18:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81C28:
    // nop
    // nop
    ctx.pc = 0x025E7680u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81C48:
    // nop
    // nop
    ctx.pc = 0x025E2570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81C7C:
    // nop
    ctx.pc = 0x025E8450u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81CC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E5EC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81CD8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E69D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81CE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81D5C:
    // nop
    ctx.pc = 0x025E8660u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81D78:
    // nop
    goto L_08A81D7C;
L_08A81D7C:
    // nop
    // nop
    // nop
    ctx.pc = 0x025E8C90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81D98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E65D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81DB8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E9B60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81DD0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025EE160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81E08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025EE3B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81E40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025EF3F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81E78:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81E98:
    // nop
    // nop
    ctx.pc = 0x025FA350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81F18:
    // nop
    // nop
    ctx.pc = 0x025F2850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81F2C:
    // nop
    ctx.pc = 0x025EFAB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81F90:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81FA4:
    // nop
    ctx.pc = 0x025E7680u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A81FB8:
    // nop
    // nop
    ctx.pc = 0x025FD650u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0637(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0637_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_637(Runtime &runtime) {
    runtime.register_generated_unit(637u, 0x08A81000u, 4096u, &recomp_unit_0637, &recomp_unit_0637_entry);
    runtime.register_function(0x08A81000u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81010u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81014u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81068u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A810A8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A810B0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A810C0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A8111Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A8112Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81144u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81148u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A8114Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81198u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A811B8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A811C4u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A811D0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81200u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81208u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81234u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81240u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81260u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81290u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A812F0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A812F8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81370u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81380u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A813B8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A813D0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A813ECu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81450u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81480u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A814B0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A814ECu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A814F0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81530u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81570u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A815A0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A815B0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81630u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81648u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81660u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81690u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A816C0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A816F0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81708u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81748u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81760u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81790u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A817B0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A817C0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A817F0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81820u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81834u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81840u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81850u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A8185Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A8187Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81880u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A818B0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A818E0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81910u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81914u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81940u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81950u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81A18u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81A90u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81BE0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81C04u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81C18u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81C28u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81C48u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81C7Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81CC8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81CD8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81CE8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81D5Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81D78u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81D7Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81D98u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81DB8u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81DD0u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81E08u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81E40u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81E78u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81E98u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81F18u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81F2Cu, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81F90u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81FA4u, &recomp_unit_0637, "recomp_unit_0637");
    runtime.register_function(0x08A81FB8u, &recomp_unit_0637, "recomp_unit_0637");
}
} // namespace psprecomp
