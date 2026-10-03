#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0004[993] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18,
    19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0,
    51, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 94, 0, 0,
    0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 103, 0, 104, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145,
    0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 170, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    188,
};
void recomp_unit_0004_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08808000u;
        entry_id = (entry_delta < 3972u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0004[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08808000;
    case 2u: goto L_08808010;
    case 3u: goto L_08808034;
    case 4u: goto L_08808048;
    case 5u: goto L_0880805C;
    case 6u: goto L_08808068;
    case 7u: goto L_08808070;
    case 8u: goto L_08808078;
    case 9u: goto L_08808080;
    case 10u: goto L_088080AC;
    case 11u: goto L_088080B0;
    case 12u: goto L_088080B8;
    case 13u: goto L_088080C4;
    case 14u: goto L_088080CC;
    case 15u: goto L_088080D4;
    case 16u: goto L_088080DC;
    case 17u: goto L_088080E4;
    case 18u: goto L_088080FC;
    case 19u: goto L_08808100;
    case 20u: goto L_08808108;
    case 21u: goto L_08808120;
    case 22u: goto L_08808140;
    case 23u: goto L_0880814C;
    case 24u: goto L_08808154;
    case 25u: goto L_0880815C;
    case 26u: goto L_08808170;
    case 27u: goto L_0880817C;
    case 28u: goto L_08808198;
    case 29u: goto L_088081A4;
    case 30u: goto L_088081B4;
    case 31u: goto L_088081BC;
    case 32u: goto L_088081CC;
    case 33u: goto L_088081DC;
    case 34u: goto L_088081E4;
    case 35u: goto L_088081F4;
    case 36u: goto L_08808214;
    case 37u: goto L_08808238;
    case 38u: goto L_08808240;
    case 39u: goto L_08808250;
    case 40u: goto L_08808260;
    case 41u: goto L_08808268;
    case 42u: goto L_08808278;
    case 43u: goto L_0880828C;
    case 44u: goto L_08808294;
    case 45u: goto L_088082B0;
    case 46u: goto L_088082B8;
    case 47u: goto L_08808328;
    case 48u: goto L_0880833C;
    case 49u: goto L_08808364;
    case 50u: goto L_0880836C;
    case 51u: goto L_08808380;
    case 52u: goto L_08808384;
    case 53u: goto L_088083A4;
    case 54u: goto L_088083AC;
    case 55u: goto L_088083F4;
    case 56u: goto L_0880847C;
    case 57u: goto L_088084A0;
    case 58u: goto L_088084B0;
    case 59u: goto L_088084BC;
    case 60u: goto L_088084C4;
    case 61u: goto L_088084D4;
    case 62u: goto L_088084E0;
    case 63u: goto L_088084F4;
    case 64u: goto L_08808518;
    case 65u: goto L_0880853C;
    case 66u: goto L_08808564;
    case 67u: goto L_0880856C;
    case 68u: goto L_08808580;
    case 69u: goto L_088085A0;
    case 70u: goto L_088085AC;
    case 71u: goto L_088085B4;
    case 72u: goto L_088085BC;
    case 73u: goto L_088085C8;
    case 74u: goto L_088085EC;
    case 75u: goto L_08808600;
    case 76u: goto L_0880861C;
    case 77u: goto L_08808624;
    case 78u: goto L_08808638;
    case 79u: goto L_08808654;
    case 80u: goto L_0880865C;
    case 81u: goto L_0880867C;
    case 82u: goto L_08808698;
    case 83u: goto L_088086B8;
    case 84u: goto L_088086DC;
    case 85u: goto L_088086FC;
    case 86u: goto L_08808708;
    case 87u: goto L_08808728;
    case 88u: goto L_08808730;
    case 89u: goto L_08808748;
    case 90u: goto L_0880874C;
    case 91u: goto L_08808754;
    case 92u: goto L_08808764;
    case 93u: goto L_08808770;
    case 94u: goto L_08808774;
    case 95u: goto L_0880878C;
    case 96u: goto L_08808794;
    case 97u: goto L_088087A0;
    case 98u: goto L_088087B0;
    case 99u: goto L_088087C0;
    case 100u: goto L_088087C8;
    case 101u: goto L_088087D8;
    case 102u: goto L_088087E8;
    case 103u: goto L_088087EC;
    case 104u: goto L_088087F4;
    case 105u: goto L_08808804;
    case 106u: goto L_08808820;
    case 107u: goto L_08808828;
    case 108u: goto L_08808844;
    case 109u: goto L_08808864;
    case 110u: goto L_088088B0;
    case 111u: goto L_088088BC;
    case 112u: goto L_088088D4;
    case 113u: goto L_088088F0;
    case 114u: goto L_088088F8;
    case 115u: goto L_0880890C;
    case 116u: goto L_08808920;
    case 117u: goto L_08808954;
    case 118u: goto L_0880896C;
    case 119u: goto L_08808978;
    case 120u: goto L_0880898C;
    case 121u: goto L_08808998;
    case 122u: goto L_088089A4;
    case 123u: goto L_088089C8;
    case 124u: goto L_08808A24;
    case 125u: goto L_08808A50;
    case 126u: goto L_08808A6C;
    case 127u: goto L_08808A88;
    case 128u: goto L_08808A98;
    case 129u: goto L_08808AB0;
    case 130u: goto L_08808AB4;
    case 131u: goto L_08808ACC;
    case 132u: goto L_08808AD4;
    case 133u: goto L_08808ADC;
    case 134u: goto L_08808AF0;
    case 135u: goto L_08808B0C;
    case 136u: goto L_08808B24;
    case 137u: goto L_08808B38;
    case 138u: goto L_08808B48;
    case 139u: goto L_08808B60;
    case 140u: goto L_08808B90;
    case 141u: goto L_08808BA0;
    case 142u: goto L_08808BD0;
    case 143u: goto L_08808BD4;
    case 144u: goto L_08808BE4;
    case 145u: goto L_08808BFC;
    case 146u: goto L_08808C04;
    case 147u: goto L_08808C0C;
    case 148u: goto L_08808C14;
    case 149u: goto L_08808C24;
    case 150u: goto L_08808C54;
    case 151u: goto L_08808C5C;
    case 152u: goto L_08808C6C;
    case 153u: goto L_08808C88;
    case 154u: goto L_08808C90;
    case 155u: goto L_08808CA0;
    case 156u: goto L_08808CAC;
    case 157u: goto L_08808CB4;
    case 158u: goto L_08808CC4;
    case 159u: goto L_08808D00;
    case 160u: goto L_08808D08;
    case 161u: goto L_08808D1C;
    case 162u: goto L_08808D34;
    case 163u: goto L_08808D3C;
    case 164u: goto L_08808D44;
    case 165u: goto L_08808D78;
    case 166u: goto L_08808DA4;
    case 167u: goto L_08808DD4;
    case 168u: goto L_08808DDC;
    case 169u: goto L_08808DF8;
    case 170u: goto L_08808E0C;
    case 171u: goto L_08808E10;
    case 172u: goto L_08808E20;
    case 173u: goto L_08808E5C;
    case 174u: goto L_08808E64;
    case 175u: goto L_08808E80;
    case 176u: goto L_08808EA0;
    case 177u: goto L_08808ED4;
    case 178u: goto L_08808EDC;
    case 179u: goto L_08808EF8;
    case 180u: goto L_08808F08;
    case 181u: goto L_08808F14;
    case 182u: goto L_08808F20;
    case 183u: goto L_08808F28;
    case 184u: goto L_08808F34;
    case 185u: goto L_08808F44;
    case 186u: goto L_08808F50;
    case 187u: goto L_08808F78;
    case 188u: goto L_08808F80;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08808000:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    aot_gpr[5] = (0u | 0u);
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (0u | 1u);
        goto L_08808010;
    }
    goto L_08808010;
L_08808010:
    aot_gpr[6] = (16818u << 16u);
    aot_gpr[7] = (aot_gpr[6] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 1u);
        goto L_08808034;
    }
    goto L_08808034;
