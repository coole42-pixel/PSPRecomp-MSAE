#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0609[960] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 8, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61,
};
void recomp_unit_0609_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A650E4u;
        entry_id = (entry_delta < 3840u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0609[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A650E4;
    case 2u: goto L_08A650F0;
    case 3u: goto L_08A6510C;
    case 4u: goto L_08A65118;
    case 5u: goto L_08A65128;
    case 6u: goto L_08A653B4;
    case 7u: goto L_08A653C8;
    case 8u: goto L_08A653CC;
    case 9u: goto L_08A653D8;
    case 10u: goto L_08A653F4;
    case 11u: goto L_08A65400;
    case 12u: goto L_08A65410;
    case 13u: goto L_08A6543C;
    case 14u: goto L_08A65490;
    case 15u: goto L_08A656B0;
    case 16u: goto L_08A656C0;
    case 17u: goto L_08A656DC;
    case 18u: goto L_08A656E8;
    case 19u: goto L_08A656F8;
    case 20u: goto L_08A65724;
    case 21u: goto L_08A65764;
    case 22u: goto L_08A657C4;
    case 23u: goto L_08A657CC;
    case 24u: goto L_08A6580C;
    case 25u: goto L_08A6585C;
    case 26u: goto L_08A65868;
    case 27u: goto L_08A65900;
    case 28u: goto L_08A65918;
    case 29u: goto L_08A65920;
    case 30u: goto L_08A65944;
    case 31u: goto L_08A6595C;
    case 32u: goto L_08A659A0;
    case 33u: goto L_08A659A4;
    case 34u: goto L_08A659B4;
    case 35u: goto L_08A659D0;
    case 36u: goto L_08A659DC;
    case 37u: goto L_08A659EC;
    case 38u: goto L_08A65A1C;
    case 39u: goto L_08A65C94;
    case 40u: goto L_08A65CA8;
    case 41u: goto L_08A65CC4;
    case 42u: goto L_08A65CD0;
    case 43u: goto L_08A65CE0;
    case 44u: goto L_08A65D10;
    case 45u: goto L_08A65D50;
    case 46u: goto L_08A65DB0;
    case 47u: goto L_08A65DB8;
    case 48u: goto L_08A65DF8;
    case 49u: goto L_08A65E48;
    case 50u: goto L_08A65E54;
    case 51u: goto L_08A65EEC;
    case 52u: goto L_08A65F04;
    case 53u: goto L_08A65F0C;
    case 54u: goto L_08A65F30;
    case 55u: goto L_08A65F48;
    case 56u: goto L_08A65F8C;
    case 57u: goto L_08A65F90;
    case 58u: goto L_08A65FA8;
    case 59u: goto L_08A65FC4;
    case 60u: goto L_08A65FD0;
    case 61u: goto L_08A65FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A650E4:
    rt.unsupported(0x08A650E4u, 0x74697257u, "unknown not lowered yet"); return;
L_08A650F0:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 173u, 0x08A67A00u>(ctx, &aot_mem); return;
    }
    goto L_08A6510C;
L_08A6510C:
    rt.unsupported(0x08A6510Cu, 0x2020200Au, "unknown not lowered yet"); return;
L_08A65118:
    rt.unsupported(0x08A65118u, 0x204E4947u, "unknown not lowered yet"); return;
L_08A65128:
    rt.unsupported(0x08A65128u, 0x4F525245u, "unknown not lowered yet"); return;
L_08A653B4:
    rt.unsupported(0x08A653B4u, 0x223D6F74u, "unknown not lowered yet"); return;
L_08A653C8:
    if (0u == 0u) (void)(0u);
    goto L_08A653CC;
L_08A653CC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A653D4u, 0x00000072u, "special? not lowered yet"); return;
L_08A653D8:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 224u, 0x08A67CE8u>(ctx, &aot_mem); return;
    }
    goto L_08A653F4;
