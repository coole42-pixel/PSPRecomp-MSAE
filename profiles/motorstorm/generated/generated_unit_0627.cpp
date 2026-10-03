#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0627[1019] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0,
    0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 41, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 58, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 78, 0, 0, 79,
    0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 102, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129,
};
void recomp_unit_0627_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A77000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0627[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A77000;
    case 2u: goto L_08A7700C;
    case 3u: goto L_08A77038;
    case 4u: goto L_08A7703C;
    case 5u: goto L_08A77060;
    case 6u: goto L_08A7706C;
    case 7u: goto L_08A77084;
    case 8u: goto L_08A7708C;
    case 9u: goto L_08A7709C;
    case 10u: goto L_08A770B0;
    case 11u: goto L_08A770B4;
    case 12u: goto L_08A770E0;
    case 13u: goto L_08A77110;
    case 14u: goto L_08A77134;
    case 15u: goto L_08A77140;
    case 16u: goto L_08A77158;
    case 17u: goto L_08A7720C;
    case 18u: goto L_08A77218;
    case 19u: goto L_08A77224;
    case 20u: goto L_08A77234;
    case 21u: goto L_08A7723C;
    case 22u: goto L_08A77240;
    case 23u: goto L_08A77244;
    case 24u: goto L_08A7726C;
    case 25u: goto L_08A772D0;
    case 26u: goto L_08A772F4;
    case 27u: goto L_08A772FC;
    case 28u: goto L_08A77300;
    case 29u: goto L_08A77350;
    case 30u: goto L_08A77358;
    case 31u: goto L_08A7736C;
    case 32u: goto L_08A77378;
    case 33u: goto L_08A77388;
    case 34u: goto L_08A77394;
    case 35u: goto L_08A773A0;
    case 36u: goto L_08A773B8;
    case 37u: goto L_08A773E8;
    case 38u: goto L_08A77450;
    case 39u: goto L_08A77564;
    case 40u: goto L_08A77568;
    case 41u: goto L_08A77574;
    case 42u: goto L_08A7757C;
    case 43u: goto L_08A775AC;
    case 44u: goto L_08A775C0;
    case 45u: goto L_08A775C8;
    case 46u: goto L_08A775D0;
    case 47u: goto L_08A775D8;
    case 48u: goto L_08A775E0;
    case 49u: goto L_08A775E8;
    case 50u: goto L_08A775F0;
    case 51u: goto L_08A775F8;
    case 52u: goto L_08A77600;
    case 53u: goto L_08A77618;
    case 54u: goto L_08A77620;
    case 55u: goto L_08A7763C;
    case 56u: goto L_08A77650;
    case 57u: goto L_08A776B8;
    case 58u: goto L_08A776BC;
    case 59u: goto L_08A776C0;
    case 60u: goto L_08A776D4;
    case 61u: goto L_08A776E4;
    case 62u: goto L_08A776F0;
    case 63u: goto L_08A77734;
    case 64u: goto L_08A77740;
    case 65u: goto L_08A7774C;
    case 66u: goto L_08A77754;
    case 67u: goto L_08A7775C;
    case 68u: goto L_08A77768;
    case 69u: goto L_08A777C8;
    case 70u: goto L_08A77800;
    case 71u: goto L_08A77810;
    case 72u: goto L_08A77820;
    case 73u: goto L_08A77834;
    case 74u: goto L_08A77838;
    case 75u: goto L_08A77844;
    case 76u: goto L_08A77854;
    case 77u: goto L_08A7786C;
    case 78u: goto L_08A77870;
    case 79u: goto L_08A7787C;
    case 80u: goto L_08A77884;
    case 81u: goto L_08A77898;
    case 82u: goto L_08A778BC;
    case 83u: goto L_08A778C0;
    case 84u: goto L_08A778E4;
    case 85u: goto L_08A778F8;
    case 86u: goto L_08A778FC;
    case 87u: goto L_08A77960;
    case 88u: goto L_08A77980;
    case 89u: goto L_08A77988;
    case 90u: goto L_08A779C4;
    case 91u: goto L_08A77B00;
    case 92u: goto L_08A77B24;
    case 93u: goto L_08A77B38;
    case 94u: goto L_08A77B48;
    case 95u: goto L_08A77B4C;
    case 96u: goto L_08A77B54;
    case 97u: goto L_08A77B5C;
    case 98u: goto L_08A77B68;
    case 99u: goto L_08A77BD4;
    case 100u: goto L_08A77BE4;
    case 101u: goto L_08A77BEC;
    case 102u: goto L_08A77BF0;
    case 103u: goto L_08A77BF4;
    case 104u: goto L_08A77C1C;
    case 105u: goto L_08A77C20;
    case 106u: goto L_08A77C3C;
    case 107u: goto L_08A77C44;
    case 108u: goto L_08A77CE4;
    case 109u: goto L_08A77CEC;
    case 110u: goto L_08A77D48;
    case 111u: goto L_08A77D64;
    case 112u: goto L_08A77DAC;
    case 113u: goto L_08A77DD0;
    case 114u: goto L_08A77DDC;
    case 115u: goto L_08A77DE4;
    case 116u: goto L_08A77E08;
    case 117u: goto L_08A77E28;
    case 118u: goto L_08A77E30;
    case 119u: goto L_08A77E34;
    case 120u: goto L_08A77ED4;
    case 121u: goto L_08A77F0C;
    case 122u: goto L_08A77F34;
    case 123u: goto L_08A77F40;
    case 124u: goto L_08A77F74;
    case 125u: goto L_08A77F78;
    case 126u: goto L_08A77F84;
    case 127u: goto L_08A77FB0;
    case 128u: goto L_08A77FD8;
    case 129u: goto L_08A77FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A77000:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(-8668);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (static_cast<std::int32_t>(aot_gpr[8]) <= 0) {
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(6726), static_cast<std::uint8_t>(aot_gpr[2]));
        ctx.pc = 0x08A904ECu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7700C;
L_08A7700C:
    rt.unsupported(0x08A7700Cu, 0xB2815ED3u, "unknown not lowered yet"); return;
L_08A77038:
    ctx.vfpu_ctrl[1u] = 0x000323BFu;
    goto L_08A7703C;
L_08A7703C:
    rt.unsupported(0x08A7703Cu, 0x675D6DE6u, "vfpu1 not lowered yet"); return;
L_08A77060:
    aot_gpr[13] = (aot_gpr[11] | 53984u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[28]) <= 0;
    aot_fpr[10] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-22710)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0597_entry, 597u, 97u, 0x08A59554u>(ctx, &aot_mem); return;
      }
      goto L_08A7706C;
    }
