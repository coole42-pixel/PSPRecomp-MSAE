#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0138[1012] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 8, 9, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0,
    16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0,
    0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 49, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 138, 0, 139,
    0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0,
    152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 177, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 181,
};
void recomp_unit_0138_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0888E000u;
        entry_id = (entry_delta < 4048u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0138[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888E000;
    case 2u: goto L_0888E00C;
    case 3u: goto L_0888E014;
    case 4u: goto L_0888E01C;
    case 5u: goto L_0888E028;
    case 6u: goto L_0888E030;
    case 7u: goto L_0888E038;
    case 8u: goto L_0888E040;
    case 9u: goto L_0888E044;
    case 10u: goto L_0888E04C;
    case 11u: goto L_0888E058;
    case 12u: goto L_0888E060;
    case 13u: goto L_0888E068;
    case 14u: goto L_0888E070;
    case 15u: goto L_0888E078;
    case 16u: goto L_0888E080;
    case 17u: goto L_0888E088;
    case 18u: goto L_0888E09C;
    case 19u: goto L_0888E0AC;
    case 20u: goto L_0888E0B4;
    case 21u: goto L_0888E0C0;
    case 22u: goto L_0888E0C8;
    case 23u: goto L_0888E0D4;
    case 24u: goto L_0888E0F0;
    case 25u: goto L_0888E108;
    case 26u: goto L_0888E170;
    case 27u: goto L_0888E188;
    case 28u: goto L_0888E1DC;
    case 29u: goto L_0888E1F0;
    case 30u: goto L_0888E1F8;
    case 31u: goto L_0888E210;
    case 32u: goto L_0888E29C;
    case 33u: goto L_0888E2EC;
    case 34u: goto L_0888E324;
    case 35u: goto L_0888E3AC;
    case 36u: goto L_0888E3B8;
    case 37u: goto L_0888E3CC;
    case 38u: goto L_0888E3D8;
    case 39u: goto L_0888E3EC;
    case 40u: goto L_0888E3F8;
    case 41u: goto L_0888E404;
    case 42u: goto L_0888E40C;
    case 43u: goto L_0888E414;
    case 44u: goto L_0888E434;
    case 45u: goto L_0888E444;
    case 46u: goto L_0888E45C;
    case 47u: goto L_0888E468;
    case 48u: goto L_0888E478;
    case 49u: goto L_0888E488;
    case 50u: goto L_0888E48C;
    case 51u: goto L_0888E498;
    case 52u: goto L_0888E4B4;
    case 53u: goto L_0888E4C0;
    case 54u: goto L_0888E4E8;
    case 55u: goto L_0888E4F4;
    case 56u: goto L_0888E500;
    case 57u: goto L_0888E514;
    case 58u: goto L_0888E524;
    case 59u: goto L_0888E52C;
    case 60u: goto L_0888E530;
    case 61u: goto L_0888E554;
    case 62u: goto L_0888E564;
    case 63u: goto L_0888E570;
    case 64u: goto L_0888E580;
    case 65u: goto L_0888E58C;
    case 66u: goto L_0888E5A0;
    case 67u: goto L_0888E5C4;
    case 68u: goto L_0888E5CC;
    case 69u: goto L_0888E5E0;
    case 70u: goto L_0888E5F4;
    case 71u: goto L_0888E60C;
    case 72u: goto L_0888E634;
    case 73u: goto L_0888E640;
    case 74u: goto L_0888E658;
    case 75u: goto L_0888E664;
    case 76u: goto L_0888E668;
    case 77u: goto L_0888E68C;
    case 78u: goto L_0888E698;
    case 79u: goto L_0888E6AC;
    case 80u: goto L_0888E6C8;
    case 81u: goto L_0888E6D8;
    case 82u: goto L_0888E700;
    case 83u: goto L_0888E710;
    case 84u: goto L_0888E724;
    case 85u: goto L_0888E748;
    case 86u: goto L_0888E750;
    case 87u: goto L_0888E758;
    case 88u: goto L_0888E77C;
    case 89u: goto L_0888E78C;
    case 90u: goto L_0888E7A0;
    case 91u: goto L_0888E7AC;
    case 92u: goto L_0888E7E0;
    case 93u: goto L_0888E7E8;
    case 94u: goto L_0888E7F8;
    case 95u: goto L_0888E814;
    case 96u: goto L_0888E820;
    case 97u: goto L_0888E840;
    case 98u: goto L_0888E84C;
    case 99u: goto L_0888E85C;
    case 100u: goto L_0888E86C;
    case 101u: goto L_0888E880;
    case 102u: goto L_0888E8B4;
    case 103u: goto L_0888E8BC;
    case 104u: goto L_0888E8C8;
    case 105u: goto L_0888E8D8;
    case 106u: goto L_0888E8E4;
    case 107u: goto L_0888E8F4;
    case 108u: goto L_0888E908;
    case 109u: goto L_0888E93C;
    case 110u: goto L_0888E944;
    case 111u: goto L_0888E950;
    case 112u: goto L_0888E960;
    case 113u: goto L_0888E96C;
    case 114u: goto L_0888E97C;
    case 115u: goto L_0888E990;
    case 116u: goto L_0888E9C4;
    case 117u: goto L_0888E9CC;
    case 118u: goto L_0888E9E4;
    case 119u: goto L_0888EA04;
    case 120u: goto L_0888EA10;
    case 121u: goto L_0888EA1C;
    case 122u: goto L_0888EA48;
    case 123u: goto L_0888EA50;
    case 124u: goto L_0888EA5C;
    case 125u: goto L_0888EA68;
    case 126u: goto L_0888EA9C;
    case 127u: goto L_0888EAA4;
    case 128u: goto L_0888EAC0;
    case 129u: goto L_0888EAD4;
    case 130u: goto L_0888EAE0;
    case 131u: goto L_0888EB14;
    case 132u: goto L_0888EB1C;
    case 133u: goto L_0888EB60;
    case 134u: goto L_0888EBD4;
    case 135u: goto L_0888EBE0;
    case 136u: goto L_0888EBE8;
    case 137u: goto L_0888EBF0;
    case 138u: goto L_0888EBF4;
    case 139u: goto L_0888EBFC;
    case 140u: goto L_0888EC08;
    case 141u: goto L_0888EC10;
    case 142u: goto L_0888EC18;
    case 143u: goto L_0888EC20;
    case 144u: goto L_0888EC28;
    case 145u: goto L_0888EC30;
    case 146u: goto L_0888EC38;
    case 147u: goto L_0888EC48;
    case 148u: goto L_0888EC58;
    case 149u: goto L_0888EC60;
    case 150u: goto L_0888EC6C;
    case 151u: goto L_0888EC74;
    case 152u: goto L_0888EC80;
    case 153u: goto L_0888EC8C;
    case 154u: goto L_0888ECA4;
    case 155u: goto L_0888ECE4;
    case 156u: goto L_0888ECFC;
    case 157u: goto L_0888ED38;
    case 158u: goto L_0888ED4C;
    case 159u: goto L_0888ED54;
    case 160u: goto L_0888ED8C;
    case 161u: goto L_0888EDC8;
    case 162u: goto L_0888EDF0;
    case 163u: goto L_0888EE14;
    case 164u: goto L_0888EE28;
    case 165u: goto L_0888EE34;
    case 166u: goto L_0888EE40;
    case 167u: goto L_0888EE48;
    case 168u: goto L_0888EE58;
    case 169u: goto L_0888EE60;
    case 170u: goto L_0888EE64;
    case 171u: goto L_0888EEC8;
    case 172u: goto L_0888EF08;
    case 173u: goto L_0888EF20;
    case 174u: goto L_0888EF38;
    case 175u: goto L_0888EF4C;
    case 176u: goto L_0888EF8C;
    case 177u: goto L_0888EF94;
    case 178u: goto L_0888EF98;
    case 179u: goto L_0888EFB4;
    case 180u: goto L_0888EFC8;
    case 181u: goto L_0888EFCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0888E000:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E014;
      }
      goto L_0888E00C;
    }
