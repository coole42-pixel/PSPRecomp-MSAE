#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0036[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0,
    32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0,
    0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93,
    0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0,
    109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125,
};
void recomp_unit_0036_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08828000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0036[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08828000;
    case 2u: goto L_08828024;
    case 3u: goto L_08828030;
    case 4u: goto L_08828084;
    case 5u: goto L_0882808C;
    case 6u: goto L_088280E8;
    case 7u: goto L_088280F4;
    case 8u: goto L_08828150;
    case 9u: goto L_0882815C;
    case 10u: goto L_088281B8;
    case 11u: goto L_088281C4;
    case 12u: goto L_08828220;
    case 13u: goto L_0882822C;
    case 14u: goto L_08828288;
    case 15u: goto L_08828294;
    case 16u: goto L_088282E8;
    case 17u: goto L_088282F0;
    case 18u: goto L_08828310;
    case 19u: goto L_08828328;
    case 20u: goto L_08828334;
    case 21u: goto L_08828354;
    case 22u: goto L_08828380;
    case 23u: goto L_08828388;
    case 24u: goto L_08828390;
    case 25u: goto L_08828398;
    case 26u: goto L_088283A4;
    case 27u: goto L_088283C0;
    case 28u: goto L_088283C8;
    case 29u: goto L_088283D0;
    case 30u: goto L_088283DC;
    case 31u: goto L_088283F8;
    case 32u: goto L_08828400;
    case 33u: goto L_0882840C;
    case 34u: goto L_08828428;
    case 35u: goto L_08828440;
    case 36u: goto L_08828460;
    case 37u: goto L_088284B8;
    case 38u: goto L_088284DC;
    case 39u: goto L_08828500;
    case 40u: goto L_08828520;
    case 41u: goto L_08828590;
    case 42u: goto L_08828598;
    case 43u: goto L_088285CC;
    case 44u: goto L_088285F8;
    case 45u: goto L_08828610;
    case 46u: goto L_08828630;
    case 47u: goto L_0882864C;
    case 48u: goto L_08828680;
    case 49u: goto L_08828698;
    case 50u: goto L_088286C0;
    case 51u: goto L_088286C8;
    case 52u: goto L_088286FC;
    case 53u: goto L_08828788;
    case 54u: goto L_088287B4;
    case 55u: goto L_088287C0;
    case 56u: goto L_088287D4;
    case 57u: goto L_088287E4;
    case 58u: goto L_08828828;
    case 59u: goto L_08828954;
    case 60u: goto L_08828968;
    case 61u: goto L_08828974;
    case 62u: goto L_08828980;
    case 63u: goto L_08828990;
    case 64u: goto L_0882899C;
    case 65u: goto L_088289B4;
    case 66u: goto L_088289E0;
    case 67u: goto L_08828A00;
    case 68u: goto L_08828A20;
    case 69u: goto L_08828A6C;
    case 70u: goto L_08828A9C;
    case 71u: goto L_08828AA8;
    case 72u: goto L_08828ABC;
    case 73u: goto L_08828AC4;
    case 74u: goto L_08828AD0;
    case 75u: goto L_08828B1C;
    case 76u: goto L_08828B28;
    case 77u: goto L_08828B3C;
    case 78u: goto L_08828B4C;
    case 79u: goto L_08828B58;
    case 80u: goto L_08828B68;
    case 81u: goto L_08828B78;
    case 82u: goto L_08828B84;
    case 83u: goto L_08828B94;
    case 84u: goto L_08828BA4;
    case 85u: goto L_08828BB0;
    case 86u: goto L_08828BC0;
    case 87u: goto L_08828BD8;
    case 88u: goto L_08828D20;
    case 89u: goto L_08828D2C;
    case 90u: goto L_08828D48;
    case 91u: goto L_08828D68;
    case 92u: goto L_08828D70;
    case 93u: goto L_08828D7C;
    case 94u: goto L_08828D84;
    case 95u: goto L_08828D94;
    case 96u: goto L_08828D9C;
    case 97u: goto L_08828DAC;
    case 98u: goto L_08828DC4;
    case 99u: goto L_08828DCC;
    case 100u: goto L_08828DE0;
    case 101u: goto L_08828DF0;
    case 102u: goto L_08828E04;
    case 103u: goto L_08828E0C;
    case 104u: goto L_08828E18;
    case 105u: goto L_08828E34;
    case 106u: goto L_08828E48;
    case 107u: goto L_08828E64;
    case 108u: goto L_08828E6C;
    case 109u: goto L_08828E80;
    case 110u: goto L_08828E88;
    case 111u: goto L_08828E94;
    case 112u: goto L_08828EB4;
    case 113u: goto L_08828EE0;
    case 114u: goto L_08828EF8;
    case 115u: goto L_08828F00;
    case 116u: goto L_08828F08;
    case 117u: goto L_08828F1C;
    case 118u: goto L_08828F38;
    case 119u: goto L_08828F44;
    case 120u: goto L_08828F50;
    case 121u: goto L_08828F5C;
    case 122u: goto L_08828F7C;
    case 123u: goto L_08828F90;
    case 124u: goto L_08828FD8;
    case 125u: goto L_08828FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08828000:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16996u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_08828024;
    }