L_08A7706C:
    rt.unsupported(0x08A7706Cu, 0x626D9237u, "vfpu0 not lowered yet"); return;
L_08A77084:
    aot_gpr[31] = (0x08A7708Cu);
    rt.unsupported(0x08A77088u, 0x7601D34Au, "unknown not lowered yet"); return;
    ctx.pc = 0x05243F84u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7708Cu) goto L_08A7708C;
    return;
L_08A7708C:
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-24962)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-21160), aot_gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    { const std::uint32_t vfpu_address = aot_gpr[14] + static_cast<std::uint32_t>(-8600);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 228u, 0x08A67D1Cu>(ctx, &aot_mem); return;
      }
      goto L_08A7709C;
    }
L_08A7709C:
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(-444), aot_gpr[10]));
    rt.unsupported(0x08A770A0u, 0x43FBCC16u, "unknown not lowered yet"); return;
L_08A770B0:
    rt.unsupported(0x08A770B0u, 0xD7AB55EFu, "vfpu not lowered yet"); return;
L_08A770B4:
    aot_gpr[19] = (aot_gpr[31] < static_cast<std::uint32_t>(-21441) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(3092), ctx.vfpu_scalar_bits_ct<62u>());
    aot_gpr[8] = (aot_gpr[8] ^ 7120u);
    rt.unsupported(0x08A770C0u, 0xD0FCE029u, "vfpu4 not lowered yet"); return;
L_08A770E0:
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(-9980), static_cast<std::uint16_t>(aot_gpr[22]));
    rt.unsupported(0x08A770E4u, 0x4A197003u, "cop2/vfpu not lowered yet"); return;
L_08A77110:
    rt.unsupported(0x08A77110u, 0x20C920DBu, "unknown not lowered yet"); return;
L_08A77134:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(1862)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[13]) > 0;
    // PSP CACHE is a no-op in coherent host memory.
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0615_entry, 615u, 91u, 0x08A6BF44u>(ctx, &aot_mem); return;
      }
      goto L_08A77140;
    }
