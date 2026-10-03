#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0197[984] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 7, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21,
    22, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 39, 40, 0, 41, 0, 0, 0, 42, 0,
    43, 0, 44, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98,
    99, 0, 100, 101, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 108, 109, 0, 0, 0, 110, 0, 0, 0, 111, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 117, 118, 0, 0, 0, 119, 0, 0, 0, 120, 121, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138,
};
void recomp_unit_0197_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C9000u;
        entry_id = (entry_delta < 3936u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0197[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C9000;
    case 2u: goto L_088C9014;
    case 3u: goto L_088C9024;
    case 4u: goto L_088C9054;
    case 5u: goto L_088C906C;
    case 6u: goto L_088C9080;
    case 7u: goto L_088C9098;
    case 8u: goto L_088C909C;
    case 9u: goto L_088C90A4;
    case 10u: goto L_088C9108;
    case 11u: goto L_088C911C;
    case 12u: goto L_088C9120;
    case 13u: goto L_088C9144;
    case 14u: goto L_088C915C;
    case 15u: goto L_088C9174;
    case 16u: goto L_088C9188;
    case 17u: goto L_088C91B0;
    case 18u: goto L_088C91B8;
    case 19u: goto L_088C91C0;
    case 20u: goto L_088C91F4;
    case 21u: goto L_088C91FC;
    case 22u: goto L_088C9200;
    case 23u: goto L_088C9208;
    case 24u: goto L_088C9210;
    case 25u: goto L_088C921C;
    case 26u: goto L_088C9278;
    case 27u: goto L_088C9280;
    case 28u: goto L_088C92A4;
    case 29u: goto L_088C92CC;
    case 30u: goto L_088C92D4;
    case 31u: goto L_088C9324;
    case 32u: goto L_088C934C;
    case 33u: goto L_088C935C;
    case 34u: goto L_088C9390;
    case 35u: goto L_088C93A8;
    case 36u: goto L_088C93B8;
    case 37u: goto L_088C93CC;
    case 38u: goto L_088C93D8;
    case 39u: goto L_088C93DC;
    case 40u: goto L_088C93E0;
    case 41u: goto L_088C93E8;
    case 42u: goto L_088C93F8;
    case 43u: goto L_088C9400;
    case 44u: goto L_088C9408;
    case 45u: goto L_088C940C;
    case 46u: goto L_088C9414;
    case 47u: goto L_088C9440;
    case 48u: goto L_088C9450;
    case 49u: goto L_088C9478;
    case 50u: goto L_088C9488;
    case 51u: goto L_088C9498;
    case 52u: goto L_088C9504;
    case 53u: goto L_088C950C;
    case 54u: goto L_088C9534;
    case 55u: goto L_088C954C;
    case 56u: goto L_088C95A8;
    case 57u: goto L_088C95B4;
    case 58u: goto L_088C95C4;
    case 59u: goto L_088C95E4;
    case 60u: goto L_088C9634;
    case 61u: goto L_088C9640;
    case 62u: goto L_088C96B4;
    case 63u: goto L_088C96BC;
    case 64u: goto L_088C96C4;
    case 65u: goto L_088C96CC;
    case 66u: goto L_088C9758;
    case 67u: goto L_088C97D8;
    case 68u: goto L_088C97F8;
    case 69u: goto L_088C9828;
    case 70u: goto L_088C9860;
    case 71u: goto L_088C986C;
    case 72u: goto L_088C9870;
    case 73u: goto L_088C9900;
    case 74u: goto L_088C994C;
    case 75u: goto L_088C9954;
    case 76u: goto L_088C9984;
    case 77u: goto L_088C99A4;
    case 78u: goto L_088C99C0;
    case 79u: goto L_088C99D4;
    case 80u: goto L_088C99D8;
    case 81u: goto L_088C99E0;
    case 82u: goto L_088C9A90;
    case 83u: goto L_088C9AA4;
    case 84u: goto L_088C9AB4;
    case 85u: goto L_088C9ADC;
    case 86u: goto L_088C9AE8;
    case 87u: goto L_088C9AF4;
    case 88u: goto L_088C9B08;
    case 89u: goto L_088C9B10;
    case 90u: goto L_088C9B18;
    case 91u: goto L_088C9B24;
    case 92u: goto L_088C9B38;
    case 93u: goto L_088C9B40;
    case 94u: goto L_088C9B48;
    case 95u: goto L_088C9B60;
    case 96u: goto L_088C9B6C;
    case 97u: goto L_088C9B74;
    case 98u: goto L_088C9B7C;
    case 99u: goto L_088C9B80;
    case 100u: goto L_088C9B88;
    case 101u: goto L_088C9B8C;
    case 102u: goto L_088C9B94;
    case 103u: goto L_088C9B98;
    case 104u: goto L_088C9BB8;
    case 105u: goto L_088C9BC4;
    case 106u: goto L_088C9BD0;
    case 107u: goto L_088C9C04;
    case 108u: goto L_088C9C10;
    case 109u: goto L_088C9C14;
    case 110u: goto L_088C9C24;
    case 111u: goto L_088C9C34;
    case 112u: goto L_088C9C38;
    case 113u: goto L_088C9C44;
    case 114u: goto L_088C9C4C;
    case 115u: goto L_088C9C58;
    case 116u: goto L_088C9C8C;
    case 117u: goto L_088C9C98;
    case 118u: goto L_088C9C9C;
    case 119u: goto L_088C9CAC;
    case 120u: goto L_088C9CBC;
    case 121u: goto L_088C9CC0;
    case 122u: goto L_088C9CCC;
    case 123u: goto L_088C9CD0;
    case 124u: goto L_088C9DA8;
    case 125u: goto L_088C9E18;
    case 126u: goto L_088C9E24;
    case 127u: goto L_088C9E28;
    case 128u: goto L_088C9E6C;
    case 129u: goto L_088C9E8C;
    case 130u: goto L_088C9EDC;
    case 131u: goto L_088C9EFC;
    case 132u: goto L_088C9F10;
    case 133u: goto L_088C9F18;
    case 134u: goto L_088C9F20;
    case 135u: goto L_088C9F34;
    case 136u: goto L_088C9F44;
    case 137u: goto L_088C9F50;
    case 138u: goto L_088C9F5C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C9000:
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8292)));
    aot_gpr[23] = (aot_gpr[22] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C909C;
      }
      goto L_088C9014;
    }
