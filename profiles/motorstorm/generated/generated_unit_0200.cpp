#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0200[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8,
    0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 65, 66, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80,
    0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0,
    0, 0, 118, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 129,
    0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 139, 0, 140, 0, 0,
    141, 0, 0, 142, 0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 149, 0, 150, 0, 0, 151, 0, 0, 0,
    0, 152, 153, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0,
    164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 174,
    0, 0, 175, 0, 0, 0, 0, 176, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 185, 0,
    186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0,
    0, 0, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212,
};
void recomp_unit_0200_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088CC000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0200[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CC000;
    case 2u: goto L_088CC008;
    case 3u: goto L_088CC020;
    case 4u: goto L_088CC024;
    case 5u: goto L_088CC030;
    case 6u: goto L_088CC050;
    case 7u: goto L_088CC074;
    case 8u: goto L_088CC07C;
    case 9u: goto L_088CC094;
    case 10u: goto L_088CC09C;
    case 11u: goto L_088CC0B0;
    case 12u: goto L_088CC0D4;
    case 13u: goto L_088CC0EC;
    case 14u: goto L_088CC0FC;
    case 15u: goto L_088CC114;
    case 16u: goto L_088CC12C;
    case 17u: goto L_088CC134;
    case 18u: goto L_088CC140;
    case 19u: goto L_088CC1AC;
    case 20u: goto L_088CC1C4;
    case 21u: goto L_088CC1D0;
    case 22u: goto L_088CC1F4;
    case 23u: goto L_088CC204;
    case 24u: goto L_088CC274;
    case 25u: goto L_088CC284;
    case 26u: goto L_088CC2A4;
    case 27u: goto L_088CC2AC;
    case 28u: goto L_088CC2B8;
    case 29u: goto L_088CC2C0;
    case 30u: goto L_088CC2CC;
    case 31u: goto L_088CC2E0;
    case 32u: goto L_088CC2F8;
    case 33u: goto L_088CC30C;
    case 34u: goto L_088CC33C;
    case 35u: goto L_088CC390;
    case 36u: goto L_088CC3A8;
    case 37u: goto L_088CC3B0;
    case 38u: goto L_088CC3B8;
    case 39u: goto L_088CC3C0;
    case 40u: goto L_088CC3C8;
    case 41u: goto L_088CC3D4;
    case 42u: goto L_088CC3E8;
    case 43u: goto L_088CC404;
    case 44u: goto L_088CC424;
    case 45u: goto L_088CC440;
    case 46u: goto L_088CC460;
    case 47u: goto L_088CC474;
    case 48u: goto L_088CC49C;
    case 49u: goto L_088CC4B8;
    case 50u: goto L_088CC4D4;
    case 51u: goto L_088CC4EC;
    case 52u: goto L_088CC4FC;
    case 53u: goto L_088CC520;
    case 54u: goto L_088CC538;
    case 55u: goto L_088CC544;
    case 56u: goto L_088CC574;
    case 57u: goto L_088CC5D8;
    case 58u: goto L_088CC624;
    case 59u: goto L_088CC63C;
    case 60u: goto L_088CC650;
    case 61u: goto L_088CC668;
    case 62u: goto L_088CC67C;
    case 63u: goto L_088CC694;
    case 64u: goto L_088CC6A8;
    case 65u: goto L_088CC6AC;
    case 66u: goto L_088CC6B0;
    case 67u: goto L_088CC6B8;
    case 68u: goto L_088CC6C4;
    case 69u: goto L_088CC6D4;
    case 70u: goto L_088CC700;
    case 71u: goto L_088CC720;
    case 72u: goto L_088CC740;
    case 73u: goto L_088CC754;
    case 74u: goto L_088CC768;
    case 75u: goto L_088CC774;
    case 76u: goto L_088CC798;
    case 77u: goto L_088CC7C8;
    case 78u: goto L_088CC7D0;
    case 79u: goto L_088CC7E4;
    case 80u: goto L_088CC7FC;
    case 81u: goto L_088CC804;
    case 82u: goto L_088CC818;
    case 83u: goto L_088CC82C;
    case 84u: goto L_088CC844;
    case 85u: goto L_088CC84C;
    case 86u: goto L_088CC854;
    case 87u: goto L_088CC864;
    case 88u: goto L_088CC86C;
    case 89u: goto L_088CC878;
    case 90u: goto L_088CC888;
    case 91u: goto L_088CC89C;
    case 92u: goto L_088CC8A4;
    case 93u: goto L_088CC8AC;
    case 94u: goto L_088CC8B4;
    case 95u: goto L_088CC8B8;
    case 96u: goto L_088CC8C0;
    case 97u: goto L_088CC8E8;
    case 98u: goto L_088CC908;
    case 99u: goto L_088CC91C;
    case 100u: goto L_088CC938;
    case 101u: goto L_088CC960;
    case 102u: goto L_088CC96C;
    case 103u: goto L_088CC994;
    case 104u: goto L_088CC9A0;
    case 105u: goto L_088CC9B4;
    case 106u: goto L_088CC9C0;
    case 107u: goto L_088CC9D0;
    case 108u: goto L_088CC9DC;
    case 109u: goto L_088CCA18;
    case 110u: goto L_088CCA24;
    case 111u: goto L_088CCA30;
    case 112u: goto L_088CCA3C;
    case 113u: goto L_088CCA50;
    case 114u: goto L_088CCA54;
    case 115u: goto L_088CCA5C;
    case 116u: goto L_088CCA68;
    case 117u: goto L_088CCA74;
    case 118u: goto L_088CCA88;
    case 119u: goto L_088CCA8C;
    case 120u: goto L_088CCA94;
    case 121u: goto L_088CCAA0;
    case 122u: goto L_088CCAAC;
    case 123u: goto L_088CCAC0;
    case 124u: goto L_088CCAC4;
    case 125u: goto L_088CCACC;
    case 126u: goto L_088CCAD8;
    case 127u: goto L_088CCAE4;
    case 128u: goto L_088CCAF8;
    case 129u: goto L_088CCAFC;
    case 130u: goto L_088CCB04;
    case 131u: goto L_088CCB10;
    case 132u: goto L_088CCB1C;
    case 133u: goto L_088CCB30;
    case 134u: goto L_088CCB34;
    case 135u: goto L_088CCB3C;
    case 136u: goto L_088CCB48;
    case 137u: goto L_088CCB54;
    case 138u: goto L_088CCB68;
    case 139u: goto L_088CCB6C;
    case 140u: goto L_088CCB74;
    case 141u: goto L_088CCB80;
    case 142u: goto L_088CCB8C;
    case 143u: goto L_088CCBA0;
    case 144u: goto L_088CCBA4;
    case 145u: goto L_088CCBAC;
    case 146u: goto L_088CCBB8;
    case 147u: goto L_088CCBC4;
    case 148u: goto L_088CCBD8;
    case 149u: goto L_088CCBDC;
    case 150u: goto L_088CCBE4;
    case 151u: goto L_088CCBF0;
    case 152u: goto L_088CCC04;
    case 153u: goto L_088CCC08;
    case 154u: goto L_088CCC0C;
    case 155u: goto L_088CCC2C;
    case 156u: goto L_088CCC6C;
    case 157u: goto L_088CCC9C;
    case 158u: goto L_088CCCA4;
    case 159u: goto L_088CCCBC;
    case 160u: goto L_088CCCC8;
    case 161u: goto L_088CCCD0;
    case 162u: goto L_088CCCEC;
    case 163u: goto L_088CCCF8;
    case 164u: goto L_088CCD00;
    case 165u: goto L_088CCD1C;
    case 166u: goto L_088CCD28;
    case 167u: goto L_088CCD30;
    case 168u: goto L_088CCD44;
    case 169u: goto L_088CCD50;
    case 170u: goto L_088CCD58;
    case 171u: goto L_088CCD60;
    case 172u: goto L_088CCD6C;
    case 173u: goto L_088CCD74;
    case 174u: goto L_088CCD7C;
    case 175u: goto L_088CCD88;
    case 176u: goto L_088CCD9C;
    case 177u: goto L_088CCDA0;
    case 178u: goto L_088CCDA8;
    case 179u: goto L_088CCDB4;
    case 180u: goto L_088CCDC8;
    case 181u: goto L_088CCDCC;
    case 182u: goto L_088CCDD4;
    case 183u: goto L_088CCDE0;
    case 184u: goto L_088CCDF4;
    case 185u: goto L_088CCDF8;
    case 186u: goto L_088CCE00;
    case 187u: goto L_088CCE18;
    case 188u: goto L_088CCE28;
    case 189u: goto L_088CCE3C;
    case 190u: goto L_088CCE40;
    case 191u: goto L_088CCE5C;
    case 192u: goto L_088CCE68;
    case 193u: goto L_088CCE78;
    case 194u: goto L_088CCE88;
    case 195u: goto L_088CCE8C;
    case 196u: goto L_088CCEBC;
    case 197u: goto L_088CCEC8;
    case 198u: goto L_088CCED4;
    case 199u: goto L_088CCED8;
    case 200u: goto L_088CCEE8;
    case 201u: goto L_088CCEFC;
    case 202u: goto L_088CCF10;
    case 203u: goto L_088CCF20;
    case 204u: goto L_088CCF3C;
    case 205u: goto L_088CCF40;
    case 206u: goto L_088CCF54;
    case 207u: goto L_088CCF68;
    case 208u: goto L_088CCF7C;
    case 209u: goto L_088CCFAC;
    case 210u: goto L_088CCFCC;
    case 211u: goto L_088CCFEC;
    case 212u: goto L_088CCFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CC000:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088CC024;
      }
      goto L_088CC008;
    }
