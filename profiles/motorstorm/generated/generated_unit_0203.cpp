#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0203[1022] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0,
    0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55,
    0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 85, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 98, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 111, 0, 112, 0, 0, 113, 114,
    0, 115, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190,
};
void recomp_unit_0203_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088CF004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0203[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CF004;
    case 2u: goto L_088CF018;
    case 3u: goto L_088CF02C;
    case 4u: goto L_088CF03C;
    case 5u: goto L_088CF050;
    case 6u: goto L_088CF070;
    case 7u: goto L_088CF078;
    case 8u: goto L_088CF080;
    case 9u: goto L_088CF08C;
    case 10u: goto L_088CF0A0;
    case 11u: goto L_088CF0B4;
    case 12u: goto L_088CF0CC;
    case 13u: goto L_088CF0D0;
    case 14u: goto L_088CF0EC;
    case 15u: goto L_088CF0FC;
    case 16u: goto L_088CF108;
    case 17u: goto L_088CF124;
    case 18u: goto L_088CF13C;
    case 19u: goto L_088CF14C;
    case 20u: goto L_088CF158;
    case 21u: goto L_088CF170;
    case 22u: goto L_088CF174;
    case 23u: goto L_088CF190;
    case 24u: goto L_088CF1A0;
    case 25u: goto L_088CF1AC;
    case 26u: goto L_088CF1C8;
    case 27u: goto L_088CF1DC;
    case 28u: goto L_088CF1EC;
    case 29u: goto L_088CF1F8;
    case 30u: goto L_088CF210;
    case 31u: goto L_088CF218;
    case 32u: goto L_088CF264;
    case 33u: goto L_088CF274;
    case 34u: goto L_088CF284;
    case 35u: goto L_088CF29C;
    case 36u: goto L_088CF2A4;
    case 37u: goto L_088CF2B4;
    case 38u: goto L_088CF2C0;
    case 39u: goto L_088CF2D0;
    case 40u: goto L_088CF2DC;
    case 41u: goto L_088CF2EC;
    case 42u: goto L_088CF2F8;
    case 43u: goto L_088CF304;
    case 44u: goto L_088CF30C;
    case 45u: goto L_088CF320;
    case 46u: goto L_088CF328;
    case 47u: goto L_088CF364;
    case 48u: goto L_088CF39C;
    case 49u: goto L_088CF3A4;
    case 50u: goto L_088CF3B0;
    case 51u: goto L_088CF3C0;
    case 52u: goto L_088CF3D8;
    case 53u: goto L_088CF3E4;
    case 54u: goto L_088CF3F4;
    case 55u: goto L_088CF400;
    case 56u: goto L_088CF410;
    case 57u: goto L_088CF41C;
    case 58u: goto L_088CF42C;
    case 59u: goto L_088CF438;
    case 60u: goto L_088CF444;
    case 61u: goto L_088CF450;
    case 62u: goto L_088CF468;
    case 63u: goto L_088CF488;
    case 64u: goto L_088CF4C4;
    case 65u: goto L_088CF4D4;
    case 66u: goto L_088CF4E4;
    case 67u: goto L_088CF4F8;
    case 68u: goto L_088CF504;
    case 69u: goto L_088CF520;
    case 70u: goto L_088CF52C;
    case 71u: goto L_088CF538;
    case 72u: goto L_088CF544;
    case 73u: goto L_088CF554;
    case 74u: goto L_088CF564;
    case 75u: goto L_088CF578;
    case 76u: goto L_088CF584;
    case 77u: goto L_088CF590;
    case 78u: goto L_088CF5A4;
    case 79u: goto L_088CF5B0;
    case 80u: goto L_088CF5BC;
    case 81u: goto L_088CF5D0;
    case 82u: goto L_088CF5DC;
    case 83u: goto L_088CF5F0;
    case 84u: goto L_088CF604;
    case 85u: goto L_088CF61C;
    case 86u: goto L_088CF620;
    case 87u: goto L_088CF624;
    case 88u: goto L_088CF67C;
    case 89u: goto L_088CF6B8;
    case 90u: goto L_088CF6F4;
    case 91u: goto L_088CF70C;
    case 92u: goto L_088CF71C;
    case 93u: goto L_088CF730;
    case 94u: goto L_088CF73C;
    case 95u: goto L_088CF744;
    case 96u: goto L_088CF760;
    case 97u: goto L_088CF770;
    case 98u: goto L_088CF788;
    case 99u: goto L_088CF78C;
    case 100u: goto L_088CF794;
    case 101u: goto L_088CF7B4;
    case 102u: goto L_088CF7EC;
    case 103u: goto L_088CF7F8;
    case 104u: goto L_088CF810;
    case 105u: goto L_088CF81C;
    case 106u: goto L_088CF830;
    case 107u: goto L_088CF834;
    case 108u: goto L_088CF84C;
    case 109u: goto L_088CF85C;
    case 110u: goto L_088CF864;
    case 111u: goto L_088CF868;
    case 112u: goto L_088CF870;
    case 113u: goto L_088CF87C;
    case 114u: goto L_088CF880;
    case 115u: goto L_088CF888;
    case 116u: goto L_088CF894;
    case 117u: goto L_088CF898;
    case 118u: goto L_088CF8C0;
    case 119u: goto L_088CF92C;
    case 120u: goto L_088CF94C;
    case 121u: goto L_088CF98C;
    case 122u: goto L_088CF9D8;
    case 123u: goto L_088CF9FC;
    case 124u: goto L_088CFA08;
    case 125u: goto L_088CFA14;
    case 126u: goto L_088CFA28;
    case 127u: goto L_088CFA2C;
    case 128u: goto L_088CFA44;
    case 129u: goto L_088CFA58;
    case 130u: goto L_088CFA80;
    case 131u: goto L_088CFAD4;
    case 132u: goto L_088CFB08;
    case 133u: goto L_088CFB14;
    case 134u: goto L_088CFB1C;
    case 135u: goto L_088CFB28;
    case 136u: goto L_088CFB30;
    case 137u: goto L_088CFB38;
    case 138u: goto L_088CFB48;
    case 139u: goto L_088CFB5C;
    case 140u: goto L_088CFB7C;
    case 141u: goto L_088CFBBC;
    case 142u: goto L_088CFBD0;
    case 143u: goto L_088CFBDC;
    case 144u: goto L_088CFBF0;
    case 145u: goto L_088CFBFC;
    case 146u: goto L_088CFC10;
    case 147u: goto L_088CFC30;
    case 148u: goto L_088CFC40;
    case 149u: goto L_088CFC78;
    case 150u: goto L_088CFC84;
    case 151u: goto L_088CFC94;
    case 152u: goto L_088CFCA8;
    case 153u: goto L_088CFCC4;
    case 154u: goto L_088CFCD4;
    case 155u: goto L_088CFD04;
    case 156u: goto L_088CFD10;
    case 157u: goto L_088CFD1C;
    case 158u: goto L_088CFD30;
    case 159u: goto L_088CFD48;
    case 160u: goto L_088CFD80;
    case 161u: goto L_088CFD84;
    case 162u: goto L_088CFDA8;
    case 163u: goto L_088CFDB8;
    case 164u: goto L_088CFDD0;
    case 165u: goto L_088CFDDC;
    case 166u: goto L_088CFDF4;
    case 167u: goto L_088CFE38;
    case 168u: goto L_088CFE68;
    case 169u: goto L_088CFE74;
    case 170u: goto L_088CFE8C;
    case 171u: goto L_088CFEA0;
    case 172u: goto L_088CFEB0;
    case 173u: goto L_088CFEB8;
    case 174u: goto L_088CFED0;
    case 175u: goto L_088CFF00;
    case 176u: goto L_088CFF0C;
    case 177u: goto L_088CFF18;
    case 178u: goto L_088CFF2C;
    case 179u: goto L_088CFF44;
    case 180u: goto L_088CFF6C;
    case 181u: goto L_088CFF78;
    case 182u: goto L_088CFF80;
    case 183u: goto L_088CFF94;
    case 184u: goto L_088CFFA8;
    case 185u: goto L_088CFFB4;
    case 186u: goto L_088CFFBC;
    case 187u: goto L_088CFFD0;
    case 188u: goto L_088CFFE4;
    case 189u: goto L_088CFFF0;
    case 190u: goto L_088CFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CF004:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CF03C;
      }
      goto L_088CF018;
    }