L_08808034:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0880805C;
      }
      goto L_08808048;
    }
L_08808048:
    aot_gpr[5] = (aot_gpr[5] | 1u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
      if (branch_taken) {
          goto L_08808068;
      }
      goto L_0880805C;
    }
L_0880805C:
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    goto L_08808068;
L_08808068:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808078;
      }
      goto L_08808070;
    }
L_08808070:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(224), aot_gpr[4]);
    goto L_08808078;
L_08808078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088080B8;
      }
      goto L_08808080;
    }
L_08808080:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21264)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21260)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088080B0;
      }
      goto L_088080AC;
    }
L_088080AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(224), 0u);
    goto L_088080B0;
L_088080B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088080B8;
      }
      goto L_088080B8;
    }
L_088080B8:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[31] = (0x088080C4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 141u, 0x0880BA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088080C4u) goto L_088080C4;
    return;
L_088080C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088080D4;
      }
      goto L_088080CC;
    }
L_088080CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08808100;
      }
      goto L_088080D4;
    }
L_088080D4:
    aot_gpr[31] = (0x088080DCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 140u, 0x0880BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088080DCu) goto L_088080DC;
    return;
L_088080DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808100;
      }
      goto L_088080E4;
    }
L_088080E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808100;
      }
      goto L_088080FC;
    }
