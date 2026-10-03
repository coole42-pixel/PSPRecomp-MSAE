#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0610[1021] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 56, 57,
    0, 58, 59, 0, 60, 61, 62, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 67, 0, 0, 0, 0, 68, 69, 0, 70,
};
void recomp_unit_0610_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A66000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0610[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A66000;
    case 2u: goto L_08A66018;
    case 3u: goto L_08A660C0;
    case 4u: goto L_08A660CC;
    case 5u: goto L_08A66250;
    case 6u: goto L_08A662A0;
    case 7u: goto L_08A662B4;
    case 8u: goto L_08A662D0;
    case 9u: goto L_08A662DC;
    case 10u: goto L_08A662EC;
    case 11u: goto L_08A665A0;
    case 12u: goto L_08A665B0;
    case 13u: goto L_08A665C4;
    case 14u: goto L_08A665D4;
    case 15u: goto L_08A665FC;
    case 16u: goto L_08A6665C;
    case 17u: goto L_08A66694;
    case 18u: goto L_08A666A0;
    case 19u: goto L_08A666C4;
    case 20u: goto L_08A66874;
    case 21u: goto L_08A66880;
    case 22u: goto L_08A66894;
    case 23u: goto L_08A668A4;
    case 24u: goto L_08A668CC;
    case 25u: goto L_08A66910;
    case 26u: goto L_08A66950;
    case 27u: goto L_08A66B5C;
    case 28u: goto L_08A66B70;
    case 29u: goto L_08A66B84;
    case 30u: goto L_08A66B94;
    case 31u: goto L_08A66BC4;
    case 32u: goto L_08A66C08;
    case 33u: goto L_08A66C48;
    case 34u: goto L_08A66C6C;
    case 35u: goto L_08A66CA4;
    case 36u: goto L_08A66CB0;
    case 37u: goto L_08A66D08;
    case 38u: goto L_08A66D1C;
    case 39u: goto L_08A66D68;
    case 40u: goto L_08A66D78;
    case 41u: goto L_08A66E00;
    case 42u: goto L_08A66E1C;
    case 43u: goto L_08A66E24;
    case 44u: goto L_08A66E58;
    case 45u: goto L_08A66F10;
    case 46u: goto L_08A66F20;
    case 47u: goto L_08A66F28;
    case 48u: goto L_08A66F30;
    case 49u: goto L_08A66F38;
    case 50u: goto L_08A66F40;
    case 51u: goto L_08A66F4C;
    case 52u: goto L_08A66F54;
    case 53u: goto L_08A66F60;
    case 54u: goto L_08A66F68;
    case 55u: goto L_08A66F70;
    case 56u: goto L_08A66F78;
    case 57u: goto L_08A66F7C;
    case 58u: goto L_08A66F84;
    case 59u: goto L_08A66F88;
    case 60u: goto L_08A66F90;
    case 61u: goto L_08A66F94;
    case 62u: goto L_08A66F98;
    case 63u: goto L_08A66FA4;
    case 64u: goto L_08A66FB8;
    case 65u: goto L_08A66FC4;
    case 66u: goto L_08A66FCC;
    case 67u: goto L_08A66FD0;
    case 68u: goto L_08A66FE4;
    case 69u: goto L_08A66FE8;
    case 70u: goto L_08A66FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A66000:
    rt.unsupported(0x08A66000u, 0x732E726Fu, "unknown not lowered yet"); return;
L_08A66018:
    rt.unsupported(0x08A66018u, 0x77223D65u, "unknown not lowered yet"); return;
L_08A660C0:
    (void)(8224u << 16u);
    if (aot_gpr[2] != aot_gpr[24]) {
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 53u, 0x08A77618u>(ctx, &aot_mem); return;
    }
    goto L_08A660CC;
L_08A660CC:
    rt.unsupported(0x08A660CCu, 0x77223D65u, "unknown not lowered yet"); return;
L_08A66250:
    rt.unsupported(0x08A66250u, 0x45524645u, "cop1? not lowered yet"); return;
L_08A662A0:
    rt.unsupported(0x08A662A0u, 0x70736552u, "unknown not lowered yet"); return;
L_08A662B4:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 188u, 0x08A68BC4u>(ctx, &aot_mem); return;
    }
    goto L_08A662D0;