L_08A77140:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<27u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(-16992);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    rt.unsupported(0x08A77144u, 0x044E1497u, "regimm? not lowered yet"); return;
L_08A77158:
    rt.unsupported(0x08A77158u, 0x7E19278Eu, "special3? not lowered yet"); return;
L_08A7720C:
    aot_gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[27] + static_cast<std::uint32_t>(-10548))))));
    rt.unsupported(0x08A77214u, 0x59B71E2Eu, "control flow in delay slot"); return;
L_08A77218:
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(8997), aot_gpr[11]);
    if (aot_gpr[3] == aot_gpr[30]) {
    aot_gpr[21] = (static_cast<std::int32_t>(aot_gpr[6]) < 1415 ? 1u : 0u);
        ctx.pc = 0x08A8B9A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A77224;
L_08A77224:
    rt.unsupported(0x08A77224u, 0x22D39942u, "unknown not lowered yet"); return;
L_08A77234:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[24] + static_cast<std::uint32_t>(-10548))))));
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A7723Cu, 0x76BB4BE3u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0597_entry, 597u, 231u, 0x08A59C08u>(ctx, &aot_mem); return;
    }
    goto L_08A77240;
L_08A7723C:
    rt.unsupported(0x08A7723Cu, 0x76BB4BE3u, "unknown not lowered yet"); return;
L_08A77240:
    rt.unsupported(0x08A77240u, 0x76BB4BFEu, "unknown not lowered yet"); return;
L_08A77244:
    rt.unsupported(0x08A77244u, 0x76BB4C9Du, "unknown not lowered yet"); return;
L_08A7726C:
    rt.unsupported(0x08A7726Cu, 0x484FE2A7u, "cop2/vfpu not lowered yet"); return;
L_08A772D0:
    rt.unsupported(0x08A772D0u, 0x22089B5Bu, "unknown not lowered yet"); return;
L_08A772F4:
    aot_gpr[21] = (aot_gpr[4] | 48364u);
    { const bool branch_taken = aot_gpr[11] != aot_gpr[26];
    rt.unsupported(0x08A772FCu, 0x4A5A4596u, "cop2/vfpu not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 68u, 0x08A76C98u>(ctx, &aot_mem); return;
      }
      goto L_08A77300;
    }
L_08A772FC:
    rt.unsupported(0x08A772FCu, 0x4A5A4596u, "cop2/vfpu not lowered yet"); return;
L_08A77300:
    rt.unsupported(0x08A77300u, 0x7BAA43B2u, "unknown not lowered yet"); return;
L_08A77350:
    if (static_cast<std::int32_t>(aot_gpr[8]) <= 0) {
    rt.unsupported(0x08A77354u, 0x7CC7D423u, "special3? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 99u, 0x08A78D38u>(ctx, &aot_mem); return;
    }
    goto L_08A77358;
L_08A77358:
    rt.unsupported(0x08A77358u, 0x22175075u, "unknown not lowered yet"); return;
L_08A7736C:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(1492);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    if (static_cast<std::int32_t>(aot_gpr[10]) <= 0) {
    ctx.vfpu_ctrl[2u] = 0x000002E2u;
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 36u, 0x08A765C8u>(ctx, &aot_mem); return;
    }
    goto L_08A77378;
L_08A77378:
    rt.unsupported(0x08A77378u, 0x6BF57C30u, "unknown not lowered yet"); return;
L_08A77388:
    rt.unsupported(0x08A77388u, 0x738E826Cu, "unknown not lowered yet"); return;
L_08A77394:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[31] + static_cast<std::uint32_t>(-8533))))));
    aot_gpr[31] = (rt.memory().aot_load_word_right(aot_gpr[8] + static_cast<std::uint32_t>(-11230), aot_gpr[31]));
    rt.unsupported(0x08A7739Cu, 0xB7142905u, "unknown not lowered yet"); return;
L_08A773A0:
    rt.unsupported(0x08A773A0u, 0xCD1172E1u, "unknown not lowered yet"); return;
