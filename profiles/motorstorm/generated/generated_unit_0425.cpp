#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0425[1024] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0,
    0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0,
    59, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 68, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 133, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0,
    144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154,
    0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 162, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172,
};
void recomp_unit_0425_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089AD000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0425[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AD000;
    case 2u: goto L_089AD00C;
    case 3u: goto L_089AD018;
    case 4u: goto L_089AD04C;
    case 5u: goto L_089AD054;
    case 6u: goto L_089AD070;
    case 7u: goto L_089AD0A0;
    case 8u: goto L_089AD0A8;
    case 9u: goto L_089AD0B4;
    case 10u: goto L_089AD0D4;
    case 11u: goto L_089AD0E8;
    case 12u: goto L_089AD0F8;
    case 13u: goto L_089AD104;
    case 14u: goto L_089AD10C;
    case 15u: goto L_089AD11C;
    case 16u: goto L_089AD150;
    case 17u: goto L_089AD160;
    case 18u: goto L_089AD174;
    case 19u: goto L_089AD1A0;
    case 20u: goto L_089AD1B8;
    case 21u: goto L_089AD1C0;
    case 22u: goto L_089AD1C8;
    case 23u: goto L_089AD1D0;
    case 24u: goto L_089AD1E8;
    case 25u: goto L_089AD20C;
    case 26u: goto L_089AD218;
    case 27u: goto L_089AD24C;
    case 28u: goto L_089AD258;
    case 29u: goto L_089AD270;
    case 30u: goto L_089AD294;
    case 31u: goto L_089AD2A0;
    case 32u: goto L_089AD2E0;
    case 33u: goto L_089AD2E8;
    case 34u: goto L_089AD310;
    case 35u: goto L_089AD318;
    case 36u: goto L_089AD324;
    case 37u: goto L_089AD358;
    case 38u: goto L_089AD384;
    case 39u: goto L_089AD3B0;
    case 40u: goto L_089AD3C4;
    case 41u: goto L_089AD408;
    case 42u: goto L_089AD410;
    case 43u: goto L_089AD414;
    case 44u: goto L_089AD41C;
    case 45u: goto L_089AD458;
    case 46u: goto L_089AD470;
    case 47u: goto L_089AD490;
    case 48u: goto L_089AD498;
    case 49u: goto L_089AD4B8;
    case 50u: goto L_089AD4C0;
    case 51u: goto L_089AD4C8;
    case 52u: goto L_089AD520;
    case 53u: goto L_089AD538;
    case 54u: goto L_089AD544;
    case 55u: goto L_089AD54C;
    case 56u: goto L_089AD558;
    case 57u: goto L_089AD564;
    case 58u: goto L_089AD574;
    case 59u: goto L_089AD580;
    case 60u: goto L_089AD588;
    case 61u: goto L_089AD58C;
    case 62u: goto L_089AD5B0;
    case 63u: goto L_089AD5B8;
    case 64u: goto L_089AD5D8;
    case 65u: goto L_089AD5E8;
    case 66u: goto L_089AD624;
    case 67u: goto L_089AD628;
    case 68u: goto L_089AD630;
    case 69u: goto L_089AD634;
    case 70u: goto L_089AD648;
    case 71u: goto L_089AD674;
    case 72u: goto L_089AD694;
    case 73u: goto L_089AD6A8;
    case 74u: goto L_089AD6D8;
    case 75u: goto L_089AD6EC;
    case 76u: goto L_089AD6F4;
    case 77u: goto L_089AD70C;
    case 78u: goto L_089AD730;
    case 79u: goto L_089AD73C;
    case 80u: goto L_089AD77C;
    case 81u: goto L_089AD780;
    case 82u: goto L_089AD7B4;
    case 83u: goto L_089AD7BC;
    case 84u: goto L_089AD7C8;
    case 85u: goto L_089AD7D4;
    case 86u: goto L_089AD7E4;
    case 87u: goto L_089AD808;
    case 88u: goto L_089AD810;
    case 89u: goto L_089AD818;
    case 90u: goto L_089AD828;
    case 91u: goto L_089AD848;
    case 92u: goto L_089AD854;
    case 93u: goto L_089AD868;
    case 94u: goto L_089AD894;
    case 95u: goto L_089AD8B0;
    case 96u: goto L_089AD8BC;
    case 97u: goto L_089AD8E8;
    case 98u: goto L_089AD94C;
    case 99u: goto L_089AD978;
    case 100u: goto L_089AD998;
    case 101u: goto L_089AD9DC;
    case 102u: goto L_089AD9FC;
    case 103u: goto L_089ADA0C;
    case 104u: goto L_089ADA68;
    case 105u: goto L_089ADA78;
    case 106u: goto L_089ADA9C;
    case 107u: goto L_089ADAB4;
    case 108u: goto L_089ADABC;
    case 109u: goto L_089ADAC4;
    case 110u: goto L_089ADAD0;
    case 111u: goto L_089ADAE8;
    case 112u: goto L_089ADAF8;
    case 113u: goto L_089ADB20;
    case 114u: goto L_089ADB4C;
    case 115u: goto L_089ADB5C;
    case 116u: goto L_089ADB88;
    case 117u: goto L_089ADB90;
    case 118u: goto L_089ADB9C;
    case 119u: goto L_089ADBB0;
    case 120u: goto L_089ADBB8;
    case 121u: goto L_089ADBC0;
    case 122u: goto L_089ADBC8;
    case 123u: goto L_089ADBEC;
    case 124u: goto L_089ADC44;
    case 125u: goto L_089ADC4C;
    case 126u: goto L_089ADC50;
    case 127u: goto L_089ADC80;
    case 128u: goto L_089ADC8C;
    case 129u: goto L_089ADC94;
    case 130u: goto L_089ADCA4;
    case 131u: goto L_089ADCC8;
    case 132u: goto L_089ADCE0;
    case 133u: goto L_089ADCE4;
    case 134u: goto L_089ADCF0;
    case 135u: goto L_089ADD00;
    case 136u: goto L_089ADD0C;
    case 137u: goto L_089ADD14;
    case 138u: goto L_089ADD20;
    case 139u: goto L_089ADD28;
    case 140u: goto L_089ADD34;
    case 141u: goto L_089ADD44;
    case 142u: goto L_089ADD70;
    case 143u: goto L_089ADD78;
    case 144u: goto L_089ADD80;
    case 145u: goto L_089ADD90;
    case 146u: goto L_089ADD98;
    case 147u: goto L_089ADDCC;
    case 148u: goto L_089ADDF8;
    case 149u: goto L_089ADE18;
    case 150u: goto L_089ADE38;
    case 151u: goto L_089ADE4C;
    case 152u: goto L_089ADE60;
    case 153u: goto L_089ADE70;
    case 154u: goto L_089ADE7C;
    case 155u: goto L_089ADE84;
    case 156u: goto L_089ADE8C;
    case 157u: goto L_089ADE9C;
    case 158u: goto L_089ADEAC;
    case 159u: goto L_089ADEB4;
    case 160u: goto L_089ADEE4;
    case 161u: goto L_089ADF10;
    case 162u: goto L_089ADF14;
    case 163u: goto L_089ADF18;
    case 164u: goto L_089ADF3C;
    case 165u: goto L_089ADF4C;
    case 166u: goto L_089ADF5C;
    case 167u: goto L_089ADF7C;
    case 168u: goto L_089ADF84;
    case 169u: goto L_089ADF94;
    case 170u: goto L_089ADFA4;
    case 171u: goto L_089ADFF4;
    case 172u: goto L_089ADFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AD000:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AD04C;
      }
      goto L_089AD00C;
    }