L_0888E00C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_0888E044;
      }
      goto L_0888E014;
    }
L_0888E014:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888E044;
      }
      goto L_0888E01C;
    }
L_0888E01C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E044;
      }
      goto L_0888E028;
    }
L_0888E028:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_0888E044;
      }
      goto L_0888E030;
    }
L_0888E030:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E044;
      }
      goto L_0888E038;
    }
L_0888E038:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_0888E044;
      }
      goto L_0888E040;
    }
L_0888E040:
    aot_gpr[19] = (0u | 1u);
    goto L_0888E044;
L_0888E044:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E058;
      }
      goto L_0888E04C;
    }
L_0888E04C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888E060;
      }
      goto L_0888E058;
    }
L_0888E058:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0888E060;
L_0888E060:
    if (aot_gpr[6] == 0u) {
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
        goto L_0888E070;
    }
    goto L_0888E068;
L_0888E068:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888E070;
      }
      goto L_0888E070;
    }
L_0888E070:
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_0888E080;
    }
    goto L_0888E078;
L_0888E078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888E080;
      }
      goto L_0888E080;
    }
L_0888E080:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[17] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0888E09C;
      }
      goto L_0888E088;
    }
L_0888E088:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0888E0AC;
      }
      goto L_0888E09C;
    }
L_0888E09C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 0u);
    goto L_0888E0AC;
