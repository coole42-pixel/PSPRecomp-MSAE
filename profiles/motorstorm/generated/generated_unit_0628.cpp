#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0628[1018] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 10, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 18, 0,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 36, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 64, 0, 0,
    0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72,
    73, 0, 0, 0, 74, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 106, 0, 0, 107, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125,
};
void recomp_unit_0628_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A78000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0628[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A78000;
    case 2u: goto L_08A78020;
    case 3u: goto L_08A78054;
    case 4u: goto L_08A78088;
    case 5u: goto L_08A780BC;
    case 6u: goto L_08A780D4;
    case 7u: goto L_08A780F0;
    case 8u: goto L_08A78118;
    case 9u: goto L_08A78124;
    case 10u: goto L_08A78128;
    case 11u: goto L_08A78130;
    case 12u: goto L_08A7813C;
    case 13u: goto L_08A78148;
    case 14u: goto L_08A78154;
    case 15u: goto L_08A78160;
    case 16u: goto L_08A7816C;
    case 17u: goto L_08A78174;
    case 18u: goto L_08A78178;
    case 19u: goto L_08A78184;
    case 20u: goto L_08A78198;
    case 21u: goto L_08A781AC;
    case 22u: goto L_08A781FC;
    case 23u: goto L_08A78278;
    case 24u: goto L_08A78284;
    case 25u: goto L_08A782C4;
    case 26u: goto L_08A782D4;
    case 27u: goto L_08A782E0;
    case 28u: goto L_08A782F8;
    case 29u: goto L_08A78328;
    case 30u: goto L_08A78368;
    case 31u: goto L_08A783B0;
    case 32u: goto L_08A783C0;
    case 33u: goto L_08A783D0;
    case 34u: goto L_08A783D8;
    case 35u: goto L_08A78404;
    case 36u: goto L_08A78408;
    case 37u: goto L_08A7840C;
    case 38u: goto L_08A78414;
    case 39u: goto L_08A78424;
    case 40u: goto L_08A7842C;
    case 41u: goto L_08A784E8;
    case 42u: goto L_08A78538;
    case 43u: goto L_08A78560;
    case 44u: goto L_08A78578;
    case 45u: goto L_08A785A8;
    case 46u: goto L_08A78624;
    case 47u: goto L_08A786C8;
    case 48u: goto L_08A786DC;
    case 49u: goto L_08A786F0;
    case 50u: goto L_08A78704;
    case 51u: goto L_08A78750;
    case 52u: goto L_08A78764;
    case 53u: goto L_08A7877C;
    case 54u: goto L_08A78790;
    case 55u: goto L_08A787A8;
    case 56u: goto L_08A787BC;
    case 57u: goto L_08A787D4;
    case 58u: goto L_08A787E8;
    case 59u: goto L_08A78800;
    case 60u: goto L_08A7881C;
    case 61u: goto L_08A78838;
    case 62u: goto L_08A78854;
    case 63u: goto L_08A78870;
    case 64u: goto L_08A78874;
    case 65u: goto L_08A7888C;
    case 66u: goto L_08A78890;
    case 67u: goto L_08A788A8;
    case 68u: goto L_08A788AC;
    case 69u: goto L_08A788C8;
    case 70u: goto L_08A788DC;
    case 71u: goto L_08A788E4;
    case 72u: goto L_08A788FC;
    case 73u: goto L_08A78900;
    case 74u: goto L_08A78910;
    case 75u: goto L_08A78914;
    case 76u: goto L_08A7891C;
    case 77u: goto L_08A78924;
    case 78u: goto L_08A7892C;
    case 79u: goto L_08A78934;
    case 80u: goto L_08A78954;
    case 81u: goto L_08A78968;
    case 82u: goto L_08A78970;
    case 83u: goto L_08A78974;
    case 84u: goto L_08A78998;
    case 85u: goto L_08A789B8;
    case 86u: goto L_08A789D0;
    case 87u: goto L_08A789F0;
    case 88u: goto L_08A78A14;
    case 89u: goto L_08A78A38;
    case 90u: goto L_08A78A40;
    case 91u: goto L_08A78A44;
    case 92u: goto L_08A78A54;
    case 93u: goto L_08A78A78;
    case 94u: goto L_08A78A80;
    case 95u: goto L_08A78A88;
    case 96u: goto L_08A78B48;
    case 97u: goto L_08A78B50;
    case 98u: goto L_08A78B64;
    case 99u: goto L_08A78D38;
    case 100u: goto L_08A78D3C;
    case 101u: goto L_08A78D48;
    case 102u: goto L_08A78D88;
    case 103u: goto L_08A78DC0;
    case 104u: goto L_08A78DEC;
    case 105u: goto L_08A78DF8;
    case 106u: goto L_08A78E04;
    case 107u: goto L_08A78E10;
    case 108u: goto L_08A78E1C;
    case 109u: goto L_08A78E20;
    case 110u: goto L_08A78E48;
    case 111u: goto L_08A78E50;
    case 112u: goto L_08A78E84;
    case 113u: goto L_08A78E88;
    case 114u: goto L_08A78EA0;
    case 115u: goto L_08A78EC0;
    case 116u: goto L_08A78ECC;
    case 117u: goto L_08A78F18;
    case 118u: goto L_08A78F20;
    case 119u: goto L_08A78F30;
    case 120u: goto L_08A78F38;
    case 121u: goto L_08A78F60;
    case 122u: goto L_08A78F9C;
    case 123u: goto L_08A78FCC;
    case 124u: goto L_08A78FD8;
    case 125u: goto L_08A78FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A78000:
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A78020;
L_08A78020:
    // nop
    // nop
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    // nop
    aot_gpr[25] = (39322u << 16u);
    // nop
    aot_gpr[25] = (39322u << 16u);
    // nop
    (void)(0u << 16u);
    // nop
    goto L_08A78054;
L_08A78054:
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    // nop
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[3] = (55050u << 16u);
    (void)(0u << 16u);
    goto L_08A78088;
L_08A78088:
    (void)(0u << 16u);
    rt.unsupported(0x08A7808Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A780BC:
    rt.unsupported(0x08A780BCu, 0x41200000u, "unknown not lowered yet"); return;
L_08A780D4:
    // nop
    aot_gpr[13] = (aot_gpr[13] ^ 986u);
    aot_gpr[12] = (52429u << 16u);
    rt.unsupported(0x08A780E0u, 0x41200000u, "unknown not lowered yet"); return;
L_08A780F0:
    aot_gpr[12] = (52429u << 16u);
    rt.unsupported(0x08A780F4u, 0x41100000u, "unknown not lowered yet"); return;
L_08A78118:
    // nop
    // nop
    // nop
    goto L_08A78124;
L_08A78124:
    // nop
    goto L_08A78128;
L_08A78128:
    rt.unsupported(0x08A7812Cu, 0x088FEF48u, "control flow in delay slot"); return;
L_08A78130:
    // nop
    rt.unsupported(0x08A78138u, 0x088FE490u, "control flow in delay slot"); return;
L_08A7813C:
    // nop
    rt.unsupported(0x08A78144u, 0x088FE1F8u, "control flow in delay slot"); return;
L_08A78148:
    // nop
    rt.unsupported(0x08A78150u, 0x088FE708u, "control flow in delay slot"); return;
L_08A78154:
    // nop
    rt.unsupported(0x08A7815Cu, 0x088FE8E4u, "control flow in delay slot"); return;
L_08A78160:
    // nop
    rt.unsupported(0x08A78168u, 0x088FEA40u, "control flow in delay slot"); return;
L_08A7816C:
    // nop
    rt.unsupported(0x08A78174u, 0x088FE958u, "control flow in delay slot"); return;
L_08A78174:
    // nop
    ctx.pc = 0x023FA560u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A78178:
    // nop
    rt.unsupported(0x08A78180u, 0x088FE9CCu, "control flow in delay slot"); return;
L_08A78184:
    // nop
    rt.unsupported(0x08A7818Cu, 0x088FEAB4u, "control flow in delay slot"); return;
L_08A78198:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A781AC;
L_08A781AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A781FC;
L_08A781FC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A7823Cu, 0x40A00000u, "unknown not lowered yet"); return;
L_08A78278:
    // nop
    rt.unsupported(0x08A78280u, 0x08A53284u, "control flow in delay slot"); return;
L_08A78284:
    // nop
    rt.unsupported(0x08A7828Cu, 0x08A532F8u, "control flow in delay slot"); return;
L_08A782C4:
    // nop
    // nop
    // nop
    rt.unsupported(0x08A782D0u, 0x00000001u, "special? not lowered yet"); return;
L_08A782D4:
    // nop
    // nop
    // nop
    goto L_08A782E0;
L_08A782E0:
    // nop
    // nop
    aot_gpr[31] = (0u << 28u);
    // nop
    // nop
    // nop
    goto L_08A782F8;
L_08A782F8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    (void)(0u >> 0u);
    // nop
    goto L_08A78328;
L_08A78328:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08A78360u, 0x00000101u, "special? not lowered yet"); return;
L_08A78368:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    aot_gpr[3] = (aot_gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    goto L_08A783B0;
L_08A783B0:
    // nop
    // nop
    // nop
    // nop
    goto L_08A783C0;
L_08A783C0:
    // nop
    // nop
    // nop
    // nop
    goto L_08A783D0;
L_08A783D0:
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[19] = (13107u << 16u);
    goto L_08A783D8;
L_08A783D8:
    (void)(0u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[6] = (26214u << 16u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A783F8u, 0x00000001u, "special? not lowered yet"); return;
L_08A78404:
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    goto L_08A78408;
L_08A78408:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A78408u, 0x000000A0u); return; } }
    goto L_08A7840C;