L_089AD00C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15700)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD018u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD018u) goto L_089AD018;
    return;
L_089AD018:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD04C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AD1B8;
      }
      goto L_089AD054;
    }
L_089AD054:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14928));
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16324)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD070u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD070u) goto L_089AD070;
    return;
L_089AD070:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[21] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(13));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089AD0A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD0A0u) goto L_089AD0A0;
    return;
L_089AD0A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AD10C;
      }
      goto L_089AD0A8;
    }
L_089AD0A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD0B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD0B4u) goto L_089AD0B4;
    return;
L_089AD0B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16324)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089AD0D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD0D4u) goto L_089AD0D4;
    return;
L_089AD0D4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(324));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AD150;
      }
      goto L_089AD0E8;
    }
L_089AD0E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089AD0F8;
L_089AD0F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089AD104u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD104u) goto L_089AD104;
    return;
L_089AD104:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AD0A8;
      }
      goto L_089AD10C;
    }
L_089AD10C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15700)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD11Cu);
    aot_gpr[16] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD11Cu) goto L_089AD11C;
    return;
L_089AD11C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD150:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD160u) goto L_089AD160;
    return;
L_089AD160:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089AD0E8;
      }
      goto L_089AD174;
    }
L_089AD174:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(35));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AD1A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD1A0u) goto L_089AD1A0;
    return;
