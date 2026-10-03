#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0070[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0,
    10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21,
    0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 30, 0, 0, 31, 0, 0, 32, 0,
    33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 0,
    57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69,
    0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0,
    0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 147,
};
void recomp_unit_0070_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0884A004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0070[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884A004;
    case 2u: goto L_0884A010;
    case 3u: goto L_0884A024;
    case 4u: goto L_0884A034;
    case 5u: goto L_0884A03C;
    case 6u: goto L_0884A04C;
    case 7u: goto L_0884A058;
    case 8u: goto L_0884A06C;
    case 9u: goto L_0884A07C;
    case 10u: goto L_0884A084;
    case 11u: goto L_0884A094;
    case 12u: goto L_0884A0A0;
    case 13u: goto L_0884A0B4;
    case 14u: goto L_0884A0C4;
    case 15u: goto L_0884A0CC;
    case 16u: goto L_0884A0DC;
    case 17u: goto L_0884A0E8;
    case 18u: goto L_0884A104;
    case 19u: goto L_0884A15C;
    case 20u: goto L_0884A174;
    case 21u: goto L_0884A180;
    case 22u: goto L_0884A190;
    case 23u: goto L_0884A19C;
    case 24u: goto L_0884A1A8;
    case 25u: goto L_0884A1B4;
    case 26u: goto L_0884A1BC;
    case 27u: goto L_0884A1C8;
    case 28u: goto L_0884A1D4;
    case 29u: goto L_0884A1E0;
    case 30u: goto L_0884A1E4;
    case 31u: goto L_0884A1F0;
    case 32u: goto L_0884A1FC;
    case 33u: goto L_0884A204;
    case 34u: goto L_0884A20C;
    case 35u: goto L_0884A220;
    case 36u: goto L_0884A250;
    case 37u: goto L_0884A2BC;
    case 38u: goto L_0884A2C8;
    case 39u: goto L_0884A2D0;
    case 40u: goto L_0884A2FC;
    case 41u: goto L_0884A348;
    case 42u: goto L_0884A390;
    case 43u: goto L_0884A3C8;
    case 44u: goto L_0884A3FC;
    case 45u: goto L_0884A42C;
    case 46u: goto L_0884A44C;
    case 47u: goto L_0884A458;
    case 48u: goto L_0884A478;
    case 49u: goto L_0884A484;
    case 50u: goto L_0884A4B0;
    case 51u: goto L_0884A4BC;
    case 52u: goto L_0884A4D4;
    case 53u: goto L_0884A4DC;
    case 54u: goto L_0884A4E8;
    case 55u: goto L_0884A4F0;
    case 56u: goto L_0884A4F8;
    case 57u: goto L_0884A504;
    case 58u: goto L_0884A50C;
    case 59u: goto L_0884A514;
    case 60u: goto L_0884A524;
    case 61u: goto L_0884A52C;
    case 62u: goto L_0884A544;
    case 63u: goto L_0884A56C;
    case 64u: goto L_0884A57C;
    case 65u: goto L_0884A598;
    case 66u: goto L_0884A5C0;
    case 67u: goto L_0884A5D0;
    case 68u: goto L_0884A5EC;
    case 69u: goto L_0884A600;
    case 70u: goto L_0884A60C;
    case 71u: goto L_0884A61C;
    case 72u: goto L_0884A650;
    case 73u: goto L_0884A67C;
    case 74u: goto L_0884A85C;
    case 75u: goto L_0884A86C;
    case 76u: goto L_0884A88C;
    case 77u: goto L_0884A89C;
    case 78u: goto L_0884A8B4;
    case 79u: goto L_0884A8C0;
    case 80u: goto L_0884A8E8;
    case 81u: goto L_0884A8F4;
    case 82u: goto L_0884A908;
    case 83u: goto L_0884A920;
    case 84u: goto L_0884A950;
    case 85u: goto L_0884A95C;
    case 86u: goto L_0884A96C;
    case 87u: goto L_0884A984;
    case 88u: goto L_0884A998;
    case 89u: goto L_0884A9C8;
    case 90u: goto L_0884A9D4;
    case 91u: goto L_0884A9EC;
    case 92u: goto L_0884AA04;
    case 93u: goto L_0884AA34;
    case 94u: goto L_0884AA40;
    case 95u: goto L_0884AA50;
    case 96u: goto L_0884AA68;
    case 97u: goto L_0884AA7C;
    case 98u: goto L_0884AA90;
    case 99u: goto L_0884AAA4;
    case 100u: goto L_0884AAB8;
    case 101u: goto L_0884AACC;
    case 102u: goto L_0884AAE0;
    case 103u: goto L_0884AAF4;
    case 104u: goto L_0884AB24;
    case 105u: goto L_0884AB30;
    case 106u: goto L_0884AB48;
    case 107u: goto L_0884AB60;
    case 108u: goto L_0884AB90;
    case 109u: goto L_0884AB9C;
    case 110u: goto L_0884ABAC;
    case 111u: goto L_0884ABC4;
    case 112u: goto L_0884ABF4;
    case 113u: goto L_0884AC00;
    case 114u: goto L_0884AC24;
    case 115u: goto L_0884AC3C;
    case 116u: goto L_0884AC70;
    case 117u: goto L_0884AC7C;
    case 118u: goto L_0884AC8C;
    case 119u: goto L_0884ACA4;
    case 120u: goto L_0884ACD4;
    case 121u: goto L_0884ACE0;
    case 122u: goto L_0884AD20;
    case 123u: goto L_0884AD38;
    case 124u: goto L_0884AD68;
    case 125u: goto L_0884AD74;
    case 126u: goto L_0884AD84;
    case 127u: goto L_0884AD9C;
    case 128u: goto L_0884ADCC;
    case 129u: goto L_0884ADD8;
    case 130u: goto L_0884AE20;
    case 131u: goto L_0884AE3C;
    case 132u: goto L_0884AE6C;
    case 133u: goto L_0884AE78;
    case 134u: goto L_0884AE88;
    case 135u: goto L_0884AE9C;
    case 136u: goto L_0884AECC;
    case 137u: goto L_0884AED8;
    case 138u: goto L_0884AF18;
    case 139u: goto L_0884AF2C;
    case 140u: goto L_0884AF5C;
    case 141u: goto L_0884AF68;
    case 142u: goto L_0884AF90;
    case 143u: goto L_0884AFA4;
    case 144u: goto L_0884AFD4;
    case 145u: goto L_0884AFE0;
    case 146u: goto L_0884AFE8;
    case 147u: goto L_0884AFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884A004:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884A010u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884A010u) goto L_0884A010;
    return;
