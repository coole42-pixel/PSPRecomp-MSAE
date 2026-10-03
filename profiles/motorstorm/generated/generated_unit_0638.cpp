#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0638[993] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69,
};
void recomp_unit_0638_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A82078u;
        entry_id = (entry_delta < 3972u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0638[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A82078;
    case 2u: goto L_08A820B8;
    case 3u: goto L_08A820FC;
    case 4u: goto L_08A82118;
    case 5u: goto L_08A82140;
    case 6u: goto L_08A82154;
    case 7u: goto L_08A821E0;
    case 8u: goto L_08A82204;
    case 9u: goto L_08A82290;
    case 10u: goto L_08A822EC;
    case 11u: goto L_08A82304;
    case 12u: goto L_08A82308;
    case 13u: goto L_08A82330;
    case 14u: goto L_08A82358;
    case 15u: goto L_08A82420;
    case 16u: goto L_08A82438;
    case 17u: goto L_08A8246C;
    case 18u: goto L_08A82470;
    case 19u: goto L_08A824BC;
    case 20u: goto L_08A824FC;
    case 21u: goto L_08A8252C;
    case 22u: goto L_08A82558;
    case 23u: goto L_08A82568;
    case 24u: goto L_08A825EC;
    case 25u: goto L_08A82600;
    case 26u: goto L_08A82628;
    case 27u: goto L_08A82660;
    case 28u: goto L_08A826A0;
    case 29u: goto L_08A826A8;
    case 30u: goto L_08A826F0;
    case 31u: goto L_08A82730;
    case 32u: goto L_08A827C0;
    case 33u: goto L_08A827FC;
    case 34u: goto L_08A82814;
    case 35u: goto L_08A82850;
    case 36u: goto L_08A8289C;
    case 37u: goto L_08A828E0;
    case 38u: goto L_08A82970;
    case 39u: goto L_08A82A08;
    case 40u: goto L_08A82A98;
    case 41u: goto L_08A82AE8;
    case 42u: goto L_08A82B08;
    case 43u: goto L_08A82B5C;
    case 44u: goto L_08A82B98;
    case 45u: goto L_08A82BC8;
    case 46u: goto L_08A82C20;
    case 47u: goto L_08A82C2C;
    case 48u: goto L_08A82C6C;
    case 49u: goto L_08A82CA8;
    case 50u: goto L_08A82CFC;
    case 51u: goto L_08A82D30;
    case 52u: goto L_08A82D40;
    case 53u: goto L_08A82D70;
    case 54u: goto L_08A82D88;
    case 55u: goto L_08A82DB0;
    case 56u: goto L_08A82DC8;
    case 57u: goto L_08A82E00;
    case 58u: goto L_08A82E18;
    case 59u: goto L_08A82E3C;
    case 60u: goto L_08A82E40;
    case 61u: goto L_08A82E50;
    case 62u: goto L_08A82E58;
    case 63u: goto L_08A82E98;
    case 64u: goto L_08A82ED4;
    case 65u: goto L_08A82ED8;
    case 66u: goto L_08A82F58;
    case 67u: goto L_08A82F60;
    case 68u: goto L_08A82FB0;
    case 69u: goto L_08A82FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A82078:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025F5510u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A820B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025F6540u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A820FC:
    // nop
    ctx.pc = 0x025F6850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82118:
    // nop
    // nop
    ctx.pc = 0x025F6ED0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82140:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82154:
    // nop
    ctx.pc = 0x025E7680u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A821E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82204:
    // nop
    ctx.pc = 0x025FBD00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82290:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A822EC:
    // nop
    ctx.pc = 0x025E8390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82304:
    // nop
    ctx.pc = 0x025E8660u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82308:
    // nop
    // nop
    ctx.pc = 0x025FDAC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82330:
    // nop
    // nop
    ctx.pc = 0x025FD410u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82358:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82420:
    // nop
    // nop
    ctx.pc = 0x025FE5A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82438:
    // nop
    // nop
    ctx.pc = 0x025FE760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8246C:
    // nop
    ctx.pc = 0x02600AA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82470:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A824BC:
    // nop
    ctx.pc = 0x025E7E90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A824FC:
    // nop
    ctx.pc = 0x025FD3F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8252C:
    // nop
    ctx.pc = 0x025FDED0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82558:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02603240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82568:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025E7310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A825EC:
    // nop
    ctx.pc = 0x02607860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82600:
    // nop
    // nop
    ctx.pc = 0x026074C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82628:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027BA930u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82660:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027BEEA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A826A0:
    // nop
    // nop
    goto L_08A826A8;
L_08A826A8:
    // nop
    // nop
    ctx.pc = 0x027C4E70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A826F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027CBA30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82730:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027D3320u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A827C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027D5610u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A827FC:
    // nop
    ctx.pc = 0x02966060u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82814:
    // nop
    ctx.pc = 0x02965C70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82850:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02966080u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8289C:
    // nop
    ctx.pc = 0x02966210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A828E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02966230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82970:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029663E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82A08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02966830u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82A98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029656F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82AE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02965D90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82B08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02966A50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82B5C:
    // nop
    ctx.pc = 0x02965C70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82B98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027F5D70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82BC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029649C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82C20:
    // nop
    // nop
    // nop
    goto L_08A82C2C;
L_08A82C2C:
    // nop
    ctx.pc = 0x02803050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82C6C:
    // nop
    ctx.pc = 0x0293A3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82CA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02804690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82CFC:
    // nop
    ctx.pc = 0x028B4250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82D30:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028093B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82D40:
    // nop
    // nop
    ctx.pc = 0x02966FB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82D70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0280A010u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82D88:
    // nop
    // nop
    ctx.pc = 0x0280A620u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82DB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0280BA10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82DC8:
    // nop
    // nop
    ctx.pc = 0x0280C220u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E00:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0280CB80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E18:
    // nop
    // nop
    ctx.pc = 0x028B4250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E3C:
    // nop
    ctx.pc = 0x028B4250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E40:
    // nop
    // nop
    ctx.pc = 0x028B4250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E50:
    // nop
    // nop
    ctx.pc = 0x0280CCC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E58:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0280FA40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82E98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02810F70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82ED4:
    // nop
    ctx.pc = 0x029389E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82ED8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02811C80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82F58:
    // nop
    // nop
    goto L_08A82F60;
L_08A82F60:
    // nop
    // nop
    ctx.pc = 0x02817700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82FB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02819040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A82FF8:
    // nop
    // nop
    ctx.pc = 0x08A83000u; return;
}

void recomp_unit_0638(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0638_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_638(Runtime &runtime) {
    runtime.register_generated_unit(638u, 0x08A82000u, 4096u, &recomp_unit_0638, &recomp_unit_0638_entry);
    runtime.register_function(0x08A82078u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A820B8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A820FCu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82118u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82140u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82154u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A821E0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82204u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82290u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A822ECu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82304u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82308u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82330u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82358u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82420u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82438u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A8246Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82470u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A824BCu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A824FCu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A8252Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82558u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82568u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A825ECu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82600u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82628u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82660u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A826A0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A826A8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A826F0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82730u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A827C0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A827FCu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82814u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82850u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A8289Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A828E0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82970u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82A08u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82A98u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82AE8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82B08u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82B5Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82B98u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82BC8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82C20u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82C2Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82C6Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82CA8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82CFCu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82D30u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82D40u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82D70u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82D88u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82DB0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82DC8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E00u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E18u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E3Cu, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E40u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E50u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E58u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82E98u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82ED4u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82ED8u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82F58u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82F60u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82FB0u, &recomp_unit_0638, "recomp_unit_0638");
    runtime.register_function(0x08A82FF8u, &recomp_unit_0638, "recomp_unit_0638");
}
} // namespace psprecomp