L_089AD1A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089AD0F8;
L_089AD1B8:
    aot_gpr[31] = (0x089AD1C0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-10));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 101u, 0x08983560u>(ctx, &aot_mem) && ctx.pc == 0x089AD1C0u) goto L_089AD1C0;
    return;
L_089AD1C0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (2215u << 16u);
        goto L_089AD054;
    }
    goto L_089AD1C8;
L_089AD1C8:
    aot_gpr[3] = (2215u << 16u);
    goto L_089AD00C;
L_089AD1D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089AD20C;
      }
      goto L_089AD1E8;
    }
L_089AD1E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD20Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD20Cu) goto L_089AD20C;
    return;
L_089AD20C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD24Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD24Cu) goto L_089AD24C;
    return;
L_089AD24C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089AD294;
      }
      goto L_089AD270;
    }
L_089AD270:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(300)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD294u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD294u) goto L_089AD294;
    return;
L_089AD294:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD2A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089AD2E0u);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 185u, 0x089ACCE4u>(ctx, &aot_mem) && ctx.pc == 0x089AD2E0u) goto L_089AD2E0;
    return;
L_089AD2E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AD310;
      }
      goto L_089AD2E8;
    }
L_089AD2E8:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD310:
    aot_gpr[31] = (0x089AD318u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089AD258;
L_089AD318:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089AD2E8;
      }
      goto L_089AD324;
    }
L_089AD324:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089AD358u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 200u, 0x089ACE44u>(ctx, &aot_mem) && ctx.pc == 0x089AD358u) goto L_089AD358;
    return;
L_089AD358:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(-14928));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AD458;
      }
      goto L_089AD3B0;
    }
L_089AD3B0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16324)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD3C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD3C4u) goto L_089AD3C4;
    return;
L_089AD3C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
      if (branch_taken) {
          goto L_089AD470;
      }
      goto L_089AD408;
    }
L_089AD408:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    goto L_089AD410;
L_089AD410:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    goto L_089AD414;
L_089AD414:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AD458;
      }
      goto L_089AD41C;
    }
L_089AD41C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AD458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD458u) goto L_089AD458;
    return;
L_089AD458:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD470:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD490u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD490u) goto L_089AD490;
    return;
L_089AD490:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AD458;
      }
      goto L_089AD498;
    }
L_089AD498:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089AD410;
      }
      goto L_089AD4B8;
    }
L_089AD4B8:
    aot_gpr[31] = (0x089AD4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 104u, 0x089AB970u>(ctx, &aot_mem) && ctx.pc == 0x089AD4C0u) goto L_089AD4C0;
    return;
L_089AD4C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    goto L_089AD414;
L_089AD4C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(-14928));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    aot_gpr[20] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD520u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD520u) goto L_089AD520;
    return;
L_089AD520:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089AD574;
L_089AD538:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD544u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD544u) goto L_089AD544;
    return;
L_089AD544:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AD558;
      }
      goto L_089AD54C;
    }
L_089AD54C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(296)));
    if (aot_gpr[21] == aot_gpr[2]) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_089AD58C;
    }
    goto L_089AD558;
L_089AD558:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD564u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD564u) goto L_089AD564;
    return;
L_089AD564:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089AD574;
L_089AD574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AD580u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD580u) goto L_089AD580;
    return;
L_089AD580:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089AD538;
      }
      goto L_089AD588;
    }
L_089AD588:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089AD58C;
L_089AD58C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (aot_gpr[23] + static_cast<std::uint32_t>(-14928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16324)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AD5B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD5B0u) goto L_089AD5B0;
    return;
L_089AD5B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AD6A8;
      }
      goto L_089AD5B8;
    }
L_089AD5B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(300)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AD5D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD5D8u) goto L_089AD5D8;
    return;
L_089AD5D8:
    aot_gpr[20] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_089AD628;
    }
    goto L_089AD5E8;
