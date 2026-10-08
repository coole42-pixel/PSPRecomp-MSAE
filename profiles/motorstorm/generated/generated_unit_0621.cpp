#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0621[1016] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 45,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0,
    78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 90, 91, 92, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 101, 0, 0, 0, 102, 0,
    103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
};
void recomp_unit_0621_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A71004u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0621[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A71004;
    case 2u: goto L_08A71010;
    case 3u: goto L_08A71018;
    case 4u: goto L_08A71024;
    case 5u: goto L_08A7102C;
    case 6u: goto L_08A7103C;
    case 7u: goto L_08A71044;
    case 8u: goto L_08A7104C;
    case 9u: goto L_08A7105C;
    case 10u: goto L_08A71060;
    case 11u: goto L_08A7107C;
    case 12u: goto L_08A71098;
    case 13u: goto L_08A710A0;
    case 14u: goto L_08A710B0;
    case 15u: goto L_08A710B8;
    case 16u: goto L_08A710CC;
    case 17u: goto L_08A7110C;
    case 18u: goto L_08A71114;
    case 19u: goto L_08A71124;
    case 20u: goto L_08A71144;
    case 21u: goto L_08A7114C;
    case 22u: goto L_08A7115C;
    case 23u: goto L_08A7116C;
    case 24u: goto L_08A71178;
    case 25u: goto L_08A71198;
    case 26u: goto L_08A711A0;
    case 27u: goto L_08A711A8;
    case 28u: goto L_08A711B0;
    case 29u: goto L_08A711B8;
    case 30u: goto L_08A711C0;
    case 31u: goto L_08A711C8;
    case 32u: goto L_08A711F8;
    case 33u: goto L_08A71200;
    case 34u: goto L_08A71208;
    case 35u: goto L_08A71224;
    case 36u: goto L_08A71254;
    case 37u: goto L_08A712D8;
    case 38u: goto L_08A712FC;
    case 39u: goto L_08A71314;
    case 40u: goto L_08A7131C;
    case 41u: goto L_08A71334;
    case 42u: goto L_08A71340;
    case 43u: goto L_08A71364;
    case 44u: goto L_08A71368;
    case 45u: goto L_08A71380;
    case 46u: goto L_08A71388;
    case 47u: goto L_08A713A8;
    case 48u: goto L_08A713B8;
    case 49u: goto L_08A713C8;
    case 50u: goto L_08A713F0;
    case 51u: goto L_08A71424;
    case 52u: goto L_08A71428;
    case 53u: goto L_08A71468;
    case 54u: goto L_08A7147C;
    case 55u: goto L_08A714B4;
    case 56u: goto L_08A714E8;
    case 57u: goto L_08A7152C;
    case 58u: goto L_08A71540;
    case 59u: goto L_08A7154C;
    case 60u: goto L_08A71570;
    case 61u: goto L_08A71588;
    case 62u: goto L_08A71598;
    case 63u: goto L_08A715A4;
    case 64u: goto L_08A715DC;
    case 65u: goto L_08A71610;
    case 66u: goto L_08A71618;
    case 67u: goto L_08A71628;
    case 68u: goto L_08A71630;
    case 69u: goto L_08A71638;
    case 70u: goto L_08A71640;
    case 71u: goto L_08A71650;
    case 72u: goto L_08A71664;
    case 73u: goto L_08A71688;
    case 74u: goto L_08A716D4;
    case 75u: goto L_08A716E4;
    case 76u: goto L_08A716F4;
    case 77u: goto L_08A716FC;
    case 78u: goto L_08A71704;
    case 79u: goto L_08A7170C;
    case 80u: goto L_08A71714;
    case 81u: goto L_08A717C0;
    case 82u: goto L_08A717CC;
    case 83u: goto L_08A71810;
    case 84u: goto L_08A718D4;
    case 85u: goto L_08A719E4;
    case 86u: goto L_08A71A18;
    case 87u: goto L_08A71A2C;
    case 88u: goto L_08A71AAC;
    case 89u: goto L_08A71AB0;
    case 90u: goto L_08A71AD0;
    case 91u: goto L_08A71AD4;
    case 92u: goto L_08A71AD8;
    case 93u: goto L_08A71ADC;
    case 94u: goto L_08A71AE8;
    case 95u: goto L_08A71AF8;
    case 96u: goto L_08A71B08;
    case 97u: goto L_08A71B18;
    case 98u: goto L_08A71B48;
    case 99u: goto L_08A71B58;
    case 100u: goto L_08A71B68;
    case 101u: goto L_08A71B6C;
    case 102u: goto L_08A71B7C;
    case 103u: goto L_08A71B84;
    case 104u: goto L_08A71B98;
    case 105u: goto L_08A71BB8;
    case 106u: goto L_08A71BF0;
    case 107u: goto L_08A71DE0;
    case 108u: goto L_08A71DF0;
    case 109u: goto L_08A71E00;
    case 110u: goto L_08A71E08;
    case 111u: goto L_08A71E14;
    case 112u: goto L_08A71E1C;
    case 113u: goto L_08A71E30;
    case 114u: goto L_08A71E98;
    case 115u: goto L_08A71FB0;
    case 116u: goto L_08A71FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A71004:
    rt.unsupported(0x08A71004u, 0x454D5F52u, "cop1? not lowered yet"); return;
L_08A71010:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A71014u, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A71018;
L_08A71018:
    rt.unsupported(0x08A71018u, 0x4F4E5F52u, "unknown not lowered yet"); return;
L_08A71024:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A71028u, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D74u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7102C;
L_08A7102C:
    rt.unsupported(0x08A7102Cu, 0x45435F52u, "cop1? not lowered yet"); return;
L_08A7103C:
    if (aot_gpr[26] == aot_gpr[20]) {
    // nop
        ctx.pc = 0x08A85D64u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A71044;
L_08A71044:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A71048u, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D94u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7104C;
L_08A7104C:
    rt.unsupported(0x08A7104Cu, 0x45435F52u, "cop1? not lowered yet"); return;
L_08A7105C:
    (void)(0u << (0u & 31u));
    goto L_08A71060;
L_08A71060:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A7106Cu, 0x4C53532Fu, "unknown not lowered yet"); return;
L_08A7107C:
    rt.unsupported(0x08A7107Cu, 0x735F7472u, "unknown not lowered yet"); return;
L_08A71098:
    if (aot_gpr[26] == aot_gpr[12]) {
    ctx.execute_vfpu_vscl_ct<111u, 99u, 107u, 1u>();
        ctx.pc = 0x08A85DE8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A710A0;
L_08A710A0:
    rt.unsupported(0x08A710A0u, 0x633A3A74u, "vfpu0 not lowered yet"); return;
L_08A710B0:
    rt.unsupported(0x08A710B0u, 0x6874202Du, "unknown not lowered yet"); return;
L_08A710B8:
    ctx.execute_vfpu_vcmp_ct<115u, 115u, 1u, 15u>();
    rt.unsupported(0x08A710BCu, 0x62696C20u, "vfpu0 not lowered yet"); return;
L_08A710CC:
    ctx.execute_vfpu_vscl_ct<32u, 100u, 111u, 1u>();
    rt.unsupported(0x08A710D0u, 0x74276E73u, "unknown not lowered yet"); return;
L_08A7110C:
    if (aot_gpr[26] == aot_gpr[12]) {
    ctx.execute_vfpu_vscl_ct<111u, 99u, 107u, 1u>();
        ctx.pc = 0x08A85E5Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A71114;
L_08A71114:
    rt.unsupported(0x08A71114u, 0x633A3A74u, "vfpu0 not lowered yet"); return;
L_08A71124:
    ctx.execute_vfpu_compare3(45u, 32u, 99u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<112u, 105u, 1u, 13u>();
    rt.unsupported(0x08A7112Cu, 0x72206465u, "unknown not lowered yet"); return;
L_08A71144:
    if (aot_gpr[26] == aot_gpr[12]) {
    ctx.execute_vfpu_vscl_ct<111u, 99u, 107u, 1u>();
        ctx.pc = 0x08A85E94u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7114C;
L_08A7114C:
    rt.unsupported(0x08A7114Cu, 0x633A3A74u, "vfpu0 not lowered yet"); return;
L_08A7115C:
    rt.unsupported(0x08A7115Cu, 0x696C202Du, "unknown not lowered yet"); return;
L_08A7116C:
    rt.unsupported(0x08A7116Cu, 0x73726576u, "unknown not lowered yet"); return;
L_08A71178:
    // nop
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 0u>();
    if (0u == 0u) (void)(0u);
    ctx.execute_vfpu_vscl_ct<99u, 97u, 115u, 1u>();
    // nop
    // nop
    // nop
    // nop
    goto L_08A71198;
L_08A71198:
    rt.unsupported(0x08A7119Cu, 0x5C5C5C5Cu, "control flow in delay slot"); return;
L_08A711A0:
    rt.unsupported(0x08A711A4u, 0x5C5C5C5Cu, "control flow in delay slot"); return;
L_08A711A8:
    rt.unsupported(0x08A711ACu, 0x5C5C5C5Cu, "control flow in delay slot"); return;
L_08A711B0:
    rt.unsupported(0x08A711B4u, 0x5C5C5C5Cu, "control flow in delay slot"); return;
L_08A711B8:
    rt.unsupported(0x08A711BCu, 0x5C5C5C5Cu, "control flow in delay slot"); return;
L_08A711C0:
    rt.unsupported(0x08A711C4u, 0x5C5C5C5Cu, "control flow in delay slot"); return;
L_08A711C8:
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    aot_gpr[22] = (aot_gpr[17] | 13878u);
    goto L_08A711F8;
L_08A711F8:
    if (aot_gpr[18] == aot_gpr[22]) {
    // nop
        ctx.pc = 0x08A85B48u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A71200;
L_08A71200:
    if (aot_gpr[2] != aot_gpr[14]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 26u, 0x08A84310u>(ctx, &aot_mem); return;
    }
    goto L_08A71208;
L_08A71208:
    rt.unsupported(0x08A71208u, 0x735F7472u, "unknown not lowered yet"); return;
L_08A71224:
    rt.unsupported(0x08A71228u, 0x08A2BBA4u, "control flow in delay slot"); return;
L_08A71254:
    rt.unsupported(0x08A71258u, 0x08A2BBACu, "control flow in delay slot"); return;
L_08A712D8:
    aot_gpr[3] = (0u << 12u);
    aot_gpr[3] = (0u << 8u);
    aot_gpr[3] = (0u << 4u);
    aot_gpr[3] = (0u << 0u);
    aot_gpr[2] = (0u << 28u);
    (void)(aot_gpr[22] << 0u);
    (void)(aot_gpr[21] << 0u);
    (void)(aot_gpr[20] << 0u);
    (void)(aot_gpr[19] << 0u);
    goto L_08A712FC;
L_08A712FC:
    (void)(aot_gpr[18] << 0u);
    (void)(aot_gpr[17] << 0u);
    (void)(aot_gpr[16] << 0u);
    (void)(aot_gpr[15] << 0u);
    (void)(aot_gpr[14] << 0u);
    (void)(aot_gpr[13] << 0u);
    goto L_08A71314;
L_08A71314:
    (void)(aot_gpr[12] << 0u);
    (void)(aot_gpr[11] << 0u);
    goto L_08A7131C;
L_08A7131C:
    (void)(aot_gpr[10] << 0u);
    (void)(aot_gpr[9] << 0u);
    (void)(aot_gpr[8] << 0u);
    (void)(aot_gpr[7] << 0u);
    (void)(aot_gpr[6] << 0u);
    (void)(aot_gpr[5] << 0u);
    goto L_08A71334;
L_08A71334:
    (void)(aot_gpr[4] << 0u);
    (void)(aot_gpr[3] << 0u);
    (void)(aot_gpr[2] << 0u);
    goto L_08A71340;
L_08A71340:
    (void)(aot_gpr[1] << 0u);
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (aot_gpr[6] & 31u)));
    (void)(0u >> (aot_gpr[2] & 31u));
    rt.unsupported(0x08A71350u, 0x00800005u, "special? not lowered yet"); return;
L_08A71364:
    rt.unsupported(0x08A71364u, 0xD76AA478u, "vfpu not lowered yet"); return;
L_08A71368:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-18604), ctx.vfpu_scalar_bits_ct<71u>());
    (void)(aot_gpr[1] + static_cast<std::uint32_t>(28891));
    { const std::uint32_t ll_address = aot_gpr[13] + static_cast<std::uint32_t>(-12562);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[29] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    rt.unsupported(0x08A71374u, 0xF57C0FAFu, "vfpu not lowered yet"); return;
L_08A71380:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    rt.unsupported(0x08A71384u, 0x698098D8u, "unknown not lowered yet"); return;
L_08A71388:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[26] + static_cast<std::uint32_t>(-2129), aot_gpr[4]));
    // vflush: architectural no-op that retains VFPU prefixes
    aot_gpr[28] = (rt.memory().aot_load_word_left(aot_gpr[10] + static_cast<std::uint32_t>(-10306), aot_gpr[28]));
    rt.unsupported(0x08A71394u, 0x6B901122u, "unknown not lowered yet"); return;
L_08A713A8:
    { const std::uint32_t ll_address = aot_gpr[2] + static_cast<std::uint32_t>(-19648);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      (void)(PSPRECOMP_AOT_LOAD32(ll_address)); }
    aot_gpr[30] = (aot_gpr[18] + static_cast<std::uint32_t>(23121));
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(-14424), ctx.vfpu_scalar_bits_ct<86u>());
    rt.unsupported(0x08A713B4u, 0xD62F105Du, "vfpu not lowered yet"); return;