L_08A7840C:
    jump_target = 0u;
    aot_gpr[31] = (0x08A78414u);
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78414u) goto L_08A78414;
    return;
L_08A78414:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.memory().memory_barrier();
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08A78420u, 0x0000000Du, "special? not lowered yet"); return;
L_08A78424:
    jump_target = 0u;
    aot_gpr[31] = (0x08A7842Cu);
    rt.unsupported(0x08A78428u, 0x0000005Fu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7842Cu) goto L_08A7842C;
    return;
L_08A7842C:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7842Cu, 0x00000060u); return; } }
    rt.unsupported(0x08A78430u, 0x00000035u, "special? not lowered yet"); return;
L_08A784E8:
    rt.unsupported(0x08A784E8u, 0x00000014u, "special? not lowered yet"); return;
L_08A78538:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    (void)(0u | 0u);
    rt.unsupported(0x08A78540u, 0x0000007Au, "special? not lowered yet"); return;
L_08A78560:
    rt.unsupported(0x08A78560u, 0x00000029u, "special? not lowered yet"); return;
L_08A78578:
    (void)(0u ^ 0u);
    rt.memory().memory_barrier();
    rt.unsupported(0x08A78580u, 0x00000036u, "special? not lowered yet"); return;
L_08A785A8:
    rt.unsupported(0x08A785A8u, 0x0000004Cu, "syscall not lowered yet"); return;