L_088CF018:
    aot_gpr[6] = (aot_gpr[7] & 12u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF03C;
      }
      goto L_088CF02C;
    }
L_088CF02C:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088CF03C;
L_088CF03C:
    aot_gpr[6] = (aot_gpr[7] & 192u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (16256u << 16u);
      if (branch_taken) {
          goto L_088CF080;
      }
      goto L_088CF050;
    }
L_088CF050:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 12u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF078;
      }
      goto L_088CF070;
    }
L_088CF070:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088CF078;
      }
      goto L_088CF078;
    }
L_088CF078:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088CF080;
L_088CF080:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF0D0;
      }
      goto L_088CF08C;
    }
L_088CF08C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF0CC;
      }
      goto L_088CF0A0;
    }
L_088CF0A0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF0CC;
      }
      goto L_088CF0B4;
    }
L_088CF0B4:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088CF0D0;
      }
      goto L_088CF0CC;
    }
L_088CF0CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    goto L_088CF0D0;
L_088CF0D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (3u << 16u);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF124;
      }
      goto L_088CF0EC;
    }
L_088CF0EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(6)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088CF108;
      }
      goto L_088CF0FC;
    }
L_088CF0FC:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088CF108;
L_088CF108:
    aot_gpr[6] = (48000u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 32897u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF170;
      }
      goto L_088CF124;
    }
