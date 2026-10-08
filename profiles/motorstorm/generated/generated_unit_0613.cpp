#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0613[882] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0,
    0, 0, 79, 0, 80, 0, 81, 82, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 89, 90, 0, 91,
};
void recomp_unit_0613_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A69000u;
        entry_id = (entry_delta < 3528u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0613[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A69000;
    case 2u: goto L_08A69018;
    case 3u: goto L_08A69024;
    case 4u: goto L_08A69030;
    case 5u: goto L_08A6903C;
    case 6u: goto L_08A69058;
    case 7u: goto L_08A69064;
    case 8u: goto L_08A69070;
    case 9u: goto L_08A6907C;
    case 10u: goto L_08A695F8;
    case 11u: goto L_08A69610;
    case 12u: goto L_08A69620;
    case 13u: goto L_08A69628;
    case 14u: goto L_08A69640;
    case 15u: goto L_08A69654;
    case 16u: goto L_08A6965C;
    case 17u: goto L_08A69674;
    case 18u: goto L_08A69684;
    case 19u: goto L_08A69690;
    case 20u: goto L_08A696A8;
    case 21u: goto L_08A696BC;
    case 22u: goto L_08A696C4;
    case 23u: goto L_08A696DC;
    case 24u: goto L_08A696F0;
    case 25u: goto L_08A696F8;
    case 26u: goto L_08A69710;
    case 27u: goto L_08A6971C;
    case 28u: goto L_08A69724;
    case 29u: goto L_08A69728;
    case 30u: goto L_08A6973C;
    case 31u: goto L_08A69748;
    case 32u: goto L_08A69788;
    case 33u: goto L_08A697A8;
    case 34u: goto L_08A697B0;
    case 35u: goto L_08A697B8;
    case 36u: goto L_08A697C0;
    case 37u: goto L_08A697EC;
    case 38u: goto L_08A697F0;
    case 39u: goto L_08A69800;
    case 40u: goto L_08A69810;
    case 41u: goto L_08A69814;
    case 42u: goto L_08A69824;
    case 43u: goto L_08A69830;
    case 44u: goto L_08A69840;
    case 45u: goto L_08A69848;
    case 46u: goto L_08A69854;
    case 47u: goto L_08A69880;
    case 48u: goto L_08A69920;
    case 49u: goto L_08A69940;
    case 50u: goto L_08A69948;
    case 51u: goto L_08A6994C;
    case 52u: goto L_08A69974;
    case 53u: goto L_08A699B0;
    case 54u: goto L_08A699B8;
    case 55u: goto L_08A699C0;
    case 56u: goto L_08A699C4;
    case 57u: goto L_08A699E8;
    case 58u: goto L_08A699F8;
    case 59u: goto L_08A699FC;
    case 60u: goto L_08A69A38;
    case 61u: goto L_08A69A6C;
    case 62u: goto L_08A69A78;
    case 63u: goto L_08A69AB8;
    case 64u: goto L_08A69AC0;
    case 65u: goto L_08A69AC8;
    case 66u: goto L_08A69B00;
    case 67u: goto L_08A69B0C;
    case 68u: goto L_08A69B18;
    case 69u: goto L_08A69B28;
    case 70u: goto L_08A69B2C;
    case 71u: goto L_08A69B3C;
    case 72u: goto L_08A69C7C;
    case 73u: goto L_08A69CC8;
    case 74u: goto L_08A69CCC;
    case 75u: goto L_08A69CD4;
    case 76u: goto L_08A69CDC;
    case 77u: goto L_08A69CF0;
    case 78u: goto L_08A69CF8;
    case 79u: goto L_08A69D08;
    case 80u: goto L_08A69D10;
    case 81u: goto L_08A69D18;
    case 82u: goto L_08A69D1C;
    case 83u: goto L_08A69D20;
    case 84u: goto L_08A69D34;
    case 85u: goto L_08A69D70;
    case 86u: goto L_08A69D84;
    case 87u: goto L_08A69DA8;
    case 88u: goto L_08A69DB4;
    case 89u: goto L_08A69DB8;
    case 90u: goto L_08A69DBC;
    case 91u: goto L_08A69DC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A69000:
    rt.unsupported(0x08A69000u, 0x61466E6Fu, "vfpu0 not lowered yet"); return;
L_08A69018:
    rt.unsupported(0x08A69018u, 0x69686556u, "unknown not lowered yet"); return;
L_08A69024:
    ctx.execute_vfpu_vcmp_ct<70u, 97u, 1u, 5u>();
    rt.unsupported(0x08A69028u, 0x676E696Cu, "vfpu1 not lowered yet"); return;
L_08A69030:
    rt.unsupported(0x08A69030u, 0x69686556u, "unknown not lowered yet"); return;
L_08A6903C:
    rt.unsupported(0x08A6903Cu, 0x69746973u, "unknown not lowered yet"); return;
L_08A69058:
    rt.unsupported(0x08A69058u, 0x69686556u, "unknown not lowered yet"); return;
L_08A69064:
    rt.unsupported(0x08A69064u, 0x6863614Du, "unknown not lowered yet"); return;
L_08A69070:
    rt.unsupported(0x08A69070u, 0x69686556u, "unknown not lowered yet"); return;
L_08A6907C:
    rt.unsupported(0x08A6907Cu, 0x61745365u, "vfpu0 not lowered yet"); return;
L_08A695F8:
    rt.unsupported(0x08A695F8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A69610:
    ctx.execute_vfpu_vcmp_ct<83u, 112u, 1u, 2u>();
    aot_gpr[8] = (aot_gpr[19] < static_cast<std::uint32_t>(29537) ? 1u : 0u);
    rt.unsupported(0x08A6961Cu, 0x5F585450u, "control flow in delay slot"); return;
L_08A69620:
    rt.unsupported(0x08A69620u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A69628:
    rt.unsupported(0x08A69628u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A69640:
    rt.unsupported(0x08A69640u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A69654:
    rt.unsupported(0x08A69654u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A6965C:
    rt.unsupported(0x08A6965Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A69674:
    rt.unsupported(0x08A69674u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A69684:
    rt.unsupported(0x08A69684u, 0x4D5F5854u, "unknown not lowered yet"); return;
L_08A69690:
    rt.unsupported(0x08A69690u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A696A8:
    ctx.execute_vfpu_compare3(114u, 68u, 114u, 1u, 6u);
    rt.unsupported(0x08A696ACu, 0x63537370u, "vfpu0 not lowered yet"); return;
L_08A696BC:
    rt.unsupported(0x08A696BCu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A696C4:
    rt.unsupported(0x08A696C4u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A696DC:
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 70u, 1u, 5u>();
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(27489) ? 1u : 0u);
    rt.unsupported(0x08A696ECu, 0x5F585450u, "control flow in delay slot"); return;
L_08A696F0:
    rt.unsupported(0x08A696F0u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A696F8:
    rt.unsupported(0x08A696F8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A69710:
    ctx.execute_vfpu_vscl_ct<99u, 114u, 101u, 1u>();
    rt.unsupported(0x08A69718u, 0x54505F50u, "control flow in delay slot"); return;
L_08A6971C:
    rt.unsupported(0x08A6971Cu, 0x414D5F58u, "unknown not lowered yet"); return;
L_08A69724:
    rt.unsupported(0x08A69724u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A69728:
    rt.unsupported(0x08A69728u, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A6973C:
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    rt.unsupported(0x08A69744u, 0x505F5053u, "control flow in delay slot"); return;
L_08A69748:
    rt.unsupported(0x08A69748u, 0x4D5F5854u, "unknown not lowered yet"); return;
L_08A69788:
    rt.unsupported(0x08A69788u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A697A8:
    if (aot_gpr[2] != aot_gpr[16]) {
    rt.unsupported(0x08A697ACu, 0x414D5F58u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 33u, 0x08A814ECu>(ctx, &aot_mem); return;
    }
    goto L_08A697B0;
L_08A697B0:
    jump_target = 0u;
    aot_gpr[9] = (0x08A697B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A697B8u) goto L_08A697B8;
    return;
L_08A697B8:
    rt.unsupported(0x08A697B8u, 0x6978655Fu, "unknown not lowered yet"); return;
L_08A697C0:
    rt.unsupported(0x08A697C0u, 0x6362696Cu, "vfpu0 not lowered yet"); return;
L_08A697EC:
    rt.unsupported(0x08A697F0u, 0x72657355u, "unknown not lowered yet"); return;
    ctx.pc = 0x024473D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A697F0:
    rt.unsupported(0x08A697F0u, 0x72657355u, "unknown not lowered yet"); return;
L_08A69800:
    rt.unsupported(0x08A69800u, 0x614E6E55u, "vfpu0 not lowered yet"); return;
L_08A69810:
    // nop
    goto L_08A69814;
L_08A69814:
    rt.unsupported(0x08A69814u, 0x614E6E55u, "vfpu0 not lowered yet"); return;
L_08A69824:
    rt.unsupported(0x08A69824u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08A69830:
    rt.unsupported(0x08A69830u, 0x614E6E55u, "vfpu0 not lowered yet"); return;
L_08A69840:
    rt.unsupported(0x08A69840u, 0x6863614Du, "unknown not lowered yet"); return;
L_08A69848:
    rt.unsupported(0x08A6984Cu, 0x08918BA4u, "control flow in delay slot"); return;
L_08A69854:
    rt.unsupported(0x08A69858u, 0x089189BCu, "control flow in delay slot"); return;
L_08A69880:
    (void)(static_cast<std::int32_t>(aot_gpr[1]) > static_cast<std::int32_t>(aot_gpr[9]) ? aot_gpr[1] : aot_gpr[9]);
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    aot_gpr[21] = (0u & 12289u);
    aot_gpr[11] = (0u & 12297u);
    aot_gpr[15] = (0u & 12301u);
    aot_gpr[25] = (0u & 12305u);
    aot_gpr[31] = (0u & 12311u);
    rt.unsupported(0x08A6989Cu, 0x201D2019u, "unknown not lowered yet"); return;
L_08A69920:
    rt.unsupported(0x08A69920u, 0x005B0028u, "special? not lowered yet"); return;
L_08A69940:
    // nop
    // nop
    goto L_08A69948;
L_08A69948:
    // nop
    goto L_08A6994C;
L_08A6994C:
    rt.unsupported(0x08A6994Cu, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08A69974:
    rt.unsupported(0x08A69974u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08A699B0:
    rt.unsupported(0x08A699B0u, 0x00000A0Du, "special? not lowered yet"); return;
L_08A699B8:
    aot_gpr[15] = (aot_gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A699BCu, 0x00000073u, "special? not lowered yet"); return;
L_08A699C0:
    // nop
    goto L_08A699C4;
L_08A699C4:
    rt.unsupported(0x08A699C4u, 0x206E694Du, "unknown not lowered yet"); return;
L_08A699E8:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    rt.unsupported(0x08A699F0u, 0x736C6166u, "unknown not lowered yet"); return;
L_08A699F8:
    aot_gpr[12] = (0u | 0u);
    goto L_08A699FC;
L_08A699FC:
    aot_gpr[12] = (0u | 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 3u, 6u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69A00u, 0x00662520u); return; } }
    // nop
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(26149));
    (void)(0u ^ 0u);
    // nop
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69A14u, 0x00000020u); return; } }
    rt.unsupported(0x08A69A1Cu, 0x00003D0Du, "special? not lowered yet"); return;
    ctx.pc = 0x0824B080u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A69A38:
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    rt.unsupported(0x08A69A3Cu, 0x423A3A6Cu, "unknown not lowered yet"); return;
L_08A69A6C:
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    if (aot_gpr[17] != aot_gpr[26]) {
    ctx.execute_vfpu_vhdp(101u, 114u, 105u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 39u, 0x08A78424u>(ctx, &aot_mem); return;
    }
    goto L_08A69A78;
L_08A69A78:
    rt.unsupported(0x08A69A78u, 0x74614D79u, "unknown not lowered yet"); return;
L_08A69AB8:
    if (aot_gpr[18] == aot_gpr[4]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 84u, 0x08A7BBE0u>(ctx, &aot_mem); return;
    }
    goto L_08A69AC0;
L_08A69AC0:
    if (aot_gpr[2] != aot_gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 146u, 0x08A7ABE8u>(ctx, &aot_mem); return;
    }
    goto L_08A69AC8;
L_08A69AC8:
    rt.unsupported(0x08A69AC8u, 0x444E4549u, "unsupported CFC1 control register"); return;
    // nop
    rt.unsupported(0x08A69AD4u, 0x08927944u, "control flow in delay slot"); return;
L_08A69B00:
    rt.unsupported(0x08A69B00u, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08A69B0C:
    rt.unsupported(0x08A69B0Cu, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08A69B18:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08A69B1Cu, 0x68546D61u, "unknown not lowered yet"); return;
L_08A69B28:
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[1]) < static_cast<std::int32_t>(aot_gpr[19]) ? aot_gpr[1] : aot_gpr[19]);
    goto L_08A69B2C;
L_08A69B2C:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08A69B30u, 0x74536D61u, "unknown not lowered yet"); return;
L_08A69B3C:
    // nop
    // nop
    // nop
    // nop
    // nop
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69B50u, 0x00000020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69B54u, 0x00000020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69B58u, 0x00000020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69B5Cu, 0x00000020u); return; } }
    jump_target = 0u;
    (void)(0u << 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69C7C:
    aot_gpr[21] = (0u << (0u & 31u));
    { const bool signed_ok = ctx.execute_signed_sub(10u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69C80u, 0x00005622u); return; } }
    ctx.hi = 0u;
    aot_gpr[23] = (0u << 14u);
    aot_gpr[11] = (0u << 23u);
    { const bool signed_ok = ctx.execute_signed_add(5u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A69C90u, 0x00002EE0u); return; } }
    aot_gpr[15] = (0u << 20u);
    aot_gpr[7] = (0u << 26u);
    aot_gpr[3] = (0u << 29u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 2u);
    // nop
    rt.unsupported(0x08A69CC0u, 0x477FFF00u, "cop1? not lowered yet"); return;
L_08A69CC8:
    // nop
    goto L_08A69CCC;
L_08A69CCC:
    rt.unsupported(0x08A69CCCu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08A69CD4:
    aot_gpr[16] = (aot_gpr[17] ^ 29549u);
    // nop
    goto L_08A69CDC;
L_08A69CDC:
    ctx.execute_vfpu_vscl_ct<77u, 117u, 116u, 1u>();
    rt.unsupported(0x08A69CE0u, 0x00000078u, "special? not lowered yet"); return;
L_08A69CF0:
    if (aot_gpr[2] != aot_gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 165u, 0x08A7AE08u>(ctx, &aot_mem); return;
    }
    goto L_08A69CF8;
L_08A69CF8:
    rt.unsupported(0x08A69CF8u, 0x00000001u, "special? not lowered yet"); return;
L_08A69D08:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A69D0Cu, 0x4D41475Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0633_entry, 633u, 86u, 0x08A7DDC8u>(ctx, &aot_mem); return;
    }
    goto L_08A69D10;
L_08A69D10:
    rt.unsupported(0x08A69D14u, 0x52494452u, "control flow in delay slot"); return;
L_08A69D18:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A69D1C;
L_08A69D1C:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A69D20;
L_08A69D20:
    ctx.execute_vfpu_vscl_ct<77u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 97u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<58u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 1u>(vfpu_d); }
    if (aot_gpr[27] == aot_gpr[15]) {
    rt.unsupported(0x08A69D30u, 0x69746174u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 99u, 0x08A7EEC0u>(ctx, &aot_mem); return;
    }
    goto L_08A69D34;
L_08A69D34:
    rt.unsupported(0x08A69D34u, 0x73694463u, "unknown not lowered yet"); return;
L_08A69D70:
    ctx.execute_vfpu_vscl_ct<77u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 97u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<58u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 1u>(vfpu_d); }
    if (aot_gpr[27] == aot_gpr[15]) {
    rt.unsupported(0x08A69D80u, 0x69746174u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 101u, 0x08A7EF10u>(ctx, &aot_mem); return;
    }
    goto L_08A69D84;
L_08A69D84:
    rt.unsupported(0x08A69D84u, 0x73694463u, "unknown not lowered yet"); return;
L_08A69DA8:
    rt.unsupported(0x08A69DA8u, 0x22A37009u, "unknown not lowered yet"); return;
L_08A69DB4:
    rt.unsupported(0x08A69DB4u, 0xB39C076Au, "unknown not lowered yet"); return;
L_08A69DB8:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08A69DBC;
L_08A69DBC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    goto L_08A69DC4;
L_08A69DC4:
    rt.unsupported(0x08A69DC4u, 0x41544144u, "unknown not lowered yet"); return;
}

void recomp_unit_0613(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0613_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_613(Runtime &runtime) {
    runtime.register_generated_unit(613u, 0x08A69000u, 4096u, &recomp_unit_0613, &recomp_unit_0613_entry);
    runtime.register_function(0x08A69000u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69018u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69024u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69030u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A6903Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69058u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69064u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69070u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A6907Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A695F8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69610u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69620u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69628u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69640u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69654u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A6965Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69674u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69684u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69690u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A696A8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A696BCu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A696C4u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A696DCu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A696F0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A696F8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69710u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A6971Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69724u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69728u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A6973Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69748u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69788u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A697A8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A697B0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A697B8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A697C0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A697ECu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A697F0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69800u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69810u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69814u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69824u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69830u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69840u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69848u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69854u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69880u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69920u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69940u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69948u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A6994Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69974u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699B0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699B8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699C0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699C4u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699E8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699F8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A699FCu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69A38u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69A6Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69A78u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69AB8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69AC0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69AC8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69B00u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69B0Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69B18u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69B28u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69B2Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69B3Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69C7Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69CC8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69CCCu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69CD4u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69CDCu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69CF0u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69CF8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D08u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D10u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D18u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D1Cu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D20u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D34u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D70u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69D84u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69DA8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69DB4u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69DB8u, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69DBCu, &recomp_unit_0613, "recomp_unit_0613");
    runtime.register_function(0x08A69DC4u, &recomp_unit_0613, "recomp_unit_0613");
}
} // namespace psprecomp