L_08A78624:
    (void)(0u ^ 0u);
    ctx.lo = 0u;
    rt.unsupported(0x08A7862Cu, 0x00000076u, "special? not lowered yet"); return;
L_08A786C8:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    (void)(~(0u | 0u));
    rt.unsupported(0x08A786D0u, 0x000000FDu, "special? not lowered yet"); return;
L_08A786DC:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    rt.memory().memory_barrier();
    rt.unsupported(0x08A786E8u, 0x00000071u, "special? not lowered yet"); return;
L_08A786F0:
    rt.unsupported(0x08A786F0u, 0x000000E8u, "special? not lowered yet"); return;
L_08A78704:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08A78708u, 0x000000F6u, "special? not lowered yet"); return;
L_08A78750:
    (void)(0u < 0u ? 1u : 0u);
    rt.unsupported(0x08A78754u, 0x000000F9u, "special? not lowered yet"); return;
L_08A78764:
    rt.unsupported(0x08A78764u, 0x00000031u, "special? not lowered yet"); return;
L_08A7877C:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    rt.unsupported(0x08A78784u, 0x000000B8u, "special? not lowered yet"); return;
L_08A78790:
    rt.unsupported(0x08A78790u, 0x000000B0u, "special? not lowered yet"); return;
L_08A787A8:
    (void)(0u << (0u & 31u));
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    rt.unsupported(0x08A787B0u, 0x000000FEu, "special? not lowered yet"); return;
L_08A787BC:
    rt.unsupported(0x08A787BCu, 0x000000CDu, "special? not lowered yet"); return;