L_08828024:
    aot_gpr[6] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08828084;
      }
      goto L_08828030;
    }
L_08828030:
    aot_gpr[5] = (16784u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16880u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (16864u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (16908u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (17004u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_08828084;
    }
L_08828084:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088280E8;
      }
      goto L_0882808C;
    }
L_0882808C:
    aot_gpr[5] = (16900u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16776u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16916u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16864u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (17034u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16944u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_088280E8;
    }
L_088280E8:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08828150;
      }
      goto L_088280F4;
    }
L_088280F4:
    aot_gpr[5] = (16900u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16776u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16916u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16952u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (17030u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (17016u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_08828150;
    }
L_08828150:
    aot_gpr[6] = (0u | 6u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088281B8;
      }
      goto L_0882815C;
    }
L_0882815C:
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16752u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (17032u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (17052u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16776u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_088281B8;
    }
L_088281B8:
    aot_gpr[6] = (0u | 7u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08828220;
      }
      goto L_088281C4;
    }
L_088281C4:
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16752u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (17058u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (17078u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16776u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_08828220;
    }
L_08828220:
    aot_gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08828288;
      }
      goto L_0882822C;
    }
L_0882822C:
    aot_gpr[5] = (16752u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16672u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (17084u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (17114u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16704u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_08828288;
    }
L_08828288:
    aot_gpr[6] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (16752u << 16u);
      if (branch_taken) {
          goto L_088282E8;
      }
      goto L_08828294;
    }
L_08828294:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16672u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (17118u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (17148u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16704u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088282E8;
L_088282E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088282F0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22992), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08828328u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08828328u) goto L_08828328;
    return;
L_08828328:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828334:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23000), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828354:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] & 255u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088283C8;
      }
      goto L_08828380;
    }
L_08828380:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828398;
      }
      goto L_08828388;
    }
L_08828388:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088283D0;
      }
      goto L_08828390;
    }
L_08828390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088283F8;
      }
      goto L_08828398;
    }
L_08828398:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088283A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088283A4u) goto L_088283A4;
    return;
L_088283A4:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x088283C0u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088283C0u) goto L_088283C0;
    return;
L_088283C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828428;
      }
      goto L_088283C8;
    }
L_088283C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828428;
      }
      goto L_088283D0;
    }
L_088283D0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088283DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088283DCu) goto L_088283DC;
    return;
L_088283DC:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x088283F8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088283F8u) goto L_088283F8;
    return;
L_088283F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08828428;
      }
      goto L_08828400;
    }
L_08828400:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882840Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0882840Cu) goto L_0882840C;
    return;
L_0882840C:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08828428u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08828428u) goto L_08828428;
    return;
L_08828428:
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
L_08828440:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23008), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828460:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3132)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-3212), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-3204), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3208), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (0x088284B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3200), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x088284B8u) goto L_088284B8;
    return;
L_088284B8:
    aot_gpr[13] = (2218u << 16u);
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[11] = (2218u << 16u);
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-3192));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-3176));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-3160));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-3144));
      if (branch_taken) {
          goto L_08828500;
      }
      goto L_088284DC;
    }
L_088284DC:
    aot_gpr[12] = (aot_gpr[13] | 0u);
    aot_gpr[2] = (aot_gpr[3] | 0u);
    aot_gpr[10] = (aot_gpr[11] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[7] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08828520;
      }
      goto L_08828500;
    }
L_08828500:
    aot_gpr[12] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[13] | 0u);
    aot_gpr[6] = (aot_gpr[3] | 0u);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    goto L_08828520;
L_08828520:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[12] = (16832u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (16960u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (17086u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17152u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16972u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828590:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828598:
    aot_gpr[7] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-3212)));
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-3208)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-3212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088285F8;
      }
      goto L_088285CC;
    }
