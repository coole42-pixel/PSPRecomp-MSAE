#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0631[968] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 50, 0, 0, 51, 0, 0, 0, 52, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 59, 0, 0, 0, 0, 60, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0,
    0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 97, 0, 0, 0, 98,
};
void recomp_unit_0631_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A7B000u;
        entry_id = (entry_delta < 3872u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0631[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7B000;
    case 2u: goto L_08A7B098;
    case 3u: goto L_08A7B0E8;
    case 4u: goto L_08A7B140;
    case 5u: goto L_08A7B178;
    case 6u: goto L_08A7B1B8;
    case 7u: goto L_08A7B1C0;
    case 8u: goto L_08A7B1CC;
    case 9u: goto L_08A7B28C;
    case 10u: goto L_08A7B2DC;
    case 11u: goto L_08A7B338;
    case 12u: goto L_08A7B340;
    case 13u: goto L_08A7B360;
    case 14u: goto L_08A7B450;
    case 15u: goto L_08A7B468;
    case 16u: goto L_08A7B504;
    case 17u: goto L_08A7B52C;
    case 18u: goto L_08A7B534;
    case 19u: goto L_08A7B568;
    case 20u: goto L_08A7B584;
    case 21u: goto L_08A7B590;
    case 22u: goto L_08A7B5A4;
    case 23u: goto L_08A7B5AC;
    case 24u: goto L_08A7B5B4;
    case 25u: goto L_08A7B5D4;
    case 26u: goto L_08A7B5D8;
    case 27u: goto L_08A7B5F0;
    case 28u: goto L_08A7B600;
    case 29u: goto L_08A7B608;
    case 30u: goto L_08A7B698;
    case 31u: goto L_08A7B6A4;
    case 32u: goto L_08A7B6B0;
    case 33u: goto L_08A7B6C8;
    case 34u: goto L_08A7B6D8;
    case 35u: goto L_08A7B6FC;
    case 36u: goto L_08A7B720;
    case 37u: goto L_08A7B734;
    case 38u: goto L_08A7B73C;
    case 39u: goto L_08A7B74C;
    case 40u: goto L_08A7B780;
    case 41u: goto L_08A7B7A8;
    case 42u: goto L_08A7B7C4;
    case 43u: goto L_08A7B7D4;
    case 44u: goto L_08A7B7E4;
    case 45u: goto L_08A7B7F4;
    case 46u: goto L_08A7B804;
    case 47u: goto L_08A7B814;
    case 48u: goto L_08A7B824;
    case 49u: goto L_08A7B834;
    case 50u: goto L_08A7B838;
    case 51u: goto L_08A7B844;
    case 52u: goto L_08A7B854;
    case 53u: goto L_08A7B858;
    case 54u: goto L_08A7B868;
    case 55u: goto L_08A7B878;
    case 56u: goto L_08A7B88C;
    case 57u: goto L_08A7B89C;
    case 58u: goto L_08A7B8AC;
    case 59u: goto L_08A7B8B0;
    case 60u: goto L_08A7B8C4;
    case 61u: goto L_08A7B8C8;
    case 62u: goto L_08A7B8D8;
    case 63u: goto L_08A7B98C;
    case 64u: goto L_08A7B99C;
    case 65u: goto L_08A7B9A8;
    case 66u: goto L_08A7B9B4;
    case 67u: goto L_08A7B9CC;
    case 68u: goto L_08A7BA08;
    case 69u: goto L_08A7BA48;
    case 70u: goto L_08A7BA5C;
    case 71u: goto L_08A7BA70;
    case 72u: goto L_08A7BA84;
    case 73u: goto L_08A7BA98;
    case 74u: goto L_08A7BAB8;
    case 75u: goto L_08A7BAF0;
    case 76u: goto L_08A7BAF8;
    case 77u: goto L_08A7BB0C;
    case 78u: goto L_08A7BB18;
    case 79u: goto L_08A7BB28;
    case 80u: goto L_08A7BB38;
    case 81u: goto L_08A7BB48;
    case 82u: goto L_08A7BB80;
    case 83u: goto L_08A7BBC0;
    case 84u: goto L_08A7BBE0;
    case 85u: goto L_08A7BD5C;
    case 86u: goto L_08A7BDA4;
    case 87u: goto L_08A7BDD0;
    case 88u: goto L_08A7BDFC;
    case 89u: goto L_08A7BE0C;
    case 90u: goto L_08A7BE20;
    case 91u: goto L_08A7BE44;
    case 92u: goto L_08A7BE54;
    case 93u: goto L_08A7BEA0;
    case 94u: goto L_08A7BEB0;
    case 95u: goto L_08A7BED0;
    case 96u: goto L_08A7BF00;
    case 97u: goto L_08A7BF0C;
    case 98u: goto L_08A7BF1C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7B000:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    jump_target = 0u;
    // vflush: architectural no-op that retains VFPU prefixes
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B098:
    rt.unsupported(0x08A7B09Cu, 0x08A6C44Cu, "control flow in delay slot"); return;
L_08A7B0E8:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CCDD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B140:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CD240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B178:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CD5F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B1B8:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CD910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B1C0:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CD980u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B1CC:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CD9E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B28C:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CE2E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B2DC:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CE650u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B338:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CEA80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B340:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CEAF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B360:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029CEC60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B450:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    rt.unsupported(0x08A7B458u, 0x00000008u, "control flow in delay slot"); return;
L_08A7B468:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A7B500u, 0x00007530u, "special? not lowered yet"); return;
L_08A7B504:
    rt.unsupported(0x08A7B504u, 0x755F7472u, "unknown not lowered yet"); return;
L_08A7B52C:
    rt.unsupported(0x08A7B530u, 0x08A746B4u, "control flow in delay slot"); return;
L_08A7B534:
    rt.unsupported(0x08A7B538u, 0x08A746D4u, "control flow in delay slot"); return;
L_08A7B568:
    rt.unsupported(0x08A7B56Cu, 0x08A74A08u, "control flow in delay slot"); return;
L_08A7B584:
    rt.unsupported(0x08A7B588u, 0x08A74B58u, "control flow in delay slot"); return;
L_08A7B590:
    rt.unsupported(0x08A7B590u, 0x44434241u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A7B594u, 0x48474645u, "cop2/vfpu not lowered yet"); return;
L_08A7B5A4:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    rt.unsupported(0x08A7B5A8u, 0x62615A59u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A90EFCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7B5AC;
L_08A7B5AC:
    ctx.execute_vfpu_vhdp(99u, 100u, 101u, 1u);
    rt.unsupported(0x08A7B5B0u, 0x6A696867u, "unknown not lowered yet"); return;
L_08A7B5B4:
    rt.unsupported(0x08A7B5B4u, 0x6E6D6C6Bu, "vfpu3 not lowered yet"); return;
L_08A7B5D4:
    // nop
    goto L_08A7B5D8;
L_08A7B5D8:
    // nop
    rt.unsupported(0x08A7B5E0u, 0x089EFC2Cu, "control flow in delay slot"); return;
L_08A7B5F0:
    // nop
    rt.unsupported(0x08A7B5F8u, 0x089F14C8u, "control flow in delay slot"); return;
L_08A7B600:
    rt.unsupported(0x08A7B604u, 0x089F19D8u, "control flow in delay slot"); return;
L_08A7B608:
    rt.unsupported(0x08A7B60Cu, 0x089F1A38u, "control flow in delay slot"); return;
L_08A7B698:
    // nop
    rt.unsupported(0x08A7B6A0u, 0x089F33E0u, "control flow in delay slot"); return;
L_08A7B6A4:
    // nop
    rt.unsupported(0x08A7B6ACu, 0x089F392Cu, "control flow in delay slot"); return;
L_08A7B6B0:
    // nop
    rt.unsupported(0x08A7B6B8u, 0x089F479Cu, "control flow in delay slot"); return;
L_08A7B6C8:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7B6D8;
L_08A7B6D8:
    rt.unsupported(0x08A7B6DCu, 0x00000005u, "special? not lowered yet"); return;
    ctx.pc = 0x029B7700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B6FC:
    (void)(0u >> (0u & 31u));
    ctx.pc = 0x029B7760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B720:
    rt.unsupported(0x08A7B724u, 0x08A6DF04u, "control flow in delay slot"); return;
L_08A7B734:
    rt.unsupported(0x08A7B738u, 0x08A6DF70u, "control flow in delay slot"); return;
L_08A7B73C:
    rt.unsupported(0x08A7B740u, 0x08A6DFD0u, "control flow in delay slot"); return;
L_08A7B74C:
    rt.unsupported(0x08A7B750u, 0x08A6E02Cu, "control flow in delay slot"); return;
L_08A7B780:
    rt.unsupported(0x08A7B784u, 0x08A6E718u, "control flow in delay slot"); return;
L_08A7B7A8:
    // nop
    rt.unsupported(0x08A7B7ACu, 0x00000001u, "special? not lowered yet"); return;
L_08A7B7C4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    rt.unsupported(0x08A7B7CCu, 0x00000009u, "control flow in delay slot"); return;
L_08A7B7D4:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08A7B7D8u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08A7B7E4:
    rt.memory().memory_barrier();
    (void)(ctx.hi);
    ctx.hi = 0u;
    (void)(ctx.lo);
    goto L_08A7B7F4;
L_08A7B7F4:
    ctx.lo = 0u;
    rt.unsupported(0x08A7B7F8u, 0x00000014u, "special? not lowered yet"); return;
L_08A7B804:
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    goto L_08A7B814;
L_08A7B814:
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    // nop
    // nop
    goto L_08A7B824;
L_08A7B824:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7B834;
L_08A7B834:
    // nop
    goto L_08A7B838;
L_08A7B838:
    // nop
    rt.unsupported(0x08A7B840u, 0x08A03784u, "control flow in delay slot"); return;
L_08A7B844:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7B854;
L_08A7B854:
    // nop
    goto L_08A7B858;
L_08A7B858:
    rt.unsupported(0x08A7B858u, 0x00000001u, "special? not lowered yet"); return;
L_08A7B868:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u << (0u & 31u));
    ctx.pc = 0x029BAEF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B878:
    rt.unsupported(0x08A7B878u, 0x00000005u, "special? not lowered yet"); return;
L_08A7B88C:
    rt.unsupported(0x08A7B890u, 0x00000008u, "control flow in delay slot"); return;
L_08A7B89C:
    if (0u == 0u) (void)(0u);
    ctx.pc = 0x029BB050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B8AC:
    rt.unsupported(0x08A7B8B0u, 0x00FFFFFFu, "special? not lowered yet"); return;
    ctx.pc = 0x029BB100u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7B8B0:
    rt.unsupported(0x08A7B8B0u, 0x00FFFFFFu, "special? not lowered yet"); return;
L_08A7B8C4:
    // nop
    goto L_08A7B8C8;
L_08A7B8C8:
    // nop
    rt.unsupported(0x08A7B8D0u, 0x08A0E970u, "control flow in delay slot"); return;
L_08A7B8D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7B98C;
L_08A7B98C:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7B99C;
L_08A7B99C:
    // nop
    // nop
    // nop
    goto L_08A7B9A8;
L_08A7B9A8:
    rt.unsupported(0x08A7B9ACu, 0x08A6FA28u, "control flow in delay slot"); return;
L_08A7B9B4:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A7B9C8u, 0x00000001u, "special? not lowered yet"); return;
L_08A7B9CC:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    ctx.pc = 0x029C0160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BA08:
    // nop
    // nop
    // nop
    ctx.pc = 0x029C3E40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BA48:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    ctx.pc = 0x029C3F60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BA5C:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    ctx.pc = 0x029C3FA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BA70:
    // nop
    ctx.pc = 0x029C3FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BA84:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    ctx.pc = 0x029C4090u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BA98:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    ctx.pc = 0x029C4110u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BAB8:
    // nop
    rt.unsupported(0x08A7BAC0u, 0x08A5A6F4u, "control flow in delay slot"); return;