L_088080FC:
    aot_gpr[16] = (0u | 0u);
    goto L_08808100;
L_08808100:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808154;
      }
      goto L_08808108;
    }
L_08808108:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(148)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808154;
      }
      goto L_08808120;
    }
L_08808120:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880814C;
      }
      goto L_08808140;
    }
L_08808140:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_08808154;
      }
      goto L_0880814C;
    }
L_0880814C:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    goto L_08808154;
L_08808154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808170;
      }
      goto L_0880815C;
    }
L_0880815C:
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(191), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(224), 0u);
    goto L_08808170;
L_08808170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088081A4;
      }
      goto L_0880817C;
    }
L_0880817C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2208)));
      if (branch_taken) {
          goto L_088082B0;
      }
      goto L_08808198;
    }
L_08808198:
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_088082B0;
      }
      goto L_088081A4;
    }
L_088081A4:
    ctx.set_fpu_condition((aot_fpr[28] <= aot_fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[7] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088081BC;
    }
    goto L_088081B4;
L_088081B4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[7] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_088081CC;
      }
      goto L_088081BC;
    }
L_088081BC:
    ctx.set_fpu_condition((aot_fpr[7] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[7] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_088081CC;
    }
    goto L_088081CC;
L_088081CC:
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[8] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
        goto L_088081E4;
    }
    goto L_088081DC;
L_088081DC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[8] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_088081F4;
      }
      goto L_088081E4;
    }
L_088081E4:
    ctx.set_fpu_condition((aot_fpr[8] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[8] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_088081F4;
    }
    goto L_088081F4;
L_088081F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(292));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(296));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08808214u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 133u, 0x08806D54u>(ctx, &aot_mem) && ctx.pc == 0x08808214u) goto L_08808214;
    return;
L_08808214:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[7];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2208)));
    aot_fpr[12] = aot_fpr[8] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[7] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08808240;
      }
      goto L_08808238;
    }
L_08808238:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_08808250;
      }
      goto L_08808240;
    }
L_08808240:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08808250;
    }
    goto L_08808250;
L_08808250:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08808268;
      }
      goto L_08808260;
    }
L_08808260:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_08808278;
      }
      goto L_08808268;
    }
L_08808268:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08808278;
    }
    goto L_08808278;
L_08808278:
    aot_fpr[22] = aot_fpr[22] + aot_fpr[7];
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08808294;
      }
      goto L_0880828C;
    }
L_0880828C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_088082B0;
      }
      goto L_08808294;
    }
L_08808294:
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088082B0;
    }
    goto L_088082B0;
L_088082B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808328;
      }
      goto L_088082B8;
    }
L_088082B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(320);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15300u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39846u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[20] = aot_fpr[12] + aot_fpr[20];
    goto L_08808328;
L_08808328:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[24])) && aot_fpr[12] == aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08808384;
    }
    goto L_0880833C;
L_0880833C:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[20] = aot_fpr[12] + aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0880836C;
      }
      goto L_08808364;
    }
L_08808364:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
      if (branch_taken) {
          goto L_08808380;
      }
      goto L_0880836C;
    }
L_0880836C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08808380;
    }
    goto L_08808380;
L_08808380:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08808384;
L_08808384:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088083AC;
      }
      goto L_088083A4;
    }
L_088083A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(364), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088083AC;
L_088083AC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088083F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[10] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[9] & 255u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_088085BC;
      }
      goto L_0880847C;
    }
L_0880847C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr[9] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(153)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088084BC;
      }
      goto L_088084A0;
    }
L_088084A0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088084BC;
      }
      goto L_088084B0;
    }
L_088084B0:
    aot_gpr[9] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088084BC;
L_088084BC:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088084E0;
      }
      goto L_088084C4;
    }
L_088084C4:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088084E0;
      }
      goto L_088084D4;
    }
L_088084D4:
    aot_gpr[8] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088084E0;