L_08A787D4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    jump_target = 0u;
    rt.unsupported(0x08A787DCu, 0x000000F3u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A787E8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 3u));
    rt.unsupported(0x08A787ECu, 0x0000004Eu, "special? not lowered yet"); return;
L_08A78800:
    rt.unsupported(0x08A78800u, 0x000000B4u, "special? not lowered yet"); return;
L_08A7881C:
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    // nop
    goto L_08A78838;
L_08A78838:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A78854;
L_08A78854:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A78870;
L_08A78870:
    // nop
    goto L_08A78874;
L_08A78874:
    (void)(0u << 2u);
    (void)(0u << 2u);
    (void)(0u << 2u);
    (void)(0u << 2u);
    (void)(0u << 2u);
    (void)(0u << 2u);
    goto L_08A7888C;
L_08A7888C:
    // nop
    goto L_08A78890;
L_08A78890:
    jump_target = 0u;
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A78894u, 0x00000020u); return; } }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A788A8:
    // nop
    goto L_08A788AC;
L_08A788AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A788C8;
L_08A788C8:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A788DC;
L_08A788DC:
    // nop
    // nop
    goto L_08A788E4;
L_08A788E4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A788FC;
L_08A788FC:
    // nop
    goto L_08A78900;
L_08A78900:
    // nop
    // nop
    // nop
    // nop
    goto L_08A78910;
L_08A78910:
    // nop
    goto L_08A78914;
L_08A78914:
    rt.unsupported(0x08A78918u, 0x09823B6Eu, "control flow in delay slot"); return;
L_08A7891C:
    rt.unsupported(0x08A78920u, 0x130476DCu, "control flow in delay slot"); return;
L_08A78924:
    rt.unsupported(0x08A78928u, 0x1A864DB2u, "control flow in delay slot"); return;
L_08A7892C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) > 0;
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-4680));
      if (branch_taken) {
          ctx.pc = 0x08A8C944u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A78934;
    }
L_08A78934:
    rt.unsupported(0x08A78934u, 0x22C9F00Fu, "unknown not lowered yet"); return;
L_08A78954:
    rt.unsupported(0x08A78954u, 0x48D0C6C7u, "cop2/vfpu not lowered yet"); return;
L_08A78968:
    rt.unsupported(0x08A7896Cu, 0x52568B75u, "control flow in delay slot"); return;
L_08A78970:
    rt.unsupported(0x08A78970u, 0x6A1936C8u, "unknown not lowered yet"); return;
L_08A78974:
    ctx.execute_vfpu_compare3(127u, 43u, 88u, 1u, 5u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<38u, 2u>(vfpu_d); }
    rt.unsupported(0x08A7897Cu, 0x675A1011u, "vfpu1 not lowered yet"); return;
L_08A78998:
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(-29298)));
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(-28615)));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[25] + static_cast<std::uint32_t>(-16324), aot_gpr[7]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(-8821)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(-1198))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-6427))))));
    // PSP CACHE is a no-op in coherent host memory.
    rt.memory().aot_store_word_right(aot_gpr[23] + static_cast<std::uint32_t>(18159), aot_gpr[10]);
    goto L_08A789B8;