L_08A662D0:
    rt.unsupported(0x08A662D0u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A662DC:
    rt.unsupported(0x08A662DCu, 0x204E4947u, "unknown not lowered yet"); return;
L_08A662EC:
    rt.unsupported(0x08A662ECu, 0x4F525245u, "unknown not lowered yet"); return;
L_08A665A0:
    rt.unsupported(0x08A665A0u, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
L_08A665B0:
    rt.unsupported(0x08A665B0u, 0x4D56533Cu, "unknown not lowered yet"); return;
L_08A665C4:
    rt.unsupported(0x08A665C4u, 0x7974204Eu, "unknown not lowered yet"); return;
L_08A665D4:
    rt.unsupported(0x08A665D4u, 0x22524F52u, "unknown not lowered yet"); return;
L_08A665FC:
    rt.unsupported(0x08A665FCu, 0x77223D65u, "unknown not lowered yet"); return;
L_08A6665C:
    rt.unsupported(0x08A6665Cu, 0x223D726Fu, "unknown not lowered yet"); return;
L_08A66694:
    (void)(8224u << 16u);
    if (aot_gpr[2] != aot_gpr[24]) {
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 101u, 0x08A77BECu>(ctx, &aot_mem); return;
    }
    goto L_08A666A0;
L_08A666A0:
    rt.unsupported(0x08A666A0u, 0x77223D65u, "unknown not lowered yet"); return;
L_08A666C4:
    rt.unsupported(0x08A666C4u, 0x20223034u, "unknown not lowered yet"); return;
L_08A66874:
    rt.unsupported(0x08A66874u, 0x74696E75u, "unknown not lowered yet"); return;
L_08A66880:
    rt.unsupported(0x08A66880u, 0x4D56533Cu, "unknown not lowered yet"); return;
L_08A66894:
    rt.unsupported(0x08A66894u, 0x7974204Eu, "unknown not lowered yet"); return;
L_08A668A4:
    rt.unsupported(0x08A668A4u, 0x22524F52u, "unknown not lowered yet"); return;
L_08A668CC:
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
    rt.unsupported(0x08A668D0u, 0x70223D65u, "unknown not lowered yet"); return;
L_08A66910:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A6691Cu, 0x78202265u, "unknown not lowered yet"); return;
L_08A66950:
    rt.unsupported(0x08A66950u, 0x22303222u, "unknown not lowered yet"); return;
L_08A66B5C:
    rt.unsupported(0x08A66B5Cu, 0x74696E75u, "unknown not lowered yet"); return;
L_08A66B70:
    rt.unsupported(0x08A66B70u, 0x4D56533Cu, "unknown not lowered yet"); return;
L_08A66B84:
    rt.unsupported(0x08A66B84u, 0x7974204Eu, "unknown not lowered yet"); return;
L_08A66B94:
    rt.unsupported(0x08A66B94u, 0x22524F52u, "unknown not lowered yet"); return;
L_08A66BC4:
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
    rt.unsupported(0x08A66BC8u, 0x70223D65u, "unknown not lowered yet"); return;
L_08A66C08:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A66C14u, 0x78202265u, "unknown not lowered yet"); return;
L_08A66C48:
    rt.unsupported(0x08A66C48u, 0x22303222u, "unknown not lowered yet"); return;
L_08A66C6C:
    rt.unsupported(0x08A66C6Cu, 0x23223D72u, "unknown not lowered yet"); return;