L_088285CC:
    aot_gpr[8] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-3132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-3212), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[14] = aot_fpr[13] / aot_fpr[14];
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-3208), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08828630;
      }
      goto L_088285F8;
    }
L_088285F8:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[8] = (2218u << 16u);
      if (branch_taken) {
          goto L_08828630;
      }
      goto L_08828610;
    }
L_08828610:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-3132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-3212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-3208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08828630;
L_08828630:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3200)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3204)));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3204), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08828680;
      }
      goto L_0882864C;
    }
L_0882864C:
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-3132)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3204), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3200), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088286C0;
      }
      goto L_08828680;
    }
L_08828680:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_088286C0;
      }
      goto L_08828698;
    }
L_08828698:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-3132)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3204), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3200), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088286C0;
L_088286C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088286C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    aot_gpr[31] = (0x088286FCu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 7u, 0x08A4C068u>(ctx, &aot_mem) && ctx.pc == 0x088286FCu) goto L_088286FC;
    return;
L_088286FC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[8] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[10] = (2u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08828788u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-28804), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08828788u) goto L_08828788;
    return;
L_08828788:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (16256u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 1u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088287B4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x088287B4u) goto L_088287B4;
    return;
L_088287B4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088287C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088287C0u) goto L_088287C0;
    return;
L_088287C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088287D4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 78u, 0x0892F7ECu>(ctx, &aot_mem) && ctx.pc == 0x088287D4u) goto L_088287D4;
    return;
L_088287D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088287E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    aot_gpr[31] = (0x08828828u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x08828828u) goto L_08828828;
    return;
L_08828828:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[10] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3192));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3160));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-3176));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[10]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3144));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[11] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[17] - aot_fpr[18];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08828954u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08828954u) goto L_08828954;
    return;
L_08828954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_08828974;
      }
      goto L_08828968;
    }
L_08828968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    goto L_08828974;
L_08828974:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08828980u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08828980u) goto L_08828980;
    return;
L_08828980:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08828990u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x08828990u) goto L_08828990;
    return;
L_08828990:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882899Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x0882899Cu) goto L_0882899C;
    return;
L_0882899C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088289B4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3176));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3192));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[12];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088289E0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23016), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828A00:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23024), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828A20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[7] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828A6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08828A9Cu);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08828A9Cu) goto L_08828A9C;
    return;
L_08828A9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828AA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08828ABCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    goto L_08828A20;
L_08828ABC:
    aot_gpr[31] = (0x08828AC4u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    goto L_08828A6C;
L_08828AC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828AD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[17] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = aot_fpr[12] - aot_fpr[16];
    aot_gpr[5] = (17280u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_gpr[6] = (20224u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08828B28;
      }
      goto L_08828B1C;
    }
L_08828B1C:
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_08828B3C;
      }
      goto L_08828B28;
    }
L_08828B28:
    aot_fpr[16] = aot_fpr[16] - aot_fpr[15];
    aot_gpr[10] = (32768u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[10]);
    goto L_08828B3C;
L_08828B3C:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
        goto L_08828B58;
    }
    goto L_08828B4C;
L_08828B4C:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08828B68;
      }
      goto L_08828B58;
    }
L_08828B58:
    aot_gpr[9] = (32768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[9]);
    goto L_08828B68;
L_08828B68:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
        goto L_08828B84;
    }
    goto L_08828B78;
L_08828B78:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08828B94;
      }
      goto L_08828B84;
    }
L_08828B84:
    aot_gpr[8] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    goto L_08828B94;
L_08828B94:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
        goto L_08828BB0;
    }
    goto L_08828BA4;
L_08828BA4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08828BC0;
      }
      goto L_08828BB0;
    }
L_08828BB0:
    aot_gpr[7] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[7]);
    goto L_08828BC0;
L_08828BC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828D20;
      }
      goto L_08828BD8;
    }
L_08828BD8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(1)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(1)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(2)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr[25] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[15] + aot_gpr[5]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
    aot_gpr[16] = (ctx.lo);
    aot_gpr[25] = (aot_gpr[25] + aot_gpr[16]);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(2)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[5]);
    aot_gpr[25] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[15] = (aot_gpr[25] >> 8u);
    aot_gpr[25] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[12] = (aot_gpr[15] + aot_gpr[25]);
    aot_gpr[12] = (aot_gpr[12] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[12]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[14] = (ctx.lo);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[14]);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[12] = (aot_gpr[13] + aot_gpr[5]);
    aot_gpr[13] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[13] = (aot_gpr[13] >> 8u);
    aot_gpr[14] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[11] = (aot_gpr[13] + aot_gpr[14]);
    aot_gpr[11] = (aot_gpr[11] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[11] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (ctx.lo);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[12]);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[11] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[12] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[12] >> 8u);
    aot_gpr[12] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[12]);
    aot_gpr[3] = (aot_gpr[3] >> 8u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_08828BD8;
      }
      goto L_08828D20;
    }