L_08A789B8:
    rt.unsupported(0x08A789B8u, 0xB7A96036u, "unknown not lowered yet"); return;
L_08A789D0:
    rt.unsupported(0x08A789D0u, 0xD4326D90u, "vfpu not lowered yet"); return;
L_08A789F0:
    ctx.execute_vfpu_vmscl(40u, 0u, 58u, 3u);
    rt.unsupported(0x08A789F4u, 0xF6FB9D9Fu, "vfpu not lowered yet"); return;
L_08A78A14:
    aot_gpr[7] = (aot_gpr[2] & 28096u);
    aot_gpr[4] = (19225u << 16u);
    aot_gpr[5] = (aot_gpr[14] ^ 22190u);
    aot_gpr[2] = (aot_gpr[28] + static_cast<std::uint32_t>(1707));
    rt.unsupported(0x08A78A24u, 0x23431B1Cu, "unknown not lowered yet"); return;
L_08A78A38:
    rt.unsupported(0x08A78A3Cu, 0x1FCDBB16u, "control flow in delay slot"); return;
L_08A78A40:
    ctx.lo = aot_gpr[12];
    goto L_08A78A44;
L_08A78A44:
    rt.unsupported(0x08A78A44u, 0x054BF6A4u, "regimm? not lowered yet"); return;
L_08A78A54:
    rt.unsupported(0x08A78A54u, 0x7C56B6B0u, "special3? not lowered yet"); return;
L_08A78A78:
    rt.unsupported(0x08A78A7Cu, 0x53DC6066u, "control flow in delay slot"); return;
L_08A78A80:
    rt.unsupported(0x08A78A80u, 0x4D9B3063u, "unknown not lowered yet"); return;
L_08A78A88:
    aot_gpr[25] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    rt.unsupported(0x08A78A8Cu, 0x40D816BAu, "unknown not lowered yet"); return;
L_08A78B48:
    rt.unsupported(0x08A78B4Cu, 0x51435D53u, "control flow in delay slot"); return;
L_08A78B50:
    aot_gpr[29] = (aot_gpr[8] + static_cast<std::uint32_t>(15262));
    rt.unsupported(0x08A78B54u, 0x21DC2629u, "unknown not lowered yet"); return;
L_08A78B64:
    aot_gpr[24] = (aot_gpr[22] & 20725u);
    aot_gpr[27] = (30252u << 16u);
    aot_gpr[26] = (aot_gpr[26] ^ 27547u);
    aot_gpr[26] = (aot_gpr[24] ^ aot_gpr[21]);
    rt.unsupported(0x08A78B74u, 0x07D4CB91u, "regimm? not lowered yet"); return;
L_08A78D38:
    // nop
    goto L_08A78D3C;
L_08A78D3C:
    // nop
    rt.unsupported(0x08A78D44u, 0x08A53E20u, "control flow in delay slot"); return;
L_08A78D48:
    // nop
    rt.unsupported(0x08A78D50u, 0x08A53E94u, "control flow in delay slot"); return;
L_08A78D88:
    // nop
    rt.unsupported(0x08A78D90u, 0x08A5462Cu, "control flow in delay slot"); return;
L_08A78DC0:
    // nop
    rt.unsupported(0x08A78DC8u, 0x08A57B9Cu, "control flow in delay slot"); return;
L_08A78DEC:
    // nop
    rt.unsupported(0x08A78DF4u, 0x0892953Cu, "control flow in delay slot"); return;
L_08A78DF8:
    // nop
    rt.unsupported(0x08A78E00u, 0x08929458u, "control flow in delay slot"); return;
L_08A78E04:
    // nop
    rt.unsupported(0x08A78E0Cu, 0x08929650u, "control flow in delay slot"); return;
L_08A78E10:
    // nop
    rt.unsupported(0x08A78E18u, 0x0892978Cu, "control flow in delay slot"); return;