L_088CC008:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC024;
      }
      goto L_088CC020;
    }
L_088CC020:
    aot_gpr[17] = (0u | 1u);
    goto L_088CC024;
L_088CC024:
    aot_gpr[17] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CC050;
      }
      goto L_088CC030;
    }
L_088CC030:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(32436)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(-29272), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-29271), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_088CC050;
L_088CC050:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(72));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088CC074u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC074u) goto L_088CC074;
    return;
L_088CC074:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC094;
      }
      goto L_088CC07C;
    }
L_088CC07C:
    aot_gpr[4] = (0u | 255u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-29272), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29271), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088CC094;
L_088CC094:
    aot_gpr[31] = (0x088CC09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 102u, 0x0882BE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC09Cu) goto L_088CC09C;
    return;
L_088CC09C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC0B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(744)));
      if (branch_taken) {
          goto L_088CC134;
      }
      goto L_088CC0D4;
    }
L_088CC0D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[5] & 4u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 16u);
      if (branch_taken) {
          goto L_088CC134;
      }
      goto L_088CC0EC;
    }
L_088CC0EC:
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC134;
      }
      goto L_088CC0FC;
    }
L_088CC0FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC134;
      }
      goto L_088CC114;
    }
L_088CC114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 8192u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC134;
      }
      goto L_088CC12C;
    }