L_088CF124:
    aot_gpr[6] = (12u << 16u);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088CF174;
    }
    goto L_088CF13C;
L_088CF13C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088CF158;
      }
      goto L_088CF14C;
    }
L_088CF14C:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088CF158;
L_088CF158:
    aot_gpr[6] = (15232u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 32897u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF170;
L_088CF170:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088CF174;
L_088CF174:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] & 12288u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF1C8;
      }
      goto L_088CF190;
    }
L_088CF190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088CF1AC;
      }
      goto L_088CF1A0;
    }
L_088CF1A0:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088CF1AC;
L_088CF1AC:
    aot_gpr[5] = (48000u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32897u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF210;
      }
      goto L_088CF1C8;
    }
L_088CF1C8:
    aot_gpr[6] = (aot_gpr[7] & 49152u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF210;
      }
      goto L_088CF1DC;
    }
L_088CF1DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088CF1F8;
      }
      goto L_088CF1EC;
    }
L_088CF1EC:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088CF1F8;
L_088CF1F8:
    aot_gpr[5] = (15232u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32897u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF210;
L_088CF210:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088CF264u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 98u, 0x088C6944u>(ctx, &aot_mem) && ctx.pc == 0x088CF264u) goto L_088CF264;
    return;
L_088CF264:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] & 8u);
      if (branch_taken) {
          goto L_088CF284;
      }
      goto L_088CF274;
    }
L_088CF274:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF284;
L_088CF284:
    aot_gpr[6] = (aot_gpr[5] & 16u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF2D0;
      }
      goto L_088CF29C;
    }
L_088CF29C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF2B4;
      }
      goto L_088CF2A4;
    }
L_088CF2A4:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF304;
      }
      goto L_088CF2B4;
    }
L_088CF2B4:
    aot_gpr[5] = (aot_gpr[5] & 4u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF304;
      }
      goto L_088CF2C0;
    }
L_088CF2C0:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF304;
      }
      goto L_088CF2D0;
    }
L_088CF2D0:
    aot_gpr[6] = (aot_gpr[5] & 4u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF2EC;
      }
      goto L_088CF2DC;
    }
L_088CF2DC:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF304;
      }
      goto L_088CF2EC;
    }
L_088CF2EC:
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF304;
      }
      goto L_088CF2F8;
    }
L_088CF2F8:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF304;
L_088CF304:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF320;
      }
      goto L_088CF30C;
    }
L_088CF30C:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088CF320;
L_088CF320:
    aot_gpr[31] = (0x088CF328u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 96u, 0x088C6928u>(ctx, &aot_mem) && ctx.pc == 0x088CF328u) goto L_088CF328;
    return;
L_088CF328:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[4] = (17150u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
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
L_088CF364:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(209)));
    aot_gpr[7] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3A4;
      }
      goto L_088CF39C;
    }
L_088CF39C:
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_088CF3A4;
L_088CF3A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3C0;
      }
      goto L_088CF3B0;
    }
L_088CF3B0:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088CF3C0;
L_088CF3C0:
    aot_gpr[7] = (aot_gpr[6] & 16u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF410;
      }
      goto L_088CF3D8;
    }
L_088CF3D8:
    aot_gpr[7] = (aot_gpr[6] & 2u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3F4;
      }
      goto L_088CF3E4;
    }
L_088CF3E4:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088CF444;
      }
      goto L_088CF3F4;
    }
L_088CF3F4:
    aot_gpr[7] = (aot_gpr[6] & 4u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF444;
      }
      goto L_088CF400;
    }
L_088CF400:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088CF444;
      }
      goto L_088CF410;
    }