L_088C9014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9098;
      }
      goto L_088C9024;
    }
L_088C9024:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(574))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(568))))));
    aot_gpr[7] = (16128u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(578))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(572))))));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[5]);
      if (branch_taken) {
          goto L_088C906C;
      }
      goto L_088C9054;
    }
L_088C9054:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088C9080;
      }
      goto L_088C906C;
    }
L_088C906C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088C9080;
L_088C9080:
    aot_gpr[4] = (16968u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C909C;
      }
      goto L_088C9098;
    }
L_088C9098:
    aot_gpr[22] = (0u | 0u);
    goto L_088C909C;
L_088C909C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9200;
      }
      goto L_088C90A4;
    }
L_088C90A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(590)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[22] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C911C;
      }
      goto L_088C9108;
    }
L_088C9108:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088C9120;
      }
      goto L_088C911C;
    }
L_088C911C:
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088C9120;
L_088C9120:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088C91B8;
      }
      goto L_088C9144;
    }
L_088C9144:
    aot_gpr[5] = (16768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16252u << 16u);
      if (branch_taken) {
          goto L_088C9188;
      }
      goto L_088C915C;
    }
L_088C915C:
    aot_gpr[5] = (aot_gpr[5] | 10486u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16144u << 16u);
      if (branch_taken) {
          goto L_088C91B8;
      }
      goto L_088C9174;
    }
L_088C9174:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C91B8;
      }
      goto L_088C9188;
    }
L_088C9188:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088C91B0u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 108u, 0x088C8CA4u>(ctx, &aot_mem) && ctx.pc == 0x088C91B0u) goto L_088C91B0;
    return;
L_088C91B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9200;
      }
      goto L_088C91B8;
    }
L_088C91B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C91FC;
      }
      goto L_088C91C0;
    }
L_088C91C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(590)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088C91F4u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 108u, 0x088C8CA4u>(ctx, &aot_mem) && ctx.pc == 0x088C91F4u) goto L_088C91F4;
    return;
L_088C91F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9200;
      }
      goto L_088C91FC;
    }
L_088C91FC:
    aot_gpr[22] = (0u | 0u);
    goto L_088C9200;
L_088C9200:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C935C;
      }
      goto L_088C9208;
    }
L_088C9208:
    aot_gpr[31] = (0x088C9210u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 159u, 0x088C6E1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9210u) goto L_088C9210;
    return;
L_088C9210:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C935C;
      }
      goto L_088C921C;
    }
L_088C921C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (0u | 32767u);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(568), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(570), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-32767));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(574), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(576), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(578), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(544), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(548), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(592), static_cast<std::uint16_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(532), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C9278u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 26u, 0x088C81A0u>(ctx, &aot_mem) && ctx.pc == 0x088C9278u) goto L_088C9278;
    return;
