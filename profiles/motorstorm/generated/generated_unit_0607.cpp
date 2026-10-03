#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0607[971] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13,
    14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0,
    22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 66, 0, 67,
    0, 0, 0, 0, 68, 69, 0, 70, 0, 71, 72,
};
void recomp_unit_0607_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A63008u;
        entry_id = (entry_delta < 3884u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0607[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A63008;
    case 2u: goto L_08A63014;
    case 3u: goto L_08A63018;
    case 4u: goto L_08A63190;
    case 5u: goto L_08A63198;
    case 6u: goto L_08A6319C;
    case 7u: goto L_08A63400;
    case 8u: goto L_08A63510;
    case 9u: goto L_08A63544;
    case 10u: goto L_08A63550;
    case 11u: goto L_08A637E8;
    case 12u: goto L_08A637FC;
    case 13u: goto L_08A63804;
    case 14u: goto L_08A63808;
    case 15u: goto L_08A6381C;
    case 16u: goto L_08A63838;
    case 17u: goto L_08A63848;
    case 18u: goto L_08A63868;
    case 19u: goto L_08A63870;
    case 20u: goto L_08A63878;
    case 21u: goto L_08A63880;
    case 22u: goto L_08A63888;
    case 23u: goto L_08A63898;
    case 24u: goto L_08A638A4;
    case 25u: goto L_08A638AC;
    case 26u: goto L_08A638C4;
    case 27u: goto L_08A638D4;
    case 28u: goto L_08A638E4;
    case 29u: goto L_08A638F4;
    case 30u: goto L_08A63908;
    case 31u: goto L_08A6391C;
    case 32u: goto L_08A6392C;
    case 33u: goto L_08A63940;
    case 34u: goto L_08A63950;
    case 35u: goto L_08A63970;
    case 36u: goto L_08A63974;
    case 37u: goto L_08A639B0;
    case 38u: goto L_08A639EC;
    case 39u: goto L_08A63A24;
    case 40u: goto L_08A63A5C;
    case 41u: goto L_08A63A6C;
    case 42u: goto L_08A63A98;
    case 43u: goto L_08A63AA8;
    case 44u: goto L_08A63AB0;
    case 45u: goto L_08A63AD8;
    case 46u: goto L_08A63AE8;
    case 47u: goto L_08A63B14;
    case 48u: goto L_08A63B24;
    case 49u: goto L_08A63B50;
    case 50u: goto L_08A63B60;
    case 51u: goto L_08A63B68;
    case 52u: goto L_08A63D78;
    case 53u: goto L_08A63D8C;
    case 54u: goto L_08A63D94;
    case 55u: goto L_08A63DC0;
    case 56u: goto L_08A63E30;
    case 57u: goto L_08A63E54;
    case 58u: goto L_08A63E68;
    case 59u: goto L_08A63E6C;
    case 60u: goto L_08A63E90;
    case 61u: goto L_08A63E94;
    case 62u: goto L_08A63EB4;
    case 63u: goto L_08A63ED0;
    case 64u: goto L_08A63EE8;
    case 65u: goto L_08A63EF8;
    case 66u: goto L_08A63EFC;
    case 67u: goto L_08A63F04;
    case 68u: goto L_08A63F18;
    case 69u: goto L_08A63F1C;
    case 70u: goto L_08A63F24;
    case 71u: goto L_08A63F2C;
    case 72u: goto L_08A63F30;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A63008:
    rt.unsupported(0x08A63008u, 0x41544144u, "unknown not lowered yet"); return;
L_08A63014:
    // nop
    goto L_08A63018;
L_08A63018:
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A6301Cu, 0x73252064u, "unknown not lowered yet"); return;
L_08A63190:
    // nop
    // nop
    goto L_08A63198;
L_08A63198:
    aot_gpr[12] = (0u | 0u);
    goto L_08A6319C;
L_08A6319C:
    aot_gpr[12] = (0u | 0u);
    rt.unsupported(0x08A631A4u, 0x08890C18u, "control flow in delay slot"); return;
L_08A63400:
    rt.unsupported(0x08A63404u, 0x08894328u, "control flow in delay slot"); return;
L_08A63510:
    rt.unsupported(0x08A63510u, 0xCD028230u, "unknown not lowered yet"); return;
L_08A63544:
    aot_gpr[11] = (0u & 12694u);
    if (aot_gpr[8] != aot_gpr[3]) {
    (void)(aot_gpr[19] << (aot_gpr[16] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0608_entry, 608u, 101u, 0x08A64D70u>(ctx, &aot_mem); return;
    }
    goto L_08A63550;
L_08A63550:
    rt.unsupported(0x08A63554u, 0x03060930u, "special? not lowered yet"); return;
    ctx.pc = 0x0CC54D54u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A637E8:
    rt.unsupported(0x08A637E8u, 0x7774654Eu, "unknown not lowered yet"); return;
L_08A637FC:
    rt.unsupported(0x08A637FCu, 0x74656C65u, "unknown not lowered yet"); return;
L_08A63804:
    // nop
    goto L_08A63808;
L_08A63808:
    rt.unsupported(0x08A63808u, 0x76696E55u, "unknown not lowered yet"); return;
L_08A6381C:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<118u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<105u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vminmax(32u, 71u, 97u, 1u, false);
    rt.unsupported(0x08A63828u, 0x73694C65u, "unknown not lowered yet"); return;
L_08A63838:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    rt.unsupported(0x08A63840u, 0x73255B20u, "unknown not lowered yet"); return;
L_08A63848:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<118u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<105u, 1u>(vfpu_d); }
    rt.unsupported(0x08A63850u, 0x636F4C20u, "vfpu0 not lowered yet"); return;
L_08A63868:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 13u>();
    rt.unsupported(0x08A6386Cu, 0x0000636Fu, "special? not lowered yet"); return;
L_08A63870:
    ctx.execute_vfpu_compare3(65u, 108u, 108u, 1u, 6u);
    aot_gpr[8] = (0u - 0u);
    goto L_08A63878;
L_08A63878:
    ctx.execute_vfpu_vscl_ct<32u, 70u, 114u, 1u>();
    aot_gpr[4] = (0u | 0u);
    goto L_08A63880;
L_08A63880:
    ctx.execute_vfpu_vcmp_ct<65u, 108u, 1u, 2u>();
    rt.unsupported(0x08A63884u, 0x0000636Fu, "special? not lowered yet"); return;
L_08A63888:
    ctx.execute_vfpu_compare3(77u, 111u, 116u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 115u, 116u, 1u, 6u);
    if (aot_gpr[1] == 0u) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 96u, 0x08A7EE5Cu>(ctx, &aot_mem); return;
    }
    goto L_08A63898;
L_08A63898:
    aot_gpr[25] = (aot_gpr[1] & 20565u);
    if (aot_gpr[9] != aot_gpr[13]) {
    aot_gpr[19] = (aot_gpr[10] ^ 21827u);
        (void)rt.invoke_chained_direct<&recomp_unit_0619_entry, 619u, 167u, 0x08A6F960u>(ctx, &aot_mem); return;
    }
    goto L_08A638A4;
L_08A638A4:
    aot_gpr[20] = (aot_gpr[25] & 14136u);
    rt.unsupported(0x08A638A8u, 0x0030305Fu, "special? not lowered yet"); return;
L_08A638AC:
    rt.unsupported(0x08A638ACu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A638C4:
    rt.unsupported(0x08A638C4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A638D4:
    rt.unsupported(0x08A638D4u, 0x4574654Eu, "cop1? not lowered yet"); return;
L_08A638E4:
    ctx.execute_vfpu_vcmp_ct<103u, 99u, 1u, 13u>();
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    (void)(0u | 0u);
    goto L_08A638F4;
L_08A638F4:
    rt.unsupported(0x08A638F4u, 0x4C6F7653u, "unknown not lowered yet"); return;
L_08A63908:
    rt.unsupported(0x08A63908u, 0x4C6F7653u, "unknown not lowered yet"); return;
L_08A6391C:
    rt.unsupported(0x08A6391Cu, 0x74696E55u, "unknown not lowered yet"); return;
L_08A6392C:
    rt.unsupported(0x08A6392Cu, 0x74696E55u, "unknown not lowered yet"); return;
L_08A63940:
    rt.unsupported(0x08A63940u, 0x4E4B4E55u, "unknown not lowered yet"); return;
L_08A63950:
    rt.unsupported(0x08A63950u, 0x202C7325u, "unknown not lowered yet"); return;
L_08A63970:
    rt.unsupported(0x08A63970u, 0x20232323u, "unknown not lowered yet"); return;
L_08A63974:
    ctx.execute_vfpu_vscl_ct<84u, 121u, 112u, 1u>();
    rt.unsupported(0x08A63978u, 0x4D203D20u, "unknown not lowered yet"); return;
L_08A639B0:
    rt.unsupported(0x08A639B0u, 0x20232323u, "unknown not lowered yet"); return;
L_08A639EC:
    rt.unsupported(0x08A639ECu, 0x20232323u, "unknown not lowered yet"); return;
L_08A63A24:
    rt.unsupported(0x08A63A24u, 0x20232323u, "unknown not lowered yet"); return;
L_08A63A5C:
    rt.unsupported(0x08A63A5Cu, 0x20232323u, "unknown not lowered yet"); return;
L_08A63A6C:
    rt.unsupported(0x08A63A6Cu, 0x456E6967u, "cop1? not lowered yet"); return;
L_08A63A98:
    rt.unsupported(0x08A63A98u, 0x20232323u, "unknown not lowered yet"); return;
L_08A63AA8:
    if (aot_gpr[19] == aot_gpr[14]) {
    ctx.execute_vfpu_vcmp_ct<115u, 117u, 1u, 5u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 3u, 0x08A7E048u>(ctx, &aot_mem); return;
    }
    goto L_08A63AB0;
L_08A63AB0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<116u, 1u>(vfpu_d); }
    rt.unsupported(0x08A63AB4u, 0x45202C65u, "cop1? not lowered yet"); return;
L_08A63AD8:
    rt.unsupported(0x08A63AD8u, 0x20232323u, "unknown not lowered yet"); return;
L_08A63AE8:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A63AF0u, 0x45202C65u, "cop1? not lowered yet"); return;
L_08A63B14:
    rt.unsupported(0x08A63B14u, 0x20232323u, "unknown not lowered yet"); return;
L_08A63B24:
    rt.unsupported(0x08A63B24u, 0x7245704Eu, "unknown not lowered yet"); return;
L_08A63B50:
    rt.unsupported(0x08A63B50u, 0x20232323u, "unknown not lowered yet"); return;
L_08A63B60:
    if (aot_gpr[18] == aot_gpr[5]) {
    rt.unsupported(0x08A63B64u, 0x20524F52u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0615_entry, 615u, 73u, 0x08A6BC9Cu>(ctx, &aot_mem); return;
    }
    goto L_08A63B68;
L_08A63B68:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 107u, 0x088C8C8Cu>(ctx, &aot_mem); return;
L_08A63D78:
    rt.unsupported(0x08A63D78u, 0x44434241u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A63D7Cu, 0x48474645u, "cop2/vfpu not lowered yet"); return;
L_08A63D8C:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    rt.unsupported(0x08A63D90u, 0x62615A59u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 32u, 0x08A796E4u>(ctx, &aot_mem); return;
    }
    goto L_08A63D94;
L_08A63D94:
    ctx.execute_vfpu_vhdp(99u, 100u, 101u, 1u);
    rt.unsupported(0x08A63D98u, 0x6A696867u, "unknown not lowered yet"); return;
L_08A63DC0:
    rt.unsupported(0x08A63DC0u, 0x636F7673u, "vfpu0 not lowered yet"); return;
L_08A63E30:
    ctx.execute_vfpu_compare3(109u, 111u, 116u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 115u, 116u, 1u, 6u);
    rt.unsupported(0x08A63E38u, 0x73706D72u, "unknown not lowered yet"); return;
L_08A63E54:
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08A63E58u, 0x20646E61u, "unknown not lowered yet"); return;
L_08A63E68:
    // nop
    goto L_08A63E6C;
L_08A63E6C:
    rt.unsupported(0x08A63E6Cu, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08A63E90:
    // nop
    goto L_08A63E94;
L_08A63E94:
    rt.unsupported(0x08A63E94u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08A63EB4:
    rt.unsupported(0x08A63EB4u, 0x73627553u, "unknown not lowered yet"); return;
L_08A63ED0:
    rt.unsupported(0x08A63ED0u, 0x62757320u, "vfpu0 not lowered yet"); return;
L_08A63EE8:
    rt.unsupported(0x08A63EE8u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A63EF8:
    // nop
    goto L_08A63EFC;
L_08A63EFC:
    rt.unsupported(0x08A63EFCu, 0x616C7565u, "vfpu0 not lowered yet"); return;
L_08A63F04:
    rt.unsupported(0x08A63F04u, 0x7774654Eu, "unknown not lowered yet"); return;
L_08A63F18:
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[5]);
    goto L_08A63F1C;
L_08A63F1C:
    rt.unsupported(0x08A63F1Cu, 0x756F7247u, "unknown not lowered yet"); return;
L_08A63F24:
    if (aot_gpr[26] == aot_gpr[5]) {
    aot_gpr[18] = (aot_gpr[9] | 12592u);
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 122u, 0x08A74C7Cu>(ctx, &aot_mem); return;
    }
    goto L_08A63F2C;
L_08A63F2C:
    rt.unsupported(0x08A63F2Cu, 0x00000030u, "special? not lowered yet"); return;
L_08A63F30:
    rt.unsupported(0x08A63F30u, 0x7774654Eu, "unknown not lowered yet"); return;
}

void recomp_unit_0607(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0607_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_607(Runtime &runtime) {
    runtime.register_generated_unit(607u, 0x08A63000u, 4096u, &recomp_unit_0607, &recomp_unit_0607_entry);
    runtime.register_function(0x08A63008u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63014u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63018u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63190u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63198u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A6319Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63400u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63510u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63544u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63550u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A637E8u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A637FCu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63804u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63808u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A6381Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63838u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63848u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63868u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63870u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63878u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63880u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63888u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63898u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A638A4u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A638ACu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A638C4u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A638D4u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A638E4u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A638F4u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63908u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A6391Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A6392Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63940u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63950u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63970u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63974u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A639B0u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A639ECu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63A24u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63A5Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63A6Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63A98u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63AA8u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63AB0u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63AD8u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63AE8u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63B14u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63B24u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63B50u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63B60u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63B68u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63D78u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63D8Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63D94u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63DC0u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63E30u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63E54u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63E68u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63E6Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63E90u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63E94u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63EB4u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63ED0u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63EE8u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63EF8u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63EFCu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63F04u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63F18u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63F1Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63F24u, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63F2Cu, &recomp_unit_0607, "recomp_unit_0607");
    runtime.register_function(0x08A63F30u, &recomp_unit_0607, "recomp_unit_0607");
}
} // namespace psprecomp