L_088CF410:
    aot_gpr[7] = (aot_gpr[6] & 4u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF42C;
      }
      goto L_088CF41C;
    }
L_088CF41C:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088CF444;
      }
      goto L_088CF42C;
    }
L_088CF42C:
    aot_gpr[7] = (aot_gpr[6] & 2u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF444;
      }
      goto L_088CF438;
    }
L_088CF438:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088CF444;
L_088CF444:
    aot_gpr[6] = (aot_gpr[6] & 8u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(210))))));
        goto L_088CF468;
    }
    goto L_088CF450;
L_088CF450:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(210))))));
    goto L_088CF468;
L_088CF468:
    aot_gpr[6] = (17150u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF488:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[7] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_088CF544;
      }
      goto L_088CF4C4;
    }
L_088CF4C4:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF4E4;
      }
      goto L_088CF4D4;
    }
L_088CF4D4:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF584;
      }
      goto L_088CF4E4;
    }
L_088CF4E4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF504;
      }
      goto L_088CF4F8;
    }
L_088CF4F8:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF504;
L_088CF504:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32500)));
    aot_gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 1u);
        goto L_088CF520;
    }
    goto L_088CF520;
L_088CF520:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF584;
      }
      goto L_088CF52C;
    }
L_088CF52C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF584;
      }
      goto L_088CF538;
    }
L_088CF538:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_088CF584;
      }
      goto L_088CF544;
    }
L_088CF544:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF564;
      }
      goto L_088CF554;
    }
L_088CF554:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CF584;
      }
      goto L_088CF564;
    }
L_088CF564:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF584;
      }
      goto L_088CF578;
    }
L_088CF578:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF584;
L_088CF584:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF5A4;
      }
      goto L_088CF590;
    }
L_088CF590:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    goto L_088CF5A4;
L_088CF5A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF5D0;
      }
      goto L_088CF5B0;
    }
L_088CF5B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF5D0;
      }
      goto L_088CF5BC;
    }
L_088CF5BC:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088CF5D0;
L_088CF5D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(34)));
    if (aot_gpr[6] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_088CF624;
    }
    goto L_088CF5DC;
L_088CF5DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF61C;
      }
      goto L_088CF5F0;
    }
L_088CF5F0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF61C;
      }
      goto L_088CF604;
    }
L_088CF604:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088CF620;
      }
      goto L_088CF61C;
    }
L_088CF61C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    goto L_088CF620;
L_088CF620:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088CF624;
L_088CF624:
    aot_gpr[6] = (17279u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (15232u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 32897u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF67C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF6B8:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[5] = (15897u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF73C;
      }
      goto L_088CF6F4;
    }
L_088CF6F4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF71C;
      }
      goto L_088CF70C;
    }
L_088CF70C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088CF73C;
      }
      goto L_088CF71C;
    }
L_088CF71C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF73C;
      }
      goto L_088CF730;
    }
L_088CF730:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088CF73C;
L_088CF73C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF744:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32500)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF78C;
      }
      goto L_088CF760;
    }
L_088CF760:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(32504)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088CF78C;
      }
      goto L_088CF770;
    }
L_088CF770:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32500), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088CF78C;
      }
      goto L_088CF788;
    }
L_088CF788:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CF78C;
L_088CF78C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF794:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF7B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088CF84C;
      }
      goto L_088CF7EC;
    }
L_088CF7EC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088CF7F8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 184u, 0x08A51F90u>(ctx, &aot_mem) && ctx.pc == 0x088CF7F8u) goto L_088CF7F8;
    return;
L_088CF7F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088CF84C;
      }
      goto L_088CF810;
    }
L_088CF810:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CF834;
      }
      goto L_088CF81C;
    }
L_088CF81C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CF830u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 148u, 0x088D0974u>(ctx, &aot_mem) && ctx.pc == 0x088CF830u) goto L_088CF830;
    return;
L_088CF830:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088CF834;
L_088CF834:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(416));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF810;
      }
      goto L_088CF84C;
    }
L_088CF84C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088CF868;
      }
      goto L_088CF85C;
    }
L_088CF85C:
    aot_gpr[31] = (0x088CF864u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 185u, 0x08A51F98u>(ctx, &aot_mem) && ctx.pc == 0x088CF864u) goto L_088CF864;
    return;
L_088CF864:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_088CF868;
L_088CF868:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF880;
      }
      goto L_088CF870;
    }
