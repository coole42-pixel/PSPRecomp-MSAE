#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0626[1024] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0,
    9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 21, 22, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 55, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 79, 0, 80, 0, 81, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 87, 88, 89, 0, 0, 90, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
};
void recomp_unit_0626_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A76000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0626[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A76000;
    case 2u: goto L_08A7600C;
    case 3u: goto L_08A76018;
    case 4u: goto L_08A76028;
    case 5u: goto L_08A76044;
    case 6u: goto L_08A7604C;
    case 7u: goto L_08A76064;
    case 8u: goto L_08A76074;
    case 9u: goto L_08A76080;
    case 10u: goto L_08A76088;
    case 11u: goto L_08A76098;
    case 12u: goto L_08A760A0;
    case 13u: goto L_08A760A8;
    case 14u: goto L_08A760B8;
    case 15u: goto L_08A760E8;
    case 16u: goto L_08A76110;
    case 17u: goto L_08A7618C;
    case 18u: goto L_08A761DC;
    case 19u: goto L_08A7621C;
    case 20u: goto L_08A76294;
    case 21u: goto L_08A7629C;
    case 22u: goto L_08A762A0;
    case 23u: goto L_08A762A4;
    case 24u: goto L_08A762B0;
    case 25u: goto L_08A76378;
    case 26u: goto L_08A7637C;
    case 27u: goto L_08A7638C;
    case 28u: goto L_08A763BC;
    case 29u: goto L_08A76444;
    case 30u: goto L_08A76450;
    case 31u: goto L_08A764E0;
    case 32u: goto L_08A764F4;
    case 33u: goto L_08A76574;
    case 34u: goto L_08A76580;
    case 35u: goto L_08A76590;
    case 36u: goto L_08A765C8;
    case 37u: goto L_08A765DC;
    case 38u: goto L_08A766F8;
    case 39u: goto L_08A7670C;
    case 40u: goto L_08A7671C;
    case 41u: goto L_08A76738;
    case 42u: goto L_08A76774;
    case 43u: goto L_08A767C0;
    case 44u: goto L_08A767CC;
    case 45u: goto L_08A767D8;
    case 46u: goto L_08A767E4;
    case 47u: goto L_08A767FC;
    case 48u: goto L_08A76884;
    case 49u: goto L_08A76898;
    case 50u: goto L_08A76988;
    case 51u: goto L_08A76A90;
    case 52u: goto L_08A76AB8;
    case 53u: goto L_08A76B64;
    case 54u: goto L_08A76B74;
    case 55u: goto L_08A76B78;
    case 56u: goto L_08A76B80;
    case 57u: goto L_08A76B94;
    case 58u: goto L_08A76BA8;
    case 59u: goto L_08A76BB8;
    case 60u: goto L_08A76BC4;
    case 61u: goto L_08A76BCC;
    case 62u: goto L_08A76BD4;
    case 63u: goto L_08A76BDC;
    case 64u: goto L_08A76BE4;
    case 65u: goto L_08A76C44;
    case 66u: goto L_08A76C48;
    case 67u: goto L_08A76C84;
    case 68u: goto L_08A76C98;
    case 69u: goto L_08A76CB8;
    case 70u: goto L_08A76CC4;
    case 71u: goto L_08A76CD4;
    case 72u: goto L_08A76D10;
    case 73u: goto L_08A76D6C;
    case 74u: goto L_08A76DB0;
    case 75u: goto L_08A76DB4;
    case 76u: goto L_08A76DC8;
    case 77u: goto L_08A76E04;
    case 78u: goto L_08A76E60;
    case 79u: goto L_08A76E64;
    case 80u: goto L_08A76E6C;
    case 81u: goto L_08A76E74;
    case 82u: goto L_08A76E78;
    case 83u: goto L_08A76EA0;
    case 84u: goto L_08A76EA4;
    case 85u: goto L_08A76EAC;
    case 86u: goto L_08A76ED4;
    case 87u: goto L_08A76ED8;
    case 88u: goto L_08A76EDC;
    case 89u: goto L_08A76EE0;
    case 90u: goto L_08A76EEC;
    case 91u: goto L_08A76F04;
    case 92u: goto L_08A76F14;
    case 93u: goto L_08A76F1C;
    case 94u: goto L_08A76F54;
    case 95u: goto L_08A76F5C;
    case 96u: goto L_08A76F68;
    case 97u: goto L_08A76FAC;
    case 98u: goto L_08A76FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A76000:
    // nop
    // nop
    // nop
    goto L_08A7600C;
L_08A7600C:
    // nop
    // nop
    // nop
    goto L_08A76018;
L_08A76018:
    // nop
    // nop
    // nop
    // nop
    goto L_08A76028;
L_08A76028:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76044;
L_08A76044:
    // nop
    // nop
    goto L_08A7604C;
L_08A7604C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76064;
L_08A76064:
    // nop
    // nop
    // nop
    // nop
    goto L_08A76074;
L_08A76074:
    // nop
    // nop
    // nop
    goto L_08A76080;
L_08A76080:
    // nop
    // nop
    goto L_08A76088;
L_08A76088:
    // nop
    // nop
    // nop
    // nop
    goto L_08A76098;
L_08A76098:
    // nop
    // nop
    goto L_08A760A0;
L_08A760A0:
    // nop
    // nop
    goto L_08A760A8;
L_08A760A8:
    // nop
    // nop
    // nop
    // nop
    goto L_08A760B8;
L_08A760B8:
    rt.unsupported(0x08A760BCu, 0x08A75F84u, "control flow in delay slot"); return;
L_08A760E8:
    rt.unsupported(0x08A760ECu, 0x08A76064u, "control flow in delay slot"); return;
L_08A76110:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    (void)(0u << 16u);
    aot_gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
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
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A76174u, 0x42200000u, "unknown not lowered yet"); return;
L_08A7618C:
    aot_gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[21] = (49807u << 16u);
    aot_gpr[21] = (49807u << 16u);
    aot_gpr[3] = (55050u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    goto L_08A761DC;
L_08A761DC:
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[21] = (49807u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[29] = (62390u << 16u);
    aot_gpr[29] = (62390u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7621C;
L_08A7621C:
    // nop
    aot_gpr[21] = (49807u << 16u);
    aot_gpr[5] = (7864u << 16u);
    aot_gpr[1] = (18350u << 16u);
    aot_gpr[19] = (13107u << 16u);
    aot_gpr[2] = (36700u << 16u);
    aot_gpr[24] = (20972u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[19] = (13107u << 16u);
    aot_gpr[26] = (57672u << 16u);
    // nop
    // nop
    // nop
    // nop
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A76258u, 0x00000020u); return; } }
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
    goto L_08A76294;
L_08A76294:
    // nop
    // nop
    goto L_08A7629C;
L_08A7629C:
    // nop
    goto L_08A762A0;
L_08A762A0:
    // nop
    goto L_08A762A4;
L_08A762A4:
    // nop
    // nop
    // nop
    goto L_08A762B0;
L_08A762B0:
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
    rt.unsupported(0x08A762E4u, 0x00000001u, "special? not lowered yet"); return;
L_08A76378:
    // nop
    goto L_08A7637C;
L_08A7637C:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7638C;
L_08A7638C:
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
    goto L_08A763BC;
L_08A763BC:
    // nop
    // nop
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
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76444;
L_08A76444:
    rt.unsupported(0x08A76448u, 0x08A629DCu, "control flow in delay slot"); return;
L_08A76450:
    rt.unsupported(0x08A76454u, 0x08A629E8u, "control flow in delay slot"); return;
L_08A764E0:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A764F4;
L_08A764F4:
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
    // nop
    // nop
    // nop
    (void)(0u << 4u);
    goto L_08A76574;
L_08A76574:
    // nop
    // nop
    // nop
    goto L_08A76580;
L_08A76580:
    // nop
    // nop
    // nop
    // nop
    goto L_08A76590;
L_08A76590:
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
    goto L_08A765C8;
L_08A765C8:
    // nop
    (void)(0u << 16u);
    aot_gpr[3] = (4719u << 16u);
    // nop
    // nop
    goto L_08A765DC;
L_08A765DC:
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
    rt.unsupported(0x08A76614u, 0x42C80000u, "unknown not lowered yet"); return;
L_08A766F8:
    rt.unsupported(0x08A766F8u, 0xB2FB33C7u, "unknown not lowered yet"); return;
L_08A7670C:
    aot_gpr[17] = (40522u << 16u);
    aot_gpr[23] = (aot_gpr[22] | 64938u);
    if (aot_gpr[25] != aot_gpr[14]) {
    rt.unsupported(0x08A76718u, 0x057BDC9Du, "regimm? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 87u, 0x08A7FCA0u>(ctx, &aot_mem); return;
    }
    goto L_08A7671C;
L_08A7671C:
    rt.unsupported(0x08A7671Cu, 0xEECAF18Du, "unknown not lowered yet"); return;
L_08A76738:
    rt.unsupported(0x08A76738u, 0x4958AFB9u, "cop2/vfpu not lowered yet"); return;
L_08A76774:
    aot_gpr[20] = (aot_gpr[14] + static_cast<std::uint32_t>(-22611));
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
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
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A767C0;
L_08A767C0:
    // nop
    rt.unsupported(0x08A767C8u, 0x08A4DB70u, "control flow in delay slot"); return;
L_08A767CC:
    // nop
    rt.unsupported(0x08A767D4u, 0x08A4DD48u, "control flow in delay slot"); return;
L_08A767D8:
    // nop
    rt.unsupported(0x08A767E0u, 0x08A4DE28u, "control flow in delay slot"); return;
L_08A767E4:
    // nop
    rt.unsupported(0x08A767ECu, 0x08A4DC68u, "control flow in delay slot"); return;
L_08A767FC:
    // nop
    rt.unsupported(0x08A76804u, 0x08A4DF10u, "control flow in delay slot"); return;
L_08A76884:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08A76888u, 0x00000014u, "special? not lowered yet"); return;
L_08A76898:
    rt.unsupported(0x08A76898u, 0x004BFFCEu, "special? not lowered yet"); return;
L_08A76988:
    if (aot_gpr[28] == 0u) (void)(0u);
    if (aot_gpr[27] != 0u) (void)(0u);
    rt.unsupported(0x08A76990u, 0x001A000Cu, "syscall not lowered yet"); return;
L_08A76A90:
    (void)(aot_gpr[2] << 4u);
    rt.unsupported(0x08A76A94u, 0x06050403u, "regimm? not lowered yet"); return;
L_08A76AB8:
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
    goto L_08A76B64;
L_08A76B64:
    // nop
    rt.unsupported(0x08A76B68u, 0x00000001u, "special? not lowered yet"); return;
L_08A76B74:
    // nop
    goto L_08A76B78;
L_08A76B78:
    // nop
    // nop
    goto L_08A76B80;
L_08A76B80:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76B94;
L_08A76B94:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76BA8;
L_08A76BA8:
    // nop
    // nop
    // nop
    // nop
    goto L_08A76BB8;
L_08A76BB8:
    // nop
    // nop
    // nop
    goto L_08A76BC4;
L_08A76BC4:
    // nop
    // nop
    goto L_08A76BCC;
L_08A76BCC:
    // nop
    // nop
    goto L_08A76BD4;
L_08A76BD4:
    // nop
    // nop
    goto L_08A76BDC;
L_08A76BDC:
    // nop
    // nop
    goto L_08A76BE4;
L_08A76BE4:
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
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76C44;
L_08A76C44:
    rt.unsupported(0x08A76C44u, 0x40200000u, "unknown not lowered yet"); return;
L_08A76C48:
    rt.unsupported(0x08A76C48u, 0x40800000u, "unknown not lowered yet"); return;
L_08A76C84:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76C98;
L_08A76C98:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76CB8;
L_08A76CB8:
    // nop
    // nop
    // nop
    goto L_08A76CC4;
L_08A76CC4:
    // nop
    // nop
    // nop
    // nop
    goto L_08A76CD4;
L_08A76CD4:
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
    rt.unsupported(0x08A76D04u, 0x00000001u, "special? not lowered yet"); return;
L_08A76D10:
    rt.unsupported(0x08A76D10u, 0x40533333u, "unknown not lowered yet"); return;
L_08A76D6C:
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
    // nop
    // nop
    // nop
    rt.unsupported(0x08A76DA0u, 0x42C80000u, "unknown not lowered yet"); return;
L_08A76DB0:
    (void)(0u << 16u);
    goto L_08A76DB4;
L_08A76DB4:
    // nop
    // nop
    // nop
    if (0u == 0u) (void)(0u);
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A76DC8;
L_08A76DC8:
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
    aot_gpr[21] = (49807u << 16u);
    rt.unsupported(0x08A76DFCu, 0x43CE0000u, "unknown not lowered yet"); return;
L_08A76E04:
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
    // nop
    // nop
    (void)(0u << 2u);
    // nop
    // nop
    // nop
    // nop
    goto L_08A76E60;
L_08A76E60:
    // nop
    goto L_08A76E64;
L_08A76E64:
    rt.unsupported(0x08A76E68u, 0x088BF8B0u, "control flow in delay slot"); return;
L_08A76E6C:
    // nop
    rt.unsupported(0x08A76E74u, 0x088BF96Cu, "control flow in delay slot"); return;
L_08A76E74:
    // nop
    ctx.pc = 0x022FE5B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A76E78:
    // nop
    rt.unsupported(0x08A76E80u, 0x088BFA28u, "control flow in delay slot"); return;
L_08A76EA0:
    // nop
    goto L_08A76EA4;
L_08A76EA4:
    // nop
    // nop
    goto L_08A76EAC;
L_08A76EAC:
    rt.unsupported(0x08A76EACu, 0x00000001u, "special? not lowered yet"); return;
L_08A76ED4:
    // nop
    goto L_08A76ED8;
L_08A76ED8:
    // nop
    goto L_08A76EDC;
L_08A76EDC:
    // nop
    goto L_08A76EE0;
L_08A76EE0:
    // nop
    // nop
    // nop
    goto L_08A76EEC;
L_08A76EEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A76F04;
L_08A76F04:
    // nop
    // nop
    rt.unsupported(0x08A76F0Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A76F14:
    // nop
    // nop
    goto L_08A76F1C;
L_08A76F1C:
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
    goto L_08A76F54;
L_08A76F54:
    // nop
    // nop
    goto L_08A76F5C;
L_08A76F5C:
    rt.unsupported(0x08A76F60u, 0x08A67BA4u, "control flow in delay slot"); return;
L_08A76F68:
    rt.unsupported(0x08A76F6Cu, 0x08A67BB0u, "control flow in delay slot"); return;
L_08A76FAC:
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
    // nop
    // nop
    // nop
    // nop
    goto L_08A76FFC;
L_08A76FFC:
    rt.unsupported(0x08A76FFCu, 0x720068E0u, "unknown not lowered yet"); return;
}

void recomp_unit_0626(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0626_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_626(Runtime &runtime) {
    runtime.register_generated_unit(626u, 0x08A76000u, 4096u, &recomp_unit_0626, &recomp_unit_0626_entry);
    runtime.register_function(0x08A76000u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7600Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76018u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76028u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76044u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7604Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76064u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76074u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76080u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76088u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76098u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A760A0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A760A8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A760B8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A760E8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76110u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7618Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A761DCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7621Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76294u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7629Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A762A0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A762A4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A762B0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76378u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7637Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7638Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A763BCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76444u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76450u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A764E0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A764F4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76574u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76580u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76590u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A765C8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A765DCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A766F8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7670Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A7671Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76738u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76774u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A767C0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A767CCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A767D8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A767E4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A767FCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76884u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76898u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76988u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76A90u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76AB8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76B64u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76B74u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76B78u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76B80u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76B94u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BA8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BB8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BC4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BCCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BD4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BDCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76BE4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76C44u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76C48u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76C84u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76C98u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76CB8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76CC4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76CD4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76D10u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76D6Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76DB0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76DB4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76DC8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76E04u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76E60u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76E64u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76E6Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76E74u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76E78u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76EA0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76EA4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76EACu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76ED4u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76ED8u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76EDCu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76EE0u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76EECu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76F04u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76F14u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76F1Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76F54u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76F5Cu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76F68u, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76FACu, &recomp_unit_0626, "recomp_unit_0626");
    runtime.register_function(0x08A76FFCu, &recomp_unit_0626, "recomp_unit_0626");
}
} // namespace psprecomp
