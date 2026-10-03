#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0616[982] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 15, 0, 16, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0,
    0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0,
    27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0,
    53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 59, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0,
    67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0,
    85, 0, 0, 86, 0, 87, 0, 88, 89, 90, 91, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106,
    0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 111, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0,
    0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135,
    0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 144, 0, 0, 145, 0, 0, 146,
    0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
};
void recomp_unit_0616_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A6C068u;
        entry_id = (entry_delta < 3928u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0616[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6C068;
    case 2u: goto L_08A6C144;
    case 3u: goto L_08A6C16C;
    case 4u: goto L_08A6C194;
    case 5u: goto L_08A6C208;
    case 6u: goto L_08A6C22C;
    case 7u: goto L_08A6C250;
    case 8u: goto L_08A6C264;
    case 9u: goto L_08A6C27C;
    case 10u: goto L_08A6C290;
    case 11u: goto L_08A6C2EC;
    case 12u: goto L_08A6C2F0;
    case 13u: goto L_08A6C310;
    case 14u: goto L_08A6C32C;
    case 15u: goto L_08A6C330;
    case 16u: goto L_08A6C338;
    case 17u: goto L_08A6C34C;
    case 18u: goto L_08A6C350;
    case 19u: goto L_08A6C36C;
    case 20u: goto L_08A6C374;
    case 21u: goto L_08A6C390;
    case 22u: goto L_08A6C398;
    case 23u: goto L_08A6C3B4;
    case 24u: goto L_08A6C3BC;
    case 25u: goto L_08A6C3D8;
    case 26u: goto L_08A6C3E0;
    case 27u: goto L_08A6C3E8;
    case 28u: goto L_08A6C3FC;
    case 29u: goto L_08A6C404;
    case 30u: goto L_08A6C420;
    case 31u: goto L_08A6C428;
    case 32u: goto L_08A6C444;
    case 33u: goto L_08A6C44C;
    case 34u: goto L_08A6C468;
    case 35u: goto L_08A6C470;
    case 36u: goto L_08A6C48C;
    case 37u: goto L_08A6C494;
    case 38u: goto L_08A6C498;
    case 39u: goto L_08A6C4AC;
    case 40u: goto L_08A6C4F0;
    case 41u: goto L_08A6C510;
    case 42u: goto L_08A6C540;
    case 43u: goto L_08A6C580;
    case 44u: goto L_08A6C5B0;
    case 45u: goto L_08A6C5E4;
    case 46u: goto L_08A6C5EC;
    case 47u: goto L_08A6C628;
    case 48u: goto L_08A6C660;
    case 49u: goto L_08A6C668;
    case 50u: goto L_08A6C690;
    case 51u: goto L_08A6C6D8;
    case 52u: goto L_08A6C6E0;
    case 53u: goto L_08A6C6E8;
    case 54u: goto L_08A6C6F0;
    case 55u: goto L_08A6C750;
    case 56u: goto L_08A6C7AC;
    case 57u: goto L_08A6C7BC;
    case 58u: goto L_08A6C7EC;
    case 59u: goto L_08A6C7F0;
    case 60u: goto L_08A6C7F4;
    case 61u: goto L_08A6C7FC;
    case 62u: goto L_08A6C804;
    case 63u: goto L_08A6C80C;
    case 64u: goto L_08A6C814;
    case 65u: goto L_08A6C858;
    case 66u: goto L_08A6C860;
    case 67u: goto L_08A6C868;
    case 68u: goto L_08A6C870;
    case 69u: goto L_08A6C880;
    case 70u: goto L_08A6C888;
    case 71u: goto L_08A6C890;
    case 72u: goto L_08A6C8AC;
    case 73u: goto L_08A6C8B4;
    case 74u: goto L_08A6C8EC;
    case 75u: goto L_08A6C8FC;
    case 76u: goto L_08A6C904;
    case 77u: goto L_08A6C90C;
    case 78u: goto L_08A6C914;
    case 79u: goto L_08A6C91C;
    case 80u: goto L_08A6C928;
    case 81u: goto L_08A6C948;
    case 82u: goto L_08A6C950;
    case 83u: goto L_08A6C958;
    case 84u: goto L_08A6C960;
    case 85u: goto L_08A6C968;
    case 86u: goto L_08A6C974;
    case 87u: goto L_08A6C97C;
    case 88u: goto L_08A6C984;
    case 89u: goto L_08A6C988;
    case 90u: goto L_08A6C98C;
    case 91u: goto L_08A6C990;
    case 92u: goto L_08A6C99C;
    case 93u: goto L_08A6C9A4;
    case 94u: goto L_08A6C9AC;
    case 95u: goto L_08A6C9D8;
    case 96u: goto L_08A6C9E0;
    case 97u: goto L_08A6C9F0;
    case 98u: goto L_08A6CA08;
    case 99u: goto L_08A6CA1C;
    case 100u: goto L_08A6CA24;
    case 101u: goto L_08A6CA2C;
    case 102u: goto L_08A6CA38;
    case 103u: goto L_08A6CA44;
    case 104u: goto L_08A6CA4C;
    case 105u: goto L_08A6CA5C;
    case 106u: goto L_08A6CA64;
    case 107u: goto L_08A6CA74;
    case 108u: goto L_08A6CA7C;
    case 109u: goto L_08A6CA88;
    case 110u: goto L_08A6CA94;
    case 111u: goto L_08A6CA98;
    case 112u: goto L_08A6CA9C;
    case 113u: goto L_08A6CAA4;
    case 114u: goto L_08A6CAAC;
    case 115u: goto L_08A6CAB4;
    case 116u: goto L_08A6CABC;
    case 117u: goto L_08A6CAD4;
    case 118u: goto L_08A6CADC;
    case 119u: goto L_08A6CAEC;
    case 120u: goto L_08A6CAFC;
    case 121u: goto L_08A6CB04;
    case 122u: goto L_08A6CB0C;
    case 123u: goto L_08A6CB40;
    case 124u: goto L_08A6CB70;
    case 125u: goto L_08A6CB7C;
    case 126u: goto L_08A6CB84;
    case 127u: goto L_08A6CB90;
    case 128u: goto L_08A6CB98;
    case 129u: goto L_08A6CBA0;
    case 130u: goto L_08A6CBCC;
    case 131u: goto L_08A6CBF4;
    case 132u: goto L_08A6CC18;
    case 133u: goto L_08A6CC3C;
    case 134u: goto L_08A6CC5C;
    case 135u: goto L_08A6CC64;
    case 136u: goto L_08A6CC78;
    case 137u: goto L_08A6CC88;
    case 138u: goto L_08A6CC90;
    case 139u: goto L_08A6CC9C;
    case 140u: goto L_08A6CCA8;
    case 141u: goto L_08A6CCB4;
    case 142u: goto L_08A6CCBC;
    case 143u: goto L_08A6CCC8;
    case 144u: goto L_08A6CCCC;
    case 145u: goto L_08A6CCD8;
    case 146u: goto L_08A6CCE4;
    case 147u: goto L_08A6CCEC;
    case 148u: goto L_08A6CCF0;
    case 149u: goto L_08A6CD44;
    case 150u: goto L_08A6CD8C;
    case 151u: goto L_08A6CDA8;
    case 152u: goto L_08A6CDF0;
    case 153u: goto L_08A6CE18;
    case 154u: goto L_08A6CE2C;
    case 155u: goto L_08A6CE48;
    case 156u: goto L_08A6CEE4;
    case 157u: goto L_08A6CEFC;
    case 158u: goto L_08A6CF3C;
    case 159u: goto L_08A6CFBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6C068:
    rt.unsupported(0x08A6C06Cu, 0x089A85E4u, "control flow in delay slot"); return;
L_08A6C144:
    rt.unsupported(0x08A6C148u, 0x089A9048u, "control flow in delay slot"); return;
L_08A6C16C:
    rt.unsupported(0x08A6C170u, 0x089A90BCu, "control flow in delay slot"); return;
L_08A6C194:
    rt.unsupported(0x08A6C198u, 0x089A99ACu, "control flow in delay slot"); return;
L_08A6C208:
    rt.unsupported(0x08A6C20Cu, 0x089AA158u, "control flow in delay slot"); return;
L_08A6C22C:
    rt.unsupported(0x08A6C230u, 0x089AA2B8u, "control flow in delay slot"); return;
L_08A6C250:
    rt.unsupported(0x08A6C254u, 0x089AA7DCu, "control flow in delay slot"); return;
L_08A6C264:
    rt.unsupported(0x08A6C268u, 0x089AAB48u, "control flow in delay slot"); return;
L_08A6C27C:
    rt.unsupported(0x08A6C280u, 0x089927DCu, "control flow in delay slot"); return;
L_08A6C290:
    rt.unsupported(0x08A6C294u, 0x089AC7F8u, "control flow in delay slot"); return;
L_08A6C2EC:
    rt.unsupported(0x08A6C2F0u, 0x089AE840u, "control flow in delay slot"); return;
L_08A6C2F0:
    rt.unsupported(0x08A6C2F4u, 0x089AE9ECu, "control flow in delay slot"); return;
L_08A6C310:
    if (0u == 0u) (void)(0u);
    (void)(0u >> 0u);
    rt.unsupported(0x08A6C31Cu, 0x08A43504u, "control flow in delay slot"); return;
L_08A6C32C:
    aot_gpr[31] = (0u << 28u);
    goto L_08A6C330;
L_08A6C330:
    jump_target = 0u;
    aot_gpr[31] = (0x08A6C338u);
    (void)(0u >> 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C338u) goto L_08A6C338;
    return;
L_08A6C338:
    rt.unsupported(0x08A6C33Cu, 0x08A43504u, "control flow in delay slot"); return;
L_08A6C34C:
    (void)(0u << 4u);
    goto L_08A6C350;
L_08A6C350:
    jump_target = 0u;
    if (0u != 0u) (void)(0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C36C:
    // nop
    (void)(0u << 1u);
    goto L_08A6C374;
L_08A6C374:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08A6C380u, 0x08A435B0u, "control flow in delay slot"); return;
L_08A6C390:
    // nop
    (void)(0u << 2u);
    goto L_08A6C398;
L_08A6C398:
    (void)(0u >> (0u & 31u));
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08A6C3A4u, 0x08A435B0u, "control flow in delay slot"); return;
L_08A6C3B4:
    // nop
    (void)(0u << 1u);
    goto L_08A6C3BC;
L_08A6C3BC:
    rt.unsupported(0x08A6C3BCu, 0x00000005u, "special? not lowered yet"); return;
L_08A6C3D8:
    // nop
    rt.unsupported(0x08A6C3DCu, 0x7FFFFFFFu, "special3? not lowered yet"); return;
L_08A6C3E0:
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    goto L_08A6C3E8;
L_08A6C3E8:
    rt.unsupported(0x08A6C3ECu, 0x08A435B0u, "control flow in delay slot"); return;
L_08A6C3FC:
    // nop
    (void)(0u << 1u);
    goto L_08A6C404;
L_08A6C404:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08A6C408u, 0x00000005u, "special? not lowered yet"); return;
L_08A6C420:
    // nop
    rt.unsupported(0x08A6C424u, 0x7FFFFFFFu, "special3? not lowered yet"); return;
