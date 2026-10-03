#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0639[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
};
void recomp_unit_0639_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A83000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0639[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A83000;
    case 2u: goto L_08A83080;
    case 3u: goto L_08A8309C;
    case 4u: goto L_08A830B0;
    case 5u: goto L_08A83108;
    case 6u: goto L_08A83190;
    case 7u: goto L_08A831B8;
    case 8u: goto L_08A831E0;
    case 9u: goto L_08A83208;
    case 10u: goto L_08A83218;
    case 11u: goto L_08A83228;
    case 12u: goto L_08A83230;
    case 13u: goto L_08A83258;
    case 14u: goto L_08A83280;
    case 15u: goto L_08A83290;
    case 16u: goto L_08A83294;
    case 17u: goto L_08A832B0;
    case 18u: goto L_08A832C8;
    case 19u: goto L_08A83310;
    case 20u: goto L_08A8333C;
    case 21u: goto L_08A83390;
    case 22u: goto L_08A833B0;
    case 23u: goto L_08A833C0;
    case 24u: goto L_08A833C4;
    case 25u: goto L_08A833D0;
    case 26u: goto L_08A833E0;
    case 27u: goto L_08A833F4;
    case 28u: goto L_08A83418;
    case 29u: goto L_08A8342C;
    case 30u: goto L_08A83458;
    case 31u: goto L_08A83474;
    case 32u: goto L_08A83498;
    case 33u: goto L_08A834A4;
    case 34u: goto L_08A834CC;
    case 35u: goto L_08A834D8;
    case 36u: goto L_08A834F0;
    case 37u: goto L_08A83560;
    case 38u: goto L_08A83570;
    case 39u: goto L_08A8358C;
    case 40u: goto L_08A835A0;
    case 41u: goto L_08A835E0;
    case 42u: goto L_08A8360C;
    case 43u: goto L_08A83640;
    case 44u: goto L_08A83664;
    case 45u: goto L_08A836D0;
    case 46u: goto L_08A836E8;
    case 47u: goto L_08A8371C;
    case 48u: goto L_08A83730;
    case 49u: goto L_08A837B8;
    case 50u: goto L_08A837F8;
    case 51u: goto L_08A83824;
    case 52u: goto L_08A8382C;
    case 53u: goto L_08A83838;
    case 54u: goto L_08A83878;
    case 55u: goto L_08A838B8;
    case 56u: goto L_08A838C8;
    case 57u: goto L_08A83900;
    case 58u: goto L_08A83918;
    case 59u: goto L_08A8392C;
    case 60u: goto L_08A83948;
    case 61u: goto L_08A83988;
    case 62u: goto L_08A839C0;
    case 63u: goto L_08A839C8;
    case 64u: goto L_08A839D0;
    case 65u: goto L_08A839EC;
    case 66u: goto L_08A83A60;
    case 67u: goto L_08A83AA8;
    case 68u: goto L_08A83AE8;
    case 69u: goto L_08A83B28;
    case 70u: goto L_08A83B68;
    case 71u: goto L_08A83BA8;
    case 72u: goto L_08A83BB0;
    case 73u: goto L_08A83BCC;
    case 74u: goto L_08A83BE8;
    case 75u: goto L_08A83C70;
    case 76u: goto L_08A83C7C;
    case 77u: goto L_08A83C98;
    case 78u: goto L_08A83CB8;
    case 79u: goto L_08A83D00;
    case 80u: goto L_08A83D20;
    case 81u: goto L_08A83D38;
    case 82u: goto L_08A83D54;
    case 83u: goto L_08A83D6C;
    case 84u: goto L_08A83D88;
    case 85u: goto L_08A83DD0;
    case 86u: goto L_08A83DDC;
    case 87u: goto L_08A83DF4;
    case 88u: goto L_08A83E28;
    case 89u: goto L_08A83E68;
    case 90u: goto L_08A83EB0;
    case 91u: goto L_08A83F38;
    case 92u: goto L_08A83F44;
    case 93u: goto L_08A83F90;
    case 94u: goto L_08A83F9C;
    case 95u: goto L_08A83FA8;
    case 96u: goto L_08A83FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A83000:
    // nop
    // nop
    ctx.pc = 0x0281BA40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83080:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0282A6B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8309C:
    // nop
    ctx.pc = 0x02967290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A830B0:
    // nop
    // nop
    ctx.pc = 0x02803910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83108:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0282CA60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83190:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0282FE50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A831B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0282FFF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A831E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02830330u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83208:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02830790u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83218:
    // nop
    // nop
    ctx.pc = 0x02830900u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83228:
    // nop
    // nop
    ctx.pc = 0x02830950u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83230:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02830B70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83258:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02830E80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83280:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02831230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83290:
    // nop
    goto L_08A83294;
L_08A83294:
    // nop
    // nop
    // nop
    ctx.pc = 0x02831CB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A832B0:
    // nop
    // nop
    ctx.pc = 0x02831F40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A832C8:
    // nop
    // nop
    ctx.pc = 0x028324C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83310:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02838030u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8333C:
    // nop
    ctx.pc = 0x02832240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83390:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283DB90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A833B0:
    // nop
    // nop
    ctx.pc = 0x0283E2B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A833C0:
    // nop
    goto L_08A833C4;
L_08A833C4:
    // nop
    ctx.pc = 0x0283DEB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A833D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283E440u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A833E0:
    // nop
    // nop
    ctx.pc = 0x029673D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A833F4:
    // nop
    ctx.pc = 0x0283EB60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83418:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283ECF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8342C:
    // nop
    ctx.pc = 0x02967410u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83458:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F5A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83474:
    // nop
    ctx.pc = 0x0283FBB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83498:
    // nop
    // nop
    // nop
    goto L_08A834A4;
L_08A834A4:
    // nop
    ctx.pc = 0x0283FE70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A834CC:
    // nop
    ctx.pc = 0x02840190u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A834D8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02967620u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A834F0:
    // nop
    // nop
    ctx.pc = 0x02840A70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83560:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02840D20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83570:
    // nop
    // nop
    ctx.pc = 0x029677B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8358C:
    // nop
    ctx.pc = 0x029677D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A835A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028415D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A835E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02841EC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8360C:
    // nop
    ctx.pc = 0x02842860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83640:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02842A70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83664:
    // nop
    ctx.pc = 0x02843B70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A836D0:
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = 0x02842A70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A836E8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02845470u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8371C:
    // nop
    ctx.pc = 0x02845790u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83730:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029679E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A837B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028470C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A837F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028479B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83824:
    // nop
    ctx.pc = 0x02967C00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8382C:
    // nop
    ctx.pc = 0x02847CD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83838:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02848400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83878:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02848E40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A838B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02849880u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A838C8:
    // nop
    // nop
    ctx.pc = 0x02967CC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83900:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0284A2C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83918:
    // nop
    // nop
    ctx.pc = 0x0284A8D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8392C:
    // nop
    ctx.pc = 0x02967D40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83948:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0284B0A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83988:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0284BAE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A839C0:
    // nop
    // nop
    ctx.pc = 0x029389E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A839C8:
    // nop
    // nop
    goto L_08A839D0;
L_08A839D0:
    // nop
    // nop
    ctx.pc = 0x0284C390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A839EC:
    // nop
    ctx.pc = 0x02967E00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83A60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02859790u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83AA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285A040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83AE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285A8F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83B28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285B330u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83B68:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285BBE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83BA8:
    // nop
    // nop
    goto L_08A83BB0;
L_08A83BB0:
    // nop
    // nop
    ctx.pc = 0x0285C490u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83BCC:
    // nop
    ctx.pc = 0x0285CBB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83BE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285D060u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83C70:
    // nop
    // nop
    // nop
    goto L_08A83C7C;
L_08A83C7C:
    // nop
    ctx.pc = 0x0285D1D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83C98:
    // nop
    // nop
    ctx.pc = 0x029680C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83CB8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285DA80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83D00:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285E760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83D20:
    // nop
    // nop
    ctx.pc = 0x02968140u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83D38:
    // nop
    // nop
    ctx.pc = 0x0293A3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83D54:
    // nop
    ctx.pc = 0x0293A400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83D6C:
    // nop
    ctx.pc = 0x02803A40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83D88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0285F0B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83DD0:
    // nop
    // nop
    // nop
    goto L_08A83DDC;
L_08A83DDC:
    // nop
    ctx.pc = 0x02968240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83DF4:
    // nop
    ctx.pc = 0x0285FA60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83E28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028674B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83E68:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02867E90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83EB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02968430u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83F38:
    // nop
    // nop
    // nop
    goto L_08A83F44;
L_08A83F44:
    // nop
    ctx.pc = 0x028690F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83F90:
    // nop
    // nop
    // nop
    goto L_08A83F9C;
L_08A83F9C:
    // nop
    ctx.pc = 0x0286F6C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83FA8:
    // nop
    // nop
    ctx.pc = 0x0286FEC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A83FE8:
    // nop
    // nop
    ctx.pc = 0x0293A420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0639(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0639_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_639(Runtime &runtime) {
    runtime.register_generated_unit(639u, 0x08A83000u, 4096u, &recomp_unit_0639, &recomp_unit_0639_entry);
    runtime.register_function(0x08A83000u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83080u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8309Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A830B0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83108u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83190u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A831B8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A831E0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83208u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83218u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83228u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83230u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83258u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83280u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83290u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83294u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A832B0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A832C8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83310u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8333Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83390u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A833B0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A833C0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A833C4u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A833D0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A833E0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A833F4u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83418u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8342Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83458u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83474u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83498u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A834A4u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A834CCu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A834D8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A834F0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83560u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83570u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8358Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A835A0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A835E0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8360Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83640u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83664u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A836D0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A836E8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8371Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83730u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A837B8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A837F8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83824u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8382Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83838u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83878u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A838B8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A838C8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83900u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83918u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A8392Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83948u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83988u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A839C0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A839C8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A839D0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A839ECu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83A60u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83AA8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83AE8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83B28u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83B68u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83BA8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83BB0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83BCCu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83BE8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83C70u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83C7Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83C98u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83CB8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83D00u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83D20u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83D38u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83D54u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83D6Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83D88u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83DD0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83DDCu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83DF4u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83E28u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83E68u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83EB0u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83F38u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83F44u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83F90u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83F9Cu, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83FA8u, &recomp_unit_0639, "recomp_unit_0639");
    runtime.register_function(0x08A83FE8u, &recomp_unit_0639, "recomp_unit_0639");
}
} // namespace psprecomp
