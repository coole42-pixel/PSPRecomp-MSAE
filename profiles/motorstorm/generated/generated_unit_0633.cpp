#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0633[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 45, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
};
void recomp_unit_0633_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A7D000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0633[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7D000;
    case 2u: goto L_08A7D050;
    case 3u: goto L_08A7D060;
    case 4u: goto L_08A7D0A0;
    case 5u: goto L_08A7D0E0;
    case 6u: goto L_08A7D120;
    case 7u: goto L_08A7D160;
    case 8u: goto L_08A7D170;
    case 9u: goto L_08A7D180;
    case 10u: goto L_08A7D1C0;
    case 11u: goto L_08A7D200;
    case 12u: goto L_08A7D240;
    case 13u: goto L_08A7D280;
    case 14u: goto L_08A7D2C8;
    case 15u: goto L_08A7D2D0;
    case 16u: goto L_08A7D30C;
    case 17u: goto L_08A7D310;
    case 18u: goto L_08A7D33C;
    case 19u: goto L_08A7D350;
    case 20u: goto L_08A7D360;
    case 21u: goto L_08A7D388;
    case 22u: goto L_08A7D398;
    case 23u: goto L_08A7D3A0;
    case 24u: goto L_08A7D3B0;
    case 25u: goto L_08A7D3B8;
    case 26u: goto L_08A7D3C8;
    case 27u: goto L_08A7D3E0;
    case 28u: goto L_08A7D3F8;
    case 29u: goto L_08A7D438;
    case 30u: goto L_08A7D45C;
    case 31u: goto L_08A7D478;
    case 32u: goto L_08A7D4A8;
    case 33u: goto L_08A7D4B8;
    case 34u: goto L_08A7D4D0;
    case 35u: goto L_08A7D510;
    case 36u: goto L_08A7D528;
    case 37u: goto L_08A7D568;
    case 38u: goto L_08A7D580;
    case 39u: goto L_08A7D5C0;
    case 40u: goto L_08A7D5D8;
    case 41u: goto L_08A7D618;
    case 42u: goto L_08A7D630;
    case 43u: goto L_08A7D660;
    case 44u: goto L_08A7D670;
    case 45u: goto L_08A7D674;
    case 46u: goto L_08A7D688;
    case 47u: goto L_08A7D6C8;
    case 48u: goto L_08A7D6E0;
    case 49u: goto L_08A7D6F0;
    case 50u: goto L_08A7D720;
    case 51u: goto L_08A7D738;
    case 52u: goto L_08A7D768;
    case 53u: goto L_08A7D770;
    case 54u: goto L_08A7D788;
    case 55u: goto L_08A7D7C8;
    case 56u: goto L_08A7D808;
    case 57u: goto L_08A7D820;
    case 58u: goto L_08A7D82C;
    case 59u: goto L_08A7D838;
    case 60u: goto L_08A7D878;
    case 61u: goto L_08A7D890;
    case 62u: goto L_08A7D8B8;
    case 63u: goto L_08A7D8F8;
    case 64u: goto L_08A7D938;
    case 65u: goto L_08A7D978;
    case 66u: goto L_08A7D98C;
    case 67u: goto L_08A7D9B8;
    case 68u: goto L_08A7D9F8;
    case 69u: goto L_08A7DA48;
    case 70u: goto L_08A7DA88;
    case 71u: goto L_08A7DAC8;
    case 72u: goto L_08A7DB08;
    case 73u: goto L_08A7DB48;
    case 74u: goto L_08A7DB98;
    case 75u: goto L_08A7DBB0;
    case 76u: goto L_08A7DBF0;
    case 77u: goto L_08A7DC30;
    case 78u: goto L_08A7DC70;
    case 79u: goto L_08A7DCA8;
    case 80u: goto L_08A7DCB0;
    case 81u: goto L_08A7DCC8;
    case 82u: goto L_08A7DD08;
    case 83u: goto L_08A7DD48;
    case 84u: goto L_08A7DD88;
    case 85u: goto L_08A7DDA0;
    case 86u: goto L_08A7DDC8;
    case 87u: goto L_08A7DDE0;
    case 88u: goto L_08A7DE08;
    case 89u: goto L_08A7DE48;
    case 90u: goto L_08A7DE88;
    case 91u: goto L_08A7DEC8;
    case 92u: goto L_08A7DF10;
    case 93u: goto L_08A7DF44;
    case 94u: goto L_08A7DF58;
    case 95u: goto L_08A7DF98;
    case 96u: goto L_08A7DFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7D000:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02098380u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D050:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02098790u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D060:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0209ACF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D0A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0209B160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D0E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D120:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D160:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020A0C40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D170:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020A0D50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D180:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C0960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D1C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C16B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D200:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C1A80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D240:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C2B90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D280:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D2C8:
    // nop
    // nop
    ctx.pc = 0x0209E1A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D2D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C4A00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D30C:
    // nop
    ctx.pc = 0x020C5910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D310:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D33C:
    // nop
    ctx.pc = 0x020C6070u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D350:
    // nop
    // nop
    ctx.pc = 0x020C66D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D360:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C6770u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D388:
    // nop
    // nop
    ctx.pc = 0x0292BDE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D398:
    // nop
    // nop
    ctx.pc = 0x0292BE20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D3A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C6850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D3B0:
    // nop
    // nop
    ctx.pc = 0x020C6D50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D3B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C6E70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D3C8:
    // nop
    // nop
    ctx.pc = 0x020C6E90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D3E0:
    // nop
    // nop
    ctx.pc = 0x0292BDE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D3F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C8350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D438:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020C9720u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D45C:
    // nop
    ctx.pc = 0x0292BDC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D478:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D4A8:
    // nop
    // nop
    ctx.pc = 0x0292BD20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D4B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020CB230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D4D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020CBB70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D510:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020CDCC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D528:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020D0460u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D568:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020D5D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D580:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020D61B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D5C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020D86E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D5D8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020D8A50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D618:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020DA580u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D630:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020DFC00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D660:
    // nop
    // nop
    ctx.pc = 0x0292BE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D670:
    // nop
    goto L_08A7D674;
L_08A7D674:
    // nop
    // nop
    // nop
    ctx.pc = 0x020E3760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D688:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020E5250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D6C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020E7870u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D6E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020E8300u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D6F0:
    // nop
    // nop
    ctx.pc = 0x020E8E90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D720:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020EC000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D738:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D768:
    // nop
    // nop
    ctx.pc = 0x0292BD20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D770:
    // nop
    // nop
    ctx.pc = 0x0292BD40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D788:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020F2C70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D7C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020FF2E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D808:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021013C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D820:
    // nop
    // nop
    // nop
    goto L_08A7D82C;
L_08A7D82C:
    // nop
    ctx.pc = 0x02103F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D838:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02104210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D878:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021059B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D890:
    // nop
    // nop
    ctx.pc = 0x02105C70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D8B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021078B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D8F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0210A4A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D938:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0210C290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D978:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02112060u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D98C:
    // nop
    ctx.pc = 0x021122D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D9B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02113E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7D9F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DA48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02119C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DA88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0211D8C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DAC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02120F40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DB08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02136AF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DB48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DB98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02138570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DBB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021389D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DBF0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02139980u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DC30:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0213AF40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DC70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0213D3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DCA8:
    // nop
    // nop
    ctx.pc = 0x0292BE20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DCB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0213ED60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DCC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0213FCA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DD08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02145880u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DD48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02146EE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DD88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02148B70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DDA0:
    // nop
    // nop
    ctx.pc = 0x02148C70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DDC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02149250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DDE0:
    // nop
    // nop
    ctx.pc = 0x02149350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DE08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02149F40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DE48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0214AE20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DE88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0214C440u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DEC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0214EBC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DF10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0214F380u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DF44:
    // nop
    ctx.pc = 0x0292BE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DF58:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0214F7D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DF98:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7DFF0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02156F00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0633(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0633_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_633(Runtime &runtime) {
    runtime.register_generated_unit(633u, 0x08A7D000u, 4096u, &recomp_unit_0633, &recomp_unit_0633_entry);
    runtime.register_function(0x08A7D000u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D050u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D060u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D0A0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D0E0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D120u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D160u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D170u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D180u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D1C0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D200u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D240u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D280u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D2C8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D2D0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D30Cu, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D310u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D33Cu, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D350u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D360u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D388u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D398u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D3A0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D3B0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D3B8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D3C8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D3E0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D3F8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D438u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D45Cu, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D478u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D4A8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D4B8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D4D0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D510u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D528u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D568u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D580u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D5C0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D5D8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D618u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D630u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D660u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D670u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D674u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D688u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D6C8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D6E0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D6F0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D720u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D738u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D768u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D770u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D788u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D7C8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D808u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D820u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D82Cu, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D838u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D878u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D890u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D8B8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D8F8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D938u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D978u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D98Cu, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D9B8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7D9F8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DA48u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DA88u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DAC8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DB08u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DB48u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DB98u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DBB0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DBF0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DC30u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DC70u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DCA8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DCB0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DCC8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DD08u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DD48u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DD88u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DDA0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DDC8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DDE0u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DE08u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DE48u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DE88u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DEC8u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DF10u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DF44u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DF58u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DF98u, &recomp_unit_0633, "recomp_unit_0633");
    runtime.register_function(0x08A7DFF0u, &recomp_unit_0633, "recomp_unit_0633");
}
} // namespace psprecomp