L_08A66CA4:
    (void)(8224u << 16u);
    if (aot_gpr[2] != aot_gpr[24]) {
    rt.unsupported(0x08A66CACu, 0x41455241u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 22u, 0x08A781FCu>(ctx, &aot_mem); return;
    }
    goto L_08A66CB0;
L_08A66CB0:
    ctx.execute_vfpu_vminmax(32u, 110u, 97u, 1u, false);
    rt.unsupported(0x08A66CB4u, 0x77223D65u, "unknown not lowered yet"); return;
L_08A66D08:
    rt.unsupported(0x08A66D08u, 0x223D676Eu, "unknown not lowered yet"); return;
L_08A66D1C:
    rt.unsupported(0x08A66D1Cu, 0x223D656Cu, "unknown not lowered yet"); return;
L_08A66D68:
    rt.unsupported(0x08A66D68u, 0x200A3E41u, "unknown not lowered yet"); return;
L_08A66D78:
    rt.unsupported(0x08A66D78u, 0x77223D65u, "unknown not lowered yet"); return;
L_08A66E00:
    ctx.execute_vfpu_compare3(32u, 99u, 114u, 1u, 6u);
    rt.unsupported(0x08A66E04u, 0x74207373u, "unknown not lowered yet"); return;
L_08A66E1C:
    if (aot_gpr[25] == aot_gpr[28]) {
    rt.unsupported(0x08A66E20u, 0x6E205445u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0618_entry, 618u, 257u, 0x08A6EEA0u>(ctx, &aot_mem); return;
    }
    goto L_08A66E24;
L_08A66E24:
    aot_gpr[5] = (28001u << 16u);
    rt.unsupported(0x08A66E28u, 0x746F6E22u, "unknown not lowered yet"); return;
L_08A66E58:
    rt.unsupported(0x08A66E58u, 0x00000001u, "special? not lowered yet"); return;
L_08A66F10:
    rt.unsupported(0x08A66F10u, 0x74617473u, "unknown not lowered yet"); return;
L_08A66F20:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 6u>();
    aot_gpr[6] = (0u & 0u);
    goto L_08A66F28;
L_08A66F28:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 6u>();
    aot_gpr[6] = (0u & 0u);
    goto L_08A66F30;
L_08A66F30:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 6u>();
    aot_gpr[6] = (0u & 0u);
    goto L_08A66F38;
L_08A66F38:
    if (aot_gpr[26] == aot_gpr[15]) {
    ctx.execute_vfpu_vscl_ct<121u, 115u, 116u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 158u, 0x08A7C888u>(ctx, &aot_mem); return;
    }
    goto L_08A66F40;
L_08A66F40:
    rt.unsupported(0x08A66F40u, 0x7272456Du, "unknown not lowered yet"); return;
L_08A66F4C:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A66F54;
L_08A66F54:
    rt.unsupported(0x08A66F54u, 0x204F5653u, "unknown not lowered yet"); return;
L_08A66F60:
    if (aot_gpr[18] == aot_gpr[15]) {
    rt.unsupported(0x08A66F64u, 0x202D2D20u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 58u, 0x08A7B8ACu>(ctx, &aot_mem); return;
    }
    goto L_08A66F68;
L_08A66F68:
    aot_gpr[14] = (0u | 0u);
    // nop
    goto L_08A66F70;
L_08A66F70:
    rt.unsupported(0x08A66F74u, 0x5445534Eu, "control flow in delay slot"); return;
L_08A66F78:
    // nop
    goto L_08A66F7C;
L_08A66F7C:
    rt.unsupported(0x08A66F80u, 0x54534741u, "control flow in delay slot"); return;
L_08A66F84:
    rt.unsupported(0x08A66F84u, 0x00545241u, "special? not lowered yet"); return;
L_08A66F88:
    rt.unsupported(0x08A66F8Cu, 0x52455359u, "control flow in delay slot"); return;
L_08A66F90:
    aot_gpr[9] = (ctx.lo);
    goto L_08A66F94;
L_08A66F94:
    rt.unsupported(0x08A66F98u, 0x08A66F7Cu, "control flow in delay slot"); return;
L_08A66F98:
    rt.unsupported(0x08A66F9Cu, 0x08A66F88u, "control flow in delay slot"); return;
L_08A66FA4:
    rt.unsupported(0x08A66FA4u, 0x72756F53u, "unknown not lowered yet"); return;
L_08A66FB8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(27765) ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[3] - aot_gpr[16]);
    goto L_08A66FC4;
L_08A66FC4:
    if (aot_gpr[2] == aot_gpr[15]) {
    rt.unsupported(0x08A66FC8u, 0x4947554Cu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 164u, 0x08A7C914u>(ctx, &aot_mem); return;
    }
    goto L_08A66FCC;
L_08A66FCC:
    rt.unsupported(0x08A66FCCu, 0x0000004Eu, "special? not lowered yet"); return;
L_08A66FD0:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    rt.unsupported(0x08A66FE0u, 0x00736579u, "special? not lowered yet"); return;
L_08A66FE4:
    aot_gpr[12] = (0u | 0u);
    goto L_08A66FE8;
L_08A66FE8:
    rt.unsupported(0x08A66FE8u, 0x74786574u, "unknown not lowered yet"); return;
L_08A66FF0:
    rt.unsupported(0x08A66FF0u, 0x616C7565u, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0610(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0610_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_610(Runtime &runtime) {
    runtime.register_generated_unit(610u, 0x08A66000u, 4096u, &recomp_unit_0610, &recomp_unit_0610_entry);
    runtime.register_function(0x08A66000u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66018u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A660C0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A660CCu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66250u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A662A0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A662B4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A662D0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A662DCu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A662ECu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A665A0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A665B0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A665C4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A665D4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A665FCu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A6665Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66694u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A666A0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A666C4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66874u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66880u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66894u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A668A4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A668CCu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66910u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66950u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66B5Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66B70u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66B84u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66B94u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66BC4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66C08u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66C48u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66C6Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66CA4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66CB0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66D08u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66D1Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66D68u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66D78u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66E00u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66E1Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66E24u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66E58u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F10u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F20u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F28u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F30u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F38u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F40u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F4Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F54u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F60u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F68u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F70u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F78u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F7Cu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F84u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F88u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F90u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F94u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66F98u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FA4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FB8u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FC4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FCCu, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FD0u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FE4u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FE8u, &recomp_unit_0610, "recomp_unit_0610");
    runtime.register_function(0x08A66FF0u, &recomp_unit_0610, "recomp_unit_0610");
}
} // namespace psprecomp