L_08A6C428:
    (void)(0u >> 0u);
    (void)(0u >> (0u & 31u));
    rt.unsupported(0x08A6C434u, 0x08A43578u, "control flow in delay slot"); return;
L_08A6C444:
    // nop
    rt.unsupported(0x08A6C448u, 0x00000005u, "special? not lowered yet"); return;
L_08A6C44C:
    rt.unsupported(0x08A6C44Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A6C468:
    // nop
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6C46Cu, 0x00000020u); return; } }
    goto L_08A6C470;
L_08A6C470:
    // nop
    rt.unsupported(0x08A6C474u, 0x00000005u, "special? not lowered yet"); return;
L_08A6C48C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    rt.unsupported(0x08A6C490u, 0x7FFFFFFFu, "special3? not lowered yet"); return;
L_08A6C494:
    rt.unsupported(0x08A6C498u, 0x089AFF40u, "control flow in delay slot"); return;
L_08A6C498:
    rt.unsupported(0x08A6C49Cu, 0x089B01FCu, "control flow in delay slot"); return;
L_08A6C4AC:
    rt.unsupported(0x08A6C4B0u, 0x089AFF40u, "control flow in delay slot"); return;
L_08A6C4F0:
    rt.unsupported(0x08A6C4F4u, 0x089B0310u, "control flow in delay slot"); return;