L_089AD5E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AD624u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD624u) goto L_089AD624;
    return;
L_089AD624:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_089AD628;
L_089AD628:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089AD6D8;
      }
      goto L_089AD630;
    }
L_089AD630:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    goto L_089AD634;
L_089AD634:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16324)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD648u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD648u) goto L_089AD648;
    return;
L_089AD648:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089AD674u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD674u) goto L_089AD674;
    return;
L_089AD674:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089AD694u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 18u, 0x089AF144u>(ctx, &aot_mem) && ctx.pc == 0x089AD694u) goto L_089AD694;
    return;
L_089AD694:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD6A8u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD6A8u) goto L_089AD6A8;
    return;
L_089AD6A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD6D8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089AD6ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 18u, 0x089AF144u>(ctx, &aot_mem) && ctx.pc == 0x089AD6ECu) goto L_089AD6EC;
    return;
L_089AD6EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    goto L_089AD634;
L_089AD6F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089AD730;
      }
      goto L_089AD70C;
    }
L_089AD70C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16324)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14912)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD730u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD730u) goto L_089AD730;
    return;
L_089AD730:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD73C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-480));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(468), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(464), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(456), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(440), aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089AD7B4;
      }
      goto L_089AD77C;
    }
L_089AD77C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AD780;
L_089AD780:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(440)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(436)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD7B4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089AD780;
    }
    goto L_089AD7BC;
L_089AD7BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(276)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089AD780;
    }
    goto L_089AD7C8;
L_089AD7C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AD780;
      }
      goto L_089AD7D4;
    }
L_089AD7D4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16320)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-15));
      if (branch_taken) {
          goto L_089AD780;
      }
      goto L_089AD7E4;
    }
L_089AD7E4:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[21] = (aot_gpr[23] + static_cast<std::uint32_t>(-14928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16328)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089AD808u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD808u) goto L_089AD808;
    return;
L_089AD808:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089AD780;
    }
    goto L_089AD810;
L_089AD810:
    aot_gpr[31] = (0x089AD818u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089AD6F4;
L_089AD818:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AD828u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD828u) goto L_089AD828;
    return;
L_089AD828:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[2]);
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089AD848u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD848u) goto L_089AD848;
    return;
L_089AD848:
    aot_gpr[20] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-25));
      if (branch_taken) {
          goto L_089AD780;
      }
      goto L_089AD854;
    }
L_089AD854:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(288));
    goto L_089AD868;
L_089AD868:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AD868;
      }
      goto L_089AD894;
    }
L_089AD894:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089AD8B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 162u, 0x08988AB4u>(ctx, &aot_mem) && ctx.pc == 0x089AD8B0u) goto L_089AD8B0;
    return;
L_089AD8B0:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    goto L_089AD8BC;
L_089AD8BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AD8BC;
      }
      goto L_089AD8E8;
    }
L_089AD8E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(288)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-11388));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (2203u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11064));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[10] = (aot_gpr[17] + static_cast<std::uint32_t>(268));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), 0u);
    goto L_089AD94C;
L_089AD94C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[10];
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AD94C;
      }
      goto L_089AD978;
    }
L_089AD978:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(284)));
    aot_gpr[4] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[3]);
    aot_gpr[31] = (0x089AD998u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 3u, 0x08983018u>(ctx, &aot_mem) && ctx.pc == 0x089AD998u) goto L_089AD998;
    return;
L_089AD998:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(296), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[22]);
      if (branch_taken) {
          goto L_089AD780;
      }
      goto L_089AD9DC;
    }
L_089AD9DC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16324)));
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(-14928));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089AD9FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD9FCu) goto L_089AD9FC;
    return;
L_089AD9FC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089AD780;
L_089ADA0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[21] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16328)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(-14928));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089ADA68u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADA68u) goto L_089ADA68;
    return;
L_089ADA68:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089ADA9C;
      }
      goto L_089ADA78;
    }
L_089ADA78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADA9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089ADAB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADAB4u) goto L_089ADAB4;
    return;
L_089ADAB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ADAC4;
      }
      goto L_089ADABC;
    }
L_089ADABC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-16));
    goto L_089ADA78;
L_089ADAC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[2]);
        goto L_089ADAD0;
    }
    goto L_089ADAD0;