L_0888E0AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E0C8;
      }
      goto L_0888E0B4;
    }
L_0888E0B4:
    aot_gpr[16] = (aot_gpr[9] | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[16] = (aot_gpr[8] | 0u);
        goto L_0888E0C0;
    }
    goto L_0888E0C0;
L_0888E0C0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888E0D4;
      }
      goto L_0888E0C8;
    }
L_0888E0C8:
    aot_gpr[16] = (aot_gpr[10] | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[16] = (aot_gpr[8] | 0u);
        goto L_0888E0D4;
    }
    goto L_0888E0D4;
L_0888E0D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
      if (branch_taken) {
          goto L_0888E1F8;
      }
      goto L_0888E0F0;
    }
L_0888E0F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (65280u << 16u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0888E108u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 110u, 0x0893DF90u>(ctx, &aot_mem) && ctx.pc == 0x0888E108u) goto L_0888E108;
    return;
L_0888E108:
    aot_gpr[8] = (65280u << 16u);
    aot_gpr[8] = (aot_gpr[16] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[10]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E170u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x0888D560u>(ctx, &aot_mem) && ctx.pc == 0x0888E170u) goto L_0888E170;
    return;
L_0888E170:
    aot_gpr[18] = (65280u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888E188u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 110u, 0x0893DF90u>(ctx, &aot_mem) && ctx.pc == 0x0888E188u) goto L_0888E188;
    return;
L_0888E188:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E1DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x0888D560u>(ctx, &aot_mem) && ctx.pc == 0x0888E1DCu) goto L_0888E1DC;
    return;
L_0888E1DC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888E1F0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 110u, 0x0893DF90u>(ctx, &aot_mem) && ctx.pc == 0x0888E1F0u) goto L_0888E1F0;
    return;
L_0888E1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E2EC;
      }
      goto L_0888E1F8;
    }
L_0888E1F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
      if (branch_taken) {
          goto L_0888E29C;
      }
      goto L_0888E210;
    }
L_0888E210:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[6] & aot_gpr[4]);
    aot_fpr[14] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (65280u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[14] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[13] | 0u);
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[10] = (aot_gpr[12] | 0u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E29Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x0888D560u>(ctx, &aot_mem) && ctx.pc == 0x0888E29Cu) goto L_0888E29C;
    return;
L_0888E29C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E2ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x0888D560u>(ctx, &aot_mem) && ctx.pc == 0x0888E2ECu) goto L_0888E2EC;
    return;