L_08A6C510:
    rt.unsupported(0x08A6C514u, 0x089B3B00u, "control flow in delay slot"); return;
L_08A6C540:
    rt.unsupported(0x08A6C544u, 0x089B3E84u, "control flow in delay slot"); return;
L_08A6C580:
    rt.unsupported(0x08A6C584u, 0x089B4058u, "control flow in delay slot"); return;
L_08A6C5B0:
    rt.unsupported(0x08A6C5B4u, 0x089B427Cu, "control flow in delay slot"); return;
L_08A6C5E4:
    // nop
    // nop
    goto L_08A6C5EC;
L_08A6C5EC:
    rt.unsupported(0x08A6C5F0u, 0x089B47A4u, "control flow in delay slot"); return;
L_08A6C628:
    rt.unsupported(0x08A6C62Cu, 0x089B4BB0u, "control flow in delay slot"); return;
L_08A6C660:
    // nop
    // nop
    goto L_08A6C668;
L_08A6C668:
    rt.unsupported(0x08A6C66Cu, 0x089B5698u, "control flow in delay slot"); return;
L_08A6C690:
    rt.unsupported(0x08A6C694u, 0x0C16001Du, "control flow in delay slot"); return;
L_08A6C6D8:
    rt.unsupported(0x08A6C6DCu, 0x05000610u, "control flow in delay slot"); return;
