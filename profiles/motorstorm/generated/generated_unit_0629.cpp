#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0629[985] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 21, 0, 22, 0, 23, 24,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 50, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 66, 67, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 97,
};
void recomp_unit_0629_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A79000u;
        entry_id = (entry_delta < 3940u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0629[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A79000;
    case 2u: goto L_08A79020;
    case 3u: goto L_08A79050;
    case 4u: goto L_08A7906C;
    case 5u: goto L_08A79124;
    case 6u: goto L_08A79128;
    case 7u: goto L_08A79160;
    case 8u: goto L_08A79178;
    case 9u: goto L_08A7917C;
    case 10u: goto L_08A791D4;
    case 11u: goto L_08A7920C;
    case 12u: goto L_08A79428;
    case 13u: goto L_08A79434;
    case 14u: goto L_08A7943C;
    case 15u: goto L_08A79440;
    case 16u: goto L_08A79460;
    case 17u: goto L_08A795B8;
    case 18u: goto L_08A795C8;
    case 19u: goto L_08A795D8;
    case 20u: goto L_08A795DC;
    case 21u: goto L_08A795E8;
    case 22u: goto L_08A795F0;
    case 23u: goto L_08A795F8;
    case 24u: goto L_08A795FC;
    case 25u: goto L_08A79618;
    case 26u: goto L_08A7962C;
    case 27u: goto L_08A79684;
    case 28u: goto L_08A796B0;
    case 29u: goto L_08A796BC;
    case 30u: goto L_08A796C0;
    case 31u: goto L_08A796E0;
    case 32u: goto L_08A796E4;
    case 33u: goto L_08A79700;
    case 34u: goto L_08A79710;
    case 35u: goto L_08A79720;
    case 36u: goto L_08A79730;
    case 37u: goto L_08A79740;
    case 38u: goto L_08A79744;
    case 39u: goto L_08A79758;
    case 40u: goto L_08A79788;
    case 41u: goto L_08A797A0;
    case 42u: goto L_08A797AC;
    case 43u: goto L_08A797C0;
    case 44u: goto L_08A797C4;
    case 45u: goto L_08A797DC;
    case 46u: goto L_08A797E0;
    case 47u: goto L_08A797F0;
    case 48u: goto L_08A7983C;
    case 49u: goto L_08A79840;
    case 50u: goto L_08A79844;
    case 51u: goto L_08A79858;
    case 52u: goto L_08A79860;
    case 53u: goto L_08A79868;
    case 54u: goto L_08A79880;
    case 55u: goto L_08A79890;
    case 56u: goto L_08A798A0;
    case 57u: goto L_08A798B8;
    case 58u: goto L_08A798CC;
    case 59u: goto L_08A798FC;
    case 60u: goto L_08A79944;
    case 61u: goto L_08A79964;
    case 62u: goto L_08A79974;
    case 63u: goto L_08A79990;
    case 64u: goto L_08A799AC;
    case 65u: goto L_08A799CC;
    case 66u: goto L_08A799D0;
    case 67u: goto L_08A799D4;
    case 68u: goto L_08A799D8;
    case 69u: goto L_08A799EC;
    case 70u: goto L_08A79A0C;
    case 71u: goto L_08A79A2C;
    case 72u: goto L_08A79A44;
    case 73u: goto L_08A79A60;
    case 74u: goto L_08A79A78;
    case 75u: goto L_08A79A98;
    case 76u: goto L_08A79AB0;
    case 77u: goto L_08A79AD0;
    case 78u: goto L_08A79AE4;
    case 79u: goto L_08A79B4C;
    case 80u: goto L_08A79B8C;
    case 81u: goto L_08A79BB0;
    case 82u: goto L_08A79C04;
    case 83u: goto L_08A79C24;
    case 84u: goto L_08A79C44;
    case 85u: goto L_08A79C64;
    case 86u: goto L_08A79CB4;
    case 87u: goto L_08A79D5C;
    case 88u: goto L_08A79D64;
    case 89u: goto L_08A79D9C;
    case 90u: goto L_08A79DE8;
    case 91u: goto L_08A79E0C;
    case 92u: goto L_08A79E20;
    case 93u: goto L_08A79E30;
    case 94u: goto L_08A79F28;
    case 95u: goto L_08A79F4C;
    case 96u: goto L_08A79F50;
    case 97u: goto L_08A79F60;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A79000:
    // nop
    // nop
    // nop
    rt.unsupported(0x08A7900Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A79020:
    // nop
    rt.unsupported(0x08A79028u, 0x08A589D8u, "control flow in delay slot"); return;
L_08A79050:
    // nop
    // nop
    // nop
    // nop
    aot_gpr[3] = (aot_gpr[20] ^ 4719u);
    // nop
    aot_gpr[3] = (55050u << 16u);
    goto L_08A7906C;
L_08A7906C:
    // nop
    rt.unsupported(0x08A79070u, 0x00000001u, "special? not lowered yet"); return;
L_08A79124:
    rt.unsupported(0x08A79128u, 0x08A6A4DCu, "control flow in delay slot"); return;
L_08A79128:
    rt.unsupported(0x08A7912Cu, 0x08A6A4E8u, "control flow in delay slot"); return;
L_08A79160:
    rt.unsupported(0x08A79164u, 0x08A6A5A4u, "control flow in delay slot"); return;
L_08A79178:
    // nop
    goto L_08A7917C;
L_08A7917C:
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
    goto L_08A791D4;
L_08A791D4:
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
    goto L_08A7920C;
L_08A7920C:
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
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79428;
L_08A79428:
    // nop
    rt.unsupported(0x08A79430u, 0x08960018u, "control flow in delay slot"); return;
L_08A79434:
    // nop
    // nop
    goto L_08A7943C;
L_08A7943C:
    rt.unsupported(0x08A79440u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02581890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A79440:
    rt.unsupported(0x08A79440u, 0x00000001u, "special? not lowered yet"); return;
L_08A79460:
    rt.unsupported(0x08A79464u, 0x08A6A698u, "control flow in delay slot"); return;
L_08A795B8:
    // nop
    // nop
    // nop
    // nop
    goto L_08A795C8;
L_08A795C8:
    // nop
    rt.unsupported(0x08A795D0u, 0x08A59110u, "control flow in delay slot"); return;
L_08A795D8:
    // nop
    goto L_08A795DC;
L_08A795DC:
    // nop
    rt.unsupported(0x08A795E4u, 0x08A591F4u, "control flow in delay slot"); return;
L_08A795E8:
    // nop
    rt.unsupported(0x08A795F0u, 0x08961C98u, "control flow in delay slot"); return;
L_08A795F0:
    // nop
    ctx.pc = 0x02587260u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A795F8:
    // nop
    goto L_08A795FC;
L_08A795FC:
    // nop
    rt.unsupported(0x08A79604u, 0x08A592F0u, "control flow in delay slot"); return;
L_08A79618:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7962C;
L_08A7962C:
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
    goto L_08A79684;
L_08A79684:
    // nop
    rt.unsupported(0x08A7968Cu, 0x08963020u, "control flow in delay slot"); return;
L_08A796B0:
    // nop
    rt.unsupported(0x08A796B8u, 0x08963228u, "control flow in delay slot"); return;
L_08A796BC:
    // nop
    goto L_08A796C0;
L_08A796C0:
    // nop
    rt.unsupported(0x08A796C8u, 0x08963348u, "control flow in delay slot"); return;
L_08A796E0:
    // nop
    goto L_08A796E4;
L_08A796E4:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 4u);
    // nop
    goto L_08A79700;
L_08A79700:
    // nop
    rt.unsupported(0x08A79708u, 0x08965D94u, "control flow in delay slot"); return;
L_08A79710:
    // nop
    rt.unsupported(0x08A79718u, 0x08966A30u, "control flow in delay slot"); return;
L_08A79720:
    // nop
    rt.unsupported(0x08A79728u, 0x08966D20u, "control flow in delay slot"); return;
L_08A79730:
    // nop
    rt.unsupported(0x08A79738u, 0x08967368u, "control flow in delay slot"); return;
L_08A79740:
    // nop
    goto L_08A79744;
L_08A79744:
    rt.unsupported(0x08A79748u, 0x08967ED0u, "control flow in delay slot"); return;
L_08A79758:
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
    // nop
    goto L_08A79788;
L_08A79788:
    // nop
    rt.unsupported(0x08A79790u, 0x0896A090u, "control flow in delay slot"); return;
L_08A797A0:
    // nop
    // nop
    (void)(0u << 4u);
    goto L_08A797AC;
L_08A797AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A797C0;
L_08A797C0:
    // nop
    goto L_08A797C4;
L_08A797C4:
    rt.unsupported(0x08A797C8u, 0x0896BFE8u, "control flow in delay slot"); return;
L_08A797DC:
    // nop
    goto L_08A797E0;
L_08A797E0:
    // nop
    rt.unsupported(0x08A797E8u, 0x0896C6B4u, "control flow in delay slot"); return;
L_08A797F0:
    (void)(aot_gpr[5] << 0u);
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A797F8u, 0x000B0001u, "special? not lowered yet"); return;
L_08A7983C:
    // nop
    goto L_08A79840;
L_08A79840:
    // nop
    goto L_08A79844;
L_08A79844:
    // nop
    rt.unsupported(0x08A7984Cu, 0x08A593D0u, "control flow in delay slot"); return;
L_08A79858:
    // nop
    rt.unsupported(0x08A79860u, 0x0896E34Cu, "control flow in delay slot"); return;
L_08A79860:
    // nop
    ctx.pc = 0x025B8D30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A79868:
    // nop
    rt.unsupported(0x08A79870u, 0x0896E7A0u, "control flow in delay slot"); return;
L_08A79880:
    // nop
    // nop
    // nop
    // nop
    goto L_08A79890;
L_08A79890:
    // nop
    rt.unsupported(0x08A79898u, 0x08970FECu, "control flow in delay slot"); return;
L_08A798A0:
    // nop
    rt.unsupported(0x08A798A8u, 0x089715A8u, "control flow in delay slot"); return;
L_08A798B8:
    // nop
    rt.unsupported(0x08A798C0u, 0x08971EC0u, "control flow in delay slot"); return;
L_08A798CC:
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
    goto L_08A798FC;
L_08A798FC:
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
    goto L_08A79944;
L_08A79944:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08A79958u, 0x00000001u, "special? not lowered yet"); return;
L_08A79964:
    // nop
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A7996Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A79974:
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> 0u);
    (void)(0u << (0u & 31u));
    (void)(0u >> 0u);
    rt.unsupported(0x08A7998Cu, 0x00000005u, "special? not lowered yet"); return;