L_0884A010:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884A024u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2440));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A024u) goto L_0884A024;
    return;
L_0884A024:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884A034u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A034u) goto L_0884A034;
    return;
L_0884A034:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A058;
      }
      goto L_0884A03C;
    }
L_0884A03C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884A04Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A04Cu) goto L_0884A04C;
    return;
L_0884A04C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884A058u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884A058u) goto L_0884A058;
    return;
L_0884A058:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884A06Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2428));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A06Cu) goto L_0884A06C;
    return;
L_0884A06C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884A07Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A07Cu) goto L_0884A07C;
    return;
L_0884A07C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A0A0;
      }
      goto L_0884A084;
    }
L_0884A084:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884A094u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A094u) goto L_0884A094;
    return;
L_0884A094:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884A0A0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884A0A0u) goto L_0884A0A0;
    return;
L_0884A0A0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884A0B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2416));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A0B4u) goto L_0884A0B4;
    return;
L_0884A0B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884A0C4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A0C4u) goto L_0884A0C4;
    return;
L_0884A0C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A0E8;
      }
      goto L_0884A0CC;
    }
L_0884A0CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884A0DCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A0DCu) goto L_0884A0DC;
    return;
L_0884A0DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884A0E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884A0E8u) goto L_0884A0E8;
    return;
L_0884A0E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884A15Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A15Cu) goto L_0884A15C;
    return;