L_08A6C6E0:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[13];
    rt.unsupported(0x08A6C6E4u, 0x01141F0Eu, "special? not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0618_entry, 618u, 36u, 0x08A6E310u>(ctx, &aot_mem); return;
      }
      goto L_08A6C6E8;
    }
L_08A6C6E8:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[9];
    rt.unsupported(0x08A6C6ECu, 0x041C1910u, "regimm? not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 188u, 0x08A6DF44u>(ctx, &aot_mem); return;
      }
      goto L_08A6C6F0;
    }
L_08A6C6F0:
    rt.unsupported(0x08A6C6F0u, 0x06060C05u, "regimm? not lowered yet"); return;
L_08A6C750:
    rt.unsupported(0x08A6C754u, 0x1A101A16u, "control flow in delay slot"); return;
L_08A6C7AC:
    rt.unsupported(0x08A6C7ACu, 0x0719131Cu, "regimm? not lowered yet"); return;
L_08A6C7BC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[26])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = 0x07FC5C38u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6C7EC:
    aot_gpr[31] = (0x08A6C7F4u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[24]) < 0;
    rt.unsupported(0x08A6C7F0u, 0x051B0F15u, "regimm? not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0619_entry, 619u, 214u, 0x08A6FBF8u>(ctx, &aot_mem); return;
      }
      goto L_08A6C7F4;
    }
L_08A6C7F0:
    rt.unsupported(0x08A6C7F0u, 0x051B0F15u, "regimm? not lowered yet"); return;
L_08A6C7F4:
    rt.unsupported(0x08A6C7F8u, 0x18110001u, "control flow in delay slot"); return;
L_08A6C7FC:
    { const bool branch_taken = aot_gpr[24] != aot_gpr[19];
    rt.unsupported(0x08A6C800u, 0x00000C14u, "special? not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 2u, 0x08A7001Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6C804;
    }
L_08A6C804:
    rt.unsupported(0x08A6C808u, 0x07100603u, "control flow in delay slot"); return;
L_08A6C80C:
    aot_gpr[31] = (0x08A6C814u);
    ctx.lo = aot_gpr[16];
    ctx.pc = 0x003C0414u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C814u) goto L_08A6C814;
    return;
L_08A6C814:
    rt.unsupported(0x08A6C814u, 0x04141B14u, "regimm? not lowered yet"); return;
L_08A6C858:
    rt.unsupported(0x08A6C85Cu, 0x16111309u, "control flow in delay slot"); return;
L_08A6C860:
    rt.unsupported(0x08A6C864u, 0x18100F19u, "control flow in delay slot"); return;
L_08A6C868:
    { const bool branch_taken = static_cast<std::int32_t>(0u) <= 0;
    (void)(aot_gpr[16] << 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0618_entry, 618u, 225u, 0x08A6EC78u>(ctx, &aot_mem); return;
      }
      goto L_08A6C870;
    }