L_08A78E1C:
    // nop
    goto L_08A78E20;
L_08A78E20:
    rt.unsupported(0x08A78E24u, 0x08929934u, "control flow in delay slot"); return;
L_08A78E48:
    // nop
    // nop
    goto L_08A78E50;
L_08A78E50:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A78E68u, 0x00000001u, "special? not lowered yet"); return;
L_08A78E84:
    // nop
    goto L_08A78E88;
L_08A78E88:
    rt.unsupported(0x08A78E8Cu, 0x08A69CC8u, "control flow in delay slot"); return;
L_08A78EA0:
    // nop
    rt.unsupported(0x08A78EA8u, 0x0893474Cu, "control flow in delay slot"); return;
L_08A78EC0:
    // nop
    // nop
    // nop
    goto L_08A78ECC;
L_08A78ECC:
    // nop
    rt.unsupported(0x08A78ED4u, 0x08A58610u, "control flow in delay slot"); return;
L_08A78F18:
    aot_gpr[31] = (0x08A78F20u);
    rt.unsupported(0x08A78F1Cu, 0x01740F72u, "special? not lowered yet"); return;
    ctx.pc = 0x05C02DB8u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78F20u) goto L_08A78F20;
    return;
L_08A78F20:
    rt.unsupported(0x08A78F20u, 0x05680366u, "regimm? not lowered yet"); return;
L_08A78F30:
    // nop
    // nop
    goto L_08A78F38;
L_08A78F38:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A78F5Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A78F60:
    // nop
    rt.unsupported(0x08A78F68u, 0x08A5883Cu, "control flow in delay slot"); return;
L_08A78F9C:
    rt.unsupported(0x08A78F9Cu, 0x00000101u, "special? not lowered yet"); return;
L_08A78FCC:
    // nop
    rt.unsupported(0x08A78FD4u, 0x08A588C8u, "control flow in delay slot"); return;
L_08A78FD8:
    aot_gpr[8] = (0u << 0u);
    // nop
    // nop
    goto L_08A78FE4;
L_08A78FE4:
    // nop
    (void)(aot_gpr[1] << 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    ctx.pc = 0x08A79000u; return;
}

void recomp_unit_0628(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0628_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_628(Runtime &runtime) {
    runtime.register_generated_unit(628u, 0x08A78000u, 4096u, &recomp_unit_0628, &recomp_unit_0628_entry);
    runtime.register_function(0x08A78000u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78020u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78054u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78088u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A780BCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A780D4u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A780F0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78118u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78124u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78128u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78130u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7813Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78148u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78154u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78160u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7816Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78174u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78178u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78184u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78198u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A781ACu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A781FCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78278u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78284u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A782C4u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A782D4u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A782E0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A782F8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78328u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78368u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A783B0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A783C0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A783D0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A783D8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78404u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78408u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7840Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78414u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78424u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7842Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A784E8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78538u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78560u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78578u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A785A8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78624u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A786C8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A786DCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A786F0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78704u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78750u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78764u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7877Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78790u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A787A8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A787BCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A787D4u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A787E8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78800u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7881Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78838u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78854u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78870u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78874u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7888Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78890u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A788A8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A788ACu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A788C8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A788DCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A788E4u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A788FCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78900u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78910u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78914u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7891Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78924u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A7892Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78934u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78954u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78968u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78970u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78974u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78998u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A789B8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A789D0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A789F0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A14u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A38u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A40u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A44u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A54u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A78u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A80u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78A88u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78B48u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78B50u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78B64u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78D38u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78D3Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78D48u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78D88u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78DC0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78DECu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78DF8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E04u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E10u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E1Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E20u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E48u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E50u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E84u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78E88u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78EA0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78EC0u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78ECCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78F18u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78F20u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78F30u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78F38u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78F60u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78F9Cu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78FCCu, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78FD8u, &recomp_unit_0628, "recomp_unit_0628");
    runtime.register_function(0x08A78FE4u, &recomp_unit_0628, "recomp_unit_0628");
}
} // namespace psprecomp