L_0884A15C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A220;
      }
      goto L_0884A174;
    }
L_0884A174:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884A180u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0884A180u) goto L_0884A180;
    return;
L_0884A180:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884A190u);
    aot_gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884A190u) goto L_0884A190;
    return;
L_0884A190:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A20C;
      }
      goto L_0884A19C;
    }
L_0884A19C:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[20]));
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[23]);
      if (branch_taken) {
          goto L_0884A1B4;
      }
      goto L_0884A1A8;
    }
L_0884A1A8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0884A1B4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0884A1B4u) goto L_0884A1B4;
    return;
L_0884A1B4:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A1C8;
      }
      goto L_0884A1BC;
    }
L_0884A1BC:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(71));
    aot_gpr[31] = (0x0884A1C8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0884A1C8u) goto L_0884A1C8;
    return;
L_0884A1C8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884A1D4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884A1D4u) goto L_0884A1D4;
    return;
L_0884A1D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A1E4;
      }
      goto L_0884A1E0;
    }
L_0884A1E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    goto L_0884A1E4;
L_0884A1E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884A1F0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884A1F0u) goto L_0884A1F0;
    return;
L_0884A1F0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A204;
      }
      goto L_0884A1FC;
    }
L_0884A1FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0884A204;
L_0884A204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A220;
      }
      goto L_0884A20C;
    }
L_0884A20C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884A174;
      }
      goto L_0884A220;
    }
L_0884A220:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[14] = (aot_gpr[5] | 0u);
    aot_gpr[12] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[3] = (24948u << 16u);
    aot_gpr[2] = (28787u << 16u);
    aot_gpr[11] = (30319u << 16u);
    aot_gpr[10] = (23667u << 16u);
    aot_gpr[9] = (19807u << 16u);
    aot_gpr[8] = (25961u << 16u);
    aot_gpr[7] = (29806u << 16u);
    aot_gpr[6] = (26221u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[15] = (aot_gpr[13] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24932));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28767));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(19804));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(25961));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(17734));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(30319));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18783));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28718));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[15] != 0u;
    aot_gpr[4] = (aot_gpr[14] | 0u);
      if (branch_taken) {
          goto L_0884A3FC;
      }
      goto L_0884A2BC;
    }
L_0884A2BC:
    aot_gpr[15] = (0u | 14u);
    { const bool branch_taken = aot_gpr[13] == aot_gpr[15];
    aot_gpr[14] = (0u | 15u);
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A2C8;
    }
L_0884A2C8:
    if (aot_gpr[13] != aot_gpr[14]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
        goto L_0884A3C8;
    }
    goto L_0884A2D0;
L_0884A2D0:
    aot_gpr[25] = (aot_gpr[14] | 0u);
    aot_gpr[31] = (aot_gpr[13] | 0u);
    aot_gpr[24] = (21843u << 16u);
    aot_gpr[15] = (21577u << 16u);
    aot_gpr[14] = (24403u << 16u);
    aot_gpr[13] = (20041u << 16u);
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(24400));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(21570));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(17740));
    { const bool branch_taken = aot_gpr[31] != aot_gpr[25];
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(16717));
      if (branch_taken) {
          goto L_0884A348;
      }
      goto L_0884A2FC;
    }
L_0884A2FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[25] = (19039u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(28530));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(28), aot_gpr[25]);
    aot_gpr[25] = (21328u << 16u);
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(11856));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(32), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(36), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(40), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(44), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(48), aot_gpr[13]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884A390;
      }
      goto L_0884A348;
    }
L_0884A348:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[25] = (19295u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(28530));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(28), aot_gpr[25]);
    aot_gpr[25] = (21328u << 16u);
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(11855));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(32), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(36), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(40), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(44), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(48), aot_gpr[13]);
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_0884A390;
L_0884A390:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (16735u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28530));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[13] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884A42C;
      }
      goto L_0884A3C8;
    }
L_0884A3C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (16991u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28530));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884A42C;
      }
      goto L_0884A3FC;
    }