L_08A6C870:
    rt.unsupported(0x08A6C870u, 0x05060C17u, "regimm? not lowered yet"); return;
L_08A6C880:
    rt.unsupported(0x08A6C884u, 0x1204141Au, "control flow in delay slot"); return;
L_08A6C888:
    rt.unsupported(0x08A6C88Cu, 0x0F110212u, "control flow in delay slot"); return;
L_08A6C890:
    rt.unsupported(0x08A6C894u, 0x0C0F030Eu, "control flow in delay slot"); return;
L_08A6C8AC:
    aot_gpr[31] = (0x08A6C8B4u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[22]) >> 16u));
    ctx.pc = 0x08083824u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C8B4u) goto L_08A6C8B4;
    return;
L_08A6C8B4:
    rt.unsupported(0x08A6C8B8u, 0x0D01160Fu, "control flow in delay slot"); return;
L_08A6C8EC:
    if (aot_gpr[4] == 0u) aot_gpr[1] = (aot_gpr[16]);
    rt.unsupported(0x08A6C8F0u, 0x0518090Bu, "regimm? not lowered yet"); return;
L_08A6C8FC:
    rt.unsupported(0x08A6C900u, 0x16181306u, "control flow in delay slot"); return;
L_08A6C904:
    rt.unsupported(0x08A6C908u, 0x15110B0Au, "control flow in delay slot"); return;
L_08A6C90C:
    rt.unsupported(0x08A6C910u, 0x18140B0Du, "control flow in delay slot"); return;
L_08A6C914:
    rt.unsupported(0x08A6C918u, 0x0E141417u, "control flow in delay slot"); return;
L_08A6C91C:
    rt.unsupported(0x08A6C91Cu, 0x040F0704u, "regimm? not lowered yet"); return;
L_08A6C928:
    rt.unsupported(0x08A6C92Cu, 0x0403160Cu, "control flow in delay slot"); return;
L_08A6C948:
    rt.unsupported(0x08A6C94Cu, 0x110E1514u, "control flow in delay slot"); return;
L_08A6C950:
    rt.unsupported(0x08A6C954u, 0x1217090Bu, "control flow in delay slot"); return;
L_08A6C958:
    rt.unsupported(0x08A6C95Cu, 0x150B0312u, "control flow in delay slot"); return;
L_08A6C960:
    rt.unsupported(0x08A6C964u, 0x11121004u, "control flow in delay slot"); return;
L_08A6C968:
    rt.unsupported(0x08A6C968u, 0x0407170Eu, "regimm? not lowered yet"); return;
L_08A6C974:
    rt.unsupported(0x08A6C978u, 0x0A0F0916u, "control flow in delay slot"); return;
L_08A6C97C:
    rt.unsupported(0x08A6C97Cu, 0x06050214u, "regimm? not lowered yet"); return;
L_08A6C984:
    rt.unsupported(0x08A6C988u, 0x130D0107u, "control flow in delay slot"); return;
L_08A6C988:
    { const bool branch_taken = aot_gpr[24] == aot_gpr[13];
    rt.unsupported(0x08A6C98Cu, 0x060B0410u, "regimm? not lowered yet"); return;
      if (branch_taken) {
          goto L_08A6CDA8;
      }
      goto L_08A6C990;
    }
L_08A6C98C:
    rt.unsupported(0x08A6C98Cu, 0x060B0410u, "regimm? not lowered yet"); return;
L_08A6C990:
    rt.unsupported(0x08A6C990u, 0x070A0D15u, "regimm? not lowered yet"); return;
L_08A6C99C:
    rt.unsupported(0x08A6C9A0u, 0x08040F15u, "control flow in delay slot"); return;
L_08A6C9A4:
    rt.unsupported(0x08A6C9A8u, 0x16150706u, "control flow in delay slot"); return;
L_08A6C9AC:
    rt.unsupported(0x08A6C9B0u, 0x0A131600u, "control flow in delay slot"); return;
L_08A6C9D8:
    rt.unsupported(0x08A6C9DCu, 0x0A131304u, "control flow in delay slot"); return;