L_08A79990:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    ctx.pc = 0x029ABDF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A799AC:
    // nop
    rt.unsupported(0x08A799B4u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02A3E890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A799CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[28] + static_cast<std::uint32_t>(-29249), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A799D0;
L_08A799D0:
    // nop
    goto L_08A799D4;
L_08A799D4:
    // nop
    goto L_08A799D8;
L_08A799D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A799EC;
L_08A799EC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79A0C;
L_08A79A0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79A2C;
L_08A79A2C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79A44;
L_08A79A44:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79A60;
L_08A79A60:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79A78;
L_08A79A78:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79A98;
L_08A79A98:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79AB0;
L_08A79AB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79AD0;
L_08A79AD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79AE4;
L_08A79AE4:
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
    goto L_08A79B4C;
L_08A79B4C:
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
    goto L_08A79B8C;
L_08A79B8C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79BB0;
L_08A79BB0:
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
    goto L_08A79C04;
L_08A79C04:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79C24;
L_08A79C24:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79C44;
L_08A79C44:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79C64;
L_08A79C64:
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
    goto L_08A79CB4;
L_08A79CB4:
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
    goto L_08A79D5C;
L_08A79D5C:
    // nop
    // nop
    goto L_08A79D64;
L_08A79D64:
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
    goto L_08A79D9C;
L_08A79D9C:
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
    goto L_08A79DE8;
L_08A79DE8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79E0C;
L_08A79E0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79E20;
L_08A79E20:
    // nop
    // nop
    // nop
    // nop
    goto L_08A79E30;
L_08A79E30:
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
    goto L_08A79F28;
L_08A79F28:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A79F4C;
L_08A79F4C:
    // nop
    goto L_08A79F50;
L_08A79F50:
    // nop
    // nop
    // nop
    // nop
    goto L_08A79F60;
L_08A79F60:
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
    ctx.pc = 0x08A7A000u; return;
}