L_08A773B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[26] + static_cast<std::uint32_t>(-1096), ctx.vfpu_scalar_bits_ct<105u>());
    { const std::uint16_t vfpu_half = 35632u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{__builtin_bit_cast(float, vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<85u, 1u>(vfpu_value); }
    aot_gpr[14] = (aot_gpr[30] & 51664u);
    ctx.execute_vfpu_vmscl(113u, 11u, 71u, 1u);
    rt.unsupported(0x08A773C8u, 0x48B78E1Fu, "cop2/vfpu not lowered yet"); return;
L_08A773E8:
    aot_fpr[10] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(29105)));
    aot_gpr[16] = (static_cast<std::int32_t>(aot_gpr[14]) < 10458 ? 1u : 0u);
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18226), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18227), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[27]));
    goto L_08A77450;
L_08A77450:
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18228), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[25]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18230), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18231), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18232), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18233), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[26]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[27]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[30]));
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[15]));
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18218), aot_gpr[16]));
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[23]));
    aot_gpr[24] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[24]));
    aot_gpr[25] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[25]));
    aot_gpr[26] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[26]));
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[28]));
    aot_gpr[29] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[29]));
    aot_gpr[30] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[30]));
    goto L_08A77564;
L_08A77564:
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[15]));
    goto L_08A77568;
L_08A77568:
    aot_gpr[16] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18219), aot_gpr[16]));
    rt.unsupported(0x08A77570u, 0x0F73B8CEu, "control flow in delay slot"); return;
L_08A77574:
    if (static_cast<std::int32_t>(aot_gpr[3]) <= 0) {
    aot_gpr[12] = (aot_gpr[6] & 12790u);
        ctx.pc = 0x08A8C8E4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7757C;
L_08A7757C:
    { const std::uint32_t sc_address = aot_gpr[31] + static_cast<std::uint32_t>(-6909);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[11]);
      ctx.ll_reserved = false;
      aot_gpr[11] = (sc_reserved ? 1u : 0u); }
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    rt.unsupported(0x08A77584u, 0xB0FF992Du, "unknown not lowered yet"); return;
L_08A775AC:
    aot_gpr[28] = (rt.memory().aot_load_word_right(aot_gpr[22] + static_cast<std::uint32_t>(-18229), aot_gpr[28]));
    aot_gpr[27] = (rt.memory().aot_load_word_right(aot_gpr[9] + static_cast<std::uint32_t>(16754), aot_gpr[27]));
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[14]);
      if (branch_taken) {
          ctx.pc = 0x08A5B254u; return;
      }
      goto L_08A775C0;
    }
L_08A775C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[15]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0599_entry, 599u, 74u, 0x08A5B258u>(ctx, &aot_mem); return;
      }
      goto L_08A775C8;
    }
L_08A775C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[8]);
      if (branch_taken) {
          ctx.pc = 0x08A5B25Cu; return;
      }
      goto L_08A775D0;
    }
L_08A775D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[9]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0599_entry, 599u, 79u, 0x08A5B280u>(ctx, &aot_mem); return;
      }
      goto L_08A775D8;
    }
L_08A775D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[10]);
      if (branch_taken) {
          ctx.pc = 0x08A5B284u; return;
      }
      goto L_08A775E0;
    }
L_08A775E0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[11]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0599_entry, 599u, 81u, 0x08A5B288u>(ctx, &aot_mem); return;
      }
      goto L_08A775E8;
    }
L_08A775E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[20]);
      if (branch_taken) {
          ctx.pc = 0x08A5B28Cu; return;
      }
      goto L_08A775F0;
    }
L_08A775F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<24u>(aot_gpr[21]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0599_entry, 599u, 87u, 0x08A5B2B0u>(ctx, &aot_mem); return;
      }
      goto L_08A775F8;
    }
L_08A775F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<25u>(aot_gpr[12]);
      if (branch_taken) {
          ctx.pc = 0x08A5B2B4u; return;
      }
      goto L_08A77600;
    }
L_08A77600:
    PSPRECOMP_AOT_STORE8(aot_gpr[28] + static_cast<std::uint32_t>(-28889), static_cast<std::uint8_t>(aot_gpr[16]));
    ctx.set_vfpu_scalar_bits_ct<25u>(aot_gpr[13]);
    PSPRECOMP_AOT_STORE8(aot_gpr[28] + static_cast<std::uint32_t>(-28890), static_cast<std::uint8_t>(aot_gpr[16]));
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A77614u, 0x032B6BCCu, "syscall not lowered yet"); return;
L_08A77618:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) <= 0;
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(31924))))));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0633_entry, 633u, 52u, 0x08A7D768u>(ctx, &aot_mem); return;
      }
      goto L_08A77620;
    }