L_08A6C9E0:
    rt.unsupported(0x08A6C9E0u, 0x050B0A09u, "regimm? not lowered yet"); return;
L_08A6C9F0:
    rt.unsupported(0x08A6C9F0u, 0x0214120Eu, "special? not lowered yet"); return;
L_08A6CA08:
    rt.unsupported(0x08A6CA08u, 0x06140A07u, "regimm? not lowered yet"); return;
L_08A6CA1C:
    rt.unsupported(0x08A6CA20u, 0x0A060504u, "control flow in delay slot"); return;
L_08A6CA24:
    rt.unsupported(0x08A6CA28u, 0x0B01000Au, "control flow in delay slot"); return;
L_08A6CA2C:
    rt.unsupported(0x08A6CA2Cu, 0x0203FF01u, "special? not lowered yet"); return;
L_08A6CA38:
    rt.unsupported(0x08A6CA38u, 0x040E0013u, "regimm? not lowered yet"); return;
L_08A6CA44:
    rt.unsupported(0x08A6CA48u, 0x0B08020Au, "control flow in delay slot"); return;
L_08A6CA4C:
    rt.unsupported(0x08A6CA50u, 0x08031314u, "control flow in delay slot"); return;
L_08A6CA5C:
    aot_gpr[31] = (0x08A6CA64u);
    rt.unsupported(0x08A6CA60u, 0x07041303u, "regimm? not lowered yet"); return;
    ctx.pc = 0x04382040u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6CA64u) goto L_08A6CA64;
    return;
L_08A6CA64:
    if (aot_gpr[15] == 0u) aot_gpr[1] = (aot_gpr[8]);
    rt.unsupported(0x08A6CA68u, 0x07080902u, "regimm? not lowered yet"); return;
L_08A6CA74:
    rt.unsupported(0x08A6CA78u, 0x0B021211u, "control flow in delay slot"); return;
L_08A6CA7C:
    rt.unsupported(0x08A6CA80u, 0x0A12130Eu, "control flow in delay slot"); return;
L_08A6CA88:
    rt.unsupported(0x08A6CA88u, 0x06050300u, "regimm? not lowered yet"); return;
L_08A6CA94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[24]) >= 0;
    aot_gpr[1] = (aot_gpr[8] << (aot_gpr[16] & 31u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0619_entry, 619u, 194u, 0x08A6FABCu>(ctx, &aot_mem); return;
      }
      goto L_08A6CA9C;
    }
L_08A6CA98:
    aot_gpr[1] = (aot_gpr[8] << (aot_gpr[16] & 31u));
    goto L_08A6CA9C;
L_08A6CA9C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[15];
    rt.unsupported(0x08A6CAA0u, 0x050C1201u, "regimm? not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 293u, 0x08A70EB0u>(ctx, &aot_mem); return;
      }
      goto L_08A6CAA4;
    }
L_08A6CAA4:
    rt.unsupported(0x08A6CAA8u, 0x0CFF0310u, "control flow in delay slot"); return;
L_08A6CAAC:
    rt.unsupported(0x08A6CAB0u, 0x0D0B0A00u, "control flow in delay slot"); return;
L_08A6CAB4:
    rt.unsupported(0x08A6CAB8u, 0x06100808u, "control flow in delay slot"); return;
L_08A6CABC:
    rt.unsupported(0x08A6CAC0u, 0x07050907u, "regimm? not lowered yet"); return;
    ctx.pc = 0x0844180Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6CAD4:
    aot_gpr[31] = (0x08A6CADCu);
    aot_gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 20u));
    ctx.pc = 0x001C400Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6CADCu) goto L_08A6CADC;
    return;
L_08A6CADC:
    (void)(aot_gpr[2] << (aot_gpr[8] & 31u));
    aot_gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[16] & 31u)));
    rt.unsupported(0x08A6CAE8u, 0x09040009u, "control flow in delay slot"); return;
L_08A6CAEC:
    rt.unsupported(0x08A6CAECu, 0x070F0910u, "regimm? not lowered yet"); return;
L_08A6CAFC:
    rt.unsupported(0x08A6CB00u, 0x0C05080Au, "control flow in delay slot"); return;