L_0884A3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (16735u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28530));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_0884A42C;
L_0884A42C:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[13] | 0u);
    aot_gpr[31] = (0x0884A44Cu);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    goto L_0884A104;
L_0884A44C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0884A478u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3380)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 212u, 0x08852DD8u>(ctx, &aot_mem) && ctx.pc == 0x0884A478u) goto L_0884A478;
    return;
L_0884A478:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2404));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0884A4B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2392));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A4B0u) goto L_0884A4B0;
    return;
L_0884A4B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884A4BCu);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884A4BCu) goto L_0884A4BC;
    return;
L_0884A4BC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
    aot_gpr[31] = (0x0884A4D4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 56u, 0x0886D384u>(ctx, &aot_mem) && ctx.pc == 0x0884A4D4u) goto L_0884A4D4;
    return;
L_0884A4D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (17u << 16u);
      if (branch_taken) {
          goto L_0884A4E8;
      }
      goto L_0884A4DC;
    }
L_0884A4DC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25727));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0884A52C;
      }
      goto L_0884A4E8;
    }
L_0884A4E8:
    aot_gpr[31] = (0x0884A4F0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 56u, 0x0886D384u>(ctx, &aot_mem) && ctx.pc == 0x0884A4F0u) goto L_0884A4F0;
    return;
L_0884A4F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (113u << 16u);
      if (branch_taken) {
          goto L_0884A504;
      }
      goto L_0884A4F8;
    }
L_0884A4F8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29539));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0884A52C;
      }
      goto L_0884A504;
    }
L_0884A504:
    aot_gpr[31] = (0x0884A50Cu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 56u, 0x0886D384u>(ctx, &aot_mem) && ctx.pc == 0x0884A50Cu) goto L_0884A50C;
    return;
L_0884A50C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (8u << 16u);
      if (branch_taken) {
          goto L_0884A524;
      }
      goto L_0884A514;
    }
L_0884A514:
    aot_gpr[4] = (55u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19320));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0884A52C;
      }
      goto L_0884A524;
    }
L_0884A524:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2056));
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[4]);
    goto L_0884A52C;
L_0884A52C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-2376));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3336)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0884A56Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 126u, 0x08853940u>(ctx, &aot_mem) && ctx.pc == 0x0884A56Cu) goto L_0884A56C;
    return;
L_0884A56C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884A57Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A57Cu) goto L_0884A57C;
    return;
L_0884A57C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3336)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-2376));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0884A5C0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 126u, 0x08853940u>(ctx, &aot_mem) && ctx.pc == 0x0884A5C0u) goto L_0884A5C0;
    return;
L_0884A5C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884A5D0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A5D0u) goto L_0884A5D0;
    return;
L_0884A5D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A5EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0884A600u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3340)));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 137u, 0x08853A4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A600u) goto L_0884A600;
    return;
L_0884A600:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A60C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3340)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A61C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[31]);
    aot_gpr[31] = (0x0884A650u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 32u, 0x088621BCu>(ctx, &aot_mem) && ctx.pc == 0x0884A650u) goto L_0884A650;
    return;
L_0884A650:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884A67Cu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A67Cu) goto L_0884A67C;
    return;
L_0884A67C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2344));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2304));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2284));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2272));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2252));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2232));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2216));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2200));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2184));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2168));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2404));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2140));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2124));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2040));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2012));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1984));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1972));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1956));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1944));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1856));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1688));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1476));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1460));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1412));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1380));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-956));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-940));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-752));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-736));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-716));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-696));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-684));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-668));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-656));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-2324));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-2152));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-2104));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-2060));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-1840));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1444));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884A86C;
      }
      goto L_0884A85C;
    }
L_0884A85C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10464));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884A86C;
L_0884A86C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3148), aot_gpr[16]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-2488));
    aot_gpr[31] = (0x0884A88Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A88Cu) goto L_0884A88C;
    return;
L_0884A88C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3148)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0884A89Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 186u, 0x08872DB0u>(ctx, &aot_mem) && ctx.pc == 0x0884A89Cu) goto L_0884A89C;
    return;