L_08A713B8:
    ctx.lo = aot_gpr[18];
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(-6528);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<33u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-1080), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    rt.unsupported(0x08A713C4u, 0x21E1CDE6u, "unknown not lowered yet"); return;
L_08A713C8:
    { const std::uint32_t ll_address = aot_gpr[25] + static_cast<std::uint32_t>(2006);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    rt.unsupported(0x08A713CCu, 0xF4D50D87u, "vfpu not lowered yet"); return;
L_08A713F0:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-5564), static_cast<std::uint16_t>(aot_gpr[30]));
    rt.unsupported(0x08A713F8u, 0x4BDECFA9u, "cop2/vfpu not lowered yet"); return;
L_08A71424:
    rt.unsupported(0x08A71424u, 0xF4292244u, "vfpu not lowered yet"); return;
L_08A71428:
    rt.unsupported(0x08A71428u, 0x432AFF97u, "unknown not lowered yet"); return;
L_08A71468:
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[25]) < 17162 ? 1u : 0u);
    rt.unsupported(0x08A7146Cu, 0x6E757220u, "vfpu3 not lowered yet"); return;
L_08A7147C:
    ctx.execute_vfpu_vminmax(116u, 101u, 114u, 1u, false);
    rt.unsupported(0x08A71480u, 0x74616E69u, "unknown not lowered yet"); return;