L_08A6CB04:
    aot_gpr[31] = (0x08A6CB0Cu);
    if (0u != 0u) aot_gpr[1] = (0u);
    ctx.pc = 0x08380020u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6CB0Cu) goto L_08A6CB0C;
    return;
L_08A6CB0C:
    rt.unsupported(0x08A6CB10u, 0x07FF000Au, "regimm? not lowered yet"); return;
    ctx.pc = 0x0C20040Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6CB40:
    rt.unsupported(0x08A6CB40u, 0x0706050Du, "regimm? not lowered yet"); return;
L_08A6CB70:
    rt.unsupported(0x08A6CB70u, 0x060C070Bu, "regimm? not lowered yet"); return;
L_08A6CB7C:
    aot_gpr[31] = (0x08A6CB84u);
    rt.unsupported(0x08A6CB80u, 0x050A0806u, "regimm? not lowered yet"); return;
    ctx.pc = 0x0824302Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6CB84u) goto L_08A6CB84;
    return;
L_08A6CB84:
    rt.unsupported(0x08A6CB84u, 0x00020801u, "special? not lowered yet"); return;
L_08A6CB90:
    rt.unsupported(0x08A6CB94u, 0x090A0400u, "control flow in delay slot"); return;
L_08A6CB98:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x04140408u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6CBA0:
    rt.unsupported(0x08A6CBA0u, 0x0408070Au, "regimm? not lowered yet"); return;
L_08A6CBCC:
    rt.unsupported(0x08A6CBD0u, 0x0B03070Au, "control flow in delay slot"); return;
L_08A6CBF4:
    rt.unsupported(0x08A6CBF4u, 0x07090B0Au, "regimm? not lowered yet"); return;
L_08A6CC18:
    rt.unsupported(0x08A6CC1Cu, 0x0809070Au, "control flow in delay slot"); return;