L_088CC12C:
    aot_gpr[31] = (0x088CC134u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 19u, 0x088D313Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC134u) goto L_088CC134;
    return;
L_088CC134:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (16168u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (16320u << 16u);
    aot_gpr[6] = (17658u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(408)));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[16];
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (1u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088CC1ACu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(748));
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 78u, 0x089116FCu>(ctx, &aot_mem) && ctx.pc == 0x088CC1ACu) goto L_088CC1AC;
    return;
L_088CC1AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC1F4;
      }
      goto L_088CC1C4;
    }
L_088CC1C4:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x088CC1D0u);
    aot_gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088CC1D0u) goto L_088CC1D0;
    return;
L_088CC1D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(47))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CC1F4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x088CC1F4u) goto L_088CC1F4;
    return;
L_088CC1F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CC274u);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC274u) goto L_088CC274;
    return;
L_088CC274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088CC284u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 152u, 0x088FABACu>(ctx, &aot_mem) && ctx.pc == 0x088CC284u) goto L_088CC284;
    return;
L_088CC284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CC2A4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 20u, 0x088E515Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC2A4u) goto L_088CC2A4;
    return;
L_088CC2A4:
    aot_gpr[31] = (0x088CC2ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 167u, 0x08866C28u>(ctx, &aot_mem) && ctx.pc == 0x088CC2ACu) goto L_088CC2AC;
    return;
L_088CC2AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC2C0;
      }
      goto L_088CC2B8;
    }
L_088CC2B8:
    aot_gpr[31] = (0x088CC2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 25u, 0x088D31C0u>(ctx, &aot_mem) && ctx.pc == 0x088CC2C0u) goto L_088CC2C0;
    return;