L_08A77620:
    rt.unsupported(0x08A77620u, 0x739BBFE5u, "unknown not lowered yet"); return;
L_08A7763C:
    { const std::uint32_t sc_address = aot_gpr[8] + static_cast<std::uint32_t>(26543);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[29]);
      ctx.ll_reserved = false;
      aot_gpr[29] = (sc_reserved ? 1u : 0u); }
    { const std::uint32_t ll_address = aot_gpr[31] + static_cast<std::uint32_t>(13822);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(5549)));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[11];
    aot_gpr[29] = (rt.memory().aot_load_word_left(aot_gpr[21] + static_cast<std::uint32_t>(-9533), aot_gpr[29]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0601_entry, 601u, 115u, 0x08A5D67Cu>(ctx, &aot_mem); return;
      }
      goto L_08A77650;
    }
L_08A77650:
    rt.unsupported(0x08A77650u, 0xB4C78805u, "unknown not lowered yet"); return;
L_08A776B8:
    rt.unsupported(0x08A776B8u, 0x67A28016u, "vfpu1 not lowered yet"); return;
L_08A776BC:
    rt.unsupported(0x08A776BCu, 0x9D2A8957u, "unknown not lowered yet"); return;
L_08A776C0:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A776C4u, 0xB4769FB5u, "unknown not lowered yet"); return;
L_08A776D4:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<55u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<94u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[24]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[27] + static_cast<std::uint32_t>(17640), ctx.vfpu_scalar_bits_ct<59u>());
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 27u, 0x08A782E0u>(ctx, &aot_mem); return;
      }
      goto L_08A776E4;
    }
L_08A776E4:
    aot_gpr[18] = (rt.memory().aot_load_word_left(aot_gpr[8] + static_cast<std::uint32_t>(-31292), aot_gpr[18]));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[10];
    aot_gpr[22] = (static_cast<std::int32_t>(aot_gpr[26]) < -12903 ? 1u : 0u);
      if (branch_taken) {
          ctx.pc = 0x08A96654u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A776F0;
    }
L_08A776F0:
    aot_gpr[19] = (aot_gpr[12] & 23465u);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(22793), aot_gpr[26]);
    aot_gpr[28] = (aot_gpr[11] | 53540u);
    rt.unsupported(0x08A776FCu, 0x629D8A7Bu, "vfpu0 not lowered yet"); return;
L_08A77734:
    aot_gpr[26] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(-29020), aot_gpr[26]));
    if (aot_gpr[21] == aot_gpr[15]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26332), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
        (void)rt.invoke_chained_direct<&recomp_unit_0614_entry, 614u, 171u, 0x08A6AEC8u>(ctx, &aot_mem); return;
    }
    goto L_08A77740;
L_08A77740:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A77748u, 0x0902423Au, "control flow in delay slot"); return;
L_08A7774C:
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(6647), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0616_entry, 616u, 59u, 0x08A6C7F0u>(ctx, &aot_mem); return;
      }
      goto L_08A77754;
    }
L_08A77754:
    rt.unsupported(0x08A77754u, 0xD33176F0u, "vfpu4 not lowered yet"); return;
L_08A7775C:
    rt.unsupported(0x08A7775Cu, 0x66B01628u, "vfpu1 not lowered yet"); return;
L_08A77768:
    aot_gpr[21] = (aot_gpr[13] | 11700u);
    rt.unsupported(0x08A7776Cu, 0xB204657Fu, "unknown not lowered yet"); return;
L_08A777C8:
    rt.unsupported(0x08A777C8u, 0x70077C78u, "unknown not lowered yet"); return;
L_08A77800:
    { const std::uint32_t sc_address = 0u + static_cast<std::uint32_t>(22357);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[29]);
      ctx.ll_reserved = false;
      aot_gpr[29] = (sc_reserved ? 1u : 0u); }
    { const std::uint32_t ll_address = aot_gpr[15] + static_cast<std::uint32_t>(22511);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[12]) > 0;
    rt.unsupported(0x08A7780Cu, 0xD4A72172u, "vfpu not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 87u, 0x08A7BDD0u>(ctx, &aot_mem); return;
      }
      goto L_08A77810;
    }