L_088CF870:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088CF87Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 186u, 0x08A51FA0u>(ctx, &aot_mem) && ctx.pc == 0x088CF87Cu) goto L_088CF87C;
    return;
L_088CF87C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_088CF880;
L_088CF880:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF898;
      }
      goto L_088CF888;
    }
L_088CF888:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088CF894u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x088CF894u) goto L_088CF894;
    return;
L_088CF894:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_088CF898;
L_088CF898:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF8C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[9] = (aot_gpr[7] << 9u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] << 5u);
    aot_gpr[7] = (aot_gpr[9] - aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[7] << 5u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF92C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] << 9u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF94C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CF98Cu);
    aot_gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CF98Cu) goto L_088CF98C;
    return;
L_088CF98C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[5] << 9u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088CF9D8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CF9D8u) goto L_088CF9D8;
    return;
L_088CF9D8:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] - aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFA44;
      }
      goto L_088CF9FC;
    }
L_088CF9FC:
    aot_gpr[19] = (aot_gpr[22] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CFA2C;
      }
      goto L_088CFA08;
    }
L_088CFA08:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFA14u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_088CF92C;
L_088CFA14:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CFA28u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 165u, 0x088D0BF0u>(ctx, &aot_mem) && ctx.pc == 0x088CFA28u) goto L_088CFA28;
    return;
L_088CFA28:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_088CFA2C;
L_088CFA2C:
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(416));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF9FC;
      }
      goto L_088CFA44;
    }
L_088CFA44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[31] = (0x088CFA58u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CFA58u) goto L_088CFA58;
    return;
L_088CFA58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[31] = (0x088CFA80u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CFA80u) goto L_088CFA80;
    return;
L_088CFA80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
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
L_088CFAD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB5C;
      }
      goto L_088CFB08;
    }
L_088CFB08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CFB14u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_088CF92C;
L_088CFB14:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_088CFB1C;
L_088CFB1C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB38;
      }
      goto L_088CFB28;
    }
L_088CFB28:
    aot_gpr[31] = (0x088CFB30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x088CFB30u) goto L_088CFB30;
    return;
L_088CFB30:
    aot_gpr[31] = (0x088CFB38u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 31u, 0x0894B1E8u>(ctx, &aot_mem) && ctx.pc == 0x088CFB38u) goto L_088CFB38;
    return;
L_088CFB38:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CFB1C;
      }
      goto L_088CFB48;
    }
L_088CFB48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB08;
      }
      goto L_088CFB5C;
    }
L_088CFB5C:
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
L_088CFB7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088CFBBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 68u, 0x0894B4D0u>(ctx, &aot_mem) && ctx.pc == 0x088CFBBCu) goto L_088CFBBC;
    return;
L_088CFBBC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFC10;
      }
      goto L_088CFBD0;
    }
L_088CFBD0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CFBDCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_088CF92C;
L_088CFBDC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFBF0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 153u, 0x088D1D90u>(ctx, &aot_mem) && ctx.pc == 0x088CFBF0u) goto L_088CFBF0;
    return;
L_088CFBF0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088CFBFCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 147u, 0x088D1D28u>(ctx, &aot_mem) && ctx.pc == 0x088CFBFCu) goto L_088CFBFC;
    return;
L_088CFBFC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFBD0;
      }
      goto L_088CFC10;
    }
L_088CFC10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFC30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] << 5u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFC40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFCA8;
      }
      goto L_088CFC78;
    }
L_088CFC78:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CFC84u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_088CFC30;
L_088CFC84:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFC94u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 102u, 0x088D0670u>(ctx, &aot_mem) && ctx.pc == 0x088CFC94u) goto L_088CFC94;
    return;
L_088CFC94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFC78;
      }
      goto L_088CFCA8;
    }
L_088CFCA8:
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
L_088CFCC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFCD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFD30;
      }
      goto L_088CFD04;
    }
L_088CFD04:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFD10u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088CFCC4;
L_088CFD10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    aot_gpr[31] = (0x088CFD1Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 145u, 0x088D0938u>(ctx, &aot_mem) && ctx.pc == 0x088CFD1Cu) goto L_088CFD1C;
    return;
L_088CFD1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFD04;
      }
      goto L_088CFD30;
    }
L_088CFD30:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFD48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(192))))));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFDD0;
      }
      goto L_088CFD80;
    }
L_088CFD80:
    aot_gpr[5] = (aot_gpr[18] << 16u);
    goto L_088CFD84;