L_088CC2C0:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    aot_gpr[31] = (0x088CC2CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 162u, 0x088FEC24u>(ctx, &aot_mem) && ctx.pc == 0x088CC2CCu) goto L_088CC2CC;
    return;
L_088CC2CC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CC2E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5968));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 116u, 0x08918908u>(ctx, &aot_mem) && ctx.pc == 0x088CC2E0u) goto L_088CC2E0;
    return;
L_088CC2E0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC2F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[2] = (aot_gpr[4] & 512u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC30C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088CC33Cu);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    goto L_088CC2F8;
L_088CC33C:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CC390u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC390u) goto L_088CC390;
    return;
L_088CC390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC3B8;
      }
      goto L_088CC3A8;
    }
L_088CC3A8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC3B8;
      }
      goto L_088CC3B0;
    }
L_088CC3B0:
    aot_gpr[31] = (0x088CC3B8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 208u, 0x08862F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC3B8u) goto L_088CC3B8;
    return;
L_088CC3B8:
    aot_gpr[31] = (0x088CC3C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 167u, 0x08866C28u>(ctx, &aot_mem) && ctx.pc == 0x088CC3C0u) goto L_088CC3C0;
    return;
L_088CC3C0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC3E8;
      }
      goto L_088CC3C8;
    }
L_088CC3C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CC3D4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 20u, 0x088E515Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC3D4u) goto L_088CC3D4;
    return;
L_088CC3D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CC3E8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 204u, 0x088FBE68u>(ctx, &aot_mem) && ctx.pc == 0x088CC3E8u) goto L_088CC3E8;
    return;
L_088CC3E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[31] = (0x088CC404u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 62u, 0x0881F444u>(ctx, &aot_mem) && ctx.pc == 0x088CC404u) goto L_088CC404;
    return;
L_088CC404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7456));
    aot_gpr[5] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
      if (branch_taken) {
          goto L_088CC440;
      }
      goto L_088CC424;
    }
L_088CC424:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6880));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC474;
      }
      goto L_088CC440;
    }
L_088CC440:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(712), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(716), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(728)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC474;
      }
      goto L_088CC460;
    }
L_088CC460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    goto L_088CC474;
L_088CC474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1368), 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC49C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088CC4B8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 160u, 0x088FEC08u>(ctx, &aot_mem) && ctx.pc == 0x088CC4B8u) goto L_088CC4B8;
    return;
L_088CC4B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC4EC;
      }
      goto L_088CC4D4;
    }
L_088CC4D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088CC4ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC4ECu) goto L_088CC4EC;
    return;
L_088CC4EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC4FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC538;
      }
      goto L_088CC520;
    }
L_088CC520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088CC538u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC538u) goto L_088CC538;
    return;
L_088CC538:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CC6C4;
      }
      goto L_088CC574;
    }
L_088CC574:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32456)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_088CC6C4;
      }
      goto L_088CC5D8;
    }
L_088CC5D8:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088CC624u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 68u, 0x0894B4D0u>(ctx, &aot_mem) && ctx.pc == 0x088CC624u) goto L_088CC624;
    return;
L_088CC624:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CC6AC;
      }
      goto L_088CC63C;
    }
L_088CC63C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (aot_gpr[4] & 255u);
        goto L_088CC6B0;
    }
    goto L_088CC650;
L_088CC650:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (aot_gpr[4] & 255u);
        goto L_088CC6B0;
    }
    goto L_088CC668;
L_088CC668:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (aot_gpr[4] & 255u);
        goto L_088CC6B0;
    }
    goto L_088CC67C;
L_088CC67C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (aot_gpr[4] & 255u);
        goto L_088CC6B0;
    }
    goto L_088CC694;
L_088CC694:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CC6B0;
      }
      goto L_088CC6A8;
    }
L_088CC6A8:
    aot_gpr[4] = (0u | 1u);
    goto L_088CC6AC;
L_088CC6AC:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088CC6B0;
L_088CC6B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC6C4;
      }
      goto L_088CC6B8;
    }
L_088CC6B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_088CC6C4;
L_088CC6C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC6D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3952)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CC768;
      }
      goto L_088CC700;
    }