L_088084E0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808518;
      }
      goto L_088084F4;
    }
L_088084F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(189), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08808844;
      }
      goto L_08808518;
    }
L_08808518:
    aot_gpr[11] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x0880853Cu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 159u, 0x08806FD8u>(ctx, &aot_mem) && ctx.pc == 0x0880853Cu) goto L_0880853C;
    return;
L_0880853C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (16640u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0880856C;
      }
      goto L_08808564;
    }
L_08808564:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08808580;
      }
      goto L_0880856C;
    }
L_0880856C:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_08808580;
    }
    goto L_08808580;
L_08808580:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (49344u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088085AC;
      }
      goto L_088085A0;
    }
L_088085A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088085B4;
      }
      goto L_088085AC;
    }
L_088085AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088085B4;
L_088085B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808844;
      }
      goto L_088085BC;
    }
L_088085BC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(189)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808754;
      }
      goto L_088085C8;
    }
L_088085C8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr[9] = (2218u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(153)));
    aot_gpr[9] = (0u | 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0880861C;
      }
      goto L_088085EC;
    }
L_088085EC:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880861C;
      }
      goto L_08808600;
    }
L_08808600:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(189), static_cast<std::uint8_t>(0u));
    aot_gpr[10] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[10] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0880861C;
L_0880861C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808654;
      }
      goto L_08808624;
    }
L_08808624:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808654;
      }
      goto L_08808638;
    }
L_08808638:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(189), static_cast<std::uint8_t>(0u));
    aot_gpr[8] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808654;
L_08808654:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880874C;
      }
      goto L_0880865C;
    }
L_0880865C:
    aot_gpr[8] = (16221u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[8] = (aot_gpr[8] | 45613u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808698;
      }
      goto L_0880867C;
    }
L_0880867C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr[8] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088086B8;
      }
      goto L_08808698;
    }
L_08808698:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(189), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(190), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0880874C;
      }
      goto L_088086B8;
    }
L_088086B8:
    aot_gpr[11] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088086DCu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 159u, 0x08806FD8u>(ctx, &aot_mem) && ctx.pc == 0x088086DCu) goto L_088086DC;
    return;
L_088086DC:
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08808708;
      }
      goto L_088086FC;
    }
L_088086FC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808708;
L_08808708:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08808730;
    }
    goto L_08808728;
L_08808728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808748;
      }
      goto L_08808730;
    }
L_08808730:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08808748;
    }
    goto L_08808748;
L_08808748:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0880874C;
L_0880874C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808844;
      }
      goto L_08808754;
    }
L_08808754:
    aot_gpr[6] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08808770;
      }
      goto L_08808764;
    }
L_08808764:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(153)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808774;
      }
      goto L_08808770;
    }
L_08808770:
    aot_gpr[6] = (0u | 1u);
    goto L_08808774;
L_08808774:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(190), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_08808828;
      }
      goto L_0880878C;
    }
L_0880878C:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088087EC;
      }
      goto L_08808794;
    }
L_08808794:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(153)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088087EC;
      }
      goto L_088087A0;
    }
L_088087A0:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088087C8;
      }
      goto L_088087B0;
    }
L_088087B0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088087EC;
      }
      goto L_088087C0;
    }
L_088087C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088087EC;
      }
      goto L_088087C8;
    }
L_088087C8:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088087EC;
      }
      goto L_088087D8;
    }
L_088087D8:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088087EC;
      }
      goto L_088087E8;
    }
L_088087E8:
    aot_gpr[5] = (0u | 1u);
    goto L_088087EC;
L_088087EC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808804;
      }
      goto L_088087F4;
    }
L_088087F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(189), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08808820;
      }
      goto L_08808804;
    }
L_08808804:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808820;
L_08808820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808844;
      }
      goto L_08808828;
    }
L_08808828:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808844;
L_08808844:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] & 512u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088088BC;
      }
      goto L_088088B0;
    }
L_088088B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088089A4;
      }
      goto L_088088BC;
    }
L_088088BC:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    aot_gpr[31] = (0x088088D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 19u, 0x088EE2E4u>(ctx, &aot_mem) && ctx.pc == 0x088088D4u) goto L_088088D4;
    return;
L_088088D4:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088088F8;
      }
      goto L_088088F0;
    }
L_088088F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0880890C;
      }
      goto L_088088F8;
    }