L_0884A89C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884A8B4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2356));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A8B4u) goto L_0884A8B4;
    return;
L_0884A8B4:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0884A8C0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0884A8C0u) goto L_0884A8C0;
    return;
L_0884A8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884A8E8u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A8E8u) goto L_0884A8E8;
    return;
L_0884A8E8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884A908;
      }
      goto L_0884A8F4;
    }
L_0884A8F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8888));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884A908;
L_0884A908:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3152), aot_gpr[16]);
    aot_gpr[31] = (0x0884A920u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A920u) goto L_0884A920;
    return;
L_0884A920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884A950u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A950u) goto L_0884A950;
    return;
L_0884A950:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884A96C;
      }
      goto L_0884A95C;
    }
L_0884A95C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9040));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884A96C;
L_0884A96C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3236), aot_gpr[16]);
    aot_gpr[31] = (0x0884A984u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A984u) goto L_0884A984;
    return;
L_0884A984:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3236)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884A998u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A998u) goto L_0884A998;
    return;
L_0884A998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3236)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884A9C8u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A9C8u) goto L_0884A9C8;
    return;
L_0884A9C8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884A9EC;
      }
      goto L_0884A9D4;
    }
L_0884A9D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12192));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884A9EC;
L_0884A9EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3424), aot_gpr[16]);
    aot_gpr[31] = (0x0884AA04u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AA04u) goto L_0884AA04;
    return;
L_0884AA04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AA34u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AA34u) goto L_0884AA34;
    return;
L_0884AA34:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AA50;
      }
      goto L_0884AA40;
    }
L_0884AA40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10232));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AA50;
L_0884AA50:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3156), aot_gpr[16]);
    aot_gpr[31] = (0x0884AA68u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AA68u) goto L_0884AA68;
    return;
L_0884AA68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AA7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AA7Cu) goto L_0884AA7C;
    return;
L_0884AA7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AA90u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AA90u) goto L_0884AA90;
    return;
L_0884AA90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AAA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AAA4u) goto L_0884AAA4;
    return;
L_0884AAA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AAB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AAB8u) goto L_0884AAB8;
    return;
L_0884AAB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AACCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AACCu) goto L_0884AACC;
    return;
L_0884AACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AAE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AAE0u) goto L_0884AAE0;
    return;
L_0884AAE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884AAF4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AAF4u) goto L_0884AAF4;
    return;
L_0884AAF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AB24u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AB24u) goto L_0884AB24;
    return;
L_0884AB24:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AB48;
      }
      goto L_0884AB30;
    }
L_0884AB30:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8000));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AB48;
L_0884AB48:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3160), aot_gpr[16]);
    aot_gpr[31] = (0x0884AB60u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AB60u) goto L_0884AB60;
    return;
L_0884AB60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AB90u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AB90u) goto L_0884AB90;
    return;
L_0884AB90:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884ABAC;
      }
      goto L_0884AB9C;
    }
L_0884AB9C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10992));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884ABAC;
L_0884ABAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3172), aot_gpr[16]);
    aot_gpr[31] = (0x0884ABC4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884ABC4u) goto L_0884ABC4;
    return;
L_0884ABC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884ABF4u);
    aot_gpr[6] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884ABF4u) goto L_0884ABF4;
    return;
L_0884ABF4:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AC24;
      }
      goto L_0884AC00;
    }
L_0884AC00:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10968));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AC24;
L_0884AC24:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3176), aot_gpr[16]);
    aot_gpr[31] = (0x0884AC3Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AC3Cu) goto L_0884AC3C;
    return;
L_0884AC3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AC70u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AC70u) goto L_0884AC70;
    return;
L_0884AC70:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AC8C;
      }
      goto L_0884AC7C;
    }
L_0884AC7C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10816));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AC8C;
L_0884AC8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3180), aot_gpr[16]);
    aot_gpr[31] = (0x0884ACA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884ACA4u) goto L_0884ACA4;
    return;
L_0884ACA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3180)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884ACD4u);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884ACD4u) goto L_0884ACD4;
    return;