L_088CC700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CC720u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 205u, 0x088E5EC4u>(ctx, &aot_mem) && ctx.pc == 0x088CC720u) goto L_088CC720;
    return;
L_088CC720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088CC740u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CC2F8;
L_088CC740:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088CC754u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 103u, 0x088E5714u>(ctx, &aot_mem) && ctx.pc == 0x088CC754u) goto L_088CC754;
    return;
L_088CC754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CC91C;
      }
      goto L_088CC768;
    }
L_088CC768:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(364), 0u);
    aot_gpr[31] = (0x088CC774u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CC544;
L_088CC774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x088CC798u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 205u, 0x088E5EC4u>(ctx, &aot_mem) && ctx.pc == 0x088CC798u) goto L_088CC798;
    return;
L_088CC798:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    aot_gpr[17] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] & 255u);
      if (branch_taken) {
          goto L_088CC7FC;
      }
      goto L_088CC7C8;
    }
L_088CC7C8:
    aot_gpr[31] = (0x088CC7D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CC2F8;
L_088CC7D0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CC7E4u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 103u, 0x088E5714u>(ctx, &aot_mem) && ctx.pc == 0x088CC7E4u) goto L_088CC7E4;
    return;
L_088CC7E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[19] = (0u < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] & 255u);
      if (branch_taken) {
          goto L_088CC82C;
      }
      goto L_088CC7FC;
    }
L_088CC7FC:
    aot_gpr[31] = (0x088CC804u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CC2F8;
L_088CC804:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CC818u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 123u, 0x088E58F8u>(ctx, &aot_mem) && ctx.pc == 0x088CC818u) goto L_088CC818;
    return;
L_088CC818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[19] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] & 255u);
    goto L_088CC82C;
L_088CC82C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC864;
      }
      goto L_088CC844;
    }
L_088CC844:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC864;
      }
      goto L_088CC84C;
    }
L_088CC84C:
    aot_gpr[31] = (0x088CC854u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 37u, 0x08867328u>(ctx, &aot_mem) && ctx.pc == 0x088CC854u) goto L_088CC854;
    return;
L_088CC854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[19] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] & 255u);
    goto L_088CC864;
L_088CC864:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC878;
      }
      goto L_088CC86C;
    }
L_088CC86C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    aot_gpr[31] = (0x088CC878u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 11u, 0x088D40F4u>(ctx, &aot_mem) && ctx.pc == 0x088CC878u) goto L_088CC878;
    return;
L_088CC878:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088CC89C;
      }
      goto L_088CC888;
    }
L_088CC888:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CC8AC;
      }
      goto L_088CC89C;
    }
L_088CC89C:
    aot_gpr[31] = (0x088CC8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 59u, 0x088FD5B0u>(ctx, &aot_mem) && ctx.pc == 0x088CC8A4u) goto L_088CC8A4;
    return;
L_088CC8A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088CC8B8;
      }
      goto L_088CC8AC;
    }
L_088CC8AC:
    aot_gpr[31] = (0x088CC8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 173u, 0x088FBCA8u>(ctx, &aot_mem) && ctx.pc == 0x088CC8B4u) goto L_088CC8B4;
    return;
L_088CC8B4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088CC8B8;
L_088CC8B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC91C;
      }
      goto L_088CC8C0;
    }
L_088CC8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088CC8E8u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 205u, 0x088E5EC4u>(ctx, &aot_mem) && ctx.pc == 0x088CC8E8u) goto L_088CC8E8;
    return;
L_088CC8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088CC908u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CC2F8;
L_088CC908:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088CC91Cu);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 103u, 0x088E5714u>(ctx, &aot_mem) && ctx.pc == 0x088CC91Cu) goto L_088CC91C;
    return;
L_088CC91C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC938:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CC960u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 25u, 0x088EF25Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC960u) goto L_088CC960;
    return;
L_088CC960:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC96C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CC994u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 31u, 0x088EF30Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC994u) goto L_088CC994;
    return;
L_088CC994:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC9A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CC9B4u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 116u, 0x08918908u>(ctx, &aot_mem) && ctx.pc == 0x088CC9B4u) goto L_088CC9B4;
    return;
L_088CC9B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC9C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088CC9D0u);
    aot_gpr[5] = (0u | 784u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088CC9D0u) goto L_088CC9D0;
    return;
