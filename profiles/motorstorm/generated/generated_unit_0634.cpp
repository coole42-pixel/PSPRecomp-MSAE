#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0634[1001] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0,
    0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 15, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 70, 0, 71, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105,
};
void recomp_unit_0634_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A7E030u;
        entry_id = (entry_delta < 4004u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0634[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7E030;
    case 2u: goto L_08A7E034;
    case 3u: goto L_08A7E048;
    case 4u: goto L_08A7E070;
    case 5u: goto L_08A7E094;
    case 6u: goto L_08A7E0C0;
    case 7u: goto L_08A7E0D8;
    case 8u: goto L_08A7E118;
    case 9u: goto L_08A7E158;
    case 10u: goto L_08A7E190;
    case 11u: goto L_08A7E1A8;
    case 12u: goto L_08A7E1B4;
    case 13u: goto L_08A7E1B8;
    case 14u: goto L_08A7E22C;
    case 15u: goto L_08A7E238;
    case 16u: goto L_08A7E23C;
    case 17u: goto L_08A7E244;
    case 18u: goto L_08A7E270;
    case 19u: goto L_08A7E28C;
    case 20u: goto L_08A7E2A4;
    case 21u: goto L_08A7E2C0;
    case 22u: goto L_08A7E2D8;
    case 23u: goto L_08A7E2E4;
    case 24u: goto L_08A7E324;
    case 25u: goto L_08A7E354;
    case 26u: goto L_08A7E35C;
    case 27u: goto L_08A7E364;
    case 28u: goto L_08A7E390;
    case 29u: goto L_08A7E3A4;
    case 30u: goto L_08A7E3E4;
    case 31u: goto L_08A7E3F4;
    case 32u: goto L_08A7E424;
    case 33u: goto L_08A7E42C;
    case 34u: goto L_08A7E440;
    case 35u: goto L_08A7E464;
    case 36u: goto L_08A7E4A4;
    case 37u: goto L_08A7E4E4;
    case 38u: goto L_08A7E524;
    case 39u: goto L_08A7E544;
    case 40u: goto L_08A7E564;
    case 41u: goto L_08A7E5B4;
    case 42u: goto L_08A7E63C;
    case 43u: goto L_08A7E664;
    case 44u: goto L_08A7E68C;
    case 45u: goto L_08A7E69C;
    case 46u: goto L_08A7E6B4;
    case 47u: goto L_08A7E6D8;
    case 48u: goto L_08A7E704;
    case 49u: goto L_08A7E708;
    case 50u: goto L_08A7E73C;
    case 51u: goto L_08A7E740;
    case 52u: goto L_08A7E74C;
    case 53u: goto L_08A7E760;
    case 54u: goto L_08A7E78C;
    case 55u: goto L_08A7E7B8;
    case 56u: goto L_08A7E7CC;
    case 57u: goto L_08A7E7EC;
    case 58u: goto L_08A7E80C;
    case 59u: goto L_08A7E82C;
    case 60u: goto L_08A7E834;
    case 61u: goto L_08A7E84C;
    case 62u: goto L_08A7E864;
    case 63u: goto L_08A7E86C;
    case 64u: goto L_08A7E878;
    case 65u: goto L_08A7E88C;
    case 66u: goto L_08A7E8C4;
    case 67u: goto L_08A7E8CC;
    case 68u: goto L_08A7E8D8;
    case 69u: goto L_08A7E92C;
    case 70u: goto L_08A7E944;
    case 71u: goto L_08A7E94C;
    case 72u: goto L_08A7E950;
    case 73u: goto L_08A7E970;
    case 74u: goto L_08A7E9C0;
    case 75u: goto L_08A7EA20;
    case 76u: goto L_08A7EA60;
    case 77u: goto L_08A7EA88;
    case 78u: goto L_08A7EB10;
    case 79u: goto L_08A7EB50;
    case 80u: goto L_08A7EB80;
    case 81u: goto L_08A7EBB0;
    case 82u: goto L_08A7EBE0;
    case 83u: goto L_08A7EC10;
    case 84u: goto L_08A7EC40;
    case 85u: goto L_08A7EC70;
    case 86u: goto L_08A7EC88;
    case 87u: goto L_08A7ECB8;
    case 88u: goto L_08A7ED40;
    case 89u: goto L_08A7ED90;
    case 90u: goto L_08A7EDA0;
    case 91u: goto L_08A7EDBC;
    case 92u: goto L_08A7EDC0;
    case 93u: goto L_08A7EDF0;
    case 94u: goto L_08A7EE20;
    case 95u: goto L_08A7EE50;
    case 96u: goto L_08A7EE5C;
    case 97u: goto L_08A7EE80;
    case 98u: goto L_08A7EEB0;
    case 99u: goto L_08A7EEC0;
    case 100u: goto L_08A7EEE0;
    case 101u: goto L_08A7EF10;
    case 102u: goto L_08A7EF40;
    case 103u: goto L_08A7EF70;
    case 104u: goto L_08A7EFA0;
    case 105u: goto L_08A7EFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7E030:
    // nop
    goto L_08A7E034;
L_08A7E034:
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E048:
    // nop
    // nop
    ctx.pc = 0x02159330u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E070:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E094:
    // nop
    ctx.pc = 0x0292BD00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E0C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0215BA30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E0D8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02163B90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E118:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021688E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E158:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029314C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E190:
    // nop
    // nop
    rt.unsupported(0x08A7E198u, 0x0000FFFCu, "special? not lowered yet"); return;
L_08A7E1A8:
    // nop
    // nop
    // nop
    goto L_08A7E1B4;
L_08A7E1B4:
    // nop
    goto L_08A7E1B8;
L_08A7E1B8:
    // nop
    // nop
    // nop
    ctx.pc = 0x02935A90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E22C:
    // nop
    // nop
    ctx.pc = 0x02302570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E238:
    // nop
    ctx.pc = 0x02302780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E23C:
    // nop
    // nop
    goto L_08A7E244;
L_08A7E244:
    // nop
    // nop
    ctx.pc = 0x021B1600u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E270:
    // nop
    ctx.pc = 0x021B16A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E28C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E3C80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E2A4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E47E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E2C0:
    // nop
    ctx.pc = 0x021E4DE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E2D8:
    // nop
    ctx.pc = 0x0292BE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E2E4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E6480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E324:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021F0740u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E354:
    // nop
    // nop
    ctx.pc = 0x0292BE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E35C:
    // nop
    // nop
    ctx.pc = 0x021F0AC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E364:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021F3700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E390:
    // nop
    ctx.pc = 0x0292BDE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E3A4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021F4800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E3E4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021F5460u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E3F4:
    // nop
    // nop
    ctx.pc = 0x0292BD80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E424:
    // nop
    // nop
    goto L_08A7E42C;
L_08A7E42C:
    // nop
    // nop
    ctx.pc = 0x021F8560u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E440:
    // nop
    ctx.pc = 0x021F8630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E464:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021F8BF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E4A4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021F98C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E4E4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E524:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021FB450u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E544:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021FEAB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E564:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0220D5A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E5B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02936460u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E63C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02217290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E664:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02218AD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E68C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0224B780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E69C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02265690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E6B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02936C00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E6D8:
    // nop
    ctx.pc = 0x022FDD90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E704:
    // nop
    goto L_08A7E708;
L_08A7E708:
    // nop
    ctx.pc = 0x02301AD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E73C:
    // nop
    goto L_08A7E740;
L_08A7E740:
    // nop
    // nop
    // nop
    ctx.pc = 0x02267050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E74C:
    // nop
    // nop
    ctx.pc = 0x02266B60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E760:
    // nop
    ctx.pc = 0x02266BA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E78C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02936DC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E7B8:
    // nop
    ctx.pc = 0x022737B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E7CC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02937FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E7EC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02938160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E80C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02938340u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E82C:
    // nop
    // nop
    goto L_08A7E834;
L_08A7E834:
    // nop
    // nop
    ctx.pc = 0x029385D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E84C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02938800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E864:
    // nop
    // nop
    ctx.pc = 0x0227D050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E86C:
    // nop
    // nop
    // nop
    goto L_08A7E878;
L_08A7E878:
    // nop
    ctx.pc = 0x0227FDD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E88C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02281E80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E8C4:
    // nop
    // nop
    ctx.pc = 0x029389E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E8CC:
    // nop
    // nop
    // nop
    goto L_08A7E8D8;
L_08A7E8D8:
    // nop
    ctx.pc = 0x029371A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E92C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022848E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E944:
    // nop
    // nop
    goto L_08A7E94C;
L_08A7E94C:
    // nop
    goto L_08A7E950;
L_08A7E950:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02937520u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E970:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0293A1D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7E9C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02937C40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EA20:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022964E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EA60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029378A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EA88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022988E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EB10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02298E40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EB50:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02299C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EB80:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02299C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EBB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02299C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EBE0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02299C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EC10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02299C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EC40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02299C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EC70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0229CBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EC88:
    // nop
    // nop
    aot_gpr[31] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    aot_gpr[31] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    ctx.pc = 0x0229CBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7ECB8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0293CBD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7ED40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022A6C30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7ED90:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022A7270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EDA0:
    // nop
    // nop
    ctx.pc = 0x022ACC00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EDBC:
    // nop
    ctx.pc = 0x022A7E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EDC0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022AE560u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EDF0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022B0120u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EE20:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022B1AA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EE50:
    // nop
    // nop
    // nop
    goto L_08A7EE5C;
L_08A7EE5C:
    // nop
    ctx.pc = 0x022B28D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EE80:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022B8D40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EEB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022BA700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EEC0:
    // nop
    // nop
    ctx.pc = 0x022BA8D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EEE0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022BAE90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EF10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022BC950u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EF40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022BE100u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EF70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022BF000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EFA0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022C52A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7EFD0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022C7320u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0634(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0634_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_634(Runtime &runtime) {
    runtime.register_generated_unit(634u, 0x08A7E000u, 4096u, &recomp_unit_0634, &recomp_unit_0634_entry);
    runtime.register_function(0x08A7E030u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E034u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E048u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E070u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E094u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E0C0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E0D8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E118u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E158u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E190u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E1A8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E1B4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E1B8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E22Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E238u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E23Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E244u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E270u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E28Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E2A4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E2C0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E2D8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E2E4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E324u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E354u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E35Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E364u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E390u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E3A4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E3E4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E3F4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E424u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E42Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E440u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E464u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E4A4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E4E4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E524u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E544u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E564u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E5B4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E63Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E664u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E68Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E69Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E6B4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E6D8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E704u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E708u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E73Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E740u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E74Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E760u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E78Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E7B8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E7CCu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E7ECu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E80Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E82Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E834u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E84Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E864u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E86Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E878u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E88Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E8C4u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E8CCu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E8D8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E92Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E944u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E94Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E950u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E970u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7E9C0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EA20u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EA60u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EA88u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EB10u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EB50u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EB80u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EBB0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EBE0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EC10u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EC40u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EC70u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EC88u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7ECB8u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7ED40u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7ED90u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EDA0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EDBCu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EDC0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EDF0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EE20u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EE50u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EE5Cu, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EE80u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EEB0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EEC0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EEE0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EF10u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EF40u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EF70u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EFA0u, &recomp_unit_0634, "recomp_unit_0634");
    runtime.register_function(0x08A7EFD0u, &recomp_unit_0634, "recomp_unit_0634");
}
} // namespace psprecomp