L_089ADAD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(-14928));
    aot_gpr[3] = (aot_gpr[2] | 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089ADABC;
      }
      goto L_089ADAE8;
    }
L_089ADAE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADAF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADAF8u) goto L_089ADAF8;
    return;
L_089ADAF8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-15692)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089ADB20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADB20u) goto L_089ADB20;
    return;
L_089ADB20:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-11064));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[31] = (0x089ADB4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(148), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 122u, 0x08983648u>(ctx, &aot_mem) && ctx.pc == 0x089ADB4Cu) goto L_089ADB4C;
    return;
L_089ADB4C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-3));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_089ADA78;
L_089ADB5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089ADB88u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089ADA0C;
L_089ADB88:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ADBC8;
      }
      goto L_089ADB90;
    }
L_089ADB90:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14912)));
    aot_gpr[20] = (2217u << 16u);
    goto L_089ADB9C;
L_089ADB9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089ADBB0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADBB0u) goto L_089ADBB0;
    return;
L_089ADBB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089ADBC8;
      }
      goto L_089ADBB8;
    }
L_089ADBB8:
    aot_gpr[31] = (0x089ADBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 224u, 0x089ACFB8u>(ctx, &aot_mem) && ctx.pc == 0x089ADBC0u) goto L_089ADBC0;
    return;
L_089ADBC0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ADB9C;
      }
      goto L_089ADBC8;
    }
L_089ADBC8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[20] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-14928));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089ADC44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADC44u) goto L_089ADC44;
    return;
L_089ADC44:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089ADC80;
    }
    goto L_089ADC4C;
L_089ADC4C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-11));
    goto L_089ADC50;
L_089ADC50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADC80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADC8Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADC8Cu) goto L_089ADC8C;
    return;
L_089ADC8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ADC4C;
      }
      goto L_089ADC94;
    }
L_089ADC94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] & 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089ADC50;
      }
      goto L_089ADCA4;
    }
L_089ADCA4:
    aot_gpr[2] = (aot_gpr[3] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[23] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16324)));
    aot_gpr[30] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADCC8u);
    aot_gpr[17] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADCC8u) goto L_089ADCC8;
    return;
L_089ADCC8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089ADD00;
L_089ADCE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_089ADCE4;
L_089ADCE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADCF0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADCF0u) goto L_089ADCF0;
    return;
L_089ADCF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089ADD00;
L_089ADD00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16324)));
    jump_target = aot_gpr[30];
    aot_gpr[31] = (0x089ADD0Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADD0Cu) goto L_089ADD0C;
    return;
L_089ADD0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089ADD78;
      }
      goto L_089ADD14;
    }
L_089ADD14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADD20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADD20u) goto L_089ADD20;
    return;
L_089ADD20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ADCE0;
      }
      goto L_089ADD28;
    }
L_089ADD28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(300)));
    if (aot_gpr[19] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
        goto L_089ADCE4;
    }
    goto L_089ADD34;
L_089ADD34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ADCE0;
      }
      goto L_089ADD44;
    }
L_089ADD44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[31] = (0x089ADD70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    goto L_089ADB5C;
L_089ADD70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_089ADCE4;
L_089ADD78:
    aot_gpr[31] = (0x089ADD80u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 12u, 0x089AF0A4u>(ctx, &aot_mem) && ctx.pc == 0x089ADD80u) goto L_089ADD80;
    return;
L_089ADD80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADD90u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADD90u) goto L_089ADD90;
    return;
L_089ADD90:
    aot_gpr[2] = (0u + 0u);
    goto L_089ADC50;
L_089ADD98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16320)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-15));
      if (branch_taken) {
          goto L_089ADDF8;
      }
      goto L_089ADDCC;
    }
L_089ADDCC:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADDF8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14928));
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    aot_gpr[19] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADE18u);
    aot_gpr[18] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADE18u) goto L_089ADE18;
    return;
L_089ADE18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[21] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089ADE70;
L_089ADE38:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x089ADE4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089ADBEC;
L_089ADE4C:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADE60u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADE60u) goto L_089ADE60;
    return;
L_089ADE60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_089ADE70;
L_089ADE70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089ADE7Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADE7Cu) goto L_089ADE7C;
    return;
L_089ADE7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089ADE38;
      }
      goto L_089ADE84;
    }