L_0888E2EC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888E324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[18] = (aot_gpr[11] | 0u);
    aot_gpr[23] = (aot_gpr[10] | 0u);
    aot_gpr[30] = (aot_gpr[9] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[31] = (0x0888E3ACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888E3ACu) goto L_0888E3AC;
    return;
L_0888E3AC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888E3B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E3B8u) goto L_0888E3B8;
    return;
L_0888E3B8:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0888E3CCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0888E3CCu) goto L_0888E3CC;
    return;
L_0888E3CC:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0888E3D8u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 78u, 0x08A2F5B4u>(ctx, &aot_mem) && ctx.pc == 0x0888E3D8u) goto L_0888E3D8;
    return;
L_0888E3D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0888E7E8;
      }
      goto L_0888E3EC;
    }
L_0888E3EC:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0888E9CC;
      }
      goto L_0888E3F8;
    }
L_0888E3F8:
    aot_gpr[5] = (0u | 2u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0888E414;
    }
    goto L_0888E404;
L_0888E404:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EAA4;
      }
      goto L_0888E40C;
    }
L_0888E40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EB1C;
      }
      goto L_0888E414;
    }
L_0888E414:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E434;
    }
L_0888E434:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0888E45C;
      }
      goto L_0888E444;
    }
L_0888E444:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[26] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
      if (branch_taken) {
          goto L_0888E48C;
      }
      goto L_0888E45C;
    }
L_0888E45C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888E478;
      }
      goto L_0888E468;
    }
L_0888E468:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[26] + aot_fpr[13];
      if (branch_taken) {
          goto L_0888E48C;
      }
      goto L_0888E478;
    }
L_0888E478:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888E48C;
      }
      goto L_0888E488;
    }
L_0888E488:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0888E48C;
L_0888E48C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E570;
      }
      goto L_0888E498;
    }
L_0888E498:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888E4E8;
      }
      goto L_0888E4B4;
    }
L_0888E4B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
        goto L_0888E4C0;
    }
    goto L_0888E4C0;
L_0888E4C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E4E8;
    }
L_0888E4E8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888E554;
      }
      goto L_0888E4F4;
    }
L_0888E4F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E524;
      }
      goto L_0888E500;
    }
L_0888E500:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11))))));
    aot_gpr[5] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0888E530;
    }
    goto L_0888E514;
L_0888E514:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0888E52C;
      }
      goto L_0888E524;
    }
L_0888E524:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888E52C;
L_0888E52C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0888E530;
L_0888E530:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E554;
    }
L_0888E554:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E564;
    }
L_0888E564:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E570;
    }
L_0888E570:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888E68C;
      }
      goto L_0888E580;
    }
L_0888E580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888E5F4;
      }
      goto L_0888E58C;
    }
L_0888E58C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888E5CC;
      }
      goto L_0888E5A0;
    }
L_0888E5A0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0888E664;
      }
      goto L_0888E5C4;
    }
L_0888E5C4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888E664;
      }
      goto L_0888E5CC;
    }
L_0888E5CC:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0888E668;
    }
    goto L_0888E5E0;
L_0888E5E0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0888E664;
      }
      goto L_0888E5F4;
    }
L_0888E5F4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888E640;
      }
      goto L_0888E60C;
    }
L_0888E60C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888E664;
      }
      goto L_0888E634;
    }
L_0888E634:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888E664;
      }
      goto L_0888E640;
    }
L_0888E640:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0888E668;
    }
    goto L_0888E658;
L_0888E658:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0888E664;
L_0888E664:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0888E668;
L_0888E668:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E68C;
    }
L_0888E68C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888E700;
      }
      goto L_0888E698;
    }
L_0888E698:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888E6C8;
      }
      goto L_0888E6AC;
    }
L_0888E6AC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888E6D8;
      }
      goto L_0888E6C8;
    }
L_0888E6C8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0888E6D8;
L_0888E6D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E700;
    }
L_0888E700:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888E77C;
      }
      goto L_0888E710;
    }