L_088CC9D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC9DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088CCA18u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 170u, 0x08A51EE8u>(ctx, &aot_mem) && ctx.pc == 0x088CCA18u) goto L_088CCA18;
    return;
L_088CCA18:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[31] = (0x088CCA24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 72u, 0x088E3608u>(ctx, &aot_mem) && ctx.pc == 0x088CCA24u) goto L_088CCA24;
    return;
L_088CCA24:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(4000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088CCA5C;
      }
      goto L_088CCA30;
    }
L_088CCA30:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCA54;
      }
      goto L_088CCA3C;
    }
L_088CCA3C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCA50u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCA50u) goto L_088CCA50;
    return;
L_088CCA50:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCA54;
L_088CCA54:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCA5C;
    }
L_088CCA5C:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(7000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCA94;
      }
      goto L_088CCA68;
    }
L_088CCA68:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCA8C;
      }
      goto L_088CCA74;
    }
L_088CCA74:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCA88u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 137u, 0x088E78A0u>(ctx, &aot_mem) && ctx.pc == 0x088CCA88u) goto L_088CCA88;
    return;
L_088CCA88:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCA8C;
L_088CCA8C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCA94;
    }
L_088CCA94:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(10000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCACC;
      }
      goto L_088CCAA0;
    }
L_088CCAA0:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCAC4;
      }
      goto L_088CCAAC;
    }
L_088CCAAC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCAC0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCAC0u) goto L_088CCAC0;
    return;
L_088CCAC0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCAC4;
L_088CCAC4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCACC;
    }
L_088CCACC:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(13000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCB04;
      }
      goto L_088CCAD8;
    }
L_088CCAD8:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCAFC;
      }
      goto L_088CCAE4;
    }
L_088CCAE4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCAF8u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCAF8u) goto L_088CCAF8;
    return;
L_088CCAF8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCAFC;
L_088CCAFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCB04;
    }
L_088CCB04:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(16000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCB3C;
      }
      goto L_088CCB10;
    }
L_088CCB10:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCB34;
      }
      goto L_088CCB1C;
    }
L_088CCB1C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCB30u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCB30u) goto L_088CCB30;
    return;
L_088CCB30:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCB34;
L_088CCB34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCB3C;
    }
L_088CCB3C:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(19000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCB74;
      }
      goto L_088CCB48;
    }
L_088CCB48:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCB6C;
      }
      goto L_088CCB54;
    }
L_088CCB54:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCB68u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 156u, 0x088E7B7Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCB68u) goto L_088CCB68;
    return;
L_088CCB68:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCB6C;
L_088CCB6C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCB74;
    }
L_088CCB74:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(22000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCBAC;
      }
      goto L_088CCB80;
    }
L_088CCB80:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCBA4;
      }
      goto L_088CCB8C;
    }
L_088CCB8C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCBA0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 7u, 0x088E909Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCBA0u) goto L_088CCBA0;
    return;
L_088CCBA0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCBA4;
L_088CCBA4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCBAC;
    }
L_088CCBAC:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(25000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCBE4;
      }
      goto L_088CCBB8;
    }
L_088CCBB8:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCBDC;
      }
      goto L_088CCBC4;
    }
L_088CCBC4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCBD8u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCBD8u) goto L_088CCBD8;
    return;
L_088CCBD8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCBDC;
L_088CCBDC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCC0C;
      }
      goto L_088CCBE4;
    }
L_088CCBE4:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCC08;
      }
      goto L_088CCBF0;
    }
L_088CCBF0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCC04u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCC04u) goto L_088CCC04;
    return;
L_088CCC04:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CCC08;
L_088CCC08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_088CCC0C;
L_088CCC0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCC2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088CCC6Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCC6Cu) goto L_088CCC6C;
    return;
L_088CCC6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1672));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1648));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 304u);
    aot_gpr[31] = (0x088CCC9Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-20236));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x088CCC9Cu) goto L_088CCC9C;
    return;
L_088CCC9C:
    aot_gpr[31] = (0x088CCCA4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 148u, 0x088FEB28u>(ctx, &aot_mem) && ctx.pc == 0x088CCCA4u) goto L_088CCCA4;
    return;