L_08A6CC3C:
    jump_target = aot_gpr[24];
    (void)(aot_gpr[9] >> 24u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CC5C:
    if (static_cast<std::int32_t>(aot_gpr[24]) < 0) {
    rt.unsupported(0x08A6CC60u, 0x01060205u, "special? not lowered yet"); return;
        goto L_08A6C870;
    }
    goto L_08A6CC64;
L_08A6CC64:
    rt.unsupported(0x08A6CC64u, 0x04070500u, "regimm? not lowered yet"); return;
L_08A6CC78:
    rt.unsupported(0x08A6CC78u, 0x07040605u, "regimm? not lowered yet"); return;
L_08A6CC88:
    rt.unsupported(0x08A6CC8Cu, 0x06020103u, "control flow in delay slot"); return;
L_08A6CC90:
    (void)(aot_gpr[31] << (aot_gpr[31] & 31u));
    if (static_cast<std::int32_t>(aot_gpr[16]) >= 0) {
    rt.unsupported(0x08A6CC98u, 0x01050201u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 31u, 0x08A6D498u>(ctx, &aot_mem); return;
    }
    goto L_08A6CC9C;
L_08A6CC9C:
    rt.unsupported(0x08A6CC9Cu, 0x04050006u, "regimm? not lowered yet"); return;
L_08A6CCA8:
    (void)(aot_gpr[5] << (aot_gpr[24] & 31u));
    if (static_cast<std::int32_t>(aot_gpr[8]) >= 0) {
    rt.unsupported(0x08A6CCB0u, 0x01020001u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 148u, 0x08A6DCB8u>(ctx, &aot_mem); return;
    }
    goto L_08A6CCB4;
L_08A6CCB4:
    (void)(aot_gpr[5] << 4u);
    (void)(0u << (0u & 31u));
    goto L_08A6CCBC;
L_08A6CCBC:
    (void)(aot_gpr[2] << (aot_gpr[24] & 31u));
    (void)(aot_gpr[31] << (aot_gpr[15] & 31u));
    { const bool branch_taken = static_cast<std::int32_t>(0u) >= 0;
    (void)(aot_gpr[3] << 4u);
      if (branch_taken) {
          goto L_08A6CCC8;
      }
      goto L_08A6CCCC;
    }
L_08A6CCC8:
    (void)(aot_gpr[3] << 4u);
    goto L_08A6CCCC;
L_08A6CCCC:
    rt.unsupported(0x08A6CCCCu, 0x00030201u, "special? not lowered yet"); return;
L_08A6CCD8:
    rt.unsupported(0x08A6CCD8u, 0x00FF0201u, "special? not lowered yet"); return;
L_08A6CCE4:
    rt.unsupported(0x08A6CCE4u, 0x00FFFF01u, "special? not lowered yet"); return;
L_08A6CCEC:
    rt.unsupported(0x08A6CCECu, 0x00FFFFFFu, "special? not lowered yet"); return;
L_08A6CCF0:
    rt.unsupported(0x08A6CCF4u, 0x089C2AECu, "control flow in delay slot"); return;
L_08A6CD44:
    rt.unsupported(0x08A6CD48u, 0x089C43D0u, "control flow in delay slot"); return;
L_08A6CD8C:
    rt.unsupported(0x08A6CD90u, 0x089C6964u, "control flow in delay slot"); return;
L_08A6CDA8:
    rt.unsupported(0x08A6CDACu, 0x089C6BC0u, "control flow in delay slot"); return;
L_08A6CDF0:
    rt.unsupported(0x08A6CDF4u, 0x089C73E4u, "control flow in delay slot"); return;
L_08A6CE18:
    rt.unsupported(0x08A6CE1Cu, 0x089C72D4u, "control flow in delay slot"); return;
L_08A6CE2C:
    rt.unsupported(0x08A6CE30u, 0x089C908Cu, "control flow in delay slot"); return;
L_08A6CE48:
    rt.unsupported(0x08A6CE4Cu, 0x089CE104u, "control flow in delay slot"); return;
L_08A6CEE4:
    rt.unsupported(0x08A6CEE8u, 0x089CFCD8u, "control flow in delay slot"); return;
L_08A6CEFC:
    rt.unsupported(0x08A6CF00u, 0x089D4E8Cu, "control flow in delay slot"); return;
L_08A6CF3C:
    rt.unsupported(0x08A6CF40u, 0x089D5CA0u, "control flow in delay slot"); return;
L_08A6CFBC:
    rt.unsupported(0x08A6CFC0u, 0x089DE4F0u, "control flow in delay slot"); return;
}

void recomp_unit_0616(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0616_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_616(Runtime &runtime) {
    runtime.register_generated_unit(616u, 0x08A6C000u, 4096u, &recomp_unit_0616, &recomp_unit_0616_entry);
    runtime.register_function(0x08A6C068u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C144u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C16Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C194u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C208u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C22Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C250u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C264u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C27Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C290u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C2ECu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C2F0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C310u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C32Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C330u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C338u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C34Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C350u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C36Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C374u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C390u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C398u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C3B4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C3BCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C3D8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C3E0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C3E8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C3FCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C404u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C420u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C428u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C444u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C44Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C468u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C470u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C48Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C494u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C498u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C4ACu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C4F0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C510u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C540u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C580u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C5B0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C5E4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C5ECu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C628u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C660u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C668u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C690u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C6D8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C6E0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C6E8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C6F0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C750u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C7ACu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C7BCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C7ECu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C7F0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C7F4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C7FCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C804u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C80Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C814u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C858u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C860u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C868u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C870u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C880u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C888u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C890u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C8ACu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C8B4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C8ECu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C8FCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C904u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C90Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C914u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C91Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C928u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C948u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C950u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C958u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C960u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C968u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C974u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C97Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C984u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C988u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C98Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C990u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C99Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C9A4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C9ACu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C9D8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C9E0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6C9F0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA08u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA1Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA24u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA2Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA38u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA44u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA4Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA5Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA64u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA74u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA7Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA88u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA94u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA98u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CA9Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CAA4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CAACu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CAB4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CABCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CAD4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CADCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CAECu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CAFCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB04u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB0Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB40u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB70u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB7Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB84u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB90u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CB98u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CBA0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CBCCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CBF4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC18u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC3Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC5Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC64u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC78u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC88u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC90u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CC9Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCA8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCB4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCBCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCC8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCCCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCD8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCE4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCECu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CCF0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CD44u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CD8Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CDA8u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CDF0u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CE18u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CE2Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CE48u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CEE4u, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CEFCu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CF3Cu, &recomp_unit_0616, "recomp_unit_0616");
    runtime.register_function(0x08A6CFBCu, &recomp_unit_0616, "recomp_unit_0616");
}
} // namespace psprecomp