L_089ADE84:
    aot_gpr[31] = (0x089ADE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 63u, 0x089AE404u>(ctx, &aot_mem) && ctx.pc == 0x089ADE8Cu) goto L_089ADE8C;
    return;
L_089ADE8C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15724)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADE9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADE9Cu) goto L_089ADE9C;
    return;
L_089ADE9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2217u << 16u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089ADEACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16324));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADEACu) goto L_089ADEAC;
    return;
L_089ADEAC:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089ADEB4u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(16328));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADEB4u) goto L_089ADEB4;
    return;
L_089ADEB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(16320), 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADEE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
      if (branch_taken) {
          goto L_089ADF3C;
      }
      goto L_089ADF10;
    }
L_089ADF10:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089ADF14;
L_089ADF14:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089ADF18;
L_089ADF18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADF3C:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[20] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(-14928));
      if (branch_taken) {
          goto L_089ADF10;
      }
      goto L_089ADF4C;
    }
L_089ADF4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADF5Cu);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-23));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADF5Cu) goto L_089ADF5C;
    return;
L_089ADF5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089ADF7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADF7Cu) goto L_089ADF7C;
    return;
L_089ADF7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089ADF14;
      }
      goto L_089ADF84;
    }
L_089ADF84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ADF94u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-10));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADF94u) goto L_089ADF94;
    return;
L_089ADF94:
    aot_gpr[11] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089ADFFC;
      }
      goto L_089ADFA4;
    }
L_089ADFA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(128), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(132), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(136), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(140), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(144), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x089ADFF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 33u, 0x089AF270u>(ctx, &aot_mem) && ctx.pc == 0x089ADFF4u) goto L_089ADFF4;
    return;
L_089ADFF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ADF14;
      }
      goto L_089ADFFC;
    }
L_089ADFFC:
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(-14928));
    ctx.pc = 0x089AE000u; return;
}

void recomp_unit_0425(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0425_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_425(Runtime &runtime) {
    runtime.register_generated_unit(425u, 0x089AD000u, 4096u, &recomp_unit_0425, &recomp_unit_0425_entry);
    runtime.register_function(0x089AD000u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD00Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD018u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD04Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD054u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD070u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD0A0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD0A8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD0B4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD0D4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD0E8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD0F8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD104u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD10Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD11Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD150u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD160u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD174u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD1A0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD1B8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD1C0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD1C8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD1D0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD1E8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD20Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD218u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD24Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD258u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD270u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD294u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD2A0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD2E0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD2E8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD310u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD318u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD324u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD358u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD384u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD3B0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD3C4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD408u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD410u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD414u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD41Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD458u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD470u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD490u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD498u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD4B8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD4C0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD4C8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD520u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD538u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD544u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD54Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD558u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD564u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD574u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD580u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD588u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD58Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD5B0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD5B8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD5D8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD5E8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD624u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD628u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD630u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD634u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD648u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD674u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD694u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD6A8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD6D8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD6ECu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD6F4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD70Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD730u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD73Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD77Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD780u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD7B4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD7BCu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD7C8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD7D4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD7E4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD808u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD810u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD818u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD828u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD848u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD854u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD868u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD894u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD8B0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD8BCu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD8E8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD94Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD978u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD998u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD9DCu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089AD9FCu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADA0Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADA68u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADA78u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADA9Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADAB4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADABCu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADAC4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADAD0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADAE8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADAF8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADB20u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADB4Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADB5Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADB88u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADB90u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADB9Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADBB0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADBB8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADBC0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADBC8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADBECu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADC44u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADC4Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADC50u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADC80u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADC8Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADC94u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADCA4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADCC8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADCE0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADCE4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADCF0u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD00u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD0Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD14u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD20u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD28u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD34u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD44u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD70u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD78u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD80u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD90u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADD98u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADDCCu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADDF8u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE18u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE38u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE4Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE60u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE70u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE7Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE84u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE8Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADE9Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADEACu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADEB4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADEE4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF10u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF14u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF18u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF3Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF4Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF5Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF7Cu, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF84u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADF94u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADFA4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADFF4u, &recomp_unit_0425, "recomp_unit_0425");
    runtime.register_function(0x089ADFFCu, &recomp_unit_0425, "recomp_unit_0425");
}
} // namespace psprecomp