L_088CCCA4:
    aot_gpr[4] = (aot_gpr[21] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_088CCCC8;
    }
    goto L_088CCCBC;
L_088CCCBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 2u);
      if (branch_taken) {
          goto L_088CCCD0;
      }
      goto L_088CCCC8;
    }
L_088CCCC8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    goto L_088CCCD0;
L_088CCCD0:
    aot_gpr[5] = (aot_gpr[21] & 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_088CCCF8;
    }
    goto L_088CCCEC;
L_088CCCEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 32u);
      if (branch_taken) {
          goto L_088CCD00;
      }
      goto L_088CCCF8;
    }
L_088CCCF8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    goto L_088CCD00;
L_088CCD00:
    aot_gpr[5] = (aot_gpr[21] & 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_088CCD28;
    }
    goto L_088CCD1C;
L_088CCD1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 64u);
      if (branch_taken) {
          goto L_088CCD30;
      }
      goto L_088CCD28;
    }
L_088CCD28:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    goto L_088CCD30;
L_088CCD30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CCD44u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 164u, 0x08A51EB8u>(ctx, &aot_mem) && ctx.pc == 0x088CCD44u) goto L_088CCD44;
    return;
L_088CCD44:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
      if (branch_taken) {
          goto L_088CCD60;
      }
      goto L_088CCD50;
    }
L_088CCD50:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CCE00;
      }
      goto L_088CCD58;
    }
L_088CCD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCD7C;
      }
      goto L_088CCD60;
    }
L_088CCD60:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CCDA8;
      }
      goto L_088CCD6C;
    }
L_088CCD6C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CCDD4;
      }
      goto L_088CCD74;
    }
L_088CCD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCE00;
      }
      goto L_088CCD7C;
    }
L_088CCD7C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCDA0;
      }
      goto L_088CCD88;
    }
L_088CCD88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCD9Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0241_entry, 241u, 12u, 0x088F513Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCD9Cu) goto L_088CCD9C;
    return;
L_088CCD9C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088CCDA0;
L_088CCDA0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCE00;
      }
      goto L_088CCDA8;
    }
L_088CCDA8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCDCC;
      }
      goto L_088CCDB4;
    }
L_088CCDB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCDC8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0242_entry, 242u, 9u, 0x088F6080u>(ctx, &aot_mem) && ctx.pc == 0x088CCDC8u) goto L_088CCDC8;
    return;
L_088CCDC8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088CCDCC;
L_088CCDCC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCE00;
      }
      goto L_088CCDD4;
    }
L_088CCDD4:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCDF8;
      }
      goto L_088CCDE0;
    }
L_088CCDE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CCDF4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 52u, 0x088F8644u>(ctx, &aot_mem) && ctx.pc == 0x088CCDF4u) goto L_088CCDF4;
    return;
L_088CCDF4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088CCDF8;
L_088CCDF8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CCE00;
      }
      goto L_088CCE00;
    }
L_088CCE00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x088CCE18u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 165u, 0x08A51EC0u>(ctx, &aot_mem) && ctx.pc == 0x088CCE18u) goto L_088CCE18;
    return;
L_088CCE18:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCE40;
      }
      goto L_088CCE28;
    }
L_088CCE28:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CCE3Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_088CCFEC;
L_088CCE3C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088CCE40;
L_088CCE40:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CCE5Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_088CC9DC;
L_088CCE5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088CCE68u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 79u, 0x08A4B444u>(ctx, &aot_mem) && ctx.pc == 0x088CCE68u) goto L_088CCE68;
    return;
L_088CCE68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCE8C;
      }
      goto L_088CCE78;
    }
L_088CCE78:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CCE88u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 2u, 0x088C000Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCE88u) goto L_088CCE88;
    return;
L_088CCE88:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088CCE8C;
L_088CCE8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CCEBCu);
    aot_gpr[6] = (0u | 528u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CCEBCu) goto L_088CCEBC;
    return;
L_088CCEBC:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_088CCED8;
      }
      goto L_088CCEC8;
    }
L_088CCEC8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CCED4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 172u, 0x088FAF28u>(ctx, &aot_mem) && ctx.pc == 0x088CCED4u) goto L_088CCED4;
    return;
L_088CCED4:
    aot_gpr[21] = (aot_gpr[22] | 0u);
    goto L_088CCED8;