L_088C9278:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088C92D4;
      }
      goto L_088C9280;
    }
L_088C9280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(591)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(548), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C92A4u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 59u, 0x088C863Cu>(ctx, &aot_mem) && ctx.pc == 0x088C92A4u) goto L_088C92A4;
    return;
L_088C92A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088C92CCu);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 108u, 0x088C8CA4u>(ctx, &aot_mem) && ctx.pc == 0x088C92CCu) goto L_088C92CC;
    return;
L_088C92CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C934C;
      }
      goto L_088C92D4;
    }
L_088C92D4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088C9324u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 108u, 0x088C8CA4u>(ctx, &aot_mem) && ctx.pc == 0x088C9324u) goto L_088C9324;
    return;
L_088C9324:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088C934Cu);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 108u, 0x088C8CA4u>(ctx, &aot_mem) && ctx.pc == 0x088C934Cu) goto L_088C934C;
    return;
L_088C934C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8292), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C935C;
L_088C935C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9390:
    aot_gpr[7] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7984)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[6] << 4u);
      if (branch_taken) {
          goto L_088C9408;
      }
      goto L_088C93A8;
    }
L_088C93A8:
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(7792));
    goto L_088C93B8;
L_088C93B8:
    aot_gpr[10] = (aot_gpr[2] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[11] != aot_gpr[5];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C93DC;
      }
      goto L_088C93CC;
    }
L_088C93CC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[9];
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C93E0;
      }
      goto L_088C93D8;
    }
L_088C93D8:
    aot_gpr[4] = (0u | 1u);
    goto L_088C93DC;
L_088C93DC:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088C93E0;
L_088C93E0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9400;
      }
      goto L_088C93E8;
    }
L_088C93E8:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C93B8;
      }
      goto L_088C93F8;
    }
L_088C93F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9408;
      }
      goto L_088C9400;
    }
L_088C9400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C940C;
      }
      goto L_088C9408;
    }
L_088C9408:
    aot_gpr[2] = (0u | 0u);
    goto L_088C940C;
L_088C940C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[13] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[12] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C9488;
      }
      goto L_088C9440;
    }
L_088C9440:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x088C9450u);
    aot_gpr[6] = (aot_gpr[13] | 0u);
    goto L_088C9390;
L_088C9450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7984)));
    aot_gpr[6] = (aot_gpr[13] | 0u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7792));
    aot_gpr[5] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x088C9478u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 146u, 0x088C6D10u>(ctx, &aot_mem) && ctx.pc == 0x088C9478u) goto L_088C9478;
    return;
L_088C9478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7984)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7984), aot_gpr[4]);
    goto L_088C9488;
L_088C9488:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(240));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x088C9504u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088C9414;
L_088C9504:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9534;
      }
      goto L_088C950C;
    }
L_088C950C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7984)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7744));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088C9534;
L_088C9534:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C954C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9E28;
      }
      goto L_088C95A8;
    }
L_088C95A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8808)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9E28;
      }
      goto L_088C95B4;
    }
L_088C95B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9E28;
      }
      goto L_088C95C4;
    }
L_088C95C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8280), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2644)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8288), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2644), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5208)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088C9E28;
      }
      goto L_088C95E4;
    }
L_088C95E4:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7872)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7872));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (17280u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088C9634u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x088C9634u) goto L_088C9634;
    return;
L_088C9634:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088C9640u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088C9640u) goto L_088C9640;
    return;
L_088C9640:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[29]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29052)));
    aot_gpr[23] = (0u | 1u);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[16] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C96BC;
      }
      goto L_088C96B4;
    }
L_088C96B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C96CC;
      }
      goto L_088C96BC;
    }
L_088C96BC:
    aot_gpr[31] = (0x088C96C4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x088C96C4u) goto L_088C96C4;
    return;
L_088C96C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[7] = (0u | 1u);
    goto L_088C96CC;
L_088C96CC:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-29052));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (7168u << 16u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (18432u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (18688u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C9758u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x088C9758u) goto L_088C9758;
    return;
L_088C9758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[6] = (aot_gpr[4] & 2u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (~(aot_gpr[6] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[6] = (32u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28808), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088C97D8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C97D8u) goto L_088C97D8;
    return;
L_088C97D8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (18306u << 16u);
      if (branch_taken) {
          goto L_088C9BB8;
      }
      goto L_088C97F8;
    }
L_088C97F8:
    aot_gpr[5] = (aot_gpr[5] | 512u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (16896u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (17060u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[17]);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_088C9828;
L_088C9828:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2358)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2356)));
    aot_gpr[6] = (aot_gpr[6] << 7u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] << 6u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2352)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C9B98;
      }
      goto L_088C9860;
    }