L_08A77810:
    rt.unsupported(0x08A77810u, 0x78AF3BA2u, "unknown not lowered yet"); return;
L_08A77820:
    ctx.set_vfpu_scalar_bits_ct<26u>(PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(15324)));
    rt.unsupported(0x08A77824u, 0x04C56D5Bu, "regimm? not lowered yet"); return;
L_08A77834:
    rt.unsupported(0x08A77834u, 0xD36C7704u, "vfpu4 not lowered yet"); return;
L_08A77838:
    rt.memory().aot_store_word_left(aot_gpr[14] + static_cast<std::uint32_t>(-31080), aot_gpr[1]);
    if (static_cast<std::int32_t>(aot_gpr[10]) > 0) {
    // PSP CACHE is a no-op in coherent host memory.
        ctx.pc = 0x08A89910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A77844;
L_08A77844:
    rt.unsupported(0x08A77844u, 0xD65668F5u, "vfpu not lowered yet"); return;
L_08A77854:
    rt.unsupported(0x08A77854u, 0xB705AC6Fu, "unknown not lowered yet"); return;
L_08A7786C:
    rt.unsupported(0x08A7786Cu, 0x4C3B3C88u, "unknown not lowered yet"); return;
L_08A77870:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[20]) < -19873 ? 1u : 0u);
    rt.unsupported(0x08A77878u, 0x1B5272BDu, "control flow in delay slot"); return;
L_08A7787C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    rt.unsupported(0x08A77880u, 0xCE09B7E2u, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 9u, 0x08A580E8u>(ctx, &aot_mem); return;
      }
      goto L_08A77884;
    }
L_08A77884:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 5u, 4u);
      ctx.read_vfpu_vector_ct<7u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 68u, vfpu_side); }
    rt.unsupported(0x08A77888u, 0x784CD069u, "unknown not lowered yet"); return;
L_08A77898:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(31520), aot_gpr[3]));
    rt.unsupported(0x08A7789Cu, 0x78B6E1E0u, "unknown not lowered yet"); return;
L_08A778BC:
    rt.unsupported(0x08A778BCu, 0x4222F327u, "unknown not lowered yet"); return;
L_08A778C0:
    aot_gpr[22] = (aot_gpr[3] & 55449u);
    rt.unsupported(0x08A778C4u, 0x20D39C25u, "unknown not lowered yet"); return;
L_08A778E4:
    rt.unsupported(0x08A778E4u, 0x2159189Cu, "unknown not lowered yet"); return;
L_08A778F8:
    rt.unsupported(0x08A778F8u, 0x45EC864Fu, "cop1? not lowered yet"); return;
L_08A778FC:
    ctx.execute_vfpu_vminmax(9u, 76u, 106u, 2u, true);
    rt.unsupported(0x08A77900u, 0x7AF37362u, "unknown not lowered yet"); return;
L_08A77960:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A77964u, 0xD0582E1Bu, "vfpu4 not lowered yet"); return;
L_08A77980:
    rt.unsupported(0x08A77984u, 0x0491E10Cu, "control flow in delay slot"); return;
L_08A77988:
    rt.unsupported(0x08A77988u, 0xF35950C7u, "vfpu6 not lowered yet"); return;
L_08A779C4:
    aot_gpr[17] = (aot_gpr[18] | 17255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(23477), __builtin_bit_cast(std::uint32_t, aot_fpr[29]));
    { const std::uint32_t ll_address = aot_gpr[2] + static_cast<std::uint32_t>(11807);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    rt.unsupported(0x08A779D0u, 0xEE71A6CCu, "unknown not lowered yet"); return;
L_08A77B00:
    rt.unsupported(0x08A77B00u, 0x611C19C7u, "vfpu0 not lowered yet"); return;
L_08A77B24:
    rt.unsupported(0x08A77B24u, 0x21F369FBu, "unknown not lowered yet"); return;
L_08A77B38:
    aot_gpr[30] = (aot_gpr[7] + static_cast<std::uint32_t>(32057));
    aot_gpr[12] = (aot_gpr[11] ^ 32074u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) > 0;
    aot_gpr[25] = (static_cast<std::int32_t>(aot_gpr[14]) < -12638 ? 1u : 0u);
      if (branch_taken) {
          ctx.pc = 0x08A93860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A77B48;
    }
L_08A77B48:
    rt.unsupported(0x08A77B48u, 0x65C98524u, "vfpu1 not lowered yet"); return;
L_08A77B4C:
    rt.unsupported(0x08A77B50u, 0x5843C00Bu, "control flow in delay slot"); return;
L_08A77B54:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) > 0;
    { const std::uint32_t ll_address = aot_gpr[2] + static_cast<std::uint32_t>(-29862);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0614_entry, 614u, 24u, 0x08A6A324u>(ctx, &aot_mem); return;
      }
      goto L_08A77B5C;
    }