L_0884ACD4:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AD20;
      }
      goto L_0884ACE0;
    }
L_0884ACE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10792));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AD20;
L_0884AD20:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3184), aot_gpr[16]);
    aot_gpr[31] = (0x0884AD38u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AD38u) goto L_0884AD38;
    return;
L_0884AD38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AD68u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AD68u) goto L_0884AD68;
    return;
L_0884AD68:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AD84;
      }
      goto L_0884AD74;
    }
L_0884AD74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AD84;
L_0884AD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3188), aot_gpr[16]);
    aot_gpr[31] = (0x0884AD9Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AD9Cu) goto L_0884AD9C;
    return;
L_0884AD9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(3188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884ADCCu);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884ADCCu) goto L_0884ADCC;
    return;
L_0884ADCC:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AE20;
      }
      goto L_0884ADD8;
    }
L_0884ADD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10880));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AE20;
L_0884AE20:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3192), aot_gpr[16]);
    aot_gpr[31] = (0x0884AE3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AE3Cu) goto L_0884AE3C;
    return;
L_0884AE3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(3192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AE6Cu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AE6Cu) goto L_0884AE6C;
    return;
L_0884AE6C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884AE88;
      }
      goto L_0884AE78;
    }
L_0884AE78:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11080));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AE88;
L_0884AE88:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3196), aot_gpr[16]);
    aot_gpr[31] = (0x0884AE9Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AE9Cu) goto L_0884AE9C;
    return;
L_0884AE9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AECCu);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AECCu) goto L_0884AECC;
    return;
L_0884AECC:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AF18;
      }
      goto L_0884AED8;
    }
L_0884AED8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11056));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AF18;
L_0884AF18:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3200), aot_gpr[16]);
    aot_gpr[31] = (0x0884AF2Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AF2Cu) goto L_0884AF2C;
    return;
L_0884AF2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AF5Cu);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AF5Cu) goto L_0884AF5C;
    return;
L_0884AF5C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AF90;
      }
      goto L_0884AF68;
    }
L_0884AF68:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10728));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884AF90;
L_0884AF90:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3204), aot_gpr[16]);
    aot_gpr[31] = (0x0884AFA4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884AFA4u) goto L_0884AFA4;
    return;
L_0884AFA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884AFD4u);
    aot_gpr[6] = (0u | 96u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AFD4u) goto L_0884AFD4;
    return;
L_0884AFD4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884AFF8;
      }
      goto L_0884AFE0;
    }
L_0884AFE0:
    aot_gpr[31] = (0x0884AFE8u);
    aot_gpr[5] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884AFE8u) goto L_0884AFE8;
    return;
L_0884AFE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10704));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884AFF8;
L_0884AFF8:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    ctx.pc = 0x0884B000u; return;
}

void recomp_unit_0070(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0070_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_70(Runtime &runtime) {
    runtime.register_generated_unit(70u, 0x0884A000u, 4096u, &recomp_unit_0070, &recomp_unit_0070_entry);
    runtime.register_function(0x0884A004u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A010u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A034u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A03Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A04Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A058u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A06Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A084u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A094u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A0A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A0C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A0DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A0E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A104u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A15Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A174u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A19Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A1FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A204u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A20Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A250u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A2C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A2D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A348u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A390u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A3C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A3FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A42Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A458u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A478u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A4F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A50Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A514u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A524u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A52Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A544u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A56Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A598u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A5D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A5ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A60Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A61Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A650u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A67Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A85Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A86Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A88Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A89Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A8B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A8C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A8E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A8F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A920u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A984u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A998u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A9C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884A9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AA90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AAE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AAF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AB30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AB48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AB60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AB90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AB9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ABACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ABC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ABF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AC3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AC70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AC7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AC8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ACA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ACD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ACE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AD20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AD38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AD68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AD74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AD9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ADCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884ADD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AE20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AE3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AE6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AE78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AE9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AED8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AF18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AF2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AF5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AF68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AF90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AFA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AFD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AFE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0884AFF8u, &recomp_unit_0070, "recomp_unit_0070");
}
} // namespace psprecomp