L_08A714B4:
    rt.unsupported(0x08A714B4u, 0x75746572u, "unknown not lowered yet"); return;
L_08A714E8:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    rt.unsupported(0x08A714F0u, 0x72726520u, "unknown not lowered yet"); return;
L_08A7152C:
    rt.unsupported(0x08A7152Cu, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08A71540:
    rt.unsupported(0x08A71540u, 0x206E6168u, "unknown not lowered yet"); return;
L_08A7154C:
    rt.unsupported(0x08A7154Cu, 0x75702061u, "unknown not lowered yet"); return;
L_08A71570:
    rt.unsupported(0x08A71570u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08A71588:
    rt.unsupported(0x08A71588u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08A71598:
    rt.unsupported(0x08A71598u, 0x61726570u, "vfpu0 not lowered yet"); return;
L_08A715A4:
    ctx.execute_vfpu_vscl_ct<102u, 114u, 101u, 1u>();
    rt.unsupported(0x08A715A8u, 0x20676E69u, "unknown not lowered yet"); return;
L_08A715DC:
    rt.unsupported(0x08A715DCu, 0x203A7325u, "unknown not lowered yet"); return;
L_08A71610:
    (void)(aot_gpr[22] << 0u);
    ctx.pc = 0x02A138F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A71618:
    aot_gpr[4] = (aot_gpr[19] ^ 29811u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<98u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 15u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A71628;
L_08A71628:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(97u, 108u, 108u, 1u, 6u);
        ctx.pc = 0x08A89BB4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A71630;
L_08A71630:
    (void)(0u - 0u);
    // nop
    goto L_08A71638;
L_08A71638:
    (void)(aot_gpr[22] << 0u);
    ctx.pc = 0x02A138F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A71640:
    aot_gpr[4] = (aot_gpr[19] ^ 29811u);
    rt.unsupported(0x08A71644u, 0x6378653Au, "vfpu0 not lowered yet"); return;
L_08A71650:
    aot_gpr[4] = (aot_gpr[19] ^ 29811u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<98u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 1u>(vfpu_d); }
    rt.unsupported(0x08A71658u, 0x6378655Fu, "vfpu0 not lowered yet"); return;
L_08A71664:
    // nop
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 15u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    (void)(0u - 0u);
    // nop
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 15u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    (void)(0u - 0u);
    // nop
    goto L_08A71688;
L_08A71688:
    aot_gpr[4] = (aot_gpr[19] ^ 29811u);
    rt.unsupported(0x08A7168Cu, 0x7079743Au, "unknown not lowered yet"); return;
L_08A716D4:
    aot_gpr[12] = (aot_gpr[13] & 14185u);
    aot_gpr[2] = (aot_gpr[25] & 8552u);
    aot_gpr[20] = (aot_gpr[24] & 4020u);
    aot_gpr[2] = (aot_gpr[29] & 8552u);
    goto L_08A716E4;
L_08A716E4:
    aot_gpr[13] = (25400u << 16u);
    aot_gpr[9] = (4058u << 16u);
    aot_gpr[27] = (39006u << 16u);
    aot_gpr[9] = (4058u << 16u);
    goto L_08A716F4;
L_08A716F4:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08A716FC;
L_08A716FC:
    // nop
    aot_gpr[21] = (49152u << 16u);
    goto L_08A71704;
L_08A71704:
    // nop
    aot_gpr[17] = (aot_gpr[14] | 53212u);
    goto L_08A7170C;
L_08A7170C:
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08A71714;
L_08A71714:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A71714u, 0x000000A2u); return; } }
    rt.unsupported(0x08A71718u, 0x000000F9u, "special? not lowered yet"); return;
L_08A717C0:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    jump_target = 0u;
    aot_gpr[31] = (0x08A717CCu);
    ctx.hi = 0u;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A717CCu) goto L_08A717CC;
    return;