L_088088F8:
    aot_gpr[4] = (16168u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[13] + aot_fpr[15];
    goto L_0880890C;
L_0880890C:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_08808954;
      }
      goto L_08808920;
    }
L_08808920:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(536)));
    aot_fpr[17] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08808954;
L_08808954:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[15] = aot_fpr[20] - aot_fpr[24];
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808978;
      }
      goto L_0880896C;
    }
L_0880896C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088089A4;
      }
      goto L_08808978;
    }
L_08808978:
    aot_fpr[12] = aot_fpr[20] + aot_fpr[24];
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808998;
      }
      goto L_0880898C;
    }
L_0880898C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088089A4;
      }
      goto L_08808998;
    }
L_08808998:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[17] = (0u | 1u);
    goto L_088089A4;
L_088089A4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088089C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08808A24u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 19u, 0x088EE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08808A24u) goto L_08808A24;
    return;
L_08808A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_08808ACC;
      }
      goto L_08808A50;
    }
L_08808A50:
    aot_gpr[5] = (16941u << 16u);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    aot_gpr[5] = (aot_gpr[5] | 29592u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_08808A88;
      }
      goto L_08808A6C;
    }
L_08808A6C:
    aot_fpr[14] = aot_fpr[20] - aot_fpr[22];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(572)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
      if (branch_taken) {
          goto L_08808AB0;
      }
      goto L_08808A88;
    }
L_08808A88:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
        goto L_08808AB4;
    }
    goto L_08808A98;
L_08808A98:
    aot_fpr[14] = aot_fpr[22] + aot_fpr[20];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(576)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08808AB0;
L_08808AB0:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    goto L_08808AB4;
L_08808AB4:
    aot_gpr[4] = (15897u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808ACC;
L_08808ACC:
    aot_gpr[31] = (0x08808AD4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 140u, 0x0880BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08808AD4u) goto L_08808AD4;
    return;
L_08808AD4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808B0C;
      }
      goto L_08808ADC;
    }
L_08808ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808B0C;
      }
      goto L_08808AF0;
    }
L_08808AF0:
    aot_gpr[7] = (16320u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08808B0Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_08808864;
L_08808B0C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(520)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08808B38;
    }
    goto L_08808B24;
L_08808B24:
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08808B38;
      }
      goto L_08808B38;
    }
L_08808B38:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808C14;
      }
      goto L_08808B48;
    }
L_08808B48:
    aot_gpr[5] = (16928u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(491)));
    aot_gpr[5] = (aot_gpr[5] | 60293u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_08808B90;
      }
      goto L_08808B60;
    }
L_08808B60:
    aot_gpr[4] = (16168u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_gpr[4] = (16726u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 36700u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = aot_fpr[14] + aot_fpr[22];
      if (branch_taken) {
          goto L_08808BA0;
      }
      goto L_08808B90;
    }
L_08808B90:
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[22] = aot_fpr[14] + aot_fpr[22];
    goto L_08808BA0;
L_08808BA0:
    aot_gpr[4] = (16783u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 2621u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16854u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 36700u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808BD4;
      }
      goto L_08808BD0;
    }
L_08808BD0:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808BD4;
L_08808BD4:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808C0C;
      }
      goto L_08808BE4;
    }
L_08808BE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808C04;
      }
      goto L_08808BFC;
    }
L_08808BFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08808C0C;
      }
      goto L_08808C04;
    }
L_08808C04:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    goto L_08808C0C;
L_08808C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808D44;
      }
      goto L_08808C14;
    }
L_08808C14:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808D44;
      }
      goto L_08808C24;
    }
L_08808C24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (15948u << 16u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08808C5C;
      }
      goto L_08808C54;
    }
L_08808C54:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08808C6C;
      }
      goto L_08808C5C;
    }
L_08808C5C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08808C6C;
    }
    goto L_08808C6C;
L_08808C6C:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08808C90;
    }
    goto L_08808C88;
L_08808C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CA0;
      }
      goto L_08808C90;
    }
L_08808C90:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_08808CA0;
    }
    goto L_08808CA0;
L_08808CA0:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x08808CACu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 141u, 0x0880BA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08808CACu) goto L_08808CAC;
    return;
L_08808CAC:
    if (aot_gpr[2] != 0u) {
    aot_fpr[12] = aot_fpr[20] - aot_fpr[22];
        goto L_08808CC4;
    }
    goto L_08808CB4;
L_08808CB4:
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[22];
    goto L_08808CC4;