L_08A77B5C:
    rt.memory().aot_store_word_left(aot_gpr[24] + static_cast<std::uint32_t>(19445), aot_gpr[6]);
    rt.unsupported(0x08A77B60u, 0x75DA3523u, "unknown not lowered yet"); return;
L_08A77B68:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<91u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 4u>(vfpu_d); }
    rt.unsupported(0x08A77B6Cu, 0x66FD5A6Du, "vfpu1 not lowered yet"); return;
L_08A77BD4:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A77BD8u, 0x694A1E53u, "unknown not lowered yet"); return;
L_08A77BE4:
    rt.unsupported(0x08A77BE4u, 0xF32021C2u, "vfpu6 not lowered yet"); return;
L_08A77BEC:
    aot_gpr[31] = (0x08A77BF4u);
    { const bool branch_taken = static_cast<std::int32_t>(0u) >= 0;
    rt.unsupported(0x08A77BF0u, 0xF4D44ADFu, "vfpu not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 43u, 0x08A71364u>(ctx, &aot_mem); return;
      }
      goto L_08A77BF4;
    }
L_08A77BF0:
    rt.unsupported(0x08A77BF0u, 0xF4D44ADFu, "vfpu not lowered yet"); return;
L_08A77BF4:
    ctx.set_vfpu_scalar_bits_ct<47u>(PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-15040)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[25] + static_cast<std::uint32_t>(-1496)));
    rt.unsupported(0x08A77BFCu, 0x07E946FAu, "regimm? not lowered yet"); return;
L_08A77C1C:
    aot_gpr[27] = (aot_gpr[16] | 23984u);
    goto L_08A77C20;
L_08A77C20:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    rt.unsupported(0x08A77C24u, 0x7EA7FDD7u, "special3? not lowered yet"); return;
L_08A77C3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[26] + static_cast<std::uint32_t>(26245), aot_gpr[12]);
    aot_gpr[24] = (aot_gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08A77C44;
L_08A77C44:
    rt.unsupported(0x08A77C44u, 0x6E4C1A42u, "vfpu3 not lowered yet"); return;
L_08A77CE4:
    rt.unsupported(0x08A77CE4u, 0xEF788CCCu, "unknown not lowered yet"); return;
L_08A77CEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-1221), static_cast<std::uint8_t>(aot_gpr[30]));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-25250), aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(-7060);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(31395), static_cast<std::uint16_t>(aot_gpr[28]));
    ctx.set_vfpu_scalar_bits_ct<58u>(PSPRECOMP_AOT_LOAD32(0u + static_cast<std::uint32_t>(-5176)));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(11716);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    rt.unsupported(0x08A77D04u, 0x7ACC7EA3u, "unknown not lowered yet"); return;
L_08A77D48:
    rt.unsupported(0x08A77D48u, 0x22883442u, "unknown not lowered yet"); return;
L_08A77D64:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(-5023)));
    rt.unsupported(0x08A77D68u, 0x4D6EACF8u, "unknown not lowered yet"); return;
L_08A77DAC:
    { const std::uint32_t sc_address = aot_gpr[11] + static_cast<std::uint32_t>(-26191);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[29]);
      ctx.ll_reserved = false;
      aot_gpr[29] = (sc_reserved ? 1u : 0u); }
    aot_gpr[30] = (aot_gpr[23] ^ 41292u);
    rt.unsupported(0x08A77DB4u, 0xB61CBD22u, "unknown not lowered yet"); return;
L_08A77DD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-29541), __builtin_bit_cast(std::uint32_t, aot_fpr[11]));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[31];
    rt.unsupported(0x08A77DD8u, 0x73198C9Bu, "unknown not lowered yet"); return;
      if (branch_taken) {
          ctx.pc = 0x08A5B044u; return;
      }
      goto L_08A77DDC;
    }