L_08A653F4:
    rt.unsupported(0x08A653F4u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A65400:
    rt.unsupported(0x08A65400u, 0x204E4947u, "unknown not lowered yet"); return;
L_08A65410:
    rt.unsupported(0x08A65410u, 0x4F525245u, "unknown not lowered yet"); return;
L_08A6543C:
    rt.unsupported(0x08A6543Cu, 0x77223D65u, "unknown not lowered yet"); return;
L_08A65490:
    rt.unsupported(0x08A65490u, 0x22726574u, "unknown not lowered yet"); return;
L_08A656B0:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A656B4u, 0x4574756Fu, "cop1? not lowered yet"); return;
L_08A656C0:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 285u, 0x08A67FD0u>(ctx, &aot_mem); return;
    }
    goto L_08A656DC;
L_08A656DC:
    rt.unsupported(0x08A656DCu, 0x2020200Au, "unknown not lowered yet"); return;
L_08A656E8:
    rt.unsupported(0x08A656E8u, 0x204E4947u, "unknown not lowered yet"); return;
L_08A656F8:
    rt.unsupported(0x08A656F8u, 0x4F525245u, "unknown not lowered yet"); return;
L_08A65724:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A65730u, 0x78202265u, "unknown not lowered yet"); return;
L_08A65764:
    rt.unsupported(0x08A65764u, 0x22303222u, "unknown not lowered yet"); return;
L_08A657C4:
    if (aot_gpr[1] != aot_gpr[28]) {
    rt.unsupported(0x08A657C8u, 0x20545845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 100u, 0x08A6D848u>(ctx, &aot_mem); return;
    }
    goto L_08A657CC;
L_08A657CC:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A657D8u, 0x78202265u, "unknown not lowered yet"); return;
L_08A6580C:
    rt.unsupported(0x08A6580Cu, 0x22303222u, "unknown not lowered yet"); return;
L_08A6585C:
    (void)(8224u << 16u);
    if (aot_gpr[2] != aot_gpr[24]) {
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 75u, 0x08A76DB4u>(ctx, &aot_mem); return;
    }
    goto L_08A65868;
L_08A65868:
    rt.unsupported(0x08A65868u, 0x77223D65u, "unknown not lowered yet"); return;
L_08A65900:
    rt.unsupported(0x08A65900u, 0x20656C67u, "unknown not lowered yet"); return;
L_08A65918:
    if (aot_gpr[9] == aot_gpr[28]) {
    rt.unsupported(0x08A6591Cu, 0x4B434955u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 141u, 0x08A6D99Cu>(ctx, &aot_mem); return;
    }
    goto L_08A65920;
L_08A65920:
    rt.unsupported(0x08A65920u, 0x4B4E494Cu, "cop2/vfpu not lowered yet"); return;
L_08A65944:
    rt.unsupported(0x08A65944u, 0x696C2022u, "unknown not lowered yet"); return;
L_08A6595C:
    aot_gpr[6] = (25970u << 16u);
    rt.unsupported(0x08A65960u, 0x20222322u, "unknown not lowered yet"); return;
L_08A659A0:
    if (0u == 0u) (void)(0u);
    goto L_08A659A4;
L_08A659A4:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A659B0u, 0x00000072u, "special? not lowered yet"); return;
L_08A659B4:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 38u, 0x08A682C4u>(ctx, &aot_mem); return;
    }
    goto L_08A659D0;
L_08A659D0:
    rt.unsupported(0x08A659D0u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A659DC:
    rt.unsupported(0x08A659DCu, 0x204E4947u, "unknown not lowered yet"); return;
L_08A659EC:
    rt.unsupported(0x08A659ECu, 0x4F525245u, "unknown not lowered yet"); return;
L_08A65A1C:
    rt.unsupported(0x08A65A1Cu, 0x77223D65u, "unknown not lowered yet"); return;
L_08A65C94:
    rt.unsupported(0x08A65C94u, 0x74726543u, "unknown not lowered yet"); return;
L_08A65CA8:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 83u, 0x08A685B8u>(ctx, &aot_mem); return;
    }
    goto L_08A65CC4;