void recomp_unit_0629(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0629_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_629(Runtime &runtime) {
    runtime.register_generated_unit(629u, 0x08A79000u, 4096u, &recomp_unit_0629, &recomp_unit_0629_entry);
    runtime.register_function(0x08A79000u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79020u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79050u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A7906Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79124u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79128u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79160u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79178u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A7917Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A791D4u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A7920Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79428u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79434u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A7943Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79440u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79460u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795B8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795C8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795D8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795DCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795E8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795F0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795F8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A795FCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79618u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A7962Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79684u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A796B0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A796BCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A796C0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A796E0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A796E4u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79700u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79710u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79720u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79730u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79740u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79744u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79758u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79788u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797A0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797ACu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797C0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797C4u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797DCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797E0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A797F0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A7983Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79840u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79844u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79858u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79860u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79868u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79880u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79890u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A798A0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A798B8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A798CCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A798FCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79944u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79964u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79974u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79990u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A799ACu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A799CCu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A799D0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A799D4u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A799D8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A799ECu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79A0Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79A2Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79A44u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79A60u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79A78u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79A98u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79AB0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79AD0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79AE4u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79B4Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79B8Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79BB0u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79C04u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79C24u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79C44u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79C64u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79CB4u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79D5Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79D64u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79D9Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79DE8u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79E0Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79E20u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79E30u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79F28u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79F4Cu, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79F50u, &recomp_unit_0629, "recomp_unit_0629");
    runtime.register_function(0x08A79F60u, &recomp_unit_0629, "recomp_unit_0629");
}
} // namespace psprecomp