L_088CCED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    aot_gpr[31] = (0x088CCEE8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 166u, 0x08A51EC8u>(ctx, &aot_mem) && ctx.pc == 0x088CCEE8u) goto L_088CCEE8;
    return;
L_088CCEE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(728), aot_gpr[2]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[21] = (aot_gpr[4] | 0u);
        goto L_088CCEFC;
    }
    goto L_088CCEFC;
L_088CCEFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(728), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(732), 0u);
    aot_gpr[31] = (0x088CCF10u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 167u, 0x08A51ED0u>(ctx, &aot_mem) && ctx.pc == 0x088CCF10u) goto L_088CCF10;
    return;
L_088CCF10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(736), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CCF40;
      }
      goto L_088CCF20;
    }
L_088CCF20:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CCF3Cu);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0886647Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCF3Cu) goto L_088CCF3C;
    return;
L_088CCF3C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088CCF40;
L_088CCF40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(740)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(736), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CCF54u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 168u, 0x08A51ED8u>(ctx, &aot_mem) && ctx.pc == 0x088CCF54u) goto L_088CCF54;
    return;
L_088CCF54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), aot_gpr[2]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (aot_gpr[5] | 0u);
        goto L_088CCF68;
    }
    goto L_088CCF68;
L_088CCF68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088CCF7Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 169u, 0x08A51EE0u>(ctx, &aot_mem) && ctx.pc == 0x088CCF7Cu) goto L_088CCF7C;
    return;
L_088CCF7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(744), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCFAC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32432), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCFCC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32440), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCFEC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCFF4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    ctx.pc = 0x088CD000u; return;
}

void recomp_unit_0200(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0200_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_200(Runtime &runtime) {
    runtime.register_generated_unit(200u, 0x088CC000u, 4096u, &recomp_unit_0200, &recomp_unit_0200_entry);
    runtime.register_function(0x088CC000u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC008u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC020u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC024u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC030u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC050u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC074u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC07Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC094u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC09Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC0B0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC0D4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC0ECu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC0FCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC114u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC12Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC134u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC140u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC1ACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC1C4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC1D0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC1F4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC204u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC274u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC284u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2A4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2ACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2B8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2C0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2CCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2E0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC2F8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC30Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC33Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC390u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3A8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3B0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3B8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3C0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3C8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3D4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC3E8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC404u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC424u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC440u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC460u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC474u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC49Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC4B8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC4D4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC4ECu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC4FCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC520u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC538u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC544u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC574u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC5D8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC624u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC63Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC650u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC668u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC67Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC694u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC6A8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC6ACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC6B0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC6B8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC6C4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC6D4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC700u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC720u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC740u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC754u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC768u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC774u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC798u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC7C8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC7D0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC7E4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC7FCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC804u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC818u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC82Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC844u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC84Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC854u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC864u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC86Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC878u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC888u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC89Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC8A4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC8ACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC8B4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC8B8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC8C0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC8E8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC908u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC91Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC938u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC960u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC96Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC994u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC9A0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC9B4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC9C0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC9D0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CC9DCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA18u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA24u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA30u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA3Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA50u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA54u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA5Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA68u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA74u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA88u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA8Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCA94u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAA0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAC0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAC4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCACCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAD8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAE4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAF8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCAFCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB04u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB10u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB1Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB30u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB34u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB3Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB48u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB54u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB68u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB6Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB74u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB80u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCB8Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBA0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBA4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBB8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBC4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBD8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBDCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBE4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCBF0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCC04u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCC08u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCC0Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCC2Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCC6Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCC9Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCCA4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCCBCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCCC8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCCD0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCCECu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCCF8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD00u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD1Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD28u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD30u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD44u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD50u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD58u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD60u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD6Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD74u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD7Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD88u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCD9Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDA0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDA8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDB4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDC8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDCCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDD4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDE0u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDF4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCDF8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE00u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE18u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE28u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE3Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE40u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE5Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE68u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE78u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE88u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCE8Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCEBCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCEC8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCED4u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCED8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCEE8u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCEFCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF10u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF20u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF3Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF40u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF54u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF68u, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCF7Cu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCFACu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCFCCu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCFECu, &recomp_unit_0200, "recomp_unit_0200");
    runtime.register_function(0x088CCFF4u, &recomp_unit_0200, "recomp_unit_0200");
}
} // namespace psprecomp