L_08A717CC:
    (void)(ctx.lo);
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    rt.unsupported(0x08A717D4u, 0x000000FEu, "special? not lowered yet"); return;
L_08A71810:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A71814u, 0x000000E9u, "special? not lowered yet"); return;
L_08A718D4:
    rt.memory().memory_barrier();
    (void)(std::rotr(0u, static_cast<int>(0u & 31u)));
    rt.unsupported(0x08A718DCu, 0x0000003Fu, "special? not lowered yet"); return;
L_08A719E4:
    rt.unsupported(0x08A719E4u, 0x0000004Du, "special? not lowered yet"); return;
L_08A71A18:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A71A18u, 0x000000E2u); return; } }
    rt.unsupported(0x08A71A1Cu, 0x0000007Bu, "special? not lowered yet"); return;
L_08A71A2C:
    aot_gpr[9] = (3840u << 16u);
    rt.unsupported(0x08A71A30u, 0x40490F00u, "unknown not lowered yet"); return;
L_08A71AAC:
    aot_gpr[9] = (0u << 16u);
    goto L_08A71AB0;
L_08A71AB0:
    aot_gpr[16] = (aot_gpr[15] ^ 0u);
    aot_gpr[26] = (aot_gpr[30] | 0u);
    aot_gpr[2] = (aot_gpr[29] & 0u);
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    aot_gpr[16] = (static_cast<std::int32_t>(aot_gpr[26]) < 0 ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[30] + static_cast<std::uint32_t>(0));
    rt.unsupported(0x08A71AC8u, 0x22D00000u, "unknown not lowered yet"); return;