L_0888E710:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888E750;
      }
      goto L_0888E724;
    }
L_0888E724:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0888E758;
      }
      goto L_0888E748;
    }
L_0888E748:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888E758;
      }
      goto L_0888E750;
    }
L_0888E750:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888E758;
L_0888E758:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0888E77C;
L_0888E77C:
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0888E78Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E78Cu) goto L_0888E78C;
    return;
L_0888E78C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_gpr[31] = (0x0888E7A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888E7A0u) goto L_0888E7A0;
    return;
L_0888E7A0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888E7ACu);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E7ACu) goto L_0888E7AC;
    return;
L_0888E7AC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[11] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E7E0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888E7E0u) goto L_0888E7E0;
    return;
L_0888E7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E40C;
      }
      goto L_0888E7E8;
    }
L_0888E7E8:
    aot_gpr[17] = (aot_gpr[21] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x0888E7F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E7F8u) goto L_0888E7F8;
    return;
L_0888E7F8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888E814u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 20u, 0x0888D138u>(ctx, &aot_mem) && ctx.pc == 0x0888E814u) goto L_0888E814;
    return;
L_0888E814:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0888E820u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E820u) goto L_0888E820;
    return;
L_0888E820:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[24] = aot_fpr[24] / aot_fpr[0];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888E8BC;
      }
      goto L_0888E840;
    }
L_0888E840:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E8BC;
      }
      goto L_0888E84C;
    }
L_0888E84C:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[31] = (0x0888E85Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E85Cu) goto L_0888E85C;
    return;
L_0888E85C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0888E86Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E86Cu) goto L_0888E86C;
    return;
L_0888E86C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[26] + aot_fpr[12];
    aot_gpr[31] = (0x0888E880u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888E880u) goto L_0888E880;
    return;
L_0888E880:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E8B4u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888E8B4u) goto L_0888E8B4;
    return;
L_0888E8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E9C4;
      }
      goto L_0888E8BC;
    }
L_0888E8BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E944;
      }
      goto L_0888E8C8;
    }
L_0888E8C8:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[31] = (0x0888E8D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E8D8u) goto L_0888E8D8;
    return;
L_0888E8D8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888E8E4u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E8E4u) goto L_0888E8E4;
    return;
L_0888E8E4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0888E8F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E8F4u) goto L_0888E8F4;
    return;
L_0888E8F4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[26] + aot_fpr[12];
    aot_gpr[31] = (0x0888E908u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888E908u) goto L_0888E908;
    return;
L_0888E908:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E93Cu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888E93Cu) goto L_0888E93C;
    return;
L_0888E93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E9C4;
      }
      goto L_0888E944;
    }
L_0888E944:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E9C4;
      }
      goto L_0888E950;
    }
L_0888E950:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[31] = (0x0888E960u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E960u) goto L_0888E960;
    return;
L_0888E960:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888E96Cu);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888E96Cu) goto L_0888E96C;
    return;
L_0888E96C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0888E97Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E97Cu) goto L_0888E97C;
    return;
L_0888E97C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[26] + aot_fpr[12];
    aot_gpr[31] = (0x0888E990u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888E990u) goto L_0888E990;
    return;
L_0888E990:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888E9C4u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888E9C4u) goto L_0888E9C4;
    return;
L_0888E9C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E40C;
      }
      goto L_0888E9CC;
    }
L_0888E9CC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0888E9E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E9E4u) goto L_0888E9E4;
    return;
L_0888E9E4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[28] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888EA50;
      }
      goto L_0888EA04;
    }
L_0888EA04:
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[31] = (0x0888EA10u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888EA10u) goto L_0888EA10;
    return;
L_0888EA10:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888EA1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888EA1Cu) goto L_0888EA1C;
    return;
L_0888EA1C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0888EA48u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 168u, 0x0891BC78u>(ctx, &aot_mem) && ctx.pc == 0x0888EA48u) goto L_0888EA48;
    return;
L_0888EA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EA9C;
      }
      goto L_0888EA50;
    }