L_08808CC4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(580)));
    aot_fpr[14] = aot_fpr[20] - aot_fpr[26];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(572)));
    aot_gpr[4] = (16320u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(576)));
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808D08;
      }
      goto L_08808D00;
    }
L_08808D00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808D08;
L_08808D08:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(380)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808D44;
      }
      goto L_08808D1C;
    }
L_08808D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808D3C;
      }
      goto L_08808D34;
    }
L_08808D34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(380), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08808D44;
      }
      goto L_08808D3C;
    }
L_08808D3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    goto L_08808D44;
L_08808D44:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808D78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2072)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08808E10;
      }
      goto L_08808DA4;
    }
L_08808DA4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (17096u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08808DDC;
      }
      goto L_08808DD4;
    }
L_08808DD4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08808DF8;
      }
      goto L_08808DDC;
    }
L_08808DDC:
    aot_gpr[6] = (15820u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_08808DF8;
    }
    goto L_08808DF8;
L_08808DF8:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(276));
    aot_gpr[31] = (0x08808E0Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 140u, 0x0880CB90u>(ctx, &aot_mem) && ctx.pc == 0x08808E0Cu) goto L_08808E0C;
    return;
L_08808E0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08808E10;
L_08808E10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808E20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08808E5Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 133u, 0x0880BA10u>(ctx, &aot_mem) && ctx.pc == 0x08808E5Cu) goto L_08808E5C;
    return;
L_08808E5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808F50;
      }
      goto L_08808E64;
    }
L_08808E64:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808F50;
      }
      goto L_08808E80;
    }
L_08808E80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(196)));
    aot_gpr[20] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[31] = (0x08808EA0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 19u, 0x088EE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08808EA0u) goto L_08808EA0;
    return;
L_08808EA0:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16486u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26215u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08808ED4u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 143u, 0x0880BAACu>(ctx, &aot_mem) && ctx.pc == 0x08808ED4u) goto L_08808ED4;
    return;
L_08808ED4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (16726u << 16u);
      if (branch_taken) {
          goto L_08808F08;
      }
      goto L_08808EDC;
    }
L_08808EDC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[4] | 36700u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808F08;
      }
      goto L_08808EF8;
    }
L_08808EF8:
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08808F20;
      }
      goto L_08808F08;
    }
L_08808F08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2208)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808F20;
      }
      goto L_08808F14;
    }
L_08808F14:
    aot_gpr[4] = (16320u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_08808F20;
L_08808F20:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808F34;
      }
      goto L_08808F28;
    }
L_08808F28:
    aot_gpr[4] = (16320u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_08808F34;
L_08808F34:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808F50;
      }
      goto L_08808F44;
    }
L_08808F44:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08808F50;
L_08808F50:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808F78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808F80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[8] & 255u);
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2080));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (16544u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(224)));
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.pc = 0x08809000u; return;
}

void recomp_unit_0004(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0004_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_4(Runtime &runtime) {
    runtime.register_generated_unit(4u, 0x08808000u, 4096u, &recomp_unit_0004, &recomp_unit_0004_entry);
    runtime.register_function(0x08808000u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808010u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808034u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808048u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880805Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808068u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808078u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808080u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088080FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808100u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808108u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808120u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808140u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880814Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808154u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880815Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808170u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880817Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808198u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088081F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808214u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808238u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808240u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808250u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808260u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808268u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808278u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880828Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808294u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088082B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088082B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808328u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880833Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808364u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880836Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808380u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808384u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088083A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088083ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088083F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880847Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088084F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880853Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808564u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880856Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808580u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088085A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088085ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088085B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088085BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088085C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088085ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880861Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808624u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808654u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880865Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880867Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808698u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088086B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088086DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088086FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808708u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808728u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808730u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808748u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880874Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808754u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808764u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808770u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808774u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880878Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808794u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088087F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808804u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808820u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808828u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808844u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088088B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088088BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088088D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088088F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088088F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880890Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808920u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808954u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880896Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808978u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0880898Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088089A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088089C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808A24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808A50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808A6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808A88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808A98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808AB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808AB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808ACCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808AD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808ADCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808AF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808B0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808B24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808B38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808B48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808B60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808B90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808BA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808BD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808BD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808BE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808BFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808C90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808CA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808CACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808CB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808CC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808D78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808DA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808DDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808DF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808E0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808E10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808E20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808E64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808E80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808EA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808ED4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808EF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08808F80u, &recomp_unit_0004, "recomp_unit_0004");
}
} // namespace psprecomp