L_08A71AD0:
    rt.unsupported(0x08A71AD4u, 0x17440000u, "control flow in delay slot"); return;
L_08A71AD4:
    { const bool branch_taken = aot_gpr[26] != aot_gpr[4];
    (void)(0u << (0u & 31u));
      if (branch_taken) {
          goto L_08A71AD8;
      }
      goto L_08A71ADC;
    }
L_08A71AD8:
    (void)(0u << (0u & 31u));
    goto L_08A71ADC;
L_08A71ADC:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    jump_target = 0u;
    aot_gpr[31] = (0x08A71AE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A71AE8u) goto L_08A71AE8;
    return;
L_08A71AE8:
    // nop
    aot_gpr[16] = ((aot_gpr[31] >> 0u) & 0x00000001u);
    rt.unsupported(0x08A71AF0u, 0x00000001u, "special? not lowered yet"); return;
L_08A71AF8:
    // nop
    rt.unsupported(0x08A71AFCu, 0x43300000u, "unknown not lowered yet"); return;
L_08A71B08:
    ctx.execute_vfpu_vhdp(45u, 73u, 110u, 1u);
    // nop
    jump_target = aot_gpr[3];
    aot_gpr[13] = (0x08A71B18u);
    rt.unsupported(0x08A71B14u, 0x004E614Eu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A71B18u) goto L_08A71B18;
    return;