L_0888EA50:
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[31] = (0x0888EA5Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888EA5Cu) goto L_0888EA5C;
    return;
L_0888EA5C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888EA68u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888EA68u) goto L_0888EA68;
    return;
L_0888EA68:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[11] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888EA9Cu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888EA9Cu) goto L_0888EA9C;
    return;
L_0888EA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E40C;
      }
      goto L_0888EAA4;
    }
L_0888EAA4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[21] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888EAC0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EAC0u) goto L_0888EAC0;
    return;
L_0888EAC0:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_gpr[31] = (0x0888EAD4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888EAD4u) goto L_0888EAD4;
    return;
L_0888EAD4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888EAE0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888EAE0u) goto L_0888EAE0;
    return;
L_0888EAE0:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[11] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888EB14u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888EB14u) goto L_0888EB14;
    return;
L_0888EB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E40C;
      }
      goto L_0888EB1C;
    }
L_0888EB1C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888EB60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[8] & 255u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[9] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(9)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0888EBE8;
      }
      goto L_0888EBD4;
    }
L_0888EBD4:
    aot_gpr[22] = (0u | 3u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[22] = (0u | 2u);
        goto L_0888EBE0;
    }
    goto L_0888EBE0;
L_0888EBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EBF4;
      }
      goto L_0888EBE8;
    }
L_0888EBE8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EBF4;
      }
      goto L_0888EBF0;
    }
L_0888EBF0:
    aot_gpr[22] = (0u | 4u);
    goto L_0888EBF4;
L_0888EBF4:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EC08;
      }
      goto L_0888EBFC;
    }
L_0888EBFC:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888EC10;
      }
      goto L_0888EC08;
    }
L_0888EC08:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_0888EC10;
L_0888EC10:
    if (aot_gpr[7] == 0u) {
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
        goto L_0888EC20;
    }
    goto L_0888EC18;
L_0888EC18:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888EC20;
      }
      goto L_0888EC20;
    }
L_0888EC20:
    if (aot_gpr[8] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_0888EC30;
    }
    goto L_0888EC28;
L_0888EC28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888EC30;
      }
      goto L_0888EC30;
    }
L_0888EC30:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[23] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0888EC48;
      }
      goto L_0888EC38;
    }
L_0888EC38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888EC58;
      }
      goto L_0888EC48;
    }
L_0888EC48:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_0888EC58;
L_0888EC58:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EC74;
      }
      goto L_0888EC60;
    }
L_0888EC60:
    aot_gpr[30] = (aot_gpr[7] | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[30] = (aot_gpr[6] | 0u);
        goto L_0888EC6C;
    }
    goto L_0888EC6C;
L_0888EC6C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888EC80;
      }
      goto L_0888EC74;
    }
L_0888EC74:
    aot_gpr[30] = (aot_gpr[9] | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[30] = (aot_gpr[6] | 0u);
        goto L_0888EC80;
    }
    goto L_0888EC80;
L_0888EC80:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888ED54;
      }
      goto L_0888EC8C;
    }
L_0888EC8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[22]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (65280u << 16u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0888ECA4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 110u, 0x0893DF90u>(ctx, &aot_mem) && ctx.pc == 0x0888ECA4u) goto L_0888ECA4;
    return;
L_0888ECA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[8] = (65280u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[30] & aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[11] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888ECE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    goto L_0888E324;
L_0888ECE4:
    aot_gpr[22] = (65280u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888ECFCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 110u, 0x0893DF90u>(ctx, &aot_mem) && ctx.pc == 0x0888ECFCu) goto L_0888ECFC;
    return;
L_0888ECFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[30] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[11] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888ED38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0888E324;
L_0888ED38:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888ED4Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 110u, 0x0893DF90u>(ctx, &aot_mem) && ctx.pc == 0x0888ED4Cu) goto L_0888ED4C;
    return;
L_0888ED4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ED8C;
      }
      goto L_0888ED54;
    }