L_088C9860:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B98;
      }
      goto L_088C986C;
    }
L_088C986C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    goto L_088C9870;
L_088C9870:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(570))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(576))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (0u | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
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
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088C9954;
      }
      goto L_088C9900;
    }
L_088C9900:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C99D8;
      }
      goto L_088C994C;
    }
L_088C994C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C99D8;
      }
      goto L_088C9954;
    }
L_088C9954:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(596)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[6]);
      if (branch_taken) {
          goto L_088C99A4;
      }
      goto L_088C9984;
    }
L_088C9984:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(196));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[28];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
      if (branch_taken) {
          goto L_088C99C0;
      }
      goto L_088C99A4;
    }
L_088C99A4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[28];
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    goto L_088C99C0;
L_088C99C0:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C99D8;
      }
      goto L_088C99D4;
    }
L_088C99D4:
    aot_gpr[4] = (0u | 1u);
    goto L_088C99D8;
L_088C99D8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B88;
      }
      goto L_088C99E0;
    }
L_088C99E0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(570))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(572))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<80u>(aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(574))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(576))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(578))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<80u>(aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C9A90u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 54u, 0x089404C8u>(ctx, &aot_mem) && ctx.pc == 0x088C9A90u) goto L_088C9A90;
    return;
L_088C9A90:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(594), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(594)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B80;
      }
      goto L_088C9AA4;
    }
L_088C9AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8284)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B7C;
      }
      goto L_088C9AB4;
    }
L_088C9AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8280)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8280), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2644)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C9ADCu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_088C9E8C;
L_088C9ADC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
      if (branch_taken) {
          goto L_088C9B74;
      }
      goto L_088C9AE8;
    }
L_088C9AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B10;
      }
      goto L_088C9AF4;
    }
L_088C9AF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2644)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C9B08u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_088C9E8C;
L_088C9B08:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_088C9B10;
L_088C9B10:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B74;
      }
      goto L_088C9B18;
    }
L_088C9B18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B40;
      }
      goto L_088C9B24;
    }
L_088C9B24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2644)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C9B38u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_088C9E8C;
L_088C9B38:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_088C9B40;
L_088C9B40:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B74;
      }
      goto L_088C9B48;
    }
L_088C9B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(591)));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B6C;
      }
      goto L_088C9B60;
    }
L_088C9B60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C9B74;
      }
      goto L_088C9B6C;
    }
L_088C9B6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[16] | 0u);
    goto L_088C9B74;
L_088C9B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B80;
      }
      goto L_088C9B7C;
    }
L_088C9B7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8288), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_088C9B80;
L_088C9B80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
      if (branch_taken) {
          goto L_088C9B8C;
      }
      goto L_088C9B88;
    }
L_088C9B88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    goto L_088C9B8C;
L_088C9B8C:
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(568))))));
        goto L_088C9870;
    }
    goto L_088C9B94;
L_088C9B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2640)));
    goto L_088C9B98;
L_088C9B98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[6]);
      if (branch_taken) {
          goto L_088C9828;
      }
      goto L_088C9BB8;
    }
L_088C9BB8:
    aot_gpr[20] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[30] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9BC4;
    }
L_088C9BC4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8092));
    aot_gpr[31] = (0x088C9BD0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088C9BD0u) goto L_088C9BD0;
    return;
L_088C9BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088C9C04u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C9C04u) goto L_088C9C04;
    return;
L_088C9C04:
    aot_gpr[16] = (aot_gpr[21] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 255u);
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9C10;
    }
L_088C9C10:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    goto L_088C9C14;
L_088C9C14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C9C24u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 63u, 0x088CA7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C9C24u) goto L_088C9C24;
    return;
L_088C9C24:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C9C38;
      }
      goto L_088C9C34;
    }
L_088C9C34:
    aot_gpr[19] = (0u | 1u);
    goto L_088C9C38;
L_088C9C38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr[19]));
      if (branch_taken) {
          goto L_088C9C14;
      }
      goto L_088C9C44;
    }
L_088C9C44:
    if (aot_gpr[22] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
        goto L_088C9CD0;
    }
    goto L_088C9C4C;
L_088C9C4C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8000));
    aot_gpr[31] = (0x088C9C58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088C9C58u) goto L_088C9C58;
    return;
L_088C9C58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088C9C8Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C9C8Cu) goto L_088C9C8C;
    return;
L_088C9C8C:
    aot_gpr[16] = (aot_gpr[22] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 255u);
      if (branch_taken) {
          goto L_088C9CCC;
      }
      goto L_088C9C98;
    }