L_08A71B18:
    // nop
    // nop
    // nop
    // nop
    // nop
    aot_gpr[16] = (0u << 16u);
    // nop
    rt.unsupported(0x08A71B34u, 0x40240000u, "unknown not lowered yet"); return;
L_08A71B48:
    rt.unsupported(0x08A71B48u, 0x20202020u, "unknown not lowered yet"); return;
L_08A71B58:
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    goto L_08A71B68;
L_08A71B68:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    goto L_08A71B6C;
L_08A71B6C:
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    rt.unsupported(0x08A71B70u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08A71B7C:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    aot_gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A71B84;
L_08A71B84:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    rt.unsupported(0x08A71B8Cu, 0x42413938u, "unknown not lowered yet"); return;
L_08A71B98:
    rt.unsupported(0x08A71B98u, 0x20677562u, "unknown not lowered yet"); return;
L_08A71BB8:
    // nop
    // nop
    // nop
    { const std::uint32_t ll_address = 0u + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    // nop
    rt.unsupported(0x08A71BD0u, 0x00000030u, "special? not lowered yet"); return;
L_08A71BF0:
    rt.unsupported(0x08A71BF4u, 0x08A333DCu, "control flow in delay slot"); return;
L_08A71DE0:
    rt.unsupported(0x08A71DE0u, 0x20202020u, "unknown not lowered yet"); return;
L_08A71DF0:
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    aot_gpr[16] = (aot_gpr[1] & 12336u);
    goto L_08A71E00;
L_08A71E00:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    goto L_08A71E08;
L_08A71E08:
    rt.unsupported(0x08A71E08u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08A71E14:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    aot_gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A71E1C;
L_08A71E1C:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    rt.unsupported(0x08A71E24u, 0x42413938u, "unknown not lowered yet"); return;
L_08A71E30:
    rt.unsupported(0x08A71E30u, 0x20677562u, "unknown not lowered yet"); return;
L_08A71E98:
    rt.unsupported(0x08A71E9Cu, 0x08A35968u, "control flow in delay slot"); return;
L_08A71FB0:
    rt.unsupported(0x08A71FB4u, 0x08A35338u, "control flow in delay slot"); return;
L_08A71FE0:
    rt.unsupported(0x08A71FE0u, 0x20202000u, "unknown not lowered yet"); return;
}

void recomp_unit_0621(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0621_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_621(Runtime &runtime) {
    runtime.register_generated_unit(621u, 0x08A71000u, 4096u, &recomp_unit_0621, &recomp_unit_0621_entry);
    runtime.register_function(0x08A71004u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71010u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71018u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71024u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7102Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7103Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71044u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7104Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7105Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71060u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7107Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71098u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A710A0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A710B0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A710B8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A710CCu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7110Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71114u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71124u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71144u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7114Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7115Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7116Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71178u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71198u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711A0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711A8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711B0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711B8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711C0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711C8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A711F8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71200u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71208u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71224u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71254u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A712D8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A712FCu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71314u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7131Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71334u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71340u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71364u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71368u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71380u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71388u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A713A8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A713B8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A713C8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A713F0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71424u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71428u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71468u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7147Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A714B4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A714E8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7152Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71540u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7154Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71570u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71588u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71598u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A715A4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A715DCu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71610u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71618u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71628u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71630u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71638u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71640u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71650u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71664u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71688u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A716D4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A716E4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A716F4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A716FCu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71704u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A7170Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71714u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A717C0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A717CCu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71810u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A718D4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A719E4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71A18u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71A2Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AACu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AB0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AD0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AD4u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AD8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71ADCu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AE8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71AF8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B08u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B18u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B48u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B58u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B68u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B6Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B7Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B84u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71B98u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71BB8u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71BF0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71DE0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71DF0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71E00u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71E08u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71E14u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71E1Cu, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71E30u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71E98u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71FB0u, &recomp_unit_0621, "recomp_unit_0621");
    runtime.register_function(0x08A71FE0u, &recomp_unit_0621, "recomp_unit_0621");
}
} // namespace psprecomp