L_0888ED54:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[30] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[11] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888ED8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    goto L_0888E324;
L_0888ED8C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888EDC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (65280u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[7] & aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[9] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0888EF38;
      }
      goto L_0888EDF0;
    }
L_0888EDF0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0888EE14u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 144u, 0x08A4DA34u>(ctx, &aot_mem) && ctx.pc == 0x0888EE14u) goto L_0888EE14;
    return;
L_0888EE14:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888EEC8;
      }
      goto L_0888EE28;
    }
L_0888EE28:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (2215u << 16u);
    goto L_0888EE34;
L_0888EE34:
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EE48;
      }
      goto L_0888EE40;
    }
L_0888EE40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888EE60;
      }
      goto L_0888EE48;
    }
L_0888EE48:
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0888EE64;
    }
    goto L_0888EE58;
L_0888EE58:
    aot_gpr[7] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[7]);
    goto L_0888EE60;
L_0888EE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0888EE64;
L_0888EE64:
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[10]);
    aot_fpr[15] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888EE34;
      }
      goto L_0888EEC8;
    }
L_0888EEC8:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0888EF08u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0888EF08u) goto L_0888EF08;
    return;
L_0888EF08:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888EF20u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 7u, 0x0892F060u>(ctx, &aot_mem) && ctx.pc == 0x0888EF20u) goto L_0888EF20;
    return;
L_0888EF20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0888EF38u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 7u, 0x0892F060u>(ctx, &aot_mem) && ctx.pc == 0x0888EF38u) goto L_0888EF38;
    return;
L_0888EF38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888EF4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] & 255u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888EF94;
      }
      goto L_0888EF8C;
    }
L_0888EF8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888EF98;
      }
      goto L_0888EF94;
    }
L_0888EF94:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0888EF98;
L_0888EF98:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0888EFB4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 138u, 0x08A4D9B0u>(ctx, &aot_mem) && ctx.pc == 0x0888EFB4u) goto L_0888EFB4;
    return;
L_0888EFB4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 2u, 0x0888F038u>(ctx, &aot_mem); return;
      }
      goto L_0888EFC8;
    }
L_0888EFC8:
    aot_gpr[6] = (0u | 0u);
    goto L_0888EFCC;
L_0888EFCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x0888F000u; return;
}

void recomp_unit_0138(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0138_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_138(Runtime &runtime) {
    runtime.register_generated_unit(138u, 0x0888E000u, 4096u, &recomp_unit_0138, &recomp_unit_0138_entry);
    runtime.register_function(0x0888E000u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E00Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E014u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E01Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E028u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E030u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E038u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E040u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E044u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E04Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E058u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E060u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E068u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E070u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E078u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E080u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E088u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E09Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E0ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E0B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E0C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E0C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E0D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E0F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E108u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E170u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E188u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E1DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E1F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E1F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E210u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E29Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E2ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E324u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E3ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E3B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E3CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E3D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E3ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E3F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E404u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E40Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E414u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E434u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E444u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E45Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E468u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E478u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E488u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E48Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E498u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E4B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E4C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E4E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E4F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E500u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E514u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E524u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E52Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E530u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E554u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E564u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E570u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E580u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E58Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E5A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E5C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E5CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E5E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E5F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E60Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E634u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E640u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E658u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E664u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E668u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E698u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E6ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E6C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E6D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E700u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E710u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E724u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E748u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E750u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E758u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E77Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E78Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E7A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E7E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E7E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E7F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E814u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E820u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E840u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E84Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E85Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E86Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E880u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E8B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E8BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E8C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E8D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E8E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E8F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E93Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E944u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E950u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E960u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E96Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E97Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E990u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E9C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E9CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888E9E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EAA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EAC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EAD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EAE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EB14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EB1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EB60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EBD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EBE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EBE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EBF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EBF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EBFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EC8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ECA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ECE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ECFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ED38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ED4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ED54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888ED8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EDC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EDF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EE64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EEC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EF98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EFB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EFC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x0888EFCCu, &recomp_unit_0138, "recomp_unit_0138");
}
} // namespace psprecomp