L_088CFD84:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFDA8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_088CFB7C;
L_088CFDA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFDB8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_088CFC40;
L_088CFDB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(192))))));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[18] << 16u);
      if (branch_taken) {
          goto L_088CFD84;
      }
      goto L_088CFDD0;
    }
L_088CFDD0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088CFDDCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CFCD4;
L_088CFDDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFDF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFE38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFEA0;
      }
      goto L_088CFE68;
    }
L_088CFE68:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFE74u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088CF92C;
L_088CFE74:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CFE8Cu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 168u, 0x088D1EA4u>(ctx, &aot_mem) && ctx.pc == 0x088CFE8Cu) goto L_088CFE8C;
    return;
L_088CFE8C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFE68;
      }
      goto L_088CFEA0;
    }
L_088CFEA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_088CFEB8;
      }
      goto L_088CFEB0;
    }
L_088CFEB0:
    aot_gpr[31] = (0x088CFEB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CFDF4;
L_088CFEB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFF2C;
      }
      goto L_088CFF00;
    }
L_088CFF00:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CFF0Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088CF92C;
L_088CFF0C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088CFF18u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 149u, 0x088D1D44u>(ctx, &aot_mem) && ctx.pc == 0x088CFF18u) goto L_088CFF18;
    return;
L_088CFF18:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFF00;
      }
      goto L_088CFF2C;
    }
L_088CFF2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFF44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFF94;
      }
      goto L_088CFF6C;
    }
L_088CFF6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CFF78u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CF92C;
L_088CFF78:
    aot_gpr[31] = (0x088CFF80u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 119u, 0x088D1A74u>(ctx, &aot_mem) && ctx.pc == 0x088CFF80u) goto L_088CFF80;
    return;
L_088CFF80:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFF6C;
      }
      goto L_088CFF94;
    }
L_088CFF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFFD0;
      }
      goto L_088CFFA8;
    }
L_088CFFA8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CFFB4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CFC30;
L_088CFFB4:
    aot_gpr[31] = (0x088CFFBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 126u, 0x088D07F4u>(ctx, &aot_mem) && ctx.pc == 0x088CFFBCu) goto L_088CFFBC;
    return;
L_088CFFBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFFA8;
      }
      goto L_088CFFD0;
    }
L_088CFFD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 2u, 0x088D000Cu>(ctx, &aot_mem); return;
      }
      goto L_088CFFE4;
    }
L_088CFFE4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CFFF0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CFCC4;
L_088CFFF0:
    aot_gpr[31] = (0x088CFFF8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 146u, 0x088D0940u>(ctx, &aot_mem) && ctx.pc == 0x088CFFF8u) goto L_088CFFF8;
    return;
L_088CFFF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x088D0000u; return;
}

void recomp_unit_0203(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0203_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_203(Runtime &runtime) {
    runtime.register_generated_unit(203u, 0x088CF000u, 4096u, &recomp_unit_0203, &recomp_unit_0203_entry);
    runtime.register_function(0x088CF004u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF018u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF02Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF03Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF050u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF070u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF078u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF080u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF08Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF0A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF0B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF0CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF0D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF0ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF0FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF108u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF124u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF13Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF14Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF158u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF170u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF174u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF190u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF1A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF1ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF1C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF1DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF1ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF1F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF210u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF218u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF264u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF274u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF284u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF29Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF2F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF304u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF30Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF320u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF328u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF364u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF39Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF3A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF3B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF3C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF3D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF3E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF3F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF400u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF410u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF41Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF42Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF438u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF444u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF450u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF468u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF488u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF4C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF4D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF4E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF4F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF504u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF520u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF52Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF538u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF544u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF554u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF564u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF578u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF584u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF590u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF5A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF5B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF5BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF5D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF5DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF5F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF604u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF61Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF620u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF624u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF67Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF6B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF6F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF70Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF71Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF730u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF73Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF744u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF760u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF770u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF788u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF78Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF794u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF7B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF7ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF7F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF810u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF81Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF830u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF834u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF84Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF85Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF864u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF868u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF870u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF87Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF880u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF888u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF894u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF898u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF8C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF92Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF94Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF98Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF9D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CF9FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFA80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFAD4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB5Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFB7Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFBBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFBD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFBDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFBF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFBFCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFC10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFC30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFC40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFC78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFC84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFC94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFCA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFCC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFCD4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFD84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFDA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFDB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFDD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFDDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFDF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFE38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFE68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFE74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFE8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFEA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFEB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFEB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFED0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF00u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFF94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x088CFFF8u, &recomp_unit_0203, "recomp_unit_0203");
}
} // namespace psprecomp