L_08A7BAF0:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7BAF4u, 0x00000020u); return; } }
    ctx.pc = 0x02A19E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BAF8:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x028B6C80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BB0C:
    // nop
    rt.unsupported(0x08A7BB10u, 0x00000030u, "special? not lowered yet"); return;
L_08A7BB18:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x028B6C80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BB28:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x028B6C80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BB38:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7BB3Cu, 0x00000020u); return; } }
    ctx.pc = 0x02A19E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BB48:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x028B6C80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BB80:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    rt.unsupported(0x08A7BB88u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08A7BBC0:
    // nop
    rt.unsupported(0x08A7BBC8u, 0x08A7BDFCu, "control flow in delay slot"); return;
L_08A7BBE0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029C87C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BD5C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BDA4;
L_08A7BDA4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BDD0;
L_08A7BDD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BDFC;
L_08A7BDFC:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BE0C;
L_08A7BE0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BE20;
L_08A7BE20:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BE44;
L_08A7BE44:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BE54;
L_08A7BE54:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7BEA0;
L_08A7BEA0:
    // nop
    // nop
    // nop
    rt.unsupported(0x08A7BEB0u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x029EEF00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7BEB0:
    rt.unsupported(0x08A7BEB0u, 0x00000001u, "special? not lowered yet"); return;
L_08A7BED0:
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    (void)(0u >> 0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    goto L_08A7BF00;
L_08A7BF00:
    if (0u == 0u) (void)(0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08A7BF0C;
L_08A7BF0C:
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    if (0u == 0u) (void)(0u);
    goto L_08A7BF1C;
L_08A7BF1C:
    (void)(0u >> (0u & 31u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08A7BF44u, 0x00000005u, "special? not lowered yet"); return;
}

void recomp_unit_0631(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0631_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_631(Runtime &runtime) {
    runtime.register_generated_unit(631u, 0x08A7B000u, 4096u, &recomp_unit_0631, &recomp_unit_0631_entry);
    runtime.register_function(0x08A7B000u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B098u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B0E8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B140u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B178u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B1B8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B1C0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B1CCu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B28Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B2DCu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B338u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B340u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B360u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B450u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B468u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B504u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B52Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B534u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B568u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B584u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B590u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B5A4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B5ACu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B5B4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B5D4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B5D8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B5F0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B600u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B608u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B698u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B6A4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B6B0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B6C8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B6D8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B6FCu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B720u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B734u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B73Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B74Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B780u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B7A8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B7C4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B7D4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B7E4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B7F4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B804u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B814u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B824u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B834u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B838u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B844u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B854u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B858u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B868u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B878u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B88Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B89Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B8ACu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B8B0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B8C4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B8C8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B8D8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B98Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B99Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B9A8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B9B4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7B9CCu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BA08u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BA48u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BA5Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BA70u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BA84u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BA98u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BAB8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BAF0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BAF8u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BB0Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BB18u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BB28u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BB38u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BB48u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BB80u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BBC0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BBE0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BD5Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BDA4u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BDD0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BDFCu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BE0Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BE20u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BE44u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BE54u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BEA0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BEB0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BED0u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BF00u, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BF0Cu, &recomp_unit_0631, "recomp_unit_0631");
    runtime.register_function(0x08A7BF1Cu, &recomp_unit_0631, "recomp_unit_0631");
}
} // namespace psprecomp