L_08A77DDC:
    if (static_cast<std::int32_t>(aot_gpr[9]) <= 0) {
    PSPRECOMP_AOT_STORE8(aot_gpr[1] + static_cast<std::uint32_t>(6144), static_cast<std::uint8_t>(aot_gpr[21]));
        (void)rt.invoke_chained_direct<&recomp_unit_0633_entry, 633u, 87u, 0x08A7DDE0u>(ctx, &aot_mem); return;
    }
    goto L_08A77DE4;
L_08A77DE4:
    aot_gpr[26] = (static_cast<std::int32_t>(aot_gpr[28]) < 6144 ? 1u : 0u);
    rt.unsupported(0x08A77DE8u, 0x42641800u, "unknown not lowered yet"); return;
L_08A77E08:
    rt.unsupported(0x08A77E08u, 0x75F130B7u, "unknown not lowered yet"); return;
L_08A77E28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) > 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0615_entry, 615u, 68u, 0x08A6B92Cu>(ctx, &aot_mem); return;
      }
      goto L_08A77E30;
    }
L_08A77E30:
    // nop
    goto L_08A77E34;
L_08A77E34:
    rt.unsupported(0x08A77E38u, 0x08A67D34u, "control flow in delay slot"); return;
L_08A77ED4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A77EF8u, 0x00000001u, "special? not lowered yet"); return;
L_08A77F0C:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A77F1Cu, 0x41200000u, "unknown not lowered yet"); return;
L_08A77F34:
    rt.unsupported(0x08A77F34u, 0x00FF00FFu, "special? not lowered yet"); return;
L_08A77F40:
    rt.unsupported(0x08A77F40u, 0x010100FFu, "special? not lowered yet"); return;
L_08A77F74:
    rt.unsupported(0x08A77F78u, 0x08A77F3Du, "control flow in delay slot"); return;
L_08A77F78:
    rt.unsupported(0x08A77F7Cu, 0x08A77F3Du, "control flow in delay slot"); return;
L_08A77F84:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    (void)(0u >> (0u & 31u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A77FB0;
L_08A77FB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A77FD8;
L_08A77FD8:
    // nop
    // nop
    // nop
    // nop
    goto L_08A77FE8;
L_08A77FE8:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A77FFCu, 0x00000001u, "special? not lowered yet"); return;
}

void recomp_unit_0627(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0627_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_627(Runtime &runtime) {
    runtime.register_generated_unit(627u, 0x08A77000u, 4096u, &recomp_unit_0627, &recomp_unit_0627_entry);
    runtime.register_function(0x08A77000u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7700Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77038u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7703Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77060u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7706Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77084u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7708Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7709Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A770B0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A770B4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A770E0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77110u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77134u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77140u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77158u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7720Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77218u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77224u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77234u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7723Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77240u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77244u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7726Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A772D0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A772F4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A772FCu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77300u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77350u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77358u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7736Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77378u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77388u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77394u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A773A0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A773B8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A773E8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77450u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77564u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77568u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77574u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7757Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775ACu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775C0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775C8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775D0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775D8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775E0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775E8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775F0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A775F8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77600u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77618u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77620u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7763Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77650u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A776B8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A776BCu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A776C0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A776D4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A776E4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A776F0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77734u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77740u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7774Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77754u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7775Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77768u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A777C8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77800u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77810u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77820u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77834u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77838u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77844u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77854u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7786Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77870u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A7787Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77884u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77898u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A778BCu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A778C0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A778E4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A778F8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A778FCu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77960u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77980u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77988u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A779C4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B00u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B24u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B38u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B48u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B4Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B54u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B5Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77B68u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77BD4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77BE4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77BECu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77BF0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77BF4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77C1Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77C20u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77C3Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77C44u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77CE4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77CECu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77D48u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77D64u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77DACu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77DD0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77DDCu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77DE4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77E08u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77E28u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77E30u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77E34u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77ED4u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77F0Cu, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77F34u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77F40u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77F74u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77F78u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77F84u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77FB0u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77FD8u, &recomp_unit_0627, "recomp_unit_0627");
    runtime.register_function(0x08A77FE8u, &recomp_unit_0627, "recomp_unit_0627");
}
} // namespace psprecomp