L_08828D20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828D2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[18] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[18])) && aot_fpr[12] == aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08828E0C;
      }
      goto L_08828D48;
    }
L_08828D48:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08828D70;
      }
      goto L_08828D68;
    }
L_08828D68:
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08828D70;
L_08828D70:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08828D84;
      }
      goto L_08828D7C;
    }
L_08828D7C:
    aot_fpr[15] = aot_fpr[15] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08828D84;
L_08828D84:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08828D9C;
      }
      goto L_08828D94;
    }
L_08828D94:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_08828DAC;
      }
      goto L_08828D9C;
    }
L_08828D9C:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
        goto L_08828DAC;
    }
    goto L_08828DAC;
L_08828DAC:
    aot_fpr[17] = aot_fpr[17] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_08828DCC;
      }
      goto L_08828DC4;
    }
L_08828DC4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_08828DE0;
      }
      goto L_08828DCC;
    }
L_08828DCC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
        goto L_08828DE0;
    }
    goto L_08828DE0;
L_08828DE0:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[15])) && aot_fpr[14] == aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08828E04;
      }
      goto L_08828DF0;
    }
L_08828DF0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08828E0C;
      }
      goto L_08828E04;
    }
L_08828E04:
    aot_gpr[31] = (0x08828E0Cu);
    // nop
    goto L_08828AD0;
L_08828E0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828E18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08828E88;
      }
      goto L_08828E34;
    }
L_08828E34:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08828E88;
      }
      goto L_08828E48;
    }
L_08828E48:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08828E6C;
      }
      goto L_08828E64;
    }
L_08828E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828E80;
      }
      goto L_08828E6C;
    }
L_08828E6C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_08828E80;
    }
    goto L_08828E80;
L_08828E80:
    aot_gpr[31] = (0x08828E88u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08828AD0;
L_08828E88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828E94:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23040), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828EB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(232), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(237), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(252), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828EE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08828EF8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08828EF8u) goto L_08828EF8;
    return;
L_08828EF8:
    aot_gpr[31] = (0x08828F00u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08828F00u) goto L_08828F00;
    return;
L_08828F00:
    aot_gpr[31] = (0x08828F08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08828EB4;
L_08828F08:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828F1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08828F7C;
      }
      goto L_08828F38;
    }
L_08828F38:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x08828F44u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x08828F44u) goto L_08828F44;
    return;
L_08828F44:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08828F50u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x08828F50u) goto L_08828F50;
    return;
L_08828F50:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08828F7C;
      }
      goto L_08828F5C;
    }
L_08828F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08828F7Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828F7Cu) goto L_08828F7C;
    return;
L_08828F7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828F90:
    aot_gpr[5] = (16050u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 45089u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (48783u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 23593u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(268), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(272), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828FD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08828FF0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 81u, 0x0893582Cu>(ctx, &aot_mem) && ctx.pc == 0x08828FF0u) goto L_08828FF0;
    return;
L_08828FF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[4] | 2048u);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    ctx.pc = 0x08829000u; return;
}

void recomp_unit_0036(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0036_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_36(Runtime &runtime) {
    runtime.register_generated_unit(36u, 0x08828000u, 4096u, &recomp_unit_0036, &recomp_unit_0036_entry);
    runtime.register_function(0x08828000u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828024u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828030u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828084u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0882808Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088280E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088280F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828150u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0882815Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088281B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088281C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828220u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0882822Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828288u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828294u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088282E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088282F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828310u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828328u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828334u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828354u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828380u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828388u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828390u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828398u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088283A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088283C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088283C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088283D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088283DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088283F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828400u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0882840Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828428u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828440u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088284B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088284DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828500u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828520u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828598u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088285CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088285F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828610u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828630u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0882864Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828680u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828698u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088286C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088286C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088286FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828788u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088287B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088287C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088287D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088287E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828828u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828954u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828968u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828974u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828980u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0882899Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088289B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088289E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828A20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828A6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828A9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828AA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828AC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828AD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828B94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828BD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828D9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828DACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828DC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828DCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828DE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828DF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828E94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828EB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828EE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828EF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828F90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828FD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08828FF0u, &recomp_unit_0036, "recomp_unit_0036");
}
} // namespace psprecomp