L_08A65CC4:
    rt.unsupported(0x08A65CC4u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A65CD0:
    rt.unsupported(0x08A65CD0u, 0x204E4947u, "unknown not lowered yet"); return;
L_08A65CE0:
    rt.unsupported(0x08A65CE0u, 0x4F525245u, "unknown not lowered yet"); return;
L_08A65D10:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A65D1Cu, 0x78202265u, "unknown not lowered yet"); return;
L_08A65D50:
    rt.unsupported(0x08A65D50u, 0x22303222u, "unknown not lowered yet"); return;
L_08A65DB0:
    if (aot_gpr[1] != aot_gpr[28]) {
    rt.unsupported(0x08A65DB4u, 0x20545845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 171u, 0x08A6DE34u>(ctx, &aot_mem); return;
    }
    goto L_08A65DB8;
L_08A65DB8:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A65DC4u, 0x78202265u, "unknown not lowered yet"); return;
L_08A65DF8:
    rt.unsupported(0x08A65DF8u, 0x22303222u, "unknown not lowered yet"); return;
L_08A65E48:
    (void)(8224u << 16u);
    if (aot_gpr[2] != aot_gpr[24]) {
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 35u, 0x08A773A0u>(ctx, &aot_mem); return;
    }
    goto L_08A65E54;
L_08A65E54:
    rt.unsupported(0x08A65E54u, 0x77223D65u, "unknown not lowered yet"); return;
L_08A65EEC:
    rt.unsupported(0x08A65EECu, 0x20656C67u, "unknown not lowered yet"); return;
L_08A65F04:
    if (aot_gpr[9] == aot_gpr[28]) {
    rt.unsupported(0x08A65F08u, 0x4B434955u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0617_entry, 617u, 191u, 0x08A6DF88u>(ctx, &aot_mem); return;
    }
    goto L_08A65F0C;
L_08A65F0C:
    rt.unsupported(0x08A65F0Cu, 0x4B4E494Cu, "cop2/vfpu not lowered yet"); return;
L_08A65F30:
    rt.unsupported(0x08A65F30u, 0x696C2022u, "unknown not lowered yet"); return;
L_08A65F48:
    aot_gpr[6] = (25970u << 16u);
    rt.unsupported(0x08A65F4Cu, 0x20222322u, "unknown not lowered yet"); return;
L_08A65F8C:
    if (0u == 0u) (void)(0u);
    goto L_08A65F90;
L_08A65F90:
    rt.unsupported(0x08A65F90u, 0x7373654Du, "unknown not lowered yet"); return;
L_08A65FA8:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 142u, 0x08A688B8u>(ctx, &aot_mem); return;
    }
    goto L_08A65FC4;
L_08A65FC4:
    rt.unsupported(0x08A65FC4u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A65FD0:
    rt.unsupported(0x08A65FD0u, 0x204E4947u, "unknown not lowered yet"); return;
L_08A65FE0:
    rt.unsupported(0x08A65FE0u, 0x4F525245u, "unknown not lowered yet"); return;
}

void recomp_unit_0609(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0609_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_609(Runtime &runtime) {
    runtime.register_generated_unit(609u, 0x08A65000u, 4096u, &recomp_unit_0609, &recomp_unit_0609_entry);
    runtime.register_function(0x08A650E4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A650F0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A6510Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65118u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65128u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A653B4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A653C8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A653CCu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A653D8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A653F4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65400u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65410u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A6543Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65490u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A656B0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A656C0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A656DCu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A656E8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A656F8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65724u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65764u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A657C4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A657CCu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A6580Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A6585Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65868u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65900u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65918u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65920u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65944u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A6595Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A659A0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A659A4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A659B4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A659D0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A659DCu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A659ECu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65A1Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65C94u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65CA8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65CC4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65CD0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65CE0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65D10u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65D50u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65DB0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65DB8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65DF8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65E48u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65E54u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65EECu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65F04u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65F0Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65F30u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65F48u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65F8Cu, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65F90u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65FA8u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65FC4u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65FD0u, &recomp_unit_0609, "recomp_unit_0609");
    runtime.register_function(0x08A65FE0u, &recomp_unit_0609, "recomp_unit_0609");
}
} // namespace psprecomp