L_088C9C98:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    goto L_088C9C9C;
L_088C9C9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8804)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C9CACu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 63u, 0x088CA7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C9CACu) goto L_088C9CAC;
    return;
L_088C9CAC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C9CC0;
      }
      goto L_088C9CBC;
    }
L_088C9CBC:
    aot_gpr[19] = (0u | 1u);
    goto L_088C9CC0;
L_088C9CC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C9C;
      }
      goto L_088C9CCC;
    }
L_088C9CCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    goto L_088C9CD0;
L_088C9CD0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28808), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28812), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[23]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[9] = (32u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[8]);
    aot_gpr[9] = (16u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[8]);
    aot_gpr[9] = (64u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[8]);
    aot_gpr[9] = (2u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[5] & 8u);
    aot_gpr[6] = (0u | 7u);
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (~(aot_gpr[4] | 0u));
    aot_gpr[6] = (aot_gpr[10] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088C9DA8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088C9DA8u) goto L_088C9DA8;
    return;
L_088C9DA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (7168u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (18432u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[6] = (18688u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9E28;
      }
      goto L_088C9E18;
    }
L_088C9E18:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x088C9E24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x088C9E24u) goto L_088C9E24;
    return;
L_088C9E24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_088C9E28;
L_088C9E28:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9E6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32416), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(584)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[10];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 17u, 0x088CA314u>(ctx, &aot_mem); return;
      }
      goto L_088C9EDC;
    }
L_088C9EDC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(594)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[23] = (aot_gpr[4] & 4u);
    aot_gpr[23] = (0u < aot_gpr[23] ? 1u : 0u);
    aot_gpr[22] = (0u | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C9F20;
      }
      goto L_088C9EFC;
    }
L_088C9EFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(590)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 4u);
      if (branch_taken) {
          goto L_088C9F18;
      }
      goto L_088C9F10;
    }
L_088C9F10:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(590)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_088C9F18;
L_088C9F18:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[22]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    goto L_088C9F20;
L_088C9F20:
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088C9F34u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 152u, 0x08A51DB8u>(ctx, &aot_mem) && ctx.pc == 0x088C9F34u) goto L_088C9F34;
    return;
L_088C9F34:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088C9F44u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 158u, 0x08A51E34u>(ctx, &aot_mem) && ctx.pc == 0x088C9F44u) goto L_088C9F44;
    return;
L_088C9F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 15u, 0x088CA2F4u>(ctx, &aot_mem); return;
      }
      goto L_088C9F50;
    }
L_088C9F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 15u, 0x088CA2F4u>(ctx, &aot_mem); return;
      }
      goto L_088C9F5C;
    }
L_088C9F5C:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(595), static_cast<std::uint8_t>(0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(512), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[19] << 4u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(516), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(520), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(524), aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[19] << 4u);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[8] = (16025u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[8] = (15232u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<60u>(aot_gpr[8]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<92u>(aot_gpr[8]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<29u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<61u, 1u>(vfpu_value); }
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_vfpu_scalar_bits_ct<93u>(PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<61u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<93u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<125u, 1u>(vfpu_d); }
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_vfpu_scalar_bits_ct<30u>(PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x088CA000u; return;
}

void recomp_unit_0197(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0197_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_197(Runtime &runtime) {
    runtime.register_generated_unit(197u, 0x088C9000u, 4096u, &recomp_unit_0197, &recomp_unit_0197_entry);
    runtime.register_function(0x088C9000u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9014u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9024u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9054u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C906Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9080u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9098u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C909Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C90A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9108u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C911Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9120u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9144u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C915Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9174u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9188u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C91B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C91B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C91C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C91F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C91FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9200u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9208u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9210u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C921Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9278u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9280u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C92A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C92CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C92D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9324u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C934Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C935Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9390u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C93F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9400u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9408u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C940Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9414u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9440u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9450u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9478u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9488u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9498u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9504u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C950Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9534u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C954Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C95A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C95B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C95C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C95E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9634u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9640u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C96B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C96BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C96C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C96CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9758u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C97D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C97F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9828u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9860u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C986Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9870u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9900u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C994Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9954u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9984u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C99A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C99C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C99D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C99D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C99E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9A90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9AA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9AB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9ADCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9AE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9AF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9B98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9BB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9BC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9BD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9C9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9CACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9CBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9CC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9CCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9CD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9DA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9E18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9E24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9E28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9E6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9E8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9EDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9EFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x088C9F5Cu, &recomp_unit_0197, "recomp_unit_0197");
}
} // namespace psprecomp
