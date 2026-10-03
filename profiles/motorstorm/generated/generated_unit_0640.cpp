#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0640[929] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71,
    0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88,
    89,
};
void recomp_unit_0640_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A84010u;
        entry_id = (entry_delta < 3716u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0640[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A84010;
    case 2u: goto L_08A84018;
    case 3u: goto L_08A84038;
    case 4u: goto L_08A840A0;
    case 5u: goto L_08A840EC;
    case 6u: goto L_08A84100;
    case 7u: goto L_08A84124;
    case 8u: goto L_08A84128;
    case 9u: goto L_08A84130;
    case 10u: goto L_08A8413C;
    case 11u: goto L_08A8415C;
    case 12u: goto L_08A84164;
    case 13u: goto L_08A84184;
    case 14u: goto L_08A841AC;
    case 15u: goto L_08A841B0;
    case 16u: goto L_08A841C0;
    case 17u: goto L_08A841C4;
    case 18u: goto L_08A841EC;
    case 19u: goto L_08A84204;
    case 20u: goto L_08A84238;
    case 21u: goto L_08A84244;
    case 22u: goto L_08A8426C;
    case 23u: goto L_08A842B0;
    case 24u: goto L_08A842C8;
    case 25u: goto L_08A842E0;
    case 26u: goto L_08A84310;
    case 27u: goto L_08A84340;
    case 28u: goto L_08A84390;
    case 29u: goto L_08A8439C;
    case 30u: goto L_08A84410;
    case 31u: goto L_08A84470;
    case 32u: goto L_08A844A0;
    case 33u: goto L_08A844B8;
    case 34u: goto L_08A844BC;
    case 35u: goto L_08A844CC;
    case 36u: goto L_08A844F0;
    case 37u: goto L_08A844F4;
    case 38u: goto L_08A8452C;
    case 39u: goto L_08A845E0;
    case 40u: goto L_08A845F4;
    case 41u: goto L_08A8460C;
    case 42u: goto L_08A84624;
    case 43u: goto L_08A84668;
    case 44u: goto L_08A84670;
    case 45u: goto L_08A84678;
    case 46u: goto L_08A846A8;
    case 47u: goto L_08A846F0;
    case 48u: goto L_08A84778;
    case 49u: goto L_08A84780;
    case 50u: goto L_08A8479C;
    case 51u: goto L_08A847C0;
    case 52u: goto L_08A84808;
    case 53u: goto L_08A8487C;
    case 54u: goto L_08A84890;
    case 55u: goto L_08A84918;
    case 56u: goto L_08A849A0;
    case 57u: goto L_08A84A28;
    case 58u: goto L_08A84A70;
    case 59u: goto L_08A84A94;
    case 60u: goto L_08A84AC8;
    case 61u: goto L_08A84B00;
    case 62u: goto L_08A84B18;
    case 63u: goto L_08A84B1C;
    case 64u: goto L_08A84B38;
    case 65u: goto L_08A84B4C;
    case 66u: goto L_08A84BC4;
    case 67u: goto L_08A84C20;
    case 68u: goto L_08A84CA8;
    case 69u: goto L_08A84CE4;
    case 70u: goto L_08A84D00;
    case 71u: goto L_08A84D0C;
    case 72u: goto L_08A84D1C;
    case 73u: goto L_08A84D30;
    case 74u: goto L_08A84D38;
    case 75u: goto L_08A84D40;
    case 76u: goto L_08A84D48;
    case 77u: goto L_08A84D98;
    case 78u: goto L_08A84DD0;
    case 79u: goto L_08A84DE4;
    case 80u: goto L_08A84E08;
    case 81u: goto L_08A84E0C;
    case 82u: goto L_08A84E24;
    case 83u: goto L_08A84E3C;
    case 84u: goto L_08A84E50;
    case 85u: goto L_08A84E64;
    case 86u: goto L_08A84E68;
    case 87u: goto L_08A84E78;
    case 88u: goto L_08A84E8C;
    case 89u: goto L_08A84E90;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A84010:
    // nop
    // nop
    ctx.pc = 0x0293A480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84018:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02870BA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84038:
    // nop
    // nop
    ctx.pc = 0x02871A20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A840A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029686C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A840EC:
    // nop
    ctx.pc = 0x0293A3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84100:
    // nop
    // nop
    ctx.pc = 0x0293A440u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84124:
    // nop
    ctx.pc = 0x0293A480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84128:
    // nop
    // nop
    goto L_08A84130;
L_08A84130:
    // nop
    // nop
    ctx.pc = 0x028729C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8413C:
    // nop
    ctx.pc = 0x02872B30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8415C:
    // nop
    ctx.pc = 0x02803910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84164:
    // nop
    ctx.pc = 0x0293A3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84184:
    // nop
    ctx.pc = 0x0293A420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A841AC:
    // nop
    ctx.pc = 0x0293A480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A841B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02968870u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A841C0:
    // nop
    goto L_08A841C4;
L_08A841C4:
    // nop
    ctx.pc = 0x028737A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A841EC:
    // nop
    ctx.pc = 0x0293A3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84204:
    // nop
    ctx.pc = 0x0293A400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84238:
    // nop
    // nop
    // nop
    goto L_08A84244;
L_08A84244:
    // nop
    ctx.pc = 0x02874BF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8426C:
    // nop
    ctx.pc = 0x02803910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A842B0:
    // nop
    // nop
    ctx.pc = 0x02803F40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A842C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02877850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A842E0:
    // nop
    // nop
    ctx.pc = 0x02877B40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84310:
    // nop
    // nop
    ctx.pc = 0x0293A3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84340:
    // nop
    // nop
    ctx.pc = 0x02803F40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84390:
    // nop
    // nop
    // nop
    goto L_08A8439C;
L_08A8439C:
    // nop
    ctx.pc = 0x02968AF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84410:
    // nop
    // nop
    ctx.pc = 0x0293A480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84470:
    // nop
    // nop
    ctx.pc = 0x028825F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A844A0:
    // nop
    // nop
    ctx.pc = 0x02882B90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A844B8:
    // nop
    goto L_08A844BC;
L_08A844BC:
    // nop
    // nop
    // nop
    ctx.pc = 0x02968CC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A844CC:
    // nop
    ctx.pc = 0x028848A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A844F0:
    // nop
    goto L_08A844F4;
L_08A844F4:
    // nop
    ctx.pc = 0x0293A3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8452C:
    // nop
    ctx.pc = 0x0293A460u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A845E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02968E50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A845F4:
    // nop
    ctx.pc = 0x02887820u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8460C:
    // nop
    ctx.pc = 0x02803710u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84624:
    // nop
    ctx.pc = 0x0293A3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84668:
    // nop
    // nop
    goto L_08A84670;
L_08A84670:
    // nop
    // nop
    ctx.pc = 0x02888A80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84678:
    // nop
    // nop
    ctx.pc = 0x02888BF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A846A8:
    // nop
    // nop
    ctx.pc = 0x0293A3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A846F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0288A010u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84778:
    // nop
    // nop
    goto L_08A84780;
L_08A84780:
    // nop
    // nop
    ctx.pc = 0x02968FE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8479C:
    // nop
    ctx.pc = 0x02969150u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A847C0:
    // nop
    // nop
    ctx.pc = 0x028911A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84808:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02969190u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8487C:
    // nop
    ctx.pc = 0x0293A460u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84890:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02969340u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84918:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029694D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A849A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029696A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84A28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02893430u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84A70:
    // nop
    // nop
    ctx.pc = 0x0293A3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84A94:
    // nop
    ctx.pc = 0x02803A40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84AC8:
    // nop
    // nop
    ctx.pc = 0x02894530u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84B00:
    // nop
    // nop
    ctx.pc = 0x02894630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84B18:
    // nop
    goto L_08A84B1C;
L_08A84B1C:
    // nop
    ctx.pc = 0x02894890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84B38:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02896BF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84B4C:
    // nop
    ctx.pc = 0x02896F30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84BC4:
    // nop
    ctx.pc = 0x02897620u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84C20:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02899050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84CA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02969900u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84CE4:
    // nop
    ctx.pc = 0x0293A3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D00:
    // nop
    // nop
    ctx.pc = 0x0293A420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D0C:
    // nop
    ctx.pc = 0x0293A440u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D1C:
    // nop
    ctx.pc = 0x0293A460u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D30:
    // nop
    // nop
    goto L_08A84D38;
L_08A84D38:
    // nop
    // nop
    ctx.pc = 0x02899CE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D40:
    // nop
    // nop
    ctx.pc = 0x0289A670u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D48:
    // nop
    // nop
    ctx.pc = 0x0289AE90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84D98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028A4E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84DD0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028A7370u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84DE4:
    // nop
    ctx.pc = 0x028A7550u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84E08:
    // nop
    goto L_08A84E0C;
L_08A84E0C:
    // nop
    // nop
    ctx.pc = 0x02A138F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84E24:
    // nop
    // nop
    ctx.pc = 0x02A13940u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84E3C:
    rt.unsupported(0x08A84E40u, 0x08A71640u, "control flow in delay slot"); return;
L_08A84E50:
    rt.unsupported(0x08A84E54u, 0x08A71650u, "control flow in delay slot"); return;
L_08A84E64:
    // nop
    goto L_08A84E68;
L_08A84E68:
    // nop
    // nop
    ctx.pc = 0x02A139E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A84E78:
    rt.unsupported(0x08A84E7Cu, 0x08A71688u, "control flow in delay slot"); return;
L_08A84E8C:
    // nop
    goto L_08A84E90;
L_08A84E90:
    // nop
    // nop
    // nop
    rt.unsupported(0x08A84EA0u, 0x0000000Cu, "control flow in delay slot"); return;
}

void recomp_unit_0640(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0640_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_640(Runtime &runtime) {
    runtime.register_generated_unit(640u, 0x08A84000u, 4096u, &recomp_unit_0640, &recomp_unit_0640_entry);
    runtime.register_function(0x08A84010u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84018u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84038u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A840A0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A840ECu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84100u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84124u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84128u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84130u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8413Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8415Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84164u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84184u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A841ACu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A841B0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A841C0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A841C4u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A841ECu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84204u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84238u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84244u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8426Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A842B0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A842C8u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A842E0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84310u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84340u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84390u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8439Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84410u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84470u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A844A0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A844B8u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A844BCu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A844CCu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A844F0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A844F4u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8452Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A845E0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A845F4u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8460Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84624u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84668u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84670u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84678u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A846A8u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A846F0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84778u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84780u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8479Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A847C0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84808u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A8487Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84890u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84918u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A849A0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84A28u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84A70u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84A94u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84AC8u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84B00u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84B18u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84B1Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84B38u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84B4Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84BC4u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84C20u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84CA8u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84CE4u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D00u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D0Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D1Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D30u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D38u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D40u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D48u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84D98u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84DD0u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84DE4u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E08u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E0Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E24u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E3Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E50u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E64u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E68u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E78u, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E8Cu, &recomp_unit_0640, "recomp_unit_0640");
    runtime.register_function(0x08A84E90u, &recomp_unit_0640, "recomp_unit_0640");
}
} // namespace psprecomp
